#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82D8AD10"))) PPC_WEAK_FUNC(sub_82D8AD10);
PPC_FUNC_IMPL(__imp__sub_82D8AD10) {
	PPC_FUNC_PROLOGUE();
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8AD18"))) PPC_WEAK_FUNC(sub_82D8AD18);
PPC_FUNC_IMPL(__imp__sub_82D8AD18) {
	PPC_FUNC_PROLOGUE();
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8AD20"))) PPC_WEAK_FUNC(sub_82D8AD20);
PPC_FUNC_IMPL(__imp__sub_82D8AD20) {
	PPC_FUNC_PROLOGUE();
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8AD28"))) PPC_WEAK_FUNC(sub_82D8AD28);
PPC_FUNC_IMPL(__imp__sub_82D8AD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D8AD30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d8ad58
	if (!ctx.cr6.eq) goto loc_82D8AD58;
loc_82D8AD4C:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D8AD58:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82d8ad4c
	if (!ctx.cr6.gt) goto loc_82D8AD4C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82d8ad4c
	if (!ctx.cr6.gt) goto loc_82D8AD4C;
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
	// li r6,10517
	ctx.r6.s64 = 10517;
	// li r4,260
	ctx.r4.s64 = 260;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82D8AD90;
	sub_82D85F40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bne cr6,0x82d8ada8
	if (!ctx.cr6.eq) goto loc_82D8ADA8;
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D8ADA8:
	// addis r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 65536;
	// addi r4,r4,-25624
	ctx.r4.s64 = ctx.r4.s64 + -25624;
	// bl 0x82de4888
	ctx.lr = 0x82D8ADB4;
	sub_82DE4888(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82de2e10
	ctx.lr = 0x82D8ADC4;
	sub_82DE2E10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8ae08
	if (!ctx.cr6.eq) goto loc_82D8AE08;
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// addi r9,r9,-25628
	ctx.r9.s64 = ctx.r9.s64 + -25628;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8adfc
	if (ctx.cr6.eq) goto loc_82D8ADFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82D8ADFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82D8AE08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8AE10"))) PPC_WEAK_FUNC(sub_82D8AE10);
PPC_FUNC_IMPL(__imp__sub_82D8AE10) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82d8ae48
	if (ctx.cr6.gt) goto loc_82D8AE48;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82d8aeb8
	goto loc_82D8AEB8;
loc_82D8AE48:
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r3,-25624
	ctx.r3.s64 = ctx.r3.s64 + -25624;
	// bl 0x82da4f70
	ctx.lr = 0x82D8AE58;
	sub_82DA4F70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8aeb8
	if (!ctx.cr6.eq) goto loc_82D8AEB8;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-25628
	ctx.r30.s64 = ctx.r30.s64 + -25628;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d8aeb4
	if (ctx.cr6.eq) goto loc_82D8AEB4;
loc_82D8AE74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de4848
	ctx.lr = 0x82D8AE7C;
	sub_82DE4848(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d8ae74
	if (!ctx.cr6.eq) goto loc_82D8AE74;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82D8AE90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82de4770
	ctx.lr = 0x82D8AE9C;
	sub_82DE4770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8aeb8
	if (!ctx.cr6.eq) goto loc_82D8AEB8;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d8ae90
	if (!ctx.cr6.eq) goto loc_82D8AE90;
loc_82D8AEB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D8AEB8:
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

__attribute__((alias("__imp__sub_82D8AED4"))) PPC_WEAK_FUNC(sub_82D8AED4);
PPC_FUNC_IMPL(__imp__sub_82D8AED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8AED8"))) PPC_WEAK_FUNC(sub_82D8AED8);
PPC_FUNC_IMPL(__imp__sub_82D8AED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d8aeec
	if (!ctx.cr6.eq) goto loc_82D8AEEC;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D8AEEC:
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r10,39932
	ctx.r10.u64 = ctx.r10.u64 | 39932;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8AF04"))) PPC_WEAK_FUNC(sub_82D8AF04);
PPC_FUNC_IMPL(__imp__sub_82D8AF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8AF08"))) PPC_WEAK_FUNC(sub_82D8AF08);
PPC_FUNC_IMPL(__imp__sub_82D8AF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D8AF10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d8af38
	if (!ctx.cr6.eq) goto loc_82D8AF38;
loc_82D8AF2C:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D8AF38:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d8af2c
	if (ctx.cr6.eq) goto loc_82D8AF2C;
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
	// li r6,10667
	ctx.r6.s64 = 10667;
	// li r4,260
	ctx.r4.s64 = 260;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82D8AF68;
	sub_82D85F40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bne cr6,0x82d8af80
	if (!ctx.cr6.eq) goto loc_82D8AF80;
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D8AF80:
	// addis r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 65536;
	// addi r4,r4,-25624
	ctx.r4.s64 = ctx.r4.s64 + -25624;
	// bl 0x82de4888
	ctx.lr = 0x82D8AF8C;
	sub_82DE4888(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82de49c8
	ctx.lr = 0x82D8AF9C;
	sub_82DE49C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8afe0
	if (!ctx.cr6.eq) goto loc_82D8AFE0;
	// addis r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 65536;
	// addi r9,r9,-25628
	ctx.r9.s64 = ctx.r9.s64 + -25628;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8afd4
	if (ctx.cr6.eq) goto loc_82D8AFD4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82D8AFD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82D8AFE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8AFE8"))) PPC_WEAK_FUNC(sub_82D8AFE8);
PPC_FUNC_IMPL(__imp__sub_82D8AFE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8AFF0"))) PPC_WEAK_FUNC(sub_82D8AFF0);
PPC_FUNC_IMPL(__imp__sub_82D8AFF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8AFF8"))) PPC_WEAK_FUNC(sub_82D8AFF8);
PPC_FUNC_IMPL(__imp__sub_82D8AFF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8B000"))) PPC_WEAK_FUNC(sub_82D8B000);
PPC_FUNC_IMPL(__imp__sub_82D8B000) {
	PPC_FUNC_PROLOGUE();
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8B008"))) PPC_WEAK_FUNC(sub_82D8B008);
PPC_FUNC_IMPL(__imp__sub_82D8B008) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d8b01c
	if (!ctx.cr6.eq) goto loc_82D8B01C;
loc_82D8B014:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D8B01C:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x82d8b03c
	if (ctx.cr6.eq) goto loc_82D8B03C;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// beq cr6,0x82d8b03c
	if (ctx.cr6.eq) goto loc_82D8B03C;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// beq cr6,0x82d8b03c
	if (ctx.cr6.eq) goto loc_82D8B03C;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// bne cr6,0x82d8b014
	if (!ctx.cr6.eq) goto loc_82D8B014;
loc_82D8B03C:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,38428
	ctx.r10.u64 = ctx.r10.u64 | 38428;
	// ori r9,r9,38432
	ctx.r9.u64 = ctx.r9.u64 | 38432;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// stwx r5,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8B05C"))) PPC_WEAK_FUNC(sub_82D8B05C);
PPC_FUNC_IMPL(__imp__sub_82D8B05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8B060"))) PPC_WEAK_FUNC(sub_82D8B060);
PPC_FUNC_IMPL(__imp__sub_82D8B060) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d8b07c
	if (ctx.cr6.eq) goto loc_82D8B07C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,38428
	ctx.r10.u64 = ctx.r10.u64 | 38428;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82D8B07C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,38432
	ctx.r10.u64 = ctx.r10.u64 | 38432;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8B09C"))) PPC_WEAK_FUNC(sub_82D8B09C);
PPC_FUNC_IMPL(__imp__sub_82D8B09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8B0A0"))) PPC_WEAK_FUNC(sub_82D8B0A0);
PPC_FUNC_IMPL(__imp__sub_82D8B0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r10,r10,38152
	ctx.r10.u64 = ctx.r10.u64 | 38152;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8B0B8"))) PPC_WEAK_FUNC(sub_82D8B0B8);
PPC_FUNC_IMPL(__imp__sub_82D8B0B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d8b0cc
	if (!ctx.cr6.eq) goto loc_82D8B0CC;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D8B0CC:
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r10,38152
	ctx.r10.u64 = ctx.r10.u64 | 38152;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8B0E4"))) PPC_WEAK_FUNC(sub_82D8B0E4);
PPC_FUNC_IMPL(__imp__sub_82D8B0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8B0E8"))) PPC_WEAK_FUNC(sub_82D8B0E8);
PPC_FUNC_IMPL(__imp__sub_82D8B0E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d8b0f8
	if (!ctx.cr6.eq) goto loc_82D8B0F8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D8B0F8:
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8B108"))) PPC_WEAK_FUNC(sub_82D8B108);
PPC_FUNC_IMPL(__imp__sub_82D8B108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82D8B110;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8B138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8b29c
	if (ctx.cr6.eq) goto loc_82D8B29C;
	// addis r30,r24,1
	ctx.r30.s64 = ctx.r24.s64 + 65536;
	// addi r30,r30,-26504
	ctx.r30.s64 = ctx.r30.s64 + -26504;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82da41c0
	ctx.lr = 0x82D8B154;
	sub_82DA41C0(ctx, base);
	// addis r26,r24,1
	ctx.r26.s64 = ctx.r24.s64 + 65536;
	// addi r26,r26,-26840
	ctx.r26.s64 = ctx.r26.s64 + -26840;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82d8b178
	if (!ctx.cr6.eq) goto loc_82D8B178;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d8b17c
	if (ctx.cr6.eq) goto loc_82D8B17C;
loc_82D8B178:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82D8B17C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8b294
	if (!ctx.cr6.eq) goto loc_82D8B294;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82d8b294
	if (ctx.cr6.eq) goto loc_82D8B294;
loc_82D8B194:
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8b288
	if (ctx.cr6.eq) goto loc_82D8B288;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82d8b26c
	if (ctx.cr6.eq) goto loc_82D8B26C;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8b220
	if (ctx.cr6.eq) goto loc_82D8B220;
	// lwz r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82d8b26c
	if (ctx.cr6.eq) goto loc_82D8B26C;
	// lwz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d8b288
	if (!ctx.cr6.gt) goto loc_82D8B288;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82D8B1F4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82d8b214
	if (ctx.cr6.eq) goto loc_82D8B214;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d8b1f4
	if (ctx.cr6.lt) goto loc_82D8B1F4;
	// b 0x82d8b288
	goto loc_82D8B288;
loc_82D8B214:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r25.u32);
	// b 0x82d8b288
	goto loc_82D8B288;
loc_82D8B220:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d8b25c
	if (ctx.cr6.eq) goto loc_82D8B25C;
	// lwz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82d8b288
	if (!ctx.cr6.gt) goto loc_82D8B288;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82D8B23C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82d8b26c
	if (ctx.cr6.eq) goto loc_82D8B26C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d8b23c
	if (ctx.cr6.lt) goto loc_82D8B23C;
	// b 0x82d8b288
	goto loc_82D8B288;
loc_82D8B25C:
	// lwz r11,320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// lwz r10,320(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 320);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d8b288
	if (!ctx.cr6.eq) goto loc_82D8B288;
loc_82D8B26C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82da4200
	ctx.lr = 0x82D8B274;
	sub_82DA4200(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82d9dc60
	ctx.lr = 0x82D8B27C;
	sub_82D9DC60(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x82da41c0
	ctx.lr = 0x82D8B288;
	sub_82DA41C0(ctx, base);
loc_82D8B288:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82d8b194
	if (!ctx.cr6.eq) goto loc_82D8B194;
loc_82D8B294:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82da4200
	ctx.lr = 0x82D8B29C;
	sub_82DA4200(ctx, base);
loc_82D8B29C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8b328
	if (!ctx.cr6.eq) goto loc_82D8B328;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8b2c0
	if (ctx.cr6.eq) goto loc_82D8B2C0;
	// lwz r3,4412(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4412);
	// bl 0x82da41c0
	ctx.lr = 0x82D8B2C0;
	sub_82DA41C0(ctx, base);
loc_82D8B2C0:
	// lwz r31,336(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 336);
	// addi r29,r24,336
	ctx.r29.s64 = ctx.r24.s64 + 336;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82d8b310
	if (ctx.cr6.eq) goto loc_82D8B310;
loc_82D8B2D0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8b304
	if (ctx.cr6.eq) goto loc_82D8B304;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9ae20
	ctx.lr = 0x82D8B2F0;
	sub_82D9AE20(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82d8b304
	if (!ctx.cr6.eq) goto loc_82D8B304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9dc60
	ctx.lr = 0x82D8B304;
	sub_82D9DC60(ctx, base);
loc_82D8B304:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82d8b2d0
	if (!ctx.cr6.eq) goto loc_82D8B2D0;
loc_82D8B310:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8b328
	if (ctx.cr6.eq) goto loc_82D8B328;
	// lwz r3,4412(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4412);
	// bl 0x82da4200
	ctx.lr = 0x82D8B328;
	sub_82DA4200(ctx, base);
loc_82D8B328:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8B334"))) PPC_WEAK_FUNC(sub_82D8B334);
PPC_FUNC_IMPL(__imp__sub_82D8B334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8B338"))) PPC_WEAK_FUNC(sub_82D8B338);
PPC_FUNC_IMPL(__imp__sub_82D8B338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D8B340;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,336(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// addi r29,r3,336
	ctx.r29.s64 = ctx.r3.s64 + 336;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82d8b388
	if (ctx.cr6.eq) goto loc_82D8B388;
loc_82D8B358:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9ae78
	ctx.lr = 0x82D8B368;
	sub_82D9AE78(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82d8b37c
	if (!ctx.cr6.eq) goto loc_82D8B37C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9dc60
	ctx.lr = 0x82D8B37C;
	sub_82D9DC60(ctx, base);
loc_82D8B37C:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82d8b358
	if (!ctx.cr6.eq) goto loc_82D8B358;
loc_82D8B388:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8B394"))) PPC_WEAK_FUNC(sub_82D8B394);
PPC_FUNC_IMPL(__imp__sub_82D8B394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8B398"))) PPC_WEAK_FUNC(sub_82D8B398);
PPC_FUNC_IMPL(__imp__sub_82D8B398) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82d8b3d8
	if (ctx.cr6.eq) goto loc_82D8B3D8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82d8b3d8
	if (ctx.cr6.lt) goto loc_82D8B3D8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,37792
	ctx.r11.u64 = ctx.r11.u64 | 37792;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82d8b3d8
	if (!ctx.cr6.lt) goto loc_82D8B3D8;
	// mulli r11,r4,112
	ctx.r11.s64 = ctx.r4.s64 * 112;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-28192
	ctx.r11.s64 = ctx.r11.s64 + -28192;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8B3D8:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8B3E0"))) PPC_WEAK_FUNC(sub_82D8B3E0);
PPC_FUNC_IMPL(__imp__sub_82D8B3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82D8B3E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,4416(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4416);
	// bl 0x82da41c0
	ctx.lr = 0x82D8B3FC;
	sub_82DA41C0(ctx, base);
	// addis r25,r26,1
	ctx.r25.s64 = ctx.r26.s64 + 65536;
	// addi r25,r25,-28212
	ctx.r25.s64 = ctx.r25.s64 + -28212;
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8b608
	if (!ctx.cr6.eq) goto loc_82D8B608;
	// addis r29,r26,1
	ctx.r29.s64 = ctx.r26.s64 + 65536;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r29,-28276
	ctx.r29.s64 = ctx.r29.s64 + -28276;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82d8b438
	if (!ctx.cr6.eq) goto loc_82D8B438;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d8b43c
	if (ctx.cr6.eq) goto loc_82D8B43C;
loc_82D8B438:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82D8B43C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8b608
	if (!ctx.cr6.eq) goto loc_82D8B608;
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r28,r31,24
	ctx.r28.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stb r11,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
	// beq cr6,0x82d8b464
	if (ctx.cr6.eq) goto loc_82D8B464;
	// lwz r3,4408(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4408);
	// bl 0x82da41c0
	ctx.lr = 0x82D8B464;
	sub_82DA41C0(ctx, base);
loc_82D8B464:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82d8b5f4
	if (ctx.cr6.eq) goto loc_82D8B5F4;
	// addis r30,r26,1
	ctx.r30.s64 = ctx.r26.s64 + 65536;
	// addi r30,r30,-28244
	ctx.r30.s64 = ctx.r30.s64 + -28244;
loc_82D8B478:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82d8b5ac
	if (ctx.cr6.gt) goto loc_82D8B5AC;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-19300
	ctx.r12.s64 = ctx.r12.s64 + -19300;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D8B4B4;
	case 1:
		goto loc_82D8B4D4;
	case 2:
		goto loc_82D8B500;
	case 3:
		goto loc_82D8B518;
	case 4:
		goto loc_82D8B53C;
	case 5:
		goto loc_82D8B560;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-19276(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19276);
	// lwz r22,-19244(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19244);
	// lwz r22,-19200(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19200);
	// lwz r22,-19176(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19176);
	// lwz r22,-19140(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19140);
	// lwz r22,-19104(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19104);
loc_82D8B4B4:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82d96718
	ctx.lr = 0x82D8B4D0;
	sub_82D96718(ctx, base);
	// b 0x82d8b5ac
	goto loc_82D8B5AC;
loc_82D8B4D4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82d960c8
	ctx.lr = 0x82D8B4E8;
	sub_82D960C8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8b52c
	if (ctx.cr6.eq) goto loc_82D8B52C;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// rlwinm r10,r10,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// b 0x82d8b5a8
	goto loc_82D8B5A8;
loc_82D8B500:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d96480
	ctx.lr = 0x82D8B514;
	sub_82D96480(ctx, base);
	// b 0x82d8b5ac
	goto loc_82D8B5AC;
loc_82D8B518:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d96480
	ctx.lr = 0x82D8B52C;
	sub_82D96480(ctx, base);
loc_82D8B52C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// rlwinm r10,r10,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// b 0x82d8b5a8
	goto loc_82D8B5A8;
loc_82D8B53C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d96480
	ctx.lr = 0x82D8B550;
	sub_82D96480(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// rlwinm r10,r10,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// b 0x82d8b5a8
	goto loc_82D8B5A8;
loc_82D8B560:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82d96e60
	ctx.lr = 0x82D8B578;
	sub_82D96E60(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8B59C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
loc_82D8B5A8:
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
loc_82D8B5AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82d8b478
	if (!ctx.cr6.eq) goto loc_82D8B478;
loc_82D8B5F4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stb r27,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r27.u8);
	// beq cr6,0x82d8b608
	if (ctx.cr6.eq) goto loc_82D8B608;
	// lwz r3,4408(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4408);
	// bl 0x82da4200
	ctx.lr = 0x82D8B608;
	sub_82DA4200(ctx, base);
loc_82D8B608:
	// lwz r3,4416(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4416);
	// bl 0x82da4200
	ctx.lr = 0x82D8B610;
	sub_82DA4200(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8B61C"))) PPC_WEAK_FUNC(sub_82D8B61C);
PPC_FUNC_IMPL(__imp__sub_82D8B61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8B620"))) PPC_WEAK_FUNC(sub_82D8B620);
PPC_FUNC_IMPL(__imp__sub_82D8B620) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d8b648
	if (!ctx.cr6.eq) goto loc_82D8B648;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82d8b750
	goto loc_82D8B750;
loc_82D8B648:
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r11,9920(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8b6a0
	if (ctx.cr6.eq) goto loc_82D8B6A0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,11339
	ctx.r6.s64 = 11339;
	// addi r5,r11,-848
	ctx.r5.s64 = ctx.r11.s64 + -848;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r4,428
	ctx.r4.s64 = 428;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82D8B680;
	sub_82D85F40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d8b694
	if (ctx.cr6.eq) goto loc_82D8B694;
	// bl 0x82d86f58
	ctx.lr = 0x82D8B68C;
	sub_82D86F58(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// b 0x82d8b738
	goto loc_82D8B738;
loc_82D8B694:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// b 0x82d8b738
	goto loc_82D8B738;
loc_82D8B6A0:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,-848
	ctx.r5.s64 = ctx.r11.s64 + -848;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x82d8b6f8
	if (ctx.cr6.eq) goto loc_82D8B6F8;
	// li r6,11343
	ctx.r6.s64 = 11343;
	// li r4,412
	ctx.r4.s64 = 412;
	// bl 0x82d85f40
	ctx.lr = 0x82D8B6CC;
	sub_82D85F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d8b730
	if (ctx.cr6.eq) goto loc_82D8B730;
	// bl 0x82da8228
	ctx.lr = 0x82D8B6DC;
	sub_82DA8228(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,-960
	ctx.r11.s64 = ctx.r11.s64 + -960;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82d8b734
	goto loc_82D8B734;
loc_82D8B6F8:
	// li r6,11347
	ctx.r6.s64 = 11347;
	// li r4,408
	ctx.r4.s64 = 408;
	// bl 0x82d85f40
	ctx.lr = 0x82D8B704;
	sub_82D85F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d8b730
	if (ctx.cr6.eq) goto loc_82D8B730;
	// bl 0x82da8228
	ctx.lr = 0x82D8B714;
	sub_82DA8228(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r11,-932
	ctx.r11.s64 = ctx.r11.s64 + -932;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82d8b734
	goto loc_82D8B734;
loc_82D8B730:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D8B734:
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82D8B738:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r12,-42
	ctx.r12.s64 = -42;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// addi r3,r11,42
	ctx.r3.s64 = ctx.r11.s64 + 42;
loc_82D8B750:
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

__attribute__((alias("__imp__sub_82D8B768"))) PPC_WEAK_FUNC(sub_82D8B768);
PPC_FUNC_IMPL(__imp__sub_82D8B768) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d8b77c
	if (!ctx.cr6.eq) goto loc_82D8B77C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D8B77C:
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8B790"))) PPC_WEAK_FUNC(sub_82D8B790);
PPC_FUNC_IMPL(__imp__sub_82D8B790) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8B798"))) PPC_WEAK_FUNC(sub_82D8B798);
PPC_FUNC_IMPL(__imp__sub_82D8B798) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8B7A0"))) PPC_WEAK_FUNC(sub_82D8B7A0);
PPC_FUNC_IMPL(__imp__sub_82D8B7A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8B7A8"))) PPC_WEAK_FUNC(sub_82D8B7A8);
PPC_FUNC_IMPL(__imp__sub_82D8B7A8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d8b7d0
	if (!ctx.cr6.eq) goto loc_82D8B7D0;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D8B7D0:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82d8b7ec
	if (ctx.cr6.eq) goto loc_82D8B7EC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,41688
	ctx.r11.u64 = ctx.r11.u64 | 41688;
	// stbx r10,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
loc_82D8B7EC:
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// li r5,124
	ctx.r5.s64 = 124;
	// addi r3,r3,-23844
	ctx.r3.s64 = ctx.r3.s64 + -23844;
	// bl 0x82cb1160
	ctx.lr = 0x82D8B7FC;
	sub_82CB1160(ctx, base);
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

__attribute__((alias("__imp__sub_82D8B810"))) PPC_WEAK_FUNC(sub_82D8B810);
PPC_FUNC_IMPL(__imp__sub_82D8B810) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d8b838
	if (!ctx.cr6.eq) goto loc_82D8B838;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D8B838:
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,-23844
	ctx.r11.s64 = ctx.r11.s64 + -23844;
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82D8B850;
	sub_82CB1160(ctx, base);
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

__attribute__((alias("__imp__sub_82D8B864"))) PPC_WEAK_FUNC(sub_82D8B864);
PPC_FUNC_IMPL(__imp__sub_82D8B864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8B868"))) PPC_WEAK_FUNC(sub_82D8B868);
PPC_FUNC_IMPL(__imp__sub_82D8B868) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8B870"))) PPC_WEAK_FUNC(sub_82D8B870);
PPC_FUNC_IMPL(__imp__sub_82D8B870) {
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

__attribute__((alias("__imp__sub_82D8B884"))) PPC_WEAK_FUNC(sub_82D8B884);
PPC_FUNC_IMPL(__imp__sub_82D8B884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8B888"))) PPC_WEAK_FUNC(sub_82D8B888);
PPC_FUNC_IMPL(__imp__sub_82D8B888) {
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

__attribute__((alias("__imp__sub_82D8B8A4"))) PPC_WEAK_FUNC(sub_82D8B8A4);
PPC_FUNC_IMPL(__imp__sub_82D8B8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8B8A8"))) PPC_WEAK_FUNC(sub_82D8B8A8);
PPC_FUNC_IMPL(__imp__sub_82D8B8A8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// blr 
	return;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 10, ctx.xer);
	// bgt cr6,0x82d8ba54
	if (ctx.cr6.gt) goto loc_82D8BA54;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-18204
	ctx.r12.s64 = ctx.r12.s64 + -18204;
	// rlwinm r0,r6,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r6.u64) {
	case 0:
		goto loc_82D8B950;
	case 1:
		goto loc_82D8B910;
	case 2:
		goto loc_82D8B920;
	case 3:
		goto loc_82D8B930;
	case 4:
		goto loc_82D8B940;
	case 5:
		goto loc_82D8B940;
	case 6:
		goto loc_82D8B950;
	case 7:
		goto loc_82D8B950;
	case 8:
		goto loc_82D8B950;
	case 9:
		goto loc_82D8B950;
	case 10:
		goto loc_82D8B950;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-18096(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18096);
	// lwz r22,-18160(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18160);
	// lwz r22,-18144(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18144);
	// lwz r22,-18128(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18128);
	// lwz r22,-18112(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18112);
	// lwz r22,-18112(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18112);
	// lwz r22,-18096(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18096);
	// lwz r22,-18096(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18096);
	// lwz r22,-18096(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18096);
	// lwz r22,-18096(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18096);
	// lwz r22,-18096(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18096);
loc_82D8B910:
	// li r10,8
	ctx.r10.s64 = 8;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8ba3c
	goto loc_82D8BA3C;
loc_82D8B920:
	// li r10,16
	ctx.r10.s64 = 16;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8ba3c
	goto loc_82D8BA3C;
loc_82D8B930:
	// li r10,24
	ctx.r10.s64 = 24;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8ba3c
	goto loc_82D8BA3C;
loc_82D8B940:
	// li r10,32
	ctx.r10.s64 = 32;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8ba3c
	goto loc_82D8BA3C;
loc_82D8B950:
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-18072
	ctx.r12.s64 = ctx.r12.s64 + -18072;
	// rlwinm r0,r6,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r22,-17864(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17864);
	// lwz r22,-17836(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17836);
	// lwz r22,-17836(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17836);
	// lwz r22,-17836(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17836);
	// lwz r22,-17836(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17836);
	// lwz r22,-17836(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17836);
	// lwz r22,-18028(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18028);
	// lwz r22,-17964(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17964);
	// lwz r22,-17940(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17940);
	// lwz r22,-17876(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17876);
	// lwz r22,-17876(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17876);
	// addi r10,r11,13
	ctx.r10.s64 = ctx.r11.s64 + 13;
	// lis r11,9362
	ctx.r11.s64 = 613548032;
	// ori r11,r11,18725
	ctx.r11.u64 = ctx.r11.u64 | 18725;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mulhwu r11,r10,r11
	ctx.r11.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r11.u32)) >> 32;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// mulhwu r10,r11,r9
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8ba3c
	goto loc_82D8BA3C;
	// addi r11,r11,63
	ctx.r11.s64 = ctx.r11.s64 + 63;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,6,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFFFC;
	// b 0x82d8ba3c
	goto loc_82D8BA3C;
	// addi r10,r11,27
	ctx.r10.s64 = ctx.r11.s64 + 27;
	// lis r11,9362
	ctx.r11.s64 = 613548032;
	// ori r11,r11,18725
	ctx.r11.u64 = ctx.r11.u64 | 18725;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mulhwu r11,r10,r11
	ctx.r11.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r11.u32)) >> 32;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mulli r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 * 448;
	// mulhwu r10,r11,r9
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// b 0x82d8ba3c
	goto loc_82D8BA3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D8BA3C:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8BA54:
	// li r3,25
	ctx.r3.s64 = 25;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8BA5C"))) PPC_WEAK_FUNC(sub_82D8BA5C);
PPC_FUNC_IMPL(__imp__sub_82D8BA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8BA60"))) PPC_WEAK_FUNC(sub_82D8BA60);
PPC_FUNC_IMPL(__imp__sub_82D8BA60) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82d8ba74
	if (!ctx.cr6.eq) goto loc_82D8BA74;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D8BA74:
	// cmplwi cr6,r6,10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 10, ctx.xer);
	// bgt cr6,0x82d8bb94
	if (ctx.cr6.gt) goto loc_82D8BB94;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-17772
	ctx.r12.s64 = ctx.r12.s64 + -17772;
	// rlwinm r0,r6,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r6.u64) {
	case 0:
		goto loc_82D8BAF4;
	case 1:
		goto loc_82D8BAC0;
	case 2:
		goto loc_82D8BAC8;
	case 3:
		goto loc_82D8BAD0;
	case 4:
		goto loc_82D8BAD8;
	case 5:
		goto loc_82D8BAD8;
	case 6:
		goto loc_82D8BAF4;
	case 7:
		goto loc_82D8BAF4;
	case 8:
		goto loc_82D8BAF4;
	case 9:
		goto loc_82D8BAF4;
	case 10:
		goto loc_82D8BAF4;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-17676(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17676);
	// lwz r22,-17728(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17728);
	// lwz r22,-17720(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17720);
	// lwz r22,-17712(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17712);
	// lwz r22,-17704(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17704);
	// lwz r22,-17704(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17704);
	// lwz r22,-17676(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17676);
	// lwz r22,-17676(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17676);
	// lwz r22,-17676(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17676);
	// lwz r22,-17676(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17676);
	// lwz r22,-17676(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17676);
loc_82D8BAC0:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x82d8badc
	goto loc_82D8BADC;
loc_82D8BAC8:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x82d8badc
	goto loc_82D8BADC;
loc_82D8BAD0:
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x82d8badc
	goto loc_82D8BADC;
loc_82D8BAD8:
	// li r10,32
	ctx.r10.s64 = 32;
loc_82D8BADC:
	// rldicl r11,r11,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 3) & 0x7FFFFFFFF;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldicr r11,r11,0,60
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFFFF8;
	// tdllei r10,0
	// divdu r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 / ctx.r10.u64;
	// b 0x82d8bb78
	goto loc_82D8BB78;
loc_82D8BAF4:
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-17652
	ctx.r12.s64 = ctx.r12.s64 + -17652;
	// rlwinm r0,r6,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r22,-17548(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17548);
	// lwz r22,-17516(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17516);
	// lwz r22,-17516(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17516);
	// lwz r22,-17516(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17516);
	// lwz r22,-17516(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17516);
	// lwz r22,-17516(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17516);
	// lwz r22,-17608(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17608);
	// lwz r22,-17596(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17596);
	// lwz r22,-17572(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17572);
	// lwz r22,-17560(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17560);
	// lwz r22,-17560(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17560);
	// mulli r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 * 14;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8bb78
	goto loc_82D8BB78;
	// lis r10,14563
	ctx.r10.s64 = 954400768;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// ori r10,r10,36409
	ctx.r10.u64 = ctx.r10.u64 | 36409;
	// mulhwu r11,r11,r10
	ctx.r11.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8bb78
	goto loc_82D8BB78;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// b 0x82d8bb78
	goto loc_82D8BB78;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D8BB78:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// divwu r11,r11,r5
	ctx.r11.u32 = ctx.r11.u32 / ctx.r5.u32;
	// twllei r5,0
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8BB94:
	// li r3,25
	ctx.r3.s64 = 25;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8BB9C"))) PPC_WEAK_FUNC(sub_82D8BB9C);
PPC_FUNC_IMPL(__imp__sub_82D8BB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8BBA0"))) PPC_WEAK_FUNC(sub_82D8BBA0);
PPC_FUNC_IMPL(__imp__sub_82D8BBA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// lfs f0,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f13,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8BBF4"))) PPC_WEAK_FUNC(sub_82D8BBF4);
PPC_FUNC_IMPL(__imp__sub_82D8BBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8BBF8"))) PPC_WEAK_FUNC(sub_82D8BBF8);
PPC_FUNC_IMPL(__imp__sub_82D8BBF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d87178
	sub_82D87178(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8BBFC"))) PPC_WEAK_FUNC(sub_82D8BBFC);
PPC_FUNC_IMPL(__imp__sub_82D8BBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8BC00"))) PPC_WEAK_FUNC(sub_82D8BC00);
PPC_FUNC_IMPL(__imp__sub_82D8BC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82D8BC08;
	__savegprlr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// bne cr6,0x82d8bc74
	if (!ctx.cr6.eq) goto loc_82D8BC74;
loc_82D8BC68:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82D8BC74:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8BC8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82d8bca4
	if (ctx.cr6.eq) goto loc_82D8BCA4;
loc_82D8BC98:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82D8BCA4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8bccc
	if (ctx.cr6.eq) goto loc_82D8BCCC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d8b108
	ctx.lr = 0x82D8BCC0;
	sub_82D8B108(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82d8bc98
	if (!ctx.cr6.eq) goto loc_82D8BC98;
loc_82D8BCCC:
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// bne cr6,0x82d8bd40
	if (!ctx.cr6.eq) goto loc_82D8BD40;
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d8bcec
	if (!ctx.cr6.eq) goto loc_82D8BCEC;
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x82d8bd40
	goto loc_82D8BD40;
loc_82D8BCEC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8bd34
	if (ctx.cr6.eq) goto loc_82D8BD34;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8bd34
	if (!ctx.cr6.eq) goto loc_82D8BD34;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
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
	ctx.lr = 0x82D8BD30;
	sub_82D9CB18(ctx, base);
	// b 0x82d8be5c
	goto loc_82D8BE5C;
loc_82D8BD34:
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x82d8be5c
	if (ctx.cr6.eq) goto loc_82D8BE5C;
loc_82D8BD40:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// stw r29,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r29.u32);
	// beq cr6,0x82d8bd78
	if (ctx.cr6.eq) goto loc_82D8BD78;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82d8bc68
	if (ctx.cr6.lt) goto loc_82D8BC68;
	// lwz r11,328(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 328);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82d8bc68
	if (!ctx.cr6.lt) goto loc_82D8BC68;
	// lwz r10,332(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// mulli r11,r30,440
	ctx.r11.s64 = ctx.r30.s64 * 440;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9dc60
	ctx.lr = 0x82D8BD74;
	sub_82D9DC60(ctx, base);
	// b 0x82d8be1c
	goto loc_82D8BE1C;
loc_82D8BD78:
	// addi r10,r28,776
	ctx.r10.s64 = ctx.r28.s64 + 776;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d8bd98
	if (!ctx.cr6.eq) goto loc_82D8BD98;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x82d8bd9c
	if (ctx.cr6.eq) goto loc_82D8BD9C;
loc_82D8BD98:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82D8BD9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8bdb0
	if (!ctx.cr6.eq) goto loc_82D8BDB0;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82d8be1c
	goto loc_82D8BE1C;
loc_82D8BDB0:
	// addi r11,r28,1216
	ctx.r11.s64 = ctx.r28.s64 + 1216;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d8bdd0
	if (!ctx.cr6.eq) goto loc_82D8BDD0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x82d8bdd4
	if (ctx.cr6.eq) goto loc_82D8BDD4;
loc_82D8BDD0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82D8BDD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8bdec
	if (ctx.cr6.eq) goto loc_82D8BDEC;
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82D8BDEC:
	// lwz r11,1220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1220);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// li r8,1
	ctx.r8.s64 = 1;
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
	ctx.lr = 0x82D8BE1C;
	sub_82D9CB18(ctx, base);
loc_82D8BE1C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r28,336
	ctx.r11.s64 = ctx.r28.s64 + 336;
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
loc_82D8BE5C:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r10,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8be80
	if (ctx.cr6.eq) goto loc_82D8BE80;
	// lwz r11,320(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8be8c
	if (ctx.cr6.eq) goto loc_82D8BE8C;
	// lwz r30,164(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// b 0x82d8be84
	goto loc_82D8BE84;
loc_82D8BE80:
	// lwz r30,164(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
loc_82D8BE84:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d8be90
	if (!ctx.cr6.eq) goto loc_82D8BE90;
loc_82D8BE8C:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82D8BE90:
	// rlwinm r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8bea8
	if (!ctx.cr6.eq) goto loc_82D8BEA8;
	// lwz r11,1236(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1236);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82d8bf10
	if (!ctx.cr6.eq) goto loc_82D8BF10;
loc_82D8BEA8:
	// rlwinm r11,r10,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8bf10
	if (ctx.cr6.eq) goto loc_82D8BF10;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82d8bed4
	if (!ctx.cr6.eq) goto loc_82D8BED4;
	// addis r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 65536;
	// addi r3,r3,-26444
	ctx.r3.s64 = ctx.r3.s64 + -26444;
	// bl 0x82da9090
	ctx.lr = 0x82D8BECC;
	sub_82DA9090(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x82d8bf10
	goto loc_82D8BF10;
loc_82D8BED4:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82d8bef0
	if (!ctx.cr6.eq) goto loc_82D8BEF0;
	// addis r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 65536;
	// addi r3,r3,-25900
	ctx.r3.s64 = ctx.r3.s64 + -25900;
	// bl 0x82da9090
	ctx.lr = 0x82D8BEE8;
	sub_82DA9090(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x82d8bf10
	goto loc_82D8BF10;
loc_82D8BEF0:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82d8bf0c
	if (!ctx.cr6.eq) goto loc_82D8BF0C;
	// addis r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 65536;
	// addi r3,r3,-26172
	ctx.r3.s64 = ctx.r3.s64 + -26172;
	// bl 0x82da9090
	ctx.lr = 0x82D8BF04;
	sub_82DA9090(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x82d8bf10
	goto loc_82D8BF10;
loc_82D8BF0C:
	// li r26,25
	ctx.r26.s64 = 25;
loc_82D8BF10:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r4,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8bf38
	if (!ctx.cr6.eq) goto loc_82D8BF38;
	// lwz r11,1232(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1232);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8bf38
	if (ctx.cr6.eq) goto loc_82D8BF38;
	// lwz r3,1232(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1232);
	// b 0x82d8bf4c
	goto loc_82D8BF4C;
loc_82D8BF38:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82d8bf84
	if (!ctx.cr6.eq) goto loc_82D8BF84;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,37328
	ctx.r11.u64 = ctx.r11.u64 | 37328;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
loc_82D8BF4C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r7,64(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8BF70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8bf84
	if (!ctx.cr6.eq) goto loc_82D8BF84;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82d8bfbc
	if (ctx.cr6.eq) goto loc_82D8BFBC;
loc_82D8BF84:
	// lwz r3,1264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1264);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lwz r7,64(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8BFB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8c0dc
	if (!ctx.cr6.eq) goto loc_82D8C0DC;
loc_82D8BFBC:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,1264(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1264);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d8bfdc
	if (!ctx.cr6.eq) goto loc_82D8BFDC;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_82D8BFDC:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8c090
	if (ctx.cr6.eq) goto loc_82D8C090;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,1264(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1264);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d8c024
	if (!ctx.cr6.eq) goto loc_82D8C024;
	// stw r25,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r25.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r29,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r29.u32);
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82D8C024:
	// lwz r11,316(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 316);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r25,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r25.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r29,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r29.u32);
	// ble cr6,0x82d8c0d4
	if (!ctx.cr6.gt) goto loc_82D8C0D4;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r9,r9,-12
	ctx.r9.s64 = ctx.r9.s64 + -12;
loc_82D8C054:
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// stwx r7,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwzx r7,r11,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,76(r7)
	PPC_STORE_U32(ctx.r7.u32 + 76, ctx.r8.u32);
	// blt cr6,0x82d8c054
	if (ctx.cr6.lt) goto loc_82D8C054;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82D8C090:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82d8c0d4
	if (!ctx.cr6.gt) goto loc_82D8C0D4;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
loc_82D8C0A8:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,76(r8)
	PPC_STORE_U32(ctx.r8.u32 + 76, ctx.r7.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r25,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r25.u32);
	// blt cr6,0x82d8c0a8
	if (ctx.cr6.lt) goto loc_82D8C0A8;
loc_82D8C0D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
loc_82D8C0DC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8C0E4"))) PPC_WEAK_FUNC(sub_82D8C0E4);
PPC_FUNC_IMPL(__imp__sub_82D8C0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8C0E8"))) PPC_WEAK_FUNC(sub_82D8C0E8);
PPC_FUNC_IMPL(__imp__sub_82D8C0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82D8C0F0;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r27,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r27.u32);
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82d8c12c
	if (!ctx.cr6.eq) goto loc_82D8C12C;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D8C12C:
	// lwz r11,272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82d8c148
	if (!ctx.cr6.eq) goto loc_82D8C148;
loc_82D8C138:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D8C148:
	// rlwinm r11,r30,0,25,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x60;
	// li r15,1
	ctx.r15.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8c1a4
	if (!ctx.cr6.eq) goto loc_82D8C1A4;
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,0,25,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x78;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// or r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 | ctx.r30.u64;
	// bl 0x82d88da0
	ctx.lr = 0x82D8C178;
	sub_82D88DA0(ctx, base);
	// rlwinm r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8c1a4
	if (ctx.cr6.eq) goto loc_82D8C1A4;
	// rlwinm r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x82d8c198
	if (!ctx.cr6.eq) goto loc_82D8C198;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82D8C198:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d8c1a4
	if (!ctx.cr6.eq) goto loc_82D8C1A4;
	// rlwimi r30,r15,6,25,26
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r15.u32, 6) & 0x60) | (ctx.r30.u64 & 0xFFFFFFFFFFFFFF9F);
loc_82D8C1A4:
	// rlwinm r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	// lis r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r14,r10,37328
	ctx.r14.u64 = ctx.r10.u64 | 37328;
	// beq cr6,0x82d8c1e0
	if (ctx.cr6.eq) goto loc_82D8C1E0;
	// lwzx r10,r25,r14
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r14.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d8c1d4
	if (!ctx.cr6.eq) goto loc_82D8C1D4;
	// li r3,49
	ctx.r3.s64 = 49;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D8C1D4:
	// rlwinm r11,r30,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// b 0x82d8c1e8
	goto loc_82D8C1E8;
loc_82D8C1E0:
	// lwz r18,1232(r25)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1232);
	// ori r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 | 32;
loc_82D8C1E8:
	// rlwinm r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d8c200
	if (!ctx.cr6.eq) goto loc_82D8C200;
	// lwz r10,288(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// rlwinm r10,r10,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82D8C200:
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8c214
	if (ctx.cr6.eq) goto loc_82D8C214;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// b 0x82d8c218
	goto loc_82D8C218;
loc_82D8C214:
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_82D8C218:
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d8c230
	if (!ctx.cr6.eq) goto loc_82D8C230;
	// lwz r10,288(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82D8C230:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8c248
	if (ctx.cr6.eq) goto loc_82D8C248;
	// rlwimi r11,r15,1,29,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r15.u32, 1) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// b 0x82d8c264
	goto loc_82D8C264;
loc_82D8C248:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8c260
	if (ctx.cr6.eq) goto loc_82D8C260;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r26,r11,4
	ctx.r26.u64 = ctx.r11.u64 | 4;
	// b 0x82d8c264
	goto loc_82D8C264;
loc_82D8C260:
	// ori r26,r11,1
	ctx.r26.u64 = ctx.r11.u64 | 1;
loc_82D8C264:
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8c278
	if (ctx.cr6.eq) goto loc_82D8C278;
	// rlwimi r26,r15,9,22,23
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r15.u32, 9) & 0x300) | (ctx.r26.u64 & 0xFFFFFFFFFFFFFCFF);
loc_82D8C278:
	// lwz r24,260(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// cmpwi cr6,r24,16
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 16, ctx.xer);
	// ble cr6,0x82d8c2c4
	if (!ctx.cr6.gt) goto loc_82D8C2C4;
	// lwz r11,144(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8c2a8
	if (ctx.cr6.eq) goto loc_82D8C2A8;
	// lwz r5,256(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r18,24
	ctx.r3.s64 = ctx.r18.s64 + 24;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8C2A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d8c2ac
	goto loc_82D8C2AC;
loc_82D8C2A8:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_82D8C2AC:
	// cmpw cr6,r24,r3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82d8c2c4
	if (!ctx.cr6.gt) goto loc_82D8C2C4;
	// li r3,75
	ctx.r3.s64 = 75;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D8C2C4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r23,r11,37796
	ctx.r23.u64 = ctx.r11.u64 | 37796;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r20,19
	ctx.r20.s64 = 19;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// lfs f31,14068(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14068);
	ctx.f31.f64 = double(temp.f32);
	// addi r17,r11,-848
	ctx.r17.s64 = ctx.r11.s64 + -848;
	// lis r16,-31909
	ctx.r16.s64 = -2091188224;
	// ble cr6,0x82d8c450
	if (!ctx.cr6.gt) goto loc_82D8C450;
	// lwz r11,144(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8c310
	if (ctx.cr6.eq) goto loc_82D8C310;
	// lwz r5,256(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r18,24
	ctx.r3.s64 = ctx.r18.s64 + 24;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8C30C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d8c314
	goto loc_82D8C314;
loc_82D8C310:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_82D8C314:
	// cmpw cr6,r24,r3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82d8c450
	if (!ctx.cr6.gt) goto loc_82D8C450;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d8c360
	if (!ctx.cr6.eq) goto loc_82D8C360;
	// lwz r11,19872(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1732
	ctx.r6.s64 = 1732;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// li r4,316
	ctx.r4.s64 = 316;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82D8C348;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d8c138
	if (ctx.cr6.eq) goto loc_82D8C138;
	// bl 0x82de5150
	ctx.lr = 0x82D8C354;
	sub_82DE5150(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d8c138
	if (ctx.cr6.eq) goto loc_82D8C138;
loc_82D8C360:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r24,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r24.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d8c3ac
	if (!ctx.cr6.eq) goto loc_82D8C3AC;
	// rlwinm r11,r26,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8c3a4
	if (!ctx.cr6.eq) goto loc_82D8C3A4;
	// lwz r11,19872(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1743
	ctx.r6.s64 = 1743;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82D8C398;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// beq cr6,0x82d8c138
	if (ctx.cr6.eq) goto loc_82D8C138;
loc_82D8C3A4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d8c3b4
	if (ctx.cr6.eq) goto loc_82D8C3B4;
loc_82D8C3AC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82da4448
	ctx.lr = 0x82D8C3B4;
	sub_82DA4448(ctx, base);
loc_82D8C3B4:
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// addis r3,r25,1
	ctx.r3.s64 = ctx.r25.s64 + 65536;
	// li r6,0
	ctx.r6.s64 = 0;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// add r11,r25,r23
	ctx.r11.u64 = ctx.r25.u64 + ctx.r23.u64;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// addi r3,r3,-27160
	ctx.r3.s64 = ctx.r3.s64 + -27160;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r5,r10,21574
	ctx.r5.s64 = ctx.r10.s64 + 21574;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r10,292(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// lwz r10,272(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r19,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r19.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r10,256(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// stw r24,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r24.u32);
	// stw r19,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r19.u32);
	// stw r20,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r20.u32);
	// stw r25,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r25.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// bl 0x82d86660
	ctx.lr = 0x82D8C43C;
	sub_82D86660(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r3.u32);
	// beq cr6,0x82d8c138
	if (ctx.cr6.eq) goto loc_82D8C138;
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// b 0x82d8c454
	goto loc_82D8C454;
loc_82D8C450:
	// mr r21,r15
	ctx.r21.u64 = ctx.r15.u64;
loc_82D8C454:
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x82d8c610
	if (!ctx.cr6.gt) goto loc_82D8C610;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r27,168
	ctx.r27.s64 = 168;
	// ori r22,r11,38244
	ctx.r22.u64 = ctx.r11.u64 | 38244;
loc_82D8C46C:
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// bne cr6,0x82d8c484
	if (!ctx.cr6.eq) goto loc_82D8C484;
	// lwz r11,604(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82d8c488
	goto loc_82D8C488;
loc_82D8C484:
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
loc_82D8C488:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,296
	ctx.r5.s64 = 296;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82D8C498;
	sub_82CB1160(ctx, base);
	// lwz r11,176(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 176);
	// stw r24,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r24.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// beq cr6,0x82d8c4d4
	if (ctx.cr6.eq) goto loc_82D8C4D4;
	// lis r10,-32034
	ctx.r10.s64 = -2099380224;
	// addi r3,r18,24
	ctx.r3.s64 = ctx.r18.s64 + 24;
	// addi r10,r10,3160
	ctx.r10.s64 = ctx.r10.s64 + 3160;
	// stw r10,28(r18)
	PPC_STORE_U32(ctx.r18.u32 + 28, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8C4CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stbx r15,r25,r22
	PPC_STORE_U8(ctx.r25.u32 + ctx.r22.u32, ctx.r15.u8);
	// b 0x82d8c4dc
	goto loc_82D8C4DC;
loc_82D8C4D4:
	// lwzx r3,r25,r14
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r14.u32);
	// bl 0x82de4c78
	ctx.lr = 0x82D8C4DC;
	sub_82DE4C78(ctx, base);
loc_82D8C4DC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8c64c
	if (!ctx.cr6.eq) goto loc_82D8C64C;
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// ble cr6,0x82d8c4f8
	if (!ctx.cr6.gt) goto loc_82D8C4F8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r11,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r11.u32);
	// b 0x82d8c544
	goto loc_82D8C544;
loc_82D8C4F8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r10,28
	ctx.r30.s64 = ctx.r10.s64 + 28;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8c548
	if (!ctx.cr6.eq) goto loc_82D8C548;
	// rlwinm r11,r26,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8c548
	if (!ctx.cr6.eq) goto loc_82D8C548;
	// lwz r11,19872(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1832
	ctx.r6.s64 = 1832;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82D8C538;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82d8c138
	if (ctx.cr6.eq) goto loc_82D8C138;
loc_82D8C544:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82D8C548:
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8c564
	if (ctx.cr6.eq) goto loc_82D8C564;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82da4448
	ctx.lr = 0x82D8C560;
	sub_82DA4448(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82D8C564:
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// add r11,r25,r23
	ctx.r11.u64 = ctx.r25.u64 + ctx.r23.u64;
	// cmpw cr6,r28,r21
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r21.s32, ctx.xer);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,72(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 72, temp.u32);
	// lwz r10,292(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,84(r9)
	PPC_STORE_U32(ctx.r9.u32 + 84, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r26.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r19,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r19.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r9,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// lwz r10,256(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r24,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r24.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r19,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r19.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r20,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r20.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r25,244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 244, ctx.r25.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,100(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 100, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,104(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r31.u32);
	// blt cr6,0x82d8c46c
	if (ctx.cr6.lt) goto loc_82D8C46C;
	// lwz r27,604(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
loc_82D8C610:
	// lwz r6,284(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 284);
	// lwz r4,280(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82d8c628
	if (!ctx.cr6.eq) goto loc_82D8C628;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
loc_82D8C628:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8C644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
loc_82D8C64C:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8C658"))) PPC_WEAK_FUNC(sub_82D8C658);
PPC_FUNC_IMPL(__imp__sub_82D8C658) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,1552
	ctx.r11.s64 = ctx.r3.s64 + 1552;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r3,1564
	ctx.r10.s64 = ctx.r3.s64 + 1564;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8C680"))) PPC_WEAK_FUNC(sub_82D8C680);
PPC_FUNC_IMPL(__imp__sub_82D8C680) {
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

__attribute__((alias("__imp__sub_82D8C694"))) PPC_WEAK_FUNC(sub_82D8C694);
PPC_FUNC_IMPL(__imp__sub_82D8C694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8C698"))) PPC_WEAK_FUNC(sub_82D8C698);
PPC_FUNC_IMPL(__imp__sub_82D8C698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82D8C6A0;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// bl 0x82d888c0
	ctx.lr = 0x82D8C6BC;
	sub_82D888C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8c9e4
	if (!ctx.cr6.eq) goto loc_82D8C9E4;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// blt cr6,0x82d8c9e0
	if (ctx.cr6.lt) goto loc_82D8C9E0;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82d8c9e0
	if (!ctx.cr6.lt) goto loc_82D8C9E0;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bne cr6,0x82d8c6e4
	if (!ctx.cr6.eq) goto loc_82D8C6E4;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_82D8C6E4:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8c90c
	if (ctx.cr6.eq) goto loc_82D8C90C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,38244
	ctx.r11.u64 = ctx.r11.u64 | 38244;
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8c710
	if (ctx.cr6.eq) goto loc_82D8C710;
	// li r3,49
	ctx.r3.s64 = 49;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82D8C710:
	// lwz r3,1232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8c750
	if (ctx.cr6.eq) goto loc_82D8C750;
	// lis r11,-32034
	ctx.r11.s64 = -2099380224;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x82d8c740
	if (!ctx.cr6.eq) goto loc_82D8C740;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82D8C740:
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8C74C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d8c760
	goto loc_82D8C760;
loc_82D8C750:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8c760
	if (ctx.cr6.eq) goto loc_82D8C760;
	// bl 0x82de6b10
	ctx.lr = 0x82D8C760;
	sub_82DE6B10(ctx, base);
loc_82D8C760:
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8c79c
	if (ctx.cr6.eq) goto loc_82D8C79C;
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
	// bne cr6,0x82d8c790
	if (!ctx.cr6.eq) goto loc_82D8C790;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82D8C790:
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8C79C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D8C79C:
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// lwz r25,1244(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1244);
	// addi r30,r31,1244
	ctx.r30.s64 = ctx.r31.s64 + 1244;
	// addi r28,r28,-27100
	ctx.r28.s64 = ctx.r28.s64 + -27100;
	// lwz r24,1240(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1240);
	// addi r29,r31,1240
	ctx.r29.s64 = ctx.r31.s64 + 1240;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r23,0(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8c83c
	if (ctx.cr6.eq) goto loc_82D8C83C;
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
	// bne cr6,0x82d8c7e8
	if (!ctx.cr6.eq) goto loc_82D8C7E8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82D8C7E8:
	// lwz r10,1272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1272);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r22,1276(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1276);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r7,1256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1256);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// divwu r22,r22,r10
	ctx.r22.u32 = ctx.r22.u32 / ctx.r10.u32;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// twllei r10,0
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8C82C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d8c8a4
	if (ctx.cr6.eq) goto loc_82D8C8A4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82D8C83C:
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8c8a4
	if (ctx.cr6.eq) goto loc_82D8C8A4;
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
	// bne cr6,0x82d8c868
	if (!ctx.cr6.eq) goto loc_82D8C868;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82D8C868:
	// lwz r9,1272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1272);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r10,1276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1276);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r7,1256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1256);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// twllei r9,0
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8C89C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8c9e4
	if (!ctx.cr6.eq) goto loc_82D8C9E4;
loc_82D8C8A4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d8c93c
	if (!ctx.cr6.eq) goto loc_82D8C93C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d8c93c
	if (!ctx.cr6.eq) goto loc_82D8C93C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82d8c93c
	if (!ctx.cr6.eq) goto loc_82D8C93C;
	// lwz r3,1232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8c91c
	if (ctx.cr6.eq) goto loc_82D8C91C;
	// lis r11,-32034
	ctx.r11.s64 = -2099380224;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x82d8c8f8
	if (!ctx.cr6.eq) goto loc_82D8C8F8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82D8C8F8:
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8C904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8c9e4
	if (!ctx.cr6.eq) goto loc_82D8C9E4;
loc_82D8C90C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r26.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82D8C91C:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8c90c
	if (ctx.cr6.eq) goto loc_82D8C90C;
	// bl 0x82de6988
	ctx.lr = 0x82D8C92C;
	sub_82DE6988(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d8c90c
	if (ctx.cr6.eq) goto loc_82D8C90C;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82D8C93C:
	// lwz r3,1232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8c97c
	if (ctx.cr6.eq) goto loc_82D8C97C;
	// lis r11,-32034
	ctx.r11.s64 = -2099380224;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x82d8c96c
	if (!ctx.cr6.eq) goto loc_82D8C96C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82D8C96C:
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8C978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d8c98c
	goto loc_82D8C98C;
loc_82D8C97C:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8c98c
	if (ctx.cr6.eq) goto loc_82D8C98C;
	// bl 0x82de6b10
	ctx.lr = 0x82D8C98C;
	sub_82DE6B10(ctx, base);
loc_82D8C98C:
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8c9c8
	if (ctx.cr6.eq) goto loc_82D8C9C8;
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
	// bne cr6,0x82d8c9bc
	if (!ctx.cr6.eq) goto loc_82D8C9BC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82D8C9BC:
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8C9C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D8C9C8:
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r23,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r23.u32);
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82D8C9E0:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82D8C9E4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8C9EC"))) PPC_WEAK_FUNC(sub_82D8C9EC);
PPC_FUNC_IMPL(__imp__sub_82D8C9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8C9F0"))) PPC_WEAK_FUNC(sub_82D8C9F0);
PPC_FUNC_IMPL(__imp__sub_82D8C9F0) {
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
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8ca28
	if (ctx.cr6.eq) goto loc_82D8CA28;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82D8CA28:
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// ori r11,r11,38436
	ctx.r11.u64 = ctx.r11.u64 | 38436;
	// stwx r4,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u32);
	// bgt cr6,0x82d8cc54
	if (ctx.cr6.gt) goto loc_82D8CC54;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-13740
	ctx.r12.s64 = ctx.r12.s64 + -13740;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82D8CA74;
	case 1:
		goto loc_82D8CA8C;
	case 2:
		goto loc_82D8CA98;
	case 3:
		goto loc_82D8CAD0;
	case 4:
		goto loc_82D8CB0C;
	case 5:
		goto loc_82D8CB14;
	case 6:
		goto loc_82D8CB1C;
	case 7:
		goto loc_82D8CBC8;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-13708(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -13708);
	// lwz r22,-13684(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -13684);
	// lwz r22,-13672(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -13672);
	// lwz r22,-13616(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -13616);
	// lwz r22,-13556(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -13556);
	// lwz r22,-13548(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -13548);
	// lwz r22,-13540(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -13540);
	// lwz r22,-13368(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -13368);
loc_82D8CA74:
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
loc_82D8CA8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r11.u32);
	// b 0x82d8cc54
	goto loc_82D8CC54;
loc_82D8CA98:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r10,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r10.u32);
	// lfs f1,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d89be0
	ctx.lr = 0x82D8CAC0;
	sub_82D89BE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82d8cc48
	goto loc_82D8CC48;
loc_82D8CAD0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f11,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f2,f11
	ctx.f2.f64 = ctx.f11.f64;
	// stw r10,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r10.u32);
	// lfs f10,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f10.f64 = double(temp.f32);
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// bl 0x82d89be0
	ctx.lr = 0x82D8CB00;
	sub_82D89BE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f1,f11
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f11.f64;
	// b 0x82d8cc18
	goto loc_82D8CC18;
loc_82D8CB0C:
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x82d8cbcc
	goto loc_82D8CBCC;
loc_82D8CB14:
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x82d8cbcc
	goto loc_82D8CBCC;
loc_82D8CB1C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f11,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f2,f11
	ctx.f2.f64 = ctx.f11.f64;
	// stw r10,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r10.u32);
	// lfs f10,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f10.f64 = double(temp.f32);
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// bl 0x82d89be0
	ctx.lr = 0x82D8CB4C;
	sub_82D89BE0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f11
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f11.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d89be0
	ctx.lr = 0x82D8CB60;
	sub_82D89BE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f9,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f9.f64 = double(temp.f32);
	// fmr f1,f9
	ctx.f1.f64 = ctx.f9.f64;
	// bl 0x82d89be0
	ctx.lr = 0x82D8CB7C;
	sub_82D89BE0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f2,f10
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f10.f64;
	// li r4,4
	ctx.r4.s64 = 4;
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d89be0
	ctx.lr = 0x82D8CB94;
	sub_82D89BE0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// fmr f1,f11
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f11.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d89be0
	ctx.lr = 0x82D8CBA8;
	sub_82D89BE0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// fmr f2,f9
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f9.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// bl 0x82d89be0
	ctx.lr = 0x82D8CBC0;
	sub_82D89BE0(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x82d8cc44
	goto loc_82D8CC44;
loc_82D8CBC8:
	// li r10,2
	ctx.r10.s64 = 2;
loc_82D8CBCC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f11,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f2,f11
	ctx.f2.f64 = ctx.f11.f64;
	// lfs f10,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f10.f64 = double(temp.f32);
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// bl 0x82d89be0
	ctx.lr = 0x82D8CBF8;
	sub_82D89BE0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f11
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f11.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d89be0
	ctx.lr = 0x82D8CC0C;
	sub_82D89BE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f1,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
loc_82D8CC18:
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f2,f11
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f11.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d89be0
	ctx.lr = 0x82D8CC28;
	sub_82D89BE0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// fmr f2,f10
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f10.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// bl 0x82d89be0
	ctx.lr = 0x82D8CC40;
	sub_82D89BE0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
loc_82D8CC44:
	// fmr f1,f11
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f11.f64;
loc_82D8CC48:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d89be0
	ctx.lr = 0x82D8CC54;
	sub_82D89BE0(ctx, base);
loc_82D8CC54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d88558
	ctx.lr = 0x82D8CC5C;
	sub_82D88558(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82D8CC70"))) PPC_WEAK_FUNC(sub_82D8CC70);
PPC_FUNC_IMPL(__imp__sub_82D8CC70) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,92
	ctx.r11.s64 = ctx.r3.s64 + 92;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8CC88"))) PPC_WEAK_FUNC(sub_82D8CC88);
PPC_FUNC_IMPL(__imp__sub_82D8CC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8ccb4
	if (!ctx.cr6.eq) goto loc_82D8CCB4;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D8CCB4:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8ccd8
	if (ctx.cr6.eq) goto loc_82D8CCD8;
	// li r3,49
	ctx.r3.s64 = 49;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D8CCD8:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r9,r10,37812
	ctx.r9.u64 = ctx.r10.u64 | 37812;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r3,r3,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// li r8,232
	ctx.r8.s64 = 232;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// bl 0x82db68c8
	ctx.lr = 0x82D8CD80;
	sub_82DB68C8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8CD90"))) PPC_WEAK_FUNC(sub_82D8CD90);
PPC_FUNC_IMPL(__imp__sub_82D8CD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D8CD98;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82d8cdbc
	if (!ctx.cr6.eq) goto loc_82D8CDBC;
loc_82D8CDB0:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D8CDBC:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// beq cr6,0x82d8cdb0
	if (ctx.cr6.eq) goto loc_82D8CDB0;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8cde8
	if (ctx.cr6.eq) goto loc_82D8CDE8;
	// li r3,49
	ctx.r3.s64 = 49;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D8CDE8:
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x82da4448
	ctx.lr = 0x82D8CE08;
	sub_82DA4448(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// ori r11,r11,37812
	ctx.r11.u64 = ctx.r11.u64 | 37812;
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// bl 0x82db8610
	ctx.lr = 0x82D8CEB8;
	sub_82DB8610(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8cec8
	if (!ctx.cr6.eq) goto loc_82D8CEC8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
loc_82D8CEC8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8CED0"))) PPC_WEAK_FUNC(sub_82D8CED0);
PPC_FUNC_IMPL(__imp__sub_82D8CED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D8CED8;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d8cefc
	if (!ctx.cr6.eq) goto loc_82D8CEFC;
loc_82D8CEF0:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D8CEFC:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8cf10
	if (ctx.cr6.eq) goto loc_82D8CF10;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82D8CF10:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d8cef0
	if (ctx.cr6.eq) goto loc_82D8CEF0;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8cf34
	if (ctx.cr6.eq) goto loc_82D8CF34;
	// li r3,49
	ctx.r3.s64 = 49;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D8CF34:
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x82da4448
	ctx.lr = 0x82D8CF54;
	sub_82DA4448(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r29.u32);
	// ori r11,r11,37812
	ctx.r11.u64 = ctx.r11.u64 | 37812;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// bl 0x82db8610
	ctx.lr = 0x82D8D018;
	sub_82DB8610(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8d028
	if (!ctx.cr6.eq) goto loc_82D8D028;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
loc_82D8D028:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8D030"))) PPC_WEAK_FUNC(sub_82D8D030);
PPC_FUNC_IMPL(__imp__sub_82D8D030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D8D038;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r30,r30,-27724
	ctx.r30.s64 = ctx.r30.s64 + -27724;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8d068
	if (!ctx.cr6.eq) goto loc_82D8D068;
	// li r3,77
	ctx.r3.s64 = 77;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D8D068:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82d8d07c
	if (!ctx.cr6.eq) goto loc_82D8D07C;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D8D07C:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// bne cr6,0x82d8d0e8
	if (!ctx.cr6.eq) goto loc_82D8D0E8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,11
	ctx.r9.s64 = 11;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82D8D09C:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82d8d09c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D8D09C;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r9,-780
	ctx.r4.s64 = ctx.r9.s64 + -780;
	// bl 0x82da4448
	ctx.lr = 0x82D8D0BC;
	sub_82DA4448(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d8cd90
	ctx.lr = 0x82D8D0CC;
	sub_82D8CD90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8d14c
	if (!ctx.cr6.eq) goto loc_82D8D14C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D8D0E8:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82db72f8
	ctx.lr = 0x82D8D0F4;
	sub_82DB72F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8d14c
	if (!ctx.cr6.eq) goto loc_82D8D14C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d8d148
	if (!ctx.cr6.gt) goto loc_82D8D148;
loc_82D8D10C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x82db7440
	ctx.lr = 0x82D8D120;
	sub_82DB7440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8d138
	if (!ctx.cr6.eq) goto loc_82D8D138;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,108(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82d8d154
	if (ctx.cr6.eq) goto loc_82D8D154;
loc_82D8D138:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d8d10c
	if (ctx.cr6.lt) goto loc_82D8D10C;
loc_82D8D148:
	// li r3,66
	ctx.r3.s64 = 66;
loc_82D8D14C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D8D154:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82db8610
	ctx.lr = 0x82D8D160;
	sub_82DB8610(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8D168"))) PPC_WEAK_FUNC(sub_82D8D168);
PPC_FUNC_IMPL(__imp__sub_82D8D168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D8D170;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
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
	// bne cr6,0x82d8d194
	if (!ctx.cr6.eq) goto loc_82D8D194;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D8D194:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-848
	ctx.r5.s64 = ctx.r11.s64 + -848;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,8841
	ctx.r6.s64 = 8841;
	// li r4,92
	ctx.r4.s64 = 92;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82D8D1B8;
	sub_82D862B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d8d258
	if (ctx.cr6.eq) goto loc_82D8D258;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lfs f0,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// addi r11,r11,-27284
	ctx.r11.s64 = ctx.r11.s64 + -27284;
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f13,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
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
	// beq cr6,0x82d8d264
	if (ctx.cr6.eq) goto loc_82D8D264;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da4828
	ctx.lr = 0x82D8D24C;
	sub_82DA4828(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// bne cr6,0x82d8d268
	if (!ctx.cr6.eq) goto loc_82D8D268;
loc_82D8D258:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D8D264:
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_82D8D268:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,37328
	ctx.r11.u64 = ctx.r11.u64 | 37328;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8d370
	if (ctx.cr6.eq) goto loc_82D8D370;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,11
	ctx.r9.s64 = 11;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82D8D28C:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82d8d28c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D8D28C;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r9,-764
	ctx.r4.s64 = ctx.r9.s64 + -764;
	// bl 0x82da4448
	ctx.lr = 0x82D8D2AC;
	sub_82DA4448(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d8d2d4
	if (ctx.cr6.eq) goto loc_82D8D2D4;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-11672
	ctx.r4.s64 = ctx.r11.s64 + -11672;
	// bl 0x82da4498
	ctx.lr = 0x82D8D2C4;
	sub_82DA4498(ctx, base);
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82da44d8
	ctx.lr = 0x82D8D2D4;
	sub_82DA44D8(ctx, base);
loc_82D8D2D4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x82d8cd90
	ctx.lr = 0x82D8D2F4;
	sub_82D8CD90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8d3a0
	if (!ctx.cr6.eq) goto loc_82D8D3A0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,1244(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1244);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lfs f3,-18324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f3.f64 = double(temp.f32);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8D338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,4428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4428);
	// bl 0x82d96a20
	ctx.lr = 0x82D8D360;
	sub_82D96A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8d3a0
	if (!ctx.cr6.eq) goto loc_82D8D3A0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82D8D370:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d8d398
	if (ctx.cr6.eq) goto loc_82D8D398;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,23932
	ctx.r3.s64 = ctx.r11.s64 + 23932;
	// bl 0x82da45b0
	ctx.lr = 0x82D8D388;
	sub_82DA45B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8d398
	if (!ctx.cr6.eq) goto loc_82D8D398;
	// lwz r11,1232(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1232);
	// stw r31,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r31.u32);
loc_82D8D398:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
loc_82D8D3A0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8D3A8"))) PPC_WEAK_FUNC(sub_82D8D3A8);
PPC_FUNC_IMPL(__imp__sub_82D8D3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82D8D3B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d8d3f0
	if (ctx.cr6.eq) goto loc_82D8D3F0;
	// cmpwi cr6,r28,-2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -2, ctx.xer);
	// bne cr6,0x82d8d3f0
	if (!ctx.cr6.eq) goto loc_82D8D3F0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d982c0
	ctx.lr = 0x82D8D3F0;
	sub_82D982C0(ctx, base);
loc_82D8D3F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d8d410
	if (!ctx.cr6.eq) goto loc_82D8D410;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d8d404
	if (ctx.cr6.eq) goto loc_82D8D404;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
loc_82D8D404:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82D8D410:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8d434
	if (ctx.cr6.eq) goto loc_82D8D434;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d8d428
	if (ctx.cr6.eq) goto loc_82D8D428;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
loc_82D8D428:
	// li r3,54
	ctx.r3.s64 = 54;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82D8D434:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x82d8d44c
	if (!ctx.cr6.eq) goto loc_82D8D44C;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82D8D44C:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d8d4e4
	if (ctx.cr6.eq) goto loc_82D8D4E4;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d8d4e4
	if (ctx.cr6.lt) goto loc_82D8D4E4;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x82da9c98
	ctx.lr = 0x82D8D46C;
	sub_82DA9C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8d5f8
	if (!ctx.cr6.eq) goto loc_82D8D5F8;
	// lwz r7,272(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,36(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d8d4e4
	if (ctx.cr6.lt) goto loc_82D8D4E4;
	// lwz r11,40(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82d8d528
	if (ctx.cr6.lt) goto loc_82D8D528;
	// beq cr6,0x82d8d520
	if (ctx.cr6.eq) goto loc_82D8D520;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82d8d4e4
	if (!ctx.cr6.lt) goto loc_82D8D4E4;
	// lwz r11,1220(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1220);
	// addi r8,r29,1216
	ctx.r8.s64 = ctx.r29.s64 + 1216;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82d8d4e4
	if (ctx.cr6.eq) goto loc_82D8D4E4;
loc_82D8D4B0:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8d4d8
	if (ctx.cr6.eq) goto loc_82D8D4D8;
	// lwz r10,92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8d4d8
	if (ctx.cr6.eq) goto loc_82D8D4D8;
	// lwz r10,272(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82d8d514
	if (ctx.cr6.eq) goto loc_82D8D514;
loc_82D8D4D8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82d8d4b0
	if (!ctx.cr6.eq) goto loc_82D8D4B0;
loc_82D8D4E4:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d8bc00
	ctx.lr = 0x82D8D4F8;
	sub_82D8BC00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d8d534
	if (ctx.cr6.eq) goto loc_82D8D534;
loc_82D8D500:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d8d5f8
	if (ctx.cr6.eq) goto loc_82D8D5F8;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82D8D514:
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r28,28(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// b 0x82d8d4e4
	goto loc_82D8D4E4;
loc_82D8D520:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x82d8d4e4
	goto loc_82D8D4E4;
loc_82D8D528:
	// li r3,41
	ctx.r3.s64 = 41;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82D8D534:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d9d898
	ctx.lr = 0x82D8D54C;
	sub_82D9D898(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82d8d598
	if (ctx.cr6.eq) goto loc_82D8D598;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d8d564
	if (ctx.cr6.eq) goto loc_82D8D564;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
loc_82D8D564:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r25,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r25.u8);
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
	ctx.lr = 0x82D8D58C;
	sub_82D9CB18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82D8D598:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82d9de78
	ctx.lr = 0x82D8D5A0;
	sub_82D9DE78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8d500
	if (!ctx.cr6.eq) goto loc_82D8D500;
	// cmpwi cr6,r28,-2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -2, ctx.xer);
	// bne cr6,0x82d8d5cc
	if (!ctx.cr6.eq) goto loc_82D8D5CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8d5cc
	if (ctx.cr6.eq) goto loc_82D8D5CC;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// b 0x82d8d5e0
	goto loc_82D8D5E0;
loc_82D8D5CC:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82d98430
	ctx.lr = 0x82D8D5D8;
	sub_82D98430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8d500
	if (!ctx.cr6.eq) goto loc_82D8D500;
loc_82D8D5E0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d8d5f4
	if (ctx.cr6.eq) goto loc_82D8D5F4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82D8D5F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D8D5F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8D600"))) PPC_WEAK_FUNC(sub_82D8D600);
PPC_FUNC_IMPL(__imp__sub_82D8D600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82D8D608;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31909
	ctx.r29.s64 = -2091188224;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r30,r11,-848
	ctx.r30.s64 = ctx.r11.s64 + -848;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,19872(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,9363
	ctx.r6.s64 = 9363;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,584
	ctx.r4.s64 = 584;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82D8D640;
	sub_82D85F40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d8d658
	if (ctx.cr6.eq) goto loc_82D8D658;
	// bl 0x82da6758
	ctx.lr = 0x82D8D64C;
	sub_82DA6758(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d8d664
	if (!ctx.cr6.eq) goto loc_82D8D664;
loc_82D8D658:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D8D664:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da6930
	ctx.lr = 0x82D8D678;
	sub_82DA6930(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82d8d6ac
	if (ctx.cr6.eq) goto loc_82D8D6AC;
	// lwz r11,19872(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,9375
	ctx.r6.s64 = 9375;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82D8D6A0;
	sub_82D861B0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D8D6AC:
	// addis r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 65536;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addi r11,r11,-24432
	ctx.r11.s64 = ctx.r11.s64 + -24432;
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
	// beq cr6,0x82d8d6d8
	if (ctx.cr6.eq) goto loc_82D8D6D8;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_82D8D6D8:
	// addis r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-25600
	ctx.r3.s64 = ctx.r3.s64 + -25600;
	// bl 0x82da6048
	ctx.lr = 0x82D8D6E8;
	sub_82DA6048(ctx, base);
	// addis r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-25016
	ctx.r3.s64 = ctx.r3.s64 + -25016;
	// bl 0x82da6048
	ctx.lr = 0x82D8D6F8;
	sub_82DA6048(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,41688
	ctx.r11.u64 = ctx.r11.u64 | 41688;
	// li r3,0
	ctx.r3.s64 = 0;
	// stbx r10,r28,r11
	PPC_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8D714"))) PPC_WEAK_FUNC(sub_82D8D714);
PPC_FUNC_IMPL(__imp__sub_82D8D714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8D718"))) PPC_WEAK_FUNC(sub_82D8D718);
PPC_FUNC_IMPL(__imp__sub_82D8D718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82D8D720;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6ae8
	ctx.lr = 0x82D8D728;
	__savefpr_28(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// lfs f29,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f29.f64 = double(temp.f32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82D8D74C:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82d8d74c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D8D74C;
	// addis r26,r29,1
	ctx.r26.s64 = ctx.r29.s64 + 65536;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r26,r26,-24432
	ctx.r26.s64 = ctx.r26.s64 + -24432;
	// lfs f31,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82d8d8a4
	if (ctx.cr6.eq) goto loc_82D8D8A4;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r27,r10,37344
	ctx.r27.u64 = ctx.r10.u64 | 37344;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r28,r10,39912
	ctx.r28.u64 = ctx.r10.u64 | 39912;
	// lfs f28,6480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6480);
	ctx.f28.f64 = double(temp.f32);
loc_82D8D790:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da5ff8
	ctx.lr = 0x82D8D79C;
	sub_82DA5FF8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8d898
	if (ctx.cr6.eq) goto loc_82D8D898;
	// add r30,r29,r27
	ctx.r30.u64 = ctx.r29.u64 + ctx.r27.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82da60b0
	ctx.lr = 0x82D8D7C0;
	sub_82DA60B0(ctx, base);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// ble cr6,0x82d8d820
	if (!ctx.cr6.gt) goto loc_82D8D820;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da56b0
	ctx.lr = 0x82D8D7E0;
	sub_82DA56B0(ctx, base);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r29,r28
	ctx.r3.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bl 0x82da50a0
	ctx.lr = 0x82D8D7F8;
	sub_82DA50A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8d928
	if (!ctx.cr6.eq) goto loc_82D8D928;
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82D8D820:
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d8d840
	if (!ctx.cr6.eq) goto loc_82D8D840;
	// lfs f0,548(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82d8d898
	if (ctx.cr6.eq) goto loc_82D8D898;
	// stfs f13,548(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// b 0x82d8d898
	goto loc_82D8D898;
loc_82D8D840:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82d8d898
	if (!ctx.cr6.eq) goto loc_82D8D898;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x82d8d898
	if (ctx.cr6.lt) goto loc_82D8D898;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82D8D864:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82d8d864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D8D864;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da5f68
	ctx.lr = 0x82D8D880;
	sub_82DA5F68(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82da6330
	ctx.lr = 0x82D8D890;
	sub_82DA6330(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
loc_82D8D898:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82d8d790
	if (!ctx.cr6.eq) goto loc_82D8D790;
loc_82D8D8A4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,41688
	ctx.r11.u64 = ctx.r11.u64 | 41688;
	// lbzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8d924
	if (ctx.cr6.eq) goto loc_82D8D924;
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x82d8d904
	if (!ctx.cr6.lt) goto loc_82D8D904;
	// addis r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 65536;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r4,-23844
	ctx.r4.s64 = ctx.r4.s64 + -23844;
	// li r5,124
	ctx.r5.s64 = 124;
	// bl 0x82cb1160
	ctx.lr = 0x82D8D8D4;
	sub_82CB1160(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// fsubs f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bne cr6,0x82d8d8fc
	if (!ctx.cr6.eq) goto loc_82D8D8FC;
	// li r11,-10000
	ctx.r11.s64 = -10000;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// bl 0x82da62b0
	ctx.lr = 0x82D8D8F8;
	sub_82DA62B0(ctx, base);
	// b 0x82d8d900
	goto loc_82D8D900;
loc_82D8D8FC:
	// bl 0x82da6330
	ctx.lr = 0x82D8D900;
	sub_82DA6330(ctx, base);
loc_82D8D900:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_82D8D904:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fdivs f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f30.f64));
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82da6548
	ctx.lr = 0x82D8D914;
	sub_82DA6548(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d8aaa0
	ctx.lr = 0x82D8D924;
	sub_82D8AAA0(ctx, base);
loc_82D8D924:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D8D928:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6b34
	ctx.lr = 0x82D8D934;
	__restfpr_28(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8D938"))) PPC_WEAK_FUNC(sub_82D8D938);
PPC_FUNC_IMPL(__imp__sub_82D8D938) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82d8db3c
	if (ctx.cr6.gt) goto loc_82D8DB3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-9884
	ctx.r12.s64 = ctx.r12.s64 + -9884;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D8DA10;
	case 1:
		goto loc_82D8D990;
	case 2:
		goto loc_82D8D9B0;
	case 3:
		goto loc_82D8D9D0;
	case 4:
		goto loc_82D8D9F0;
	case 5:
		goto loc_82D8D9F0;
	case 6:
		goto loc_82D8DA10;
	case 7:
		goto loc_82D8DA10;
	case 8:
		goto loc_82D8DA10;
	case 9:
		goto loc_82D8DA10;
	case 10:
		goto loc_82D8DA10;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-9712(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9712);
	// lwz r22,-9840(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9840);
	// lwz r22,-9808(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9808);
	// lwz r22,-9776(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9776);
	// lwz r22,-9744(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9744);
	// lwz r22,-9744(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9744);
	// lwz r22,-9712(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9712);
	// lwz r22,-9712(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9712);
	// lwz r22,-9712(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9712);
	// lwz r22,-9712(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9712);
	// lwz r22,-9712(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9712);
loc_82D8D990:
	// li r11,8
	ctx.r11.s64 = 8;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8D9B0:
	// li r11,16
	ctx.r11.s64 = 16;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8D9D0:
	// li r11,24
	ctx.r11.s64 = 24;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8D9F0:
	// li r11,32
	ctx.r11.s64 = 32;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8DA10:
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-9688
	ctx.r12.s64 = ctx.r12.s64 + -9688;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r22,-9432(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9432);
	// lwz r22,-9412(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9412);
	// lwz r22,-9412(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9412);
	// lwz r22,-9412(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9412);
	// lwz r22,-9412(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9412);
	// lwz r22,-9412(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9412);
	// lwz r22,-9644(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9644);
	// lwz r22,-9564(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9564);
	// lwz r22,-9524(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9524);
	// lwz r22,-9444(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9444);
	// lwz r22,-9444(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9444);
	// lis r11,9362
	ctx.r11.s64 = 613548032;
	// addi r10,r4,13
	ctx.r10.s64 = ctx.r4.s64 + 13;
	// ori r11,r11,18725
	ctx.r11.u64 = ctx.r11.u64 | 18725;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mulhwu r11,r10,r11
	ctx.r11.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r11.u32)) >> 32;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// mulhwu r10,r11,r8
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
	// addi r11,r4,63
	ctx.r11.s64 = ctx.r4.s64 + 63;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,6,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFFFC;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
	// lis r11,9362
	ctx.r11.s64 = 613548032;
	// addi r10,r4,27
	ctx.r10.s64 = ctx.r4.s64 + 27;
	// ori r11,r11,18725
	ctx.r11.u64 = ctx.r11.u64 | 18725;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mulhwu r11,r10,r11
	ctx.r11.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r11.u32)) >> 32;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mulli r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 * 448;
	// mulhwu r10,r11,r8
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// blr 
	return;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8DB3C:
	// li r3,25
	ctx.r3.s64 = 25;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8DB44"))) PPC_WEAK_FUNC(sub_82D8DB44);
PPC_FUNC_IMPL(__imp__sub_82D8DB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8DB48"))) PPC_WEAK_FUNC(sub_82D8DB48);
PPC_FUNC_IMPL(__imp__sub_82D8DB48) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d8db60
	if (!ctx.cr6.eq) goto loc_82D8DB60;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D8DB60:
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82d8dccc
	if (ctx.cr6.gt) goto loc_82D8DCCC;
	// li r3,0
	ctx.r3.s64 = 0;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-9340
	ctx.r12.s64 = ctx.r12.s64 + -9340;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D8DBF8;
	case 1:
		goto loc_82D8DBB0;
	case 2:
		goto loc_82D8DBB8;
	case 3:
		goto loc_82D8DBC0;
	case 4:
		goto loc_82D8DBC8;
	case 5:
		goto loc_82D8DBC8;
	case 6:
		goto loc_82D8DBF8;
	case 7:
		goto loc_82D8DBF8;
	case 8:
		goto loc_82D8DBF8;
	case 9:
		goto loc_82D8DBF8;
	case 10:
		goto loc_82D8DBF8;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-9224(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9224);
	// lwz r22,-9296(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9296);
	// lwz r22,-9288(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9288);
	// lwz r22,-9280(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9280);
	// lwz r22,-9272(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9272);
	// lwz r22,-9272(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9272);
	// lwz r22,-9224(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9224);
	// lwz r22,-9224(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9224);
	// lwz r22,-9224(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9224);
	// lwz r22,-9224(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9224);
	// lwz r22,-9224(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9224);
loc_82D8DBB0:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82d8dbcc
	goto loc_82D8DBCC;
loc_82D8DBB8:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82d8dbcc
	goto loc_82D8DBCC;
loc_82D8DBC0:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82d8dbcc
	goto loc_82D8DBCC;
loc_82D8DBC8:
	// li r11,32
	ctx.r11.s64 = 32;
loc_82D8DBCC:
	// li r9,0
	ctx.r9.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldimi r9,r4,3,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r4.u64, 3) & 0x7FFFFFFF8) | (ctx.r9.u64 & 0xFFFFFFF800000007);
	// tdllei r11,0
	// divdu r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 / ctx.r11.u64;
	// twllei r10,0
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8DBF8:
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-9200
	ctx.r12.s64 = ctx.r12.s64 + -9200;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r22,-9036(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9036);
	// lwz r22,-9012(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9012);
	// lwz r22,-9012(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9012);
	// lwz r22,-9012(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9012);
	// lwz r22,-9012(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9012);
	// lwz r22,-9012(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9012);
	// lwz r22,-9156(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9156);
	// lwz r22,-9124(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9124);
	// lwz r22,-9080(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9080);
	// lwz r22,-9048(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9048);
	// lwz r22,-9048(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9048);
	// mulli r11,r4,14
	ctx.r11.s64 = ctx.r4.s64 * 14;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// twllei r10,0
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
	// lis r9,14563
	ctx.r9.s64 = 954400768;
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// ori r9,r9,36409
	ctx.r9.u64 = ctx.r9.u64 | 36409;
	// twllei r10,0
	// mulhwu r11,r11,r9
	ctx.r11.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
	// mulli r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 * 28;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// twllei r10,0
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// blr 
	return;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// twllei r10,0
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8DCCC:
	// li r3,25
	ctx.r3.s64 = 25;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8DCD4"))) PPC_WEAK_FUNC(sub_82D8DCD4);
PPC_FUNC_IMPL(__imp__sub_82D8DCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8DCD8"))) PPC_WEAK_FUNC(sub_82D8DCD8);
PPC_FUNC_IMPL(__imp__sub_82D8DCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82D8DCE0;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-17648(r1)
	ea = -17648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// stb r7,17703(r1)
	PPC_STORE_U8(ctx.r1.u32 + 17703, ctx.r7.u8);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r15,17668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 17668, ctx.r15.u32);
	// stw r30,17676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 17676, ctx.r30.u32);
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// stw r24,17684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 17684, ctx.r24.u32);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// stw r17,17708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 17708, ctx.r17.u32);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// bl 0x82d85b90
	ctx.lr = 0x82D8DD40;
	sub_82D85B90(ctx, base);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82d8f600
	if (ctx.cr6.eq) goto loc_82D8F600;
	// rlwinm r11,r24,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8dd60
	if (!ctx.cr6.eq) goto loc_82D8DD60;
	// stw r22,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r22.u32);
loc_82D8DD60:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82d8dd74
	if (ctx.cr6.eq) goto loc_82D8DD74;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// bne cr6,0x82d8f600
	if (!ctx.cr6.eq) goto loc_82D8F600;
loc_82D8DD74:
	// rlwinm r11,r24,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8dd88
	if (ctx.cr6.eq) goto loc_82D8DD88;
	// rlwinm r24,r24,0,24,21
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// b 0x82d8dd98
	goto loc_82D8DD98;
loc_82D8DD88:
	// rlwinm r11,r24,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8dd9c
	if (ctx.cr6.eq) goto loc_82D8DD9C;
	// rlwinm r24,r24,0,24,22
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_82D8DD98:
	// stw r24,17684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 17684, ctx.r24.u32);
loc_82D8DD9C:
	// rlwinm r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8ddb4
	if (ctx.cr6.eq) goto loc_82D8DDB4;
	// rlwinm r24,r24,0,14,9
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFFFFC3FFFF;
	// rlwinm r24,r24,0,6,4
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r24,17684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 17684, ctx.r24.u32);
loc_82D8DDB4:
	// andis. r11,r24,1084
	ctx.r11.u64 = ctx.r24.u64 & 71041024;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8ddc8
	if (ctx.cr6.eq) goto loc_82D8DDC8;
	// ori r24,r24,16
	ctx.r24.u64 = ctx.r24.u64 | 16;
	// stw r24,17684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 17684, ctx.r24.u32);
loc_82D8DDC8:
	// rlwinm r11,r24,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x40;
	// li r20,1
	ctx.r20.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8de10
	if (!ctx.cr6.eq) goto loc_82D8DE10;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82d88da0
	ctx.lr = 0x82D8DDEC;
	sub_82D88DA0(ctx, base);
	// rlwinm r11,r24,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bne cr6,0x82d8de00
	if (!ctx.cr6.eq) goto loc_82D8DE00;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82D8DE00:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d8de10
	if (!ctx.cr6.eq) goto loc_82D8DE10;
	// rlwimi r24,r20,6,25,26
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r20.u32, 6) & 0x60) | (ctx.r24.u64 & 0xFFFFFFFFFFFFFF9F);
	// stw r24,17684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 17684, ctx.r24.u32);
loc_82D8DE10:
	// rlwinm r11,r24,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8de28
	if (!ctx.cr6.eq) goto loc_82D8DE28;
	// rlwinm r10,r24,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8de54
	if (ctx.cr6.eq) goto loc_82D8DE54;
loc_82D8DE28:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82d8f600
	if (ctx.cr6.eq) goto loc_82D8F600;
	// lwz r10,20(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d8f600
	if (ctx.cr6.eq) goto loc_82D8F600;
	// lwz r10,12(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82d8f600
	if (!ctx.cr6.gt) goto loc_82D8F600;
	// lwz r10,16(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d8f600
	if (ctx.cr6.eq) goto loc_82D8F600;
loc_82D8DE54:
	// rlwinm r10,r24,0,3,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x1FFFF800;
	// rlwinm r10,r10,0,20,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF0000FFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8debc
	if (ctx.cr6.eq) goto loc_82D8DEBC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r28,r11,-848
	ctx.r28.s64 = ctx.r11.s64 + -848;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r14,r11,19872
	ctx.r14.s64 = ctx.r11.s64 + 19872;
	// li r6,2133
	ctx.r6.s64 = 2133;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,412
	ctx.r4.s64 = 412;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82D8DE94;
	sub_82D85F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d8e048
	if (ctx.cr6.eq) goto loc_82D8E048;
	// bl 0x82da8228
	ctx.lr = 0x82D8DEA4;
	sub_82DA8228(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r20,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r20.u32);
	// addi r11,r11,-960
	ctx.r11.s64 = ctx.r11.s64 + -960;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r22,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r22.u32);
	// b 0x82d8e088
	goto loc_82D8E088;
loc_82D8DEBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8df18
	if (ctx.cr6.eq) goto loc_82D8DF18;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r28,r11,-848
	ctx.r28.s64 = ctx.r11.s64 + -848;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r14,r11,19872
	ctx.r14.s64 = ctx.r11.s64 + 19872;
	// li r6,2142
	ctx.r6.s64 = 2142;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,408
	ctx.r4.s64 = 408;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82D8DEF4;
	sub_82D85F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d8e048
	if (ctx.cr6.eq) goto loc_82D8E048;
	// bl 0x82da8228
	ctx.lr = 0x82D8DF04;
	sub_82DA8228(ctx, base);
	// rlwinm r24,r24,0,20,18
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-876
	ctx.r11.s64 = ctx.r11.s64 + -876;
	// stw r24,17684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 17684, ctx.r24.u32);
	// b 0x82d8e084
	goto loc_82D8E084;
loc_82D8DF18:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82d8dfec
	if (ctx.cr6.eq) goto loc_82D8DFEC;
	// lwz r11,76(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8dfec
	if (ctx.cr6.eq) goto loc_82D8DFEC;
	// lwz r11,80(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8dfec
	if (ctx.cr6.eq) goto loc_82D8DFEC;
	// lwz r11,84(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8dfec
	if (ctx.cr6.eq) goto loc_82D8DFEC;
	// lwz r11,88(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8dfec
	if (ctx.cr6.eq) goto loc_82D8DFEC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r28,r11,-848
	ctx.r28.s64 = ctx.r11.s64 + -848;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r14,r11,19872
	ctx.r14.s64 = ctx.r11.s64 + 19872;
	// li r6,2154
	ctx.r6.s64 = 2154;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,428
	ctx.r4.s64 = 428;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82D8DF80;
	sub_82D85F40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d8e048
	if (ctx.cr6.eq) goto loc_82D8E048;
	// bl 0x82d86f58
	ctx.lr = 0x82D8DF8C;
	sub_82D86F58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d8e048
	if (ctx.cr6.eq) goto loc_82D8E048;
	// lwz r11,76(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 76);
	// lwz r8,88(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 88);
	// lwz r9,84(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,80(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 80);
	// beq cr6,0x82d8dfc4
	if (ctx.cr6.eq) goto loc_82D8DFC4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8dfc4
	if (ctx.cr6.eq) goto loc_82D8DFC4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d8dfc4
	if (ctx.cr6.eq) goto loc_82D8DFC4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82d8dfd4
	if (!ctx.cr6.eq) goto loc_82D8DFD4;
loc_82D8DFC4:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
loc_82D8DFD4:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r11,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r11.u32);
	// stw r10,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r10.u32);
	// stw r9,412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 412, ctx.r9.u32);
	// stw r8,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r8.u32);
	// b 0x82d8e08c
	goto loc_82D8E08C;
loc_82D8DFEC:
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r11,9920(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,-848
	ctx.r28.s64 = ctx.r11.s64 + -848;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r14,r11,19872
	ctx.r14.s64 = ctx.r11.s64 + 19872;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x82d8e058
	if (ctx.cr6.eq) goto loc_82D8E058;
	// li r6,2170
	ctx.r6.s64 = 2170;
	// li r4,428
	ctx.r4.s64 = 428;
	// bl 0x82d85f40
	ctx.lr = 0x82D8E02C;
	sub_82D85F40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d8e048
	if (ctx.cr6.eq) goto loc_82D8E048;
	// bl 0x82d86f58
	ctx.lr = 0x82D8E038;
	sub_82D86F58(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// bne cr6,0x82d8e090
	if (!ctx.cr6.eq) goto loc_82D8E090;
loc_82D8E048:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,17648
	ctx.r1.s64 = ctx.r1.s64 + 17648;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D8E058:
	// li r6,2222
	ctx.r6.s64 = 2222;
	// li r4,408
	ctx.r4.s64 = 408;
	// bl 0x82d85f40
	ctx.lr = 0x82D8E064;
	sub_82D85F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d8e048
	if (ctx.cr6.eq) goto loc_82D8E048;
	// bl 0x82da8228
	ctx.lr = 0x82D8E074;
	sub_82DA8228(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-932
	ctx.r11.s64 = ctx.r11.s64 + -932;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
loc_82D8E084:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D8E088:
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82D8E08C:
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
loc_82D8E090:
	// rlwinm r11,r24,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x80;
	// stw r15,392(r25)
	PPC_STORE_U32(ctx.r25.u32 + 392, ctx.r15.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8e0c0
	if (ctx.cr6.eq) goto loc_82D8E0C0;
	// lwz r11,348(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 348);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8e0c0
	if (ctx.cr6.eq) goto loc_82D8E0C0;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bgt cr6,0x82d8e0c0
	if (ctx.cr6.gt) goto loc_82D8E0C0;
	// addi r11,r1,1103
	ctx.r11.s64 = ctx.r1.s64 + 1103;
	// rlwinm r19,r11,0,0,26
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r19,396(r25)
	PPC_STORE_U32(ctx.r25.u32 + 396, ctx.r19.u32);
loc_82D8E0C0:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82d8e0d4
	if (ctx.cr6.eq) goto loc_82D8E0D4;
	// lwz r7,60(r16)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r16.u32 + 60);
	// lwz r5,4(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// b 0x82d8e0dc
	goto loc_82D8E0DC;
loc_82D8E0D4:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_82D8E0DC:
	// rlwinm r6,r24,8,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 8) & 0x1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da6e88
	ctx.lr = 0x82D8E0EC;
	sub_82DA6E88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82d8e124
	if (ctx.cr6.eq) goto loc_82D8E124;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2251
	ctx.r6.s64 = 2251;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82D8E114;
	sub_82D861B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,17648
	ctx.r1.s64 = ctx.r1.s64 + 17648;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D8E124:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82d8e134
	if (ctx.cr6.eq) goto loc_82D8E134;
	// lwz r4,8(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// b 0x82d8e138
	goto loc_82D8E138;
loc_82D8E134:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_82D8E138:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da8048
	ctx.lr = 0x82D8E140;
	sub_82DA8048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8f604
	if (!ctx.cr6.eq) goto loc_82D8F604;
	// addis r29,r15,1
	ctx.r29.s64 = ctx.r15.s64 + 65536;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r29,r29,-27724
	ctx.r29.s64 = ctx.r29.s64 + -27724;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82db7290
	ctx.lr = 0x82D8E15C;
	sub_82DB7290(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8f604
	if (!ctx.cr6.eq) goto loc_82D8F604;
	// lis r11,14563
	ctx.r11.s64 = 954400768;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// ori r21,r11,36409
	ctx.r21.u64 = ctx.r11.u64 | 36409;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d8e20c
	if (!ctx.cr6.gt) goto loc_82D8E20C;
loc_82D8E17C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82db73c8
	ctx.lr = 0x82D8E18C;
	sub_82DB73C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8e1fc
	if (!ctx.cr6.eq) goto loc_82D8E1FC;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82d8e1e0
	if (ctx.cr6.eq) goto loc_82D8E1E0;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// cmpwi cr6,r11,72
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 72, ctx.xer);
	// ble cr6,0x82d8e1e0
	if (!ctx.cr6.gt) goto loc_82D8E1E0;
	// lwz r11,72(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8e1e0
	if (ctx.cr6.eq) goto loc_82D8E1E0;
	// rlwinm r10,r24,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d8e1e0
	if (!ctx.cr6.eq) goto loc_82D8E1E0;
	// lwz r10,60(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82d8e1e0
	if (ctx.cr6.eq) goto loc_82D8E1E0;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x82d8e1fc
	if (!ctx.cr6.eq) goto loc_82D8E1FC;
	// cmpwi cr6,r10,1000
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1000, ctx.xer);
	// bne cr6,0x82d8e1fc
	if (!ctx.cr6.eq) goto loc_82D8E1FC;
loc_82D8E1E0:
	// rlwinm r11,r24,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8e25c
	if (ctx.cr6.eq) goto loc_82D8E25C;
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
loc_82D8E1F4:
	// beq cr6,0x82d8e284
	if (ctx.cr6.eq) goto loc_82D8E284;
loc_82D8E1F8:
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
loc_82D8E1FC:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d8e17c
	if (ctx.cr6.lt) goto loc_82D8E17C;
loc_82D8E20C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d8e758
	if (!ctx.cr6.eq) goto loc_82D8E758;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da8310
	ctx.lr = 0x82D8E220;
	sub_82DA8310(ctx, base);
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2469
	ctx.r6.s64 = 2469;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82D8E23C;
	sub_82D861B0(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d8e24c
	if (ctx.cr6.eq) goto loc_82D8E24C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82de7968
	ctx.lr = 0x82D8E24C;
	sub_82DE7968(ctx, base);
loc_82D8E24C:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,17648
	ctx.r1.s64 = ctx.r1.s64 + 17648;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D8E25C:
	// rlwinm r11,r24,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// beq cr6,0x82d8e274
	if (ctx.cr6.eq) goto loc_82D8E274;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// b 0x82d8e1f4
	goto loc_82D8E1F4;
loc_82D8E274:
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x82d8e1f8
	if (ctx.cr6.eq) goto loc_82D8E1F8;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x82d8e1f8
	if (ctx.cr6.eq) goto loc_82D8E1F8;
loc_82D8E284:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82db7fd0
	ctx.lr = 0x82D8E290;
	sub_82DB7FD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d8e2a4
	if (ctx.cr6.eq) goto loc_82D8E2A4;
	// cmpwi cr6,r3,42
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 42, ctx.xer);
	// beq cr6,0x82d8e048
	if (ctx.cr6.eq) goto loc_82D8E048;
	// b 0x82d8e1fc
	goto loc_82D8E1FC;
loc_82D8E2A4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r25,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r25.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r24,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r24.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r27.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r25,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r25.u32);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r15,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r15.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8E304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82d8e3a4
	if (ctx.cr6.eq) goto loc_82D8E3A4;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,1000
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1000, ctx.xer);
	// bne cr6,0x82d8e32c
	if (!ctx.cr6.eq) goto loc_82D8E32C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82d8e32c
	if (!ctx.cr6.eq) goto loc_82D8E32C;
	// lwz r26,220(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
loc_82D8E32C:
	// stw r22,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r22.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r22,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r22.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8E34C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// cmpwi cr6,r31,25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 25, ctx.xer);
	// beq cr6,0x82d8e1fc
	if (ctx.cr6.eq) goto loc_82D8E1FC;
	// cmpwi cr6,r31,22
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 22, ctx.xer);
	// beq cr6,0x82d8e1fc
	if (ctx.cr6.eq) goto loc_82D8E1FC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da8310
	ctx.lr = 0x82D8E368;
	sub_82DA8310(ctx, base);
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2453
	ctx.r6.s64 = 2453;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82D8E384;
	sub_82D861B0(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d8e394
	if (ctx.cr6.eq) goto loc_82D8E394;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82de7968
	ctx.lr = 0x82D8E394;
	sub_82DE7968(ctx, base);
loc_82D8E394:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,17648
	ctx.r1.s64 = ctx.r1.s64 + 17648;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D8E3A4:
	// lwz r24,212(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r24,17684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 17684, ctx.r24.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D8E3C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8f604
	if (!ctx.cr6.eq) goto loc_82D8F604;
	// rlwinm r11,r24,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8e528
	if (ctx.cr6.eq) goto loc_82D8E528;
	// lwz r10,16(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r9,12(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r10.u32);
	// lwz r10,4(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
	// stw r9,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r9.u32);
	// beq cr6,0x82d8f600
	if (ctx.cr6.eq) goto loc_82D8F600;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82d8e24c
	if (ctx.cr6.gt) goto loc_82D8E24C;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-7140
	ctx.r12.s64 = ctx.r12.s64 + -7140;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D8E480;
	case 1:
		goto loc_82D8E448;
	case 2:
		goto loc_82D8E450;
	case 3:
		goto loc_82D8E458;
	case 4:
		goto loc_82D8E460;
	case 5:
		goto loc_82D8E460;
	case 6:
		goto loc_82D8E480;
	case 7:
		goto loc_82D8E480;
	case 8:
		goto loc_82D8E480;
	case 9:
		goto loc_82D8E480;
	case 10:
		goto loc_82D8E480;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-7040(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7040);
	// lwz r22,-7096(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7096);
	// lwz r22,-7088(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7088);
	// lwz r22,-7080(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7080);
	// lwz r22,-7072(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7072);
	// lwz r22,-7072(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7072);
	// lwz r22,-7040(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7040);
	// lwz r22,-7040(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7040);
	// lwz r22,-7040(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7040);
	// lwz r22,-7040(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7040);
	// lwz r22,-7040(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7040);
loc_82D8E448:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82d8e464
	goto loc_82D8E464;
loc_82D8E450:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82d8e464
	goto loc_82D8E464;
loc_82D8E458:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82d8e464
	goto loc_82D8E464;
loc_82D8E460:
	// li r11,32
	ctx.r11.s64 = 32;
loc_82D8E464:
	// rldicl r10,r10,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 3) & 0x7FFFFFFFF;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicr r10,r10,0,60
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFFFF8;
	// tdllei r11,0
	// divdu r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 / ctx.r11.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82d8e508
	goto loc_82D8E508;
loc_82D8E480:
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-7016
	ctx.r12.s64 = ctx.r12.s64 + -7016;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r22,-6908(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6908);
	// lwz r22,-7604(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7604);
	// lwz r22,-7604(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7604);
	// lwz r22,-7604(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7604);
	// lwz r22,-7604(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7604);
	// lwz r22,-7604(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7604);
	// lwz r22,-6972(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6972);
	// lwz r22,-6960(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6960);
	// lwz r22,-6944(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6944);
	// lwz r22,-6932(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6932);
	// lwz r22,-6932(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6932);
	// mulli r11,r10,14
	ctx.r11.s64 = ctx.r10.s64 * 14;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8e508
	goto loc_82D8E508;
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// mulhwu r11,r11,r21
	ctx.r11.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r21.u32)) >> 32;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8e508
	goto loc_82D8E508;
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// b 0x82d8e508
	goto loc_82D8E508;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r10.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r20,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r20.u32);
	// stw r20,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r20.u32);
	// b 0x82d8e6c8
	goto loc_82D8E6C8;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82D8E508:
	// divwu r11,r11,r9
	ctx.r11.u32 = ctx.r11.u32 / ctx.r9.u32;
	// twllei r9,0
	// stw r11,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r20,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r20.u32);
	// stw r20,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r20.u32);
	// b 0x82d8e6c8
	goto loc_82D8E6C8;
loc_82D8E528:
	// rlwinm r11,r24,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8e6c8
	if (ctx.cr6.eq) goto loc_82D8E6C8;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8E54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,20(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,12(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,256(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// stw r10,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r10.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r9,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,16(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,260(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 260);
	// stw r10,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r10.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r9,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,12(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// lwz r9,264(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 264);
	// stw r9,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r9.u32);
	// beq cr6,0x82d8f600
	if (ctx.cr6.eq) goto loc_82D8F600;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82d8e24c
	if (ctx.cr6.gt) goto loc_82D8E24C;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-6700
	ctx.r12.s64 = ctx.r12.s64 + -6700;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D8E638;
	case 1:
		goto loc_82D8E600;
	case 2:
		goto loc_82D8E608;
	case 3:
		goto loc_82D8E610;
	case 4:
		goto loc_82D8E618;
	case 5:
		goto loc_82D8E618;
	case 6:
		goto loc_82D8E638;
	case 7:
		goto loc_82D8E638;
	case 8:
		goto loc_82D8E638;
	case 9:
		goto loc_82D8E638;
	case 10:
		goto loc_82D8E638;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-6600(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6600);
	// lwz r22,-6656(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6656);
	// lwz r22,-6648(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6648);
	// lwz r22,-6640(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6640);
	// lwz r22,-6632(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6632);
	// lwz r22,-6632(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6632);
	// lwz r22,-6600(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6600);
	// lwz r22,-6600(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6600);
	// lwz r22,-6600(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6600);
	// lwz r22,-6600(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6600);
	// lwz r22,-6600(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6600);
loc_82D8E600:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82d8e61c
	goto loc_82D8E61C;
loc_82D8E608:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82d8e61c
	goto loc_82D8E61C;
loc_82D8E610:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82d8e61c
	goto loc_82D8E61C;
loc_82D8E618:
	// li r11,32
	ctx.r11.s64 = 32;
loc_82D8E61C:
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicr r9,r9,3,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 3) & 0xFFFFFFFFFFFFFFFF;
	// tdllei r11,0
	// divdu r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 / ctx.r11.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82d8e6bc
	goto loc_82D8E6BC;
loc_82D8E638:
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-6576
	ctx.r12.s64 = ctx.r12.s64 + -6576;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r22,-6472(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6472);
	// lwz r22,-7604(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7604);
	// lwz r22,-7604(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7604);
	// lwz r22,-7604(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7604);
	// lwz r22,-7604(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7604);
	// lwz r22,-7604(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7604);
	// lwz r22,-6532(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6532);
	// lwz r22,-6516(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6516);
	// lwz r22,-6496(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6496);
	// lwz r22,-6480(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6480);
	// lwz r22,-6480(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6480);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mulli r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 * 14;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8e6bc
	goto loc_82D8E6BC;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mulhwu r11,r11,r21
	ctx.r11.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r21.u32)) >> 32;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8e6bc
	goto loc_82D8E6BC;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// b 0x82d8e6bc
	goto loc_82D8E6BC;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x82d8e6c4
	goto loc_82D8E6C4;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82D8E6BC:
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// twllei r10,0
loc_82D8E6C4:
	// stw r11,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r11.u32);
loc_82D8E6C8:
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r23,420(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// stw r11,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8e20c
	if (ctx.cr6.eq) goto loc_82D8E20C;
	// rlwinm r9,r24,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d8e20c
	if (ctx.cr6.eq) goto loc_82D8E20C;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d8e20c
	if (!ctx.cr6.gt) goto loc_82D8E20C;
loc_82D8E704:
	// lwz r11,108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// addi r5,r1,768
	ctx.r5.s64 = ctx.r1.s64 + 768;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8E718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8f604
	if (!ctx.cr6.eq) goto loc_82D8F604;
	// lwz r11,1028(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1028);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x82d8e73c
	if (!ctx.cr6.gt) goto loc_82D8E73C;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// lwz r10,1044(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1044);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
loc_82D8E73C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d8e704
	if (ctx.cr6.lt) goto loc_82D8E704;
	// b 0x82d8e20c
	goto loc_82D8E20C;
loc_82D8E758:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82d8e770
	if (ctx.cr6.eq) goto loc_82D8E770;
	// lwz r11,32(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
	// bne cr6,0x82d8e774
	if (!ctx.cr6.eq) goto loc_82D8E774;
loc_82D8E770:
	// lwz r15,24(r10)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
loc_82D8E774:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d8e7a4
	if (ctx.cr6.eq) goto loc_82D8E7A4;
	// lwz r11,220(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8e7a0
	if (ctx.cr6.eq) goto loc_82D8E7A0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82de7c90
	ctx.lr = 0x82D8E794;
	sub_82DE7C90(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82de7968
	ctx.lr = 0x82D8E79C;
	sub_82DE7968(ctx, base);
	// b 0x82d8e7a4
	goto loc_82D8E7A4;
loc_82D8E7A0:
	// stw r26,220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 220, ctx.r26.u32);
loc_82D8E7A4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82de8a80
	ctx.lr = 0x82D8E7AC;
	sub_82DE8A80(ctx, base);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// ble cr6,0x82d8e7e0
	if (!ctx.cr6.gt) goto loc_82D8E7E0;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2499
	ctx.r6.s64 = 2499;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r4,r15,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82D8E7D0;
	sub_82D862B0(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// beq cr6,0x82d8e048
	if (ctx.cr6.eq) goto loc_82D8E048;
loc_82D8E7E0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x82d8e7f4
	if (!ctx.cr6.eq) goto loc_82D8E7F4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82D8E7F4:
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8E808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82d8f5c8
	if (!ctx.cr6.eq) goto loc_82D8F5C8;
	// lwz r27,17668(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17668);
	// lwz r10,420(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r11,1252(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1252);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82d8e838
	if (!ctx.cr6.gt) goto loc_82D8E838;
	// li r3,75
	ctx.r3.s64 = 75;
	// addi r1,r1,17648
	ctx.r1.s64 = ctx.r1.s64 + 17648;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D8E838:
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,72(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8e85c
	if (ctx.cr6.eq) goto loc_82D8E85C;
	// rlwinm r11,r24,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8e85c
	if (!ctx.cr6.eq) goto loc_82D8E85C;
	// ori r24,r24,128
	ctx.r24.u64 = ctx.r24.u64 | 128;
	// stw r24,17684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 17684, ctx.r24.u32);
loc_82D8E85C:
	// lwz r11,60(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x82d8e9a4
	if (!ctx.cr6.eq) goto loc_82D8E9A4;
	// rlwinm r11,r24,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8e87c
	if (ctx.cr6.eq) goto loc_82D8E87C;
	// lwz r31,0(r17)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// b 0x82d8e8b0
	goto loc_82D8E8B0;
loc_82D8E87C:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2543
	ctx.r6.s64 = 2543;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,316
	ctx.r4.s64 = 316;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82D8E898;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d8e048
	if (ctx.cr6.eq) goto loc_82D8E048;
	// bl 0x82de5150
	ctx.lr = 0x82D8E8A4;
	sub_82DE5150(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d8e048
	if (ctx.cr6.eq) goto loc_82D8E048;
loc_82D8E8B0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8e8f0
	if (!ctx.cr6.eq) goto loc_82D8E8F0;
	// rlwinm r11,r24,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8e8f0
	if (!ctx.cr6.eq) goto loc_82D8E8F0;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2552
	ctx.r6.s64 = 2552;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82D8E8E4;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// beq cr6,0x82d8e048
	if (ctx.cr6.eq) goto loc_82D8E048;
loc_82D8E8F0:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r27,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r27.u32);
	// beq cr6,0x82d8e904
	if (ctx.cr6.eq) goto loc_82D8E904;
	// lwz r11,44(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 44);
	// b 0x82d8e908
	goto loc_82D8E908;
loc_82D8E904:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D8E908:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// beq cr6,0x82d8e91c
	if (ctx.cr6.eq) goto loc_82D8E91C;
	// lwz r10,48(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// b 0x82d8e920
	goto loc_82D8E920;
loc_82D8E91C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D8E920:
	// stw r10,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
	// addis r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 65536;
	// stw r31,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r31.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-27740
	ctx.r11.s64 = ctx.r11.s64 + -27740;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// lfs f0,14068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14068);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// beq cr6,0x82d8e990
	if (ctx.cr6.eq) goto loc_82D8E990;
	// lwz r11,68(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 68);
	// lwz r29,17684(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17684);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stw r31,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r31.u32);
	// b 0x82d90438
	goto loc_82D90438;
loc_82D8E990:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r29,17684(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17684);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stw r31,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r31.u32);
	// b 0x82d90438
	goto loc_82D90438;
loc_82D8E9A4:
	// rlwinm r11,r24,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8fa5c
	if (ctx.cr6.eq) goto loc_82D8FA5C;
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm r11,r24,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x10000;
	// rlwinm r30,r24,0,23,21
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// beq cr6,0x82d8ea54
	if (ctx.cr6.eq) goto loc_82D8EA54;
	// lwz r29,0(r17)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
loc_82D8E9CC:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8ead0
	if (!ctx.cr6.eq) goto loc_82D8EAD0;
	// rlwinm r11,r24,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8ead0
	if (!ctx.cr6.eq) goto loc_82D8EAD0;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2607
	ctx.r6.s64 = 2607;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82D8EA00;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
	// bne cr6,0x82d8ead0
	if (!ctx.cr6.eq) goto loc_82D8EAD0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82d8ea30
	if (ctx.cr6.eq) goto loc_82D8EA30;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2612
	ctx.r6.s64 = 2612;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82D8EA30;
	sub_82D861B0(ctx, base);
loc_82D8EA30:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8EA44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,17648
	ctx.r1.s64 = ctx.r1.s64 + 17648;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D8EA54:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2593
	ctx.r6.s64 = 2593;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,340
	ctx.r4.s64 = 340;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82D8EA70;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d8ea88
	if (ctx.cr6.eq) goto loc_82D8EA88;
	// bl 0x82de8fb8
	ctx.lr = 0x82D8EA7C;
	sub_82DE8FB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82d8e9cc
	if (!ctx.cr6.eq) goto loc_82D8E9CC;
loc_82D8EA88:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82d8eaac
	if (ctx.cr6.eq) goto loc_82D8EAAC;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2598
	ctx.r6.s64 = 2598;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82D8EAAC;
	sub_82D861B0(ctx, base);
loc_82D8EAAC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8EAC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,17648
	ctx.r1.s64 = ctx.r1.s64 + 17648;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D8EAD0:
	// stw r18,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r18.u32);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r15,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r15.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 244, ctx.r27.u32);
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// beq cr6,0x82d8ebfc
	if (ctx.cr6.eq) goto loc_82D8EBFC;
	// lwz r11,416(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82d8ebfc
	if (ctx.cr6.gt) goto loc_82D8EBFC;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-5352
	ctx.r12.s64 = ctx.r12.s64 + -5352;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D8EB7C;
	case 1:
		goto loc_82D8EB44;
	case 2:
		goto loc_82D8EB4C;
	case 3:
		goto loc_82D8EB54;
	case 4:
		goto loc_82D8EB5C;
	case 5:
		goto loc_82D8EB5C;
	case 6:
		goto loc_82D8EB7C;
	case 7:
		goto loc_82D8EB7C;
	case 8:
		goto loc_82D8EB7C;
	case 9:
		goto loc_82D8EB7C;
	case 10:
		goto loc_82D8EB7C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-5252(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5252);
	// lwz r22,-5308(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5308);
	// lwz r22,-5300(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5300);
	// lwz r22,-5292(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5292);
	// lwz r22,-5284(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5284);
	// lwz r22,-5284(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5284);
	// lwz r22,-5252(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5252);
	// lwz r22,-5252(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5252);
	// lwz r22,-5252(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5252);
	// lwz r22,-5252(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5252);
	// lwz r22,-5252(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5252);
loc_82D8EB44:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82d8eb60
	goto loc_82D8EB60;
loc_82D8EB4C:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82d8eb60
	goto loc_82D8EB60;
loc_82D8EB54:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82d8eb60
	goto loc_82D8EB60;
loc_82D8EB5C:
	// li r11,32
	ctx.r11.s64 = 32;
loc_82D8EB60:
	// rldicl r10,r10,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 3) & 0x7FFFFFFFF;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicr r10,r10,0,60
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFFFF8;
	// tdllei r11,0
	// divdu r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 / ctx.r11.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82d8ebf4
	goto loc_82D8EBF4;
loc_82D8EB7C:
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-5228
	ctx.r12.s64 = ctx.r12.s64 + -5228;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r22,-5136(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5136);
	// lwz r22,-5124(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5124);
	// lwz r22,-5124(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5124);
	// lwz r22,-5124(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5124);
	// lwz r22,-5124(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5124);
	// lwz r22,-5124(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5124);
	// lwz r22,-5184(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5184);
	// lwz r22,-5172(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5172);
	// lwz r22,-5156(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5156);
	// lwz r22,-5144(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5144);
	// lwz r22,-5144(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -5144);
	// mulli r11,r10,14
	ctx.r11.s64 = ctx.r10.s64 * 14;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8ebf4
	goto loc_82D8EBF4;
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// mulhwu r11,r11,r21
	ctx.r11.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r21.u32)) >> 32;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8ebf4
	goto loc_82D8EBF4;
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// b 0x82d8ebf4
	goto loc_82D8EBF4;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// b 0x82d8ebfc
	goto loc_82D8EBFC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82D8EBF4:
	// divwu r25,r11,r23
	ctx.r25.u32 = ctx.r11.u32 / ctx.r23.u32;
	// twllei r23,0
loc_82D8EBFC:
	// lis r11,4194
	ctx.r11.s64 = 274857984;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// ori r24,r11,19923
	ctx.r24.u64 = ctx.r11.u64 | 19923;
	// beq cr6,0x82d8ec18
	if (ctx.cr6.eq) goto loc_82D8EC18;
	// lwz r11,24(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8ec3c
	if (!ctx.cr6.eq) goto loc_82D8EC3C;
loc_82D8EC18:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r26,17668(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17668);
	// lwz r10,424(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// ori r11,r11,38140
	ctx.r11.u64 = ctx.r11.u64 | 38140;
	// lwzx r11,r26,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mulhwu r11,r11,r24
	ctx.r11.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r24.u32)) >> 32;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// b 0x82d8ec40
	goto loc_82D8EC40;
loc_82D8EC3C:
	// lwz r26,17668(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17668);
loc_82D8EC40:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82d8ec4c
	if (!ctx.cr6.eq) goto loc_82D8EC4C;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_82D8EC4C:
	// cmplwi cr6,r25,256
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 256, ctx.xer);
	// bge cr6,0x82d8ec70
	if (!ctx.cr6.lt) goto loc_82D8EC70;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82d8ec60
	if (!ctx.cr6.eq) goto loc_82D8EC60;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
loc_82D8EC60:
	// addi r10,r25,255
	ctx.r10.s64 = ctx.r25.s64 + 255;
	// twllei r25,0
	// divwu r10,r10,r25
	ctx.r10.u32 = ctx.r10.u32 / ctx.r25.u32;
	// mullw r25,r10,r25
	ctx.r25.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
loc_82D8EC70:
	// divwu r11,r11,r25
	ctx.r11.u32 = ctx.r11.u32 / ctx.r25.u32;
	// twllei r25,0
	// mullw r31,r11,r25
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x82d8ec88
	if (ctx.cr6.gt) goto loc_82D8EC88;
	// rlwinm r31,r25,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_82D8EC88:
	// rlwimi r30,r20,1,29,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r20.u32, 1) & 0x7) | (ctx.r30.u64 & 0xFFFFFFFFFFFFFFF8);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,296
	ctx.r5.s64 = 296;
	// rlwimi r30,r20,1,3,3
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r20.u32, 1) & 0x10000000) | (ctx.r30.u64 & 0xFFFFFFFFEFFFFFFF);
	// bl 0x82cb1160
	ctx.lr = 0x82D8ECA0;
	sub_82CB1160(ctx, base);
	// lis r18,4096
	ctx.r18.s64 = 268435456;
	// lis r17,8192
	ctx.r17.s64 = 536870912;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82d8ecd8
	if (ctx.cr6.eq) goto loc_82D8ECD8;
	// lwz r11,92(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8ecd8
	if (ctx.cr6.eq) goto loc_82D8ECD8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d8eccc
	if (!ctx.cr6.eq) goto loc_82D8ECCC;
	// stw r18,1060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1060, ctx.r18.u32);
	// b 0x82d8ecd8
	goto loc_82D8ECD8;
loc_82D8ECCC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82d8ecd8
	if (!ctx.cr6.eq) goto loc_82D8ECD8;
	// stw r17,1060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1060, ctx.r17.u32);
loc_82D8ECD8:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stw r31,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r31.u32);
	// li r20,0
	ctx.r20.s64 = 0;
	// stw r23,1028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1028, ctx.r23.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,768
	ctx.r5.s64 = ctx.r1.s64 + 768;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,1052(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1052, ctx.r11.u32);
	// stw r20,1048(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1048, ctx.r20.u32);
	// bl 0x82d8c0e8
	ctx.lr = 0x82D8ED04;
	sub_82D8C0E8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82d8f5a0
	if (!ctx.cr6.eq) goto loc_82D8F5A0;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82d8ed20
	if (ctx.cr6.eq) goto loc_82D8ED20;
	// lwz r11,44(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 44);
	// b 0x82d8ed24
	goto loc_82D8ED24;
loc_82D8ED20:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82D8ED24:
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r11,292(r27)
	PPC_STORE_U32(ctx.r27.u32 + 292, ctx.r11.u32);
	// beq cr6,0x82d8ed3c
	if (ctx.cr6.eq) goto loc_82D8ED3C;
	// lwz r11,48(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// b 0x82d8ed40
	goto loc_82D8ED40;
loc_82D8ED3C:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82D8ED40:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r11,296(r27)
	PPC_STORE_U32(ctx.r27.u32 + 296, ctx.r11.u32);
	// beq cr6,0x82d8ed54
	if (ctx.cr6.eq) goto loc_82D8ED54;
	// lwz r11,68(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 68);
	// b 0x82d8ed58
	goto loc_82D8ED58;
loc_82D8ED54:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82D8ED58:
	// stw r11,236(r27)
	PPC_STORE_U32(ctx.r27.u32 + 236, ctx.r11.u32);
	// stw r29,300(r27)
	PPC_STORE_U32(ctx.r27.u32 + 300, ctx.r29.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r11.u32);
	// lwz r11,164(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8eda0
	if (ctx.cr6.eq) goto loc_82D8EDA0;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// ble cr6,0x82d8eda0
	if (!ctx.cr6.gt) goto loc_82D8EDA0;
	// addi r11,r27,168
	ctx.r11.s64 = ctx.r27.s64 + 168;
loc_82D8ED80:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,60(r9)
	PPC_STORE_U32(ctx.r9.u32 + 60, ctx.r8.u32);
	// lwz r9,164(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d8ed80
	if (ctx.cr6.lt) goto loc_82D8ED80;
loc_82D8EDA0:
	// stw r27,320(r29)
	PPC_STORE_U32(ctx.r29.u32 + 320, ctx.r27.u32);
	// rlwinm r11,r30,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r20,148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 148, ctx.r20.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// lwz r10,432(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r10,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r10.u32);
	// lwz r10,428(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// stw r10,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r10.u32);
	// lwz r10,424(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,72(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 72, temp.u32);
	// lwz r11,416(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// stw r23,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r23.u32);
	// stw r26,244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 244, ctx.r26.u32);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// beq cr6,0x82d8ee04
	if (ctx.cr6.eq) goto loc_82D8EE04;
	// lwz r11,44(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 44);
	// b 0x82d8ee08
	goto loc_82D8EE08;
loc_82D8EE04:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82D8EE08:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r11,292(r29)
	PPC_STORE_U32(ctx.r29.u32 + 292, ctx.r11.u32);
	// beq cr6,0x82d8ee1c
	if (ctx.cr6.eq) goto loc_82D8EE1C;
	// lwz r11,48(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// b 0x82d8ee20
	goto loc_82D8EE20;
loc_82D8EE1C:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82D8EE20:
	// stw r11,296(r29)
	PPC_STORE_U32(ctx.r29.u32 + 296, ctx.r11.u32);
	// addis r30,r26,1
	ctx.r30.s64 = ctx.r26.s64 + 65536;
	// stw r29,300(r29)
	PPC_STORE_U32(ctx.r29.u32 + 300, ctx.r29.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r25,328(r29)
	PPC_STORE_U32(ctx.r29.u32 + 328, ctx.r25.u32);
	// addi r30,r30,-27740
	ctx.r30.s64 = ctx.r30.s64 + -27740;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 100, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,14068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14068);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,104(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 104, temp.u32);
	// beq cr6,0x82d8ee6c
	if (ctx.cr6.eq) goto loc_82D8EE6C;
	// lwz r11,68(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 68);
	// b 0x82d8ee70
	goto loc_82D8EE70;
loc_82D8EE6C:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82D8EE70:
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r11,236(r29)
	PPC_STORE_U32(ctx.r29.u32 + 236, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d8ee88
	if (ctx.cr6.eq) goto loc_82D8EE88;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82da4448
	ctx.lr = 0x82D8EE88;
	sub_82DA4448(ctx, base);
loc_82D8EE88:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82d8eebc
	if (ctx.cr6.eq) goto loc_82D8EEBC;
	// lwz r11,92(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8eebc
	if (ctx.cr6.eq) goto loc_82D8EEBC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d8eeac
	if (!ctx.cr6.eq) goto loc_82D8EEAC;
	// stw r18,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r18.u32);
	// b 0x82d8eec4
	goto loc_82D8EEC4;
loc_82D8EEAC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82d8eec4
	if (!ctx.cr6.eq) goto loc_82D8EEC4;
	// stw r17,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r17.u32);
	// b 0x82d8eec4
	goto loc_82D8EEC4;
loc_82D8EEBC:
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// stw r11,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r11.u32);
loc_82D8EEC4:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,0,29,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF87;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// rlwinm r10,r10,0,25,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x78;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// lwz r10,448(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82d8ef20
	if (!ctx.cr6.eq) goto loc_82D8EF20;
	// lwz r9,17684(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17684);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82d8ef20
	if (!ctx.cr6.eq) goto loc_82D8EF20;
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d8ef18
	if (!ctx.cr6.eq) goto loc_82D8EF18;
	// rlwinm r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8ef20
	if (ctx.cr6.eq) goto loc_82D8EF20;
loc_82D8EF18:
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x82d8ef24
	goto loc_82D8EF24;
loc_82D8EF20:
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_82D8EF24:
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r6,444(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,440(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8EF4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,284(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 284);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r23,17668(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r20,r10,38344
	ctx.r20.u64 = ctx.r10.u64 | 38344;
	// bne cr6,0x82d8ef88
	if (!ctx.cr6.eq) goto loc_82D8EF88;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r23,r20
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r20.u32);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8EF7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82d8f5c8
	if (!ctx.cr6.eq) goto loc_82D8F5C8;
loc_82D8EF88:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2793
	ctx.r6.s64 = 2793;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,192
	ctx.r4.s64 = 192;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82D8EFA4;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d8efb4
	if (ctx.cr6.eq) goto loc_82D8EFB4;
	// bl 0x82dea690
	ctx.lr = 0x82D8EFB0;
	sub_82DEA690(ctx, base);
	// b 0x82d8efb8
	goto loc_82D8EFB8;
loc_82D8EFB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D8EFB8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,316(r29)
	PPC_STORE_U32(ctx.r29.u32 + 316, ctx.r3.u32);
	// bne cr6,0x82d8effc
	if (!ctx.cr6.eq) goto loc_82D8EFFC;
loc_82D8EFC4:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8efec
	if (!ctx.cr6.eq) goto loc_82D8EFEC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8EFEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D8EFEC:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,17648
	ctx.r1.s64 = ctx.r1.s64 + 17648;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D8EFFC:
	// addis r31,r23,1
	ctx.r31.s64 = ctx.r23.s64 + 65536;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// addi r31,r31,-26504
	ctx.r31.s64 = ctx.r31.s64 + -26504;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82da41c0
	ctx.lr = 0x82D8F010;
	sub_82DA41C0(ctx, base);
	// addis r10,r23,1
	ctx.r10.s64 = ctx.r23.s64 + 65536;
	// stw r29,312(r29)
	PPC_STORE_U32(ctx.r29.u32 + 312, ctx.r29.u32);
	// addi r11,r29,304
	ctx.r11.s64 = ctx.r29.s64 + 304;
	// addi r10,r10,-26820
	ctx.r10.s64 = ctx.r10.s64 + -26820;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82da4200
	ctx.lr = 0x82D8F040;
	sub_82DA4200(ctx, base);
	// lwz r18,17684(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17684);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// ble cr6,0x82d8f2d0
	if (!ctx.cr6.gt) goto loc_82D8F2D0;
	// rlwinm r11,r18,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8f2d0
	if (!ctx.cr6.eq) goto loc_82D8F2D0;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2818
	ctx.r6.s64 = 2818;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,340
	ctx.r4.s64 = 340;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82D8F074;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d8efc4
	if (ctx.cr6.eq) goto loc_82D8EFC4;
	// bl 0x82de8fb8
	ctx.lr = 0x82D8F080;
	sub_82DE8FB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d8efc4
	if (ctx.cr6.eq) goto loc_82D8EFC4;
	// rlwinm r26,r18,0,4,4
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x8000000;
	// stw r31,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r31.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82d8f0c4
	if (!ctx.cr6.eq) goto loc_82D8F0C4;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2832
	ctx.r6.s64 = 2832;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82D8F0B8;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// beq cr6,0x82d8efc4
	if (ctx.cr6.eq) goto loc_82D8EFC4;
loc_82D8F0C4:
	// stw r23,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r23.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r27,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r27.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r25,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r25.u32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stw r31,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r31.u32);
	// bne cr6,0x82d8f14c
	if (!ctx.cr6.eq) goto loc_82D8F14C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r23,r20
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r20.u32);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8F140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82d8f5c8
	if (!ctx.cr6.eq) goto loc_82D8F5C8;
loc_82D8F14C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// ble cr6,0x82d8f274
	if (!ctx.cr6.gt) goto loc_82D8F274;
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82D8F15C:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82d8f258
	if (!ctx.cr6.lt) goto loc_82D8F258;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8F188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82d8f5c8
	if (!ctx.cr6.eq) goto loc_82D8F5C8;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d8f1a8
	if (ctx.cr6.eq) goto loc_82D8F1A8;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// bl 0x82da4448
	ctx.lr = 0x82D8F1A8;
	sub_82DA4448(ctx, base);
loc_82D8F1A8:
	// lwz r11,728(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 728);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r8,720(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lwz r4,744(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 744);
	// lwz r6,748(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// lwz r7,724(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// subf r11,r4,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r4.s64;
	// lwz r3,736(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,756(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,732(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,160(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 160);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D8F224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8f258
	if (ctx.cr6.eq) goto loc_82D8F258;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D8F24C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82d8f5c8
	if (!ctx.cr6.eq) goto loc_82D8F5C8;
loc_82D8F258:
	// lwz r11,140(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r30,r15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r15.s32, ctx.xer);
	// stw r11,140(r29)
	PPC_STORE_U32(ctx.r29.u32 + 140, ctx.r11.u32);
	// blt cr6,0x82d8f15c
	if (ctx.cr6.lt) goto loc_82D8F15C;
loc_82D8F274:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8f294
	if (ctx.cr6.eq) goto loc_82D8F294;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da1b90
	ctx.lr = 0x82D8F294;
	sub_82DA1B90(ctx, base);
loc_82D8F294:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82d8f304
	if (!ctx.cr6.eq) goto loc_82D8F304;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82d8f2b0
	if (ctx.cr6.eq) goto loc_82D8F2B0;
	// lwz r11,28(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d8f304
	if (!ctx.cr6.eq) goto loc_82D8F304;
loc_82D8F2B0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8F2CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d8f304
	goto loc_82D8F304;
loc_82D8F2D0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8f304
	if (ctx.cr6.eq) goto loc_82D8F304;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D8F2F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82d8f5c8
	if (!ctx.cr6.eq) goto loc_82D8F5C8;
loc_82D8F304:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82d8f618
	if (ctx.cr6.eq) goto loc_82D8F618;
	// lwz r11,104(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 104);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82d8f600
	if (ctx.cr6.gt) goto loc_82D8F600;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-3280
	ctx.r12.s64 = ctx.r12.s64 + -3280;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D8F4B4;
	case 1:
		goto loc_82D8F478;
	case 2:
		goto loc_82D8F4B4;
	case 3:
		goto loc_82D8F600;
	case 4:
		goto loc_82D8F344;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-2892(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2892);
	// lwz r22,-2952(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2952);
	// lwz r22,-2892(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2892);
	// lwz r22,-2560(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2560);
	// lwz r22,-3260(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3260);
loc_82D8F344:
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lwz r10,100(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 100);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82d8f46c
	if (ctx.cr6.eq) goto loc_82D8F46C;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82d8f46c
	if (ctx.cr6.gt) goto loc_82D8F46C;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-3208
	ctx.r12.s64 = ctx.r12.s64 + -3208;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D8F3D8;
	case 1:
		goto loc_82D8F3A4;
	case 2:
		goto loc_82D8F3AC;
	case 3:
		goto loc_82D8F3B4;
	case 4:
		goto loc_82D8F3BC;
	case 5:
		goto loc_82D8F3BC;
	case 6:
		goto loc_82D8F3D8;
	case 7:
		goto loc_82D8F3D8;
	case 8:
		goto loc_82D8F3D8;
	case 9:
		goto loc_82D8F3D8;
	case 10:
		goto loc_82D8F3D8;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-3112(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3112);
	// lwz r22,-3164(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3164);
	// lwz r22,-3156(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3156);
	// lwz r22,-3148(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3148);
	// lwz r22,-3140(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3140);
	// lwz r22,-3140(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3140);
	// lwz r22,-3112(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3112);
	// lwz r22,-3112(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3112);
	// lwz r22,-3112(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3112);
	// lwz r22,-3112(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3112);
	// lwz r22,-3112(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3112);
loc_82D8F3A4:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82d8f3c0
	goto loc_82D8F3C0;
loc_82D8F3AC:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82d8f3c0
	goto loc_82D8F3C0;
loc_82D8F3B4:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82d8f3c0
	goto loc_82D8F3C0;
loc_82D8F3BC:
	// li r11,32
	ctx.r11.s64 = 32;
loc_82D8F3C0:
	// rldicl r10,r10,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 3) & 0x7FFFFFFFF;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicr r10,r10,0,60
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFFFF8;
	// tdllei r11,0
	// divdu r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 / ctx.r11.u64;
	// b 0x82d8f458
	goto loc_82D8F458;
loc_82D8F3D8:
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-3088
	ctx.r12.s64 = ctx.r12.s64 + -3088;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r22,-2988(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2988);
	// lwz r22,-2964(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2964);
	// lwz r22,-2964(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2964);
	// lwz r22,-2964(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2964);
	// lwz r22,-2964(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2964);
	// lwz r22,-2964(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2964);
	// lwz r22,-3044(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3044);
	// lwz r22,-3032(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3032);
	// lwz r22,-3016(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3016);
	// lwz r22,-3004(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3004);
	// lwz r22,-3004(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3004);
	// mulli r11,r10,14
	ctx.r11.s64 = ctx.r10.s64 * 14;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8f458
	goto loc_82D8F458;
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// mulhwu r11,r11,r21
	ctx.r11.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r21.u32)) >> 32;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8f458
	goto loc_82D8F458;
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// b 0x82d8f458
	goto loc_82D8F458;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,100(r16)
	PPC_STORE_U32(ctx.r16.u32 + 100, ctx.r10.u32);
	// stw r11,104(r16)
	PPC_STORE_U32(ctx.r16.u32 + 104, ctx.r11.u32);
	// b 0x82d8f4b4
	goto loc_82D8F4B4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D8F458:
	// stw r11,100(r16)
	PPC_STORE_U32(ctx.r16.u32 + 100, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// twllei r9,0
	// divwu r11,r11,r9
	ctx.r11.u32 = ctx.r11.u32 / ctx.r9.u32;
	// stw r11,100(r16)
	PPC_STORE_U32(ctx.r16.u32 + 100, ctx.r11.u32);
loc_82D8F46C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,104(r16)
	PPC_STORE_U32(ctx.r16.u32 + 104, ctx.r11.u32);
	// b 0x82d8f4b4
	goto loc_82D8F4B4;
loc_82D8F478:
	// lwz r11,100(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 100);
	// lfs f0,72(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// li r10,2
	ctx.r10.s64 = 2;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,104(r16)
	PPC_STORE_U32(ctx.r16.u32 + 104, ctx.r10.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,6480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6480);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// li r12,100
	ctx.r12.s64 = 100;
	// stfiwx f0,r16,r12
	PPC_STORE_U32(ctx.r16.u32 + ctx.r12.u32, ctx.f0.u32);
loc_82D8F4B4:
	// lwz r11,28(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8f610
	if (ctx.cr6.eq) goto loc_82D8F610;
	// lwz r10,128(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8f610
	if (ctx.cr6.eq) goto loc_82D8F610;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d8f5d8
	if (ctx.cr6.lt) goto loc_82D8F5D8;
	// lwz r10,136(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82d8f5d8
	if (!ctx.cr6.lt) goto loc_82D8F5D8;
	// stw r11,148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 148, ctx.r11.u32);
	// lwz r10,316(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lwz r11,28(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// stw r11,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r11.u32);
	// lwz r11,148(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// lwz r10,128(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d8f684
	if (ctx.cr6.eq) goto loc_82D8F684;
	// lwz r11,28(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// lwz r11,28(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// stw r11,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r11.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8f57c
	if (ctx.cr6.eq) goto loc_82D8F57C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,28(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da1b90
	ctx.lr = 0x82D8F538;
	sub_82DA1B90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82d8f57c
	if (ctx.cr6.eq) goto loc_82D8F57C;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8f56c
	if (!ctx.cr6.eq) goto loc_82D8F56C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8F56C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D8F56C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,17648
	ctx.r1.s64 = ctx.r1.s64 + 17648;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D8F57C:
	// lwz r11,100(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 100);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,336(r29)
	PPC_STORE_U32(ctx.r29.u32 + 336, ctx.r11.u32);
	// lwz r4,100(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 100);
	// bl 0x82de8cf0
	ctx.lr = 0x82D8F594;
	sub_82DE8CF0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82d8f684
	if (ctx.cr6.eq) goto loc_82D8F684;
loc_82D8F5A0:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8f5c8
	if (!ctx.cr6.eq) goto loc_82D8F5C8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8F5C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D8F5C8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,17648
	ctx.r1.s64 = ctx.r1.s64 + 17648;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D8F5D8:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8f600
	if (!ctx.cr6.eq) goto loc_82D8F600;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8F600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D8F600:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82D8F604:
	// addi r1,r1,17648
	ctx.r1.s64 = ctx.r1.s64 + 17648;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D8F610:
	// lwz r11,100(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 100);
	// b 0x82d8f61c
	goto loc_82D8F61C;
loc_82D8F618:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D8F61C:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r11,336(r29)
	PPC_STORE_U32(ctx.r29.u32 + 336, ctx.r11.u32);
	// beq cr6,0x82d8f630
	if (ctx.cr6.eq) goto loc_82D8F630;
	// lwz r4,100(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 100);
	// b 0x82d8f634
	goto loc_82D8F634;
loc_82D8F630:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82D8F634:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82de8cf0
	ctx.lr = 0x82D8F640;
	sub_82DE8CF0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82d8f684
	if (ctx.cr6.eq) goto loc_82D8F684;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8f5c8
	if (!ctx.cr6.eq) goto loc_82D8F5C8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8F674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,17648
	ctx.r1.s64 = ctx.r1.s64 + 17648;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D8F684:
	// rlwinm r11,r18,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8f6a4
	if (!ctx.cr6.eq) goto loc_82D8F6A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82de97b0
	ctx.lr = 0x82D8F698;
	sub_82DE97B0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82d8f5a0
	if (!ctx.cr6.eq) goto loc_82D8F5A0;
loc_82D8F6A4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r11,r11,38432
	ctx.r11.u64 = ctx.r11.u64 | 38432;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// lwzx r10,r23,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// ori r11,r11,38428
	ctx.r11.u64 = ctx.r11.u64 | 38428;
	// bne cr6,0x82d8f6d0
	if (!ctx.cr6.eq) goto loc_82D8F6D0;
	// lwzx r4,r23,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// b 0x82d8fa28
	goto loc_82D8FA28;
loc_82D8F6D0:
	// lwzx r11,r23,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82d8f700
	if (!ctx.cr6.eq) goto loc_82D8F700;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lfs f0,72(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mulhwu r11,r11,r24
	ctx.r11.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r24.u32)) >> 32;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// b 0x82d8f814
	goto loc_82D8F814;
loc_82D8F700:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82d8f814
	if (!ctx.cr6.eq) goto loc_82D8F814;
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82d8f814
	if (ctx.cr6.eq) goto loc_82D8F814;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bgt cr6,0x82d8f814
	if (ctx.cr6.gt) goto loc_82D8F814;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-2248
	ctx.r12.s64 = ctx.r12.s64 + -2248;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82D8F79C;
	case 1:
		goto loc_82D8F764;
	case 2:
		goto loc_82D8F76C;
	case 3:
		goto loc_82D8F774;
	case 4:
		goto loc_82D8F77C;
	case 5:
		goto loc_82D8F77C;
	case 6:
		goto loc_82D8F79C;
	case 7:
		goto loc_82D8F79C;
	case 8:
		goto loc_82D8F79C;
	case 9:
		goto loc_82D8F79C;
	case 10:
		goto loc_82D8F79C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-2148(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2148);
	// lwz r22,-2204(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2204);
	// lwz r22,-2196(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2196);
	// lwz r22,-2188(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2188);
	// lwz r22,-2180(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2180);
	// lwz r22,-2180(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2180);
	// lwz r22,-2148(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2148);
	// lwz r22,-2148(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2148);
	// lwz r22,-2148(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2148);
	// lwz r22,-2148(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2148);
	// lwz r22,-2148(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2148);
loc_82D8F764:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x82d8f780
	goto loc_82D8F780;
loc_82D8F76C:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x82d8f780
	goto loc_82D8F780;
loc_82D8F774:
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x82d8f780
	goto loc_82D8F780;
loc_82D8F77C:
	// li r10,32
	ctx.r10.s64 = 32;
loc_82D8F780:
	// rldicl r11,r11,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 3) & 0x7FFFFFFFF;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldicr r11,r11,0,60
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFFFF8;
	// tdllei r10,0
	// divdu r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 / ctx.r10.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82d8f80c
	goto loc_82D8F80C;
loc_82D8F79C:
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-2124
	ctx.r12.s64 = ctx.r12.s64 + -2124;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r22,-2040(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2040);
	// lwz r22,-2028(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2028);
	// lwz r22,-2028(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2028);
	// lwz r22,-2028(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2028);
	// lwz r22,-2028(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2028);
	// lwz r22,-2028(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2028);
	// lwz r22,-2080(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2080);
	// lwz r22,-2068(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2068);
	// lwz r22,-2052(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2052);
	// lwz r22,-2028(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2028);
	// lwz r22,-2028(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2028);
	// mulli r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 * 14;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8f80c
	goto loc_82D8F80C;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mulhwu r11,r11,r21
	ctx.r11.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r21.u32)) >> 32;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8f80c
	goto loc_82D8F80C;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// b 0x82d8f80c
	goto loc_82D8F80C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D8F80C:
	// divwu r11,r11,r9
	ctx.r11.u32 = ctx.r11.u32 / ctx.r9.u32;
	// twllei r9,0
loc_82D8F814:
	// lwz r8,36(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x82d8f8b0
	if (ctx.cr6.eq) goto loc_82D8F8B0;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82d8f8b0
	if (ctx.cr6.eq) goto loc_82D8F8B0;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d8f858
	if (ctx.cr6.eq) goto loc_82D8F858;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r9,r8,32
	ctx.r9.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x82d8f870
	goto loc_82D8F870;
loc_82D8F858:
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// clrldi r9,r8,32
	ctx.r9.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
loc_82D8F870:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x82d8fa28
	goto loc_82D8FA28;
loc_82D8F8B0:
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bgt cr6,0x82d8fa28
	if (ctx.cr6.gt) goto loc_82D8FA28;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-1832
	ctx.r12.s64 = ctx.r12.s64 + -1832;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82D8F944;
	case 1:
		goto loc_82D8F904;
	case 2:
		goto loc_82D8F914;
	case 3:
		goto loc_82D8F924;
	case 4:
		goto loc_82D8F934;
	case 5:
		goto loc_82D8F934;
	case 6:
		goto loc_82D8F944;
	case 7:
		goto loc_82D8F944;
	case 8:
		goto loc_82D8F944;
	case 9:
		goto loc_82D8F944;
	case 10:
		goto loc_82D8F944;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-1724(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1724);
	// lwz r22,-1788(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1788);
	// lwz r22,-1772(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1772);
	// lwz r22,-1756(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1756);
	// lwz r22,-1740(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1740);
	// lwz r22,-1740(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1740);
	// lwz r22,-1724(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1724);
	// lwz r22,-1724(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1724);
	// lwz r22,-1724(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1724);
	// lwz r22,-1724(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1724);
	// lwz r22,-1724(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1724);
loc_82D8F904:
	// li r10,8
	ctx.r10.s64 = 8;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8fa24
	goto loc_82D8FA24;
loc_82D8F914:
	// li r10,16
	ctx.r10.s64 = 16;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8fa24
	goto loc_82D8FA24;
loc_82D8F924:
	// li r10,24
	ctx.r10.s64 = 24;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8fa24
	goto loc_82D8FA24;
loc_82D8F934:
	// li r10,32
	ctx.r10.s64 = 32;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8fa24
	goto loc_82D8FA24;
loc_82D8F944:
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-1700
	ctx.r12.s64 = ctx.r12.s64 + -1700;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r22,-1504(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1504);
	// lwz r22,-1496(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1496);
	// lwz r22,-1496(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1496);
	// lwz r22,-1496(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1496);
	// lwz r22,-1496(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1496);
	// lwz r22,-1496(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1496);
	// lwz r22,-1656(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1656);
	// lwz r22,-1596(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1596);
	// lwz r22,-1572(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1572);
	// lwz r22,-1512(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1512);
	// lwz r22,-1512(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1512);
	// lis r10,9362
	ctx.r10.s64 = 613548032;
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// ori r25,r10,18725
	ctx.r25.u64 = ctx.r10.u64 | 18725;
	// mulhwu r10,r11,r25
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r25.u32)) >> 32;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// mulhwu r10,r11,r25
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r25.u32)) >> 32;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d8fa24
	goto loc_82D8FA24;
	// addi r11,r11,63
	ctx.r11.s64 = ctx.r11.s64 + 63;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,6,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFFFC;
	// b 0x82d8fa24
	goto loc_82D8FA24;
	// lis r10,9362
	ctx.r10.s64 = 613548032;
	// addi r11,r11,27
	ctx.r11.s64 = ctx.r11.s64 + 27;
	// ori r25,r10,18725
	ctx.r25.u64 = ctx.r10.u64 | 18725;
	// mulhwu r10,r11,r25
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r25.u32)) >> 32;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mulli r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 * 448;
	// mulhwu r10,r11,r25
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r25.u32)) >> 32;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// b 0x82d8fa24
	goto loc_82D8FA24;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82d8fa28
	goto loc_82D8FA28;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D8FA24:
	// mullw r4,r9,r11
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
loc_82D8FA28:
	// rlwinm r11,r18,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8fa4c
	if (!ctx.cr6.eq) goto loc_82D8FA4C;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82da8620
	ctx.lr = 0x82D8FA40;
	sub_82DA8620(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82d8f5a0
	if (!ctx.cr6.eq) goto loc_82D8F5A0;
loc_82D8FA4C:
	// lwz r11,17708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17708);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r29,17684(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17684);
	// b 0x82d90438
	goto loc_82D90438;
loc_82D8FA5C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r21,r11,37796
	ctx.r21.u64 = ctx.r11.u64 | 37796;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// lfs f31,14068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14068);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x82d8fba4
	if (!ctx.cr6.gt) goto loc_82D8FBA4;
	// lwz r31,17684(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17684);
	// rlwinm r11,r31,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8fa98
	if (ctx.cr6.eq) goto loc_82D8FA98;
	// lwz r24,0(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// b 0x82d8facc
	goto loc_82D8FACC;
loc_82D8FA98:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3136
	ctx.r6.s64 = 3136;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,316
	ctx.r4.s64 = 316;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82D8FAB4;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d8e048
	if (ctx.cr6.eq) goto loc_82D8E048;
	// bl 0x82de5150
	ctx.lr = 0x82D8FAC0;
	sub_82DE5150(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82d8e048
	if (ctx.cr6.eq) goto loc_82D8E048;
loc_82D8FACC:
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8fb0c
	if (!ctx.cr6.eq) goto loc_82D8FB0C;
	// rlwinm r11,r31,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8fb0c
	if (!ctx.cr6.eq) goto loc_82D8FB0C;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3145
	ctx.r6.s64 = 3145;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82D8FB00;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28, ctx.r3.u32);
	// beq cr6,0x82d8e048
	if (ctx.cr6.eq) goto loc_82D8E048;
loc_82D8FB0C:
	// lwz r9,17668(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17668);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r9,244(r24)
	PPC_STORE_U32(ctx.r24.u32 + 244, ctx.r9.u32);
	// beq cr6,0x82d8fb24
	if (ctx.cr6.eq) goto loc_82D8FB24;
	// lwz r11,44(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 44);
	// b 0x82d8fb28
	goto loc_82D8FB28;
loc_82D8FB24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D8FB28:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r11,292(r24)
	PPC_STORE_U32(ctx.r24.u32 + 292, ctx.r11.u32);
	// beq cr6,0x82d8fb3c
	if (ctx.cr6.eq) goto loc_82D8FB3C;
	// lwz r10,48(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// b 0x82d8fb40
	goto loc_82D8FB40;
loc_82D8FB3C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D8FB40:
	// stw r10,296(r24)
	PPC_STORE_U32(ctx.r24.u32 + 296, ctx.r10.u32);
	// add r11,r9,r21
	ctx.r11.u64 = ctx.r9.u64 + ctx.r21.u64;
	// stw r24,300(r24)
	PPC_STORE_U32(ctx.r24.u32 + 300, ctx.r24.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// lwz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// stw r9,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r9.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,60(r24)
	PPC_STORE_U32(ctx.r24.u32 + 60, ctx.r9.u32);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 100, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r18,128(r24)
	PPC_STORE_U32(ctx.r24.u32 + 128, ctx.r18.u32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stw r15,136(r24)
	PPC_STORE_U32(ctx.r24.u32 + 136, ctx.r15.u32);
	// stfs f0,104(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 104, temp.u32);
	// stw r10,148(r24)
	PPC_STORE_U32(ctx.r24.u32 + 148, ctx.r10.u32);
	// beq cr6,0x82d8fb94
	if (ctx.cr6.eq) goto loc_82D8FB94;
	// lwz r11,68(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 68);
	// b 0x82d8fb98
	goto loc_82D8FB98;
loc_82D8FB94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D8FB98:
	// stw r11,236(r24)
	PPC_STORE_U32(ctx.r24.u32 + 236, ctx.r11.u32);
	// stw r31,24(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24, ctx.r31.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82D8FBA4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r29,17684(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17684);
	// li r23,0
	ctx.r23.s64 = 0;
	// ori r20,r11,38344
	ctx.r20.u64 = ctx.r11.u64 | 38344;
	// lis r11,9362
	ctx.r11.s64 = 613548032;
	// lis r18,4096
	ctx.r18.s64 = 268435456;
	// lis r17,8192
	ctx.r17.s64 = 536870912;
	// ori r25,r11,18725
	ctx.r25.u64 = ctx.r11.u64 | 18725;
loc_82D8FBC4:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d8fbd4
	if (ctx.cr6.eq) goto loc_82D8FBD4;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_82D8FBD4:
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82d903b8
	if (!ctx.cr6.lt) goto loc_82D903B8;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d8fbec
	if (ctx.cr6.eq) goto loc_82D8FBEC;
	// lwz r11,24(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
loc_82D8FBEC:
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82d903b8
	if (!ctx.cr6.lt) goto loc_82D903B8;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r3,r7,24
	ctx.r3.s64 = ctx.r7.s64 + 24;
	// bne cr6,0x82d8fc08
	if (!ctx.cr6.eq) goto loc_82D8FC08;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D8FC08:
	// lwz r11,108(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 108);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8FC1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82d8f5c8
	if (!ctx.cr6.eq) goto loc_82D8F5C8;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x82d8fc4c
	if (!ctx.cr6.eq) goto loc_82D8FC4C;
	// rlwinm r11,r29,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8fc4c
	if (ctx.cr6.eq) goto loc_82D8FC4C;
	// lwz r11,17708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17708);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x82d8fcb8
	goto loc_82D8FCB8;
loc_82D8FC4C:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// ble cr6,0x82d8fcb8
	if (!ctx.cr6.gt) goto loc_82D8FCB8;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82d8fce8
	if (ctx.cr6.eq) goto loc_82D8FCE8;
	// lwz r11,36(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8fcb8
	if (ctx.cr6.eq) goto loc_82D8FCB8;
	// lwz r8,40(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82d8fcac
	if (!ctx.cr6.gt) goto loc_82D8FCAC;
loc_82D8FC84:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r23
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r23.s32, ctx.xer);
	// beq cr6,0x82d8fca8
	if (ctx.cr6.eq) goto loc_82D8FCA8;
	// lwz r8,40(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82d8fc84
	if (ctx.cr6.lt) goto loc_82D8FC84;
	// b 0x82d8fcac
	goto loc_82D8FCAC;
loc_82D8FCA8:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82D8FCAC:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d9029c
	if (ctx.cr6.eq) goto loc_82D9029C;
loc_82D8FCB8:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82d8fce8
	if (ctx.cr6.eq) goto loc_82D8FCE8;
	// lwz r11,92(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8fce8
	if (ctx.cr6.eq) goto loc_82D8FCE8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d8fcdc
	if (!ctx.cr6.eq) goto loc_82D8FCDC;
	// stw r18,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r18.u32);
	// b 0x82d8fce8
	goto loc_82D8FCE8;
loc_82D8FCDC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82d8fce8
	if (!ctx.cr6.eq) goto loc_82D8FCE8;
	// stw r17,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r17.u32);
loc_82D8FCE8:
	// rlwinm r11,r29,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8fd30
	if (ctx.cr6.eq) goto loc_82D8FD30;
	// lwz r11,720(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82d8fd2c
	if (ctx.cr6.eq) goto loc_82D8FD2C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82d8fd2c
	if (ctx.cr6.eq) goto loc_82D8FD2C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82d8fd2c
	if (ctx.cr6.eq) goto loc_82D8FD2C;
	// rlwinm r30,r29,0,23,21
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82d8fd30
	if (ctx.cr6.eq) goto loc_82D8FD30;
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// stw r11,24(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24, ctx.r11.u32);
	// b 0x82d8fd30
	goto loc_82D8FD30;
loc_82D8FD2C:
	// li r19,1
	ctx.r19.s64 = 1;
loc_82D8FD30:
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8fd6c
	if (!ctx.cr6.eq) goto loc_82D8FD6C;
	// rlwinm r11,r29,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8fd6c
	if (ctx.cr6.eq) goto loc_82D8FD6C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d902a8
	if (ctx.cr6.eq) goto loc_82D902A8;
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8FD64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8f604
	if (!ctx.cr6.eq) goto loc_82D8F604;
loc_82D8FD6C:
	// lwz r29,17668(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17668);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d8c0e8
	ctx.lr = 0x82D8FD84;
	sub_82D8C0E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82d902b8
	if (!ctx.cr6.eq) goto loc_82D902B8;
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r29,r21
	ctx.r11.u64 = ctx.r29.u64 + ctx.r21.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r23,148(r26)
	PPC_STORE_U32(ctx.r26.u32 + 148, ctx.r23.u32);
	// stw r24,144(r26)
	PPC_STORE_U32(ctx.r26.u32 + 144, ctx.r24.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// stw r10,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,60(r26)
	PPC_STORE_U32(ctx.r26.u32 + 60, ctx.r10.u32);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 100, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,104(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 104, temp.u32);
	// beq cr6,0x82d8fdd8
	if (ctx.cr6.eq) goto loc_82D8FDD8;
	// lwz r11,68(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 68);
	// b 0x82d8fddc
	goto loc_82D8FDDC;
loc_82D8FDD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D8FDDC:
	// stw r11,236(r26)
	PPC_STORE_U32(ctx.r26.u32 + 236, ctx.r11.u32);
	// lwz r11,164(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d8fe24
	if (ctx.cr6.eq) goto loc_82D8FE24;
	// li r10,0
	ctx.r10.s64 = 0;
	// ble cr6,0x82d8fe24
	if (!ctx.cr6.gt) goto loc_82D8FE24;
	// addi r11,r26,168
	ctx.r11.s64 = ctx.r26.s64 + 168;
loc_82D8FDF8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,60(r9)
	PPC_STORE_U32(ctx.r9.u32 + 60, ctx.r8.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,148(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// stw r8,148(r9)
	PPC_STORE_U32(ctx.r9.u32 + 148, ctx.r8.u32);
	// lwz r9,164(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 164);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82d8fdf8
	if (ctx.cr6.lt) goto loc_82D8FDF8;
loc_82D8FE24:
	// lwz r11,284(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d8fe50
	if (!ctx.cr6.eq) goto loc_82D8FE50;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r4,r29,r20
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r20.u32);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8FE48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8f604
	if (!ctx.cr6.eq) goto loc_82D8F604;
loc_82D8FE50:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x82d8fe94
	if (!ctx.cr6.eq) goto loc_82D8FE94;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82d8fe94
	if (!ctx.cr6.eq) goto loc_82D8FE94;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82d8fe70
	if (ctx.cr6.eq) goto loc_82D8FE70;
	// lwz r11,44(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 44);
	// b 0x82d8fe74
	goto loc_82D8FE74;
loc_82D8FE70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D8FE74:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r11,292(r26)
	PPC_STORE_U32(ctx.r26.u32 + 292, ctx.r11.u32);
	// beq cr6,0x82d8fe88
	if (ctx.cr6.eq) goto loc_82D8FE88;
	// lwz r11,48(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// b 0x82d8fe8c
	goto loc_82D8FE8C;
loc_82D8FE88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D8FE8C:
	// stw r11,296(r26)
	PPC_STORE_U32(ctx.r26.u32 + 296, ctx.r11.u32);
	// stw r26,300(r26)
	PPC_STORE_U32(ctx.r26.u32 + 300, ctx.r26.u32);
loc_82D8FE94:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8fec8
	if (ctx.cr6.eq) goto loc_82D8FEC8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8FEBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8f604
	if (!ctx.cr6.eq) goto loc_82D8F604;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82D8FEC8:
	// bl 0x82d86e98
	ctx.lr = 0x82D8FECC;
	sub_82D86E98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8f604
	if (!ctx.cr6.eq) goto loc_82D8F604;
	// lwz r11,752(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 752);
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d8fef4
	if (!ctx.cr6.eq) goto loc_82D8FEF4;
	// rlwinm r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x200;
	// li r6,2
	ctx.r6.s64 = 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8fef8
	if (ctx.cr6.eq) goto loc_82D8FEF8;
loc_82D8FEF4:
	// li r6,8
	ctx.r6.s64 = 8;
loc_82D8FEF8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82de8110
	ctx.lr = 0x82D8FF08;
	sub_82DE8110(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82d8f5c8
	if (!ctx.cr6.eq) goto loc_82D8F5C8;
	// lwz r11,296(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d8ff54
	if (ctx.cr6.eq) goto loc_82D8FF54;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// ble cr6,0x82d8ff40
	if (!ctx.cr6.gt) goto loc_82D8FF40;
	// lwz r11,296(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 296);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x82d8ff4c
	goto loc_82D8FF4C;
loc_82D8FF40:
	// lwz r11,296(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 296);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82D8FF4C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D8FF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D8FF54:
	// rlwinm r11,r30,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d901b8
	if (ctx.cr6.eq) goto loc_82D901B8;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,228(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d9015c
	if (ctx.cr6.eq) goto loc_82D9015C;
	// lwz r8,164(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 164);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82d9015c
	if (ctx.cr6.eq) goto loc_82D9015C;
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// twllei r8,0
	// lwz r9,64(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// divwu r11,r11,r8
	ctx.r11.u32 = ctx.r11.u32 / ctx.r8.u32;
	// bgt cr6,0x82d900f4
	if (ctx.cr6.gt) goto loc_82D900F4;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,-76
	ctx.r12.s64 = ctx.r12.s64 + -76;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82D90020;
	case 1:
		goto loc_82D8FFE0;
	case 2:
		goto loc_82D8FFF0;
	case 3:
		goto loc_82D90000;
	case 4:
		goto loc_82D90010;
	case 5:
		goto loc_82D90010;
	case 6:
		goto loc_82D90020;
	case 7:
		goto loc_82D90020;
	case 8:
		goto loc_82D90020;
	case 9:
		goto loc_82D90020;
	case 10:
		goto loc_82D90020;
	default:
		__builtin_unreachable();
	}
	// lwz r22,32(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// lwz r22,-32(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -32);
	// lwz r22,-16(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16);
	// lwz r22,0(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r22,16(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r22,16(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r22,32(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// lwz r22,32(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// lwz r22,32(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// lwz r22,32(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// lwz r22,32(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
loc_82D8FFE0:
	// li r10,8
	ctx.r10.s64 = 8;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d900f0
	goto loc_82D900F0;
loc_82D8FFF0:
	// li r10,16
	ctx.r10.s64 = 16;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d900f0
	goto loc_82D900F0;
loc_82D90000:
	// li r10,24
	ctx.r10.s64 = 24;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d900f0
	goto loc_82D900F0;
loc_82D90010:
	// li r10,32
	ctx.r10.s64 = 32;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d900f0
	goto loc_82D900F0;
loc_82D90020:
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,56
	ctx.r12.s64 = ctx.r12.s64 + 56;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r22,236(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 236);
	// lwz r22,244(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 244);
	// lwz r22,244(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 244);
	// lwz r22,244(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 244);
	// lwz r22,244(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 244);
	// lwz r22,244(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 244);
	// lwz r22,100(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// lwz r22,152(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 152);
	// lwz r22,176(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 176);
	// lwz r22,228(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// lwz r22,228(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// mulhwu r10,r11,r25
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r25.u32)) >> 32;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// mulhwu r10,r11,r25
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r25.u32)) >> 32;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82d900f0
	goto loc_82D900F0;
	// addi r11,r11,63
	ctx.r11.s64 = ctx.r11.s64 + 63;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,6,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFFFC;
	// b 0x82d900f0
	goto loc_82D900F0;
	// addi r11,r11,27
	ctx.r11.s64 = ctx.r11.s64 + 27;
	// mulhwu r10,r11,r25
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r25.u32)) >> 32;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mulli r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 * 448;
	// mulhwu r10,r11,r25
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r25.u32)) >> 32;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// b 0x82d900f0
	goto loc_82D900F0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x82d900f4
	goto loc_82D900F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D900F0:
	// mullw r27,r9,r11
	ctx.r27.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
loc_82D900F4:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82d90278
	if (!ctx.cr6.gt) goto loc_82D90278;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r26,168
	ctx.r31.s64 = ctx.r26.s64 + 168;
loc_82D90108:
	// lwz r11,224(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 224);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,17676(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17676);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D90130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82d9018c
	if (!ctx.cr6.eq) goto loc_82D9018C;
	// lwz r11,164(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 164);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d90108
	if (ctx.cr6.lt) goto loc_82D90108;
	// b 0x82d90278
	goto loc_82D90278;
loc_82D9015C:
	// lwz r11,224(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 224);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,17676(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17676);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// lwz r10,196(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D90180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82d90274
	if (ctx.cr6.eq) goto loc_82D90274;
loc_82D9018C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82d90314
	if (ctx.cr6.eq) goto loc_82D90314;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D901AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x82d90328
	goto loc_82D90328;
loc_82D901B8:
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d90274
	if (!ctx.cr6.eq) goto loc_82D90274;
	// lwz r11,752(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 752);
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d901e8
	if (!ctx.cr6.eq) goto loc_82D901E8;
	// rlwinm r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d901e8
	if (!ctx.cr6.eq) goto loc_82D901E8;
	// lwz r31,736(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// b 0x82d9020c
	goto loc_82D9020C;
loc_82D901E8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,732(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82d9020c
	if (ctx.cr6.eq) goto loc_82D9020C;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x82d9020c
	if (ctx.cr6.eq) goto loc_82D9020C;
	// lwz r11,156(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_82D9020C:
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da1dc0
	ctx.lr = 0x82D90220;
	sub_82DA1DC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82d90234
	if (ctx.cr6.eq) goto loc_82D90234;
	// cmpwi cr6,r30,22
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 22, ctx.xer);
	// bne cr6,0x82d90348
	if (!ctx.cr6.eq) goto loc_82D90348;
loc_82D90234:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82d90254
	if (ctx.cr6.eq) goto loc_82D90254;
	// lwz r10,48(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// lwz r9,36(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82d90254
	if (!ctx.cr6.eq) goto loc_82D90254;
	// stw r11,48(r26)
	PPC_STORE_U32(ctx.r26.u32 + 48, ctx.r11.u32);
loc_82D90254:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da0078
	ctx.lr = 0x82D90260;
	sub_82DA0078(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82d90274
	if (ctx.cr6.eq) goto loc_82D90274;
	// cmpwi cr6,r22,22
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 22, ctx.xer);
	// bne cr6,0x82d8f5c8
	if (!ctx.cr6.eq) goto loc_82D8F5C8;
loc_82D90274:
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82D90278:
	// lwz r29,17684(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17684);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// ble cr6,0x82d902a0
	if (!ctx.cr6.gt) goto loc_82D902A0;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
	// lwz r11,140(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 140);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,140(r24)
	PPC_STORE_U32(ctx.r24.u32 + 140, ctx.r11.u32);
loc_82D9029C:
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82D902A0:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// b 0x82d8fbc4
	goto loc_82D8FBC4;
loc_82D902A8:
	// li r3,43
	ctx.r3.s64 = 43;
	// addi r1,r1,17648
	ctx.r1.s64 = ctx.r1.s64 + 17648;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D902B8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82d902e8
	if (ctx.cr6.eq) goto loc_82D902E8;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D902D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,17648
	ctx.r1.s64 = ctx.r1.s64 + 17648;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D902E8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d90304
	if (ctx.cr6.eq) goto loc_82D90304;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D90304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D90304:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,17648
	ctx.r1.s64 = ctx.r1.s64 + 17648;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D90314:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d90338
	if (ctx.cr6.eq) goto loc_82D90338;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82D90328:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D90338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D90338:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,17648
	ctx.r1.s64 = ctx.r1.s64 + 17648;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D90348:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d903a8
	if (!ctx.cr6.eq) goto loc_82D903A8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82d90384
	if (ctx.cr6.eq) goto loc_82D90384;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D90378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x82d90398
	goto loc_82D90398;
loc_82D90384:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d903a8
	if (ctx.cr6.eq) goto loc_82D903A8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82D90398:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D903A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D903A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,17648
	ctx.r1.s64 = ctx.r1.s64 + 17648;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D903B8:
	// rlwinm r11,r29,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d90420
	if (!ctx.cr6.eq) goto loc_82D90420;
	// lwz r11,60(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82d903ec
	if (!ctx.cr6.eq) goto loc_82D903EC;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// ble cr6,0x82d903ec
	if (!ctx.cr6.gt) goto loc_82D903EC;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82d903ec
	if (ctx.cr6.eq) goto loc_82D903EC;
	// lwz r11,36(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d90420
	if (!ctx.cr6.eq) goto loc_82D90420;
loc_82D903EC:
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8310
	ctx.lr = 0x82D903F8;
	sub_82DA8310(ctx, base);
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3468
	ctx.r6.s64 = 3468;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82D90414;
	sub_82D861B0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r10.u32);
loc_82D90420:
	// lwz r11,17708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17708);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// ble cr6,0x82d90434
	if (!ctx.cr6.gt) goto loc_82D90434;
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// b 0x82d90438
	goto loc_82D90438;
loc_82D90434:
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_82D90438:
	// lwz r30,17708(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17708);
	// lis r31,-31901
	ctx.r31.s64 = -2090663936;
	// lwz r3,9876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9876);
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82da41c0
	ctx.lr = 0x82D9044C;
	sub_82DA41C0(ctx, base);
	// lwz r11,17668(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17668);
	// addic. r10,r11,24
	ctx.xer.ca = ctx.r11.u32 > 4294967271;
	ctx.r10.s64 = ctx.r11.s64 + 24;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// bne 0x82d90460
	if (!ctx.cr0.eq) goto loc_82D90460;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D90460:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,9876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9876);
	// bl 0x82da4200
	ctx.lr = 0x82D90488;
	sub_82DA4200(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82d904b8
	if (ctx.cr6.eq) goto loc_82D904B8;
	// cmpwi cr6,r22,22
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 22, ctx.xer);
	// beq cr6,0x82d904b8
	if (ctx.cr6.eq) goto loc_82D904B8;
	// rlwinm r11,r29,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d904a8
	if (!ctx.cr6.eq) goto loc_82D904A8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82D904A8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,17648
	ctx.r1.s64 = ctx.r1.s64 + 17648;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82D904B8:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d90674
	if (ctx.cr6.eq) goto loc_82D90674;
	// lwz r27,17684(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17684);
	// rlwinm r29,r27,0,7,7
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d904e0
	if (ctx.cr6.eq) goto loc_82D904E0;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d904ec
	if (ctx.cr6.eq) goto loc_82D904EC;
loc_82D904E0:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d90674
	if (!ctx.cr6.eq) goto loc_82D90674;
loc_82D904EC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d90584
	if (ctx.cr6.eq) goto loc_82D90584;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r3,220(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r31,r10,-744
	ctx.r31.s64 = ctx.r10.s64 + -744;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82de7ab0
	ctx.lr = 0x82D9051C;
	sub_82DE7AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d9054c
	if (ctx.cr6.eq) goto loc_82D9054C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r31,r11,-748
	ctx.r31.s64 = ctx.r11.s64 + -748;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,220(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// bl 0x82de7ab0
	ctx.lr = 0x82D90544;
	sub_82DE7AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d90584
	if (!ctx.cr6.eq) goto loc_82D90584;
loc_82D9054C:
	// li r5,256
	ctx.r5.s64 = 256;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x82da4468
	ctx.lr = 0x82D9055C;
	sub_82DA4468(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,220(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// bl 0x82de7d60
	ctx.lr = 0x82D90584;
	sub_82DE7D60(ctx, base);
loc_82D90584:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d90674
	if (ctx.cr6.eq) goto loc_82D90674;
	// rlwinm r11,r27,0,3,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1FFFF800;
	// rlwinm r11,r11,0,20,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF0000FFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d90674
	if (!ctx.cr6.eq) goto loc_82D90674;
	// lwz r31,17676(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17676);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d90674
	if (ctx.cr6.eq) goto loc_82D90674;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82d90620
	if (ctx.cr6.eq) goto loc_82D90620;
	// bl 0x82de71b0
	ctx.lr = 0x82D905BC;
	sub_82DE71B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82d90604
	if (ctx.cr6.lt) goto loc_82D90604;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82D905CC:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// beq cr6,0x82d905f8
	if (ctx.cr6.eq) goto loc_82D905F8;
	// cmpwi cr6,r10,47
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 47, ctx.xer);
	// beq cr6,0x82d905f8
	if (ctx.cr6.eq) goto loc_82D905F8;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82d905cc
	if (!ctx.cr6.lt) goto loc_82D905CC;
	// b 0x82d90604
	goto loc_82D90604;
loc_82D905F8:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82d90608
	if (!ctx.cr6.lt) goto loc_82D90608;
loc_82D90604:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D90608:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// li r5,128
	ctx.r5.s64 = 128;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82de7200
	ctx.lr = 0x82D9061C;
	sub_82DE7200(ctx, base);
	// b 0x82d90674
	goto loc_82D90674;
loc_82D90620:
	// bl 0x82da4420
	ctx.lr = 0x82D90624;
	sub_82DA4420(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82d90660
	if (ctx.cr6.lt) goto loc_82D90660;
loc_82D9062C:
	// lbzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// beq cr6,0x82d90654
	if (ctx.cr6.eq) goto loc_82D90654;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x82d90654
	if (ctx.cr6.eq) goto loc_82D90654;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82d9062c
	if (!ctx.cr6.lt) goto loc_82D9062C;
	// b 0x82d90660
	goto loc_82D90660;
loc_82D90654:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82d90664
	if (!ctx.cr6.lt) goto loc_82D90664;
loc_82D90660:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D90664:
	// li r5,256
	ctx.r5.s64 = 256;
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82da4468
	ctx.lr = 0x82D90674;
	sub_82DA4468(ctx, base);
loc_82D90674:
	// lbz r11,17703(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 17703);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d90684
	if (!ctx.cr6.eq) goto loc_82D90684;
	// stw r11,268(r28)
	PPC_STORE_U32(ctx.r28.u32 + 268, ctx.r11.u32);
loc_82D90684:
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82d85bf8
	ctx.lr = 0x82D9068C;
	sub_82D85BF8(ctx, base);
	// lwz r10,248(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,248(r28)
	PPC_STORE_U32(ctx.r28.u32 + 248, ctx.r11.u32);
	// addi r1,r1,17648
	ctx.r1.s64 = ctx.r1.s64 + 17648;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D906AC"))) PPC_WEAK_FUNC(sub_82D906AC);
PPC_FUNC_IMPL(__imp__sub_82D906AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D906B0"))) PPC_WEAK_FUNC(sub_82D906B0);
PPC_FUNC_IMPL(__imp__sub_82D906B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D906B8;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82da0240
	ctx.lr = 0x82D906E0;
	sub_82DA0240(ctx, base);
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// bl 0x82d9b4a8
	ctx.lr = 0x82D906E8;
	sub_82D9B4A8(ctx, base);
	// addi r3,r31,776
	ctx.r3.s64 = ctx.r31.s64 + 776;
	// bl 0x82d9b4a8
	ctx.lr = 0x82D906F0;
	sub_82D9B4A8(ctx, base);
	// addi r9,r31,1808
	ctx.r9.s64 = ctx.r31.s64 + 1808;
	// addi r11,r31,1216
	ctx.r11.s64 = ctx.r31.s64 + 1216;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r10,r9,1552
	ctx.r10.s64 = ctx.r9.s64 + 1552;
	// addi r9,r9,1564
	ctx.r9.s64 = ctx.r9.s64 + 1564;
	// addi r3,r31,4432
	ctx.r3.s64 = ctx.r31.s64 + 4432;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stw r30,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r30.u32);
	// bl 0x82da8bb0
	ctx.lr = 0x82D90734;
	sub_82DA8BB0(ctx, base);
	// addi r11,r31,4492
	ctx.r11.s64 = ctx.r31.s64 + 4492;
	// li r10,1023
	ctx.r10.s64 = 1023;
loc_82D9073C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bge cr6,0x82d9073c
	if (!ctx.cr6.lt) goto loc_82D9073C;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-28276
	ctx.r11.s64 = ctx.r11.s64 + -28276;
	// addi r10,r10,-28244
	ctx.r10.s64 = ctx.r10.s64 + -28244;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// li r29,3
	ctx.r29.s64 = 3;
	// addi r28,r28,-28192
	ctx.r28.s64 = ctx.r28.s64 + -28192;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
loc_82D9078C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82deb658
	ctx.lr = 0x82D90794;
	sub_82DEB658(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,112
	ctx.r28.s64 = ctx.r28.s64 + 112;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82d9078c
	if (!ctx.cr6.lt) goto loc_82D9078C;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-27380
	ctx.r3.s64 = ctx.r3.s64 + -27380;
	// bl 0x82da8bb0
	ctx.lr = 0x82D907B0;
	sub_82DA8BB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// lfs f30,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f30.f64 = double(temp.f32);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lfs f31,6048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// addi r10,r10,-27188
	ctx.r10.s64 = ctx.r10.s64 + -27188;
	// addi r11,r11,-27284
	ctx.r11.s64 = ctx.r11.s64 + -27284;
	// addi r9,r9,-27176
	ctx.r9.s64 = ctx.r9.s64 + -27176;
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
	// addi r7,r7,-27160
	ctx.r7.s64 = ctx.r7.s64 + -27160;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// addi r3,r3,-27116
	ctx.r3.s64 = ctx.r3.s64 + -27116;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r30,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r30.u32);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// stfs f30,60(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f30,56(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f30,84(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f30,80(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f31,68(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f31,64(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f30,76(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f30,72(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stw r30,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r30.u32);
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r30.u32);
	// stw r30,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r30.u32);
	// bl 0x82deb3a0
	ctx.lr = 0x82D90848;
	sub_82DEB3A0(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-26840
	ctx.r11.s64 = ctx.r11.s64 + -26840;
	// addi r10,r10,-26820
	ctx.r10.s64 = ctx.r10.s64 + -26820;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-26808
	ctx.r3.s64 = ctx.r3.s64 + -26808;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// bl 0x82da4ba0
	ctx.lr = 0x82D9087C;
	sub_82DA4BA0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-26500
	ctx.r3.s64 = ctx.r3.s64 + -26500;
	// bl 0x82da8bb0
	ctx.lr = 0x82D90888;
	sub_82DA8BB0(ctx, base);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r28,r28,-25624
	ctx.r28.s64 = ctx.r28.s64 + -25624;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da4e50
	ctx.lr = 0x82D90898;
	sub_82DA4E50(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-25600
	ctx.r3.s64 = ctx.r3.s64 + -25600;
	// bl 0x82da6758
	ctx.lr = 0x82D908A4;
	sub_82DA6758(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-25016
	ctx.r3.s64 = ctx.r3.s64 + -25016;
	// bl 0x82da6758
	ctx.lr = 0x82D908B0;
	sub_82DA6758(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-24432
	ctx.r3.s64 = ctx.r3.s64 + -24432;
	// bl 0x82da6758
	ctx.lr = 0x82D908BC;
	sub_82DA6758(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// stb r30,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r30.u8);
	// ori r11,r11,37812
	ctx.r11.u64 = ctx.r11.u64 | 37812;
	// stw r30,1236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1236, ctx.r30.u32);
	// ori r10,r10,38212
	ctx.r10.u64 = ctx.r10.u64 | 38212;
	// stw r30,1232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1232, ctx.r30.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r30,1264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1264, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// ori r7,r7,38432
	ctx.r7.u64 = ctx.r7.u64 | 38432;
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// ori r9,r9,38428
	ctx.r9.u64 = ctx.r9.u64 | 38428;
	// stw r30,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r30.u32);
	// li r8,16384
	ctx.r8.s64 = 16384;
	// stw r30,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r30.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// stw r30,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r30.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r30,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r30.u32);
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// ori r6,r6,38240
	ctx.r6.u64 = ctx.r6.u64 | 38240;
	// ori r10,r10,38152
	ctx.r10.u64 = ctx.r10.u64 | 38152;
	// stw r30,4488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4488, ctx.r30.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stwx r8,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r7,r11,38224
	ctx.r7.u64 = ctx.r11.u64 | 38224;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// ori r9,r9,38220
	ctx.r9.u64 = ctx.r9.u64 | 38220;
	// ori r6,r11,38228
	ctx.r6.u64 = ctx.r11.u64 | 38228;
	// li r8,64
	ctx.r8.s64 = 64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stwx r30,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// ori r10,r10,38232
	ctx.r10.u64 = ctx.r10.u64 | 38232;
	// li r7,256
	ctx.r7.s64 = 256;
	// stwx r8,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// ori r9,r9,38236
	ctx.r9.u64 = ctx.r9.u64 | 38236;
	// li r10,1024
	ctx.r10.s64 = 1024;
	// stw r7,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r7.u32);
	// ori r8,r8,38244
	ctx.r8.u64 = ctx.r8.u64 | 38244;
	// ori r6,r6,37328
	ctx.r6.u64 = ctx.r6.u64 | 37328;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r11,r31,1296
	ctx.r11.s64 = ctx.r31.s64 + 1296;
	// stw r10,1276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1276, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stbx r30,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u8);
	// li r10,128
	ctx.r10.s64 = 128;
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82D909B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82d909b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D909B8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// li r29,6
	ctx.r29.s64 = 6;
	// stw r30,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r30.u32);
	// ori r10,r11,37336
	ctx.r10.u64 = ctx.r11.u64 | 37336;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r9,r11,37340
	ctx.r9.u64 = ctx.r11.u64 | 37340;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r29,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// lfs f11,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f11.f64 = double(temp.f32);
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// bl 0x82d89be0
	ctx.lr = 0x82D90A08;
	sub_82D89BE0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d89be0
	ctx.lr = 0x82D90A1C;
	sub_82D89BE0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d89be0
	ctx.lr = 0x82D90A30;
	sub_82D89BE0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d89be0
	ctx.lr = 0x82D90A44;
	sub_82D89BE0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// fmr f2,f11
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f11.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// bl 0x82d89be0
	ctx.lr = 0x82D90A5C;
	sub_82D89BE0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d89be0
	ctx.lr = 0x82D90A70;
	sub_82D89BE0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// bl 0x82d89be0
	ctx.lr = 0x82D90A88;
	sub_82D89BE0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d89be0
	ctx.lr = 0x82D90A9C;
	sub_82D89BE0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// lbz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r11.u32);
	// bne cr6,0x82d90b34
	if (!ctx.cr6.eq) goto loc_82D90B34;
	// lis r10,0
	ctx.r10.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// ori r10,r10,38436
	ctx.r10.u64 = ctx.r10.u64 | 38436;
	// stw r29,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x82d89be0
	ctx.lr = 0x82D90AD8;
	sub_82D89BE0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d89be0
	ctx.lr = 0x82D90AEC;
	sub_82D89BE0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d89be0
	ctx.lr = 0x82D90B00;
	sub_82D89BE0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// fmr f2,f11
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f11.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// bl 0x82d89be0
	ctx.lr = 0x82D90B18;
	sub_82D89BE0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d89be0
	ctx.lr = 0x82D90B2C;
	sub_82D89BE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d88558
	ctx.lr = 0x82D90B34;
	sub_82D88558(ctx, base);
loc_82D90B34:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stfs f30,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ori r10,r11,48000
	ctx.r10.u64 = ctx.r11.u64 | 48000;
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r10,1244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1244, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,-728(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ori r9,r9,37792
	ctx.r9.u64 = ctx.r9.u64 | 37792;
	// ori r11,r11,38372
	ctx.r11.u64 = ctx.r11.u64 | 38372;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ori r8,r8,37796
	ctx.r8.u64 = ctx.r8.u64 | 37796;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ori r7,r7,37800
	ctx.r7.u64 = ctx.r7.u64 | 37800;
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// ori r6,r6,37804
	ctx.r6.u64 = ctx.r6.u64 | 37804;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// stfsx f30,r31,r8
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// ori r27,r11,41688
	ctx.r27.u64 = ctx.r11.u64 | 41688;
	// stfsx f30,r31,r7
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfsx f30,r31,r6
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
	// addi r3,r3,-23844
	ctx.r3.s64 = ctx.r3.s64 + -23844;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// li r5,124
	ctx.r5.s64 = 124;
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r30,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r30.u32);
	// lfs f0,-18240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18240);
	ctx.f0.f64 = double(temp.f32);
	// li r11,-10000
	ctx.r11.s64 = -10000;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r30,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r30.u32);
	// stw r30,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r30.u32);
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r11,-2602
	ctx.r11.s64 = -2602;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stbx r30,r31,r27
	PPC_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r30.u8);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-18248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18248);
	ctx.f0.f64 = double(temp.f32);
	// li r11,200
	ctx.r11.s64 = 200;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r11,831
	ctx.r11.s64 = 831;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7616);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f0,-732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -732);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f0,-736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -736);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f0,-17720(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17720);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82D90C74;
	sub_82CB1160(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,39908
	ctx.r11.u64 = ctx.r11.u64 | 39908;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-27720
	ctx.r3.s64 = ctx.r3.s64 + -27720;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x82D90C98;
	sub_82CB16F0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,38096
	ctx.r11.u64 = ctx.r11.u64 | 38096;
	// ori r10,r10,38092
	ctx.r10.u64 = ctx.r10.u64 | 38092;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r9,r9,38088
	ctx.r9.u64 = ctx.r9.u64 | 38088;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r10,r11,38100
	ctx.r10.u64 = ctx.r11.u64 | 38100;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r7,r7,38128
	ctx.r7.u64 = ctx.r7.u64 | 38128;
	// ori r9,r9,38124
	ctx.r9.u64 = ctx.r9.u64 | 38124;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lfs f0,-18328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18328);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// ori r10,r10,38132
	ctx.r10.u64 = ctx.r10.u64 | 38132;
	// ori r6,r6,38136
	ctx.r6.u64 = ctx.r6.u64 | 38136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,-18332(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18332);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stfsx f31,r31,r10
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r8,r11,38116
	ctx.r8.u64 = ctx.r11.u64 | 38116;
	// stfsx f13,r31,r9
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, temp.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// ori r10,r10,38072
	ctx.r10.u64 = ctx.r10.u64 | 38072;
	// li r9,400
	ctx.r9.s64 = 400;
	// stwx r30,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// lfs f12,-18020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18020);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stfsx f12,r31,r7
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// stwx r29,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u32);
	// ori r11,r11,38120
	ctx.r11.u64 = ctx.r11.u64 | 38120;
	// lis r7,0
	ctx.r7.s64 = 0;
	// stwx r8,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,38080
	ctx.r7.u64 = ctx.r7.u64 | 38080;
	// stfsx f0,r31,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r8,r8,38076
	ctx.r8.u64 = ctx.r8.u64 | 38076;
	// ori r11,r11,38140
	ctx.r11.u64 = ctx.r11.u64 | 38140;
	// ori r10,r10,39636
	ctx.r10.u64 = ctx.r10.u64 | 39636;
	// stwx r29,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r29.u32);
	// stwx r29,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r29.u32);
	// stwx r9,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stwx r31,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r31.u32);
	// ori r11,r11,39092
	ctx.r11.u64 = ctx.r11.u64 | 39092;
	// ori r9,r9,39364
	ctx.r9.u64 = ctx.r9.u64 | 39364;
	// stwx r31,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r31.u32);
	// stwx r31,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r31.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D90D98"))) PPC_WEAK_FUNC(sub_82D90D98);
PPC_FUNC_IMPL(__imp__sub_82D90D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82D90DA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d90dc0
	if (!ctx.cr6.eq) goto loc_82D90DC0;
	// li r3,77
	ctx.r3.s64 = 77;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D90DC0:
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// addi r26,r26,-27380
	ctx.r26.s64 = ctx.r26.s64 + -27380;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da8be0
	ctx.lr = 0x82D90DD0;
	sub_82DA8BE0(ctx, base);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-27324
	ctx.r30.s64 = ctx.r30.s64 + -27324;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d90dec
	if (!ctx.cr6.eq) goto loc_82D90DEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da3de8
	ctx.lr = 0x82D90DEC;
	sub_82DA3DE8(ctx, base);
loc_82D90DEC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82da3de8
	ctx.lr = 0x82D90DF4;
	sub_82DA3DE8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// subf r27,r10,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bge cr6,0x82d90e0c
	if (!ctx.cr6.lt) goto loc_82D90E0C;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82D90E0C:
	// lwz r3,1264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1264);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d90e28
	if (ctx.cr6.eq) goto loc_82D90E28;
	// bl 0x82ded050
	ctx.lr = 0x82D90E20;
	sub_82DED050(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91098
	if (!ctx.cr6.eq) goto loc_82D91098;
loc_82D90E28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d8d718
	ctx.lr = 0x82D90E30;
	sub_82D8D718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91098
	if (!ctx.cr6.eq) goto loc_82D91098;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d872d8
	ctx.lr = 0x82D90E44;
	sub_82D872D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91098
	if (!ctx.cr6.eq) goto loc_82D91098;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d87c48
	ctx.lr = 0x82D90E58;
	sub_82D87C48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91098
	if (!ctx.cr6.eq) goto loc_82D91098;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,37328
	ctx.r11.u64 = ctx.r11.u64 | 37328;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d90ee4
	if (!ctx.cr6.eq) goto loc_82D90EE4;
	// lis r30,-31909
	ctx.r30.s64 = -2091188224;
	// lwz r11,19872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19872);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82da3de8
	ctx.lr = 0x82D90E84;
	sub_82DA3DE8(ctx, base);
	// lwz r11,19872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19872);
	// lis r8,6815
	ctx.r8.s64 = 446627840;
	// lis r7,1572
	ctx.r7.s64 = 103022592;
	// ori r8,r8,48759
	ctx.r8.u64 = ctx.r8.u64 | 48759;
	// ori r7,r7,56623
	ctx.r7.u64 = ctx.r7.u64 | 56623;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// extsw r9,r27
	ctx.r9.s64 = ctx.r27.s32;
	// rldimi r8,r7,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lwz r10,1244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1244);
	// addi r11,r11,-28200
	ctx.r11.s64 = ctx.r11.s64 + -28200;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// mulld r10,r10,r9
	ctx.r10.s64 = ctx.r10.s64 * ctx.r9.s64;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mulhdu r9,r10,r7
	ctx.r9.u64 = (ctx.r10.u64 * ctx.r7.u64) >> 64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rldicl r10,r10,63,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rldicl r10,r10,55,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 55) & 0x7FFFFFFFFFFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_82D90EE4:
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d90f50
	if (ctx.cr6.eq) goto loc_82D90F50;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d90f50
	if (ctx.cr6.eq) goto loc_82D90F50;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da8d60
	ctx.lr = 0x82D90F0C;
	sub_82DA8D60(ctx, base);
	// lis r11,-32034
	ctx.r11.s64 = -2099380224;
	// lwz r10,1232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x82d90f30
	if (!ctx.cr6.eq) goto loc_82D90F30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D90F30:
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D90F3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91098
	if (!ctx.cr6.eq) goto loc_82D91098;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da8d60
	ctx.lr = 0x82D90F50;
	sub_82DA8D60(ctx, base);
loc_82D90F50:
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r28,r28,-27128
	ctx.r28.s64 = ctx.r28.s64 + -27128;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d90fcc
	if (ctx.cr6.eq) goto loc_82D90FCC;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-27296
	ctx.r30.s64 = ctx.r30.s64 + -27296;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x82d90fc0
	if (ctx.cr6.lt) goto loc_82D90FC0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// bl 0x82da4398
	ctx.lr = 0x82D90F88;
	sub_82DA4398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91098
	if (!ctx.cr6.eq) goto loc_82D91098;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d90fc0
	if (ctx.cr6.eq) goto loc_82D90FC0;
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r29,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r29.u8);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D90FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D90FC0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82D90FCC:
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r9,r9,-27744
	ctx.r9.s64 = ctx.r9.s64 + -27744;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d91008
	if (!ctx.cr6.gt) goto loc_82D91008;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-28083
	ctx.r11.s64 = ctx.r11.s64 + -28083;
loc_82D90FEC:
	// stb r29,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r29.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82d90fec
	if (ctx.cr6.lt) goto loc_82D90FEC;
loc_82D91008:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,39916
	ctx.r11.u64 = ctx.r11.u64 | 39916;
	// stbx r29,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u8);
	// bl 0x82dec7a0
	ctx.lr = 0x82D91018;
	sub_82DEC7A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91098
	if (!ctx.cr6.eq) goto loc_82D91098;
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da8c18
	ctx.lr = 0x82D9102C;
	sub_82DA8C18(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d91044
	if (ctx.cr6.eq) goto loc_82D91044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d87178
	ctx.lr = 0x82D91044;
	sub_82D87178(ctx, base);
loc_82D91044:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d91070
	if (ctx.cr6.eq) goto loc_82D91070;
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d91070
	if (ctx.cr6.eq) goto loc_82D91070;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,224
	ctx.r3.s64 = ctx.r11.s64 + 224;
	// bl 0x82da4e30
	ctx.lr = 0x82D91070;
	sub_82DA4E30(ctx, base);
loc_82D91070:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d91094
	if (ctx.cr6.eq) goto loc_82D91094;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dec580
	ctx.lr = 0x82D9108C;
	sub_82DEC580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91098
	if (!ctx.cr6.eq) goto loc_82D91098;
loc_82D91094:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D91098:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D910A0"))) PPC_WEAK_FUNC(sub_82D910A0);
PPC_FUNC_IMPL(__imp__sub_82D910A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82D910A8;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lbz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d910d8
	if (!ctx.cr6.eq) goto loc_82D910D8;
	// li r3,77
	ctx.r3.s64 = 77;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82D910D8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82d910ec
	if (!ctx.cr6.eq) goto loc_82D910EC;
loc_82D910E0:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82D910EC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82d91100
	if (!ctx.cr6.eq) goto loc_82D91100;
	// rlwinm r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d910e0
	if (ctx.cr6.eq) goto loc_82D910E0;
loc_82D91100:
	// rlwinm r11,r30,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d9111c
	if (ctx.cr6.eq) goto loc_82D9111C;
	// rlwinm r11,r30,0,25,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d9111c
	if (!ctx.cr6.eq) goto loc_82D9111C;
	// ori r30,r30,32
	ctx.r30.u64 = ctx.r30.u64 | 32;
loc_82D9111C:
	// rlwinm r31,r30,0,25,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d91140
	if (!ctx.cr6.eq) goto loc_82D91140;
	// lwz r11,1232(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d91140
	if (!ctx.cr6.eq) goto loc_82D91140;
	// li r3,61
	ctx.r3.s64 = 61;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82D91140:
	// rlwinm r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d91170
	if (ctx.cr6.eq) goto loc_82D91170;
	// rlwinm r11,r30,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d91170
	if (ctx.cr6.eq) goto loc_82D91170;
	// rlwinm r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d91170
	if (!ctx.cr6.eq) goto loc_82D91170;
	// li r3,49
	ctx.r3.s64 = 49;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82D91170:
	// li r22,0
	ctx.r22.s64 = 0;
	// rlwinm r11,r30,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r22,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r22.u32);
	// beq cr6,0x82d91424
	if (ctx.cr6.eq) goto loc_82D91424;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d85b90
	ctx.lr = 0x82D9118C;
	sub_82D85B90(ctx, base);
	// rlwinm r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r28,-31909
	ctx.r28.s64 = -2091188224;
	// addi r29,r11,-848
	ctx.r29.s64 = ctx.r11.s64 + -848;
	// beq cr6,0x82d911ec
	if (ctx.cr6.eq) goto loc_82D911EC;
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8275
	ctx.r6.s64 = 8275;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,340
	ctx.r4.s64 = 340;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82D911C4;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d911d8
	if (ctx.cr6.eq) goto loc_82D911D8;
	// bl 0x82de8fb8
	ctx.lr = 0x82D911D0;
	sub_82DE8FB8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d911e4
	if (!ctx.cr6.eq) goto loc_82D911E4;
loc_82D911D8:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82D911E4:
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
	// b 0x82d912a0
	goto loc_82D912A0;
loc_82D911EC:
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// bne cr6,0x82d91274
	if (!ctx.cr6.eq) goto loc_82D91274;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d88da0
	ctx.lr = 0x82D91210;
	sub_82D88DA0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d91274
	if (ctx.cr6.eq) goto loc_82D91274;
	// lwz r11,1232(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1232);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d91274
	if (ctx.cr6.eq) goto loc_82D91274;
	// lis r10,-32034
	ctx.r10.s64 = -2099380224;
	// addi r10,r10,3160
	ctx.r10.s64 = ctx.r10.s64 + 3160;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,1232(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x82d9124c
	if (!ctx.cr6.eq) goto loc_82D9124C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82D9124C:
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D91264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,38244
	ctx.r11.u64 = ctx.r11.u64 | 38244;
	// stbx r26,r27,r11
	PPC_STORE_U8(ctx.r27.u32 + ctx.r11.u32, ctx.r26.u8);
	// b 0x82d91290
	goto loc_82D91290;
loc_82D91274:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,37328
	ctx.r11.u64 = ctx.r11.u64 | 37328;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x82de4c78
	ctx.lr = 0x82D91290;
	sub_82DE4C78(ctx, base);
loc_82D91290:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d9147c
	if (!ctx.cr6.eq) goto loc_82D9147C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_82D912A0:
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8324
	ctx.r6.s64 = 8324;
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,392
	ctx.r4.s64 = 392;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82D912C0;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r3.u32);
	// beq cr6,0x82d911d8
	if (ctx.cr6.eq) goto loc_82D911D8;
	// rlwinm r11,r30,0,3,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1FFFF800;
	// rlwinm r11,r11,0,20,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF0000FFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d912e4
	if (ctx.cr6.eq) goto loc_82D912E4;
	// stw r23,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r23.u32);
	// b 0x82d9130c
	goto loc_82D9130C;
loc_82D912E4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82d9130c
	if (ctx.cr6.eq) goto loc_82D9130C;
	// rlwinm r11,r30,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1000000;
	// li r5,256
	ctx.r5.s64 = 256;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// beq cr6,0x82d91308
	if (ctx.cr6.eq) goto loc_82D91308;
	// bl 0x82de7200
	ctx.lr = 0x82D91304;
	sub_82DE7200(ctx, base);
	// b 0x82d9130c
	goto loc_82D9130C;
loc_82D91308:
	// bl 0x82da4468
	ctx.lr = 0x82D9130C;
	sub_82DA4468(ctx, base);
loc_82D9130C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r27,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r27.u32);
	// stw r26,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r26.u32);
	// bl 0x82d85bf8
	ctx.lr = 0x82D91320;
	sub_82D85BF8(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r3,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r3.u32);
	// beq cr6,0x82d9136c
	if (ctx.cr6.eq) goto loc_82D9136C;
	// li r5,108
	ctx.r5.s64 = 108;
	// addi r3,r11,276
	ctx.r3.s64 = ctx.r11.s64 + 276;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82D91340;
	sub_82CB1160(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stb r26,384(r11)
	PPC_STORE_U8(ctx.r11.u32 + 384, ctx.r26.u8);
	// lwz r4,96(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d91370
	if (ctx.cr6.eq) goto loc_82D91370;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D91368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d91370
	goto loc_82D91370;
loc_82D9136C:
	// stb r22,384(r11)
	PPC_STORE_U8(ctx.r11.u32 + 384, ctx.r22.u8);
loc_82D91370:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82decc58
	ctx.lr = 0x82D91378;
	sub_82DECC58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82d913b4
	if (ctx.cr6.eq) goto loc_82D913B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D913A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r22,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r22.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82D913B4:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// lwz r3,320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// bl 0x82da41c0
	ctx.lr = 0x82D913C4;
	sub_82DA41C0(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stw r31,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r31.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// addi r11,r11,260
	ctx.r11.s64 = ctx.r11.s64 + 260;
	// addi r10,r10,308
	ctx.r10.s64 = ctx.r10.s64 + 308;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// lwz r3,320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// bl 0x82da4200
	ctx.lr = 0x82D91404;
	sub_82DA4200(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82da4e30
	ctx.lr = 0x82D91418;
	sub_82DA4E30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82D91424:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d8dcd8
	ctx.lr = 0x82D91440;
	sub_82D8DCD8(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d91478
	if (ctx.cr6.eq) goto loc_82D91478;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82d91478
	if (ctx.cr6.eq) goto loc_82D91478;
	// lwz r4,96(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d91478
	if (ctx.cr6.eq) goto loc_82D91478;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,116(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D91478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D91478:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82D9147C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D91484"))) PPC_WEAK_FUNC(sub_82D91484);
PPC_FUNC_IMPL(__imp__sub_82D91484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D91488"))) PPC_WEAK_FUNC(sub_82D91488);
PPC_FUNC_IMPL(__imp__sub_82D91488) {
	PPC_FUNC_PROLOGUE();
	// ori r5,r5,128
	ctx.r5.u64 = ctx.r5.u64 | 128;
	// b 0x82d910a0
	sub_82D910A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D91490"))) PPC_WEAK_FUNC(sub_82D91490);
PPC_FUNC_IMPL(__imp__sub_82D91490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82D91498;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r25,r4,24
	ctx.r25.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lis r26,-31909
	ctx.r26.s64 = -2091188224;
	// bne cr6,0x82d915ac
	if (!ctx.cr6.eq) goto loc_82D915AC;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d914f4
	if (!ctx.cr6.gt) goto loc_82D914F4;
loc_82D914C4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d81360
	ctx.lr = 0x82D914D4;
	sub_82D81360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d914e4
	if (!ctx.cr6.eq) goto loc_82D914E4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d82f50
	ctx.lr = 0x82D914E4;
	sub_82D82F50(ctx, base);
loc_82D914E4:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d914c4
	if (ctx.cr6.lt) goto loc_82D914C4;
loc_82D914F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d90d98
	ctx.lr = 0x82D914FC;
	sub_82D90D98(ctx, base);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,-26516
	ctx.r29.s64 = ctx.r29.s64 + -26516;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d9155c
	if (ctx.cr6.eq) goto loc_82D9155C;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-26808
	ctx.r3.s64 = ctx.r3.s64 + -26808;
	// bl 0x82da4d20
	ctx.lr = 0x82D9151C;
	sub_82DA4D20(ctx, base);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// addi r30,r30,-26512
	ctx.r30.s64 = ctx.r30.s64 + -26512;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82da4150
	ctx.lr = 0x82D91530;
	sub_82DA4150(ctx, base);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addi r29,r29,-26508
	ctx.r29.s64 = ctx.r29.s64 + -26508;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82da4150
	ctx.lr = 0x82D91544;
	sub_82DA4150(ctx, base);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r30,r30,-26504
	ctx.r30.s64 = ctx.r30.s64 + -26504;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82da4150
	ctx.lr = 0x82D91558;
	sub_82DA4150(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_82D9155C:
	// lwz r11,19872(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19872);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d915ac
	if (!ctx.cr6.eq) goto loc_82D915AC;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d915ac
	if (ctx.cr6.eq) goto loc_82D915AC;
	// bl 0x82decb10
	ctx.lr = 0x82D9157C;
	sub_82DECB10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91a48
	if (!ctx.cr6.eq) goto loc_82D91A48;
	// lis r30,-31901
	ctx.r30.s64 = -2090663936;
	// lwz r3,9876(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9876);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d915a0
	if (ctx.cr6.eq) goto loc_82D915A0;
	// bl 0x82da4150
	ctx.lr = 0x82D91598;
	sub_82DA4150(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,9876(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9876, ctx.r11.u32);
loc_82D915A0:
	// bl 0x82da6dc8
	ctx.lr = 0x82D915A4;
	sub_82DA6DC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91a48
	if (!ctx.cr6.eq) goto loc_82D91A48;
loc_82D915AC:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-27288
	ctx.r30.s64 = ctx.r30.s64 + -27288;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d915d0
	if (ctx.cr6.eq) goto loc_82D915D0;
	// bl 0x82d98028
	ctx.lr = 0x82D915C4;
	sub_82D98028(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91a48
	if (!ctx.cr6.eq) goto loc_82D91A48;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_82D915D0:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-27284
	ctx.r30.s64 = ctx.r30.s64 + -27284;
loc_82D915D8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82d915f4
	if (!ctx.cr6.eq) goto loc_82D915F4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d915f8
	if (ctx.cr6.eq) goto loc_82D915F8;
loc_82D915F4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82D915F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d9161c
	if (!ctx.cr6.eq) goto loc_82D9161C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d981f0
	ctx.lr = 0x82D9160C;
	sub_82D981F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d915d8
	if (ctx.cr6.eq) goto loc_82D915D8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82D9161C:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-27192
	ctx.r30.s64 = ctx.r30.s64 + -27192;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d91640
	if (ctx.cr6.eq) goto loc_82D91640;
	// bl 0x82da98f8
	ctx.lr = 0x82D91634;
	sub_82DA98F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91a48
	if (!ctx.cr6.eq) goto loc_82D91A48;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_82D91640:
	// lwz r3,1232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,-848
	ctx.r27.s64 = ctx.r11.s64 + -848;
	// beq cr6,0x82d917e0
	if (ctx.cr6.eq) goto loc_82D917E0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82d917e0
	if (!ctx.cr6.eq) goto loc_82D917E0;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d91698
	if (ctx.cr6.eq) goto loc_82D91698;
	// lis r11,-32034
	ctx.r11.s64 = -2099380224;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x82d91688
	if (!ctx.cr6.eq) goto loc_82D91688;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82D91688:
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D91694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82d916a8
	goto loc_82D916A8;
loc_82D91698:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d916a8
	if (ctx.cr6.eq) goto loc_82D916A8;
	// bl 0x82de6b10
	ctx.lr = 0x82D916A8;
	sub_82DE6B10(ctx, base);
loc_82D916A8:
	// lwz r3,4428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d916cc
	if (ctx.cr6.eq) goto loc_82D916CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D916C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,4428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4428, ctx.r28.u32);
loc_82D916CC:
	// lwz r3,4424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d916f0
	if (ctx.cr6.eq) goto loc_82D916F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D916EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,4424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4424, ctx.r28.u32);
loc_82D916F0:
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r29,-24432
	ctx.r29.s64 = ctx.r29.s64 + -24432;
	// ori r11,r11,41688
	ctx.r11.u64 = ctx.r11.u64 | 41688;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stbx r28,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82d91728
	if (ctx.cr6.eq) goto loc_82D91728;
loc_82D91710:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82da67c8
	ctx.lr = 0x82D91720;
	sub_82DA67C8(ctx, base);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82d91710
	if (!ctx.cr6.eq) goto loc_82D91710;
loc_82D91728:
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-25016
	ctx.r3.s64 = ctx.r3.s64 + -25016;
	// bl 0x82da67c8
	ctx.lr = 0x82D91738;
	sub_82DA67C8(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-25600
	ctx.r3.s64 = ctx.r3.s64 + -25600;
	// bl 0x82da67c8
	ctx.lr = 0x82D91748;
	sub_82DA67C8(ctx, base);
	// addi r30,r31,1288
	ctx.r30.s64 = ctx.r31.s64 + 1288;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82D91750:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d9177c
	if (ctx.cr6.eq) goto loc_82D9177C;
	// lwz r11,19872(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6771
	ctx.r6.s64 = 6771;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82D91774;
	sub_82D861B0(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r28,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r28.u32);
loc_82D9177C:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82d91750
	if (!ctx.cr6.eq) goto loc_82D91750;
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d917c8
	if (ctx.cr6.eq) goto loc_82D917C8;
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
	// bne cr6,0x82d917bc
	if (!ctx.cr6.eq) goto loc_82D917BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82D917BC:
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D917C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D917C8:
	// lwz r3,1232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D917DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,1232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1232, ctx.r28.u32);
loc_82D917E0:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-28208
	ctx.r30.s64 = ctx.r30.s64 + -28208;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d91808
	if (ctx.cr6.eq) goto loc_82D91808;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D91804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_82D91808:
	// lwz r3,1264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d91828
	if (ctx.cr6.eq) goto loc_82D91828;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D91824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,1264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1264, ctx.r28.u32);
loc_82D91828:
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-26444
	ctx.r3.s64 = ctx.r3.s64 + -26444;
	// bl 0x82da8ee0
	ctx.lr = 0x82D91834;
	sub_82DA8EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91a48
	if (!ctx.cr6.eq) goto loc_82D91A48;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-25900
	ctx.r3.s64 = ctx.r3.s64 + -25900;
	// bl 0x82da8ee0
	ctx.lr = 0x82D91848;
	sub_82DA8EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91a48
	if (!ctx.cr6.eq) goto loc_82D91A48;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-26172
	ctx.r3.s64 = ctx.r3.s64 + -26172;
	// bl 0x82da8ee0
	ctx.lr = 0x82D9185C;
	sub_82DA8EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91a48
	if (!ctx.cr6.eq) goto loc_82D91A48;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d918f0
	if (ctx.cr6.eq) goto loc_82D918F0;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d918d0
	if (!ctx.cr6.gt) goto loc_82D918D0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82D91884:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r4,292(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d918bc
	if (ctx.cr6.eq) goto loc_82D918BC;
	// lwz r11,19872(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6855
	ctx.r6.s64 = 6855;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82D918B0;
	sub_82D861B0(ctx, base);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r28,292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 292, ctx.r28.u32);
loc_82D918BC:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,440
	ctx.r30.s64 = ctx.r30.s64 + 440;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d91884
	if (ctx.cr6.lt) goto loc_82D91884;
loc_82D918D0:
	// lwz r11,19872(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6860
	ctx.r6.s64 = 6860;
	// lwz r4,332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82D918EC;
	sub_82D861B0(ctx, base);
	// stw r28,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r28.u32);
loc_82D918F0:
	// addi r11,r31,776
	ctx.r11.s64 = ctx.r31.s64 + 776;
	// addi r3,r31,1808
	ctx.r3.s64 = ctx.r31.s64 + 1808;
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x82deda40
	ctx.lr = 0x82D91908;
	sub_82DEDA40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91a48
	if (!ctx.cr6.eq) goto loc_82D91A48;
	// addi r30,r31,1296
	ctx.r30.s64 = ctx.r31.s64 + 1296;
	// li r29,128
	ctx.r29.s64 = 128;
loc_82D91918:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d91940
	if (ctx.cr6.eq) goto loc_82D91940;
	// lwz r11,19872(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6883
	ctx.r6.s64 = 6883;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82D9193C;
	sub_82D861B0(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_82D91940:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82d91918
	if (!ctx.cr6.eq) goto loc_82D91918;
	// lwz r3,4408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d9196c
	if (ctx.cr6.eq) goto loc_82D9196C;
	// bl 0x82da4150
	ctx.lr = 0x82D91960;
	sub_82DA4150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91a48
	if (!ctx.cr6.eq) goto loc_82D91A48;
	// stw r28,4408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4408, ctx.r28.u32);
loc_82D9196C:
	// lwz r3,4412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4412);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d91988
	if (ctx.cr6.eq) goto loc_82D91988;
	// bl 0x82da4150
	ctx.lr = 0x82D9197C;
	sub_82DA4150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91a48
	if (!ctx.cr6.eq) goto loc_82D91A48;
	// stw r28,4412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4412, ctx.r28.u32);
loc_82D91988:
	// lwz r3,4416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d919a4
	if (ctx.cr6.eq) goto loc_82D919A4;
	// bl 0x82da4150
	ctx.lr = 0x82D91998;
	sub_82DA4150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91a48
	if (!ctx.cr6.eq) goto loc_82D91A48;
	// stw r28,4416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4416, ctx.r28.u32);
loc_82D919A4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d919d8
	if (ctx.cr6.eq) goto loc_82D919D8;
	// bl 0x82ded720
	ctx.lr = 0x82D919B8;
	sub_82DED720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91a48
	if (!ctx.cr6.eq) goto loc_82D91A48;
	// bl 0x82ded058
	ctx.lr = 0x82D919C4;
	sub_82DED058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91a48
	if (!ctx.cr6.eq) goto loc_82D91A48;
	// bl 0x82dec1d8
	ctx.lr = 0x82D919D0;
	sub_82DEC1D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91a48
	if (!ctx.cr6.eq) goto loc_82D91A48;
loc_82D919D8:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-27152
	ctx.r30.s64 = ctx.r30.s64 + -27152;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d919f4
	if (ctx.cr6.eq) goto loc_82D919F4;
	// bl 0x82da4150
	ctx.lr = 0x82D919F0;
	sub_82DA4150(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_82D919F4:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-27148
	ctx.r30.s64 = ctx.r30.s64 + -27148;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d91a10
	if (ctx.cr6.eq) goto loc_82D91A10;
	// bl 0x82da4150
	ctx.lr = 0x82D91A0C;
	sub_82DA4150(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_82D91A10:
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-27116
	ctx.r3.s64 = ctx.r3.s64 + -27116;
	// bl 0x82deb598
	ctx.lr = 0x82D91A1C;
	sub_82DEB598(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82d91a40
	if (!ctx.cr6.eq) goto loc_82D91A40;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d91a40
	if (ctx.cr6.eq) goto loc_82D91A40;
	// lwz r11,19872(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19872);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82D91A40:
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82D91A48:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D91A50"))) PPC_WEAK_FUNC(sub_82D91A50);
PPC_FUNC_IMPL(__imp__sub_82D91A50) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82d91490
	sub_82D91490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D91A58"))) PPC_WEAK_FUNC(sub_82D91A58);
PPC_FUNC_IMPL(__imp__sub_82D91A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D91A60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d91a84
	if (ctx.cr6.eq) goto loc_82D91A84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d91490
	ctx.lr = 0x82D91A7C;
	sub_82D91490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d91af0
	if (!ctx.cr6.eq) goto loc_82D91AF0;
loc_82D91A84:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r30,-27724
	ctx.r30.s64 = ctx.r30.s64 + -27724;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d91aa4
	if (ctx.cr6.eq) goto loc_82D91AA4;
	// bl 0x82db7d40
	ctx.lr = 0x82D91AA0;
	sub_82DB7D40(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82D91AA4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-848
	ctx.r5.s64 = ctx.r11.s64 + -848;
	// li r6,4229
	ctx.r6.s64 = 4229;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82D91AEC;
	sub_82D861B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D91AF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D91AF8"))) PPC_WEAK_FUNC(sub_82D91AF8);
PPC_FUNC_IMPL(__imp__sub_82D91AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82D91B00;
	__savegprlr_19(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r21,4095
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 4095, ctx.xer);
	// bgt cr6,0x82d92738
	if (ctx.cr6.gt) goto loc_82D92738;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d91490
	ctx.lr = 0x82D91B24;
	sub_82D91490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d9273c
	if (!ctx.cr6.eq) goto loc_82D9273C;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// bl 0x82da3e48
	ctx.lr = 0x82D91B38;
	sub_82DA3E48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1236);
	// bl 0x82d886d0
	ctx.lr = 0x82D91B44;
	sub_82D886D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d9273c
	if (!ctx.cr6.eq) goto loc_82D9273C;
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d91bf8
	if (ctx.cr6.eq) goto loc_82D91BF8;
	// lis r10,-32034
	ctx.r10.s64 = -2099380224;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r10,r10,3160
	ctx.r10.s64 = ctx.r10.s64 + 3160;
	// addi r30,r30,-27100
	ctx.r30.s64 = ctx.r30.s64 + -27100;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bne cr6,0x82d91b90
	if (!ctx.cr6.eq) goto loc_82D91B90;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82D91B90:
	// lwz r10,1272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1272);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r27,1276(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1276);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r7,1256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1256);
	// addi r8,r31,1240
	ctx.r8.s64 = ctx.r31.s64 + 1240;
	// divwu r29,r27,r10
	ctx.r29.u32 = ctx.r27.u32 / ctx.r10.u32;
	// lwz r4,1260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// addi r6,r31,1244
	ctx.r6.s64 = ctx.r31.s64 + 1244;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// twllei r10,0
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D91BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d9273c
	if (!ctx.cr6.eq) goto loc_82D9273C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82d91c60
	if (ctx.cr6.eq) goto loc_82D91C60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d8c9f0
	ctx.lr = 0x82D91BF4;
	sub_82D8C9F0(ctx, base);
	// b 0x82d91c60
	goto loc_82D91C60;
loc_82D91BF8:
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d91c60
	if (ctx.cr6.eq) goto loc_82D91C60;
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
	// bne cr6,0x82d91c24
	if (!ctx.cr6.eq) goto loc_82D91C24;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82D91C24:
	// lwz r9,1272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1272);
	// addi r8,r31,1240
	ctx.r8.s64 = ctx.r31.s64 + 1240;
	// lwz r10,1276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1276);
	// addi r6,r31,1244
	ctx.r6.s64 = ctx.r31.s64 + 1244;
	// lwz r7,1256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1256);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,1260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// twllei r9,0
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D91C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d9273c
	if (!ctx.cr6.eq) goto loc_82D9273C;
loc_82D91C60:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r20,17
	ctx.r20.s64 = 17;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// ori r22,r10,37328
	ctx.r22.u64 = ctx.r10.u64 | 37328;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// ori r23,r10,38220
	ctx.r23.u64 = ctx.r10.u64 | 38220;
	// addi r24,r11,-848
	ctx.r24.s64 = ctx.r11.s64 + -848;
	// lis r19,-31909
	ctx.r19.s64 = -2091188224;
	// bne cr6,0x82d91fdc
	if (!ctx.cr6.eq) goto loc_82D91FDC;
	// addi r11,r1,364
	ctx.r11.s64 = ctx.r1.s64 + 364;
	// stw r25,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r25.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6022
	ctx.r6.s64 = 6022;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r11,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r11.u32);
	// addi r11,r1,364
	ctx.r11.s64 = ctx.r1.s64 + 364;
	// li r4,228
	ctx.r4.s64 = 228;
	// stw r11,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// lwz r11,19872(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82D91CC4;
	sub_82D85F40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d91cd8
	if (ctx.cr6.eq) goto loc_82D91CD8;
	// bl 0x82de4be8
	ctx.lr = 0x82D91CD0;
	sub_82DE4BE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82d91cdc
	goto loc_82D91CDC;
loc_82D91CD8:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82D91CDC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stwx r11,r31,r22
	PPC_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
	// bne cr6,0x82d91d00
	if (!ctx.cr6.eq) goto loc_82D91D00;
loc_82D91CE8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d91490
	ctx.lr = 0x82D91CF4;
	sub_82D91490(ctx, base);
loc_82D91CF4:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
loc_82D91D00:
	// stw r31,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r31.u32);
	// addi r3,r31,4408
	ctx.r3.s64 = ctx.r31.s64 + 4408;
	// lwz r11,4408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d91d24
	if (!ctx.cr6.eq) goto loc_82D91D24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da4098
	ctx.lr = 0x82D91D1C;
	sub_82DA4098(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d9273c
	if (!ctx.cr6.eq) goto loc_82D9273C;
loc_82D91D24:
	// lwz r11,4412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4412);
	// addi r3,r31,4412
	ctx.r3.s64 = ctx.r31.s64 + 4412;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d91d44
	if (!ctx.cr6.eq) goto loc_82D91D44;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da4098
	ctx.lr = 0x82D91D3C;
	sub_82DA4098(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d9273c
	if (!ctx.cr6.eq) goto loc_82D9273C;
loc_82D91D44:
	// lwz r11,4416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4416);
	// addi r3,r31,4416
	ctx.r3.s64 = ctx.r31.s64 + 4416;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d91d64
	if (!ctx.cr6.eq) goto loc_82D91D64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da4098
	ctx.lr = 0x82D91D5C;
	sub_82DA4098(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d9273c
	if (!ctx.cr6.eq) goto loc_82D9273C;
loc_82D91D64:
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r9,r9,-28276
	ctx.r9.s64 = ctx.r9.s64 + -28276;
	// addi r10,r10,-28244
	ctx.r10.s64 = ctx.r10.s64 + -28244;
	// addi r11,r31,4492
	ctx.r11.s64 = ctx.r31.s64 + 4492;
	// li r8,1024
	ctx.r8.s64 = 1024;
	// stw r25,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r25.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stw r25,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r25.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
loc_82D91D94:
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// bne cr6,0x82d91d94
	if (!ctx.cr6.eq) goto loc_82D91D94;
	// lwz r27,1256(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1256);
	// lwz r11,1252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1252);
	// lwz r26,1240(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1240);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82d91de4
	if (!ctx.cr6.lt) goto loc_82D91DE4;
	// stw r27,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r27.u32);
loc_82D91DE4:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r30,r31,1280
	ctx.r30.s64 = ctx.r31.s64 + 1280;
loc_82D91DEC:
	// lwz r10,1252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1252);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82d91dfc
	if (ctx.cr6.lt) goto loc_82D91DFC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82D91DFC:
	// lwz r11,19872(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,1272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1272);
	// li r6,6088
	ctx.r6.s64 = 6088;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82d862b0
	ctx.lr = 0x82D91E24;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// beq cr6,0x82d91cf4
	if (ctx.cr6.eq) goto loc_82D91CF4;
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// blt cr6,0x82d91dec
	if (ctx.cr6.lt) goto loc_82D91DEC;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// li r6,2
	ctx.r6.s64 = 2;
	// blt cr6,0x82d91e5c
	if (ctx.cr6.lt) goto loc_82D91E5C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
loc_82D91E5C:
	// lwzx r11,r31,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,1808
	ctx.r3.s64 = ctx.r31.s64 + 1808;
	// lwz r7,1252(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1252);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82dedfa0
	ctx.lr = 0x82D91E78;
	sub_82DEDFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d9273c
	if (!ctx.cr6.eq) goto loc_82D9273C;
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82D91E90:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82d91e90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D91E90;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-652
	ctx.r4.s64 = ctx.r11.s64 + -652;
	// bl 0x82da4448
	ctx.lr = 0x82D91EAC;
	sub_82DA4448(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r28,r31,4424
	ctx.r28.s64 = ctx.r31.s64 + 4424;
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// ori r29,r11,256
	ctx.r29.u64 = ctx.r11.u64 | 256;
	// stw r25,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r25.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r25,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r25.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r25,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r25.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// stw r25,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r26.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r29,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r29.u32);
	// stw r11,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r11.u32);
	// bl 0x82d8ced0
	ctx.lr = 0x82D91EF0;
	sub_82D8CED0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d9273c
	if (!ctx.cr6.eq) goto loc_82D9273C;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// li r8,11
	ctx.r8.s64 = 11;
	// lwz r7,240(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 240);
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// stw r7,240(r9)
	PPC_STORE_U32(ctx.r9.u32 + 240, ctx.r7.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82D91F18:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82d91f18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D91F18;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r9,-684
	ctx.r4.s64 = ctx.r9.s64 + -684;
	// bl 0x82da4448
	ctx.lr = 0x82D91F38;
	sub_82DA4448(ctx, base);
	// addi r30,r31,4428
	ctx.r30.s64 = ctx.r31.s64 + 4428;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r25,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r25.u32);
	// stw r25,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r25.u32);
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stw r25,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r25.u32);
	// bl 0x82d8cd90
	ctx.lr = 0x82D91F64;
	sub_82D8CD90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d9273c
	if (!ctx.cr6.eq) goto loc_82D9273C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,1244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1244);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lfs f3,-18324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f3.f64 = double(temp.f32);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// std r11,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r11.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lfd f0,256(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D91FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D91FD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d9273c
	if (!ctx.cr6.eq) goto loc_82D9273C;
loc_82D91FDC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// addi r30,r11,-704
	ctx.r30.s64 = ctx.r11.s64 + -704;
	// addi r27,r27,-27288
	ctx.r27.s64 = ctx.r27.s64 + -27288;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82d8d168
	ctx.lr = 0x82D91FFC;
	sub_82D8D168(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82d92020
	if (ctx.cr6.eq) goto loc_82D92020;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d91490
	ctx.lr = 0x82D92014;
	sub_82D91490(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
loc_82D92020:
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r5,-27192
	ctx.r5.s64 = ctx.r5.s64 + -27192;
	// bl 0x82d8a500
	ctx.lr = 0x82D92030;
	sub_82D8A500(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d920b8
	if (!ctx.cr6.eq) goto loc_82D920B8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d92104
	if (!ctx.cr6.eq) goto loc_82D92104;
	// lwzx r3,r31,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// lwzx r4,r31,r23
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D92064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d920b8
	if (!ctx.cr6.eq) goto loc_82D920B8;
	// lwz r3,1232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d920d0
	if (ctx.cr6.eq) goto loc_82D920D0;
	// lis r11,-32034
	ctx.r11.s64 = -2099380224;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x82d920a0
	if (!ctx.cr6.eq) goto loc_82D920A0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82D920A0:
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D920AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82d92104
	if (ctx.cr6.eq) goto loc_82D92104;
loc_82D920B8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82D920BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d91490
	ctx.lr = 0x82D920C4;
	sub_82D91490(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
loc_82D920D0:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d92104
	if (ctx.cr6.eq) goto loc_82D92104;
	// bl 0x82de6988
	ctx.lr = 0x82D920E0;
	sub_82DE6988(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82d92104
	if (ctx.cr6.eq) goto loc_82D92104;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d91490
	ctx.lr = 0x82D920F8;
	sub_82D91490(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
loc_82D92104:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x82d92168
	if (!ctx.cr6.gt) goto loc_82D92168;
	// lwz r11,19872(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19872);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6230
	ctx.r6.s64 = 6230;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,228
	ctx.r4.s64 = 228;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82D9212C;
	sub_82D85F40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d9213c
	if (ctx.cr6.eq) goto loc_82D9213C;
	// bl 0x82dece50
	ctx.lr = 0x82D92138;
	sub_82DECE50(ctx, base);
	// b 0x82d92140
	goto loc_82D92140;
loc_82D9213C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82D92140:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1264, ctx.r3.u32);
	// beq cr6,0x82d91ce8
	if (ctx.cr6.eq) goto loc_82D91CE8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r31,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r31.u32);
	// lwz r3,1264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1264);
	// bl 0x82decea8
	ctx.lr = 0x82D9215C;
	sub_82DECEA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d920b8
	if (!ctx.cr6.eq) goto loc_82D920B8;
loc_82D92168:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stw r21,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r21.u32);
	// beq cr6,0x82d92218
	if (ctx.cr6.eq) goto loc_82D92218;
	// lwz r11,19872(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6255
	ctx.r6.s64 = 6255;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mulli r4,r21,440
	ctx.r4.s64 = ctx.r21.s64 * 440;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82D92190;
	sub_82D862B0(ctx, base);
	// stw r3,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d91ce8
	if (ctx.cr6.eq) goto loc_82D91CE8;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d92218
	if (!ctx.cr6.gt) goto loc_82D92218;
	// addi r28,r31,776
	ctx.r28.s64 = ctx.r31.s64 + 776;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82D921B4:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d921d0
	if (ctx.cr6.eq) goto loc_82D921D0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d9b508
	ctx.lr = 0x82D921D0;
	sub_82D9B508(ctx, base);
loc_82D921D0:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82d9bcb0
	ctx.lr = 0x82D92204;
	sub_82D9BCB0(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,440
	ctx.r30.s64 = ctx.r30.s64 + 440;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d921b4
	if (ctx.cr6.lt) goto loc_82D921B4;
loc_82D92218:
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// addi r3,r11,9876
	ctx.r3.s64 = ctx.r11.s64 + 9876;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d92240
	if (!ctx.cr6.eq) goto loc_82D92240;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da4098
	ctx.lr = 0x82D92234;
	sub_82DA4098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d920b8
	if (!ctx.cr6.eq) goto loc_82D920B8;
loc_82D92240:
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-27148
	ctx.r3.s64 = ctx.r3.s64 + -27148;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d92268
	if (!ctx.cr6.eq) goto loc_82D92268;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da4098
	ctx.lr = 0x82D9225C;
	sub_82DA4098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d920b8
	if (!ctx.cr6.eq) goto loc_82D920B8;
loc_82D92268:
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-27152
	ctx.r3.s64 = ctx.r3.s64 + -27152;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d92290
	if (!ctx.cr6.eq) goto loc_82D92290;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da4098
	ctx.lr = 0x82D92284;
	sub_82DA4098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d920b8
	if (!ctx.cr6.eq) goto loc_82D920B8;
loc_82D92290:
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r29,r29,-26516
	ctx.r29.s64 = ctx.r29.s64 + -26516;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d92358
	if (!ctx.cr6.eq) goto loc_82D92358;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d92358
	if (!ctx.cr6.eq) goto loc_82D92358;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-26512
	ctx.r3.s64 = ctx.r3.s64 + -26512;
	// bl 0x82da4098
	ctx.lr = 0x82D922C8;
	sub_82DA4098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d920bc
	if (!ctx.cr6.eq) goto loc_82D920BC;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-26508
	ctx.r3.s64 = ctx.r3.s64 + -26508;
	// bl 0x82da4098
	ctx.lr = 0x82D922E4;
	sub_82DA4098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d920bc
	if (!ctx.cr6.eq) goto loc_82D920BC;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-26504
	ctx.r3.s64 = ctx.r3.s64 + -26504;
	// bl 0x82da4098
	ctx.lr = 0x82D92300;
	sub_82DA4098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d920b8
	if (!ctx.cr6.eq) goto loc_82D920B8;
	// li r8,10
	ctx.r8.s64 = 10;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32039
	ctx.r11.s64 = -2099707904;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r4,r10,-724
	ctx.r4.s64 = ctx.r10.s64 + -724;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r9,49152
	ctx.r9.u64 = ctx.r9.u64 | 49152;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-17416
	ctx.r5.s64 = ctx.r11.s64 + -17416;
	// addi r3,r3,-26808
	ctx.r3.s64 = ctx.r3.s64 + -26808;
	// bl 0x82da4bd8
	ctx.lr = 0x82D92348;
	sub_82DA4BD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d920b8
	if (!ctx.cr6.eq) goto loc_82D920B8;
	// stb r24,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r24.u8);
loc_82D92358:
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// addi r3,r11,9924
	ctx.r3.s64 = ctx.r11.s64 + 9924;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d92380
	if (!ctx.cr6.eq) goto loc_82D92380;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da4098
	ctx.lr = 0x82D92374;
	sub_82DA4098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d920b8
	if (!ctx.cr6.eq) goto loc_82D920B8;
loc_82D92380:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d9253c
	if (!ctx.cr6.eq) goto loc_82D9253C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,38092
	ctx.r11.u64 = ctx.r11.u64 | 38092;
	// lwzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82d92424
	if (ctx.cr6.eq) goto loc_82D92424;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,-26172
	ctx.r3.s64 = ctx.r3.s64 + -26172;
	// bl 0x82da9108
	ctx.lr = 0x82D923B8;
	sub_82DA9108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d920b8
	if (!ctx.cr6.eq) goto loc_82D920B8;
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r5,r5,-26168
	ctx.r5.s64 = ctx.r5.s64 + -26168;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d92424
	if (!ctx.cr6.gt) goto loc_82D92424;
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// addis r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 65536;
	// addi r7,r7,-26164
	ctx.r7.s64 = ctx.r7.s64 + -26164;
	// addi r6,r6,-25904
	ctx.r6.s64 = ctx.r6.s64 + -25904;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82D923F0:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,1116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1116);
	// addi r8,r11,284
	ctx.r8.s64 = ctx.r11.s64 + 284;
	// stw r8,324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 324, ctx.r8.u32);
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r8,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r8.u32);
	// sth r20,284(r11)
	PPC_STORE_U16(ctx.r11.u32 + 284, ctx.r20.u16);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d923f0
	if (ctx.cr6.lt) goto loc_82D923F0;
loc_82D92424:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,38088
	ctx.r11.u64 = ctx.r11.u64 | 38088;
	// lwzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82d924a8
	if (ctx.cr6.eq) goto loc_82D924A8;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r5,1152
	ctx.r5.s64 = 1152;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,-26444
	ctx.r3.s64 = ctx.r3.s64 + -26444;
	// bl 0x82da9108
	ctx.lr = 0x82D9244C;
	sub_82DA9108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d920b8
	if (!ctx.cr6.eq) goto loc_82D920B8;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r27,r27,-26440
	ctx.r27.s64 = ctx.r27.s64 + -26440;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d924a8
	if (!ctx.cr6.gt) goto loc_82D924A8;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r28,r28,-26436
	ctx.r28.s64 = ctx.r28.s64 + -26436;
loc_82D9247C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,1116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1116);
	// stw r25,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r25.u32);
	// stw r25,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r25.u32);
	// bl 0x82d86e98
	ctx.lr = 0x82D92494;
	sub_82D86E98(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d9247c
	if (ctx.cr6.lt) goto loc_82D9247C;
loc_82D924A8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,38096
	ctx.r11.u64 = ctx.r11.u64 | 38096;
	// lwzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82d9253c
	if (ctx.cr6.eq) goto loc_82D9253C;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,-25900
	ctx.r3.s64 = ctx.r3.s64 + -25900;
	// bl 0x82da9108
	ctx.lr = 0x82D924D0;
	sub_82DA9108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d920b8
	if (!ctx.cr6.eq) goto loc_82D920B8;
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// addi r26,r26,-25896
	ctx.r26.s64 = ctx.r26.s64 + -25896;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d9253c
	if (!ctx.cr6.gt) goto loc_82D9253C;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r27,r27,-25892
	ctx.r27.s64 = ctx.r27.s64 + -25892;
loc_82D92500:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r3,1116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1116);
	// stw r25,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r25.u32);
	// stw r25,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r25.u32);
	// bl 0x82dbc828
	ctx.lr = 0x82D9251C;
	sub_82DBC828(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82d92650
	if (!ctx.cr6.eq) goto loc_82D92650;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d92500
	if (ctx.cr6.lt) goto loc_82D92500;
loc_82D9253C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,-728(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r3,r3,-25600
	ctx.r3.s64 = ctx.r3.s64 + -25600;
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f0,-18240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18240);
	ctx.f0.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// li r11,-10000
	ctx.r11.s64 = -10000;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f0,236(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// lfs f13,-18248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18248);
	ctx.f13.f64 = double(temp.f32);
	// li r11,-2602
	ctx.r11.s64 = -2602;
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// li r11,831
	ctx.r11.s64 = 831;
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7616);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f13,216(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lfs f13,-732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -732);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f13,224(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lfs f13,-736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -736);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// lfs f13,-17720(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17720);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,232(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// bl 0x82da6930
	ctx.lr = 0x82D9262C;
	sub_82DA6930(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82d92668
	if (ctx.cr6.eq) goto loc_82D92668;
loc_82D9263C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d91490
	ctx.lr = 0x82D92644;
	sub_82D91490(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
loc_82D92650:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d91490
	ctx.lr = 0x82D9265C;
	sub_82D91490(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
loc_82D92668:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82d8a8b8
	ctx.lr = 0x82D92674;
	sub_82D8A8B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d920b8
	if (!ctx.cr6.eq) goto loc_82D920B8;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,-25016
	ctx.r3.s64 = ctx.r3.s64 + -25016;
	// bl 0x82da6930
	ctx.lr = 0x82D92698;
	sub_82DA6930(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d9263c
	if (!ctx.cr6.eq) goto loc_82D9263C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82d8aaa0
	ctx.lr = 0x82D926B4;
	sub_82D8AAA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d920b8
	if (!ctx.cr6.eq) goto loc_82D920B8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d9270c
	if (ctx.cr6.eq) goto loc_82D9270C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,38148
	ctx.r11.u64 = ctx.r11.u64 | 38148;
	// lhzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82dec108
	ctx.lr = 0x82D926E0;
	sub_82DEC108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d920b8
	if (!ctx.cr6.eq) goto loc_82D920B8;
	// bl 0x82ded408
	ctx.lr = 0x82D926F0;
	sub_82DED408(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d920b8
	if (!ctx.cr6.eq) goto loc_82D920B8;
	// bl 0x82ded978
	ctx.lr = 0x82D92700;
	sub_82DED978(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d920b8
	if (!ctx.cr6.eq) goto loc_82D920B8;
loc_82D9270C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stb r24,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r24.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,38424
	ctx.r11.u64 = ctx.r11.u64 | 38424;
	// stwx r31,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r11,19872(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19872);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
loc_82D92738:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82D9273C:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D92744"))) PPC_WEAK_FUNC(sub_82D92744);
PPC_FUNC_IMPL(__imp__sub_82D92744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92748"))) PPC_WEAK_FUNC(sub_82D92748);
PPC_FUNC_IMPL(__imp__sub_82D92748) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82da98c8
	ctx.lr = 0x82D9275C;
	sub_82DA98C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d9276c
	if (!ctx.cr6.eq) goto loc_82D9276C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da9d60
	ctx.lr = 0x82D9276C;
	sub_82DA9D60(ctx, base);
loc_82D9276C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D9277C"))) PPC_WEAK_FUNC(sub_82D9277C);
PPC_FUNC_IMPL(__imp__sub_82D9277C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92780"))) PPC_WEAK_FUNC(sub_82D92780);
PPC_FUNC_IMPL(__imp__sub_82D92780) {
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
	// bl 0x82da98c8
	ctx.lr = 0x82D9279C;
	sub_82DA98C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d927b0
	if (!ctx.cr6.eq) goto loc_82D927B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da9988
	ctx.lr = 0x82D927B0;
	sub_82DA9988(ctx, base);
loc_82D927B0:
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

__attribute__((alias("__imp__sub_82D927C4"))) PPC_WEAK_FUNC(sub_82D927C4);
PPC_FUNC_IMPL(__imp__sub_82D927C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D927C8"))) PPC_WEAK_FUNC(sub_82D927C8);
PPC_FUNC_IMPL(__imp__sub_82D927C8) {
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
	// bl 0x82da98c8
	ctx.lr = 0x82D927E4;
	sub_82DA98C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d927f8
	if (!ctx.cr6.eq) goto loc_82D927F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da99a8
	ctx.lr = 0x82D927F8;
	sub_82DA99A8(ctx, base);
loc_82D927F8:
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

__attribute__((alias("__imp__sub_82D9280C"))) PPC_WEAK_FUNC(sub_82D9280C);
PPC_FUNC_IMPL(__imp__sub_82D9280C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92810"))) PPC_WEAK_FUNC(sub_82D92810);
PPC_FUNC_IMPL(__imp__sub_82D92810) {
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
	// bl 0x82da98c8
	ctx.lr = 0x82D9282C;
	sub_82DA98C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92840
	if (!ctx.cr6.eq) goto loc_82D92840;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da99c8
	ctx.lr = 0x82D92840;
	sub_82DA99C8(ctx, base);
loc_82D92840:
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

__attribute__((alias("__imp__sub_82D92854"))) PPC_WEAK_FUNC(sub_82D92854);
PPC_FUNC_IMPL(__imp__sub_82D92854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92858"))) PPC_WEAK_FUNC(sub_82D92858);
PPC_FUNC_IMPL(__imp__sub_82D92858) {
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
	// bl 0x82da98c8
	ctx.lr = 0x82D92874;
	sub_82DA98C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92888
	if (!ctx.cr6.eq) goto loc_82D92888;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da99e8
	ctx.lr = 0x82D92888;
	sub_82DA99E8(ctx, base);
loc_82D92888:
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

__attribute__((alias("__imp__sub_82D9289C"))) PPC_WEAK_FUNC(sub_82D9289C);
PPC_FUNC_IMPL(__imp__sub_82D9289C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D928A0"))) PPC_WEAK_FUNC(sub_82D928A0);
PPC_FUNC_IMPL(__imp__sub_82D928A0) {
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
	// bl 0x82da98c8
	ctx.lr = 0x82D928BC;
	sub_82DA98C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d928d0
	if (!ctx.cr6.eq) goto loc_82D928D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da9a08
	ctx.lr = 0x82D928D0;
	sub_82DA9A08(ctx, base);
loc_82D928D0:
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

__attribute__((alias("__imp__sub_82D928E4"))) PPC_WEAK_FUNC(sub_82D928E4);
PPC_FUNC_IMPL(__imp__sub_82D928E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D928E8"))) PPC_WEAK_FUNC(sub_82D928E8);
PPC_FUNC_IMPL(__imp__sub_82D928E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82da98c8
	ctx.lr = 0x82D92904;
	sub_82DA98C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92918
	if (!ctx.cr6.eq) goto loc_82D92918;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82da9a28
	ctx.lr = 0x82D92918;
	sub_82DA9A28(ctx, base);
loc_82D92918:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D9292C"))) PPC_WEAK_FUNC(sub_82D9292C);
PPC_FUNC_IMPL(__imp__sub_82D9292C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92930"))) PPC_WEAK_FUNC(sub_82D92930);
PPC_FUNC_IMPL(__imp__sub_82D92930) {
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
	// bl 0x82da98c8
	ctx.lr = 0x82D9294C;
	sub_82DA98C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92960
	if (!ctx.cr6.eq) goto loc_82D92960;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da9a50
	ctx.lr = 0x82D92960;
	sub_82DA9A50(ctx, base);
loc_82D92960:
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

__attribute__((alias("__imp__sub_82D92974"))) PPC_WEAK_FUNC(sub_82D92974);
PPC_FUNC_IMPL(__imp__sub_82D92974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92978"))) PPC_WEAK_FUNC(sub_82D92978);
PPC_FUNC_IMPL(__imp__sub_82D92978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82da98c8
	ctx.lr = 0x82D92994;
	sub_82DA98C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d929a8
	if (!ctx.cr6.eq) goto loc_82D929A8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82da9a70
	ctx.lr = 0x82D929A8;
	sub_82DA9A70(ctx, base);
loc_82D929A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D929BC"))) PPC_WEAK_FUNC(sub_82D929BC);
PPC_FUNC_IMPL(__imp__sub_82D929BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D929C0"))) PPC_WEAK_FUNC(sub_82D929C0);
PPC_FUNC_IMPL(__imp__sub_82D929C0) {
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
	// bl 0x82da98c8
	ctx.lr = 0x82D929DC;
	sub_82DA98C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d929f0
	if (!ctx.cr6.eq) goto loc_82D929F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da9b38
	ctx.lr = 0x82D929F0;
	sub_82DA9B38(ctx, base);
loc_82D929F0:
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

__attribute__((alias("__imp__sub_82D92A04"))) PPC_WEAK_FUNC(sub_82D92A04);
PPC_FUNC_IMPL(__imp__sub_82D92A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92A08"))) PPC_WEAK_FUNC(sub_82D92A08);
PPC_FUNC_IMPL(__imp__sub_82D92A08) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82da98c8
	ctx.lr = 0x82D92A1C;
	sub_82DA98C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92a2c
	if (!ctx.cr6.eq) goto loc_82D92A2C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da9b58
	ctx.lr = 0x82D92A2C;
	sub_82DA9B58(ctx, base);
loc_82D92A2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D92A3C"))) PPC_WEAK_FUNC(sub_82D92A3C);
PPC_FUNC_IMPL(__imp__sub_82D92A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92A40"))) PPC_WEAK_FUNC(sub_82D92A40);
PPC_FUNC_IMPL(__imp__sub_82D92A40) {
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
	// bl 0x82da98c8
	ctx.lr = 0x82D92A64;
	sub_82DA98C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92a7c
	if (!ctx.cr6.eq) goto loc_82D92A7C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82da9ba0
	ctx.lr = 0x82D92A7C;
	sub_82DA9BA0(ctx, base);
loc_82D92A7C:
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

__attribute__((alias("__imp__sub_82D92A94"))) PPC_WEAK_FUNC(sub_82D92A94);
PPC_FUNC_IMPL(__imp__sub_82D92A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92A98"))) PPC_WEAK_FUNC(sub_82D92A98);
PPC_FUNC_IMPL(__imp__sub_82D92A98) {
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
	// bl 0x82da98c8
	ctx.lr = 0x82D92AB4;
	sub_82DA98C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92ac8
	if (!ctx.cr6.eq) goto loc_82D92AC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da9c08
	ctx.lr = 0x82D92AC8;
	sub_82DA9C08(ctx, base);
loc_82D92AC8:
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

__attribute__((alias("__imp__sub_82D92ADC"))) PPC_WEAK_FUNC(sub_82D92ADC);
PPC_FUNC_IMPL(__imp__sub_82D92ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92AE0"))) PPC_WEAK_FUNC(sub_82D92AE0);
PPC_FUNC_IMPL(__imp__sub_82D92AE0) {
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
	// bl 0x82da98c8
	ctx.lr = 0x82D92B04;
	sub_82DA98C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92b1c
	if (!ctx.cr6.eq) goto loc_82D92B1C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82da9c48
	ctx.lr = 0x82D92B1C;
	sub_82DA9C48(ctx, base);
loc_82D92B1C:
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

__attribute__((alias("__imp__sub_82D92B34"))) PPC_WEAK_FUNC(sub_82D92B34);
PPC_FUNC_IMPL(__imp__sub_82D92B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92B38"))) PPC_WEAK_FUNC(sub_82D92B38);
PPC_FUNC_IMPL(__imp__sub_82D92B38) {
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
	// bl 0x82da98c8
	ctx.lr = 0x82D92B54;
	sub_82DA98C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92b68
	if (!ctx.cr6.eq) goto loc_82D92B68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da9c98
	ctx.lr = 0x82D92B68;
	sub_82DA9C98(ctx, base);
loc_82D92B68:
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

__attribute__((alias("__imp__sub_82D92B7C"))) PPC_WEAK_FUNC(sub_82D92B7C);
PPC_FUNC_IMPL(__imp__sub_82D92B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92B80"))) PPC_WEAK_FUNC(sub_82D92B80);
PPC_FUNC_IMPL(__imp__sub_82D92B80) {
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
	// bl 0x82da98c8
	ctx.lr = 0x82D92B9C;
	sub_82DA98C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92bb0
	if (!ctx.cr6.eq) goto loc_82D92BB0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da9ce8
	ctx.lr = 0x82D92BB0;
	sub_82DA9CE8(ctx, base);
loc_82D92BB0:
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

__attribute__((alias("__imp__sub_82D92BC4"))) PPC_WEAK_FUNC(sub_82D92BC4);
PPC_FUNC_IMPL(__imp__sub_82D92BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92BC8"))) PPC_WEAK_FUNC(sub_82D92BC8);
PPC_FUNC_IMPL(__imp__sub_82D92BC8) {
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
	// bl 0x82da98c8
	ctx.lr = 0x82D92BE4;
	sub_82DA98C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92bf8
	if (!ctx.cr6.eq) goto loc_82D92BF8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da9cf8
	ctx.lr = 0x82D92BF8;
	sub_82DA9CF8(ctx, base);
loc_82D92BF8:
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

__attribute__((alias("__imp__sub_82D92C0C"))) PPC_WEAK_FUNC(sub_82D92C0C);
PPC_FUNC_IMPL(__imp__sub_82D92C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92C10"))) PPC_WEAK_FUNC(sub_82D92C10);
PPC_FUNC_IMPL(__imp__sub_82D92C10) {
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
	// bl 0x82dee1c0
	ctx.lr = 0x82D92C2C;
	sub_82DEE1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92c40
	if (!ctx.cr6.eq) goto loc_82D92C40;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82dee2b0
	ctx.lr = 0x82D92C40;
	sub_82DEE2B0(ctx, base);
loc_82D92C40:
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

__attribute__((alias("__imp__sub_82D92C54"))) PPC_WEAK_FUNC(sub_82D92C54);
PPC_FUNC_IMPL(__imp__sub_82D92C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92C58"))) PPC_WEAK_FUNC(sub_82D92C58);
PPC_FUNC_IMPL(__imp__sub_82D92C58) {
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
	// bl 0x82dee1c0
	ctx.lr = 0x82D92C74;
	sub_82DEE1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92c88
	if (!ctx.cr6.eq) goto loc_82D92C88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82dee2d0
	ctx.lr = 0x82D92C88;
	sub_82DEE2D0(ctx, base);
loc_82D92C88:
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

__attribute__((alias("__imp__sub_82D92C9C"))) PPC_WEAK_FUNC(sub_82D92C9C);
PPC_FUNC_IMPL(__imp__sub_82D92C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92CA0"))) PPC_WEAK_FUNC(sub_82D92CA0);
PPC_FUNC_IMPL(__imp__sub_82D92CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82dee1c0
	ctx.lr = 0x82D92CBC;
	sub_82DEE1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92cd0
	if (!ctx.cr6.eq) goto loc_82D92CD0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82def150
	ctx.lr = 0x82D92CD0;
	sub_82DEF150(ctx, base);
loc_82D92CD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D92CE4"))) PPC_WEAK_FUNC(sub_82D92CE4);
PPC_FUNC_IMPL(__imp__sub_82D92CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92CE8"))) PPC_WEAK_FUNC(sub_82D92CE8);
PPC_FUNC_IMPL(__imp__sub_82D92CE8) {
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
	// bl 0x82dee1c0
	ctx.lr = 0x82D92D04;
	sub_82DEE1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92d18
	if (!ctx.cr6.eq) goto loc_82D92D18;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82def190
	ctx.lr = 0x82D92D18;
	sub_82DEF190(ctx, base);
loc_82D92D18:
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

__attribute__((alias("__imp__sub_82D92D2C"))) PPC_WEAK_FUNC(sub_82D92D2C);
PPC_FUNC_IMPL(__imp__sub_82D92D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92D30"))) PPC_WEAK_FUNC(sub_82D92D30);
PPC_FUNC_IMPL(__imp__sub_82D92D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D92D38;
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
	// bl 0x82dee1c0
	ctx.lr = 0x82D92D50;
	sub_82DEE1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92d6c
	if (!ctx.cr6.eq) goto loc_82D92D6C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82def1b0
	ctx.lr = 0x82D92D6C;
	sub_82DEF1B0(ctx, base);
loc_82D92D6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D92D74"))) PPC_WEAK_FUNC(sub_82D92D74);
PPC_FUNC_IMPL(__imp__sub_82D92D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92D78"))) PPC_WEAK_FUNC(sub_82D92D78);
PPC_FUNC_IMPL(__imp__sub_82D92D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D92D80;
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
	// bl 0x82dee1c0
	ctx.lr = 0x82D92D98;
	sub_82DEE1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92db4
	if (!ctx.cr6.eq) goto loc_82D92DB4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82def238
	ctx.lr = 0x82D92DB4;
	sub_82DEF238(ctx, base);
loc_82D92DB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D92DBC"))) PPC_WEAK_FUNC(sub_82D92DBC);
PPC_FUNC_IMPL(__imp__sub_82D92DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92DC0"))) PPC_WEAK_FUNC(sub_82D92DC0);
PPC_FUNC_IMPL(__imp__sub_82D92DC0) {
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
	// bl 0x82dee1c0
	ctx.lr = 0x82D92DDC;
	sub_82DEE1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92df0
	if (!ctx.cr6.eq) goto loc_82D92DF0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82def2a8
	ctx.lr = 0x82D92DF0;
	sub_82DEF2A8(ctx, base);
loc_82D92DF0:
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

__attribute__((alias("__imp__sub_82D92E04"))) PPC_WEAK_FUNC(sub_82D92E04);
PPC_FUNC_IMPL(__imp__sub_82D92E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92E08"))) PPC_WEAK_FUNC(sub_82D92E08);
PPC_FUNC_IMPL(__imp__sub_82D92E08) {
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
	// bl 0x82dee1c0
	ctx.lr = 0x82D92E24;
	sub_82DEE1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92e38
	if (!ctx.cr6.eq) goto loc_82D92E38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82def2b8
	ctx.lr = 0x82D92E38;
	sub_82DEF2B8(ctx, base);
loc_82D92E38:
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

__attribute__((alias("__imp__sub_82D92E4C"))) PPC_WEAK_FUNC(sub_82D92E4C);
PPC_FUNC_IMPL(__imp__sub_82D92E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92E50"))) PPC_WEAK_FUNC(sub_82D92E50);
PPC_FUNC_IMPL(__imp__sub_82D92E50) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82de4858
	ctx.lr = 0x82D92E64;
	sub_82DE4858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92e74
	if (!ctx.cr6.eq) goto loc_82D92E74;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82de2c70
	ctx.lr = 0x82D92E74;
	sub_82DE2C70(ctx, base);
loc_82D92E74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D92E84"))) PPC_WEAK_FUNC(sub_82D92E84);
PPC_FUNC_IMPL(__imp__sub_82D92E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92E88"))) PPC_WEAK_FUNC(sub_82D92E88);
PPC_FUNC_IMPL(__imp__sub_82D92E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D92E90;
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// bl 0x82de4858
	ctx.lr = 0x82D92EBC;
	sub_82DE4858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92ee4
	if (!ctx.cr6.eq) goto loc_82D92EE4;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82de2f58
	ctx.lr = 0x82D92EE4;
	sub_82DE2F58(ctx, base);
loc_82D92EE4:
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

__attribute__((alias("__imp__sub_82D92EF4"))) PPC_WEAK_FUNC(sub_82D92EF4);
PPC_FUNC_IMPL(__imp__sub_82D92EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92EF8"))) PPC_WEAK_FUNC(sub_82D92EF8);
PPC_FUNC_IMPL(__imp__sub_82D92EF8) {
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
	// bl 0x82de4858
	ctx.lr = 0x82D92F14;
	sub_82DE4858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92f28
	if (!ctx.cr6.eq) goto loc_82D92F28;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82de3108
	ctx.lr = 0x82D92F28;
	sub_82DE3108(ctx, base);
loc_82D92F28:
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

__attribute__((alias("__imp__sub_82D92F3C"))) PPC_WEAK_FUNC(sub_82D92F3C);
PPC_FUNC_IMPL(__imp__sub_82D92F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92F40"))) PPC_WEAK_FUNC(sub_82D92F40);
PPC_FUNC_IMPL(__imp__sub_82D92F40) {
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
	// bl 0x82de4858
	ctx.lr = 0x82D92F64;
	sub_82DE4858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92f7c
	if (!ctx.cr6.eq) goto loc_82D92F7C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82de3128
	ctx.lr = 0x82D92F7C;
	sub_82DE3128(ctx, base);
loc_82D92F7C:
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

__attribute__((alias("__imp__sub_82D92F94"))) PPC_WEAK_FUNC(sub_82D92F94);
PPC_FUNC_IMPL(__imp__sub_82D92F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92F98"))) PPC_WEAK_FUNC(sub_82D92F98);
PPC_FUNC_IMPL(__imp__sub_82D92F98) {
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
	// bl 0x82de4858
	ctx.lr = 0x82D92FBC;
	sub_82DE4858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d92fd4
	if (!ctx.cr6.eq) goto loc_82D92FD4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82de3150
	ctx.lr = 0x82D92FD4;
	sub_82DE3150(ctx, base);
loc_82D92FD4:
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

__attribute__((alias("__imp__sub_82D92FEC"))) PPC_WEAK_FUNC(sub_82D92FEC);
PPC_FUNC_IMPL(__imp__sub_82D92FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92FF0"))) PPC_WEAK_FUNC(sub_82D92FF0);
PPC_FUNC_IMPL(__imp__sub_82D92FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D92FF8;
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
	// bl 0x82de4858
	ctx.lr = 0x82D93010;
	sub_82DE4858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d9302c
	if (!ctx.cr6.eq) goto loc_82D9302C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82de31a0
	ctx.lr = 0x82D9302C;
	sub_82DE31A0(ctx, base);
loc_82D9302C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D93034"))) PPC_WEAK_FUNC(sub_82D93034);
PPC_FUNC_IMPL(__imp__sub_82D93034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D93038"))) PPC_WEAK_FUNC(sub_82D93038);
PPC_FUNC_IMPL(__imp__sub_82D93038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D93040;
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
	// bl 0x82de4858
	ctx.lr = 0x82D93058;
	sub_82DE4858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d93074
	if (!ctx.cr6.eq) goto loc_82D93074;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82de32e0
	ctx.lr = 0x82D93074;
	sub_82DE32E0(ctx, base);
loc_82D93074:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9307C"))) PPC_WEAK_FUNC(sub_82D9307C);
PPC_FUNC_IMPL(__imp__sub_82D9307C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D93080"))) PPC_WEAK_FUNC(sub_82D93080);
PPC_FUNC_IMPL(__imp__sub_82D93080) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82de4858
	ctx.lr = 0x82D930B4;
	sub_82DE4858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d930d4
	if (!ctx.cr6.eq) goto loc_82D930D4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82de3368
	ctx.lr = 0x82D930D4;
	sub_82DE3368(ctx, base);
loc_82D930D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82D930F4"))) PPC_WEAK_FUNC(sub_82D930F4);
PPC_FUNC_IMPL(__imp__sub_82D930F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D930F8"))) PPC_WEAK_FUNC(sub_82D930F8);
PPC_FUNC_IMPL(__imp__sub_82D930F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D93100;
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
	// bl 0x82de4858
	ctx.lr = 0x82D9311C;
	sub_82DE4858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d9313c
	if (!ctx.cr6.eq) goto loc_82D9313C;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82de33d0
	ctx.lr = 0x82D9313C;
	sub_82DE33D0(ctx, base);
loc_82D9313C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D93144"))) PPC_WEAK_FUNC(sub_82D93144);
PPC_FUNC_IMPL(__imp__sub_82D93144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D93148"))) PPC_WEAK_FUNC(sub_82D93148);
PPC_FUNC_IMPL(__imp__sub_82D93148) {
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
	// bl 0x82de4858
	ctx.lr = 0x82D93164;
	sub_82DE4858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d93178
	if (!ctx.cr6.eq) goto loc_82D93178;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82de3740
	ctx.lr = 0x82D93178;
	sub_82DE3740(ctx, base);
loc_82D93178:
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

__attribute__((alias("__imp__sub_82D9318C"))) PPC_WEAK_FUNC(sub_82D9318C);
PPC_FUNC_IMPL(__imp__sub_82D9318C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D93190"))) PPC_WEAK_FUNC(sub_82D93190);
PPC_FUNC_IMPL(__imp__sub_82D93190) {
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
	// bl 0x82de4858
	ctx.lr = 0x82D931AC;
	sub_82DE4858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d931c0
	if (!ctx.cr6.eq) goto loc_82D931C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82de3780
	ctx.lr = 0x82D931C0;
	sub_82DE3780(ctx, base);
loc_82D931C0:
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

__attribute__((alias("__imp__sub_82D931D4"))) PPC_WEAK_FUNC(sub_82D931D4);
PPC_FUNC_IMPL(__imp__sub_82D931D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D931D8"))) PPC_WEAK_FUNC(sub_82D931D8);
PPC_FUNC_IMPL(__imp__sub_82D931D8) {
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
	// bl 0x82de4858
	ctx.lr = 0x82D931FC;
	sub_82DE4858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d93214
	if (!ctx.cr6.eq) goto loc_82D93214;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82de37a0
	ctx.lr = 0x82D93214;
	sub_82DE37A0(ctx, base);
loc_82D93214:
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

__attribute__((alias("__imp__sub_82D9322C"))) PPC_WEAK_FUNC(sub_82D9322C);
PPC_FUNC_IMPL(__imp__sub_82D9322C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D93230"))) PPC_WEAK_FUNC(sub_82D93230);
PPC_FUNC_IMPL(__imp__sub_82D93230) {
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
	// bl 0x82de4858
	ctx.lr = 0x82D93254;
	sub_82DE4858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d9326c
	if (!ctx.cr6.eq) goto loc_82D9326C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82de38a8
	ctx.lr = 0x82D9326C;
	sub_82DE38A8(ctx, base);
loc_82D9326C:
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

__attribute__((alias("__imp__sub_82D93284"))) PPC_WEAK_FUNC(sub_82D93284);
PPC_FUNC_IMPL(__imp__sub_82D93284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D93288"))) PPC_WEAK_FUNC(sub_82D93288);
PPC_FUNC_IMPL(__imp__sub_82D93288) {
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
	// bl 0x82de4858
	ctx.lr = 0x82D932A4;
	sub_82DE4858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d932b8
	if (!ctx.cr6.eq) goto loc_82D932B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82de38f8
	ctx.lr = 0x82D932B8;
	sub_82DE38F8(ctx, base);
loc_82D932B8:
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

__attribute__((alias("__imp__sub_82D932CC"))) PPC_WEAK_FUNC(sub_82D932CC);
PPC_FUNC_IMPL(__imp__sub_82D932CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D932D0"))) PPC_WEAK_FUNC(sub_82D932D0);
PPC_FUNC_IMPL(__imp__sub_82D932D0) {
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
	// bl 0x82de4858
	ctx.lr = 0x82D932EC;
	sub_82DE4858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d93300
	if (!ctx.cr6.eq) goto loc_82D93300;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82de3988
	ctx.lr = 0x82D93300;
	sub_82DE3988(ctx, base);
loc_82D93300:
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

__attribute__((alias("__imp__sub_82D93314"))) PPC_WEAK_FUNC(sub_82D93314);
PPC_FUNC_IMPL(__imp__sub_82D93314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D93318"))) PPC_WEAK_FUNC(sub_82D93318);
PPC_FUNC_IMPL(__imp__sub_82D93318) {
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
	// bl 0x82de4858
	ctx.lr = 0x82D93334;
	sub_82DE4858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d93348
	if (!ctx.cr6.eq) goto loc_82D93348;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82de39c0
	ctx.lr = 0x82D93348;
	sub_82DE39C0(ctx, base);
loc_82D93348:
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

__attribute__((alias("__imp__sub_82D9335C"))) PPC_WEAK_FUNC(sub_82D9335C);
PPC_FUNC_IMPL(__imp__sub_82D9335C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D93360"))) PPC_WEAK_FUNC(sub_82D93360);
PPC_FUNC_IMPL(__imp__sub_82D93360) {
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
	// bl 0x82de4858
	ctx.lr = 0x82D9337C;
	sub_82DE4858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d93390
	if (!ctx.cr6.eq) goto loc_82D93390;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82de3a98
	ctx.lr = 0x82D93390;
	sub_82DE3A98(ctx, base);
loc_82D93390:
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

__attribute__((alias("__imp__sub_82D933A4"))) PPC_WEAK_FUNC(sub_82D933A4);
PPC_FUNC_IMPL(__imp__sub_82D933A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D933A8"))) PPC_WEAK_FUNC(sub_82D933A8);
PPC_FUNC_IMPL(__imp__sub_82D933A8) {
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
	// bl 0x82de4858
	ctx.lr = 0x82D933CC;
	sub_82DE4858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d933e4
	if (!ctx.cr6.eq) goto loc_82D933E4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82de4940
	ctx.lr = 0x82D933E4;
	sub_82DE4940(ctx, base);
loc_82D933E4:
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

__attribute__((alias("__imp__sub_82D933FC"))) PPC_WEAK_FUNC(sub_82D933FC);
PPC_FUNC_IMPL(__imp__sub_82D933FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D93400"))) PPC_WEAK_FUNC(sub_82D93400);
PPC_FUNC_IMPL(__imp__sub_82D93400) {
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
	// bl 0x82de4858
	ctx.lr = 0x82D9341C;
	sub_82DE4858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d93430
	if (!ctx.cr6.eq) goto loc_82D93430;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82de45c0
	ctx.lr = 0x82D93430;
	sub_82DE45C0(ctx, base);
loc_82D93430:
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

__attribute__((alias("__imp__sub_82D93444"))) PPC_WEAK_FUNC(sub_82D93444);
PPC_FUNC_IMPL(__imp__sub_82D93444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D93448"))) PPC_WEAK_FUNC(sub_82D93448);
PPC_FUNC_IMPL(__imp__sub_82D93448) {
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
	// bl 0x82de4858
	ctx.lr = 0x82D93464;
	sub_82DE4858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d93478
	if (!ctx.cr6.eq) goto loc_82D93478;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82de45d0
	ctx.lr = 0x82D93478;
	sub_82DE45D0(ctx, base);
loc_82D93478:
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

__attribute__((alias("__imp__sub_82D9348C"))) PPC_WEAK_FUNC(sub_82D9348C);
PPC_FUNC_IMPL(__imp__sub_82D9348C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D93490"))) PPC_WEAK_FUNC(sub_82D93490);
PPC_FUNC_IMPL(__imp__sub_82D93490) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82da5188
	ctx.lr = 0x82D934A4;
	sub_82DA5188(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d934b8
	if (!ctx.cr6.eq) goto loc_82D934B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da67c8
	ctx.lr = 0x82D934B8;
	sub_82DA67C8(ctx, base);
loc_82D934B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D934C8"))) PPC_WEAK_FUNC(sub_82D934C8);
PPC_FUNC_IMPL(__imp__sub_82D934C8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x82da5188
	ctx.lr = 0x82D934F4;
	sub_82DA5188(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d93510
	if (!ctx.cr6.eq) goto loc_82D93510;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82da5648
	ctx.lr = 0x82D93510;
	sub_82DA5648(ctx, base);
loc_82D93510:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82D9352C"))) PPC_WEAK_FUNC(sub_82D9352C);
PPC_FUNC_IMPL(__imp__sub_82D9352C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D93530"))) PPC_WEAK_FUNC(sub_82D93530);
PPC_FUNC_IMPL(__imp__sub_82D93530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D93538;
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
	// bl 0x82da5188
	ctx.lr = 0x82D93550;
	sub_82DA5188(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d9356c
	if (!ctx.cr6.eq) goto loc_82D9356C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82da56b0
	ctx.lr = 0x82D9356C;
	sub_82DA56B0(ctx, base);
loc_82D9356C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D93574"))) PPC_WEAK_FUNC(sub_82D93574);
PPC_FUNC_IMPL(__imp__sub_82D93574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D93578"))) PPC_WEAK_FUNC(sub_82D93578);
PPC_FUNC_IMPL(__imp__sub_82D93578) {
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
	// bl 0x82da5188
	ctx.lr = 0x82D93594;
	sub_82DA5188(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d935a8
	if (!ctx.cr6.eq) goto loc_82D935A8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da5700
	ctx.lr = 0x82D935A8;
	sub_82DA5700(ctx, base);
loc_82D935A8:
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

__attribute__((alias("__imp__sub_82D935BC"))) PPC_WEAK_FUNC(sub_82D935BC);
PPC_FUNC_IMPL(__imp__sub_82D935BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D935C0"))) PPC_WEAK_FUNC(sub_82D935C0);
PPC_FUNC_IMPL(__imp__sub_82D935C0) {
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
	// bl 0x82da5188
	ctx.lr = 0x82D935DC;
	sub_82DA5188(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d935f0
	if (!ctx.cr6.eq) goto loc_82D935F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da5f68
	ctx.lr = 0x82D935F0;
	sub_82DA5F68(ctx, base);
loc_82D935F0:
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

__attribute__((alias("__imp__sub_82D93604"))) PPC_WEAK_FUNC(sub_82D93604);
PPC_FUNC_IMPL(__imp__sub_82D93604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D93608"))) PPC_WEAK_FUNC(sub_82D93608);
PPC_FUNC_IMPL(__imp__sub_82D93608) {
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
	// bl 0x82da5188
	ctx.lr = 0x82D93624;
	sub_82DA5188(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d93638
	if (!ctx.cr6.eq) goto loc_82D93638;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da5fe8
	ctx.lr = 0x82D93638;
	sub_82DA5FE8(ctx, base);
loc_82D93638:
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

__attribute__((alias("__imp__sub_82D9364C"))) PPC_WEAK_FUNC(sub_82D9364C);
PPC_FUNC_IMPL(__imp__sub_82D9364C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D93650"))) PPC_WEAK_FUNC(sub_82D93650);
PPC_FUNC_IMPL(__imp__sub_82D93650) {
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
	// bl 0x82da5188
	ctx.lr = 0x82D9366C;
	sub_82DA5188(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d93680
	if (!ctx.cr6.eq) goto loc_82D93680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da5ff8
	ctx.lr = 0x82D93680;
	sub_82DA5FF8(ctx, base);
loc_82D93680:
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

__attribute__((alias("__imp__sub_82D93694"))) PPC_WEAK_FUNC(sub_82D93694);
PPC_FUNC_IMPL(__imp__sub_82D93694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D93698"))) PPC_WEAK_FUNC(sub_82D93698);
PPC_FUNC_IMPL(__imp__sub_82D93698) {
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
	// bl 0x82da5188
	ctx.lr = 0x82D936B4;
	sub_82DA5188(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d936c8
	if (!ctx.cr6.eq) goto loc_82D936C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da6018
	ctx.lr = 0x82D936C8;
	sub_82DA6018(ctx, base);
loc_82D936C8:
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

__attribute__((alias("__imp__sub_82D936DC"))) PPC_WEAK_FUNC(sub_82D936DC);
PPC_FUNC_IMPL(__imp__sub_82D936DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D936E0"))) PPC_WEAK_FUNC(sub_82D936E0);
PPC_FUNC_IMPL(__imp__sub_82D936E0) {
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
	// bl 0x82da5188
	ctx.lr = 0x82D936FC;
	sub_82DA5188(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d93710
	if (!ctx.cr6.eq) goto loc_82D93710;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da6028
	ctx.lr = 0x82D93710;
	sub_82DA6028(ctx, base);
loc_82D93710:
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

__attribute__((alias("__imp__sub_82D93724"))) PPC_WEAK_FUNC(sub_82D93724);
PPC_FUNC_IMPL(__imp__sub_82D93724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D93728"))) PPC_WEAK_FUNC(sub_82D93728);
PPC_FUNC_IMPL(__imp__sub_82D93728) {
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
	// bl 0x82da41c0
	ctx.lr = 0x82D93744;
	sub_82DA41C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82D93760"))) PPC_WEAK_FUNC(sub_82D93760);
PPC_FUNC_IMPL(__imp__sub_82D93760) {
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
	// bl 0x82da4200
	ctx.lr = 0x82D9377C;
	sub_82DA4200(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82D93798"))) PPC_WEAK_FUNC(sub_82D93798);
PPC_FUNC_IMPL(__imp__sub_82D93798) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d93834
	if (ctx.cr6.eq) goto loc_82D93834;
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82d93834
	if (ctx.cr6.lt) goto loc_82D93834;
	// lwz r11,116(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82d93834
	if (ctx.cr6.gt) goto loc_82D93834;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,14308
	ctx.r12.s64 = ctx.r12.s64 + 14308;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D93804;
	case 1:
		goto loc_82D9382C;
	case 2:
		goto loc_82D9382C;
	case 3:
		goto loc_82D9382C;
	case 4:
		goto loc_82D9382C;
	case 5:
		goto loc_82D93854;
	case 6:
		goto loc_82D93854;
	case 7:
		goto loc_82D9384C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,14340(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14340);
	// lwz r22,14380(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14380);
	// lwz r22,14380(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14380);
	// lwz r22,14380(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14380);
	// lwz r22,14380(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14380);
	// lwz r22,14420(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14420);
	// lwz r22,14420(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14420);
	// lwz r22,14412(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14412);
loc_82D93804:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,1256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1256);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82d93854
	if (!ctx.cr6.gt) goto loc_82D93854;
	// li r3,75
	ctx.r3.s64 = 75;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82D9382C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d93854
	if (!ctx.cr6.eq) goto loc_82D93854;
loc_82D93834:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82D9384C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d93834
	if (!ctx.cr6.eq) goto loc_82D93834;
loc_82D93854:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// li r5,136
	ctx.r5.s64 = 136;
	// bl 0x82cb1160
	ctx.lr = 0x82D93860;
	sub_82CB1160(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82D93888"))) PPC_WEAK_FUNC(sub_82D93888);
PPC_FUNC_IMPL(__imp__sub_82D93888) {
	PPC_FUNC_PROLOGUE();
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D93890"))) PPC_WEAK_FUNC(sub_82D93890);
PPC_FUNC_IMPL(__imp__sub_82D93890) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D938A0"))) PPC_WEAK_FUNC(sub_82D938A0);
PPC_FUNC_IMPL(__imp__sub_82D938A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D938A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// lwz r31,32(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82d938e0
	if (ctx.cr6.eq) goto loc_82D938E0;
loc_82D938C0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d938e0
	if (ctx.cr6.eq) goto loc_82D938E0;
	// lwz r3,104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// bl 0x82d938a0
	ctx.lr = 0x82D938D4;
	sub_82D938A0(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82d938c0
	if (!ctx.cr6.eq) goto loc_82D938C0;
loc_82D938E0:
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 240, ctx.r10.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d93910
	if (ctx.cr6.eq) goto loc_82D93910;
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 240, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_82D93910:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D93918"))) PPC_WEAK_FUNC(sub_82D93918);
PPC_FUNC_IMPL(__imp__sub_82D93918) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d9392c
	if (!ctx.cr6.eq) goto loc_82D9392C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D9392C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d9393c
	if (!ctx.cr6.eq) goto loc_82D9393C;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_82D9393C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D93948"))) PPC_WEAK_FUNC(sub_82D93948);
PPC_FUNC_IMPL(__imp__sub_82D93948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D93950;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,516(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,484(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bgt cr6,0x82d951c0
	if (ctx.cr6.gt) goto loc_82D951C0;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,14748
	ctx.r12.s64 = ctx.r12.s64 + 14748;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D951C0;
	case 1:
		goto loc_82D939BC;
	case 2:
		goto loc_82D93B78;
	case 3:
		goto loc_82D93EE4;
	case 4:
		goto loc_82D9427C;
	case 5:
		goto loc_82D9462C;
	case 6:
		goto loc_82D94A24;
	case 7:
		goto loc_82D94EC4;
	default:
		__builtin_unreachable();
	}
	// lwz r22,20928(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20928);
	// lwz r22,14780(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14780);
	// lwz r22,15224(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15224);
	// lwz r22,16100(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16100);
	// lwz r22,17020(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17020);
	// lwz r22,17964(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17964);
	// lwz r22,18980(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 18980);
	// lwz r22,20164(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20164);
loc_82D939BC:
	// lwz r11,492(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82d951c0
	if (ctx.cr6.gt) goto loc_82D951C0;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,14820
	ctx.r12.s64 = ctx.r12.s64 + 14820;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D93A04;
	case 1:
		goto loc_82D93A40;
	case 2:
		goto loc_82D951C0;
	case 3:
		goto loc_82D93A90;
	case 4:
		goto loc_82D951C0;
	case 5:
		goto loc_82D93AE8;
	case 6:
		goto loc_82D951C0;
	case 7:
		goto loc_82D93B2C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,14852(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14852);
	// lwz r22,14912(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14912);
	// lwz r22,20928(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20928);
	// lwz r22,14992(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14992);
	// lwz r22,20928(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20928);
	// lwz r22,15080(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15080);
	// lwz r22,20928(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20928);
	// lwz r22,15148(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15148);
loc_82D93A04:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmuls f11,f5,f5
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,7616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7616);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,508(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f13,f31,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f0,f11,f0,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D93A40:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmuls f11,f5,f5
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// lwz r9,508(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,7616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7616);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f13,f31,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f0,f11,f0,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D93A90:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,508(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// lfs f0,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f13,6380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// li r9,4
	ctx.r9.s64 = 4;
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D93AE8:
	// lwz r10,508(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stfs f4,92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82D93B10:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82d93b10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D93B10;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D93B2C:
	// lwz r10,508(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stfs f4,92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82D93B5C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82d93b5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D93B5C;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D93B78:
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d93be4
	if (!ctx.cr6.eq) goto loc_82D93BE4;
	// lwz r30,492(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,508(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// rlwinm r5,r30,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82D93B9C;
	sub_82CB16F0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82d93bdc
	if (!ctx.cr6.gt) goto loc_82D93BDC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lfs f0,16084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16084);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
loc_82D93BC0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d93bc0
	if (!ctx.cr6.eq) goto loc_82D93BC0;
loc_82D93BDC:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D93BE4:
	// lwz r31,492(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82d93e88
	if (ctx.cr6.eq) goto loc_82D93E88;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// bgt cr6,0x82d93e88
	if (ctx.cr6.gt) goto loc_82D93E88;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82d951c0
	if (ctx.cr6.gt) goto loc_82D951C0;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,15388
	ctx.r12.s64 = ctx.r12.s64 + 15388;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D93C3C;
	case 1:
		goto loc_82D93C9C;
	case 2:
		goto loc_82D951C0;
	case 3:
		goto loc_82D93D28;
	case 4:
		goto loc_82D951C0;
	case 5:
		goto loc_82D93D90;
	case 6:
		goto loc_82D951C0;
	case 7:
		goto loc_82D93DFC;
	default:
		__builtin_unreachable();
	}
	// lwz r22,15420(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15420);
	// lwz r22,15516(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15516);
	// lwz r22,20928(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20928);
	// lwz r22,15656(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15656);
	// lwz r22,20928(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20928);
	// lwz r22,15760(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15760);
	// lwz r22,20928(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20928);
	// lwz r22,15868(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15868);
loc_82D93C3C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmuls f12,f5,f5
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// lwz r9,508(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// fmuls f11,f6,f6
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,7616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7616);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f12,f31,f31,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f12.f64));
	// fmadds f13,f29,f29,f13
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f13,f12
	ctx.f13.f64 = double(float(sqrt(ctx.f12.f64)));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D93C9C:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmuls f13,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmuls f12,f5,f5
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmuls f11,f6,f6
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// lwz r10,508(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// li r8,2
	ctx.r8.s64 = 2;
	// lfs f0,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,6380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,7616(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7616);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f12,f31,f31,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f12.f64));
	// fmadds f13,f29,f29,f13
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f13,f12
	ctx.f13.f64 = double(float(sqrt(ctx.f12.f64)));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D93D28:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f29,100(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,508(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// lfs f13,6380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f12,f5,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f6,f13
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82D93D70:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82d93d70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D93D70;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D93D90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,508(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// stfs f29,108(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82D93DF0;
	sub_82CB1160(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D93DFC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,508(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stfs f29,116(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f13,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f10,f5,f13
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f12,f30,f13
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f11,f4,f13
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f10,14460(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14460);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f9,f7,f10
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f0,f8,f10
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82D93E7C;
	sub_82CB1160(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D93E88:
	// lwz r30,508(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// rlwinm r5,r31,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82D93E9C;
	sub_82CB16F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82d951bc
	if (!ctx.cr6.gt) goto loc_82D951BC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_82D93EB4:
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82d93ec8
	if (ctx.cr6.eq) goto loc_82D93EC8;
	// stfs f29,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x82d93ecc
	goto loc_82D93ECC;
loc_82D93EC8:
	// stfs f31,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_82D93ECC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82d93eb4
	if (ctx.cr6.lt) goto loc_82D93EB4;
	// b 0x82d951bc
	goto loc_82D951BC;
loc_82D93EE4:
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d93f50
	if (!ctx.cr6.eq) goto loc_82D93F50;
	// lwz r30,492(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,508(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// rlwinm r5,r30,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82D93F08;
	sub_82CB16F0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82d93f48
	if (!ctx.cr6.gt) goto loc_82D93F48;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lfs f0,16084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16084);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
loc_82D93F2C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d93f2c
	if (!ctx.cr6.eq) goto loc_82D93F2C;
loc_82D93F48:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D93F50:
	// lwz r31,492(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82d94220
	if (ctx.cr6.eq) goto loc_82D94220;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// bgt cr6,0x82d94220
	if (ctx.cr6.gt) goto loc_82D94220;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82d951c0
	if (ctx.cr6.gt) goto loc_82D951C0;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,16264
	ctx.r12.s64 = ctx.r12.s64 + 16264;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D93FA8;
	case 1:
		goto loc_82D93FF4;
	case 2:
		goto loc_82D951C0;
	case 3:
		goto loc_82D9404C;
	case 4:
		goto loc_82D951C0;
	case 5:
		goto loc_82D940C0;
	case 6:
		goto loc_82D951C0;
	case 7:
		goto loc_82D9415C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,16296(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16296);
	// lwz r22,16372(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16372);
	// lwz r22,20928(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20928);
	// lwz r22,16460(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16460);
	// lwz r22,20928(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20928);
	// lwz r22,16576(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16576);
	// lwz r22,20928(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20928);
	// lwz r22,16732(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16732);
loc_82D93FA8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fadds f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f29,f30
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,508(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f6,92(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D93FF4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,92(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stfs f6,108(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,508(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82D9402C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82d9402c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D9402C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D9404C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,508(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stfs f29,100(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f12,f5,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
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
	// fmuls f0,f6,f13
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82D940B4;
	sub_82CB1160(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D940C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,508(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// stfs f29,108(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f5,144(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f6,172(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lfs f0,7616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7616);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
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
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82D94150;
	sub_82CB1160(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D9415C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,508(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// stfs f29,116(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f5,160(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f6,196(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f0,7616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7616);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f13,188(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f10,140(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f10,204(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82D94214;
	sub_82CB1160(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D94220:
	// lwz r30,508(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// rlwinm r5,r31,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82D94234;
	sub_82CB16F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82d951bc
	if (!ctx.cr6.gt) goto loc_82D951BC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_82D9424C:
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82d94260
	if (ctx.cr6.eq) goto loc_82D94260;
	// stfs f29,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x82d94264
	goto loc_82D94264;
loc_82D94260:
	// stfs f31,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_82D94264:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82d9424c
	if (ctx.cr6.lt) goto loc_82D9424C;
	// b 0x82d951bc
	goto loc_82D951BC;
loc_82D9427C:
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r31,492(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d942d4
	if (!ctx.cr6.eq) goto loc_82D942D4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,508(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb16f0
	ctx.lr = 0x82D942A8;
	sub_82CB16F0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82d951bc
	if (!ctx.cr6.gt) goto loc_82D951BC;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stfs f30,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// bl 0x82cb15e8
	ctx.lr = 0x82D942D0;
	sub_82CB15E8(ctx, base);
	// b 0x82d951bc
	goto loc_82D951BC;
loc_82D942D4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82d945c8
	if (ctx.cr6.eq) goto loc_82D945C8;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// bgt cr6,0x82d945c8
	if (ctx.cr6.gt) goto loc_82D945C8;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82d951c0
	if (ctx.cr6.gt) goto loc_82D951C0;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,17160
	ctx.r12.s64 = ctx.r12.s64 + 17160;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D94328;
	case 1:
		goto loc_82D9436C;
	case 2:
		goto loc_82D951C0;
	case 3:
		goto loc_82D943D8;
	case 4:
		goto loc_82D951C0;
	case 5:
		goto loc_82D94458;
	case 6:
		goto loc_82D951C0;
	case 7:
		goto loc_82D944F4;
	default:
		__builtin_unreachable();
	}
	// lwz r22,17192(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17192);
	// lwz r22,17260(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17260);
	// lwz r22,20928(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20928);
	// lwz r22,17368(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17368);
	// lwz r22,20928(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20928);
	// lwz r22,17496(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17496);
	// lwz r22,20928(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20928);
	// lwz r22,17652(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17652);
loc_82D94328:
	// lwz r10,508(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stfs f5,92(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82D9434C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82d9434c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D9434C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D9436C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,508(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,92(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmuls f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f0,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82D943B8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82d943b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D943B8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D943D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,508(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,80
	ctx.r5.s64 = 80;
	// stfs f29,100(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f5,136(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f6,156(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82D9444C;
	sub_82CB1160(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D94458:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,508(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,120
	ctx.r5.s64 = 120;
	// stfs f29,108(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f5,168(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f6,196(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82D944E8;
	sub_82CB1160(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D944F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,508(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,160
	ctx.r5.s64 = 160;
	// stfs f29,116(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f5,192(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f7,f0
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,228(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fmuls f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
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
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f12,236(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82D945BC;
	sub_82CB1160(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D945C8:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,508(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb16f0
	ctx.lr = 0x82D945E4;
	sub_82CB16F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82d951bc
	if (!ctx.cr6.gt) goto loc_82D951BC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_82D945FC:
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82d94610
	if (ctx.cr6.eq) goto loc_82D94610;
	// stfs f29,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x82d94614
	goto loc_82D94614;
loc_82D94610:
	// stfs f31,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_82D94614:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82d945fc
	if (ctx.cr6.lt) goto loc_82D945FC;
	// b 0x82d951bc
	goto loc_82D951BC;
loc_82D9462C:
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r31,492(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d94684
	if (!ctx.cr6.eq) goto loc_82D94684;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,508(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82cb16f0
	ctx.lr = 0x82D94658;
	sub_82CB16F0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82d951bc
	if (!ctx.cr6.gt) goto loc_82D951BC;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stfs f30,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// bl 0x82cb15e8
	ctx.lr = 0x82D94680;
	sub_82CB15E8(ctx, base);
	// b 0x82d951bc
	goto loc_82D951BC;
loc_82D94684:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82d949c0
	if (ctx.cr6.eq) goto loc_82D949C0;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// bgt cr6,0x82d949c0
	if (ctx.cr6.gt) goto loc_82D949C0;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82d951c0
	if (ctx.cr6.gt) goto loc_82D951C0;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,18104
	ctx.r12.s64 = ctx.r12.s64 + 18104;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D946D8;
	case 1:
		goto loc_82D94720;
	case 2:
		goto loc_82D951C0;
	case 3:
		goto loc_82D94784;
	case 4:
		goto loc_82D951C0;
	case 5:
		goto loc_82D94818;
	case 6:
		goto loc_82D951C0;
	case 7:
		goto loc_82D948CC;
	default:
		__builtin_unreachable();
	}
	// lwz r22,18136(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 18136);
	// lwz r22,18208(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 18208);
	// lwz r22,20928(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20928);
	// lwz r22,18308(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 18308);
	// lwz r22,20928(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20928);
	// lwz r22,18456(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 18456);
	// lwz r22,20928(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20928);
	// lwz r22,18636(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 18636);
loc_82D946D8:
	// lwz r10,508(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stfs f4,92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82D94700:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82d94700
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D94700;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D94720:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,508(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// stfs f29,92(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f6,124(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82D94778;
	sub_82CB1160(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D94784:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,508(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// stfs f29,100(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f6,172(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82D9480C;
	sub_82CB1160(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D94818:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,508(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,144
	ctx.r5.s64 = 144;
	// stfs f29,108(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f4,164(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f5,192(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
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
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f6,220(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82D948C0;
	sub_82CB1160(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D948CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,508(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,192
	ctx.r5.s64 = 192;
	// stfs f29,116(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f4,188(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f7,f0
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f5,224(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fmuls f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f6,260(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
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
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
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
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f0,236(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f0,252(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f0,264(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f13,232(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f12,268(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82D949B4;
	sub_82CB1160(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D949C0:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,508(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82cb16f0
	ctx.lr = 0x82D949DC;
	sub_82CB16F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82d951bc
	if (!ctx.cr6.gt) goto loc_82D951BC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_82D949F4:
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82d94a08
	if (ctx.cr6.eq) goto loc_82D94A08;
	// stfs f29,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x82d94a0c
	goto loc_82D94A0C;
loc_82D94A08:
	// stfs f31,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_82D94A0C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82d949f4
	if (ctx.cr6.lt) goto loc_82D949F4;
	// b 0x82d951bc
	goto loc_82D951BC;
loc_82D94A24:
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r31,492(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d94a74
	if (!ctx.cr6.eq) goto loc_82D94A74;
	// lwz r30,508(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// rlwinm r5,r31,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82D94A48;
	sub_82CB16F0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82d951bc
	if (!ctx.cr6.gt) goto loc_82D951BC;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stfs f30,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// bl 0x82cb15e8
	ctx.lr = 0x82D94A70;
	sub_82CB15E8(ctx, base);
	// b 0x82d951bc
	goto loc_82D951BC;
loc_82D94A74:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82d94e68
	if (ctx.cr6.eq) goto loc_82D94E68;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// bgt cr6,0x82d94e68
	if (ctx.cr6.gt) goto loc_82D94E68;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82d951c0
	if (ctx.cr6.gt) goto loc_82D951C0;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,19112
	ctx.r12.s64 = ctx.r12.s64 + 19112;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D94AC8;
	case 1:
		goto loc_82D94B18;
	case 2:
		goto loc_82D951C0;
	case 3:
		goto loc_82D94B8C;
	case 4:
		goto loc_82D951C0;
	case 5:
		goto loc_82D94C50;
	case 6:
		goto loc_82D951C0;
	case 7:
		goto loc_82D94D44;
	default:
		__builtin_unreachable();
	}
	// lwz r22,19144(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 19144);
	// lwz r22,19224(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 19224);
	// lwz r22,20928(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20928);
	// lwz r22,19340(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 19340);
	// lwz r22,20928(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20928);
	// lwz r22,19536(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 19536);
	// lwz r22,20928(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20928);
	// lwz r22,19780(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 19780);
loc_82D94AC8:
	// lwz r10,508(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stfs f4,92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82D94AF8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82d94af8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D94AF8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D94B18:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,508(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stfs f29,92(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f6,124(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f8,140(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82D94B80;
	sub_82CB1160(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D94B8C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,508(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// stfs f29,100(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f10,f5,f13
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f10,f6,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f10,172(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmuls f12,f30,f13
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f11,f4,f13
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f7,f13
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmuls f0,f8,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f10,184(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82D94C44;
	sub_82CB1160(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D94C50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,508(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,192
	ctx.r5.s64 = 192;
	// stfs f29,108(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f4,164(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f12,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f7,f12
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f5,192(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f6,220(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f12,252(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f13,224(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
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
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f0,236(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f0,264(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f13,240(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f13,268(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82D94D38;
	sub_82CB1160(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D94D44:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,508(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// stfs f29,116(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f4,188(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
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
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
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
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
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
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f5,224(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f0,236(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f0,252(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f6,260(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f0,264(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f0,268(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f0,272(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f0,276(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f0,284(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f0,292(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f7,296(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f0,300(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stfs f0,304(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f0,308(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f0,312(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f0,316(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f0,324(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f0,328(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f8,332(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82D94E5C;
	sub_82CB1160(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D94E68:
	// lwz r30,508(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// rlwinm r5,r31,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82D94E7C;
	sub_82CB16F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82d951bc
	if (!ctx.cr6.gt) goto loc_82D951BC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_82D94E94:
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82d94ea8
	if (ctx.cr6.eq) goto loc_82D94EA8;
	// stfs f29,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x82d94eac
	goto loc_82D94EAC;
loc_82D94EA8:
	// stfs f31,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_82D94EAC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82d94e94
	if (ctx.cr6.lt) goto loc_82D94E94;
	// b 0x82d951bc
	goto loc_82D951BC;
loc_82D94EC4:
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d94f30
	if (!ctx.cr6.eq) goto loc_82D94F30;
	// lwz r30,492(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,508(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// rlwinm r5,r30,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82D94EE8;
	sub_82CB16F0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82d94f28
	if (!ctx.cr6.gt) goto loc_82D94F28;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lfs f0,16084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16084);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
loc_82D94F0C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d94f0c
	if (!ctx.cr6.eq) goto loc_82D94F0C;
loc_82D94F28:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D94F30:
	// lwz r31,492(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82d95164
	if (ctx.cr6.eq) goto loc_82D95164;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// bgt cr6,0x82d95164
	if (ctx.cr6.gt) goto loc_82D95164;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// fmuls f12,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmuls f11,f29,f29
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// fmuls f10,f30,f30
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// fmuls f0,f5,f5
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmuls f13,f6,f6
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// bgt cr6,0x82d951c0
	if (ctx.cr6.gt) goto loc_82D951C0;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// addi r12,r12,20348
	ctx.r12.s64 = ctx.r12.s64 + 20348;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D94F94;
	case 1:
		goto loc_82D95000;
	case 2:
		goto loc_82D951C0;
	case 3:
		goto loc_82D95098;
	case 4:
		goto loc_82D951C0;
	case 5:
		goto loc_82D95100;
	default:
		__builtin_unreachable();
	}
	// lwz r22,20372(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20372);
	// lwz r22,20480(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20480);
	// lwz r22,20928(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20928);
	// lwz r22,20632(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20632);
	// lwz r22,20928(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20928);
	// lwz r22,20736(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20736);
loc_82D94F94:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,508(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f9,16084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16084);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f9,-620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -620);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f8,-624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -624);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f8,-628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -628);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f7,-632(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -632);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmadds f9,f13,f9,f6
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f0,f13,f8,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fadds f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D95000:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,508(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r8,2
	ctx.r8.s64 = 2;
	// lfs f9,16084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16084);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmuls f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f9,-620(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -620);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f8,-624(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -624);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmuls f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f8,-628(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -628);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f7,-632(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -632);
	ctx.f7.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmuls f7,f0,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lfs f0,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f0,f13,f9,f6
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f13,f13,f8,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D95098:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f10,6380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6380);
	ctx.f10.f64 = double(temp.f32);
	// li r9,8
	ctx.r9.s64 = 8;
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f12,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lwz r10,508(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82D950E0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82d950e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D950E0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D95100:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,508(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// li r5,48
	ctx.r5.s64 = 48;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f9,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f9,f4,f9
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f12,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82D95158;
	sub_82CB1160(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82d951c0
	goto loc_82D951C0;
loc_82D95164:
	// lwz r30,508(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// rlwinm r5,r31,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82D95178;
	sub_82CB16F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82d951bc
	if (!ctx.cr6.gt) goto loc_82D951BC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_82D95190:
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82d951a4
	if (ctx.cr6.eq) goto loc_82D951A4;
	// stfs f29,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x82d951a8
	goto loc_82D951A8;
loc_82D951A4:
	// stfs f31,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_82D951A8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82d95190
	if (ctx.cr6.lt) goto loc_82D95190;
loc_82D951BC:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_82D951C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
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

__attribute__((alias("__imp__sub_82D951D8"))) PPC_WEAK_FUNC(sub_82D951D8);
PPC_FUNC_IMPL(__imp__sub_82D951D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d951e8
	if (!ctx.cr6.eq) goto loc_82D951E8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D951E8:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D951F8"))) PPC_WEAK_FUNC(sub_82D951F8);
PPC_FUNC_IMPL(__imp__sub_82D951F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D95200;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82d95220
	if (!ctx.cr6.gt) goto loc_82D95220;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d9533c
	if (ctx.cr6.lt) goto loc_82D9533C;
loc_82D95220:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r4,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d95244
	if (ctx.cr6.eq) goto loc_82D95244;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82d952cc
	if (ctx.cr6.eq) goto loc_82D952CC;
loc_82D95244:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82d952cc
	if (!ctx.cr6.gt) goto loc_82D952CC;
	// addi r10,r4,323
	ctx.r10.s64 = ctx.r4.s64 + 323;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d952cc
	if (!ctx.cr6.eq) goto loc_82D952CC;
	// lwz r10,1256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1256);
	// lwz r9,1252(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1252);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82d95278
	if (!ctx.cr6.lt) goto loc_82D95278;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82D95278:
	// lwz r9,1272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1272);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,32
	ctx.r7.s64 = 2097152;
	// addi r5,r11,-616
	ctx.r5.s64 = ctx.r11.s64 + -616;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,2560
	ctx.r6.s64 = 2560;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82d862b0
	ctx.lr = 0x82D952A8;
	sub_82D862B0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d952cc
	if (!ctx.cr6.eq) goto loc_82D952CC;
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D952CC:
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82d952fc
	if (ctx.cr6.eq) goto loc_82D952FC;
loc_82D952DC:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwz r3,104(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// bl 0x82d951f8
	ctx.lr = 0x82D952F0;
	sub_82D951F8(ctx, base);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82d952dc
	if (!ctx.cr6.eq) goto loc_82D952DC;
loc_82D952FC:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d9531c
	if (ctx.cr6.eq) goto loc_82D9531C;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82d9533c
	if (ctx.cr6.eq) goto loc_82D9533C;
loc_82D9531C:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,324
	ctx.r11.s64 = ctx.r11.s64 + 324;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
loc_82D9533C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D95348"))) PPC_WEAK_FUNC(sub_82D95348);
PPC_FUNC_IMPL(__imp__sub_82D95348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D95350;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4416);
	// bl 0x82da41c0
	ctx.lr = 0x82D95368;
	sub_82DA41C0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r30,r11,37292
	ctx.r30.u64 = ctx.r11.u64 | 37292;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d95394
	if (!ctx.cr6.eq) goto loc_82D95394;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d95398
	if (ctx.cr6.eq) goto loc_82D95398;
loc_82D95394:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D95398:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d953ac
	if (ctx.cr6.eq) goto loc_82D953AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d8b3e0
	ctx.lr = 0x82D953AC;
	sub_82D8B3E0(ctx, base);
loc_82D953AC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-28276
	ctx.r10.s64 = ctx.r10.s64 + -28276;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// beq cr6,0x82d95428
	if (ctx.cr6.eq) goto loc_82D95428;
	// lwz r11,240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,240(r29)
	PPC_STORE_U32(ctx.r29.u32 + 240, ctx.r11.u32);
	// b 0x82d95434
	goto loc_82D95434;
loc_82D95428:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
loc_82D95434:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4416);
	// bl 0x82da4200
	ctx.lr = 0x82D95440;
	sub_82DA4200(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9544C"))) PPC_WEAK_FUNC(sub_82D9544C);
PPC_FUNC_IMPL(__imp__sub_82D9544C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D95450"))) PPC_WEAK_FUNC(sub_82D95450);
PPC_FUNC_IMPL(__imp__sub_82D95450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D95458;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r28,r4,24
	ctx.r28.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82d9547c
	if (!ctx.cr6.eq) goto loc_82D9547C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d95578
	if (ctx.cr6.eq) goto loc_82D95578;
loc_82D9547C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4416);
	// bl 0x82da41c0
	ctx.lr = 0x82D95488;
	sub_82DA41C0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r30,r11,37292
	ctx.r30.u64 = ctx.r11.u64 | 37292;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d954b8
	if (!ctx.cr6.eq) goto loc_82D954B8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d954bc
	if (ctx.cr6.eq) goto loc_82D954BC;
loc_82D954B8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82D954BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d954d0
	if (ctx.cr6.eq) goto loc_82D954D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d8b3e0
	ctx.lr = 0x82D954D0;
	sub_82D8B3E0(ctx, base);
loc_82D954D0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-28276
	ctx.r10.s64 = ctx.r10.s64 + -28276;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// beq cr6,0x82d95558
	if (ctx.cr6.eq) goto loc_82D95558;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d95544
	if (ctx.cr6.eq) goto loc_82D95544;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x82d9555c
	goto loc_82D9555C;
loc_82D95544:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d95558
	if (ctx.cr6.eq) goto loc_82D95558;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// b 0x82d9556c
	goto loc_82D9556C;
loc_82D95558:
	// li r10,3
	ctx.r10.s64 = 3;
loc_82D9555C:
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
loc_82D9556C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4416);
	// bl 0x82da4200
	ctx.lr = 0x82D95578;
	sub_82DA4200(ctx, base);
loc_82D95578:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D95584"))) PPC_WEAK_FUNC(sub_82D95584);
PPC_FUNC_IMPL(__imp__sub_82D95584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D95588"))) PPC_WEAK_FUNC(sub_82D95588);
PPC_FUNC_IMPL(__imp__sub_82D95588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D95590;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r3,r11,1808
	ctx.r3.s64 = ctx.r11.s64 + 1808;
	// bl 0x82dedb28
	ctx.lr = 0x82D955B8;
	sub_82DEDB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d956a8
	if (!ctx.cr6.eq) goto loc_82D956A8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82dee2f0
	ctx.lr = 0x82D955C8;
	sub_82DEE2F0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4416);
	// bl 0x82da41c0
	ctx.lr = 0x82D955D4;
	sub_82DA41C0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r30,r11,37292
	ctx.r30.u64 = ctx.r11.u64 | 37292;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d95600
	if (!ctx.cr6.eq) goto loc_82D95600;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d95604
	if (ctx.cr6.eq) goto loc_82D95604;
loc_82D95600:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D95604:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d95618
	if (ctx.cr6.eq) goto loc_82D95618;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d8b3e0
	ctx.lr = 0x82D95618;
	sub_82D8B3E0(ctx, base);
loc_82D95618:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,5
	ctx.r9.s64 = 5;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-28276
	ctx.r10.s64 = ctx.r10.s64 + -28276;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r27.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4416);
	// bl 0x82da4200
	ctx.lr = 0x82D95694;
	sub_82DA4200(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d956a4
	if (ctx.cr6.eq) goto loc_82D956A4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82D956A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D956A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D956B0"))) PPC_WEAK_FUNC(sub_82D956B0);
PPC_FUNC_IMPL(__imp__sub_82D956B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D956B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82d956d8
	if (!ctx.cr6.eq) goto loc_82D956D8;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D956D8:
	// clrlwi r30,r5,24
	ctx.r30.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d956fc
	if (ctx.cr6.eq) goto loc_82D956FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d8b3e0
	ctx.lr = 0x82D956F0;
	sub_82D8B3E0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4416);
	// bl 0x82da41c0
	ctx.lr = 0x82D956FC;
	sub_82DA41C0(ctx, base);
loc_82D956FC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82d95718
	if (ctx.cr6.eq) goto loc_82D95718;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4416);
	// bl 0x82da4200
	ctx.lr = 0x82D95718;
	sub_82DA4200(ctx, base);
loc_82D95718:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D95724"))) PPC_WEAK_FUNC(sub_82D95724);
PPC_FUNC_IMPL(__imp__sub_82D95724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D95728"))) PPC_WEAK_FUNC(sub_82D95728);
PPC_FUNC_IMPL(__imp__sub_82D95728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D95730;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82d95750
	if (!ctx.cr6.eq) goto loc_82D95750;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D95750:
	// clrlwi r30,r5,24
	ctx.r30.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d95774
	if (ctx.cr6.eq) goto loc_82D95774;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d8b3e0
	ctx.lr = 0x82D95768;
	sub_82D8B3E0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4416);
	// bl 0x82da41c0
	ctx.lr = 0x82D95774;
	sub_82DA41C0(ctx, base);
loc_82D95774:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82d95790
	if (ctx.cr6.eq) goto loc_82D95790;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4416);
	// bl 0x82da4200
	ctx.lr = 0x82D95790;
	sub_82DA4200(ctx, base);
loc_82D95790:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9579C"))) PPC_WEAK_FUNC(sub_82D9579C);
PPC_FUNC_IMPL(__imp__sub_82D9579C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D957A0"))) PPC_WEAK_FUNC(sub_82D957A0);
PPC_FUNC_IMPL(__imp__sub_82D957A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d957b8
	if (!ctx.cr6.eq) goto loc_82D957B8;
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
loc_82D957B8:
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r11,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D957C8"))) PPC_WEAK_FUNC(sub_82D957C8);
PPC_FUNC_IMPL(__imp__sub_82D957C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,148(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82d957e0
	if (!ctx.cr6.eq) goto loc_82D957E0;
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
loc_82D957E0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82d95838
	if (ctx.cr6.lt) goto loc_82D95838;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82d95838
	if (ctx.cr6.gt) goto loc_82D95838;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82d95818
	if (!ctx.cr6.lt) goto loc_82D95818;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82D95818:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82d95828
	if (!ctx.cr6.gt) goto loc_82D95828;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82D95828:
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r11,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r11.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82D95838:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D95840"))) PPC_WEAK_FUNC(sub_82D95840);
PPC_FUNC_IMPL(__imp__sub_82D95840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D95848;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d95874
	if (!ctx.cr6.eq) goto loc_82D95874;
	// li r3,78
	ctx.r3.s64 = 78;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D95874:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82d958e8
	if (ctx.cr6.lt) goto loc_82D958E8;
	// lwz r9,140(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82d958e8
	if (ctx.cr6.gt) goto loc_82D958E8;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r11,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D958A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d958ec
	if (!ctx.cr6.eq) goto loc_82D958EC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d958b8
	if (ctx.cr6.eq) goto loc_82D958B8;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82D958B8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d958dc
	if (ctx.cr6.eq) goto loc_82D958DC;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// li r5,16
	ctx.r5.s64 = 16;
	// bgt cr6,0x82d958d0
	if (ctx.cr6.gt) goto loc_82D958D0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82D958D0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da4468
	ctx.lr = 0x82D958DC;
	sub_82DA4468(ctx, base);
loc_82D958DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D958E8:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82D958EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D958F4"))) PPC_WEAK_FUNC(sub_82D958F4);
PPC_FUNC_IMPL(__imp__sub_82D958F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D958F8"))) PPC_WEAK_FUNC(sub_82D958F8);
PPC_FUNC_IMPL(__imp__sub_82D958F8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d95908
	if (!ctx.cr6.eq) goto loc_82D95908;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D95908:
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D95918"))) PPC_WEAK_FUNC(sub_82D95918);
PPC_FUNC_IMPL(__imp__sub_82D95918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82D95920;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82d95a3c
	if (ctx.cr6.lt) goto loc_82D95A3C;
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82d95a3c
	if (!ctx.cr6.lt) goto loc_82D95A3C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82d9597c
	if (ctx.cr6.eq) goto loc_82D9597C;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82da4448
	ctx.lr = 0x82D9597C;
	sub_82DA4448(ctx, base);
loc_82D9597C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d959c4
	if (ctx.cr6.eq) goto loc_82D959C4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82d959c4
	if (ctx.cr6.eq) goto loc_82D959C4;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d959bc
	if (ctx.cr6.eq) goto loc_82D959BC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da4468
	ctx.lr = 0x82D959B8;
	sub_82DA4468(ctx, base);
	// b 0x82d959c4
	goto loc_82D959C4;
loc_82D959BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_82D959C4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82d959ec
	if (ctx.cr6.eq) goto loc_82D959EC;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// bl 0x82da4448
	ctx.lr = 0x82D959EC;
	sub_82DA4448(ctx, base);
loc_82D959EC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d95a0c
	if (ctx.cr6.eq) goto loc_82D95A0C;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_82D95A0C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82d95a30
	if (ctx.cr6.eq) goto loc_82D95A30;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
loc_82D95A30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82D95A3C:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D95A48"))) PPC_WEAK_FUNC(sub_82D95A48);
PPC_FUNC_IMPL(__imp__sub_82D95A48) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d95a60
	if (!ctx.cr6.eq) goto loc_82D95A60;
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
loc_82D95A60:
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r11,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r11.u32);
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D95A74"))) PPC_WEAK_FUNC(sub_82D95A74);
PPC_FUNC_IMPL(__imp__sub_82D95A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D95A78"))) PPC_WEAK_FUNC(sub_82D95A78);
PPC_FUNC_IMPL(__imp__sub_82D95A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D95A80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d95ab0
	if (ctx.cr6.eq) goto loc_82D95AB0;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x82da4468
	ctx.lr = 0x82D95AB0;
	sub_82DA4468(ctx, base);
loc_82D95AB0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d95ac0
	if (ctx.cr6.eq) goto loc_82D95AC0;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82D95AC0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d95ad0
	if (ctx.cr6.eq) goto loc_82D95AD0;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82D95AD0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d95ae0
	if (ctx.cr6.eq) goto loc_82D95AE0;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82D95AE0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82d95af4
	if (ctx.cr6.eq) goto loc_82D95AF4;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82D95AF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D95AFC"))) PPC_WEAK_FUNC(sub_82D95AFC);
PPC_FUNC_IMPL(__imp__sub_82D95AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D95B00"))) PPC_WEAK_FUNC(sub_82D95B00);
PPC_FUNC_IMPL(__imp__sub_82D95B00) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d95b10
	if (ctx.cr6.eq) goto loc_82D95B10;
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82D95B10:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D95B18"))) PPC_WEAK_FUNC(sub_82D95B18);
PPC_FUNC_IMPL(__imp__sub_82D95B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x82d95b34
	if (!ctx.cr6.gt) goto loc_82D95B34;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// b 0x82d95b48
	goto loc_82D95B48;
loc_82D95B34:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bge cr6,0x82d95b48
	if (!ctx.cr6.lt) goto loc_82D95B48;
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
loc_82D95B48:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-18324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f3,f13
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// bge cr6,0x82d95b60
	if (!ctx.cr6.lt) goto loc_82D95B60;
	// fmr f3,f13
	ctx.f3.f64 = ctx.f13.f64;
	// b 0x82d95b6c
	goto loc_82D95B6C;
loc_82D95B60:
	// fcmpu cr6,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x82d95b6c
	if (!ctx.cr6.gt) goto loc_82D95B6C;
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
loc_82D95B6C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x82d95b7c
	if (!ctx.cr6.lt) goto loc_82D95B7C;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82d95b88
	goto loc_82D95B88;
loc_82D95B7C:
	// cmpwi cr6,r7,256
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 256, ctx.xer);
	// ble cr6,0x82d95b88
	if (!ctx.cr6.gt) goto loc_82D95B88;
	// li r7,256
	ctx.r7.s64 = 256;
loc_82D95B88:
	// stfs f1,220(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 220, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f2,216(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 216, temp.u32);
	// stw r7,228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 228, ctx.r7.u32);
	// stfs f3,224(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 224, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D95BA0"))) PPC_WEAK_FUNC(sub_82D95BA0);
PPC_FUNC_IMPL(__imp__sub_82D95BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d95bb0
	if (ctx.cr6.eq) goto loc_82D95BB0;
	// lfs f0,220(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82D95BB0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82d95bc0
	if (ctx.cr6.eq) goto loc_82D95BC0;
	// lfs f0,216(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82D95BC0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82d95bd0
	if (ctx.cr6.eq) goto loc_82D95BD0;
	// lfs f0,224(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_82D95BD0:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82d95be0
	if (ctx.cr6.eq) goto loc_82D95BE0;
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_82D95BE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D95BE8"))) PPC_WEAK_FUNC(sub_82D95BE8);
PPC_FUNC_IMPL(__imp__sub_82D95BE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D95BF8"))) PPC_WEAK_FUNC(sub_82D95BF8);
PPC_FUNC_IMPL(__imp__sub_82D95BF8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d95c08
	if (!ctx.cr6.eq) goto loc_82D95C08;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D95C08:
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D95C18"))) PPC_WEAK_FUNC(sub_82D95C18);
PPC_FUNC_IMPL(__imp__sub_82D95C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D95C20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r30,r4,24
	ctx.r30.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d95c4c
	if (!ctx.cr6.eq) goto loc_82D95C4C;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
loc_82D95C4C:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d95cb8
	if (ctx.cr6.eq) goto loc_82D95CB8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4408);
	// bl 0x82da41c0
	ctx.lr = 0x82D95C64;
	sub_82DA41C0(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// beq cr6,0x82d95c98
	if (ctx.cr6.eq) goto loc_82D95C98;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4408);
	// bl 0x82da4200
	ctx.lr = 0x82D95C8C;
	sub_82DA4200(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D95C98:
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4408);
	// bl 0x82da4200
	ctx.lr = 0x82D95CAC;
	sub_82DA4200(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82D95CB8:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D95CCC"))) PPC_WEAK_FUNC(sub_82D95CCC);
PPC_FUNC_IMPL(__imp__sub_82D95CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D95CD0"))) PPC_WEAK_FUNC(sub_82D95CD0);
PPC_FUNC_IMPL(__imp__sub_82D95CD0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D95CE0"))) PPC_WEAK_FUNC(sub_82D95CE0);
PPC_FUNC_IMPL(__imp__sub_82D95CE0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d95cf0
	if (!ctx.cr6.eq) goto loc_82D95CF0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D95CF0:
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D95D00"))) PPC_WEAK_FUNC(sub_82D95D00);
PPC_FUNC_IMPL(__imp__sub_82D95D00) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-556
	ctx.r10.s64 = ctx.r10.s64 + -556;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D95D30"))) PPC_WEAK_FUNC(sub_82D95D30);
PPC_FUNC_IMPL(__imp__sub_82D95D30) {
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
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// beq cr6,0x82d95d6c
	if (ctx.cr6.eq) goto loc_82D95D6C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82da41c0
	ctx.lr = 0x82D95D64;
	sub_82DA41C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_82D95D6C:
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

__attribute__((alias("__imp__sub_82D95D84"))) PPC_WEAK_FUNC(sub_82D95D84);
PPC_FUNC_IMPL(__imp__sub_82D95D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D95D88"))) PPC_WEAK_FUNC(sub_82D95D88);
PPC_FUNC_IMPL(__imp__sub_82D95D88) {
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
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d95db8
	if (ctx.cr6.eq) goto loc_82D95DB8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82da4200
	ctx.lr = 0x82D95DB0;
	sub_82DA4200(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_82D95DB8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82D95DCC"))) PPC_WEAK_FUNC(sub_82D95DCC);
PPC_FUNC_IMPL(__imp__sub_82D95DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D95DD0"))) PPC_WEAK_FUNC(sub_82D95DD0);
PPC_FUNC_IMPL(__imp__sub_82D95DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82D95DD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r28,r7,24
	ctx.r28.u64 = ctx.r7.u32 & 0xFF;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r27,4416(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4416);
	// beq cr6,0x82d95e18
	if (ctx.cr6.eq) goto loc_82D95E18;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d8b3e0
	ctx.lr = 0x82D95E0C;
	sub_82D8B3E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82da41c0
	ctx.lr = 0x82D95E14;
	sub_82DA41C0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
loc_82D95E18:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d95e44
	if (ctx.cr6.lt) goto loc_82D95E44;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d95e38
	if (ctx.cr6.eq) goto loc_82D95E38;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D95E38;
	sub_82DA4200(ctx, base);
loc_82D95E38:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D95E44:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d95e74
	if (!ctx.cr6.eq) goto loc_82D95E74;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d95e68
	if (ctx.cr6.eq) goto loc_82D95E68;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D95E68;
	sub_82DA4200(ctx, base);
loc_82D95E68:
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D95E74:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82d95e90
	if (!ctx.cr6.gt) goto loc_82D95E90;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D95E80:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d95e80
	if (!ctx.cr6.eq) goto loc_82D95E80;
loc_82D95E90:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d95ea0
	if (ctx.cr6.eq) goto loc_82D95EA0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82D95EA0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d95eb0
	if (ctx.cr6.eq) goto loc_82D95EB0;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82D95EB0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d95ec4
	if (ctx.cr6.eq) goto loc_82D95EC4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D95EC0;
	sub_82DA4200(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
loc_82D95EC4:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d95ed8
	if (ctx.cr6.eq) goto loc_82D95ED8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D95ED8;
	sub_82DA4200(ctx, base);
loc_82D95ED8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D95EE4"))) PPC_WEAK_FUNC(sub_82D95EE4);
PPC_FUNC_IMPL(__imp__sub_82D95EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D95EE8"))) PPC_WEAK_FUNC(sub_82D95EE8);
PPC_FUNC_IMPL(__imp__sub_82D95EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82D95EF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r28,r7,24
	ctx.r28.u64 = ctx.r7.u32 & 0xFF;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r27,4416(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4416);
	// beq cr6,0x82d95f30
	if (ctx.cr6.eq) goto loc_82D95F30;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d8b3e0
	ctx.lr = 0x82D95F24;
	sub_82D8B3E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82da41c0
	ctx.lr = 0x82D95F2C;
	sub_82DA41C0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
loc_82D95F30:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d95f5c
	if (ctx.cr6.lt) goto loc_82D95F5C;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d95f50
	if (ctx.cr6.eq) goto loc_82D95F50;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D95F50;
	sub_82DA4200(ctx, base);
loc_82D95F50:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D95F5C:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d95f8c
	if (!ctx.cr6.eq) goto loc_82D95F8C;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d95f80
	if (ctx.cr6.eq) goto loc_82D95F80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D95F80;
	sub_82DA4200(ctx, base);
loc_82D95F80:
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D95F8C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82d95fa8
	if (!ctx.cr6.gt) goto loc_82D95FA8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D95F98:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d95f98
	if (!ctx.cr6.eq) goto loc_82D95F98;
loc_82D95FA8:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d95fb8
	if (ctx.cr6.eq) goto loc_82D95FB8;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82D95FB8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d95fc8
	if (ctx.cr6.eq) goto loc_82D95FC8;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82D95FC8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d95fdc
	if (ctx.cr6.eq) goto loc_82D95FDC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D95FD8;
	sub_82DA4200(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
loc_82D95FDC:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d95ff0
	if (ctx.cr6.eq) goto loc_82D95FF0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D95FF0;
	sub_82DA4200(ctx, base);
loc_82D95FF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D95FFC"))) PPC_WEAK_FUNC(sub_82D95FFC);
PPC_FUNC_IMPL(__imp__sub_82D95FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D96000"))) PPC_WEAK_FUNC(sub_82D96000);
PPC_FUNC_IMPL(__imp__sub_82D96000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D96008;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d96090
	if (ctx.cr6.eq) goto loc_82D96090;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x82d956b0
	ctx.lr = 0x82D96034;
	sub_82D956B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d960bc
	if (!ctx.cr6.eq) goto loc_82D960BC;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82d96090
	if (!ctx.cr6.gt) goto loc_82D96090;
loc_82D9604C:
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d95dd0
	ctx.lr = 0x82D96068;
	sub_82D95DD0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D96084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82d9604c
	if (ctx.cr6.lt) goto loc_82D9604C;
loc_82D96090:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d960a8
	if (!ctx.cr6.eq) goto loc_82D960A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D960A8:
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// stw r30,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D960BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D960BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D960C4"))) PPC_WEAK_FUNC(sub_82D960C4);
PPC_FUNC_IMPL(__imp__sub_82D960C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D960C8"))) PPC_WEAK_FUNC(sub_82D960C8);
PPC_FUNC_IMPL(__imp__sub_82D960C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82D960D0;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r22,4408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4408);
	// lwz r24,4416(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4416);
	// bne cr6,0x82d9623c
	if (!ctx.cr6.eq) goto loc_82D9623C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x82d956b0
	ctx.lr = 0x82D96118;
	sub_82D956B0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d9619c
	if (ctx.cr6.eq) goto loc_82D9619C;
loc_82D96124:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d95dd0
	ctx.lr = 0x82D9613C;
	sub_82D95DD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96474
	if (!ctx.cr6.eq) goto loc_82D96474;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82d960c8
	ctx.lr = 0x82D96158;
	sub_82D960C8(ctx, base);
	// clrlwi r30,r27,24
	ctx.r30.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d9617c
	if (ctx.cr6.eq) goto loc_82D9617C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d8b3e0
	ctx.lr = 0x82D96170;
	sub_82D8B3E0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4416);
	// bl 0x82da41c0
	ctx.lr = 0x82D9617C;
	sub_82DA41C0(ctx, base);
loc_82D9617C:
	// lwz r29,56(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d96194
	if (ctx.cr6.eq) goto loc_82D96194;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4416);
	// bl 0x82da4200
	ctx.lr = 0x82D96194;
	sub_82DA4200(ctx, base);
loc_82D96194:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82d96124
	if (!ctx.cr6.eq) goto loc_82D96124;
loc_82D9619C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d95728
	ctx.lr = 0x82D961AC;
	sub_82D95728(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d96470
	if (ctx.cr6.eq) goto loc_82D96470;
loc_82D961B8:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d95ee8
	ctx.lr = 0x82D961D0;
	sub_82D95EE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96474
	if (!ctx.cr6.eq) goto loc_82D96474;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d960c8
	ctx.lr = 0x82D961EC;
	sub_82D960C8(ctx, base);
	// clrlwi r30,r27,24
	ctx.r30.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d96210
	if (ctx.cr6.eq) goto loc_82D96210;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d8b3e0
	ctx.lr = 0x82D96204;
	sub_82D8B3E0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4416);
	// bl 0x82da41c0
	ctx.lr = 0x82D96210;
	sub_82DA41C0(ctx, base);
loc_82D96210:
	// lwz r29,60(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d96228
	if (ctx.cr6.eq) goto loc_82D96228;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4416);
	// bl 0x82da4200
	ctx.lr = 0x82D96228;
	sub_82DA4200(ctx, base);
loc_82D96228:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82d961b8
	if (!ctx.cr6.eq) goto loc_82D961B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82D9623C:
	// clrlwi r21,r27,24
	ctx.r21.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82d96260
	if (ctx.cr6.eq) goto loc_82D96260;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da41c0
	ctx.lr = 0x82D96250;
	sub_82DA41C0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// bl 0x82da41c0
	ctx.lr = 0x82D9625C;
	sub_82DA41C0(ctx, base);
	// li r23,1
	ctx.r23.s64 = 1;
loc_82D96260:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d96324
	if (!ctx.cr6.eq) goto loc_82D96324;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d962bc
	if (!ctx.cr6.gt) goto loc_82D962BC;
loc_82D96278:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d95dd0
	ctx.lr = 0x82D96290;
	sub_82D95DD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82d962f0
	if (!ctx.cr6.eq) goto loc_82D962F0;
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82d96324
	if (ctx.cr6.eq) goto loc_82D96324;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82d96278
	if (ctx.cr6.lt) goto loc_82D96278;
loc_82D962BC:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d962d0
	if (ctx.cr6.eq) goto loc_82D962D0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D962D0;
	sub_82DA4200(ctx, base);
loc_82D962D0:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d962e4
	if (ctx.cr6.eq) goto loc_82D962E4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D962E4;
	sub_82DA4200(ctx, base);
loc_82D962E4:
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82D962F0:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d96304
	if (ctx.cr6.eq) goto loc_82D96304;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D96304;
	sub_82DA4200(ctx, base);
loc_82D96304:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d96318
	if (ctx.cr6.eq) goto loc_82D96318;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D96318;
	sub_82DA4200(ctx, base);
loc_82D96318:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82D96324:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r30.u32);
	// stw r30,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// beq cr6,0x82d96390
	if (ctx.cr6.eq) goto loc_82D96390;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82d96390
	if (ctx.cr6.gt) goto loc_82D96390;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-616
	ctx.r5.s64 = ctx.r11.s64 + -616;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,3017
	ctx.r6.s64 = 3017;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82D9638C;
	sub_82D861B0(ctx, base);
	// stw r26,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
loc_82D96390:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
	// bl 0x82d938a0
	ctx.lr = 0x82D963CC;
	sub_82D938A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d938a0
	ctx.lr = 0x82D963D4;
	sub_82D938A0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,1808
	ctx.r3.s64 = ctx.r11.s64 + 1808;
	// bl 0x82dede70
	ctx.lr = 0x82D963E8;
	sub_82DEDE70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82d96428
	if (ctx.cr6.eq) goto loc_82D96428;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d96408
	if (ctx.cr6.eq) goto loc_82D96408;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D96408;
	sub_82DA4200(ctx, base);
loc_82D96408:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d9641c
	if (ctx.cr6.eq) goto loc_82D9641C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D9641C;
	sub_82DA4200(ctx, base);
loc_82D9641C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82D96428:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82d96448
	if (ctx.cr6.eq) goto loc_82D96448;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D96438;
	sub_82DA4200(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D96444;
	sub_82DA4200(ctx, base);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_82D96448:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d9645c
	if (ctx.cr6.eq) goto loc_82D9645C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D9645C;
	sub_82DA4200(ctx, base);
loc_82D9645C:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d96470
	if (ctx.cr6.eq) goto loc_82D96470;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D96470;
	sub_82DA4200(ctx, base);
loc_82D96470:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D96474:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9647C"))) PPC_WEAK_FUNC(sub_82D9647C);
PPC_FUNC_IMPL(__imp__sub_82D9647C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D96480"))) PPC_WEAK_FUNC(sub_82D96480);
PPC_FUNC_IMPL(__imp__sub_82D96480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D96488;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d96510
	if (ctx.cr6.eq) goto loc_82D96510;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d956b0
	ctx.lr = 0x82D964B0;
	sub_82D956B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96590
	if (!ctx.cr6.eq) goto loc_82D96590;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82d96510
	if (!ctx.cr6.gt) goto loc_82D96510;
loc_82D964C8:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d95dd0
	ctx.lr = 0x82D964E0;
	sub_82D95DD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96590
	if (!ctx.cr6.eq) goto loc_82D96590;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d960c8
	ctx.lr = 0x82D964FC;
	sub_82D960C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96590
	if (!ctx.cr6.eq) goto loc_82D96590;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82d964c8
	if (ctx.cr6.lt) goto loc_82D964C8;
loc_82D96510:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d9658c
	if (ctx.cr6.eq) goto loc_82D9658C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d95728
	ctx.lr = 0x82D9652C;
	sub_82D95728(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96590
	if (!ctx.cr6.eq) goto loc_82D96590;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82d9658c
	if (!ctx.cr6.gt) goto loc_82D9658C;
loc_82D96544:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d95ee8
	ctx.lr = 0x82D9655C;
	sub_82D95EE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96590
	if (!ctx.cr6.eq) goto loc_82D96590;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d960c8
	ctx.lr = 0x82D96578;
	sub_82D960C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96590
	if (!ctx.cr6.eq) goto loc_82D96590;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82d96544
	if (ctx.cr6.lt) goto loc_82D96544;
loc_82D9658C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D96590:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D96598"))) PPC_WEAK_FUNC(sub_82D96598);
PPC_FUNC_IMPL(__imp__sub_82D96598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D965A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82d965c4
	if (!ctx.cr6.eq) goto loc_82D965C4;
loc_82D965B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D965C4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d956b0
	ctx.lr = 0x82D965D4;
	sub_82D956B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96634
	if (!ctx.cr6.eq) goto loc_82D96634;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82d96634
	if (!ctx.cr6.gt) goto loc_82D96634;
loc_82D965EC:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d95dd0
	ctx.lr = 0x82D96604;
	sub_82D95DD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96638
	if (!ctx.cr6.eq) goto loc_82D96638;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// bl 0x82d96598
	ctx.lr = 0x82D96620;
	sub_82D96598(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d965b8
	if (ctx.cr6.eq) goto loc_82D965B8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82d965ec
	if (ctx.cr6.lt) goto loc_82D965EC;
loc_82D96634:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82D96638:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D96640"))) PPC_WEAK_FUNC(sub_82D96640);
PPC_FUNC_IMPL(__imp__sub_82D96640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// addi r4,r4,-544
	ctx.r4.s64 = ctx.r4.s64 + -544;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// addi r8,r3,44
	ctx.r8.s64 = ctx.r3.s64 + 44;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// addi r7,r3,172
	ctx.r7.s64 = ctx.r3.s64 + 172;
	// addi r6,r3,248
	ctx.r6.s64 = ctx.r3.s64 + 248;
	// li r31,-1
	ctx.r31.s64 = -1;
	// lfs f13,-552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -552);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,128
	ctx.r30.s64 = 128;
	// lfs f12,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,-556
	ctx.r5.s64 = ctx.r11.s64 + -556;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lwz r10,19872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19872);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// stw r7,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r7.u32);
	// stw r7,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r7.u32);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// stw r6,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r6.u32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// stb r11,248(r3)
	PPC_STORE_U8(ctx.r3.u32 + 248, ctx.r11.u8);
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stfs f13,220(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stfs f12,224(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r31,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r31.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r30,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r30.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D96714"))) PPC_WEAK_FUNC(sub_82D96714);
PPC_FUNC_IMPL(__imp__sub_82D96714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D96718"))) PPC_WEAK_FUNC(sub_82D96718);
PPC_FUNC_IMPL(__imp__sub_82D96718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82D96720;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r24,4408(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4408);
	// lwz r26,4416(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4416);
	// bne cr6,0x82d96768
	if (!ctx.cr6.eq) goto loc_82D96768;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82D96768:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82d9678c
	if (!ctx.cr6.eq) goto loc_82D9678C;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d9678c
	if (ctx.cr6.eq) goto loc_82D9678C;
loc_82D96780:
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82D9678C:
	// lwz r11,196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82d96780
	if (ctx.cr6.eq) goto loc_82D96780;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d967c0
	if (ctx.cr6.eq) goto loc_82D967C0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d96598
	ctx.lr = 0x82D967B4;
	sub_82D96598(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d96780
	if (ctx.cr6.eq) goto loc_82D96780;
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
loc_82D967C0:
	// clrlwi r23,r29,24
	ctx.r23.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82d967e8
	if (ctx.cr6.eq) goto loc_82D967E8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da41c0
	ctx.lr = 0x82D967D4;
	sub_82DA41C0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// bl 0x82da41c0
	ctx.lr = 0x82D967E0;
	sub_82DA41C0(ctx, base);
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r27,1
	ctx.r27.s64 = 1;
loc_82D967E8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d9684c
	if (!ctx.cr6.eq) goto loc_82D9684C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// addi r3,r11,1808
	ctx.r3.s64 = ctx.r11.s64 + 1808;
	// bl 0x82dedb28
	ctx.lr = 0x82D96804;
	sub_82DEDB28(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82d96844
	if (ctx.cr6.eq) goto loc_82D96844;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d96824
	if (ctx.cr6.eq) goto loc_82D96824;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D96824;
	sub_82DA4200(ctx, base);
loc_82D96824:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d96838
	if (ctx.cr6.eq) goto loc_82D96838;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D96838;
	sub_82DA4200(ctx, base);
loc_82D96838:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82D96844:
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r28,1
	ctx.r28.s64 = 1;
loc_82D9684C:
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// clrlwi r7,r28,24
	ctx.r7.u64 = ctx.r28.u32 & 0xFF;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r9,r30,44
	ctx.r9.s64 = ctx.r30.s64 + 44;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// stw r30,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r30.u32);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// stw r31,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r31.u32);
	// beq cr6,0x82d968cc
	if (ctx.cr6.eq) goto loc_82D968CC;
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82dee2f0
	ctx.lr = 0x82D968CC;
	sub_82DEE2F0(ctx, base);
loc_82D968CC:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82d968e4
	if (ctx.cr6.lt) goto loc_82D968E4;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d951f8
	ctx.lr = 0x82D968E4;
	sub_82D951F8(ctx, base);
loc_82D968E4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d96910
	if (!ctx.cr6.eq) goto loc_82D96910;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,324
	ctx.r11.s64 = ctx.r11.s64 + 324;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
loc_82D96910:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82d969bc
	if (!ctx.cr6.gt) goto loc_82D969BC;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d969b0
	if (!ctx.cr6.eq) goto loc_82D969B0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,1256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1256);
	// lwz r9,1252(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1252);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82d96940
	if (!ctx.cr6.lt) goto loc_82D96940;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82D96940:
	// lwz r9,1272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1272);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-616
	ctx.r5.s64 = ctx.r11.s64 + -616;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,2723
	ctx.r6.s64 = 2723;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,15
	ctx.r4.s64 = ctx.r11.s64 + 15;
	// bl 0x82d862b0
	ctx.lr = 0x82D96970;
	sub_82D862B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// bne cr6,0x82d969b0
	if (!ctx.cr6.eq) goto loc_82D969B0;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d96990
	if (ctx.cr6.eq) goto loc_82D96990;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D96990;
	sub_82DA4200(ctx, base);
loc_82D96990:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d969a4
	if (ctx.cr6.eq) goto loc_82D969A4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D969A4;
	sub_82DA4200(ctx, base);
loc_82D969A4:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82D969B0:
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 232, ctx.r11.u32);
loc_82D969BC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82d969dc
	if (ctx.cr6.eq) goto loc_82D969DC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D969CC;
	sub_82DA4200(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x82da4200
	ctx.lr = 0x82D969D8;
	sub_82DA4200(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
loc_82D969DC:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82d969ec
	if (ctx.cr6.eq) goto loc_82D969EC;
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
loc_82D969EC:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d96a00
	if (ctx.cr6.eq) goto loc_82D96A00;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D96A00;
	sub_82DA4200(ctx, base);
loc_82D96A00:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d96a14
	if (ctx.cr6.eq) goto loc_82D96A14;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82da4200
	ctx.lr = 0x82D96A14;
	sub_82DA4200(ctx, base);
loc_82D96A14:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D96A20"))) PPC_WEAK_FUNC(sub_82D96A20);
PPC_FUNC_IMPL(__imp__sub_82D96A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D96A28;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82d96a50
	if (!ctx.cr6.eq) goto loc_82D96A50;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D96A50:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82d96a74
	if (!ctx.cr6.eq) goto loc_82D96A74;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82d96a74
	if (ctx.cr6.eq) goto loc_82D96A74;
loc_82D96A68:
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D96A74:
	// lwz r11,196(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82d96a68
	if (ctx.cr6.eq) goto loc_82D96A68;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d96aa4
	if (ctx.cr6.eq) goto loc_82D96AA4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d96598
	ctx.lr = 0x82D96A9C;
	sub_82D96598(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d96a68
	if (ctx.cr6.eq) goto loc_82D96A68;
loc_82D96AA4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1808
	ctx.r3.s64 = ctx.r11.s64 + 1808;
	// bl 0x82dedb28
	ctx.lr = 0x82D96AB8;
	sub_82DEDB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96bb4
	if (!ctx.cr6.eq) goto loc_82D96BB4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d96ad8
	if (ctx.cr6.eq) goto loc_82D96AD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82def2d8
	ctx.lr = 0x82D96AD4;
	sub_82DEF2D8(ctx, base);
	// b 0x82d96adc
	goto loc_82D96ADC;
loc_82D96AD8:
	// bl 0x82dee2f0
	ctx.lr = 0x82D96ADC;
	sub_82DEE2F0(ctx, base);
loc_82D96ADC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4416);
	// bl 0x82da41c0
	ctx.lr = 0x82D96AE8;
	sub_82DA41C0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r30,r11,37292
	ctx.r30.u64 = ctx.r11.u64 | 37292;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d96b18
	if (!ctx.cr6.eq) goto loc_82D96B18;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d96b1c
	if (ctx.cr6.eq) goto loc_82D96B1C;
loc_82D96B18:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82D96B1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d96b30
	if (ctx.cr6.eq) goto loc_82D96B30;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d8b3e0
	ctx.lr = 0x82D96B30;
	sub_82D8B3E0(ctx, base);
loc_82D96B30:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-28276
	ctx.r10.s64 = ctx.r10.s64 + -28276;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4416);
	// bl 0x82da4200
	ctx.lr = 0x82D96BA0;
	sub_82DA4200(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82d96bb0
	if (ctx.cr6.eq) goto loc_82D96BB0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82D96BB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D96BB4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D96BBC"))) PPC_WEAK_FUNC(sub_82D96BBC);
PPC_FUNC_IMPL(__imp__sub_82D96BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D96BC0"))) PPC_WEAK_FUNC(sub_82D96BC0);
PPC_FUNC_IMPL(__imp__sub_82D96BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D96BC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r29,r30,24
	ctx.r29.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d96bf8
	if (ctx.cr6.eq) goto loc_82D96BF8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d8b3e0
	ctx.lr = 0x82D96BEC;
	sub_82D8B3E0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4416);
	// bl 0x82da41c0
	ctx.lr = 0x82D96BF8;
	sub_82DA41C0(ctx, base);
loc_82D96BF8:
	// lwz r28,56(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d96c10
	if (ctx.cr6.eq) goto loc_82D96C10;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4416);
	// bl 0x82da4200
	ctx.lr = 0x82D96C10;
	sub_82DA4200(ctx, base);
loc_82D96C10:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d95728
	ctx.lr = 0x82D96C20;
	sub_82D95728(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96d18
	if (!ctx.cr6.eq) goto loc_82D96D18;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82d96c44
	if (!ctx.cr6.eq) goto loc_82D96C44;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d96cf8
	if (!ctx.cr6.eq) goto loc_82D96CF8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D96C44:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82d96cf8
	if (!ctx.cr6.eq) goto loc_82D96CF8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82d96cf8
	if (!ctx.cr6.eq) goto loc_82D96CF8;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x82d95dd0
	ctx.lr = 0x82D96C7C;
	sub_82D95DD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96d18
	if (!ctx.cr6.eq) goto loc_82D96D18;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d95ee8
	ctx.lr = 0x82D96C9C;
	sub_82D95EE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96d18
	if (!ctx.cr6.eq) goto loc_82D96D18;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d960c8
	ctx.lr = 0x82D96CB8;
	sub_82D960C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96d18
	if (!ctx.cr6.eq) goto loc_82D96D18;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d96718
	ctx.lr = 0x82D96CDC;
	sub_82D96718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96d18
	if (!ctx.cr6.eq) goto loc_82D96D18;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D96CF8:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x82d960c8
	ctx.lr = 0x82D96D18;
	sub_82D960C8(ctx, base);
loc_82D96D18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D96D20"))) PPC_WEAK_FUNC(sub_82D96D20);
PPC_FUNC_IMPL(__imp__sub_82D96D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D96D28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d96d50
	if (ctx.cr6.eq) goto loc_82D96D50;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d8b338
	ctx.lr = 0x82D96D48;
	sub_82D8B338(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96e2c
	if (!ctx.cr6.eq) goto loc_82D96E2C;
loc_82D96D50:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82d8b3e0
	ctx.lr = 0x82D96D5C;
	sub_82D8B3E0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d96bc0
	ctx.lr = 0x82D96D68;
	sub_82D96BC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d96d84
	if (ctx.cr6.eq) goto loc_82D96D84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d95348
	ctx.lr = 0x82D96D7C;
	sub_82D95348(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96e2c
	if (!ctx.cr6.eq) goto loc_82D96E2C;
loc_82D96D84:
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r29,r11,-616
	ctx.r29.s64 = ctx.r11.s64 + -616;
	// lis r28,-31909
	ctx.r28.s64 = -2091188224;
	// beq cr6,0x82d96dbc
	if (ctx.cr6.eq) goto loc_82D96DBC;
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2428
	ctx.r6.s64 = 2428;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82D96DB8;
	sub_82D861B0(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
loc_82D96DBC:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d96e00
	if (ctx.cr6.eq) goto loc_82D96E00;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D96E00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D96E00:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d96e28
	if (ctx.cr6.eq) goto loc_82D96E28;
	// lwz r11,19872(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2484
	ctx.r6.s64 = 2484;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82D96E28;
	sub_82D861B0(ctx, base);
loc_82D96E28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D96E2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D96E34"))) PPC_WEAK_FUNC(sub_82D96E34);
PPC_FUNC_IMPL(__imp__sub_82D96E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D96E38"))) PPC_WEAK_FUNC(sub_82D96E38);
PPC_FUNC_IMPL(__imp__sub_82D96E38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d96e50
	if (!ctx.cr6.eq) goto loc_82D96E50;
	// li r3,77
	ctx.r3.s64 = 77;
	// blr 
	return;
loc_82D96E50:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82d96a20
	sub_82D96A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D96E5C"))) PPC_WEAK_FUNC(sub_82D96E5C);
PPC_FUNC_IMPL(__imp__sub_82D96E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D96E60"))) PPC_WEAK_FUNC(sub_82D96E60);
PPC_FUNC_IMPL(__imp__sub_82D96E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D96E68;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d96eb4
	if (ctx.cr6.eq) goto loc_82D96EB4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d96bc0
	ctx.lr = 0x82D96EA4;
	sub_82D96BC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d96ecc
	if (ctx.cr6.eq) goto loc_82D96ECC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D96EB4:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d960c8
	ctx.lr = 0x82D96EC4;
	sub_82D960C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96f60
	if (!ctx.cr6.eq) goto loc_82D96F60;
loc_82D96ECC:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d95dd0
	ctx.lr = 0x82D96EE4;
	sub_82D95DD0(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d96f0c
	if (ctx.cr6.eq) goto loc_82D96F0C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d960c8
	ctx.lr = 0x82D96F04;
	sub_82D960C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96f60
	if (!ctx.cr6.eq) goto loc_82D96F60;
loc_82D96F0C:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d96718
	ctx.lr = 0x82D96F28;
	sub_82D96718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96f60
	if (!ctx.cr6.eq) goto loc_82D96F60;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d96f5c
	if (ctx.cr6.eq) goto loc_82D96F5C;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d96718
	ctx.lr = 0x82D96F54;
	sub_82D96718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d96f60
	if (!ctx.cr6.eq) goto loc_82D96F60;
loc_82D96F5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D96F60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D96F68"))) PPC_WEAK_FUNC(sub_82D96F68);
PPC_FUNC_IMPL(__imp__sub_82D96F68) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82d96bc0
	sub_82D96BC0(ctx, base);
	return;
}

