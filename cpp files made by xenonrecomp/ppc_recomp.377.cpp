#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82BE6138"))) PPC_WEAK_FUNC(sub_82BE6138);
PPC_FUNC_IMPL(__imp__sub_82BE6138) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x82bd5390
	sub_82BD5390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE6140"))) PPC_WEAK_FUNC(sub_82BE6140);
PPC_FUNC_IMPL(__imp__sub_82BE6140) {
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
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r11,-24720
	ctx.r4.s64 = ctx.r11.s64 + -24720;
	// bl 0x82bd49a8
	ctx.lr = 0x82BE6164;
	sub_82BD49A8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be6180
	if (ctx.cr6.eq) goto loc_82BE6180;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE6180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BE6180:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82BE6194"))) PPC_WEAK_FUNC(sub_82BE6194);
PPC_FUNC_IMPL(__imp__sub_82BE6194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE6198"))) PPC_WEAK_FUNC(sub_82BE6198);
PPC_FUNC_IMPL(__imp__sub_82BE6198) {
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
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r11,-24700
	ctx.r4.s64 = ctx.r11.s64 + -24700;
	// bl 0x82bd49a8
	ctx.lr = 0x82BE61BC;
	sub_82BD49A8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be61d8
	if (ctx.cr6.eq) goto loc_82BE61D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE61D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BE61D8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82BE61EC"))) PPC_WEAK_FUNC(sub_82BE61EC);
PPC_FUNC_IMPL(__imp__sub_82BE61EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE61F0"))) PPC_WEAK_FUNC(sub_82BE61F0);
PPC_FUNC_IMPL(__imp__sub_82BE61F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x82bd54a0
	sub_82BD54A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE61F8"))) PPC_WEAK_FUNC(sub_82BE61F8);
PPC_FUNC_IMPL(__imp__sub_82BE61F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x82bd5538
	sub_82BD5538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE6200"))) PPC_WEAK_FUNC(sub_82BE6200);
PPC_FUNC_IMPL(__imp__sub_82BE6200) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be6220
	if (ctx.cr6.eq) goto loc_82BE6220;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82BE6220:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE622C"))) PPC_WEAK_FUNC(sub_82BE622C);
PPC_FUNC_IMPL(__imp__sub_82BE622C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE6230"))) PPC_WEAK_FUNC(sub_82BE6230);
PPC_FUNC_IMPL(__imp__sub_82BE6230) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x82bd55d0
	sub_82BD55D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE6238"))) PPC_WEAK_FUNC(sub_82BE6238);
PPC_FUNC_IMPL(__imp__sub_82BE6238) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x82bd5630
	sub_82BD5630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE6240"))) PPC_WEAK_FUNC(sub_82BE6240);
PPC_FUNC_IMPL(__imp__sub_82BE6240) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be6260
	if (ctx.cr6.eq) goto loc_82BE6260;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82BE6260:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE626C"))) PPC_WEAK_FUNC(sub_82BE626C);
PPC_FUNC_IMPL(__imp__sub_82BE626C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE6270"))) PPC_WEAK_FUNC(sub_82BE6270);
PPC_FUNC_IMPL(__imp__sub_82BE6270) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6278"))) PPC_WEAK_FUNC(sub_82BE6278);
PPC_FUNC_IMPL(__imp__sub_82BE6278) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6280"))) PPC_WEAK_FUNC(sub_82BE6280);
PPC_FUNC_IMPL(__imp__sub_82BE6280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r9,r11,-460
	ctx.r9.s64 = ctx.r11.s64 + -460;
	// addi r8,r10,-19856
	ctx.r8.s64 = ctx.r10.s64 + -19856;
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE629C"))) PPC_WEAK_FUNC(sub_82BE629C);
PPC_FUNC_IMPL(__imp__sub_82BE629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE62A0"))) PPC_WEAK_FUNC(sub_82BE62A0);
PPC_FUNC_IMPL(__imp__sub_82BE62A0) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r9,r11,-460
	ctx.r9.s64 = ctx.r11.s64 + -460;
	// addi r8,r10,-19856
	ctx.r8.s64 = ctx.r10.s64 + -19856;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82be62f0
	if (ctx.cr6.eq) goto loc_82BE62F0;
	// bl 0x82d57a78
	ctx.lr = 0x82BE62DC;
	sub_82D57A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE62F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BE62F0:
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

__attribute__((alias("__imp__sub_82BE6308"))) PPC_WEAK_FUNC(sub_82BE6308);
PPC_FUNC_IMPL(__imp__sub_82BE6308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r10,r11,-19856
	ctx.r10.s64 = ctx.r11.s64 + -19856;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6318"))) PPC_WEAK_FUNC(sub_82BE6318);
PPC_FUNC_IMPL(__imp__sub_82BE6318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82BE6320;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-18704
	ctx.r10.s64 = ctx.r11.s64 + -18704;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x82be63b8
	ctx.lr = 0x82BE6374;
	sub_82BE63B8(ctx, base);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// stw r31,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// lwz r9,96(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE6394"))) PPC_WEAK_FUNC(sub_82BE6394);
PPC_FUNC_IMPL(__imp__sub_82BE6394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE6398"))) PPC_WEAK_FUNC(sub_82BE6398);
PPC_FUNC_IMPL(__imp__sub_82BE6398) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-18816
	ctx.r9.s64 = ctx.r10.s64 + -18816;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE63B4"))) PPC_WEAK_FUNC(sub_82BE63B4);
PPC_FUNC_IMPL(__imp__sub_82BE63B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE63B8"))) PPC_WEAK_FUNC(sub_82BE63B8);
PPC_FUNC_IMPL(__imp__sub_82BE63B8) {
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
	// bl 0x82be3480
	ctx.lr = 0x82BE63D8;
	sub_82BE3480(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// addi r9,r11,-424
	ctx.r9.s64 = ctx.r11.s64 + -424;
	// addi r8,r31,180
	ctx.r8.s64 = ctx.r31.s64 + 180;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r7,108(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r7,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r7.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r6,112(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// lwz r5,116(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r5,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r5.u32);
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r4,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r4.u32);
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// lwz r8,128(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r8,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
	// lwz r7,132(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r7,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r7.u32);
	// lwz r6,136(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r6,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r6.u32);
	// lwz r5,140(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// stw r5,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r5.u32);
	// lwz r4,144(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r4,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r4.u32);
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lwz r8,152(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r8,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r8.u32);
	// lwz r7,156(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r7,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r7.u32);
	// lwz r6,160(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r6,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r6.u32);
	// lwz r5,164(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// lwz r4,168(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// stw r4,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r4.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// lwz r8,176(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r8,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82BE648C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82be648c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BE648C;
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lfs f0,216(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lfs f13,220(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,220(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// lfs f12,224(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,224(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// stw r10,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
	// lfs f11,232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,232(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// lfs f10,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,236(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// lfs f9,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,240(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// lwz r9,244(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// stw r9,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// lfs f8,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,248(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// lfs f7,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,252(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// lfs f6,256(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,256(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// lwz r8,260(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// stw r8,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r8.u32);
	// lfs f5,264(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,264(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// lfs f4,268(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,268(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// lfs f3,272(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,272(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// lwz r7,276(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// stw r7,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r7.u32);
	// lfs f2,280(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,280(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// lfs f1,284(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,284(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// lfs f0,288(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// lwz r6,292(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// stw r6,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r6.u32);
	// lfs f13,296(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,296(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// lfs f12,300(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,300(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// lfs f11,304(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,304(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// lfs f10,308(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,308(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// lfs f9,312(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,312(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// lfs f8,316(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,316(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// lfs f7,320(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,320(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// lfs f6,324(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,324(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// lfs f5,328(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,328(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// lfs f4,332(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,332(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// lfs f3,336(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,336(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// lfs f2,340(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,340(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// lfs f1,344(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,344(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// lfs f0,348(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// lfs f13,352(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,352(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// lfs f12,356(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,356(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// lwz r5,360(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// stw r5,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r5.u32);
	// lfs f11,364(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,364(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// lfs f10,368(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,368(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// lfs f9,372(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,372(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// lwz r4,376(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	// stw r4,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_82BE660C"))) PPC_WEAK_FUNC(sub_82BE660C);
PPC_FUNC_IMPL(__imp__sub_82BE660C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE6610"))) PPC_WEAK_FUNC(sub_82BE6610);
PPC_FUNC_IMPL(__imp__sub_82BE6610) {
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
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-19856
	ctx.r9.s64 = ctx.r11.s64 + -19856;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82be6644
	if (ctx.cr6.eq) goto loc_82BE6644;
	// bl 0x82294a58
	ctx.lr = 0x82BE6640;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BE6644:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82BE6658"))) PPC_WEAK_FUNC(sub_82BE6658);
PPC_FUNC_IMPL(__imp__sub_82BE6658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE667C"))) PPC_WEAK_FUNC(sub_82BE667C);
PPC_FUNC_IMPL(__imp__sub_82BE667C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE6680"))) PPC_WEAK_FUNC(sub_82BE6680);
PPC_FUNC_IMPL(__imp__sub_82BE6680) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be6714
	if (ctx.cr6.eq) goto loc_82BE6714;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be63b8
	ctx.lr = 0x82BE66B8;
	sub_82BE63B8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be66d4
	if (ctx.cr6.eq) goto loc_82BE66D4;
	// bl 0x82bca838
	ctx.lr = 0x82BE66CC;
	sub_82BCA838(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// b 0x82be66d8
	goto loc_82BE66D8;
loc_82BE66D4:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_82BE66D8:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be66f0
	if (ctx.cr6.eq) goto loc_82BE66F0;
	// bl 0x82bca838
	ctx.lr = 0x82BE66E8;
	sub_82BCA838(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// b 0x82be66f4
	goto loc_82BE66F4;
loc_82BE66F0:
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
loc_82BE66F4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE670C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// b 0x82be67c4
	goto loc_82BE67C4;
loc_82BE6714:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be6738
	if (ctx.cr6.eq) goto loc_82BE6738;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,372
	ctx.r4.s64 = ctx.r31.s64 + 372;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE6738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BE6738:
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be6760
	if (ctx.cr6.eq) goto loc_82BE6760;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE6760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BE6760:
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be6788
	if (ctx.cr6.eq) goto loc_82BE6788;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,400
	ctx.r4.s64 = ctx.r31.s64 + 400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE6788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BE6788:
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be67bc
	if (ctx.cr6.eq) goto loc_82BE67BC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,412
	ctx.r4.s64 = ctx.r31.s64 + 412;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE67B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r9.u32);
	// b 0x82be67c4
	goto loc_82BE67C4;
loc_82BE67BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
loc_82BE67C4:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
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

__attribute__((alias("__imp__sub_82BE67DC"))) PPC_WEAK_FUNC(sub_82BE67DC);
PPC_FUNC_IMPL(__imp__sub_82BE67DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE67E0"))) PPC_WEAK_FUNC(sub_82BE67E0);
PPC_FUNC_IMPL(__imp__sub_82BE67E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82BE67E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be68c0
	ctx.lr = 0x82BE67FC;
	sub_82BE68C0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE6814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82be6858
	if (!ctx.cr6.eq) goto loc_82BE6858;
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r10.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82be68b8
	if (!ctx.cr6.eq) goto loc_82BE68B8;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bl 0x82bc38a0
	ctx.lr = 0x82BE6850;
	sub_82BC38A0(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82BE6858:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be63b8
	ctx.lr = 0x82BE6864;
	sub_82BE63B8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be6880
	if (ctx.cr6.eq) goto loc_82BE6880;
	// bl 0x82bca838
	ctx.lr = 0x82BE6878;
	sub_82BCA838(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// b 0x82be6884
	goto loc_82BE6884;
loc_82BE6880:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
loc_82BE6884:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be689c
	if (ctx.cr6.eq) goto loc_82BE689C;
	// bl 0x82bca838
	ctx.lr = 0x82BE6894;
	sub_82BCA838(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// b 0x82be68a0
	goto loc_82BE68A0;
loc_82BE689C:
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
loc_82BE68A0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE68B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BE68B8:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE68C0"))) PPC_WEAK_FUNC(sub_82BE68C0);
PPC_FUNC_IMPL(__imp__sub_82BE68C0) {
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
	// bl 0x82be37f0
	ctx.lr = 0x82BE68E0;
	sub_82BE37F0(ctx, base);
	// lwz r8,108(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// addi r10,r31,180
	ctx.r10.s64 = ctx.r31.s64 + 180;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// lwz r7,112(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// lwz r6,116(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// lwz r5,120(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r5,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r5.u32);
	// lwz r4,124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r4,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r4.u32);
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// lwz r8,132(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r8,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r8.u32);
	// lwz r7,136(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r7,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r7.u32);
	// lwz r6,140(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// stw r6,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r6.u32);
	// lwz r5,144(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r5,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r5.u32);
	// lwz r4,148(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r4,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r4.u32);
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// lwz r8,156(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// lwz r7,160(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r7,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r7.u32);
	// lwz r6,164(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r6,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r6.u32);
	// lwz r5,168(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// stw r5,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r5.u32);
	// lwz r4,172(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82BE6980:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82be6980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BE6980;
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lfs f0,216(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lfs f13,220(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,220(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// lfs f12,224(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,224(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// stw r10,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
	// lfs f11,232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,232(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// lfs f10,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,236(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// lfs f9,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,240(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// lwz r9,244(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// stw r9,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// lfs f8,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,248(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// lfs f7,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,252(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// lfs f6,256(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,256(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// lwz r8,260(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// stw r8,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r8.u32);
	// lfs f5,264(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,264(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// lfs f4,268(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,268(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// lfs f3,272(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,272(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// lwz r7,276(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// stw r7,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r7.u32);
	// lfs f2,280(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,280(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// lfs f1,284(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,284(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// lfs f0,288(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// lwz r6,292(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// stw r6,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r6.u32);
	// lfs f13,296(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,296(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// lfs f12,300(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,300(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// lfs f11,304(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,304(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// lfs f10,308(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,308(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// lfs f9,312(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,312(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// lfs f8,316(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,316(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// lfs f7,320(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,320(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// lfs f6,324(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,324(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// lfs f5,328(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,328(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// lfs f4,332(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,332(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// lfs f3,336(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,336(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// lfs f2,340(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,340(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// lfs f1,344(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,344(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// lfs f0,348(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// lfs f13,352(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,352(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// lfs f12,356(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,356(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// lwz r5,360(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// stw r5,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r5.u32);
	// lfs f11,364(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,364(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// lfs f10,368(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,368(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// lfs f9,372(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,372(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// lwz r4,376(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	// stw r4,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_82BE6B00"))) PPC_WEAK_FUNC(sub_82BE6B00);
PPC_FUNC_IMPL(__imp__sub_82BE6B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6B24"))) PPC_WEAK_FUNC(sub_82BE6B24);
PPC_FUNC_IMPL(__imp__sub_82BE6B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE6B28"))) PPC_WEAK_FUNC(sub_82BE6B28);
PPC_FUNC_IMPL(__imp__sub_82BE6B28) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82be6b68
	if (!ctx.cr6.eq) goto loc_82BE6B68;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be68c0
	ctx.lr = 0x82BE6B54;
	sub_82BE68C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BE6B68:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BE6B80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be6b94
	if (ctx.cr6.eq) goto loc_82BE6B94;
	// bl 0x82bca718
	ctx.lr = 0x82BE6B90;
	sub_82BCA718(ctx, base);
	// b 0x82be6b98
	goto loc_82BE6B98;
loc_82BE6B94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BE6B98:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be6bb0
	if (ctx.cr6.eq) goto loc_82BE6BB0;
	// bl 0x82bca718
	ctx.lr = 0x82BE6BAC;
	sub_82BCA718(ctx, base);
	// b 0x82be6bb4
	goto loc_82BE6BB4;
loc_82BE6BB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BE6BB4:
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82BE6BCC"))) PPC_WEAK_FUNC(sub_82BE6BCC);
PPC_FUNC_IMPL(__imp__sub_82BE6BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE6BD0"))) PPC_WEAK_FUNC(sub_82BE6BD0);
PPC_FUNC_IMPL(__imp__sub_82BE6BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82BE6BD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE6BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82be6c28
	if (ctx.cr6.eq) goto loc_82BE6C28;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE6C20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82BE6C28:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,372(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 372, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,376(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 376, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,380(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 380, temp.u32);
	// lwz r11,444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 444, ctx.r10.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82be6c70
	if (!ctx.cr6.eq) goto loc_82BE6C70;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82bc38a0
	ctx.lr = 0x82BE6C70;
	sub_82BC38A0(ctx, base);
loc_82BE6C70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE6C78"))) PPC_WEAK_FUNC(sub_82BE6C78);
PPC_FUNC_IMPL(__imp__sub_82BE6C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82BE6C80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE6CA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82be6cd0
	if (ctx.cr6.eq) goto loc_82BE6CD0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE6CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82BE6CD0:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,388(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,392(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// lfs f11,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,396(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r10.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82be6d20
	if (!ctx.cr6.eq) goto loc_82BE6D20;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bl 0x82bc38a0
	ctx.lr = 0x82BE6D20;
	sub_82BC38A0(ctx, base);
loc_82BE6D20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE6D28"))) PPC_WEAK_FUNC(sub_82BE6D28);
PPC_FUNC_IMPL(__imp__sub_82BE6D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82BE6D30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE6D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82be6d80
	if (ctx.cr6.eq) goto loc_82BE6D80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE6D78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82BE6D80:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,400(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 400, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,404(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 404, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,408(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 408, temp.u32);
	// lwz r11,444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 444, ctx.r10.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82be6dc8
	if (!ctx.cr6.eq) goto loc_82BE6DC8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82bc38a0
	ctx.lr = 0x82BE6DC8;
	sub_82BC38A0(ctx, base);
loc_82BE6DC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE6DD0"))) PPC_WEAK_FUNC(sub_82BE6DD0);
PPC_FUNC_IMPL(__imp__sub_82BE6DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82BE6DD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE6DFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82be6e28
	if (ctx.cr6.eq) goto loc_82BE6E28;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE6E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82BE6E28:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,400(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 400, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,404(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 404, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,408(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 408, temp.u32);
	// lwz r11,444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 444, ctx.r10.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82be6e70
	if (!ctx.cr6.eq) goto loc_82BE6E70;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82bc38a0
	ctx.lr = 0x82BE6E70;
	sub_82BC38A0(ctx, base);
loc_82BE6E70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE6E78"))) PPC_WEAK_FUNC(sub_82BE6E78);
PPC_FUNC_IMPL(__imp__sub_82BE6E78) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bd57a8
	sub_82BD57A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE6E7C"))) PPC_WEAK_FUNC(sub_82BE6E7C);
PPC_FUNC_IMPL(__imp__sub_82BE6E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE6E80"))) PPC_WEAK_FUNC(sub_82BE6E80);
PPC_FUNC_IMPL(__imp__sub_82BE6E80) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bd5838
	sub_82BD5838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE6E84"))) PPC_WEAK_FUNC(sub_82BE6E84);
PPC_FUNC_IMPL(__imp__sub_82BE6E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE6E88"))) PPC_WEAK_FUNC(sub_82BE6E88);
PPC_FUNC_IMPL(__imp__sub_82BE6E88) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bd58c8
	sub_82BD58C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE6E8C"))) PPC_WEAK_FUNC(sub_82BE6E8C);
PPC_FUNC_IMPL(__imp__sub_82BE6E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE6E90"))) PPC_WEAK_FUNC(sub_82BE6E90);
PPC_FUNC_IMPL(__imp__sub_82BE6E90) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bd5988
	sub_82BD5988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE6E94"))) PPC_WEAK_FUNC(sub_82BE6E94);
PPC_FUNC_IMPL(__imp__sub_82BE6E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE6E98"))) PPC_WEAK_FUNC(sub_82BE6E98);
PPC_FUNC_IMPL(__imp__sub_82BE6E98) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-460
	ctx.r9.s64 = ctx.r11.s64 + -460;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82be6ecc
	if (ctx.cr6.eq) goto loc_82BE6ECC;
	// bl 0x82294a58
	ctx.lr = 0x82BE6EC8;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BE6ECC:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82BE6EE0"))) PPC_WEAK_FUNC(sub_82BE6EE0);
PPC_FUNC_IMPL(__imp__sub_82BE6EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r10,r11,-460
	ctx.r10.s64 = ctx.r11.s64 + -460;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6EF0"))) PPC_WEAK_FUNC(sub_82BE6EF0);
PPC_FUNC_IMPL(__imp__sub_82BE6EF0) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bge cr6,0x82be6f24
	if (!ctx.cr6.lt) goto loc_82BE6F24;
loc_82BE6F1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82be70b0
	goto loc_82BE70B0;
loc_82BE6F24:
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82be6f1c
	if (ctx.cr6.lt) goto loc_82BE6F1C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82be6f44
	if (!ctx.cr6.gt) goto loc_82BE6F44;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82be6f1c
	if (ctx.cr6.eq) goto loc_82BE6F1C;
loc_82BE6F44:
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82be6f60
	if (ctx.cr6.lt) goto loc_82BE6F60;
	// lfs f0,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82be6f64
	if (!ctx.cr6.lt) goto loc_82BE6F64;
loc_82BE6F60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BE6F64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be6f1c
	if (ctx.cr6.eq) goto loc_82BE6F1C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82be6f1c
	if (ctx.cr6.eq) goto loc_82BE6F1C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82be6f98
	if (!ctx.cr6.eq) goto loc_82BE6F98;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be6f1c
	if (ctx.cr6.eq) goto loc_82BE6F1C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be6fb8
	if (ctx.cr6.eq) goto loc_82BE6FB8;
loc_82BE6F98:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE6FAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82be6f1c
	if (ctx.cr6.eq) goto loc_82BE6F1C;
loc_82BE6FB8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be6fe4
	if (ctx.cr6.eq) goto loc_82BE6FE4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE6FD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82be6f1c
	if (ctx.cr6.eq) goto loc_82BE6F1C;
loc_82BE6FE4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bge cr6,0x82be6f1c
	if (!ctx.cr6.lt) goto loc_82BE6F1C;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,31796
	ctx.r8.s64 = ctx.r9.s64 + 31796;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lfs f13,31796(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31796);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,1296(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 1296);
	ctx.f11.f64 = double(temp.f32);
loc_82BE7008:
	// lfs f12,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f12
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsubs f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fabs f5,f6
	ctx.f5.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fcmpu cr6,f5,f13
	ctx.cr6.compare(ctx.f5.f64, ctx.f13.f64);
	// bgt cr6,0x82be6f1c
	if (ctx.cr6.gt) goto loc_82BE6F1C;
	// lfs f0,-28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,-32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f0,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsubs f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fabs f5,f6
	ctx.f5.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fcmpu cr6,f5,f13
	ctx.cr6.compare(ctx.f5.f64, ctx.f13.f64);
	// bgt cr6,0x82be6f1c
	if (ctx.cr6.gt) goto loc_82BE6F1C;
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f12,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,-28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f12,f10,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fabs f5,f6
	ctx.f5.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fcmpu cr6,f5,f13
	ctx.cr6.compare(ctx.f5.f64, ctx.f13.f64);
	// bgt cr6,0x82be6f1c
	if (ctx.cr6.gt) goto loc_82BE6F1C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x82be7008
	if (ctx.cr6.lt) goto loc_82BE7008;
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82be6f1c
	if (!ctx.cr6.gt) goto loc_82BE6F1C;
	// lfs f0,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82be70b0
	if (!ctx.cr6.gt) goto loc_82BE70B0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BE70B0:
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

__attribute__((alias("__imp__sub_82BE70C8"))) PPC_WEAK_FUNC(sub_82BE70C8);
PPC_FUNC_IMPL(__imp__sub_82BE70C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x82bd4bf0
	sub_82BD4BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE70D0"))) PPC_WEAK_FUNC(sub_82BE70D0);
PPC_FUNC_IMPL(__imp__sub_82BE70D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x82bd4c80
	sub_82BD4C80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE70D8"))) PPC_WEAK_FUNC(sub_82BE70D8);
PPC_FUNC_IMPL(__imp__sub_82BE70D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x82bd4d68
	sub_82BD4D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE70E0"))) PPC_WEAK_FUNC(sub_82BE70E0);
PPC_FUNC_IMPL(__imp__sub_82BE70E0) {
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
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bd4e50
	ctx.lr = 0x82BE70FC;
	sub_82BD4E50(ctx, base);
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

__attribute__((alias("__imp__sub_82BE7114"))) PPC_WEAK_FUNC(sub_82BE7114);
PPC_FUNC_IMPL(__imp__sub_82BE7114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE7118"))) PPC_WEAK_FUNC(sub_82BE7118);
PPC_FUNC_IMPL(__imp__sub_82BE7118) {
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
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bd4fe0
	ctx.lr = 0x82BE7134;
	sub_82BD4FE0(ctx, base);
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

__attribute__((alias("__imp__sub_82BE714C"))) PPC_WEAK_FUNC(sub_82BE714C);
PPC_FUNC_IMPL(__imp__sub_82BE714C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE7150"))) PPC_WEAK_FUNC(sub_82BE7150);
PPC_FUNC_IMPL(__imp__sub_82BE7150) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be716c
	if (ctx.cr6.eq) goto loc_82BE716C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82BE716C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7174"))) PPC_WEAK_FUNC(sub_82BE7174);
PPC_FUNC_IMPL(__imp__sub_82BE7174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE7178"))) PPC_WEAK_FUNC(sub_82BE7178);
PPC_FUNC_IMPL(__imp__sub_82BE7178) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x82bd5198
	sub_82BD5198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE7180"))) PPC_WEAK_FUNC(sub_82BE7180);
PPC_FUNC_IMPL(__imp__sub_82BE7180) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x82bd5268
	sub_82BD5268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE7188"))) PPC_WEAK_FUNC(sub_82BE7188);
PPC_FUNC_IMPL(__imp__sub_82BE7188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82BE7190;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r11,-24768
	ctx.r4.s64 = ctx.r11.s64 + -24768;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82bd49a8
	ctx.lr = 0x82BE71B0;
	sub_82BD49A8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be71d4
	if (ctx.cr6.eq) goto loc_82BE71D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE71D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BE71D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE71DC"))) PPC_WEAK_FUNC(sub_82BE71DC);
PPC_FUNC_IMPL(__imp__sub_82BE71DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE71E0"))) PPC_WEAK_FUNC(sub_82BE71E0);
PPC_FUNC_IMPL(__imp__sub_82BE71E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x82bd5320
	sub_82BD5320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE71E8"))) PPC_WEAK_FUNC(sub_82BE71E8);
PPC_FUNC_IMPL(__imp__sub_82BE71E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x82bd5390
	sub_82BD5390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE71F0"))) PPC_WEAK_FUNC(sub_82BE71F0);
PPC_FUNC_IMPL(__imp__sub_82BE71F0) {
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
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r11,-24720
	ctx.r4.s64 = ctx.r11.s64 + -24720;
	// bl 0x82bd49a8
	ctx.lr = 0x82BE7214;
	sub_82BD49A8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be7230
	if (ctx.cr6.eq) goto loc_82BE7230;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE7230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BE7230:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82BE7244"))) PPC_WEAK_FUNC(sub_82BE7244);
PPC_FUNC_IMPL(__imp__sub_82BE7244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE7248"))) PPC_WEAK_FUNC(sub_82BE7248);
PPC_FUNC_IMPL(__imp__sub_82BE7248) {
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
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r11,-24700
	ctx.r4.s64 = ctx.r11.s64 + -24700;
	// bl 0x82bd49a8
	ctx.lr = 0x82BE726C;
	sub_82BD49A8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be7288
	if (ctx.cr6.eq) goto loc_82BE7288;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE7288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BE7288:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82BE729C"))) PPC_WEAK_FUNC(sub_82BE729C);
PPC_FUNC_IMPL(__imp__sub_82BE729C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE72A0"))) PPC_WEAK_FUNC(sub_82BE72A0);
PPC_FUNC_IMPL(__imp__sub_82BE72A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x82bd54a0
	sub_82BD54A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE72A8"))) PPC_WEAK_FUNC(sub_82BE72A8);
PPC_FUNC_IMPL(__imp__sub_82BE72A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x82bd5538
	sub_82BD5538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE72B0"))) PPC_WEAK_FUNC(sub_82BE72B0);
PPC_FUNC_IMPL(__imp__sub_82BE72B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be72d0
	if (ctx.cr6.eq) goto loc_82BE72D0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82BE72D0:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE72DC"))) PPC_WEAK_FUNC(sub_82BE72DC);
PPC_FUNC_IMPL(__imp__sub_82BE72DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE72E0"))) PPC_WEAK_FUNC(sub_82BE72E0);
PPC_FUNC_IMPL(__imp__sub_82BE72E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x82bd55d0
	sub_82BD55D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE72E8"))) PPC_WEAK_FUNC(sub_82BE72E8);
PPC_FUNC_IMPL(__imp__sub_82BE72E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x82bd5630
	sub_82BD5630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE72F0"))) PPC_WEAK_FUNC(sub_82BE72F0);
PPC_FUNC_IMPL(__imp__sub_82BE72F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be7310
	if (ctx.cr6.eq) goto loc_82BE7310;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82BE7310:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE731C"))) PPC_WEAK_FUNC(sub_82BE731C);
PPC_FUNC_IMPL(__imp__sub_82BE731C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE7320"))) PPC_WEAK_FUNC(sub_82BE7320);
PPC_FUNC_IMPL(__imp__sub_82BE7320) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7328"))) PPC_WEAK_FUNC(sub_82BE7328);
PPC_FUNC_IMPL(__imp__sub_82BE7328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r9,r11,-460
	ctx.r9.s64 = ctx.r11.s64 + -460;
	// addi r8,r10,-19856
	ctx.r8.s64 = ctx.r10.s64 + -19856;
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7344"))) PPC_WEAK_FUNC(sub_82BE7344);
PPC_FUNC_IMPL(__imp__sub_82BE7344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE7348"))) PPC_WEAK_FUNC(sub_82BE7348);
PPC_FUNC_IMPL(__imp__sub_82BE7348) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7350"))) PPC_WEAK_FUNC(sub_82BE7350);
PPC_FUNC_IMPL(__imp__sub_82BE7350) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r9,r11,-460
	ctx.r9.s64 = ctx.r11.s64 + -460;
	// addi r8,r10,-19856
	ctx.r8.s64 = ctx.r10.s64 + -19856;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82be73a0
	if (ctx.cr6.eq) goto loc_82BE73A0;
	// bl 0x82d57a78
	ctx.lr = 0x82BE738C;
	sub_82D57A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE73A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BE73A0:
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

__attribute__((alias("__imp__sub_82BE73B8"))) PPC_WEAK_FUNC(sub_82BE73B8);
PPC_FUNC_IMPL(__imp__sub_82BE73B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r10,r11,-19856
	ctx.r10.s64 = ctx.r11.s64 + -19856;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE73C8"))) PPC_WEAK_FUNC(sub_82BE73C8);
PPC_FUNC_IMPL(__imp__sub_82BE73C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82BE73D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-18488
	ctx.r10.s64 = ctx.r11.s64 + -18488;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x82be7468
	ctx.lr = 0x82BE7424;
	sub_82BE7468(ctx, base);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r31,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// lwz r9,96(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE7444"))) PPC_WEAK_FUNC(sub_82BE7444);
PPC_FUNC_IMPL(__imp__sub_82BE7444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE7448"))) PPC_WEAK_FUNC(sub_82BE7448);
PPC_FUNC_IMPL(__imp__sub_82BE7448) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-18592
	ctx.r9.s64 = ctx.r10.s64 + -18592;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7464"))) PPC_WEAK_FUNC(sub_82BE7464);
PPC_FUNC_IMPL(__imp__sub_82BE7464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE7468"))) PPC_WEAK_FUNC(sub_82BE7468);
PPC_FUNC_IMPL(__imp__sub_82BE7468) {
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
	// bl 0x82be3480
	ctx.lr = 0x82BE7488;
	sub_82BE3480(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-18500
	ctx.r10.s64 = ctx.r11.s64 + -18500;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lfs f0,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lfs f13,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lwz r9,116(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// lwz r8,120(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r8,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// lwz r7,124(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r7,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r7.u32);
	// lwz r6,128(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r6,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82BE74E0"))) PPC_WEAK_FUNC(sub_82BE74E0);
PPC_FUNC_IMPL(__imp__sub_82BE74E0) {
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
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-19856
	ctx.r9.s64 = ctx.r11.s64 + -19856;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82be7514
	if (ctx.cr6.eq) goto loc_82BE7514;
	// bl 0x82294a58
	ctx.lr = 0x82BE7510;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BE7514:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82BE7528"))) PPC_WEAK_FUNC(sub_82BE7528);
PPC_FUNC_IMPL(__imp__sub_82BE7528) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be75b8
	if (ctx.cr6.eq) goto loc_82BE75B8;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be7468
	ctx.lr = 0x82BE755C;
	sub_82BE7468(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be7578
	if (ctx.cr6.eq) goto loc_82BE7578;
	// bl 0x82bca838
	ctx.lr = 0x82BE7570;
	sub_82BCA838(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// b 0x82be757c
	goto loc_82BE757C;
loc_82BE7578:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_82BE757C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be7594
	if (ctx.cr6.eq) goto loc_82BE7594;
	// bl 0x82bca838
	ctx.lr = 0x82BE758C;
	sub_82BCA838(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// b 0x82be7598
	goto loc_82BE7598;
loc_82BE7594:
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
loc_82BE7598:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE75B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// b 0x82be75c0
	goto loc_82BE75C0;
loc_82BE75B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
loc_82BE75C0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_82BE75D8"))) PPC_WEAK_FUNC(sub_82BE75D8);
PPC_FUNC_IMPL(__imp__sub_82BE75D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82BE75E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be76b8
	ctx.lr = 0x82BE75F4;
	sub_82BE76B8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE760C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82be7650
	if (!ctx.cr6.eq) goto loc_82BE7650;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82be76b0
	if (!ctx.cr6.eq) goto loc_82BE76B0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bl 0x82bc38a0
	ctx.lr = 0x82BE7648;
	sub_82BC38A0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82BE7650:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be7468
	ctx.lr = 0x82BE765C;
	sub_82BE7468(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be7678
	if (ctx.cr6.eq) goto loc_82BE7678;
	// bl 0x82bca838
	ctx.lr = 0x82BE7670;
	sub_82BCA838(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// b 0x82be767c
	goto loc_82BE767C;
loc_82BE7678:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
loc_82BE767C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be7694
	if (ctx.cr6.eq) goto loc_82BE7694;
	// bl 0x82bca838
	ctx.lr = 0x82BE768C;
	sub_82BCA838(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// b 0x82be7698
	goto loc_82BE7698;
loc_82BE7694:
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
loc_82BE7698:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE76B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BE76B0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE76B8"))) PPC_WEAK_FUNC(sub_82BE76B8);
PPC_FUNC_IMPL(__imp__sub_82BE76B8) {
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
	// bl 0x82be37f0
	ctx.lr = 0x82BE76D8;
	sub_82BE37F0(ctx, base);
	// lfs f0,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lfs f13,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// lwz r9,124(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// lwz r8,128(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r8,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82BE7724"))) PPC_WEAK_FUNC(sub_82BE7724);
PPC_FUNC_IMPL(__imp__sub_82BE7724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE7728"))) PPC_WEAK_FUNC(sub_82BE7728);
PPC_FUNC_IMPL(__imp__sub_82BE7728) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82be7768
	if (!ctx.cr6.eq) goto loc_82BE7768;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be76b8
	ctx.lr = 0x82BE7754;
	sub_82BE76B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BE7768:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BE7780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be7794
	if (ctx.cr6.eq) goto loc_82BE7794;
	// bl 0x82bca718
	ctx.lr = 0x82BE7790;
	sub_82BCA718(ctx, base);
	// b 0x82be7798
	goto loc_82BE7798;
loc_82BE7794:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BE7798:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be77b0
	if (ctx.cr6.eq) goto loc_82BE77B0;
	// bl 0x82bca718
	ctx.lr = 0x82BE77AC;
	sub_82BCA718(ctx, base);
	// b 0x82be77b4
	goto loc_82BE77B4;
loc_82BE77B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BE77B4:
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82BE77CC"))) PPC_WEAK_FUNC(sub_82BE77CC);
PPC_FUNC_IMPL(__imp__sub_82BE77CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE77D0"))) PPC_WEAK_FUNC(sub_82BE77D0);
PPC_FUNC_IMPL(__imp__sub_82BE77D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bd57a8
	sub_82BD57A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE77D4"))) PPC_WEAK_FUNC(sub_82BE77D4);
PPC_FUNC_IMPL(__imp__sub_82BE77D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE77D8"))) PPC_WEAK_FUNC(sub_82BE77D8);
PPC_FUNC_IMPL(__imp__sub_82BE77D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bd5838
	sub_82BD5838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE77DC"))) PPC_WEAK_FUNC(sub_82BE77DC);
PPC_FUNC_IMPL(__imp__sub_82BE77DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE77E0"))) PPC_WEAK_FUNC(sub_82BE77E0);
PPC_FUNC_IMPL(__imp__sub_82BE77E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bd58c8
	sub_82BD58C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE77E4"))) PPC_WEAK_FUNC(sub_82BE77E4);
PPC_FUNC_IMPL(__imp__sub_82BE77E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE77E8"))) PPC_WEAK_FUNC(sub_82BE77E8);
PPC_FUNC_IMPL(__imp__sub_82BE77E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bd5988
	sub_82BD5988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE77EC"))) PPC_WEAK_FUNC(sub_82BE77EC);
PPC_FUNC_IMPL(__imp__sub_82BE77EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE77F0"))) PPC_WEAK_FUNC(sub_82BE77F0);
PPC_FUNC_IMPL(__imp__sub_82BE77F0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7808"))) PPC_WEAK_FUNC(sub_82BE7808);
PPC_FUNC_IMPL(__imp__sub_82BE7808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f8,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,12(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f6,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f1
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// stfs f5,16(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f4,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// stfs f3,20(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f2,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f13,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f12,28(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f11,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f10,32(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7878"))) PPC_WEAK_FUNC(sub_82BE7878);
PPC_FUNC_IMPL(__imp__sub_82BE7878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f11,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f7,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f1
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// lfs f5,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f1
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// lfs f3,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f1
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f3,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// lfs f11,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f0,f1
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f7,f11,f1
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f6,12(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f4,16(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f2,20(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f7,32(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE78E8"))) PPC_WEAK_FUNC(sub_82BE78E8);
PPC_FUNC_IMPL(__imp__sub_82BE78E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE78F0"))) PPC_WEAK_FUNC(sub_82BE78F0);
PPC_FUNC_IMPL(__imp__sub_82BE78F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE790C"))) PPC_WEAK_FUNC(sub_82BE790C);
PPC_FUNC_IMPL(__imp__sub_82BE790C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE7910"))) PPC_WEAK_FUNC(sub_82BE7910);
PPC_FUNC_IMPL(__imp__sub_82BE7910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7918"))) PPC_WEAK_FUNC(sub_82BE7918);
PPC_FUNC_IMPL(__imp__sub_82BE7918) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82BE7924:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82be7924
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BE7924;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE793C"))) PPC_WEAK_FUNC(sub_82BE793C);
PPC_FUNC_IMPL(__imp__sub_82BE793C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE7940"))) PPC_WEAK_FUNC(sub_82BE7940);
PPC_FUNC_IMPL(__imp__sub_82BE7940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82be7a0c
	if (ctx.cr6.eq) goto loc_82BE7A0C;
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82be7a20
	if (!ctx.cr6.eq) goto loc_82BE7A20;
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82be7a20
	if (!ctx.cr6.eq) goto loc_82BE7A20;
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82be7a20
	if (!ctx.cr6.eq) goto loc_82BE7A20;
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82be79b4
	if (ctx.cr6.eq) goto loc_82BE79B4;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82be79b4
	if (ctx.cr6.eq) goto loc_82BE79B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82be79cc
	goto loc_82BE79CC;
loc_82BE79B4:
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r8,r11,80
	ctx.r8.s64 = ctx.r11.s64 + 80;
	// lwz r7,84(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// subf r3,r6,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r6.s64;
	// srawi r3,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 2;
loc_82BE79CC:
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r7,56(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// rlwinm r7,r7,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// lfs f0,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f2,60(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82be7b60
	ctx.lr = 0x82BE7A04;
	sub_82BE7B60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be7a84
	if (ctx.cr6.eq) goto loc_82BE7A84;
loc_82BE7A0C:
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
loc_82BE7A20:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// li r6,9
	ctx.r6.s64 = 9;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82BE7A30:
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bdnz 0x82be7a30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BE7A30;
	// lfs f0,36(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lfs f13,40(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lfs f12,44(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f11,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f10,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f9,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,4(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f8,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,8(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
loc_82BE7A84:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7A98"))) PPC_WEAK_FUNC(sub_82BE7A98);
PPC_FUNC_IMPL(__imp__sub_82BE7A98) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fdivs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fdivs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x82cb4228
	ctx.lr = 0x82BE7ADC;
	sub_82CB4228(ctx, base);
	// clrlwi r10,r3,22
	ctx.r10.u64 = ctx.r3.u32 & 0x3FF;
	// rlwinm r10,r10,0,29,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFE07;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82be7b20
	if (!ctx.cr6.eq) goto loc_82BE7B20;
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb4228
	ctx.lr = 0x82BE7AF4;
	sub_82CB4228(ctx, base);
	// clrlwi r11,r3,22
	ctx.r11.u64 = ctx.r3.u32 & 0x3FF;
	// rlwinm r11,r11,0,29,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE07;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82be7b20
	if (!ctx.cr6.eq) goto loc_82BE7B20;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb4228
	ctx.lr = 0x82BE7B0C;
	sub_82CB4228(ctx, base);
	// clrlwi r11,r3,22
	ctx.r11.u64 = ctx.r3.u32 & 0x3FF;
	// rlwinm r11,r11,0,29,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE07;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82be7b24
	if (ctx.cr6.eq) goto loc_82BE7B24;
loc_82BE7B20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BE7B24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82be7b48
	if (!ctx.cr6.eq) goto loc_82BE7B48;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82BE7B48:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82BE7B5C"))) PPC_WEAK_FUNC(sub_82BE7B5C);
PPC_FUNC_IMPL(__imp__sub_82BE7B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE7B60"))) PPC_WEAK_FUNC(sub_82BE7B60);
PPC_FUNC_IMPL(__imp__sub_82BE7B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82BE7B68;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6adc
	ctx.lr = 0x82BE7B70;
	__savefpr_25(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f25,f2
	ctx.f25.f64 = ctx.f2.f64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f12,196(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// beq cr6,0x82be80b4
	if (ctx.cr6.eq) goto loc_82BE80B4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lfs f29,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f29.f64 = double(temp.f32);
	// lfs f27,-16880(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16880);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,-28844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28844);
	ctx.f28.f64 = double(temp.f32);
loc_82BE7C00:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82be8098
	if (!ctx.cr6.eq) goto loc_82BE8098;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bgt cr6,0x82be7f8c
	if (ctx.cr6.gt) goto loc_82BE7F8C;
	// lis r12,-32066
	ctx.r12.s64 = -2101477376;
	// addi r12,r12,31852
	ctx.r12.s64 = ctx.r12.s64 + 31852;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BE80E8;
	case 1:
		goto loc_82BE7DBC;
	case 2:
		goto loc_82BE7DE4;
	case 3:
		goto loc_82BE7DD4;
	case 4:
		goto loc_82BE7F54;
	case 5:
		goto loc_82BE7D24;
	case 6:
		goto loc_82BE7C8C;
	case 7:
		goto loc_82BE7DFC;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-32536(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32536);
	// lwz r21,32188(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32188);
	// lwz r21,32228(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32228);
	// lwz r21,32212(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32212);
	// lwz r21,32596(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32596);
	// lwz r21,32036(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32036);
	// lwz r21,31884(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 31884);
	// lwz r21,32252(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32252);
loc_82BE7C8C:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be80d4
	if (ctx.cr6.eq) goto loc_82BE80D4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE7CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82BE7CC8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82be7cc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BE7CC8;
	// lfs f0,272(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lfs f13,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lfs f12,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,420(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// stfs f13,424(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stfs f12,428(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// stfs f11,432(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// bl 0x82be93c8
	ctx.lr = 0x82BE7D08;
	sub_82BE93C8(ctx, base);
	// addi r4,r4,36
	ctx.r4.s64 = ctx.r4.s64 + 36;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82be95b8
	ctx.lr = 0x82BE7D14;
	sub_82BE95B8(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be9a28
	ctx.lr = 0x82BE7D20;
	sub_82BE9A28(ctx, base);
	// b 0x82be7f8c
	goto loc_82BE7F8C;
loc_82BE7D24:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be80d4
	if (ctx.cr6.eq) goto loc_82BE80D4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// addi r4,r1,260
	ctx.r4.s64 = ctx.r1.s64 + 260;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE7D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82BE7D60:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82be7d60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BE7D60;
	// lfs f0,288(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lfs f13,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lfs f12,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,356(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// stfs f13,360(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stfs f12,364(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// stfs f11,368(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// bl 0x82be93c8
	ctx.lr = 0x82BE7DA0;
	sub_82BE93C8(ctx, base);
	// addi r4,r4,36
	ctx.r4.s64 = ctx.r4.s64 + 36;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82be95b8
	ctx.lr = 0x82BE7DAC;
	sub_82BE95B8(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be9a28
	ctx.lr = 0x82BE7DB8;
	sub_82BE9A28(ctx, base);
	// b 0x82be7f8c
	goto loc_82BE7F8C;
loc_82BE7DBC:
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// lfs f2,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be9c68
	ctx.lr = 0x82BE7DD0;
	sub_82BE9C68(ctx, base);
	// b 0x82be7f8c
	goto loc_82BE7F8C;
loc_82BE7DD4:
	// lfs f2,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f3,f0,f28,f2
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f2.f64));
	// b 0x82be7f78
	goto loc_82BE7F78;
loc_82BE7DE4:
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r5,r31,104
	ctx.r5.s64 = ctx.r31.s64 + 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be9b30
	ctx.lr = 0x82BE7DF8;
	sub_82BE9B30(ctx, base);
	// b 0x82be7f8c
	goto loc_82BE7F8C;
loc_82BE7DFC:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE7E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// std r9,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r9.u64);
	// lfd f13,304(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f30,f10,f28
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BE7E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r6,r3,32
	ctx.r6.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lfs f9,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// std r6,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.r6.u64);
	// lfd f8,312(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// addi r9,r1,448
	ctx.r9.s64 = ctx.r1.s64 + 448;
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r8,9
	ctx.r8.s64 = 9;
	// fmuls f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f0,f5,f28
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82BE7E78:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82be7e78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BE7E78;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fabs f4,f30
	ctx.f4.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f30
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f7,f9,f30
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// lfs f6,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stfs f4,136(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f2,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f6,f6,f0,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmadds f5,f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f8.f64));
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f4,f3,f0,f7
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f7.f64));
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f9,f11,f27
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// stfs f9,140(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f2,f31,f6
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f31.f64 + ctx.f6.f64));
	// fmadds f7,f1,f31,f5
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f5.f64));
	// fmadds f6,f13,f31,f4
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f4.f64));
	// fadds f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// fadds f4,f3,f7
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fadds f3,f12,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fadds f2,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f2,488(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 488, temp.u32);
	// fadds f1,f11,f4
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// stfs f1,492(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 492, temp.u32);
	// fadds f0,f3,f9
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// stfs f0,484(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 484, temp.u32);
	// bl 0x82be9300
	ctx.lr = 0x82BE7F38;
	sub_82BE9300(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be93c8
	ctx.lr = 0x82BE7F44;
	sub_82BE93C8(ctx, base);
	// addi r4,r1,484
	ctx.r4.s64 = ctx.r1.s64 + 484;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be95b8
	ctx.lr = 0x82BE7F50;
	sub_82BE95B8(ctx, base);
	// b 0x82be7f8c
	goto loc_82BE7F8C;
loc_82BE7F54:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lfs f2,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be7f74
	if (ctx.cr6.eq) goto loc_82BE7F74;
	// lfs f0,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fadds f3,f0,f2
	ctx.f3.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// b 0x82be7f78
	goto loc_82BE7F78;
loc_82BE7F74:
	// fmuls f3,f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f28.f64));
loc_82BE7F78:
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be9e88
	ctx.lr = 0x82BE7F8C;
	sub_82BE9E88(ctx, base);
loc_82BE7F8C:
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82be8014
	if (ctx.cr6.gt) goto loc_82BE8014;
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f2,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f8,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f5,92(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// b 0x82be8088
	goto loc_82BE8088;
loc_82BE8014:
	// lfs f13,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f0,f12
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f7,f4,f0
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f6,128(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f8,f5,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
loc_82BE8088:
	// stfs f8,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82be9a28
	ctx.lr = 0x82BE8098;
	sub_82BE9A28(ctx, base);
loc_82BE8098:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82be7c00
	if (ctx.cr6.lt) goto loc_82BE7C00;
	// lfs f0,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
loc_82BE80B4:
	// lfs f11,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bgt cr6,0x82be80fc
	if (ctx.cr6.gt) goto loc_82BE80FC;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6b28
	ctx.lr = 0x82BE80D0;
	__restfpr_25(ctx, base);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82BE80D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6b28
	ctx.lr = 0x82BE80E4;
	__restfpr_25(ctx, base);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82BE80E8:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6b28
	ctx.lr = 0x82BE80F8;
	__restfpr_25(ctx, base);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82BE80FC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// beq cr6,0x82be8128
	if (ctx.cr6.eq) goto loc_82BE8128;
	// lfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// b 0x82be8140
	goto loc_82BE8140;
loc_82BE8128:
	// fneg f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f12,36(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 36, temp.u32);
	// stfs f13,40(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 40, temp.u32);
	// fneg f9,f12
	ctx.f9.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,44(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 44, temp.u32);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
loc_82BE8140:
	// fneg f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f10,140(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82be95b8
	ctx.lr = 0x82BE8150;
	sub_82BE95B8(ctx, base);
	// lfs f9,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f9.f64 = double(temp.f32);
	// lwz r4,756(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// fcmpu cr6,f26,f31
	ctx.cr6.compare(ctx.f26.f64, ctx.f31.f64);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// ble cr6,0x82be81e8
	if (!ctx.cr6.gt) goto loc_82BE81E8;
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f9,f26
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f26.f64));
	// lfs f0,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f26
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// lfs f11,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f26
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// lfs f7,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f11,f26
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f26.f64));
	// lfs f5,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f26
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f26.f64));
	// lfs f3,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f26
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f26.f64));
	// lfs f1,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f3,f26
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f26.f64));
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f1,f26
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f26.f64));
	// fmuls f9,f13,f26
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// stfs f12,224(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f10,228(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fcmpu cr6,f25,f31
	ctx.cr6.compare(ctx.f25.f64, ctx.f31.f64);
	// stfs f8,232(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f6,236(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f4,240(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f2,244(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f11,252(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f9,256(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// bgt cr6,0x82be8258
	if (ctx.cr6.gt) goto loc_82BE8258;
	// lfs f8,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f26
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f26.f64));
	// stfs f7,0(r24)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// b 0x82be8258
	goto loc_82BE8258;
loc_82BE81E8:
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f25,f0
	ctx.f13.f64 = double(float(ctx.f25.f64 / ctx.f0.f64));
	// lfs f12,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f12,f13
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f3,224(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fmuls f2,f11,f13
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f2,228(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fmuls f1,f10,f13
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f1,232(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fmuls f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f0,236(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// fmuls f12,f8,f13
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f12,240(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fmuls f11,f7,f13
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f11,244(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// fmuls f10,f6,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f10,248(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// fmuls f9,f5,f13
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f9,252(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// fmuls f8,f4,f13
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f8,256(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
loc_82BE8258:
	// bl 0x82be8270
	ctx.lr = 0x82BE825C;
	sub_82BE8270(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6b28
	ctx.lr = 0x82BE826C;
	__restfpr_25(ctx, base);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE8270"))) PPC_WEAK_FUNC(sub_82BE8270);
PPC_FUNC_IMPL(__imp__sub_82BE8270) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,3
	ctx.r3.s64 = 3;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// stfd f11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// stfd f10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f10.u64);
	// stfd f9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f9.u64);
	// stfd f8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f8.u64);
	// stfd f7,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f7.u64);
	// stfd f6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f6.u64);
	// bl 0x82be83c0
	ctx.lr = 0x82BE82E8;
	sub_82BE83C0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82be8310
	if (!ctx.cr6.eq) goto loc_82BE8310;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// b 0x82be83a4
	goto loc_82BE83A4;
loc_82BE8310:
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f11,144(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// lfd f9,160(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// lfd f5,208(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// lfd f1,192(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfd f7,184(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfd f3,168(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// lfd f13,216(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// frsp f0,f3
	ctx.f0.f64 = double(float(ctx.f3.f64));
	// lfd f9,176(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// frsp f7,f13
	ctx.f7.f64 = double(float(ctx.f13.f64));
	// lfd f5,200(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// frsp f3,f9
	ctx.f3.f64 = double(float(ctx.f9.f64));
	// lfd f1,224(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f10,4(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f8,8(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f6,0(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f4,4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f7,20(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f3,24(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_82BE83A4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_82BE83BC"))) PPC_WEAK_FUNC(sub_82BE83BC);
PPC_FUNC_IMPL(__imp__sub_82BE83BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE83C0"))) PPC_WEAK_FUNC(sub_82BE83C0);
PPC_FUNC_IMPL(__imp__sub_82BE83C0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x82BE83C8;
	__savegprlr_17(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfd f9,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r31,2
	ctx.r31.s64 = 2;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// subf r29,r4,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r4.s64;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// li r30,3
	ctx.r30.s64 = 3;
	// lfd f10,-18352(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
loc_82BE83FC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82BE840C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82be840c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BE840C;
	// lfd f13,0(r6)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stfdx f10,r29,r6
	PPC_STORE_U64(ctx.r29.u32 + ctx.r6.u32, ctx.f10.u64);
	// fmadd f12,f13,f13,f12
	ctx.f12.f64 = ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82be847c
	if (ctx.cr6.lt) goto loc_82BE847C;
	// subfic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 <= 4294967295;
	ctx.r11.s64 = -1 - ctx.r9.s64;
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_82BE8450:
	// lfd f13,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmadd f11,f13,f13,f0
	ctx.f11.f64 = ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64;
	// lfd f8,8(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f7,16(r11)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// lfd f6,24(r11)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// fmadd f5,f8,f8,f11
	ctx.f5.f64 = ctx.f8.f64 * ctx.f8.f64 + ctx.f11.f64;
	// fmadd f4,f7,f7,f5
	ctx.f4.f64 = ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64;
	// fmadd f0,f6,f6,f4
	ctx.f0.f64 = ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64;
	// bne 0x82be8450
	if (!ctx.cr0.eq) goto loc_82BE8450;
loc_82BE847C:
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bge cr6,0x82be84a8
	if (!ctx.cr6.lt) goto loc_82BE84A8;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subfic r11,r8,3
	ctx.xer.ca = ctx.r8.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r8.s64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_82BE8494:
	// lfd f13,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmadd f0,f13,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x82be8494
	if (!ctx.cr0.eq) goto loc_82BE8494;
loc_82BE84A8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// bne 0x82be83fc
	if (!ctx.cr0.eq) goto loc_82BE83FC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r17,0
	ctx.r17.s64 = 0;
	// lfd f13,-18360(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18360);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmadd f13,f12,f13,f0
	ctx.f13.f64 = ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64;
	// lfd f0,-18368(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18368);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfd f8,-18376(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18376);
	// lfd f7,-18384(r10)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18384);
	// fmul f6,f13,f0
	ctx.f6.f64 = ctx.f13.f64 * ctx.f0.f64;
loc_82BE84F0:
	// fmr f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f9.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
loc_82BE8504:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x82be855c
	if (ctx.cr6.lt) goto loc_82BE855C;
	// subfic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 <= 4294967295;
	ctx.r11.s64 = -1 - ctx.r9.s64;
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_82BE8530:
	// lfd f13,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmadd f12,f13,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64;
	// lfd f11,8(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f5,16(r11)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// lfd f4,24(r11)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// fmadd f3,f11,f11,f12
	ctx.f3.f64 = ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64;
	// fmadd f2,f5,f5,f3
	ctx.f2.f64 = ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64;
	// fmadd f0,f4,f4,f2
	ctx.f0.f64 = ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64;
	// bne 0x82be8530
	if (!ctx.cr0.eq) goto loc_82BE8530;
loc_82BE855C:
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bge cr6,0x82be8588
	if (!ctx.cr6.lt) goto loc_82BE8588;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subfic r11,r8,3
	ctx.xer.ca = ctx.r8.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r8.s64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_82BE8574:
	// lfd f13,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmadd f0,f13,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x82be8574
	if (!ctx.cr0.eq) goto loc_82BE8574;
loc_82BE8588:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// bne 0x82be8504
	if (!ctx.cr0.eq) goto loc_82BE8504;
	// fcmpu cr6,f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// blt cr6,0x82be8a98
	if (ctx.cr6.lt) goto loc_82BE8A98;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// li r20,2
	ctx.r20.s64 = 2;
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r21,r4,48
	ctx.r21.s64 = ctx.r4.s64 + 48;
	// addi r18,r5,40
	ctx.r18.s64 = ctx.r5.s64 + 40;
loc_82BE85C0:
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bge cr6,0x82be8a5c
	if (!ctx.cr6.lt) goto loc_82BE8A5C;
	// add r25,r7,r30
	ctx.r25.u64 = ctx.r7.u64 + ctx.r30.u64;
	// addi r28,r30,3
	ctx.r28.s64 = ctx.r30.s64 + 3;
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// addi r26,r22,32
	ctx.r26.s64 = ctx.r22.s64 + 32;
	// addi r23,r20,-1
	ctx.r23.s64 = ctx.r20.s64 + -1;
	// addi r24,r21,8
	ctx.r24.s64 = ctx.r21.s64 + 8;
	// add r27,r11,r4
	ctx.r27.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
loc_82BE85F0:
	// lfd f11,0(r27)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// fabs f0,f11
	ctx.f0.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// blt cr6,0x82be8a34
	if (ctx.cr6.lt) goto loc_82BE8A34;
	// lfd f13,0(r26)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// fmul f0,f11,f8
	ctx.f0.f64 = ctx.f11.f64 * ctx.f8.f64;
	// lfd f12,0(r22)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r22.u32 + 0);
	// fsub f5,f13,f12
	ctx.f5.f64 = ctx.f13.f64 - ctx.f12.f64;
	// fdiv f0,f5,f0
	ctx.f0.f64 = ctx.f5.f64 / ctx.f0.f64;
	// fmadd f13,f0,f0,f10
	ctx.f13.f64 = ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64;
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// fsqrt f5,f13
	ctx.f5.f64 = sqrt(ctx.f13.f64);
	// blt cr6,0x82be862c
	if (ctx.cr6.lt) goto loc_82BE862C;
	// fadd f4,f5,f0
	ctx.f4.f64 = ctx.f5.f64 + ctx.f0.f64;
	// b 0x82be8630
	goto loc_82BE8630;
loc_82BE862C:
	// fsub f4,f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f0.f64 - ctx.f5.f64;
loc_82BE8630:
	// fdiv f13,f10,f4
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f10.f64 / ctx.f4.f64;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// fmul f11,f11,f13
	ctx.f11.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmadd f5,f13,f13,f10
	ctx.f5.f64 = ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64;
	// fsub f4,f12,f11
	ctx.f4.f64 = ctx.f12.f64 - ctx.f11.f64;
	// stfd f4,0(r22)
	PPC_STORE_U64(ctx.r22.u32 + 0, ctx.f4.u64);
	// fsqrt f3,f5
	ctx.f3.f64 = sqrt(ctx.f5.f64);
	// lfd f2,0(r26)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// fdiv f0,f10,f3
	ctx.f0.f64 = ctx.f10.f64 / ctx.f3.f64;
	// fadd f1,f2,f11
	ctx.f1.f64 = ctx.f2.f64 + ctx.f11.f64;
	// stfd f1,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.f1.u64);
	// stfd f9,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.f9.u64);
	// fmul f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 * ctx.f13.f64;
	// blt cr6,0x82be8718
	if (ctx.cr6.lt) goto loc_82BE8718;
	// addi r11,r7,-5
	ctx.r11.s64 = ctx.r7.s64 + -5;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_82BE8688:
	// lfd f12,-48(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + -48);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfd f11,-48(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -48);
	// fmul f5,f12,f13
	ctx.f5.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmul f4,f11,f13
	ctx.f4.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmsub f3,f11,f0,f5
	ctx.f3.f64 = ctx.f11.f64 * ctx.f0.f64 - ctx.f5.f64;
	// stfd f3,-48(r11)
	PPC_STORE_U64(ctx.r11.u32 + -48, ctx.f3.u64);
	// fmadd f2,f12,f0,f4
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f4.f64;
	// stfd f2,-48(r10)
	PPC_STORE_U64(ctx.r10.u32 + -48, ctx.f2.u64);
	// lfd f1,-24(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -24);
	// lfd f12,-24(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + -24);
	// fmul f11,f12,f13
	ctx.f11.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmul f5,f1,f13
	ctx.f5.f64 = ctx.f1.f64 * ctx.f13.f64;
	// fmsub f4,f1,f0,f11
	ctx.f4.f64 = ctx.f1.f64 * ctx.f0.f64 - ctx.f11.f64;
	// stfd f4,-24(r11)
	PPC_STORE_U64(ctx.r11.u32 + -24, ctx.f4.u64);
	// fmadd f3,f12,f0,f5
	ctx.f3.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f5.f64;
	// stfd f3,-24(r10)
	PPC_STORE_U64(ctx.r10.u32 + -24, ctx.f3.u64);
	// lfd f2,0(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfd f1,0(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fmul f12,f1,f13
	ctx.f12.f64 = ctx.f1.f64 * ctx.f13.f64;
	// fmul f11,f2,f13
	ctx.f11.f64 = ctx.f2.f64 * ctx.f13.f64;
	// fmsub f5,f2,f0,f12
	ctx.f5.f64 = ctx.f2.f64 * ctx.f0.f64 - ctx.f12.f64;
	// stfd f5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f5.u64);
	// fmadd f4,f1,f0,f11
	ctx.f4.f64 = ctx.f1.f64 * ctx.f0.f64 + ctx.f11.f64;
	// stfd f4,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f4.u64);
	// lfd f3,24(r11)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// lfd f2,24(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// fmul f1,f2,f13
	ctx.f1.f64 = ctx.f2.f64 * ctx.f13.f64;
	// fmul f12,f3,f13
	ctx.f12.f64 = ctx.f3.f64 * ctx.f13.f64;
	// fmsub f11,f3,f0,f1
	ctx.f11.f64 = ctx.f3.f64 * ctx.f0.f64 - ctx.f1.f64;
	// stfd f11,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.f11.u64);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// fmadd f5,f2,f0,f12
	ctx.f5.f64 = ctx.f2.f64 * ctx.f0.f64 + ctx.f12.f64;
	// stfd f5,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.f5.u64);
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// bne 0x82be8688
	if (!ctx.cr0.eq) goto loc_82BE8688;
loc_82BE8718:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82be8778
	if (!ctx.cr6.lt) goto loc_82BE8778;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r9,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r9.s64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
loc_82BE8748:
	// lfd f12,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfd f11,0(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fmul f5,f12,f13
	ctx.f5.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmul f4,f11,f13
	ctx.f4.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmsub f3,f11,f0,f5
	ctx.f3.f64 = ctx.f11.f64 * ctx.f0.f64 - ctx.f5.f64;
	// stfd f3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f3.u64);
	// fmadd f2,f12,f0,f4
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f4.f64;
	// stfd f2,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f2.u64);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// bne 0x82be8748
	if (!ctx.cr0.eq) goto loc_82BE8748;
loc_82BE8778:
	// add r11,r20,r3
	ctx.r11.u64 = ctx.r20.u64 + ctx.r3.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82be8858
	if (ctx.cr6.lt) goto loc_82BE8858;
	// addi r11,r7,2
	ctx.r11.s64 = ctx.r7.s64 + 2;
	// subf r10,r7,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r7.s64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-5
	ctx.r10.s64 = ctx.r10.s64 + -5;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r6,r25,2
	ctx.r6.s64 = ctx.r25.s64 + 2;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
loc_82BE87C8:
	// lfd f12,-48(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + -48);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfd f11,-16(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16);
	// fmul f5,f12,f13
	ctx.f5.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmul f4,f11,f13
	ctx.f4.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmsub f3,f11,f0,f5
	ctx.f3.f64 = ctx.f11.f64 * ctx.f0.f64 - ctx.f5.f64;
	// stfd f3,-16(r11)
	PPC_STORE_U64(ctx.r11.u32 + -16, ctx.f3.u64);
	// fmadd f2,f12,f0,f4
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f4.f64;
	// stfd f2,-48(r10)
	PPC_STORE_U64(ctx.r10.u32 + -48, ctx.f2.u64);
	// lfd f1,-8(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// fmul f12,f1,f13
	ctx.f12.f64 = ctx.f1.f64 * ctx.f13.f64;
	// lfd f11,-24(r10)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r10.u32 + -24);
	// fmul f5,f11,f13
	ctx.f5.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmadd f4,f11,f0,f12
	ctx.f4.f64 = ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64;
	// fmsub f3,f1,f0,f5
	ctx.f3.f64 = ctx.f1.f64 * ctx.f0.f64 - ctx.f5.f64;
	// stfd f3,-8(r11)
	PPC_STORE_U64(ctx.r11.u32 + -8, ctx.f3.u64);
	// stfd f4,-24(r10)
	PPC_STORE_U64(ctx.r10.u32 + -24, ctx.f4.u64);
	// lfd f2,0(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fmul f1,f2,f13
	ctx.f1.f64 = ctx.f2.f64 * ctx.f13.f64;
	// lfd f12,0(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fmul f11,f12,f13
	ctx.f11.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmsub f4,f2,f0,f11
	ctx.f4.f64 = ctx.f2.f64 * ctx.f0.f64 - ctx.f11.f64;
	// stfd f4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f4.u64);
	// fmadd f5,f12,f0,f1
	ctx.f5.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f1.f64;
	// stfd f5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f5.u64);
	// lfd f3,8(r11)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f2,24(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// fmul f1,f2,f13
	ctx.f1.f64 = ctx.f2.f64 * ctx.f13.f64;
	// fmul f12,f3,f13
	ctx.f12.f64 = ctx.f3.f64 * ctx.f13.f64;
	// fmsub f11,f3,f0,f1
	ctx.f11.f64 = ctx.f3.f64 * ctx.f0.f64 - ctx.f1.f64;
	// stfd f11,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.f11.u64);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// fmadd f5,f2,f0,f12
	ctx.f5.f64 = ctx.f2.f64 * ctx.f0.f64 + ctx.f12.f64;
	// stfd f5,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.f5.u64);
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// bne 0x82be87c8
	if (!ctx.cr0.eq) goto loc_82BE87C8;
loc_82BE8858:
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82be88b4
	if (!ctx.cr6.lt) goto loc_82BE88B4;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r30,r9
	ctx.r10.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r9,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r9.s64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_82BE8884:
	// lfd f12,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfd f11,0(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fmul f5,f12,f13
	ctx.f5.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmul f4,f11,f13
	ctx.f4.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmsub f3,f11,f0,f5
	ctx.f3.f64 = ctx.f11.f64 * ctx.f0.f64 - ctx.f5.f64;
	// stfd f3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f3.u64);
	// fmadd f2,f12,f0,f4
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f4.f64;
	// stfd f2,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f2.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// bne 0x82be8884
	if (!ctx.cr0.eq) goto loc_82BE8884;
loc_82BE88B4:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// blt cr6,0x82be8974
	if (ctx.cr6.lt) goto loc_82BE8974;
	// subfic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 <= 4294967295;
	ctx.r11.s64 = -1 - ctx.r3.s64;
	// add r10,r3,r28
	ctx.r10.u64 = ctx.r3.u64 + ctx.r28.u64;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r27,24
	ctx.r11.s64 = ctx.r27.s64 + 24;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
loc_82BE88E4:
	// lfd f12,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfd f11,-16(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16);
	// fmul f5,f12,f13
	ctx.f5.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmul f4,f11,f13
	ctx.f4.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmsub f3,f11,f0,f5
	ctx.f3.f64 = ctx.f11.f64 * ctx.f0.f64 - ctx.f5.f64;
	// stfd f3,-16(r11)
	PPC_STORE_U64(ctx.r11.u32 + -16, ctx.f3.u64);
	// fmadd f2,f12,f0,f4
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f4.f64;
	// stfd f2,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f2.u64);
	// lfd f12,-8(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// lfd f1,8(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmul f11,f1,f13
	ctx.f11.f64 = ctx.f1.f64 * ctx.f13.f64;
	// fmul f5,f12,f13
	ctx.f5.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmsub f4,f12,f0,f11
	ctx.f4.f64 = ctx.f12.f64 * ctx.f0.f64 - ctx.f11.f64;
	// stfd f4,-8(r11)
	PPC_STORE_U64(ctx.r11.u32 + -8, ctx.f4.u64);
	// lfd f2,16(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// fmadd f3,f1,f0,f5
	ctx.f3.f64 = ctx.f1.f64 * ctx.f0.f64 + ctx.f5.f64;
	// stfd f3,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.f3.u64);
	// fmul f1,f2,f13
	ctx.f1.f64 = ctx.f2.f64 * ctx.f13.f64;
	// lfd f12,0(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fmul f11,f12,f13
	ctx.f11.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmsub f5,f12,f0,f1
	ctx.f5.f64 = ctx.f12.f64 * ctx.f0.f64 - ctx.f1.f64;
	// stfd f5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f5.u64);
	// fmadd f2,f2,f0,f11
	ctx.f2.f64 = ctx.f2.f64 * ctx.f0.f64 + ctx.f11.f64;
	// stfd f2,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.f2.u64);
	// lfd f1,8(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f4,24(r10)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// fmul f3,f4,f13
	ctx.f3.f64 = ctx.f4.f64 * ctx.f13.f64;
	// fmul f12,f1,f13
	ctx.f12.f64 = ctx.f1.f64 * ctx.f13.f64;
	// fmsub f11,f1,f0,f3
	ctx.f11.f64 = ctx.f1.f64 * ctx.f0.f64 - ctx.f3.f64;
	// stfd f11,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.f11.u64);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// fmadd f5,f4,f0,f12
	ctx.f5.f64 = ctx.f4.f64 * ctx.f0.f64 + ctx.f12.f64;
	// stfd f5,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.f5.u64);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bne 0x82be88e4
	if (!ctx.cr0.eq) goto loc_82BE88E4;
loc_82BE8974:
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bge cr6,0x82be89c8
	if (!ctx.cr6.lt) goto loc_82BE89C8;
	// add r11,r8,r28
	ctx.r11.u64 = ctx.r8.u64 + ctx.r28.u64;
	// add r10,r30,r8
	ctx.r10.u64 = ctx.r30.u64 + ctx.r8.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subfic r9,r8,3
	ctx.xer.ca = ctx.r8.u32 <= 3;
	ctx.r9.s64 = 3 - ctx.r8.s64;
loc_82BE8998:
	// lfd f12,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfd f11,0(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fmul f5,f12,f13
	ctx.f5.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmul f4,f11,f13
	ctx.f4.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmsub f3,f11,f0,f5
	ctx.f3.f64 = ctx.f11.f64 * ctx.f0.f64 - ctx.f5.f64;
	// stfd f3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f3.u64);
	// fmadd f2,f12,f0,f4
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f4.f64;
	// stfd f2,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f2.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x82be8998
	if (!ctx.cr0.eq) goto loc_82BE8998;
loc_82BE89C8:
	// lfd f12,-16(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r29.u32 + -16);
	// add r11,r19,r5
	ctx.r11.u64 = ctx.r19.u64 + ctx.r5.u64;
	// lfdx f5,r19,r5
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r19.u32 + ctx.r5.u32);
	// fmul f11,f12,f13
	ctx.f11.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmul f4,f5,f13
	ctx.f4.f64 = ctx.f5.f64 * ctx.f13.f64;
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// fmsub f3,f5,f0,f11
	ctx.f3.f64 = ctx.f5.f64 * ctx.f0.f64 - ctx.f11.f64;
	// stfdx f3,r19,r5
	PPC_STORE_U64(ctx.r19.u32 + ctx.r5.u32, ctx.f3.u64);
	// fmadd f2,f12,f0,f4
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f4.f64;
	// stfd f2,-16(r29)
	PPC_STORE_U64(ctx.r29.u32 + -16, ctx.f2.u64);
	// lfd f1,8(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f11,-8(r29)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r29.u32 + -8);
	// fmul f5,f11,f13
	ctx.f5.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmul f12,f1,f13
	ctx.f12.f64 = ctx.f1.f64 * ctx.f13.f64;
	// fmsub f3,f1,f0,f5
	ctx.f3.f64 = ctx.f1.f64 * ctx.f0.f64 - ctx.f5.f64;
	// stfd f3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.f3.u64);
	// fmadd f4,f11,f0,f12
	ctx.f4.f64 = ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64;
	// stfd f4,-8(r29)
	PPC_STORE_U64(ctx.r29.u32 + -8, ctx.f4.u64);
	// lfd f2,0(r29)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// fmul f1,f2,f13
	ctx.f1.f64 = ctx.f2.f64 * ctx.f13.f64;
	// lfdx f12,r10,r5
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r5.u32);
	// fmul f11,f12,f13
	ctx.f11.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmsub f5,f12,f0,f1
	ctx.f5.f64 = ctx.f12.f64 * ctx.f0.f64 - ctx.f1.f64;
	// stfdx f5,r10,r5
	PPC_STORE_U64(ctx.r10.u32 + ctx.r5.u32, ctx.f5.u64);
	// fmadd f4,f2,f0,f11
	ctx.f4.f64 = ctx.f2.f64 * ctx.f0.f64 + ctx.f11.f64;
	// stfd f4,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f4.u64);
loc_82BE8A34:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r28,r28,3
	ctx.r28.s64 = ctx.r28.s64 + 3;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x82be85f0
	if (ctx.cr6.lt) goto loc_82BE85F0;
loc_82BE8A5C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r18,r18,24
	ctx.r18.s64 = ctx.r18.s64 + 24;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// addi r19,r19,24
	ctx.r19.s64 = ctx.r19.s64 + 24;
	// addi r20,r20,-1
	ctx.r20.s64 = ctx.r20.s64 + -1;
	// addi r22,r22,32
	ctx.r22.s64 = ctx.r22.s64 + 32;
	// addi r21,r21,8
	ctx.r21.s64 = ctx.r21.s64 + 8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82be85c0
	if (ctx.cr6.lt) goto loc_82BE85C0;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// cmpwi cr6,r17,100
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 100, ctx.xer);
	// blt cr6,0x82be84f0
	if (ctx.cr6.lt) goto loc_82BE84F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
loc_82BE8A98:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE8AA0"))) PPC_WEAK_FUNC(sub_82BE8AA0);
PPC_FUNC_IMPL(__imp__sub_82BE8AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8AA8"))) PPC_WEAK_FUNC(sub_82BE8AA8);
PPC_FUNC_IMPL(__imp__sub_82BE8AA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8ABC"))) PPC_WEAK_FUNC(sub_82BE8ABC);
PPC_FUNC_IMPL(__imp__sub_82BE8ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE8AC0"))) PPC_WEAK_FUNC(sub_82BE8AC0);
PPC_FUNC_IMPL(__imp__sub_82BE8AC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8AC8"))) PPC_WEAK_FUNC(sub_82BE8AC8);
PPC_FUNC_IMPL(__imp__sub_82BE8AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f7,8(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8AFC"))) PPC_WEAK_FUNC(sub_82BE8AFC);
PPC_FUNC_IMPL(__imp__sub_82BE8AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE8B00"))) PPC_WEAK_FUNC(sub_82BE8B00);
PPC_FUNC_IMPL(__imp__sub_82BE8B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8B30"))) PPC_WEAK_FUNC(sub_82BE8B30);
PPC_FUNC_IMPL(__imp__sub_82BE8B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f8,20(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// stfs f6,24(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f5,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,28(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8B84"))) PPC_WEAK_FUNC(sub_82BE8B84);
PPC_FUNC_IMPL(__imp__sub_82BE8B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE8B88"))) PPC_WEAK_FUNC(sub_82BE8B88);
PPC_FUNC_IMPL(__imp__sub_82BE8B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f5,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f2,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f10,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// stfs f5,28(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f4,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// stfs f2,32(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8C1C"))) PPC_WEAK_FUNC(sub_82BE8C1C);
PPC_FUNC_IMPL(__imp__sub_82BE8C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE8C20"))) PPC_WEAK_FUNC(sub_82BE8C20);
PPC_FUNC_IMPL(__imp__sub_82BE8C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfs f5,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f4,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// lfs f2,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f1,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfs f7,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f6,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// lfs f4,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// stfs f5,28(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f3,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// stfs f2,32(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8CB4"))) PPC_WEAK_FUNC(sub_82BE8CB4);
PPC_FUNC_IMPL(__imp__sub_82BE8CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE8CB8"))) PPC_WEAK_FUNC(sub_82BE8CB8);
PPC_FUNC_IMPL(__imp__sub_82BE8CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f11,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f7,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f1
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// lfs f5,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f1
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// lfs f3,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f1
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f3,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// lfs f11,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f0,f1
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f7,f11,f1
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f6,12(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f4,16(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f2,20(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f7,32(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8D28"))) PPC_WEAK_FUNC(sub_82BE8D28);
PPC_FUNC_IMPL(__imp__sub_82BE8D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f4,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// lfs f1,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f3,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// lfs f12,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f7,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// lfs f3,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f6,f3
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f3.f64));
	// lfs f12,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f1,f12
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f5,8(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f2,12(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f4,24(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f10,32(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8DBC"))) PPC_WEAK_FUNC(sub_82BE8DBC);
PPC_FUNC_IMPL(__imp__sub_82BE8DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE8DC0"))) PPC_WEAK_FUNC(sub_82BE8DC0);
PPC_FUNC_IMPL(__imp__sub_82BE8DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f1,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f1.f64 = double(temp.f32);
	// beq cr6,0x82be8dd8
	if (ctx.cr6.eq) goto loc_82BE8DD8;
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
loc_82BE8DD8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be8dec
	if (ctx.cr6.eq) goto loc_82BE8DEC;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
loc_82BE8DEC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8E04"))) PPC_WEAK_FUNC(sub_82BE8E04);
PPC_FUNC_IMPL(__imp__sub_82BE8E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE8E08"))) PPC_WEAK_FUNC(sub_82BE8E08);
PPC_FUNC_IMPL(__imp__sub_82BE8E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmuls f13,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-18388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18388);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8E20"))) PPC_WEAK_FUNC(sub_82BE8E20);
PPC_FUNC_IMPL(__imp__sub_82BE8E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmuls f13,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-18388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18388);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8E3C"))) PPC_WEAK_FUNC(sub_82BE8E3C);
PPC_FUNC_IMPL(__imp__sub_82BE8E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE8E40"))) PPC_WEAK_FUNC(sub_82BE8E40);
PPC_FUNC_IMPL(__imp__sub_82BE8E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmuls f13,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-18388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18388);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fdivs f1,f2,f11
	ctx.f1.f64 = double(float(ctx.f2.f64 / ctx.f11.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8E5C"))) PPC_WEAK_FUNC(sub_82BE8E5C);
PPC_FUNC_IMPL(__imp__sub_82BE8E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE8E60"))) PPC_WEAK_FUNC(sub_82BE8E60);
PPC_FUNC_IMPL(__imp__sub_82BE8E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f1,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f1.f64 = double(temp.f32);
	// beq cr6,0x82be8e78
	if (ctx.cr6.eq) goto loc_82BE8E78;
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
loc_82BE8E78:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be8e8c
	if (ctx.cr6.eq) goto loc_82BE8E8C;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
loc_82BE8E8C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8EA4"))) PPC_WEAK_FUNC(sub_82BE8EA4);
PPC_FUNC_IMPL(__imp__sub_82BE8EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE8EA8"))) PPC_WEAK_FUNC(sub_82BE8EA8);
PPC_FUNC_IMPL(__imp__sub_82BE8EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82be8ec0
	if (ctx.cr6.eq) goto loc_82BE8EC0;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_82BE8EC0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be8ed4
	if (ctx.cr6.eq) goto loc_82BE8ED4;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82BE8ED4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be8ef0
	if (ctx.cr6.eq) goto loc_82BE8EF0;
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f1,f12,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// blr 
	return;
loc_82BE8EF0:
	// fmuls f1,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8EF8"))) PPC_WEAK_FUNC(sub_82BE8EF8);
PPC_FUNC_IMPL(__imp__sub_82BE8EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82be8f10
	if (ctx.cr6.eq) goto loc_82BE8F10;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_82BE8F10:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be8f24
	if (ctx.cr6.eq) goto loc_82BE8F24;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82BE8F24:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be8f40
	if (ctx.cr6.eq) goto loc_82BE8F40;
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fdivs f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 / ctx.f12.f64));
	// blr 
	return;
loc_82BE8F40:
	// fdivs f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8F48"))) PPC_WEAK_FUNC(sub_82BE8F48);
PPC_FUNC_IMPL(__imp__sub_82BE8F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82be8f60
	if (ctx.cr6.eq) goto loc_82BE8F60;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_82BE8F60:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be8f74
	if (ctx.cr6.eq) goto loc_82BE8F74;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82BE8F74:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// beq cr6,0x82be8f98
	if (ctx.cr6.eq) goto loc_82BE8F98;
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-18388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18388);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// blr 
	return;
loc_82BE8F98:
	// lfs f13,-18388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18388);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8FA4"))) PPC_WEAK_FUNC(sub_82BE8FA4);
PPC_FUNC_IMPL(__imp__sub_82BE8FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE8FA8"))) PPC_WEAK_FUNC(sub_82BE8FA8);
PPC_FUNC_IMPL(__imp__sub_82BE8FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82be8fc0
	if (ctx.cr6.eq) goto loc_82BE8FC0;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_82BE8FC0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be8fd4
	if (ctx.cr6.eq) goto loc_82BE8FD4;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82BE8FD4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// beq cr6,0x82be8ffc
	if (ctx.cr6.eq) goto loc_82BE8FFC;
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-18388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18388);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// blr 
	return;
loc_82BE8FFC:
	// fmuls f13,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f0,-18388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18388);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE900C"))) PPC_WEAK_FUNC(sub_82BE900C);
PPC_FUNC_IMPL(__imp__sub_82BE900C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE9010"))) PPC_WEAK_FUNC(sub_82BE9010);
PPC_FUNC_IMPL(__imp__sub_82BE9010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82be9028
	if (ctx.cr6.eq) goto loc_82BE9028;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_82BE9028:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be903c
	if (ctx.cr6.eq) goto loc_82BE903C;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82BE903C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// beq cr6,0x82be9064
	if (ctx.cr6.eq) goto loc_82BE9064;
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-18388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18388);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fdivs f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 / ctx.f11.f64));
	// blr 
	return;
loc_82BE9064:
	// lfs f13,-18388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18388);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE9074"))) PPC_WEAK_FUNC(sub_82BE9074);
PPC_FUNC_IMPL(__imp__sub_82BE9074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE9078"))) PPC_WEAK_FUNC(sub_82BE9078);
PPC_FUNC_IMPL(__imp__sub_82BE9078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f0,21152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f0,16160(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16160);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE909C"))) PPC_WEAK_FUNC(sub_82BE909C);
PPC_FUNC_IMPL(__imp__sub_82BE909C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE90A0"))) PPC_WEAK_FUNC(sub_82BE90A0);
PPC_FUNC_IMPL(__imp__sub_82BE90A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f0,21152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f0,16160(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16160);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f10,f11,f3
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmuls f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE90C8"))) PPC_WEAK_FUNC(sub_82BE90C8);
PPC_FUNC_IMPL(__imp__sub_82BE90C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f0,21152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f0,16160(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16160);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f1,f3,f10
	ctx.f1.f64 = double(float(ctx.f3.f64 / ctx.f10.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE90F0"))) PPC_WEAK_FUNC(sub_82BE90F0);
PPC_FUNC_IMPL(__imp__sub_82BE90F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fabs f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f0,-18032(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18032);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE910C"))) PPC_WEAK_FUNC(sub_82BE910C);
PPC_FUNC_IMPL(__imp__sub_82BE910C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE9110"))) PPC_WEAK_FUNC(sub_82BE9110);
PPC_FUNC_IMPL(__imp__sub_82BE9110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fabs f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f0,-18032(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18032);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f11,f12,f3
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE9130"))) PPC_WEAK_FUNC(sub_82BE9130);
PPC_FUNC_IMPL(__imp__sub_82BE9130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fabs f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f0,-18032(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18032);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fdivs f1,f3,f11
	ctx.f1.f64 = double(float(ctx.f3.f64 / ctx.f11.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE9150"))) PPC_WEAK_FUNC(sub_82BE9150);
PPC_FUNC_IMPL(__imp__sub_82BE9150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmuls f12,f4,f4
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f13,f3,f3
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmuls f11,f2,f2
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// lfs f0,-18392(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18392);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fadds f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fmuls f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f5,4(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f4,f7,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// stfs f4,8(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE9190"))) PPC_WEAK_FUNC(sub_82BE9190);
PPC_FUNC_IMPL(__imp__sub_82BE9190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmuls f0,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// beq cr6,0x82be91b4
	if (ctx.cr6.eq) goto loc_82BE91B4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-18396(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18396);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82be91bc
	goto loc_82BE91BC;
loc_82BE91B4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,15596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15596);
	ctx.f13.f64 = double(temp.f32);
loc_82BE91BC:
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE91D0"))) PPC_WEAK_FUNC(sub_82BE91D0);
PPC_FUNC_IMPL(__imp__sub_82BE91D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE921C"))) PPC_WEAK_FUNC(sub_82BE921C);
PPC_FUNC_IMPL(__imp__sub_82BE921C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE9220"))) PPC_WEAK_FUNC(sub_82BE9220);
PPC_FUNC_IMPL(__imp__sub_82BE9220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82BE9230:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82be9230
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BE9230;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f1,48(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE9264"))) PPC_WEAK_FUNC(sub_82BE9264);
PPC_FUNC_IMPL(__imp__sub_82BE9264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE9268"))) PPC_WEAK_FUNC(sub_82BE9268);
PPC_FUNC_IMPL(__imp__sub_82BE9268) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE926C"))) PPC_WEAK_FUNC(sub_82BE926C);
PPC_FUNC_IMPL(__imp__sub_82BE926C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE9270"))) PPC_WEAK_FUNC(sub_82BE9270);
PPC_FUNC_IMPL(__imp__sub_82BE9270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE92B0"))) PPC_WEAK_FUNC(sub_82BE92B0);
PPC_FUNC_IMPL(__imp__sub_82BE92B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE92FC"))) PPC_WEAK_FUNC(sub_82BE92FC);
PPC_FUNC_IMPL(__imp__sub_82BE92FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE9300"))) PPC_WEAK_FUNC(sub_82BE9300);
PPC_FUNC_IMPL(__imp__sub_82BE9300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,-28860
	ctx.r11.s64 = ctx.r11.s64 + -28860;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,-3584(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3584);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82be931c
	if (ctx.cr6.eq) goto loc_82BE931C;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_82BE931C:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be9330
	if (ctx.cr6.eq) goto loc_82BE9330;
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82BE9330:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be9344
	if (ctx.cr6.eq) goto loc_82BE9344;
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82BE9344:
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f12
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f10,f10
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f13,-17496(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17496);
	ctx.f13.f64 = double(temp.f32);
	// stfs f7,48(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fadds f5,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fadds f3,f8,f11
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmuls f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// stfs f2,32(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fmuls f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// stfs f1,0(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f13,f3,f4
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE93C8"))) PPC_WEAK_FUNC(sub_82BE93C8);
PPC_FUNC_IMPL(__imp__sub_82BE93C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6ad0
	ctx.lr = 0x82BE93D8;
	__savefpr_22(ctx, base);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f7,f13,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f5,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f13,f5
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f13,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f6,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f5,f13,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f27,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f27.f64 = double(temp.f32);
	// lfs f31,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// fmr f26,f6
	ctx.f26.f64 = ctx.f6.f64;
	// fmadds f13,f1,f8,f10
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f10.f64));
	// lfs f29,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f9,f6,f1,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f9.f64));
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f7,f6,f3,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f30,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f4,f3,f8,f4
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f2,f29,f8,f2
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f8.f64 + ctx.f2.f64));
	// lfs f24,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f24.f64 = double(temp.f32);
	// fmadds f0,f6,f29,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f1,f27,f1,f12
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f1.f64 + ctx.f12.f64));
	// lfs f12,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f27,f3,f11
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f3.f64 + ctx.f11.f64));
	// lfs f3,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f5,f27,f29,f5
	ctx.f5.f64 = double(float(ctx.f27.f64 * ctx.f29.f64 + ctx.f5.f64));
	// lfs f29,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f29.f64 = double(temp.f32);
	// fmr f25,f27
	ctx.f25.f64 = ctx.f27.f64;
	// lfs f27,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f13,f10,f31,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f9,f30,f10,f9
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmadds f7,f30,f28,f7
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f28.f64 + ctx.f7.f64));
	// fmr f22,f12
	ctx.f22.f64 = ctx.f12.f64;
	// fmadds f2,f24,f31,f2
	ctx.f2.f64 = double(float(ctx.f24.f64 * ctx.f31.f64 + ctx.f2.f64));
	// fmadds f10,f12,f10,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f1.f64));
	// fmadds f1,f12,f28,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 + ctx.f11.f64));
	// fmadds f12,f12,f24,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f24.f64 + ctx.f5.f64));
	// fmadds f4,f28,f31,f4
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f31.f64 + ctx.f4.f64));
	// fmuls f11,f26,f13
	ctx.f11.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// fmadds f0,f30,f24,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f24.f64 + ctx.f0.f64));
	// fmr f23,f30
	ctx.f23.f64 = ctx.f30.f64;
	// fmuls f5,f25,f13
	ctx.f5.f64 = double(float(ctx.f25.f64 * ctx.f13.f64));
	// fmuls f31,f26,f9
	ctx.f31.f64 = double(float(ctx.f26.f64 * ctx.f9.f64));
	// fmuls f30,f6,f7
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f28,f25,f9
	ctx.f28.f64 = double(float(ctx.f25.f64 * ctx.f9.f64));
	// fmuls f26,f26,f10
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f10.f64));
	// fmuls f25,f25,f10
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f10.f64));
	// fmuls f24,f6,f4
	ctx.f24.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmadds f11,f3,f2,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f11.f64));
	// fmuls f6,f6,f1
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmadds f5,f29,f2,f5
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f2.f64 + ctx.f5.f64));
	// fmadds f31,f3,f0,f31
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fmadds f30,f27,f0,f30
	ctx.f30.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 + ctx.f30.f64));
	// fmadds f0,f29,f0,f28
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f28.f64));
	// fmadds f3,f3,f12,f26
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f26.f64));
	// fmadds f2,f27,f2,f24
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f2.f64 + ctx.f24.f64));
	// fmadds f11,f23,f4,f11
	ctx.f11.f64 = double(float(ctx.f23.f64 * ctx.f4.f64 + ctx.f11.f64));
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmadds f6,f27,f12,f6
	ctx.f6.f64 = double(float(ctx.f27.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f12,f29,f12,f25
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 + ctx.f25.f64));
	// fmadds f5,f22,f4,f5
	ctx.f5.f64 = double(float(ctx.f22.f64 * ctx.f4.f64 + ctx.f5.f64));
	// stfs f5,8(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmadds f4,f23,f7,f31
	ctx.f4.f64 = double(float(ctx.f23.f64 * ctx.f7.f64 + ctx.f31.f64));
	// stfs f4,16(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmadds f11,f8,f9,f30
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f30.f64));
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmadds f9,f22,f7,f0
	ctx.f9.f64 = double(float(ctx.f22.f64 * ctx.f7.f64 + ctx.f0.f64));
	// fmadds f7,f8,f10,f6
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f6.f64));
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmadds f4,f8,f13,f2
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f2.f64));
	// stfs f4,0(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f5,f22,f1,f12
	ctx.f5.f64 = double(float(ctx.f22.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f5,32(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fmadds f6,f23,f1,f3
	ctx.f6.f64 = double(float(ctx.f23.f64 * ctx.f1.f64 + ctx.f3.f64));
	// stfs f6,28(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f7,24(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f3,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f4,f3,f1
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fmuls f2,f3,f2
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmadds f1,f11,f3,f5
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fmadds f12,f0,f12,f4
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f11,f0,f13,f2
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmadds f8,f0,f8,f1
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f1.f64));
	// stfs f8,36(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fmadds f6,f7,f9,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f12.f64));
	// stfs f6,44(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fmadds f5,f7,f10,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfs f5,40(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b1c
	ctx.lr = 0x82BE95A8;
	__restfpr_22(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE95B4"))) PPC_WEAK_FUNC(sub_82BE95B4);
PPC_FUNC_IMPL(__imp__sub_82BE95B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE95B8"))) PPC_WEAK_FUNC(sub_82BE95B8);
PPC_FUNC_IMPL(__imp__sub_82BE95B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6ab0
	ctx.lr = 0x82BE95C8;
	__savefpr_14(ctx, base);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82be95f8
	if (!ctx.cr6.eq) goto loc_82BE95F8;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82be95f8
	if (!ctx.cr6.eq) goto loc_82BE95F8;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be9930
	if (ctx.cr6.eq) goto loc_82BE9930;
loc_82BE95F8:
	// lfs f13,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fadds f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// lfs f10,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fadds f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fmr f12,f10
	ctx.f12.f64 = ctx.f10.f64;
	// stfs f6,-216(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lwz r10,-216(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fadds f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f5,-236(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -236, temp.u32);
	// fneg f9,f13
	ctx.f9.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f7,-240(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -240, temp.u32);
	// fneg f8,f12
	ctx.f8.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f9,-188(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// stfs f5,-208(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stfs f7,-212(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -212, temp.u32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f8,-168(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// bne cr6,0x82be9768
	if (!ctx.cr6.eq) goto loc_82BE9768;
	// lwz r10,-212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82be9768
	if (!ctx.cr6.eq) goto loc_82BE9768;
	// lwz r10,-208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82be9768
	if (!ctx.cr6.eq) goto loc_82BE9768;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f5,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f11,f10
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f3,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f28,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f28.f64 = double(temp.f32);
	// lfs f21,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f21.f64 = double(temp.f32);
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f9,f0
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f1,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f25,f10,f0
	ctx.f25.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f30,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f23,f8,f0
	ctx.f23.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f26,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f27,f13,f0
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f24,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f22,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f22.f64 = double(temp.f32);
	// fadds f20,f6,f7
	ctx.f20.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fadds f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fadds f4,f7,f4
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// fmadds f7,f11,f12,f31
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f31.f64));
	// fmadds f31,f10,f9,f29
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f29.f64));
	// fmadds f12,f13,f12,f25
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f25.f64));
	// fmadds f11,f11,f13,f23
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f23.f64));
	// fmadds f10,f8,f10,f27
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f27.f64));
	// fmadds f9,f8,f9,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fmuls f8,f20,f5
	ctx.f8.f64 = double(float(ctx.f20.f64 * ctx.f5.f64));
	// fmuls f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f4,f4,f5
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmuls f0,f7,f5
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f13,f31,f5
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f5.f64));
	// fmuls f7,f12,f5
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmuls f12,f11,f5
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f11,f9,f5
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fadds f9,f8,f3
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f8,f28,f6
	ctx.f8.f64 = double(float(ctx.f28.f64 + ctx.f6.f64));
	// stfs f8,16(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fadds f6,f21,f4
	ctx.f6.f64 = double(float(ctx.f21.f64 + ctx.f4.f64));
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fadds f5,f2,f0
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// stfs f5,4(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f4,f1,f13
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// stfs f4,8(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f2,f26,f7
	ctx.f2.f64 = double(float(ctx.f26.f64 + ctx.f7.f64));
	// stfs f2,20(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fadds f1,f24,f12
	ctx.f1.f64 = double(float(ctx.f24.f64 + ctx.f12.f64));
	// stfs f1,24(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fadds f3,f30,f10
	ctx.f3.f64 = double(float(ctx.f30.f64 + ctx.f10.f64));
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fadds f0,f22,f11
	ctx.f0.f64 = double(float(ctx.f22.f64 + ctx.f11.f64));
	// b 0x82be98fc
	goto loc_82BE98FC;
loc_82BE9768:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// fneg f4,f5
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fneg f3,f6
	ctx.f3.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lfs f20,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f20.f64 = double(temp.f32);
	// fneg f1,f7
	ctx.f1.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// stfs f20,-224(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// lfs f20,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f28,f13,f9
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f20,-220(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// fmuls f30,f8,f12
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f11,f10
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f25,f7,f0
	ctx.f25.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f22,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f19,f12,f0
	ctx.f19.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f22,-228(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -228, temp.u32);
	// fmuls f23,f5,f0
	ctx.f23.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f15,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f15.f64 = double(temp.f32);
	// fmuls f20,f13,f0
	ctx.f20.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f15,-232(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -232, temp.u32);
	// fmuls f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// lfs f2,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f16,f3,f6
	ctx.f16.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// lfs f24,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f22,f4,f0
	ctx.f22.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f31,-216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f14,f1,f7
	ctx.f14.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// lfs f29,-168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f21,f9,f0
	ctx.f21.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f27,-188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	ctx.f27.f64 = double(temp.f32);
	// fadds f15,f28,f30
	ctx.f15.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// lfs f18,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f18.f64 = double(temp.f32);
	// fmadds f25,f3,f4,f25
	ctx.f25.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f25.f64));
	// lfs f17,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f17.f64 = double(temp.f32);
	// fmadds f9,f10,f9,f19
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f19.f64));
	// fmadds f23,f1,f3,f23
	ctx.f23.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f23.f64));
	// fmadds f20,f8,f10,f20
	ctx.f20.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f20.f64));
	// fadds f28,f28,f26
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f26.f64));
	// fadds f19,f16,f5
	ctx.f19.f64 = double(float(ctx.f16.f64 + ctx.f5.f64));
	// fmadds f7,f6,f7,f22
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f22.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f5,f5,f14
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f14.f64));
	// fsubs f9,f9,f25
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f25.f64));
	// fsubs f25,f20,f23
	ctx.f25.f64 = double(float(ctx.f20.f64 - ctx.f23.f64));
	// fmuls f22,f11,f0
	ctx.f22.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsubs f28,f28,f19
	ctx.f28.f64 = double(float(ctx.f28.f64 - ctx.f19.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,-240(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -240, temp.u32);
	// fmadds f21,f11,f12,f21
	ctx.f21.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f21.f64));
	// lfs f0,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f13,f12,f10
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f1,f4,f6
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f6.f64));
	// fmadds f6,f2,f0,f3
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f3.f64));
	// lfs f2,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f3,f11,f13,f8
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fsubs f5,f15,f5
	ctx.f5.f64 = double(float(ctx.f15.f64 - ctx.f5.f64));
	// fadds f4,f16,f14
	ctx.f4.f64 = double(float(ctx.f16.f64 + ctx.f14.f64));
	// fmuls f13,f9,f24
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f24.f64));
	// fadds f30,f30,f26
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f26.f64));
	// fmadds f1,f31,f0,f2
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fmuls f11,f25,f24
	ctx.f11.f64 = double(float(ctx.f25.f64 * ctx.f24.f64));
	// fmuls f9,f28,f24
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f24.f64));
	// fsubs f7,f21,f7
	ctx.f7.f64 = double(float(ctx.f21.f64 - ctx.f7.f64));
	// fmadds f0,f29,f27,f22
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f27.f64 + ctx.f22.f64));
	// fmuls f8,f5,f24
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f24.f64));
	// fadds f2,f18,f13
	ctx.f2.f64 = double(float(ctx.f18.f64 + ctx.f13.f64));
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f5,f30,f4
	ctx.f5.f64 = double(float(ctx.f30.f64 - ctx.f4.f64));
	// lfs f2,-232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f4,f3,f1
	ctx.f4.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fsubs f6,f12,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fadds f1,f17,f11
	ctx.f1.f64 = double(float(ctx.f17.f64 + ctx.f11.f64));
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fadds f1,f2,f9
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// lfs f2,-228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	ctx.f2.f64 = double(temp.f32);
	// stfs f1,16(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmuls f7,f7,f24
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f24.f64));
	// fsubs f3,f0,f10
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fmuls f0,f6,f24
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f24.f64));
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f5,f24
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f24.f64));
	// lfs f5,-220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f4,f24
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f24.f64));
	// fmuls f11,f3,f24
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f24.f64));
	// lfs f3,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fadds f1,f8,f2
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// lfs f2,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f2.f64 = double(temp.f32);
	// stfs f1,0(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f1,f2,f7
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f1,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fadds f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f4,20(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fadds f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fadds f2,f10,f12
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f2,24(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fadds f0,f3,f11
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
loc_82BE98FC:
	// stfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82BE9930:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6afc
	ctx.lr = 0x82BE9938;
	__restfpr_14(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE9944"))) PPC_WEAK_FUNC(sub_82BE9944);
PPC_FUNC_IMPL(__imp__sub_82BE9944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE9948"))) PPC_WEAK_FUNC(sub_82BE9948);
PPC_FUNC_IMPL(__imp__sub_82BE9948) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x82be93c8
	ctx.lr = 0x82BE995C;
	sub_82BE93C8(ctx, base);
	// addi r4,r4,36
	ctx.r4.s64 = ctx.r4.s64 + 36;
	// bl 0x82be95b8
	ctx.lr = 0x82BE9964;
	sub_82BE95B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE9974"))) PPC_WEAK_FUNC(sub_82BE9974);
PPC_FUNC_IMPL(__imp__sub_82BE9974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE9978"))) PPC_WEAK_FUNC(sub_82BE9978);
PPC_FUNC_IMPL(__imp__sub_82BE9978) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x82be93c8
	ctx.lr = 0x82BE998C;
	sub_82BE93C8(ctx, base);
	// addi r4,r4,36
	ctx.r4.s64 = ctx.r4.s64 + 36;
	// bl 0x82be95b8
	ctx.lr = 0x82BE9994;
	sub_82BE95B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE99A4"))) PPC_WEAK_FUNC(sub_82BE99A4);
PPC_FUNC_IMPL(__imp__sub_82BE99A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE99A8"))) PPC_WEAK_FUNC(sub_82BE99A8);
PPC_FUNC_IMPL(__imp__sub_82BE99A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f7,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f11,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f7,f1
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f5,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f9,f1
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// lfs f3,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f1
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f3,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// lfs f11,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f0,f1
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f7,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f11,f1
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f3,f7,f1
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f6,12(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f4,16(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f2,20(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f5,32(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f3,48(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE9A24"))) PPC_WEAK_FUNC(sub_82BE9A24);
PPC_FUNC_IMPL(__imp__sub_82BE9A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE9A28"))) PPC_WEAK_FUNC(sub_82BE9A28);
PPC_FUNC_IMPL(__imp__sub_82BE9A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f13,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// lfs f12,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f6,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f4,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// lfs f10,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f1,f6,f4
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// lfs f8,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fadds f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// lfs f5,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f2,f8,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f13,f5,f4
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f0,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f1,f9
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// fdivs f12,f0,f3
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f3.f64));
	// fadds f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// fadds f9,f13,f7
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fmuls f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f7,40(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f8,36(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fmuls f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f6,44(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f3,48(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f5
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f4
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f4,8(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f3,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f2
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// stfs f2,12(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f9,16(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f8,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f7,20(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f6,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f5,24(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f4,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// stfs f3,28(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f2,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f2,f11
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// stfs f1,32(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE9B30"))) PPC_WEAK_FUNC(sub_82BE9B30);
PPC_FUNC_IMPL(__imp__sub_82BE9B30) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be9300
	ctx.lr = 0x82BE9B4C;
	sub_82BE9300(ctx, base);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82be9b6c
	if (ctx.cr6.eq) goto loc_82BE9B6C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be93c8
	ctx.lr = 0x82BE9B60;
	sub_82BE93C8(ctx, base);
	// addi r4,r6,36
	ctx.r4.s64 = ctx.r6.s64 + 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be95b8
	ctx.lr = 0x82BE9B6C;
	sub_82BE95B8(ctx, base);
loc_82BE9B6C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82be9a28
	ctx.lr = 0x82BE9B78;
	sub_82BE9A28(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE9B88"))) PPC_WEAK_FUNC(sub_82BE9B88);
PPC_FUNC_IMPL(__imp__sub_82BE9B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82be95b8
	ctx.lr = 0x82BE9BC0;
	sub_82BE95B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE9BD0"))) PPC_WEAK_FUNC(sub_82BE9BD0);
PPC_FUNC_IMPL(__imp__sub_82BE9BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmuls f11,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f13,-18388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18388);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,15596(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15596);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,48(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fmuls f8,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f6,16(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE9C38"))) PPC_WEAK_FUNC(sub_82BE9C38);
PPC_FUNC_IMPL(__imp__sub_82BE9C38) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x82be93c8
	ctx.lr = 0x82BE9C4C;
	sub_82BE93C8(ctx, base);
	// addi r4,r4,36
	ctx.r4.s64 = ctx.r4.s64 + 36;
	// bl 0x82be95b8
	ctx.lr = 0x82BE9C54;
	sub_82BE95B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE9C64"))) PPC_WEAK_FUNC(sub_82BE9C64);
PPC_FUNC_IMPL(__imp__sub_82BE9C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE9C68"))) PPC_WEAK_FUNC(sub_82BE9C68);
PPC_FUNC_IMPL(__imp__sub_82BE9C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmuls f12,f2,f2
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f13,-18388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18388);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f12,15596(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15596);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f10,f0,f2
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f9,f10,f2
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// beq cr6,0x82be9d04
	if (ctx.cr6.eq) goto loc_82BE9D04;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be93c8
	ctx.lr = 0x82BE9CF8;
	sub_82BE93C8(ctx, base);
	// addi r4,r6,36
	ctx.r4.s64 = ctx.r6.s64 + 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be95b8
	ctx.lr = 0x82BE9D04;
	sub_82BE95B8(ctx, base);
loc_82BE9D04:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x82be9d8c
	if (ctx.cr6.eq) goto loc_82BE9D8C;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f31
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// lfs f1,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f3,f31
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f1,f31
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f13,f31
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f5,f9,f31
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f6,92(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
loc_82BE9D8C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82be9a28
	ctx.lr = 0x82BE9D98;
	sub_82BE9A28(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82BE9DAC"))) PPC_WEAK_FUNC(sub_82BE9DAC);
PPC_FUNC_IMPL(__imp__sub_82BE9DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE9DB0"))) PPC_WEAK_FUNC(sub_82BE9DB0);
PPC_FUNC_IMPL(__imp__sub_82BE9DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// fmuls f10,f2,f2
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// fmuls f9,f1,f1
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r8,r10,32540
	ctx.r8.s64 = ctx.r10.s64 + 32540;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lfs f0,21152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21152);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// fmuls f8,f2,f0
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f0,32540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32540);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-10804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -10804);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// lfs f12,-16380(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16380);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-18392(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -18392);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f10,-28844(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -28844);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-15120(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f6,f8,f1
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmadds f5,f9,f13,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmuls f4,f6,f1
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f3,48(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fmuls f2,f3,f1
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fmuls f13,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f12,f2,f1
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f11,32(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fmuls f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE9E54"))) PPC_WEAK_FUNC(sub_82BE9E54);
PPC_FUNC_IMPL(__imp__sub_82BE9E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE9E58"))) PPC_WEAK_FUNC(sub_82BE9E58);
PPC_FUNC_IMPL(__imp__sub_82BE9E58) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x82be93c8
	ctx.lr = 0x82BE9E6C;
	sub_82BE93C8(ctx, base);
	// addi r4,r4,36
	ctx.r4.s64 = ctx.r4.s64 + 36;
	// bl 0x82be95b8
	ctx.lr = 0x82BE9E74;
	sub_82BE95B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE9E84"))) PPC_WEAK_FUNC(sub_82BE9E84);
PPC_FUNC_IMPL(__imp__sub_82BE9E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE9E88"))) PPC_WEAK_FUNC(sub_82BE9E88);
PPC_FUNC_IMPL(__imp__sub_82BE9E88) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f2.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// bl 0x82be9db0
	ctx.lr = 0x82BE9EB8;
	sub_82BE9DB0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82be9ed8
	if (ctx.cr6.eq) goto loc_82BE9ED8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be93c8
	ctx.lr = 0x82BE9ECC;
	sub_82BE93C8(ctx, base);
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be95b8
	ctx.lr = 0x82BE9ED8;
	sub_82BE95B8(ctx, base);
loc_82BE9ED8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be9a28
	ctx.lr = 0x82BE9EE4;
	sub_82BE9A28(ctx, base);
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

__attribute__((alias("__imp__sub_82BE9EFC"))) PPC_WEAK_FUNC(sub_82BE9EFC);
PPC_FUNC_IMPL(__imp__sub_82BE9EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE9F00"))) PPC_WEAK_FUNC(sub_82BE9F00);
PPC_FUNC_IMPL(__imp__sub_82BE9F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f2,-12(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f3,-8(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82be9f24
	if (ctx.cr6.eq) goto loc_82BE9F24;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
loc_82BE9F24:
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be9f34
	if (ctx.cr6.eq) goto loc_82BE9F34;
	// fmuls f0,f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
loc_82BE9F34:
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be9f44
	if (ctx.cr6.eq) goto loc_82BE9F44;
	// fmuls f0,f0,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
loc_82BE9F44:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f12,f2,f3
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// fmuls f11,f1,f3
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// fmuls f10,f1,f2
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f13,-18388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18388);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,15596(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15596);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f9,48(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// stfs f7,0(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// stfs f6,16(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmuls f5,f10,f8
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// stfs f5,32(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE9FB4"))) PPC_WEAK_FUNC(sub_82BE9FB4);
PPC_FUNC_IMPL(__imp__sub_82BE9FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE9FB8"))) PPC_WEAK_FUNC(sub_82BE9FB8);
PPC_FUNC_IMPL(__imp__sub_82BE9FB8) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x82be93c8
	ctx.lr = 0x82BE9FCC;
	sub_82BE93C8(ctx, base);
	// addi r4,r4,36
	ctx.r4.s64 = ctx.r4.s64 + 36;
	// bl 0x82be95b8
	ctx.lr = 0x82BE9FD4;
	sub_82BE95B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE9FE4"))) PPC_WEAK_FUNC(sub_82BE9FE4);
PPC_FUNC_IMPL(__imp__sub_82BE9FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BE9FE8"))) PPC_WEAK_FUNC(sub_82BE9FE8);
PPC_FUNC_IMPL(__imp__sub_82BE9FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// bl 0x82be9f00
	ctx.lr = 0x82BEA014;
	sub_82BE9F00(ctx, base);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bea034
	if (ctx.cr6.eq) goto loc_82BEA034;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be93c8
	ctx.lr = 0x82BEA028;
	sub_82BE93C8(ctx, base);
	// addi r4,r8,36
	ctx.r4.s64 = ctx.r8.s64 + 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be95b8
	ctx.lr = 0x82BEA034;
	sub_82BE95B8(ctx, base);
loc_82BEA034:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x82bea0bc
	if (ctx.cr6.eq) goto loc_82BEA0BC;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f31
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// lfs f1,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f3,f31
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f1,f31
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f13,f31
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f5,f9,f31
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f6,92(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
loc_82BEA0BC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82be9a28
	ctx.lr = 0x82BEA0C8;
	sub_82BE9A28(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82BEA0DC"))) PPC_WEAK_FUNC(sub_82BEA0DC);
PPC_FUNC_IMPL(__imp__sub_82BEA0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA0E0"))) PPC_WEAK_FUNC(sub_82BEA0E0);
PPC_FUNC_IMPL(__imp__sub_82BEA0E0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x833b7804
	ctx.lr = 0x82BEA104;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bea114
	if (ctx.cr0.lt) goto loc_82BEA114;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x82bea11c
	goto loc_82BEA11C;
loc_82BEA114:
	// bl 0x82beb948
	ctx.lr = 0x82BEA118;
	sub_82BEB948(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEA11C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEA12C"))) PPC_WEAK_FUNC(sub_82BEA12C);
PPC_FUNC_IMPL(__imp__sub_82BEA12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA130"))) PPC_WEAK_FUNC(sub_82BEA130);
PPC_FUNC_IMPL(__imp__sub_82BEA130) {
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
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r11,-13952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13952);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bea15c
	if (ctx.cr6.eq) goto loc_82BEA15C;
	// rlwinm r5,r5,0,3,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
loc_82BEA15C:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82bea178
	if (ctx.cr6.eq) goto loc_82BEA178;
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82bea180
	goto loc_82BEA180;
loc_82BEA178:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
loc_82BEA180:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833b7814
	ctx.lr = 0x82BEA18C;
	__imp__MmAllocatePhysicalMemoryEx(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82bea19c
	if (!ctx.cr0.eq) goto loc_82BEA19C;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82beb9a0
	ctx.lr = 0x82BEA19C;
	sub_82BEB9A0(ctx, base);
loc_82BEA19C:
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

__attribute__((alias("__imp__sub_82BEA1B4"))) PPC_WEAK_FUNC(sub_82BEA1B4);
PPC_FUNC_IMPL(__imp__sub_82BEA1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA1B8"))) PPC_WEAK_FUNC(sub_82BEA1B8);
PPC_FUNC_IMPL(__imp__sub_82BEA1B8) {
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
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwz r10,-13952(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13952);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bea1e4
	if (ctx.cr6.eq) goto loc_82BEA1E4;
	// rlwinm r11,r11,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
loc_82BEA1E4:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833b7814
	ctx.lr = 0x82BEA1FC;
	__imp__MmAllocatePhysicalMemoryEx(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82bea20c
	if (!ctx.cr0.eq) goto loc_82BEA20C;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82beb9a0
	ctx.lr = 0x82BEA20C;
	sub_82BEB9A0(ctx, base);
loc_82BEA20C:
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

__attribute__((alias("__imp__sub_82BEA224"))) PPC_WEAK_FUNC(sub_82BEA224);
PPC_FUNC_IMPL(__imp__sub_82BEA224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA228"))) PPC_WEAK_FUNC(sub_82BEA228);
PPC_FUNC_IMPL(__imp__sub_82BEA228) {
	PPC_FUNC_PROLOGUE();
	// b 0x833b7824
	__imp__MmQueryAllocationSize(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEA22C"))) PPC_WEAK_FUNC(sub_82BEA22C);
PPC_FUNC_IMPL(__imp__sub_82BEA22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA230"))) PPC_WEAK_FUNC(sub_82BEA230);
PPC_FUNC_IMPL(__imp__sub_82BEA230) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x833b7834
	__imp__MmSetAddressProtect(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEA23C"))) PPC_WEAK_FUNC(sub_82BEA23C);
PPC_FUNC_IMPL(__imp__sub_82BEA23C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEA240"))) PPC_WEAK_FUNC(sub_82BEA240);
PPC_FUNC_IMPL(__imp__sub_82BEA240) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x833b7844
	__imp__MmFreePhysicalMemory(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEA24C"))) PPC_WEAK_FUNC(sub_82BEA24C);
PPC_FUNC_IMPL(__imp__sub_82BEA24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA250"))) PPC_WEAK_FUNC(sub_82BEA250);
PPC_FUNC_IMPL(__imp__sub_82BEA250) {
	PPC_FUNC_PROLOGUE();
	// b 0x833b7854
	__imp__MmQueryAddressProtect(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEA254"))) PPC_WEAK_FUNC(sub_82BEA254);
PPC_FUNC_IMPL(__imp__sub_82BEA254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA258"))) PPC_WEAK_FUNC(sub_82BEA258);
PPC_FUNC_IMPL(__imp__sub_82BEA258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// stw r3,-13952(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13952, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEA264"))) PPC_WEAK_FUNC(sub_82BEA264);
PPC_FUNC_IMPL(__imp__sub_82BEA264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA268"))) PPC_WEAK_FUNC(sub_82BEA268);
PPC_FUNC_IMPL(__imp__sub_82BEA268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lwz r3,-13952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13952);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEA274"))) PPC_WEAK_FUNC(sub_82BEA274);
PPC_FUNC_IMPL(__imp__sub_82BEA274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA278"))) PPC_WEAK_FUNC(sub_82BEA278);
PPC_FUNC_IMPL(__imp__sub_82BEA278) {
	PPC_FUNC_PROLOGUE();
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// rotlwi. r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82bea288
	if (!ctx.cr0.eq) goto loc_82BEA288;
	// mftb r11
	ctx.r11.u64 = __rdtsc();
loc_82BEA288:
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEA294"))) PPC_WEAK_FUNC(sub_82BEA294);
PPC_FUNC_IMPL(__imp__sub_82BEA294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA298"))) PPC_WEAK_FUNC(sub_82BEA298);
PPC_FUNC_IMPL(__imp__sub_82BEA298) {
	PPC_FUNC_PROLOGUE();
	// b 0x833b7864
	__imp__DbgBreakPoint(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEA29C"))) PPC_WEAK_FUNC(sub_82BEA29C);
PPC_FUNC_IMPL(__imp__sub_82BEA29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA2A0"))) PPC_WEAK_FUNC(sub_82BEA2A0);
PPC_FUNC_IMPL(__imp__sub_82BEA2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82BEA2A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// beq cr6,0x82bea320
	if (ctx.cr6.eq) goto loc_82BEA320;
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// beq cr6,0x82bea318
	if (ctx.cr6.eq) goto loc_82BEA318;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// beq cr6,0x82bea310
	if (ctx.cr6.eq) goto loc_82BEA310;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// beq cr6,0x82bea308
	if (ctx.cr6.eq) goto loc_82BEA308;
	// cmplwi cr6,r27,5
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 5, ctx.xer);
	// bne cr6,0x82bea2f4
	if (!ctx.cr6.eq) goto loc_82BEA2F4;
	// rlwinm. r11,r28,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,4
	ctx.r30.s64 = 4;
	// bne 0x82bea324
	if (!ctx.cr0.eq) goto loc_82BEA324;
loc_82BEA2F4:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x82beb948
	ctx.lr = 0x82BEA300;
	sub_82BEB948(ctx, base);
loc_82BEA300:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82bea48c
	goto loc_82BEA48C;
loc_82BEA308:
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x82bea324
	goto loc_82BEA324;
loc_82BEA310:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82bea324
	goto loc_82BEA324;
loc_82BEA318:
	// li r30,5
	ctx.r30.s64 = 5;
	// b 0x82bea324
	goto loc_82BEA324;
loc_82BEA320:
	// li r30,2
	ctx.r30.s64 = 2;
loc_82BEA324:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x833b7874
	ctx.lr = 0x82BEA330;
	__imp__RtlInitAnsiString(ctx, base);
	// lhz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82bea350
	if (!ctx.cr6.gt) goto loc_82BEA350;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x82bea354
	if (ctx.cr6.eq) goto loc_82BEA354;
loc_82BEA350:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82BEA354:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwinm r9,r31,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8000000;
	// rlwimi r11,r31,28,4,4
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 28) & 0x8000000) | (ctx.r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// rlwinm r8,r31,0,3,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10000000;
	// rlwinm r11,r11,31,3,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1C000000;
	// rlwinm r10,r31,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000000;
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// li r7,-3
	ctx.r7.s64 = -3;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// not r9,r31
	ctx.r9.u64 = ~ctx.r31.u64;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,7,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x20;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm. r8,r31,0,5,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// rlwinm r11,r11,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// beq 0x82bea3bc
	if (ctx.cr0.eq) goto loc_82BEA3BC;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// oris r28,r28,1
	ctx.r28.u64 = ctx.r28.u64 | 65536;
loc_82BEA3BC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bea3c8
	if (!ctx.cr6.eq) goto loc_82BEA3C8;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_82BEA3C8:
	// lis r6,-31909
	ctx.r6.s64 = -2091188224;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// oris r4,r28,16
	ctx.r4.u64 = ctx.r28.u64 | 1048576;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// andi. r8,r31,32679
	ctx.r8.u64 = ctx.r31.u64 & 32679;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r11,7168(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7168);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// ori r4,r4,128
	ctx.r4.u64 = ctx.r4.u64 | 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BEA404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82bea454
	if (!ctx.cr0.lt) goto loc_82BEA454;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beb948
	ctx.lr = 0x82BEA414;
	sub_82BEB948(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,53
	ctx.r11.u64 = ctx.r11.u64 | 53;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82bea42c
	if (!ctx.cr6.eq) goto loc_82BEA42C;
	// li r3,80
	ctx.r3.s64 = 80;
	// b 0x82bea44c
	goto loc_82BEA44C;
loc_82BEA42C:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,186
	ctx.r11.u64 = ctx.r11.u64 | 186;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82bea300
	if (!ctx.cr6.eq) goto loc_82BEA300;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne cr6,0x82bea44c
	if (!ctx.cr6.eq) goto loc_82BEA44C;
	// li r3,5
	ctx.r3.s64 = 5;
loc_82BEA44C:
	// bl 0x82beb9a0
	ctx.lr = 0x82BEA450;
	sub_82BEB9A0(ctx, base);
	// b 0x82bea300
	goto loc_82BEA300;
loc_82BEA454:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// bne cr6,0x82bea468
	if (!ctx.cr6.eq) goto loc_82BEA468;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82bea478
	if (ctx.cr6.eq) goto loc_82BEA478;
loc_82BEA468:
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// bne cr6,0x82bea480
	if (!ctx.cr6.eq) goto loc_82BEA480;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82bea480
	if (!ctx.cr6.eq) goto loc_82BEA480;
loc_82BEA478:
	// li r3,183
	ctx.r3.s64 = 183;
	// b 0x82bea484
	goto loc_82BEA484;
loc_82BEA480:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEA484:
	// bl 0x82beb9a0
	ctx.lr = 0x82BEA488;
	sub_82BEB9A0(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82BEA48C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEA494"))) PPC_WEAK_FUNC(sub_82BEA494);
PPC_FUNC_IMPL(__imp__sub_82BEA494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA498"))) PPC_WEAK_FUNC(sub_82BEA498);
PPC_FUNC_IMPL(__imp__sub_82BEA498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b7884
	ctx.lr = 0x82BEA4D0;
	__imp__vswprintf(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEA4E0"))) PPC_WEAK_FUNC(sub_82BEA4E0);
PPC_FUNC_IMPL(__imp__sub_82BEA4E0) {
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
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,7168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7168);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BEA500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bea510
	if (ctx.cr0.lt) goto loc_82BEA510;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bea518
	goto loc_82BEA518;
loc_82BEA510:
	// bl 0x82beb948
	ctx.lr = 0x82BEA514;
	sub_82BEB948(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEA518:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEA528"))) PPC_WEAK_FUNC(sub_82BEA528);
PPC_FUNC_IMPL(__imp__sub_82BEA528) {
	PPC_FUNC_PROLOGUE();
	// li r5,16
	ctx.r5.s64 = 16;
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,32
	ctx.r6.s64 = 32;
	// stvx128 v63,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r7,48
	ctx.r7.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// li r9,80
	ctx.r9.s64 = 80;
	// li r10,96
	ctx.r10.s64 = 96;
	// lvx128 v62,r4,r5
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,112
	ctx.r11.s64 = 112;
	// lvx128 v61,r4,r6
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r4,r7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r4,r8
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r4,r9
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v57,r4,r10
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v56,r4,r11
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r3,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r3,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v56,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEA588"))) PPC_WEAK_FUNC(sub_82BEA588);
PPC_FUNC_IMPL(__imp__sub_82BEA588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82BEA590;
	__savegprlr_28(ctx, base);
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r5,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82bea5c0
	if (!ctx.cr6.eq) goto loc_82BEA5C0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bea67c
	if (ctx.cr6.eq) goto loc_82BEA67C;
loc_82BEA5AC:
	// dcbzl r0,r11
	memset(base + ((ctx.r11.u32) & ~127), 0, 128);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bne 0x82bea5ac
	if (!ctx.cr0.eq) goto loc_82BEA5AC;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82BEA5C0:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// blt cr6,0x82bea5d0
	if (ctx.cr6.lt) goto loc_82BEA5D0;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82BEA5D0:
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// vspltisb v0,4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x4)));
	// lvsl v13,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lvsl v12,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslb v11,v12,v0
	ctx.v11.u8[0] = ctx.v12.u8[0] << (ctx.v0.u8[0] & 0x7);
	ctx.v11.u8[1] = ctx.v12.u8[1] << (ctx.v0.u8[1] & 0x7);
	ctx.v11.u8[2] = ctx.v12.u8[2] << (ctx.v0.u8[2] & 0x7);
	ctx.v11.u8[3] = ctx.v12.u8[3] << (ctx.v0.u8[3] & 0x7);
	ctx.v11.u8[4] = ctx.v12.u8[4] << (ctx.v0.u8[4] & 0x7);
	ctx.v11.u8[5] = ctx.v12.u8[5] << (ctx.v0.u8[5] & 0x7);
	ctx.v11.u8[6] = ctx.v12.u8[6] << (ctx.v0.u8[6] & 0x7);
	ctx.v11.u8[7] = ctx.v12.u8[7] << (ctx.v0.u8[7] & 0x7);
	ctx.v11.u8[8] = ctx.v12.u8[8] << (ctx.v0.u8[8] & 0x7);
	ctx.v11.u8[9] = ctx.v12.u8[9] << (ctx.v0.u8[9] & 0x7);
	ctx.v11.u8[10] = ctx.v12.u8[10] << (ctx.v0.u8[10] & 0x7);
	ctx.v11.u8[11] = ctx.v12.u8[11] << (ctx.v0.u8[11] & 0x7);
	ctx.v11.u8[12] = ctx.v12.u8[12] << (ctx.v0.u8[12] & 0x7);
	ctx.v11.u8[13] = ctx.v12.u8[13] << (ctx.v0.u8[13] & 0x7);
	ctx.v11.u8[14] = ctx.v12.u8[14] << (ctx.v0.u8[14] & 0x7);
	ctx.v11.u8[15] = ctx.v12.u8[15] << (ctx.v0.u8[15] & 0x7);
	// vor v10,v13,v11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vspltb v0,v10,0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_set1_epi8(char(0xF))));
	// beq cr6,0x82bea60c
	if (ctx.cr6.eq) goto loc_82BEA60C;
loc_82BEA5F8:
	// rlwinm r8,r11,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// dcbzl r8,r3
	memset(base + ((ctx.r8.u32 + ctx.r3.u32) & ~127), 0, 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bea5f8
	if (ctx.cr6.lt) goto loc_82BEA5F8;
loc_82BEA60C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bea67c
	if (ctx.cr6.eq) goto loc_82BEA67C;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// li r30,-32
	ctx.r30.s64 = -32;
	// li r31,-16
	ctx.r31.s64 = -16;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r8,80
	ctx.r8.s64 = 80;
loc_82BEA638:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bea650
	if (!ctx.cr6.lt) goto loc_82BEA650;
	// addi r29,r11,-32
	ctx.r29.s64 = ctx.r11.s64 + -32;
	// li r28,128
	ctx.r28.s64 = 128;
	// dcbzl r28,r29
	memset(base + ((ctx.r28.u32 + ctx.r29.u32) & ~127), 0, 128);
loc_82BEA650:
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stvx128 v0,r11,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// blt cr6,0x82bea638
	if (ctx.cr6.lt) goto loc_82BEA638;
loc_82BEA67C:
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEA680"))) PPC_WEAK_FUNC(sub_82BEA680);
PPC_FUNC_IMPL(__imp__sub_82BEA680) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82BEA688;
	__savegprlr_26(ctx, base);
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x82bea698
	if (ctx.cr6.lt) goto loc_82BEA698;
	// li r10,1024
	ctx.r10.s64 = 1024;
loc_82BEA698:
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// blt cr6,0x82bea6a8
	if (ctx.cr6.lt) goto loc_82BEA6A8;
	// li r9,128
	ctx.r9.s64 = 128;
loc_82BEA6A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bea6c4
	if (ctx.cr6.eq) goto loc_82BEA6C4;
loc_82BEA6B4:
	// dcbt r11,r4
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bea6b4
	if (ctx.cr6.lt) goto loc_82BEA6B4;
loc_82BEA6C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bea6e0
	if (ctx.cr6.eq) goto loc_82BEA6E0;
loc_82BEA6D0:
	// dcbzl r11,r3
	memset(base + ((ctx.r11.u32 + ctx.r3.u32) & ~127), 0, 128);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bea6d0
	if (ctx.cr6.lt) goto loc_82BEA6D0;
loc_82BEA6E0:
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// blt cr6,0x82bea790
	if (ctx.cr6.lt) goto loc_82BEA790;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// subf r28,r4,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r4.s64;
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// li r4,-32
	ctx.r4.s64 = -32;
	// li r29,-16
	ctx.r29.s64 = -16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r30,80
	ctx.r30.s64 = 80;
	// li r31,-48
	ctx.r31.s64 = -48;
loc_82BEA714:
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// ble cr6,0x82bea728
	if (!ctx.cr6.gt) goto loc_82BEA728;
	// addi r27,r11,-32
	ctx.r27.s64 = ctx.r11.s64 + -32;
	// li r26,1024
	ctx.r26.s64 = 1024;
	// dcbt r26,r27
loc_82BEA728:
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// ble cr6,0x82bea73c
	if (!ctx.cr6.gt) goto loc_82BEA73C;
	// addi r27,r10,-48
	ctx.r27.s64 = ctx.r10.s64 + -48;
	// li r26,128
	ctx.r26.s64 = 128;
	// dcbzl r26,r27
	memset(base + ((ctx.r26.u32 + ctx.r27.u32) & ~127), 0, 128);
loc_82BEA73C:
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r11,r29
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// lvx128 v60,r11,r6
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r7
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r11,r8
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v57,r11,r9
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v56,r11,r30
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r28,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// stvx128 v62,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v56,r10,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bge cr6,0x82bea714
	if (!ctx.cr6.lt) goto loc_82BEA714;
loc_82BEA790:
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEA794"))) PPC_WEAK_FUNC(sub_82BEA794);
PPC_FUNC_IMPL(__imp__sub_82BEA794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA798"))) PPC_WEAK_FUNC(sub_82BEA798);
PPC_FUNC_IMPL(__imp__sub_82BEA798) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bea680
	sub_82BEA680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEA79C"))) PPC_WEAK_FUNC(sub_82BEA79C);
PPC_FUNC_IMPL(__imp__sub_82BEA79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA7A0"))) PPC_WEAK_FUNC(sub_82BEA7A0);
PPC_FUNC_IMPL(__imp__sub_82BEA7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82BEA7A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// neg r11,r27
	ctx.r11.s64 = -ctx.r27.s64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// clrlwi r30,r11,25
	ctx.r30.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r31,256
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 256, ctx.xer);
	// bge cr6,0x82bea7d8
	if (!ctx.cr6.lt) goto loc_82BEA7D8;
	// bl 0x82cb1160
	ctx.lr = 0x82BEA7D0;
	sub_82CB1160(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82BEA7D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bea7fc
	if (ctx.cr6.eq) goto loc_82BEA7FC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82BEA7F0;
	sub_82CB1160(ctx, base);
	// add r28,r30,r27
	ctx.r28.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// subf r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
loc_82BEA7FC:
	// rlwinm r30,r31,0,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFF80;
	// clrlwi r11,r29,28
	ctx.r11.u64 = ctx.r29.u32 & 0xF;
	// clrlwi r31,r31,25
	ctx.r31.u64 = ctx.r31.u32 & 0x7F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x82bea824
	if (ctx.cr6.eq) goto loc_82BEA824;
	// bl 0x82bebcd4
	ctx.lr = 0x82BEA820;
	sub_82BEBCD4(ctx, base);
	// b 0x82bea828
	goto loc_82BEA828;
loc_82BEA824:
	// bl 0x82beb9b0
	ctx.lr = 0x82BEA828;
	sub_82BEB9B0(ctx, base);
loc_82BEA828:
	// add r3,r30,r28
	ctx.r3.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r4,r30,r29
	ctx.r4.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bea840
	if (ctx.cr6.eq) goto loc_82BEA840;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82BEA840;
	sub_82CB1160(ctx, base);
loc_82BEA840:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEA84C"))) PPC_WEAK_FUNC(sub_82BEA84C);
PPC_FUNC_IMPL(__imp__sub_82BEA84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA850"))) PPC_WEAK_FUNC(sub_82BEA850);
PPC_FUNC_IMPL(__imp__sub_82BEA850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82BEA858;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// neg r11,r27
	ctx.r11.s64 = -ctx.r27.s64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// clrlwi r30,r11,25
	ctx.r30.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r31,256
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 256, ctx.xer);
	// bge cr6,0x82bea888
	if (!ctx.cr6.lt) goto loc_82BEA888;
	// bl 0x82cb1160
	ctx.lr = 0x82BEA880;
	sub_82CB1160(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82BEA888:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bea8ac
	if (ctx.cr6.eq) goto loc_82BEA8AC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82BEA8A0;
	sub_82CB1160(ctx, base);
	// add r28,r30,r27
	ctx.r28.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// subf r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
loc_82BEA8AC:
	// rlwinm r30,r31,0,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFF80;
	// clrlwi r11,r29,28
	ctx.r11.u64 = ctx.r29.u32 & 0xF;
	// clrlwi r31,r31,25
	ctx.r31.u64 = ctx.r31.u32 & 0x7F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x82bea8d4
	if (ctx.cr6.eq) goto loc_82BEA8D4;
	// bl 0x82bec530
	ctx.lr = 0x82BEA8D0;
	sub_82BEC530(ctx, base);
	// b 0x82bea8d8
	goto loc_82BEA8D8;
loc_82BEA8D4:
	// bl 0x82bec1a0
	ctx.lr = 0x82BEA8D8;
	sub_82BEC1A0(ctx, base);
loc_82BEA8D8:
	// add r3,r30,r28
	ctx.r3.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r4,r30,r29
	ctx.r4.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bea8f0
	if (ctx.cr6.eq) goto loc_82BEA8F0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82BEA8F0;
	sub_82CB1160(ctx, base);
loc_82BEA8F0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEA8FC"))) PPC_WEAK_FUNC(sub_82BEA8FC);
PPC_FUNC_IMPL(__imp__sub_82BEA8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA900"))) PPC_WEAK_FUNC(sub_82BEA900);
PPC_FUNC_IMPL(__imp__sub_82BEA900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82BEA908;
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
	// cmplwi cr6,r30,256
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 256, ctx.xer);
	// bge cr6,0x82bea92c
	if (!ctx.cr6.lt) goto loc_82BEA92C;
	// bl 0x82cb1160
	ctx.lr = 0x82BEA924;
	sub_82CB1160(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82BEA92C:
	// lis r11,24575
	ctx.r11.s64 = 1610547200;
	// addis r10,r31,24576
	ctx.r10.s64 = ctx.r31.s64 + 1610612736;
	// ori r9,r11,65534
	ctx.r9.u64 = ctx.r11.u64 | 65534;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82bea96c
	if (ctx.cr6.gt) goto loc_82BEA96C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b7854
	ctx.lr = 0x82BEA948;
	__imp__MmQueryAddressProtect(ctx, base);
	// rlwinm r11,r3,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bea96c
	if (ctx.cr6.eq) goto loc_82BEA96C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea7a0
	ctx.lr = 0x82BEA964;
	sub_82BEA7A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82BEA96C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bea850
	ctx.lr = 0x82BEA97C;
	sub_82BEA850(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEA984"))) PPC_WEAK_FUNC(sub_82BEA984);
PPC_FUNC_IMPL(__imp__sub_82BEA984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEA988"))) PPC_WEAK_FUNC(sub_82BEA988);
PPC_FUNC_IMPL(__imp__sub_82BEA988) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEA990"))) PPC_WEAK_FUNC(sub_82BEA990);
PPC_FUNC_IMPL(__imp__sub_82BEA990) {
	PPC_FUNC_PROLOGUE();
	// stvx128 v1,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEA998"))) PPC_WEAK_FUNC(sub_82BEA998);
PPC_FUNC_IMPL(__imp__sub_82BEA998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82BEA9A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// bge cr6,0x82beaa58
	if (!ctx.cr6.lt) goto loc_82BEAA58;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// blt cr6,0x82bea9e4
	if (ctx.cr6.lt) goto loc_82BEA9E4;
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bea9e4
	if (!ctx.cr6.eq) goto loc_82BEA9E4;
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r30,r26,8
	ctx.r30.s64 = ctx.r26.s64 + 8;
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// addi r29,r29,-8
	ctx.r29.s64 = ctx.r29.s64 + -8;
	// std r11,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r11.u64);
loc_82BEA9E4:
	// clrlwi r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82beaa24
	if (!ctx.cr6.eq) goto loc_82BEAA24;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x82beaa24
	if (ctx.cr6.lt) goto loc_82BEAA24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r29,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r28,r29,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x82cb15e8
	ctx.lr = 0x82BEAA0C;
	sub_82CB15E8(ctx, base);
	// rlwinm r11,r29,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFC;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82BEAA18:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bne 0x82beaa18
	if (!ctx.cr0.eq) goto loc_82BEAA18;
loc_82BEAA24:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82beac6c
	if (ctx.cr6.eq) goto loc_82BEAC6C;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,7104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
loc_82BEAA34:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// subf. r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x82beaa34
	if (!ctx.cr0.eq) goto loc_82BEAA34;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82BEAA58:
	// neg r11,r26
	ctx.r11.s64 = -ctx.r26.s64;
	// cmplwi cr6,r29,1024
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1024, ctx.xer);
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r8,r9,29
	ctx.r8.u64 = ctx.r9.u32 & 0x7;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// blt cr6,0x82beaa78
	if (ctx.cr6.lt) goto loc_82BEAA78;
	// li r9,1024
	ctx.r9.s64 = 1024;
loc_82BEAA78:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82beaa94
	if (ctx.cr6.eq) goto loc_82BEAA94;
loc_82BEAA84:
	// dcbt r11,r4
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82beaa84
	if (ctx.cr6.lt) goto loc_82BEAA84;
loc_82BEAA94:
	// li r27,15
	ctx.r27.s64 = 15;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82beaac0
	if (ctx.cr6.eq) goto loc_82BEAAC0;
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r31,r10,r4
	ctx.r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvx128 v62,r4,r27
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// subf r29,r10,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r10.s64;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r10,r26
	ctx.r30.u64 = ctx.r10.u64 + ctx.r26.u64;
	// vperm128 v63,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v63,r0,r26
	ea = ctx.r26.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
loc_82BEAAC0:
	// rlwinm r11,r29,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82beaad0
	if (!ctx.cr6.lt) goto loc_82BEAAD0;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82BEAAD0:
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// rlwinm r28,r10,0,0,24
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r28,128
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 128, ctx.xer);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// blt cr6,0x82beaaec
	if (ctx.cr6.lt) goto loc_82BEAAEC;
	// li r10,128
	ctx.r10.s64 = 128;
loc_82BEAAEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82beab0c
	if (ctx.cr6.eq) goto loc_82BEAB0C;
	// addi r9,r30,127
	ctx.r9.s64 = ctx.r30.s64 + 127;
loc_82BEAAFC:
	// dcbzl r11,r9
	memset(base + ((ctx.r11.u32 + ctx.r9.u32) & ~127), 0, 128);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82beaafc
	if (ctx.cr6.lt) goto loc_82BEAAFC;
loc_82BEAB0C:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvsl v0,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82beab44
	if (ctx.cr6.eq) goto loc_82BEAB44;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82BEAB24:
	// lvx128 v63,r0,r31
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lvx128 v62,r31,r27
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// vperm128 v62,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v62,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x82beab24
	if (!ctx.cr0.eq) goto loc_82BEAB24;
loc_82BEAB44:
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r10,r31,28
	ctx.r10.u64 = ctx.r31.u32 & 0xF;
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82beabf4
	if (!ctx.cr6.eq) goto loc_82BEABF4;
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 128, ctx.xer);
	// blt cr6,0x82beac18
	if (ctx.cr6.lt) goto loc_82BEAC18;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// li r9,80
	ctx.r9.s64 = 80;
	// li r10,96
	ctx.r10.s64 = 96;
	// li r11,112
	ctx.r11.s64 = 112;
loc_82BEAB7C:
	// cmplwi cr6,r29,1024
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1024, ctx.xer);
	// ble cr6,0x82beab8c
	if (!ctx.cr6.gt) goto loc_82BEAB8C;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// dcbt r4,r31
loc_82BEAB8C:
	// cmplwi cr6,r29,256
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 256, ctx.xer);
	// ble cr6,0x82beab9c
	if (!ctx.cr6.gt) goto loc_82BEAB9C;
	// li r4,128
	ctx.r4.s64 = 128;
	// dcbzl r4,r30
	memset(base + ((ctx.r4.u32 + ctx.r30.u32) & ~127), 0, 128);
loc_82BEAB9C:
	// addi r29,r29,-128
	ctx.r29.s64 = ctx.r29.s64 + -128;
	// lvx128 v61,r0,r31
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r31,r5
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r31,r6
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 128, ctx.xer);
	// lvx128 v58,r31,r7
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v57,r31,r8
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v56,r31,r9
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v55,r31,r10
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v54,r31,r11
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// stvx128 v61,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r30,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r30,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r30,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r30,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v56,r30,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v55,r30,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r30,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// bge cr6,0x82beab7c
	if (!ctx.cr6.lt) goto loc_82BEAB7C;
	// b 0x82beac18
	goto loc_82BEAC18;
loc_82BEABF4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82beca50
	ctx.lr = 0x82BEAC04;
	sub_82BECA50(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
	// subf r29,r28,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r28.s64;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82BEAC18:
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// blt cr6,0x82beac48
	if (ctx.cr6.lt) goto loc_82BEAC48;
	// rlwinm r11,r29,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFF;
loc_82BEAC24:
	// lvx128 v63,r0,r31
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lvx128 v62,r31,r27
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -16;
	// vperm128 v53,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// stvx128 v53,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x82beac24
	if (!ctx.cr0.eq) goto loc_82BEAC24;
loc_82BEAC48:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82beac6c
	if (ctx.cr6.eq) goto loc_82BEAC6C;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lvx128 v52,r0,r31
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,-1
	ctx.r10.s64 = -1;
	// lvsl v0,r31,r29
	temp.u32 = ctx.r31.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v51,r11,r10
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v50,v52,v51,v0
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvrx128 v50,r30,r29
	ea = ctx.r30.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v50.u8[i]);
loc_82BEAC6C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEAC78"))) PPC_WEAK_FUNC(sub_82BEAC78);
PPC_FUNC_IMPL(__imp__sub_82BEAC78) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bea998
	sub_82BEA998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEAC7C"))) PPC_WEAK_FUNC(sub_82BEAC7C);
PPC_FUNC_IMPL(__imp__sub_82BEAC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEAC80"))) PPC_WEAK_FUNC(sub_82BEAC80);
PPC_FUNC_IMPL(__imp__sub_82BEAC80) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,65001
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65001, ctx.xer);
	// bne cr6,0x82beacb8
	if (!ctx.cr6.eq) goto loc_82BEACB8;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82becb10
	ctx.lr = 0x82BEACB4;
	sub_82BECB10(ctx, base);
	// b 0x82bead40
	goto loc_82BEAD40;
loc_82BEACB8:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82beace8
	if (!ctx.cr6.eq) goto loc_82BEACE8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BEACC4:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82beacc4
	if (!ctx.cr6.eq) goto loc_82BEACC4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// b 0x82beacec
	goto loc_82BEACEC;
loc_82BEACE8:
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82BEACEC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82beacfc
	if (!ctx.cr6.eq) goto loc_82BEACFC;
loc_82BEACF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82bead40
	goto loc_82BEAD40;
loc_82BEACFC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82bead34
	if (ctx.cr6.lt) goto loc_82BEAD34;
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82bead34
	if (ctx.cr6.lt) goto loc_82BEAD34;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x833b78a4
	ctx.lr = 0x82BEAD24;
	__imp__RtlMultiByteToUnicodeN(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82beacf4
	if (!ctx.cr0.lt) goto loc_82BEACF4;
	// bl 0x833b7894
	ctx.lr = 0x82BEAD30;
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x82bead38
	goto loc_82BEAD38;
loc_82BEAD34:
	// li r3,122
	ctx.r3.s64 = 122;
loc_82BEAD38:
	// bl 0x82beb9a0
	ctx.lr = 0x82BEAD3C;
	sub_82BEB9A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEAD40:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82BEAD54"))) PPC_WEAK_FUNC(sub_82BEAD54);
PPC_FUNC_IMPL(__imp__sub_82BEAD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEAD58"))) PPC_WEAK_FUNC(sub_82BEAD58);
PPC_FUNC_IMPL(__imp__sub_82BEAD58) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82becd08
	ctx.lr = 0x82BEAD8C;
	sub_82BECD08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82beade8
	if (!ctx.cr0.eq) goto loc_82BEADE8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82beaddc
	if (ctx.cr6.eq) goto loc_82BEADDC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82beadd4
	if (ctx.cr6.eq) goto loc_82BEADD4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BEADAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82beadec
	if (ctx.cr0.eq) goto loc_82BEADEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82beadac
	if (ctx.cr6.eq) goto loc_82BEADAC;
	// b 0x82beadec
	goto loc_82BEADEC;
loc_82BEADD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82beadec
	goto loc_82BEADEC;
loc_82BEADDC:
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82beadec
	goto loc_82BEADEC;
loc_82BEADE8:
	// addi r3,r3,-2
	ctx.r3.s64 = ctx.r3.s64 + -2;
loc_82BEADEC:
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

__attribute__((alias("__imp__sub_82BEAE04"))) PPC_WEAK_FUNC(sub_82BEAE04);
PPC_FUNC_IMPL(__imp__sub_82BEAE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEAE08"))) PPC_WEAK_FUNC(sub_82BEAE08);
PPC_FUNC_IMPL(__imp__sub_82BEAE08) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82becd08
	ctx.lr = 0x82BEAE3C;
	sub_82BECD08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82beae78
	if (!ctx.cr0.eq) goto loc_82BEAE78;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82beae6c
	if (ctx.cr6.eq) goto loc_82BEAE6C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82beae64
	if (ctx.cr6.eq) goto loc_82BEAE64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82BEAE60;
	sub_82CB1690(ctx, base);
	// b 0x82beae7c
	goto loc_82BEAE7C;
loc_82BEAE64:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82beae7c
	goto loc_82BEAE7C;
loc_82BEAE6C:
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82beae7c
	goto loc_82BEAE7C;
loc_82BEAE78:
	// addi r3,r3,-2
	ctx.r3.s64 = ctx.r3.s64 + -2;
loc_82BEAE7C:
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

__attribute__((alias("__imp__sub_82BEAE94"))) PPC_WEAK_FUNC(sub_82BEAE94);
PPC_FUNC_IMPL(__imp__sub_82BEAE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEAE98"))) PPC_WEAK_FUNC(sub_82BEAE98);
PPC_FUNC_IMPL(__imp__sub_82BEAE98) {
	PPC_FUNC_PROLOGUE();
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82BEAE9C:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne 0x82beae9c
	if (!ctx.cr0.eq) goto loc_82BEAE9C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEAEB4"))) PPC_WEAK_FUNC(sub_82BEAEB4);
PPC_FUNC_IMPL(__imp__sub_82BEAEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEAEB8"))) PPC_WEAK_FUNC(sub_82BEAEB8);
PPC_FUNC_IMPL(__imp__sub_82BEAEB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_82BEAEC8:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82beaee4
	if (ctx.cr0.eq) goto loc_82BEAEE4;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82beaec8
	if (!ctx.cr0.eq) goto loc_82BEAEC8;
loc_82BEAEE4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82beaef8
	if (ctx.cr6.eq) goto loc_82BEAEF8;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
loc_82BEAEF8:
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEAF00"))) PPC_WEAK_FUNC(sub_82BEAF00);
PPC_FUNC_IMPL(__imp__sub_82BEAF00) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82BEAF04:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82beaf04
	if (!ctx.cr6.eq) goto loc_82BEAF04;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82BEAF18:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82beaf18
	if (!ctx.cr6.eq) goto loc_82BEAF18;
	// blr 
	return;
}

