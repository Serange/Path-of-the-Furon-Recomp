#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827AEB08"))) PPC_WEAK_FUNC(sub_827AEB08);
PPC_FUNC_IMPL(__imp__sub_827AEB08) {
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
	// bl 0x82385010
	ctx.lr = 0x827AEB28;
	sub_82385010(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x823845f8
	ctx.lr = 0x827AEB34;
	sub_823845F8(ctx, base);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82730ba0
	ctx.lr = 0x827AEB40;
	sub_82730BA0(ctx, base);
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

__attribute__((alias("__imp__sub_827AEB58"))) PPC_WEAK_FUNC(sub_827AEB58);
PPC_FUNC_IMPL(__imp__sub_827AEB58) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x822959a8
	ctx.lr = 0x827AEB70;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827aeb8c
	if (ctx.cr6.eq) goto loc_827AEB8C;
	// bl 0x827b3b60
	ctx.lr = 0x827AEB7C;
	sub_827B3B60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827AEB8C:
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

__attribute__((alias("__imp__sub_827AEBA0"))) PPC_WEAK_FUNC(sub_827AEBA0);
PPC_FUNC_IMPL(__imp__sub_827AEBA0) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x822959a8
	ctx.lr = 0x827AEBC0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827aebe4
	if (ctx.cr6.eq) goto loc_827AEBE4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b3c08
	ctx.lr = 0x827AEBD0;
	sub_827B3C08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827AEBE4:
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

__attribute__((alias("__imp__sub_827AEBFC"))) PPC_WEAK_FUNC(sub_827AEBFC);
PPC_FUNC_IMPL(__imp__sub_827AEBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AEC00"))) PPC_WEAK_FUNC(sub_827AEC00);
PPC_FUNC_IMPL(__imp__sub_827AEC00) {
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827AEC28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827aec38
	if (ctx.cr6.eq) goto loc_827AEC38;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x827aec58
	if (!ctx.cr6.eq) goto loc_827AEC58;
loc_827AEC38:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827AEC4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x827aec5c
	if (!ctx.cr6.eq) goto loc_827AEC5C;
loc_827AEC58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827AEC5C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_827AEC70"))) PPC_WEAK_FUNC(sub_827AEC70);
PPC_FUNC_IMPL(__imp__sub_827AEC70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AEC74"))) PPC_WEAK_FUNC(sub_827AEC74);
PPC_FUNC_IMPL(__imp__sub_827AEC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AEC78"))) PPC_WEAK_FUNC(sub_827AEC78);
PPC_FUNC_IMPL(__imp__sub_827AEC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827AEC80;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82385010
	ctx.lr = 0x827AEC90;
	sub_82385010(ctx, base);
	// addi r29,r30,80
	ctx.r29.s64 = ctx.r30.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AECA0;
	sub_823845F8(ctx, base);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AECAC;
	sub_823845F8(ctx, base);
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AECB8;
	sub_823845F8(ctx, base);
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d3978
	ctx.lr = 0x827AECC4;
	sub_827D3978(ctx, base);
	// addi r4,r30,132
	ctx.r4.s64 = ctx.r30.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AECD0;
	sub_823845F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,395
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 395, ctx.xer);
	// bge cr6,0x827aecf0
	if (!ctx.cr6.lt) goto loc_827AECF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AECF0;
	sub_823845F8(ctx, base);
loc_827AECF0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,448
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 448, ctx.xer);
	// blt cr6,0x827aed2c
	if (ctx.cr6.lt) goto loc_827AED2C;
	// addi r4,r30,136
	ctx.r4.s64 = ctx.r30.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AED08;
	sub_823845F8(ctx, base);
	// addi r4,r30,140
	ctx.r4.s64 = ctx.r30.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AED14;
	sub_823845F8(ctx, base);
	// addi r4,r30,144
	ctx.r4.s64 = ctx.r30.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AED20;
	sub_823845F8(ctx, base);
	// addi r4,r30,148
	ctx.r4.s64 = ctx.r30.s64 + 148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AED2C;
	sub_823845F8(ctx, base);
loc_827AED2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AED34"))) PPC_WEAK_FUNC(sub_827AED34);
PPC_FUNC_IMPL(__imp__sub_827AED34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AED38"))) PPC_WEAK_FUNC(sub_827AED38);
PPC_FUNC_IMPL(__imp__sub_827AED38) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822959a8
	ctx.lr = 0x827AED50;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827aedd0
	if (ctx.cr6.eq) goto loc_827AEDD0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r8,r10,-18820
	ctx.r8.s64 = ctx.r10.s64 + -18820;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// addi r4,r9,20084
	ctx.r4.s64 = ctx.r9.s64 + 20084;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// addi r10,r5,20124
	ctx.r10.s64 = ctx.r5.s64 + 20124;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// sth r11,82(r3)
	PPC_STORE_U16(ctx.r3.u32 + 82, ctx.r11.u16);
	// sth r11,86(r3)
	PPC_STORE_U16(ctx.r3.u32 + 86, ctx.r11.u16);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827AEDD0:
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

__attribute__((alias("__imp__sub_827AEDE4"))) PPC_WEAK_FUNC(sub_827AEDE4);
PPC_FUNC_IMPL(__imp__sub_827AEDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AEDE8"))) PPC_WEAK_FUNC(sub_827AEDE8);
PPC_FUNC_IMPL(__imp__sub_827AEDE8) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822959a8
	ctx.lr = 0x827AEE08;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827aee2c
	if (ctx.cr6.eq) goto loc_827AEE2C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b4240
	ctx.lr = 0x827AEE18;
	sub_827B4240(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827AEE2C:
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

__attribute__((alias("__imp__sub_827AEE44"))) PPC_WEAK_FUNC(sub_827AEE44);
PPC_FUNC_IMPL(__imp__sub_827AEE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AEE48"))) PPC_WEAK_FUNC(sub_827AEE48);
PPC_FUNC_IMPL(__imp__sub_827AEE48) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827AEE78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827aee88
	if (ctx.cr6.eq) goto loc_827AEE88;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x827aeeb8
	if (!ctx.cr6.eq) goto loc_827AEEB8;
loc_827AEE88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827AEE9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x827aeeb8
	if (ctx.cr6.eq) goto loc_827AEEB8;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827aeebc
	if (!ctx.cr6.eq) goto loc_827AEEBC;
loc_827AEEB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827AEEBC:
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

__attribute__((alias("__imp__sub_827AEED4"))) PPC_WEAK_FUNC(sub_827AEED4);
PPC_FUNC_IMPL(__imp__sub_827AEED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AEED8"))) PPC_WEAK_FUNC(sub_827AEED8);
PPC_FUNC_IMPL(__imp__sub_827AEED8) {
	PPC_FUNC_PROLOGUE();
	// b 0x827139b8
	sub_827139B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AEEDC"))) PPC_WEAK_FUNC(sub_827AEEDC);
PPC_FUNC_IMPL(__imp__sub_827AEEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AEEE0"))) PPC_WEAK_FUNC(sub_827AEEE0);
PPC_FUNC_IMPL(__imp__sub_827AEEE0) {
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
	// bl 0x82385010
	ctx.lr = 0x827AEF00;
	sub_82385010(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x823845f8
	ctx.lr = 0x827AEF0C;
	sub_823845F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// bl 0x823845f8
	ctx.lr = 0x827AEF18;
	sub_823845F8(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82730ba0
	ctx.lr = 0x827AEF24;
	sub_82730BA0(ctx, base);
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

__attribute__((alias("__imp__sub_827AEF3C"))) PPC_WEAK_FUNC(sub_827AEF3C);
PPC_FUNC_IMPL(__imp__sub_827AEF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AEF40"))) PPC_WEAK_FUNC(sub_827AEF40);
PPC_FUNC_IMPL(__imp__sub_827AEF40) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,156
	ctx.r3.s64 = 156;
	// bl 0x822959a8
	ctx.lr = 0x827AEF58;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827aef74
	if (ctx.cr6.eq) goto loc_827AEF74;
	// bl 0x827b4340
	ctx.lr = 0x827AEF64;
	sub_827B4340(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827AEF74:
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

__attribute__((alias("__imp__sub_827AEF88"))) PPC_WEAK_FUNC(sub_827AEF88);
PPC_FUNC_IMPL(__imp__sub_827AEF88) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,156
	ctx.r3.s64 = 156;
	// bl 0x822959a8
	ctx.lr = 0x827AEFA8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827aefcc
	if (ctx.cr6.eq) goto loc_827AEFCC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b43f0
	ctx.lr = 0x827AEFB8;
	sub_827B43F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827AEFCC:
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

__attribute__((alias("__imp__sub_827AEFE4"))) PPC_WEAK_FUNC(sub_827AEFE4);
PPC_FUNC_IMPL(__imp__sub_827AEFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AEFE8"))) PPC_WEAK_FUNC(sub_827AEFE8);
PPC_FUNC_IMPL(__imp__sub_827AEFE8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827AF018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827af028
	if (ctx.cr6.eq) goto loc_827AF028;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x827af058
	if (!ctx.cr6.eq) goto loc_827AF058;
loc_827AF028:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827AF03C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x827af058
	if (ctx.cr6.eq) goto loc_827AF058;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827af05c
	if (!ctx.cr6.eq) goto loc_827AF05C;
loc_827AF058:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827AF05C:
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

__attribute__((alias("__imp__sub_827AF074"))) PPC_WEAK_FUNC(sub_827AF074);
PPC_FUNC_IMPL(__imp__sub_827AF074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AF078"))) PPC_WEAK_FUNC(sub_827AF078);
PPC_FUNC_IMPL(__imp__sub_827AF078) {
	PPC_FUNC_PROLOGUE();
	// b 0x827139b8
	sub_827139B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AF07C"))) PPC_WEAK_FUNC(sub_827AF07C);
PPC_FUNC_IMPL(__imp__sub_827AF07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AF080"))) PPC_WEAK_FUNC(sub_827AF080);
PPC_FUNC_IMPL(__imp__sub_827AF080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827AF088;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82385010
	ctx.lr = 0x827AF098;
	sub_82385010(ctx, base);
	// addi r29,r30,80
	ctx.r29.s64 = ctx.r30.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AF0A8;
	sub_823845F8(ctx, base);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AF0B4;
	sub_823845F8(ctx, base);
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AF0C0;
	sub_823845F8(ctx, base);
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AF0CC;
	sub_823845F8(ctx, base);
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d3978
	ctx.lr = 0x827AF0D8;
	sub_827D3978(ctx, base);
	// addi r4,r30,136
	ctx.r4.s64 = ctx.r30.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AF0E4;
	sub_823845F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,395
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 395, ctx.xer);
	// bge cr6,0x827af104
	if (!ctx.cr6.lt) goto loc_827AF104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AF104;
	sub_823845F8(ctx, base);
loc_827AF104:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,448
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 448, ctx.xer);
	// blt cr6,0x827af140
	if (ctx.cr6.lt) goto loc_827AF140;
	// addi r4,r30,140
	ctx.r4.s64 = ctx.r30.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AF11C;
	sub_823845F8(ctx, base);
	// addi r4,r30,144
	ctx.r4.s64 = ctx.r30.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AF128;
	sub_823845F8(ctx, base);
	// addi r4,r30,148
	ctx.r4.s64 = ctx.r30.s64 + 148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AF134;
	sub_823845F8(ctx, base);
	// addi r4,r30,152
	ctx.r4.s64 = ctx.r30.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AF140;
	sub_823845F8(ctx, base);
loc_827AF140:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AF148"))) PPC_WEAK_FUNC(sub_827AF148);
PPC_FUNC_IMPL(__imp__sub_827AF148) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x822959a8
	ctx.lr = 0x827AF160;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827af1dc
	if (ctx.cr6.eq) goto loc_827AF1DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r8,r10,-18820
	ctx.r8.s64 = ctx.r10.s64 + -18820;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// addi r4,r9,20172
	ctx.r4.s64 = ctx.r9.s64 + 20172;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// addi r10,r5,20212
	ctx.r10.s64 = ctx.r5.s64 + 20212;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// sth r11,82(r3)
	PPC_STORE_U16(ctx.r3.u32 + 82, ctx.r11.u16);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827AF1DC:
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

__attribute__((alias("__imp__sub_827AF1F0"))) PPC_WEAK_FUNC(sub_827AF1F0);
PPC_FUNC_IMPL(__imp__sub_827AF1F0) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x822959a8
	ctx.lr = 0x827AF210;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827af234
	if (ctx.cr6.eq) goto loc_827AF234;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b4a40
	ctx.lr = 0x827AF220;
	sub_827B4A40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827AF234:
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

__attribute__((alias("__imp__sub_827AF24C"))) PPC_WEAK_FUNC(sub_827AF24C);
PPC_FUNC_IMPL(__imp__sub_827AF24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AF250"))) PPC_WEAK_FUNC(sub_827AF250);
PPC_FUNC_IMPL(__imp__sub_827AF250) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827AF280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827af290
	if (ctx.cr6.eq) goto loc_827AF290;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x827af2c0
	if (!ctx.cr6.eq) goto loc_827AF2C0;
loc_827AF290:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827AF2A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x827af2c0
	if (ctx.cr6.eq) goto loc_827AF2C0;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827af2c4
	if (!ctx.cr6.eq) goto loc_827AF2C4;
loc_827AF2C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827AF2C4:
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

__attribute__((alias("__imp__sub_827AF2DC"))) PPC_WEAK_FUNC(sub_827AF2DC);
PPC_FUNC_IMPL(__imp__sub_827AF2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AF2E0"))) PPC_WEAK_FUNC(sub_827AF2E0);
PPC_FUNC_IMPL(__imp__sub_827AF2E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82713b50
	sub_82713B50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AF2E4"))) PPC_WEAK_FUNC(sub_827AF2E4);
PPC_FUNC_IMPL(__imp__sub_827AF2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AF2E8"))) PPC_WEAK_FUNC(sub_827AF2E8);
PPC_FUNC_IMPL(__imp__sub_827AF2E8) {
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
	// bl 0x82385010
	ctx.lr = 0x827AF308;
	sub_82385010(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x823845f8
	ctx.lr = 0x827AF314;
	sub_823845F8(ctx, base);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82730ba0
	ctx.lr = 0x827AF320;
	sub_82730BA0(ctx, base);
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

__attribute__((alias("__imp__sub_827AF338"))) PPC_WEAK_FUNC(sub_827AF338);
PPC_FUNC_IMPL(__imp__sub_827AF338) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x822959a8
	ctx.lr = 0x827AF350;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827af36c
	if (ctx.cr6.eq) goto loc_827AF36C;
	// bl 0x827b4b28
	ctx.lr = 0x827AF35C;
	sub_827B4B28(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827AF36C:
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

__attribute__((alias("__imp__sub_827AF380"))) PPC_WEAK_FUNC(sub_827AF380);
PPC_FUNC_IMPL(__imp__sub_827AF380) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x822959a8
	ctx.lr = 0x827AF3A0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827af3c4
	if (ctx.cr6.eq) goto loc_827AF3C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b4bd0
	ctx.lr = 0x827AF3B0;
	sub_827B4BD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827AF3C4:
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

__attribute__((alias("__imp__sub_827AF3DC"))) PPC_WEAK_FUNC(sub_827AF3DC);
PPC_FUNC_IMPL(__imp__sub_827AF3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AF3E0"))) PPC_WEAK_FUNC(sub_827AF3E0);
PPC_FUNC_IMPL(__imp__sub_827AF3E0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827AF410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827af420
	if (ctx.cr6.eq) goto loc_827AF420;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x827af450
	if (!ctx.cr6.eq) goto loc_827AF450;
loc_827AF420:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827AF434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x827af450
	if (ctx.cr6.eq) goto loc_827AF450;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827af454
	if (!ctx.cr6.eq) goto loc_827AF454;
loc_827AF450:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827AF454:
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

__attribute__((alias("__imp__sub_827AF46C"))) PPC_WEAK_FUNC(sub_827AF46C);
PPC_FUNC_IMPL(__imp__sub_827AF46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AF470"))) PPC_WEAK_FUNC(sub_827AF470);
PPC_FUNC_IMPL(__imp__sub_827AF470) {
	PPC_FUNC_PROLOGUE();
	// b 0x82713b50
	sub_82713B50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AF474"))) PPC_WEAK_FUNC(sub_827AF474);
PPC_FUNC_IMPL(__imp__sub_827AF474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AF478"))) PPC_WEAK_FUNC(sub_827AF478);
PPC_FUNC_IMPL(__imp__sub_827AF478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827AF480;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82385010
	ctx.lr = 0x827AF490;
	sub_82385010(ctx, base);
	// addi r29,r30,80
	ctx.r29.s64 = ctx.r30.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AF4A0;
	sub_823845F8(ctx, base);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AF4AC;
	sub_823845F8(ctx, base);
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AF4B8;
	sub_823845F8(ctx, base);
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d3978
	ctx.lr = 0x827AF4C4;
	sub_827D3978(ctx, base);
	// addi r4,r30,132
	ctx.r4.s64 = ctx.r30.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AF4D0;
	sub_823845F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,395
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 395, ctx.xer);
	// bge cr6,0x827af4f0
	if (!ctx.cr6.lt) goto loc_827AF4F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AF4F0;
	sub_823845F8(ctx, base);
loc_827AF4F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,448
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 448, ctx.xer);
	// blt cr6,0x827af52c
	if (ctx.cr6.lt) goto loc_827AF52C;
	// addi r4,r30,136
	ctx.r4.s64 = ctx.r30.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AF508;
	sub_823845F8(ctx, base);
	// addi r4,r30,140
	ctx.r4.s64 = ctx.r30.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AF514;
	sub_823845F8(ctx, base);
	// addi r4,r30,144
	ctx.r4.s64 = ctx.r30.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AF520;
	sub_823845F8(ctx, base);
	// addi r4,r30,148
	ctx.r4.s64 = ctx.r30.s64 + 148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f8
	ctx.lr = 0x827AF52C;
	sub_823845F8(ctx, base);
loc_827AF52C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AF534"))) PPC_WEAK_FUNC(sub_827AF534);
PPC_FUNC_IMPL(__imp__sub_827AF534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AF538"))) PPC_WEAK_FUNC(sub_827AF538);
PPC_FUNC_IMPL(__imp__sub_827AF538) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x822959a8
	ctx.lr = 0x827AF550;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827af56c
	if (ctx.cr6.eq) goto loc_827AF56C;
	// bl 0x827b5198
	ctx.lr = 0x827AF55C;
	sub_827B5198(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827AF56C:
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

__attribute__((alias("__imp__sub_827AF580"))) PPC_WEAK_FUNC(sub_827AF580);
PPC_FUNC_IMPL(__imp__sub_827AF580) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x822959a8
	ctx.lr = 0x827AF5A0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827af5c4
	if (ctx.cr6.eq) goto loc_827AF5C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b5220
	ctx.lr = 0x827AF5B0;
	sub_827B5220(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827AF5C4:
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

__attribute__((alias("__imp__sub_827AF5DC"))) PPC_WEAK_FUNC(sub_827AF5DC);
PPC_FUNC_IMPL(__imp__sub_827AF5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AF5E0"))) PPC_WEAK_FUNC(sub_827AF5E0);
PPC_FUNC_IMPL(__imp__sub_827AF5E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x827ad620
	sub_827AD620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AF5E4"))) PPC_WEAK_FUNC(sub_827AF5E4);
PPC_FUNC_IMPL(__imp__sub_827AF5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AF5E8"))) PPC_WEAK_FUNC(sub_827AF5E8);
PPC_FUNC_IMPL(__imp__sub_827AF5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827AF5F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82944da0
	ctx.lr = 0x827AF604;
	sub_82944DA0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x827ade88
	ctx.lr = 0x827AF618;
	sub_827ADE88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AF620"))) PPC_WEAK_FUNC(sub_827AF620);
PPC_FUNC_IMPL(__imp__sub_827AF620) {
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
	// bl 0x82944f58
	ctx.lr = 0x827AF640;
	sub_82944F58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x827ad5b8
	ctx.lr = 0x827AF64C;
	sub_827AD5B8(ctx, base);
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

__attribute__((alias("__imp__sub_827AF664"))) PPC_WEAK_FUNC(sub_827AF664);
PPC_FUNC_IMPL(__imp__sub_827AF664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AF668"))) PPC_WEAK_FUNC(sub_827AF668);
PPC_FUNC_IMPL(__imp__sub_827AF668) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x822959a8
	ctx.lr = 0x827AF680;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827af69c
	if (ctx.cr6.eq) goto loc_827AF69C;
	// bl 0x827b5298
	ctx.lr = 0x827AF68C;
	sub_827B5298(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827AF69C:
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

__attribute__((alias("__imp__sub_827AF6B0"))) PPC_WEAK_FUNC(sub_827AF6B0);
PPC_FUNC_IMPL(__imp__sub_827AF6B0) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x822959a8
	ctx.lr = 0x827AF6D0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827af6f4
	if (ctx.cr6.eq) goto loc_827AF6F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b5300
	ctx.lr = 0x827AF6E0;
	sub_827B5300(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827AF6F4:
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

__attribute__((alias("__imp__sub_827AF70C"))) PPC_WEAK_FUNC(sub_827AF70C);
PPC_FUNC_IMPL(__imp__sub_827AF70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AF710"))) PPC_WEAK_FUNC(sub_827AF710);
PPC_FUNC_IMPL(__imp__sub_827AF710) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AF724"))) PPC_WEAK_FUNC(sub_827AF724);
PPC_FUNC_IMPL(__imp__sub_827AF724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AF728"))) PPC_WEAK_FUNC(sub_827AF728);
PPC_FUNC_IMPL(__imp__sub_827AF728) {
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
	// bl 0x82724180
	ctx.lr = 0x827AF740;
	sub_82724180(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ad620
	ctx.lr = 0x827AF748;
	sub_827AD620(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_827AF75C"))) PPC_WEAK_FUNC(sub_827AF75C);
PPC_FUNC_IMPL(__imp__sub_827AF75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AF760"))) PPC_WEAK_FUNC(sub_827AF760);
PPC_FUNC_IMPL(__imp__sub_827AF760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x827AF768;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82717c48
	ctx.lr = 0x827AF784;
	sub_82717C48(ctx, base);
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lfs f10,336(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r9,r11,-16728
	ctx.r9.s64 = ctx.r11.s64 + -16728;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// lfs f0,-16728(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16728);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r31,160
	ctx.r5.s64 = ctx.r31.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r24,4(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r23,8(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r27,12(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r24,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r24.u32);
	// stw r23,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r23.u32);
	// stw r27,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r27.u32);
	// lbz r8,525(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 525);
	// rotlwi r10,r8,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// stfsx f31,r10,r26
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, temp.u32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fsubs f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsubs f2,f8,f11
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fmuls f8,f3,f10
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f1,f5,f10
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f9,f4,f10
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f7,f2,f10
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fadds f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f6,f1,f13
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// stfs f6,92(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
	// stw r8,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r8.u32);
	// stw r10,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r10.u32);
	// bl 0x825feba0
	ctx.lr = 0x827AF878;
	sub_825FEBA0(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r9,r10,-17552
	ctx.r9.s64 = ctx.r10.s64 + -17552;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r11,r28,320
	ctx.r11.s64 = ctx.r28.s64 + 320;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r5,r7,-17520
	ctx.r5.s64 = ctx.r7.s64 + -17520;
	// lvx128 v62,r0,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r6,-17200
	ctx.r4.s64 = ctx.r6.s64 + -17200;
	// li r3,48
	ctx.r3.s64 = 48;
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lvx128 v61,r11,r8
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lvx128 v59,r11,r3
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lvx128 v60,r0,r11
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lvx128 v57,r11,r10
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v58,v60,v61
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrglw128 v56,v60,v61
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// lfs f2,444(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 444);
	ctx.f2.f64 = double(temp.f32);
	// vmrghw128 v55,v57,v59
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// lfs f0,-17316(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17316);
	ctx.f0.f64 = double(temp.f32);
	// vmrglw128 v54,v57,v59
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lvx128 v53,r0,r5
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lvx128 v52,r0,r4
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// vmrghw128 v51,v58,v55
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// stfs f1,168(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// vmrglw128 v50,v58,v55
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// lvx128 v63,r0,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v49,v56,v54
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// lhz r3,166(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 166);
	// vmrglw128 v48,v56,v54
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmsum4fp128 v47,v62,v51
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// vmsum4fp128 v43,v53,v51
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v39,v52,v51
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v45,v62,v49
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v42,v53,v49
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v41,v53,v50
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v40,v53,v48
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v38,v52,v49
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v37,v52,v50
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v36,v52,v48
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v35,v63,v51
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v46,v62,v50
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmrghw128 v33,v47,v45
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmsum4fp128 v44,v62,v48
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmrghw128 v60,v43,v42
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmsum4fp128 v34,v63,v49
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmrghw128 v59,v41,v40
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmsum4fp128 v32,v63,v50
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmrghw128 v58,v39,v38
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmsum4fp128 v61,v63,v48
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmrghw128 v57,v37,v36
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v55,v60,v59
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v54,v58,v57
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// stvx128 v55,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v62,v46,v44
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v53,v35,v34
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v52,v32,v61
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmrghw128 v56,v33,v62
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmrghw128 v51,v53,v52
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// stvx128 v56,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v51,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x827af9d8
	if (ctx.cr6.eq) goto loc_827AF9D8;
	// lhz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 164);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r7,r11,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r3,r9,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r9.s64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srad r10,r7,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r10.s64 = ctx.r7.s64 >> temp.u64;
	// srd r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// bl 0x82e6c540
	ctx.lr = 0x827AF9D8;
	sub_82E6C540(ctx, base);
loc_827AF9D8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x827ade88
	ctx.lr = 0x827AF9EC;
	sub_827ADE88(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AF9F8"))) PPC_WEAK_FUNC(sub_827AF9F8);
PPC_FUNC_IMPL(__imp__sub_827AF9F8) {
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
	// bl 0x82718208
	ctx.lr = 0x827AFA18;
	sub_82718208(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// bl 0x823845f8
	ctx.lr = 0x827AFA24;
	sub_823845F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,164
	ctx.r4.s64 = ctx.r31.s64 + 164;
	// bl 0x823845f8
	ctx.lr = 0x827AFA30;
	sub_823845F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x827ad5b8
	ctx.lr = 0x827AFA3C;
	sub_827AD5B8(ctx, base);
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

__attribute__((alias("__imp__sub_827AFA54"))) PPC_WEAK_FUNC(sub_827AFA54);
PPC_FUNC_IMPL(__imp__sub_827AFA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFA58"))) PPC_WEAK_FUNC(sub_827AFA58);
PPC_FUNC_IMPL(__imp__sub_827AFA58) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AFA60"))) PPC_WEAK_FUNC(sub_827AFA60);
PPC_FUNC_IMPL(__imp__sub_827AFA60) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x822959a8
	ctx.lr = 0x827AFA78;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827afa94
	if (ctx.cr6.eq) goto loc_827AFA94;
	// bl 0x827b5398
	ctx.lr = 0x827AFA84;
	sub_827B5398(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827AFA94:
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

__attribute__((alias("__imp__sub_827AFAA8"))) PPC_WEAK_FUNC(sub_827AFAA8);
PPC_FUNC_IMPL(__imp__sub_827AFAA8) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x822959a8
	ctx.lr = 0x827AFAC8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827afaec
	if (ctx.cr6.eq) goto loc_827AFAEC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b5400
	ctx.lr = 0x827AFAD8;
	sub_827B5400(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827AFAEC:
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

__attribute__((alias("__imp__sub_827AFB04"))) PPC_WEAK_FUNC(sub_827AFB04);
PPC_FUNC_IMPL(__imp__sub_827AFB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFB08"))) PPC_WEAK_FUNC(sub_827AFB08);
PPC_FUNC_IMPL(__imp__sub_827AFB08) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AFB10"))) PPC_WEAK_FUNC(sub_827AFB10);
PPC_FUNC_IMPL(__imp__sub_827AFB10) {
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
	// bl 0x82724320
	ctx.lr = 0x827AFB28;
	sub_82724320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ad620
	ctx.lr = 0x827AFB30;
	sub_827AD620(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_827AFB44"))) PPC_WEAK_FUNC(sub_827AFB44);
PPC_FUNC_IMPL(__imp__sub_827AFB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFB48"))) PPC_WEAK_FUNC(sub_827AFB48);
PPC_FUNC_IMPL(__imp__sub_827AFB48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x827AFB50;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82718680
	ctx.lr = 0x827AFB6C;
	sub_82718680(ctx, base);
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lfs f10,336(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r9,r11,-16728
	ctx.r9.s64 = ctx.r11.s64 + -16728;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// lfs f0,-16728(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16728);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r31,160
	ctx.r5.s64 = ctx.r31.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r24,4(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r23,8(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r27,12(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r24,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r24.u32);
	// stw r23,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r23.u32);
	// stw r27,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r27.u32);
	// lbz r8,525(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 525);
	// rotlwi r10,r8,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// stfsx f31,r10,r26
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, temp.u32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fsubs f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsubs f2,f8,f11
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fmuls f8,f3,f10
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f1,f5,f10
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f9,f4,f10
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f7,f2,f10
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fadds f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f6,f1,f13
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// stfs f6,92(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
	// stw r8,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r8.u32);
	// stw r10,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r10.u32);
	// bl 0x825feba0
	ctx.lr = 0x827AFC60;
	sub_825FEBA0(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r9,r10,-17552
	ctx.r9.s64 = ctx.r10.s64 + -17552;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r11,r28,320
	ctx.r11.s64 = ctx.r28.s64 + 320;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r5,r7,-17520
	ctx.r5.s64 = ctx.r7.s64 + -17520;
	// lvx128 v62,r0,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r6,-17200
	ctx.r4.s64 = ctx.r6.s64 + -17200;
	// li r3,48
	ctx.r3.s64 = 48;
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lvx128 v61,r11,r8
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lvx128 v59,r11,r3
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lvx128 v60,r0,r11
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lvx128 v57,r11,r10
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v58,v60,v61
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrglw128 v56,v60,v61
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// lfs f2,444(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 444);
	ctx.f2.f64 = double(temp.f32);
	// vmrghw128 v55,v57,v59
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// lfs f0,-17316(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17316);
	ctx.f0.f64 = double(temp.f32);
	// vmrglw128 v54,v57,v59
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lvx128 v53,r0,r5
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lvx128 v52,r0,r4
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// vmrghw128 v51,v58,v55
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// stfs f1,168(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// vmrglw128 v50,v58,v55
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// lvx128 v63,r0,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v49,v56,v54
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// lhz r3,166(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 166);
	// vmrglw128 v48,v56,v54
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmsum4fp128 v47,v62,v51
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// vmsum4fp128 v43,v53,v51
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v39,v52,v51
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v45,v62,v49
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v42,v53,v49
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v41,v53,v50
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v40,v53,v48
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v38,v52,v49
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v37,v52,v50
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v36,v52,v48
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v35,v63,v51
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v46,v62,v50
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmrghw128 v33,v47,v45
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmsum4fp128 v44,v62,v48
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmrghw128 v60,v43,v42
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmsum4fp128 v34,v63,v49
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmrghw128 v59,v41,v40
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmsum4fp128 v32,v63,v50
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmrghw128 v58,v39,v38
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmsum4fp128 v61,v63,v48
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmrghw128 v57,v37,v36
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v55,v60,v59
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v54,v58,v57
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// stvx128 v55,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v62,v46,v44
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v53,v35,v34
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v52,v32,v61
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmrghw128 v56,v33,v62
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmrghw128 v51,v53,v52
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// stvx128 v56,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v51,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x827afdc0
	if (ctx.cr6.eq) goto loc_827AFDC0;
	// lhz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 164);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r7,r11,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r3,r9,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r9.s64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srad r10,r7,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r10.s64 = ctx.r7.s64 >> temp.u64;
	// srd r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// bl 0x82e6c540
	ctx.lr = 0x827AFDC0;
	sub_82E6C540(ctx, base);
loc_827AFDC0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x827ade88
	ctx.lr = 0x827AFDD4;
	sub_827ADE88(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AFDE0"))) PPC_WEAK_FUNC(sub_827AFDE0);
PPC_FUNC_IMPL(__imp__sub_827AFDE0) {
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
	// bl 0x82718c40
	ctx.lr = 0x827AFE00;
	sub_82718C40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// bl 0x823845f8
	ctx.lr = 0x827AFE0C;
	sub_823845F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,164
	ctx.r4.s64 = ctx.r31.s64 + 164;
	// bl 0x823845f8
	ctx.lr = 0x827AFE18;
	sub_823845F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x827ad5b8
	ctx.lr = 0x827AFE24;
	sub_827AD5B8(ctx, base);
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

__attribute__((alias("__imp__sub_827AFE3C"))) PPC_WEAK_FUNC(sub_827AFE3C);
PPC_FUNC_IMPL(__imp__sub_827AFE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFE40"))) PPC_WEAK_FUNC(sub_827AFE40);
PPC_FUNC_IMPL(__imp__sub_827AFE40) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AFE48"))) PPC_WEAK_FUNC(sub_827AFE48);
PPC_FUNC_IMPL(__imp__sub_827AFE48) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,264
	ctx.r3.s64 = 264;
	// bl 0x822959a8
	ctx.lr = 0x827AFE60;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827afe7c
	if (ctx.cr6.eq) goto loc_827AFE7C;
	// bl 0x827b5498
	ctx.lr = 0x827AFE6C;
	sub_827B5498(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827AFE7C:
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

__attribute__((alias("__imp__sub_827AFE90"))) PPC_WEAK_FUNC(sub_827AFE90);
PPC_FUNC_IMPL(__imp__sub_827AFE90) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,264
	ctx.r3.s64 = 264;
	// bl 0x822959a8
	ctx.lr = 0x827AFEB0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827afed4
	if (ctx.cr6.eq) goto loc_827AFED4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b5500
	ctx.lr = 0x827AFEC0;
	sub_827B5500(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827AFED4:
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

__attribute__((alias("__imp__sub_827AFEEC"))) PPC_WEAK_FUNC(sub_827AFEEC);
PPC_FUNC_IMPL(__imp__sub_827AFEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFEF0"))) PPC_WEAK_FUNC(sub_827AFEF0);
PPC_FUNC_IMPL(__imp__sub_827AFEF0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827aff04
	if (ctx.cr6.eq) goto loc_827AFF04;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_827AFF04:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AFF0C"))) PPC_WEAK_FUNC(sub_827AFF0C);
PPC_FUNC_IMPL(__imp__sub_827AFF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFF10"))) PPC_WEAK_FUNC(sub_827AFF10);
PPC_FUNC_IMPL(__imp__sub_827AFF10) {
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
	// bl 0x827244d8
	ctx.lr = 0x827AFF28;
	sub_827244D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ad620
	ctx.lr = 0x827AFF30;
	sub_827AD620(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_827AFF44"))) PPC_WEAK_FUNC(sub_827AFF44);
PPC_FUNC_IMPL(__imp__sub_827AFF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFF48"))) PPC_WEAK_FUNC(sub_827AFF48);
PPC_FUNC_IMPL(__imp__sub_827AFF48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x827AFF50;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x827190d0
	ctx.lr = 0x827AFF6C;
	sub_827190D0(ctx, base);
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lfs f10,336(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r9,r11,-16728
	ctx.r9.s64 = ctx.r11.s64 + -16728;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// lfs f0,-16728(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16728);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r31,256
	ctx.r5.s64 = ctx.r31.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r24,4(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r23,8(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r27,12(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r24,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r24.u32);
	// stw r23,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r23.u32);
	// stw r27,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r27.u32);
	// lbz r8,525(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 525);
	// rotlwi r10,r8,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// stfsx f31,r10,r26
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, temp.u32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fsubs f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsubs f2,f8,f11
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fmuls f8,f3,f10
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f1,f5,f10
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f9,f4,f10
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f7,f2,f10
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fadds f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f6,f1,f13
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// stfs f6,92(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
	// stw r8,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r8.u32);
	// stw r10,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r10.u32);
	// bl 0x825feba0
	ctx.lr = 0x827B0060;
	sub_825FEBA0(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r9,r10,-17552
	ctx.r9.s64 = ctx.r10.s64 + -17552;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r11,r28,320
	ctx.r11.s64 = ctx.r28.s64 + 320;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r5,r7,-17520
	ctx.r5.s64 = ctx.r7.s64 + -17520;
	// lvx128 v62,r0,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r6,-17200
	ctx.r4.s64 = ctx.r6.s64 + -17200;
	// li r3,48
	ctx.r3.s64 = 48;
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lvx128 v61,r11,r8
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lvx128 v59,r11,r3
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lvx128 v60,r0,r11
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lvx128 v57,r11,r10
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v58,v60,v61
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrglw128 v56,v60,v61
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// lfs f2,444(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 444);
	ctx.f2.f64 = double(temp.f32);
	// vmrghw128 v55,v57,v59
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// lfs f0,-17316(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17316);
	ctx.f0.f64 = double(temp.f32);
	// vmrglw128 v54,v57,v59
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lvx128 v53,r0,r5
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lvx128 v52,r0,r4
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// vmrghw128 v51,v58,v55
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// stfs f1,168(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// vmrglw128 v50,v58,v55
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// lvx128 v63,r0,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v49,v56,v54
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// lhz r3,262(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 262);
	// vmrglw128 v48,v56,v54
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmsum4fp128 v47,v62,v51
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// vmsum4fp128 v43,v53,v51
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v39,v52,v51
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v45,v62,v49
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v42,v53,v49
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v41,v53,v50
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v40,v53,v48
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v38,v52,v49
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v37,v52,v50
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v36,v52,v48
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v35,v63,v51
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v46,v62,v50
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmrghw128 v33,v47,v45
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmsum4fp128 v44,v62,v48
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmrghw128 v60,v43,v42
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmsum4fp128 v34,v63,v49
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmrghw128 v59,v41,v40
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmsum4fp128 v32,v63,v50
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmrghw128 v58,v39,v38
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmsum4fp128 v61,v63,v48
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmrghw128 v57,v37,v36
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v55,v60,v59
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v54,v58,v57
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// stvx128 v55,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v62,v46,v44
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v53,v35,v34
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v52,v32,v61
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmrghw128 v56,v33,v62
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmrghw128 v51,v53,v52
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// stvx128 v56,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v51,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x827b01c0
	if (ctx.cr6.eq) goto loc_827B01C0;
	// lhz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 260);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r7,r11,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r3,r9,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r9.s64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srad r10,r7,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r10.s64 = ctx.r7.s64 >> temp.u64;
	// srd r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// bl 0x82e6c540
	ctx.lr = 0x827B01C0;
	sub_82E6C540(ctx, base);
loc_827B01C0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x827ade88
	ctx.lr = 0x827B01D4;
	sub_827ADE88(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B01E0"))) PPC_WEAK_FUNC(sub_827B01E0);
PPC_FUNC_IMPL(__imp__sub_827B01E0) {
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
	// bl 0x82719690
	ctx.lr = 0x827B0200;
	sub_82719690(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// bl 0x823845f8
	ctx.lr = 0x827B020C;
	sub_823845F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,260
	ctx.r4.s64 = ctx.r31.s64 + 260;
	// bl 0x823845f8
	ctx.lr = 0x827B0218;
	sub_823845F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x827ad5b8
	ctx.lr = 0x827B0224;
	sub_827AD5B8(ctx, base);
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

__attribute__((alias("__imp__sub_827B023C"))) PPC_WEAK_FUNC(sub_827B023C);
PPC_FUNC_IMPL(__imp__sub_827B023C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0240"))) PPC_WEAK_FUNC(sub_827B0240);
PPC_FUNC_IMPL(__imp__sub_827B0240) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0248"))) PPC_WEAK_FUNC(sub_827B0248);
PPC_FUNC_IMPL(__imp__sub_827B0248) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,264
	ctx.r3.s64 = 264;
	// bl 0x822959a8
	ctx.lr = 0x827B0260;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b027c
	if (ctx.cr6.eq) goto loc_827B027C;
	// bl 0x827b5598
	ctx.lr = 0x827B026C;
	sub_827B5598(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827B027C:
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

__attribute__((alias("__imp__sub_827B0290"))) PPC_WEAK_FUNC(sub_827B0290);
PPC_FUNC_IMPL(__imp__sub_827B0290) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,264
	ctx.r3.s64 = 264;
	// bl 0x822959a8
	ctx.lr = 0x827B02B0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b02d4
	if (ctx.cr6.eq) goto loc_827B02D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b5600
	ctx.lr = 0x827B02C0;
	sub_827B5600(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827B02D4:
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

__attribute__((alias("__imp__sub_827B02EC"))) PPC_WEAK_FUNC(sub_827B02EC);
PPC_FUNC_IMPL(__imp__sub_827B02EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B02F0"))) PPC_WEAK_FUNC(sub_827B02F0);
PPC_FUNC_IMPL(__imp__sub_827B02F0) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B02FC"))) PPC_WEAK_FUNC(sub_827B02FC);
PPC_FUNC_IMPL(__imp__sub_827B02FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0300"))) PPC_WEAK_FUNC(sub_827B0300);
PPC_FUNC_IMPL(__imp__sub_827B0300) {
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
	// bl 0x82724680
	ctx.lr = 0x827B0318;
	sub_82724680(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ad620
	ctx.lr = 0x827B0320;
	sub_827AD620(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_827B0334"))) PPC_WEAK_FUNC(sub_827B0334);
PPC_FUNC_IMPL(__imp__sub_827B0334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0338"))) PPC_WEAK_FUNC(sub_827B0338);
PPC_FUNC_IMPL(__imp__sub_827B0338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x827B0340;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82719b10
	ctx.lr = 0x827B035C;
	sub_82719B10(ctx, base);
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lfs f10,336(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r9,r11,-16728
	ctx.r9.s64 = ctx.r11.s64 + -16728;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// lfs f0,-16728(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16728);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r31,256
	ctx.r5.s64 = ctx.r31.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r24,4(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r23,8(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r27,12(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r24,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r24.u32);
	// stw r23,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r23.u32);
	// stw r27,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r27.u32);
	// lbz r8,525(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 525);
	// rotlwi r10,r8,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// stfsx f31,r10,r26
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, temp.u32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fsubs f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsubs f2,f8,f11
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fmuls f8,f3,f10
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f1,f5,f10
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f9,f4,f10
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f7,f2,f10
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fadds f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f6,f1,f13
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// stfs f6,92(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
	// stw r8,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r8.u32);
	// stw r10,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r10.u32);
	// bl 0x825feba0
	ctx.lr = 0x827B0450;
	sub_825FEBA0(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r9,r10,-17552
	ctx.r9.s64 = ctx.r10.s64 + -17552;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r11,r28,320
	ctx.r11.s64 = ctx.r28.s64 + 320;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r5,r7,-17520
	ctx.r5.s64 = ctx.r7.s64 + -17520;
	// lvx128 v62,r0,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r6,-17200
	ctx.r4.s64 = ctx.r6.s64 + -17200;
	// li r3,48
	ctx.r3.s64 = 48;
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lvx128 v61,r11,r8
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lvx128 v59,r11,r3
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lvx128 v60,r0,r11
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lvx128 v57,r11,r10
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v58,v60,v61
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrglw128 v56,v60,v61
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// lfs f2,444(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 444);
	ctx.f2.f64 = double(temp.f32);
	// vmrghw128 v55,v57,v59
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// lfs f0,-17316(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17316);
	ctx.f0.f64 = double(temp.f32);
	// vmrglw128 v54,v57,v59
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lvx128 v53,r0,r5
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lvx128 v52,r0,r4
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// vmrghw128 v51,v58,v55
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// stfs f1,168(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// vmrglw128 v50,v58,v55
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// lvx128 v63,r0,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v49,v56,v54
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// lhz r3,262(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 262);
	// vmrglw128 v48,v56,v54
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmsum4fp128 v47,v62,v51
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// vmsum4fp128 v43,v53,v51
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v39,v52,v51
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v45,v62,v49
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v42,v53,v49
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v41,v53,v50
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v40,v53,v48
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v38,v52,v49
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v37,v52,v50
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v36,v52,v48
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v35,v63,v51
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v46,v62,v50
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmrghw128 v33,v47,v45
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmsum4fp128 v44,v62,v48
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmrghw128 v60,v43,v42
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmsum4fp128 v34,v63,v49
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmrghw128 v59,v41,v40
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmsum4fp128 v32,v63,v50
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmrghw128 v58,v39,v38
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmsum4fp128 v61,v63,v48
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmrghw128 v57,v37,v36
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v55,v60,v59
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v54,v58,v57
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// stvx128 v55,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v62,v46,v44
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v53,v35,v34
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v52,v32,v61
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmrghw128 v56,v33,v62
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmrghw128 v51,v53,v52
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// stvx128 v56,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v51,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x827b05b0
	if (ctx.cr6.eq) goto loc_827B05B0;
	// lhz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 260);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r7,r11,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r3,r9,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r9.s64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srad r10,r7,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r10.s64 = ctx.r7.s64 >> temp.u64;
	// srd r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// bl 0x82e6c540
	ctx.lr = 0x827B05B0;
	sub_82E6C540(ctx, base);
loc_827B05B0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x827ade88
	ctx.lr = 0x827B05C4;
	sub_827ADE88(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B05D0"))) PPC_WEAK_FUNC(sub_827B05D0);
PPC_FUNC_IMPL(__imp__sub_827B05D0) {
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
	// bl 0x8271a0d0
	ctx.lr = 0x827B05F0;
	sub_8271A0D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// bl 0x823845f8
	ctx.lr = 0x827B05FC;
	sub_823845F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,260
	ctx.r4.s64 = ctx.r31.s64 + 260;
	// bl 0x823845f8
	ctx.lr = 0x827B0608;
	sub_823845F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x827ad5b8
	ctx.lr = 0x827B0614;
	sub_827AD5B8(ctx, base);
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

__attribute__((alias("__imp__sub_827B062C"))) PPC_WEAK_FUNC(sub_827B062C);
PPC_FUNC_IMPL(__imp__sub_827B062C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0630"))) PPC_WEAK_FUNC(sub_827B0630);
PPC_FUNC_IMPL(__imp__sub_827B0630) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0638"))) PPC_WEAK_FUNC(sub_827B0638);
PPC_FUNC_IMPL(__imp__sub_827B0638) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,264
	ctx.r3.s64 = 264;
	// bl 0x822959a8
	ctx.lr = 0x827B0650;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b066c
	if (ctx.cr6.eq) goto loc_827B066C;
	// bl 0x827b5698
	ctx.lr = 0x827B065C;
	sub_827B5698(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827B066C:
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

__attribute__((alias("__imp__sub_827B0680"))) PPC_WEAK_FUNC(sub_827B0680);
PPC_FUNC_IMPL(__imp__sub_827B0680) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,264
	ctx.r3.s64 = 264;
	// bl 0x822959a8
	ctx.lr = 0x827B06A0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b06c4
	if (ctx.cr6.eq) goto loc_827B06C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b5700
	ctx.lr = 0x827B06B0;
	sub_827B5700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827B06C4:
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

__attribute__((alias("__imp__sub_827B06DC"))) PPC_WEAK_FUNC(sub_827B06DC);
PPC_FUNC_IMPL(__imp__sub_827B06DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B06E0"))) PPC_WEAK_FUNC(sub_827B06E0);
PPC_FUNC_IMPL(__imp__sub_827B06E0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B06F4"))) PPC_WEAK_FUNC(sub_827B06F4);
PPC_FUNC_IMPL(__imp__sub_827B06F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B06F8"))) PPC_WEAK_FUNC(sub_827B06F8);
PPC_FUNC_IMPL(__imp__sub_827B06F8) {
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
	// bl 0x82724830
	ctx.lr = 0x827B0710;
	sub_82724830(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ad620
	ctx.lr = 0x827B0718;
	sub_827AD620(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_827B072C"))) PPC_WEAK_FUNC(sub_827B072C);
PPC_FUNC_IMPL(__imp__sub_827B072C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0730"))) PPC_WEAK_FUNC(sub_827B0730);
PPC_FUNC_IMPL(__imp__sub_827B0730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x827B0738;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8271a558
	ctx.lr = 0x827B0754;
	sub_8271A558(ctx, base);
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lfs f10,336(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r9,r11,-16728
	ctx.r9.s64 = ctx.r11.s64 + -16728;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// lfs f0,-16728(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16728);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r31,256
	ctx.r5.s64 = ctx.r31.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r24,4(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r23,8(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r27,12(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r24,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r24.u32);
	// stw r23,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r23.u32);
	// stw r27,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r27.u32);
	// lbz r8,525(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 525);
	// rotlwi r10,r8,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// stfsx f31,r10,r26
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, temp.u32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fsubs f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsubs f2,f8,f11
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fmuls f8,f3,f10
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f1,f5,f10
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f9,f4,f10
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f7,f2,f10
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fadds f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f6,f1,f13
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// stfs f6,92(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
	// stw r8,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r8.u32);
	// stw r10,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r10.u32);
	// bl 0x825feba0
	ctx.lr = 0x827B0848;
	sub_825FEBA0(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r9,r10,-17552
	ctx.r9.s64 = ctx.r10.s64 + -17552;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r11,r28,320
	ctx.r11.s64 = ctx.r28.s64 + 320;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r5,r7,-17520
	ctx.r5.s64 = ctx.r7.s64 + -17520;
	// lvx128 v62,r0,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r6,-17200
	ctx.r4.s64 = ctx.r6.s64 + -17200;
	// li r3,48
	ctx.r3.s64 = 48;
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lvx128 v61,r11,r8
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lvx128 v59,r11,r3
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lvx128 v60,r0,r11
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lvx128 v57,r11,r10
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v58,v60,v61
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrglw128 v56,v60,v61
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// lfs f2,444(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 444);
	ctx.f2.f64 = double(temp.f32);
	// vmrghw128 v55,v57,v59
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// lfs f0,-17316(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17316);
	ctx.f0.f64 = double(temp.f32);
	// vmrglw128 v54,v57,v59
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lvx128 v53,r0,r5
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lvx128 v52,r0,r4
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// vmrghw128 v51,v58,v55
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// stfs f1,168(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// vmrglw128 v50,v58,v55
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// lvx128 v63,r0,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v49,v56,v54
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// lhz r3,262(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 262);
	// vmrglw128 v48,v56,v54
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmsum4fp128 v47,v62,v51
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// vmsum4fp128 v43,v53,v51
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v39,v52,v51
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v45,v62,v49
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v42,v53,v49
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v41,v53,v50
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v40,v53,v48
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v38,v52,v49
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v37,v52,v50
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v36,v52,v48
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v35,v63,v51
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v46,v62,v50
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmrghw128 v33,v47,v45
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmsum4fp128 v44,v62,v48
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmrghw128 v60,v43,v42
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmsum4fp128 v34,v63,v49
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmrghw128 v59,v41,v40
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmsum4fp128 v32,v63,v50
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmrghw128 v58,v39,v38
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmsum4fp128 v61,v63,v48
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmrghw128 v57,v37,v36
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v55,v60,v59
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v54,v58,v57
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// stvx128 v55,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v62,v46,v44
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v53,v35,v34
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v52,v32,v61
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmrghw128 v56,v33,v62
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmrghw128 v51,v53,v52
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// stvx128 v56,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v51,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x827b09a8
	if (ctx.cr6.eq) goto loc_827B09A8;
	// lhz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 260);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r7,r11,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r3,r9,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r9.s64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srad r10,r7,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r10.s64 = ctx.r7.s64 >> temp.u64;
	// srd r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// bl 0x82e6c540
	ctx.lr = 0x827B09A8;
	sub_82E6C540(ctx, base);
loc_827B09A8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x827ade88
	ctx.lr = 0x827B09BC;
	sub_827ADE88(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B09C8"))) PPC_WEAK_FUNC(sub_827B09C8);
PPC_FUNC_IMPL(__imp__sub_827B09C8) {
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
	// bl 0x8271ab18
	ctx.lr = 0x827B09E8;
	sub_8271AB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// bl 0x823845f8
	ctx.lr = 0x827B09F4;
	sub_823845F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,260
	ctx.r4.s64 = ctx.r31.s64 + 260;
	// bl 0x823845f8
	ctx.lr = 0x827B0A00;
	sub_823845F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x827ad5b8
	ctx.lr = 0x827B0A0C;
	sub_827AD5B8(ctx, base);
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

__attribute__((alias("__imp__sub_827B0A24"))) PPC_WEAK_FUNC(sub_827B0A24);
PPC_FUNC_IMPL(__imp__sub_827B0A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0A28"))) PPC_WEAK_FUNC(sub_827B0A28);
PPC_FUNC_IMPL(__imp__sub_827B0A28) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0A30"))) PPC_WEAK_FUNC(sub_827B0A30);
PPC_FUNC_IMPL(__imp__sub_827B0A30) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,216
	ctx.r3.s64 = 216;
	// bl 0x822959a8
	ctx.lr = 0x827B0A48;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b0a64
	if (ctx.cr6.eq) goto loc_827B0A64;
	// bl 0x827b5798
	ctx.lr = 0x827B0A54;
	sub_827B5798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827B0A64:
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

__attribute__((alias("__imp__sub_827B0A78"))) PPC_WEAK_FUNC(sub_827B0A78);
PPC_FUNC_IMPL(__imp__sub_827B0A78) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,216
	ctx.r3.s64 = 216;
	// bl 0x822959a8
	ctx.lr = 0x827B0A98;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b0abc
	if (ctx.cr6.eq) goto loc_827B0ABC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b5800
	ctx.lr = 0x827B0AA8;
	sub_827B5800(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827B0ABC:
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

__attribute__((alias("__imp__sub_827B0AD4"))) PPC_WEAK_FUNC(sub_827B0AD4);
PPC_FUNC_IMPL(__imp__sub_827B0AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0AD8"))) PPC_WEAK_FUNC(sub_827B0AD8);
PPC_FUNC_IMPL(__imp__sub_827B0AD8) {
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
	// bl 0x827284d0
	ctx.lr = 0x827B0AF0;
	sub_827284D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ad620
	ctx.lr = 0x827B0AF8;
	sub_827AD620(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_827B0B0C"))) PPC_WEAK_FUNC(sub_827B0B0C);
PPC_FUNC_IMPL(__imp__sub_827B0B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0B10"))) PPC_WEAK_FUNC(sub_827B0B10);
PPC_FUNC_IMPL(__imp__sub_827B0B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827B0B18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8271ad40
	ctx.lr = 0x827B0B2C;
	sub_8271AD40(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// bl 0x827ade88
	ctx.lr = 0x827B0B40;
	sub_827ADE88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B0B48"))) PPC_WEAK_FUNC(sub_827B0B48);
PPC_FUNC_IMPL(__imp__sub_827B0B48) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827b0b5c
	if (ctx.cr6.eq) goto loc_827B0B5C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_827B0B5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0B64"))) PPC_WEAK_FUNC(sub_827B0B64);
PPC_FUNC_IMPL(__imp__sub_827B0B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0B68"))) PPC_WEAK_FUNC(sub_827B0B68);
PPC_FUNC_IMPL(__imp__sub_827B0B68) {
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
	// bl 0x8271b700
	ctx.lr = 0x827B0B88;
	sub_8271B700(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// bl 0x823845f8
	ctx.lr = 0x827B0B94;
	sub_823845F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// bl 0x823845f8
	ctx.lr = 0x827B0BA0;
	sub_823845F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// bl 0x827ad5b8
	ctx.lr = 0x827B0BAC;
	sub_827AD5B8(ctx, base);
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

__attribute__((alias("__imp__sub_827B0BC4"))) PPC_WEAK_FUNC(sub_827B0BC4);
PPC_FUNC_IMPL(__imp__sub_827B0BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0BC8"))) PPC_WEAK_FUNC(sub_827B0BC8);
PPC_FUNC_IMPL(__imp__sub_827B0BC8) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,248
	ctx.r3.s64 = 248;
	// bl 0x822959a8
	ctx.lr = 0x827B0BE0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b0bfc
	if (ctx.cr6.eq) goto loc_827B0BFC;
	// bl 0x827b5878
	ctx.lr = 0x827B0BEC;
	sub_827B5878(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827B0BFC:
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

__attribute__((alias("__imp__sub_827B0C10"))) PPC_WEAK_FUNC(sub_827B0C10);
PPC_FUNC_IMPL(__imp__sub_827B0C10) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,248
	ctx.r3.s64 = 248;
	// bl 0x822959a8
	ctx.lr = 0x827B0C30;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b0c54
	if (ctx.cr6.eq) goto loc_827B0C54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b58e0
	ctx.lr = 0x827B0C40;
	sub_827B58E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827B0C54:
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

__attribute__((alias("__imp__sub_827B0C6C"))) PPC_WEAK_FUNC(sub_827B0C6C);
PPC_FUNC_IMPL(__imp__sub_827B0C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0C70"))) PPC_WEAK_FUNC(sub_827B0C70);
PPC_FUNC_IMPL(__imp__sub_827B0C70) {
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
	// bl 0x82728738
	ctx.lr = 0x827B0C88;
	sub_82728738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ad620
	ctx.lr = 0x827B0C90;
	sub_827AD620(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_827B0CA4"))) PPC_WEAK_FUNC(sub_827B0CA4);
PPC_FUNC_IMPL(__imp__sub_827B0CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0CA8"))) PPC_WEAK_FUNC(sub_827B0CA8);
PPC_FUNC_IMPL(__imp__sub_827B0CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827B0CB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8271b948
	ctx.lr = 0x827B0CC4;
	sub_8271B948(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x827ade88
	ctx.lr = 0x827B0CD8;
	sub_827ADE88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B0CE0"))) PPC_WEAK_FUNC(sub_827B0CE0);
PPC_FUNC_IMPL(__imp__sub_827B0CE0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827b0cf4
	if (ctx.cr6.eq) goto loc_827B0CF4;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_827B0CF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0CFC"))) PPC_WEAK_FUNC(sub_827B0CFC);
PPC_FUNC_IMPL(__imp__sub_827B0CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0D00"))) PPC_WEAK_FUNC(sub_827B0D00);
PPC_FUNC_IMPL(__imp__sub_827B0D00) {
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
	// bl 0x8271c308
	ctx.lr = 0x827B0D20;
	sub_8271C308(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// bl 0x823845f8
	ctx.lr = 0x827B0D2C;
	sub_823845F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,228
	ctx.r4.s64 = ctx.r31.s64 + 228;
	// bl 0x823845f8
	ctx.lr = 0x827B0D38;
	sub_823845F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x827ad5b8
	ctx.lr = 0x827B0D44;
	sub_827AD5B8(ctx, base);
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

__attribute__((alias("__imp__sub_827B0D5C"))) PPC_WEAK_FUNC(sub_827B0D5C);
PPC_FUNC_IMPL(__imp__sub_827B0D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0D60"))) PPC_WEAK_FUNC(sub_827B0D60);
PPC_FUNC_IMPL(__imp__sub_827B0D60) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,312
	ctx.r3.s64 = 312;
	// bl 0x822959a8
	ctx.lr = 0x827B0D78;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b0d94
	if (ctx.cr6.eq) goto loc_827B0D94;
	// bl 0x827b5958
	ctx.lr = 0x827B0D84;
	sub_827B5958(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827B0D94:
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

__attribute__((alias("__imp__sub_827B0DA8"))) PPC_WEAK_FUNC(sub_827B0DA8);
PPC_FUNC_IMPL(__imp__sub_827B0DA8) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,312
	ctx.r3.s64 = 312;
	// bl 0x822959a8
	ctx.lr = 0x827B0DC8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b0dec
	if (ctx.cr6.eq) goto loc_827B0DEC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b59c0
	ctx.lr = 0x827B0DD8;
	sub_827B59C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827B0DEC:
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

__attribute__((alias("__imp__sub_827B0E04"))) PPC_WEAK_FUNC(sub_827B0E04);
PPC_FUNC_IMPL(__imp__sub_827B0E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0E08"))) PPC_WEAK_FUNC(sub_827B0E08);
PPC_FUNC_IMPL(__imp__sub_827B0E08) {
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
	// bl 0x827289a0
	ctx.lr = 0x827B0E20;
	sub_827289A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ad620
	ctx.lr = 0x827B0E28;
	sub_827AD620(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_827B0E3C"))) PPC_WEAK_FUNC(sub_827B0E3C);
PPC_FUNC_IMPL(__imp__sub_827B0E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0E40"))) PPC_WEAK_FUNC(sub_827B0E40);
PPC_FUNC_IMPL(__imp__sub_827B0E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827B0E48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8271c550
	ctx.lr = 0x827B0E5C;
	sub_8271C550(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x827ade88
	ctx.lr = 0x827B0E70;
	sub_827ADE88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B0E78"))) PPC_WEAK_FUNC(sub_827B0E78);
PPC_FUNC_IMPL(__imp__sub_827B0E78) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827b0e8c
	if (ctx.cr6.eq) goto loc_827B0E8C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_827B0E8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0E94"))) PPC_WEAK_FUNC(sub_827B0E94);
PPC_FUNC_IMPL(__imp__sub_827B0E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0E98"))) PPC_WEAK_FUNC(sub_827B0E98);
PPC_FUNC_IMPL(__imp__sub_827B0E98) {
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
	// bl 0x8271cf10
	ctx.lr = 0x827B0EB8;
	sub_8271CF10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,288
	ctx.r4.s64 = ctx.r31.s64 + 288;
	// bl 0x823845f8
	ctx.lr = 0x827B0EC4;
	sub_823845F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,292
	ctx.r4.s64 = ctx.r31.s64 + 292;
	// bl 0x823845f8
	ctx.lr = 0x827B0ED0;
	sub_823845F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x827ad5b8
	ctx.lr = 0x827B0EDC;
	sub_827AD5B8(ctx, base);
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

__attribute__((alias("__imp__sub_827B0EF4"))) PPC_WEAK_FUNC(sub_827B0EF4);
PPC_FUNC_IMPL(__imp__sub_827B0EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0EF8"))) PPC_WEAK_FUNC(sub_827B0EF8);
PPC_FUNC_IMPL(__imp__sub_827B0EF8) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,216
	ctx.r3.s64 = 216;
	// bl 0x822959a8
	ctx.lr = 0x827B0F10;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b0f2c
	if (ctx.cr6.eq) goto loc_827B0F2C;
	// bl 0x827b5a38
	ctx.lr = 0x827B0F1C;
	sub_827B5A38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827B0F2C:
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

__attribute__((alias("__imp__sub_827B0F40"))) PPC_WEAK_FUNC(sub_827B0F40);
PPC_FUNC_IMPL(__imp__sub_827B0F40) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,216
	ctx.r3.s64 = 216;
	// bl 0x822959a8
	ctx.lr = 0x827B0F60;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b0f84
	if (ctx.cr6.eq) goto loc_827B0F84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b5aa0
	ctx.lr = 0x827B0F70;
	sub_827B5AA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827B0F84:
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

__attribute__((alias("__imp__sub_827B0F9C"))) PPC_WEAK_FUNC(sub_827B0F9C);
PPC_FUNC_IMPL(__imp__sub_827B0F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0FA0"))) PPC_WEAK_FUNC(sub_827B0FA0);
PPC_FUNC_IMPL(__imp__sub_827B0FA0) {
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
	// bl 0x82728bf8
	ctx.lr = 0x827B0FB8;
	sub_82728BF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ad620
	ctx.lr = 0x827B0FC0;
	sub_827AD620(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_827B0FD4"))) PPC_WEAK_FUNC(sub_827B0FD4);
PPC_FUNC_IMPL(__imp__sub_827B0FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0FD8"))) PPC_WEAK_FUNC(sub_827B0FD8);
PPC_FUNC_IMPL(__imp__sub_827B0FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827B0FE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8271d148
	ctx.lr = 0x827B0FF4;
	sub_8271D148(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// bl 0x827ade88
	ctx.lr = 0x827B1008;
	sub_827ADE88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B1010"))) PPC_WEAK_FUNC(sub_827B1010);
PPC_FUNC_IMPL(__imp__sub_827B1010) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B101C"))) PPC_WEAK_FUNC(sub_827B101C);
PPC_FUNC_IMPL(__imp__sub_827B101C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B1020"))) PPC_WEAK_FUNC(sub_827B1020);
PPC_FUNC_IMPL(__imp__sub_827B1020) {
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
	// bl 0x8271db08
	ctx.lr = 0x827B1040;
	sub_8271DB08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// bl 0x823845f8
	ctx.lr = 0x827B104C;
	sub_823845F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// bl 0x823845f8
	ctx.lr = 0x827B1058;
	sub_823845F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// bl 0x827ad5b8
	ctx.lr = 0x827B1064;
	sub_827AD5B8(ctx, base);
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

__attribute__((alias("__imp__sub_827B107C"))) PPC_WEAK_FUNC(sub_827B107C);
PPC_FUNC_IMPL(__imp__sub_827B107C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B1080"))) PPC_WEAK_FUNC(sub_827B1080);
PPC_FUNC_IMPL(__imp__sub_827B1080) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,248
	ctx.r3.s64 = 248;
	// bl 0x822959a8
	ctx.lr = 0x827B1098;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b10b4
	if (ctx.cr6.eq) goto loc_827B10B4;
	// bl 0x827b5b18
	ctx.lr = 0x827B10A4;
	sub_827B5B18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827B10B4:
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

__attribute__((alias("__imp__sub_827B10C8"))) PPC_WEAK_FUNC(sub_827B10C8);
PPC_FUNC_IMPL(__imp__sub_827B10C8) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,248
	ctx.r3.s64 = 248;
	// bl 0x822959a8
	ctx.lr = 0x827B10E8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b110c
	if (ctx.cr6.eq) goto loc_827B110C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b5b80
	ctx.lr = 0x827B10F8;
	sub_827B5B80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827B110C:
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

__attribute__((alias("__imp__sub_827B1124"))) PPC_WEAK_FUNC(sub_827B1124);
PPC_FUNC_IMPL(__imp__sub_827B1124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B1128"))) PPC_WEAK_FUNC(sub_827B1128);
PPC_FUNC_IMPL(__imp__sub_827B1128) {
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
	// bl 0x82728e50
	ctx.lr = 0x827B1140;
	sub_82728E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ad620
	ctx.lr = 0x827B1148;
	sub_827AD620(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_827B115C"))) PPC_WEAK_FUNC(sub_827B115C);
PPC_FUNC_IMPL(__imp__sub_827B115C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B1160"))) PPC_WEAK_FUNC(sub_827B1160);
PPC_FUNC_IMPL(__imp__sub_827B1160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827B1168;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8271dd40
	ctx.lr = 0x827B117C;
	sub_8271DD40(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x827ade88
	ctx.lr = 0x827B1190;
	sub_827ADE88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B1198"))) PPC_WEAK_FUNC(sub_827B1198);
PPC_FUNC_IMPL(__imp__sub_827B1198) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B11A4"))) PPC_WEAK_FUNC(sub_827B11A4);
PPC_FUNC_IMPL(__imp__sub_827B11A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B11A8"))) PPC_WEAK_FUNC(sub_827B11A8);
PPC_FUNC_IMPL(__imp__sub_827B11A8) {
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
	// bl 0x8271e700
	ctx.lr = 0x827B11C8;
	sub_8271E700(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// bl 0x823845f8
	ctx.lr = 0x827B11D4;
	sub_823845F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,228
	ctx.r4.s64 = ctx.r31.s64 + 228;
	// bl 0x823845f8
	ctx.lr = 0x827B11E0;
	sub_823845F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x827ad5b8
	ctx.lr = 0x827B11EC;
	sub_827AD5B8(ctx, base);
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

__attribute__((alias("__imp__sub_827B1204"))) PPC_WEAK_FUNC(sub_827B1204);
PPC_FUNC_IMPL(__imp__sub_827B1204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B1208"))) PPC_WEAK_FUNC(sub_827B1208);
PPC_FUNC_IMPL(__imp__sub_827B1208) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,312
	ctx.r3.s64 = 312;
	// bl 0x822959a8
	ctx.lr = 0x827B1220;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b123c
	if (ctx.cr6.eq) goto loc_827B123C;
	// bl 0x827b5bf8
	ctx.lr = 0x827B122C;
	sub_827B5BF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827B123C:
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

__attribute__((alias("__imp__sub_827B1250"))) PPC_WEAK_FUNC(sub_827B1250);
PPC_FUNC_IMPL(__imp__sub_827B1250) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,312
	ctx.r3.s64 = 312;
	// bl 0x822959a8
	ctx.lr = 0x827B1270;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b1294
	if (ctx.cr6.eq) goto loc_827B1294;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b5c60
	ctx.lr = 0x827B1280;
	sub_827B5C60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827B1294:
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

__attribute__((alias("__imp__sub_827B12AC"))) PPC_WEAK_FUNC(sub_827B12AC);
PPC_FUNC_IMPL(__imp__sub_827B12AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B12B0"))) PPC_WEAK_FUNC(sub_827B12B0);
PPC_FUNC_IMPL(__imp__sub_827B12B0) {
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
	// bl 0x827290a8
	ctx.lr = 0x827B12C8;
	sub_827290A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ad620
	ctx.lr = 0x827B12D0;
	sub_827AD620(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_827B12E4"))) PPC_WEAK_FUNC(sub_827B12E4);
PPC_FUNC_IMPL(__imp__sub_827B12E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B12E8"))) PPC_WEAK_FUNC(sub_827B12E8);
PPC_FUNC_IMPL(__imp__sub_827B12E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827B12F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8271e938
	ctx.lr = 0x827B1304;
	sub_8271E938(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x827ade88
	ctx.lr = 0x827B1318;
	sub_827ADE88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B1320"))) PPC_WEAK_FUNC(sub_827B1320);
PPC_FUNC_IMPL(__imp__sub_827B1320) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B132C"))) PPC_WEAK_FUNC(sub_827B132C);
PPC_FUNC_IMPL(__imp__sub_827B132C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B1330"))) PPC_WEAK_FUNC(sub_827B1330);
PPC_FUNC_IMPL(__imp__sub_827B1330) {
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
	// bl 0x8271f2f8
	ctx.lr = 0x827B1350;
	sub_8271F2F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,288
	ctx.r4.s64 = ctx.r31.s64 + 288;
	// bl 0x823845f8
	ctx.lr = 0x827B135C;
	sub_823845F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,292
	ctx.r4.s64 = ctx.r31.s64 + 292;
	// bl 0x823845f8
	ctx.lr = 0x827B1368;
	sub_823845F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x827ad5b8
	ctx.lr = 0x827B1374;
	sub_827AD5B8(ctx, base);
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

__attribute__((alias("__imp__sub_827B138C"))) PPC_WEAK_FUNC(sub_827B138C);
PPC_FUNC_IMPL(__imp__sub_827B138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B1390"))) PPC_WEAK_FUNC(sub_827B1390);
PPC_FUNC_IMPL(__imp__sub_827B1390) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,280
	ctx.r3.s64 = 280;
	// bl 0x822959a8
	ctx.lr = 0x827B13A8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b13c4
	if (ctx.cr6.eq) goto loc_827B13C4;
	// bl 0x827b5cd8
	ctx.lr = 0x827B13B4;
	sub_827B5CD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827B13C4:
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

__attribute__((alias("__imp__sub_827B13D8"))) PPC_WEAK_FUNC(sub_827B13D8);
PPC_FUNC_IMPL(__imp__sub_827B13D8) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,280
	ctx.r3.s64 = 280;
	// bl 0x822959a8
	ctx.lr = 0x827B13F8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b141c
	if (ctx.cr6.eq) goto loc_827B141C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b5d40
	ctx.lr = 0x827B1408;
	sub_827B5D40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827B141C:
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

__attribute__((alias("__imp__sub_827B1434"))) PPC_WEAK_FUNC(sub_827B1434);
PPC_FUNC_IMPL(__imp__sub_827B1434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B1438"))) PPC_WEAK_FUNC(sub_827B1438);
PPC_FUNC_IMPL(__imp__sub_827B1438) {
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
	// bl 0x82729308
	ctx.lr = 0x827B1450;
	sub_82729308(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ad620
	ctx.lr = 0x827B1458;
	sub_827AD620(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_827B146C"))) PPC_WEAK_FUNC(sub_827B146C);
PPC_FUNC_IMPL(__imp__sub_827B146C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B1470"))) PPC_WEAK_FUNC(sub_827B1470);
PPC_FUNC_IMPL(__imp__sub_827B1470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827B1478;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8271f538
	ctx.lr = 0x827B148C;
	sub_8271F538(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x827ade88
	ctx.lr = 0x827B14A0;
	sub_827ADE88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B14A8"))) PPC_WEAK_FUNC(sub_827B14A8);
PPC_FUNC_IMPL(__imp__sub_827B14A8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B14BC"))) PPC_WEAK_FUNC(sub_827B14BC);
PPC_FUNC_IMPL(__imp__sub_827B14BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B14C0"))) PPC_WEAK_FUNC(sub_827B14C0);
PPC_FUNC_IMPL(__imp__sub_827B14C0) {
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
	// bl 0x8271fef8
	ctx.lr = 0x827B14E0;
	sub_8271FEF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// bl 0x823845f8
	ctx.lr = 0x827B14EC;
	sub_823845F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,260
	ctx.r4.s64 = ctx.r31.s64 + 260;
	// bl 0x823845f8
	ctx.lr = 0x827B14F8;
	sub_823845F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x827ad5b8
	ctx.lr = 0x827B1504;
	sub_827AD5B8(ctx, base);
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

__attribute__((alias("__imp__sub_827B151C"))) PPC_WEAK_FUNC(sub_827B151C);
PPC_FUNC_IMPL(__imp__sub_827B151C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B1520"))) PPC_WEAK_FUNC(sub_827B1520);
PPC_FUNC_IMPL(__imp__sub_827B1520) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x822959a8
	ctx.lr = 0x827B1538;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b1554
	if (ctx.cr6.eq) goto loc_827B1554;
	// bl 0x827b5db8
	ctx.lr = 0x827B1544;
	sub_827B5DB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827B1554:
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

__attribute__((alias("__imp__sub_827B1568"))) PPC_WEAK_FUNC(sub_827B1568);
PPC_FUNC_IMPL(__imp__sub_827B1568) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x822959a8
	ctx.lr = 0x827B1588;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b15ac
	if (ctx.cr6.eq) goto loc_827B15AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b5e20
	ctx.lr = 0x827B1598;
	sub_827B5E20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827B15AC:
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

__attribute__((alias("__imp__sub_827B15C4"))) PPC_WEAK_FUNC(sub_827B15C4);
PPC_FUNC_IMPL(__imp__sub_827B15C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B15C8"))) PPC_WEAK_FUNC(sub_827B15C8);
PPC_FUNC_IMPL(__imp__sub_827B15C8) {
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
	// bl 0x82729568
	ctx.lr = 0x827B15E0;
	sub_82729568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ad620
	ctx.lr = 0x827B15E8;
	sub_827AD620(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_827B15FC"))) PPC_WEAK_FUNC(sub_827B15FC);
PPC_FUNC_IMPL(__imp__sub_827B15FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B1600"))) PPC_WEAK_FUNC(sub_827B1600);
PPC_FUNC_IMPL(__imp__sub_827B1600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827B1608;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82720138
	ctx.lr = 0x827B161C;
	sub_82720138(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// bl 0x827ade88
	ctx.lr = 0x827B1630;
	sub_827ADE88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B1638"))) PPC_WEAK_FUNC(sub_827B1638);
PPC_FUNC_IMPL(__imp__sub_827B1638) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B164C"))) PPC_WEAK_FUNC(sub_827B164C);
PPC_FUNC_IMPL(__imp__sub_827B164C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B1650"))) PPC_WEAK_FUNC(sub_827B1650);
PPC_FUNC_IMPL(__imp__sub_827B1650) {
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
	// bl 0x82720af8
	ctx.lr = 0x827B1670;
	sub_82720AF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// bl 0x823845f8
	ctx.lr = 0x827B167C;
	sub_823845F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,388
	ctx.r4.s64 = ctx.r31.s64 + 388;
	// bl 0x823845f8
	ctx.lr = 0x827B1688;
	sub_823845F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// bl 0x827ad5b8
	ctx.lr = 0x827B1694;
	sub_827AD5B8(ctx, base);
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

__attribute__((alias("__imp__sub_827B16AC"))) PPC_WEAK_FUNC(sub_827B16AC);
PPC_FUNC_IMPL(__imp__sub_827B16AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B16B0"))) PPC_WEAK_FUNC(sub_827B16B0);
PPC_FUNC_IMPL(__imp__sub_827B16B0) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,472
	ctx.r3.s64 = 472;
	// bl 0x822959a8
	ctx.lr = 0x827B16C8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b16e4
	if (ctx.cr6.eq) goto loc_827B16E4;
	// bl 0x827b5e98
	ctx.lr = 0x827B16D4;
	sub_827B5E98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827B16E4:
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

__attribute__((alias("__imp__sub_827B16F8"))) PPC_WEAK_FUNC(sub_827B16F8);
PPC_FUNC_IMPL(__imp__sub_827B16F8) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,472
	ctx.r3.s64 = 472;
	// bl 0x822959a8
	ctx.lr = 0x827B1718;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b173c
	if (ctx.cr6.eq) goto loc_827B173C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b5f00
	ctx.lr = 0x827B1728;
	sub_827B5F00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827B173C:
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

__attribute__((alias("__imp__sub_827B1754"))) PPC_WEAK_FUNC(sub_827B1754);
PPC_FUNC_IMPL(__imp__sub_827B1754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B1758"))) PPC_WEAK_FUNC(sub_827B1758);
PPC_FUNC_IMPL(__imp__sub_827B1758) {
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
	// bl 0x827297c8
	ctx.lr = 0x827B1770;
	sub_827297C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ad620
	ctx.lr = 0x827B1778;
	sub_827AD620(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_827B178C"))) PPC_WEAK_FUNC(sub_827B178C);
PPC_FUNC_IMPL(__imp__sub_827B178C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B1790"))) PPC_WEAK_FUNC(sub_827B1790);
PPC_FUNC_IMPL(__imp__sub_827B1790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827B1798;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82720d38
	ctx.lr = 0x827B17AC;
	sub_82720D38(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// bl 0x827ade88
	ctx.lr = 0x827B17C0;
	sub_827ADE88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B17C8"))) PPC_WEAK_FUNC(sub_827B17C8);
PPC_FUNC_IMPL(__imp__sub_827B17C8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B17DC"))) PPC_WEAK_FUNC(sub_827B17DC);
PPC_FUNC_IMPL(__imp__sub_827B17DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B17E0"))) PPC_WEAK_FUNC(sub_827B17E0);
PPC_FUNC_IMPL(__imp__sub_827B17E0) {
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
	// bl 0x827216f8
	ctx.lr = 0x827B1800;
	sub_827216F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,448
	ctx.r4.s64 = ctx.r31.s64 + 448;
	// bl 0x823845f8
	ctx.lr = 0x827B180C;
	sub_823845F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,452
	ctx.r4.s64 = ctx.r31.s64 + 452;
	// bl 0x823845f8
	ctx.lr = 0x827B1818;
	sub_823845F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// bl 0x827ad5b8
	ctx.lr = 0x827B1824;
	sub_827AD5B8(ctx, base);
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

__attribute__((alias("__imp__sub_827B183C"))) PPC_WEAK_FUNC(sub_827B183C);
PPC_FUNC_IMPL(__imp__sub_827B183C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B1840"))) PPC_WEAK_FUNC(sub_827B1840);
PPC_FUNC_IMPL(__imp__sub_827B1840) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x822959a8
	ctx.lr = 0x827B1858;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b1874
	if (ctx.cr6.eq) goto loc_827B1874;
	// bl 0x827b5f78
	ctx.lr = 0x827B1864;
	sub_827B5F78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827B1874:
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

__attribute__((alias("__imp__sub_827B1888"))) PPC_WEAK_FUNC(sub_827B1888);
PPC_FUNC_IMPL(__imp__sub_827B1888) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x822959a8
	ctx.lr = 0x827B18A8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b18cc
	if (ctx.cr6.eq) goto loc_827B18CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b5fd8
	ctx.lr = 0x827B18B8;
	sub_827B5FD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827B18CC:
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

__attribute__((alias("__imp__sub_827B18E4"))) PPC_WEAK_FUNC(sub_827B18E4);
PPC_FUNC_IMPL(__imp__sub_827B18E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B18E8"))) PPC_WEAK_FUNC(sub_827B18E8);
PPC_FUNC_IMPL(__imp__sub_827B18E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x827ad620
	sub_827AD620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B18EC"))) PPC_WEAK_FUNC(sub_827B18EC);
PPC_FUNC_IMPL(__imp__sub_827B18EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B18F0"))) PPC_WEAK_FUNC(sub_827B18F0);
PPC_FUNC_IMPL(__imp__sub_827B18F0) {
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
	// bl 0x82946b68
	ctx.lr = 0x827B1910;
	sub_82946B68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// bl 0x823845f8
	ctx.lr = 0x827B191C;
	sub_823845F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// bl 0x823845f8
	ctx.lr = 0x827B1928;
	sub_823845F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x827ad5b8
	ctx.lr = 0x827B1934;
	sub_827AD5B8(ctx, base);
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

__attribute__((alias("__imp__sub_827B194C"))) PPC_WEAK_FUNC(sub_827B194C);
PPC_FUNC_IMPL(__imp__sub_827B194C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B1950"))) PPC_WEAK_FUNC(sub_827B1950);
PPC_FUNC_IMPL(__imp__sub_827B1950) {
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
	// bl 0x8289eeb0
	ctx.lr = 0x827B1970;
	sub_8289EEB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r8,r11,21032
	ctx.r8.s64 = ctx.r11.s64 + 21032;
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lfs f13,388(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,432(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// addi r9,r31,452
	ctx.r9.s64 = ctx.r31.s64 + 452;
	// lfs f0,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r7,21100
	ctx.r6.s64 = ctx.r7.s64 + 21100;
	// lfs f12,388(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f11,436(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// lfs f10,392(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
	// stfs f10,440(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f9,396(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	ctx.f9.f64 = double(temp.f32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stfs f9,444(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 444, temp.u32);
	// lfs f8,384(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,448(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
loc_827B19CC:
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r10.u32);
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// stw r10,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r10.u32);
	// stw r10,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r7,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r7,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// bge 0x827b19cc
	if (!ctx.cr0.lt) goto loc_827B19CC;
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

__attribute__((alias("__imp__sub_827B1A50"))) PPC_WEAK_FUNC(sub_827B1A50);
PPC_FUNC_IMPL(__imp__sub_827B1A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,432(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B1A58"))) PPC_WEAK_FUNC(sub_827B1A58);
PPC_FUNC_IMPL(__imp__sub_827B1A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,432(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	ctx.f6.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f5,f7,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fadds f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fmuls f2,f12,f12
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmadds f0,f9,f9,f2
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f13,f5,f5,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B1AAC"))) PPC_WEAK_FUNC(sub_827B1AAC);
PPC_FUNC_IMPL(__imp__sub_827B1AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B1AB0"))) PPC_WEAK_FUNC(sub_827B1AB0);
PPC_FUNC_IMPL(__imp__sub_827B1AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x827B1AB8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ff17ac
	ctx.lr = 0x827B1AC0;
	__savevmx_123(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f12,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,180(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f7,176(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,184(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// fmr f4,f11
	ctx.f4.f64 = ctx.f11.f64;
	// lfd f5,-18352(r7)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r7.u32 + -18352);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lfs f6,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f13,f6,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// lfs f0,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f13
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fsubs f10,f8,f11
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// fmadds f11,f9,f9,f1
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f6,f10,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fsqrts f11,f6
	ctx.f11.f64 = double(float(sqrt(ctx.f6.f64)));
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x827b1b64
	if (!ctx.cr6.gt) goto loc_827B1B64;
	// fadds f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fsubs f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f8,f8,f1
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fsqrt f1,f8
	ctx.f1.f64 = sqrt(ctx.f8.f64);
	// fdiv f8,f5,f1
	ctx.f8.f64 = ctx.f5.f64 / ctx.f1.f64;
	// frsp f1,f8
	ctx.f1.f64 = double(float(ctx.f8.f64));
	// fmuls f8,f1,f12
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
loc_827B1B64:
	// lfs f1,448(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 448);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fcmpu cr6,f11,f1
	ctx.cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// bgt cr6,0x827b1cc0
	if (ctx.cr6.gt) goto loc_827B1CC0;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r11,r11,17956
	ctx.r11.s64 = ctx.r11.s64 + 17956;
	// lwz r10,17920(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17920);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x827b1ba4
	if (!ctx.cr6.eq) goto loc_827B1BA4;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,17920(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17920, ctx.r10.u32);
loc_827B1BA4:
	// fsqrt f8,f6
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = sqrt(ctx.f6.f64);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f11,-18108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18108);
	ctx.f11.f64 = double(temp.f32);
	// fdiv f7,f5,f8
	ctx.f7.f64 = ctx.f5.f64 / ctx.f8.f64;
	// fcmpu cr6,f6,f11
	ctx.cr6.compare(ctx.f6.f64, ctx.f11.f64);
	// frsp f11,f7
	ctx.f11.f64 = double(float(ctx.f7.f64));
	// ble cr6,0x827b1bdc
	if (!ctx.cr6.gt) goto loc_827B1BDC;
	// fmuls f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_827B1BDC:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f9,448(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 448);
	ctx.f9.f64 = double(temp.f32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// fmuls f11,f9,f12
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r10,31796
	ctx.r30.s64 = ctx.r10.s64 + 31796;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// fmuls f2,f8,f12
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f10,f2,f9
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lfs f13,1296(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1296);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f3,f9
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f3,f7,f12
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fsubs f10,f5,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// fsubs f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmuls f12,f3,f9
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lfs f2,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f9,f1,f12
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// b 0x827b1cd4
	goto loc_827B1CD4;
loc_827B1CC0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,31796
	ctx.r30.s64 = ctx.r11.s64 + 31796;
	// lfs f13,1296(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1296);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// ble cr6,0x827b1cd8
	if (!ctx.cr6.gt) goto loc_827B1CD8;
loc_827B1CD4:
	// fmr f8,f13
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f13.f64;
loc_827B1CD8:
	// fdivs f12,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fdivs f11,f13,f8
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fneg f8,f7
	ctx.f8.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// fneg f7,f4
	ctx.f7.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// fneg f6,f3
	ctx.f6.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// addi r7,r11,-17552
	ctx.r7.s64 = ctx.r11.s64 + -17552;
	// addi r6,r10,-17536
	ctx.r6.s64 = ctx.r10.s64 + -17536;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r5,r9,-17520
	ctx.r5.s64 = ctx.r9.s64 + -17520;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r11,r8,-17568
	ctx.r11.s64 = ctx.r8.s64 + -17568;
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v127,r0,r7
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmuls f5,f10,f12
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f4,f2,f12
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f3,f12,f9
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lvx128 v126,r0,r6
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v125,v127,v127
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// lvx128 v124,r0,r5
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v123,r0,r11
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
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
	// stfs f0,252(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f8,192(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f6,196(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f7,200(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f11,228(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f11,248(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// bl 0x823d27f0
	ctx.lr = 0x827B1D90;
	sub_823D27F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82380630
	ctx.lr = 0x827B1D9C;
	sub_82380630(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// lvx128 v63,r0,r3
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lvx128 v62,r3,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r3,r9
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v60,v63,v62
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// lvx128 v59,r3,r8
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v58,v63,v62
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v57,v59,v61
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// lvx128 v62,r0,r7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v56,v59,v61
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v55,v127,v62
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v127.u32)));
	// vmrghw128 v54,v60,v57
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v53,v58,v56
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrglw128 v52,v60,v57
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrglw128 v51,v58,v56
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmsum4fp128 v50,v125,v54
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmsum4fp128 v49,v125,v53
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmsum4fp128 v48,v125,v52
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v47,v125,v51
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v46,v124,v54
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmsum4fp128 v45,v124,v53
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmsum4fp128 v44,v124,v52
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v43,v124,v51
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v42,v123,v54
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmsum4fp128 v41,v123,v53
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmsum4fp128 v40,v123,v52
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v39,v63,v54
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmsum4fp128 v38,v63,v53
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// vmsum4fp128 v36,v63,v52
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmrglw128 v37,v127,v62
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v127.u32)));
	// vmsum4fp128 v34,v63,v51
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmrghw128 v33,v48,v47
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmsum4fp128 v32,v123,v51
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmrghw128 v63,v46,v45
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v62,v44,v43
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v61,r0,r5
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v35,v50,v49
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrghw128 v60,v61,v126
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// vmrglw128 v59,v61,v126
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// vmrghw128 v58,v42,v41
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v42.u32)));
	// addi r27,r1,192
	ctx.r27.s64 = ctx.r1.s64 + 192;
	// vmrghw128 v57,v35,v33
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// li r10,0
	ctx.r10.s64 = 0;
	// vmrghw128 v56,v63,v62
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// vmrghw128 v54,v55,v60
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// vmrglw128 v53,v55,v60
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// vmrghw128 v52,v37,v59
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// vmrglw128 v51,v37,v59
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// vmsum4fp128 v50,v57,v54
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// vmrghw128 v48,v39,v38
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmsum4fp128 v49,v56,v54
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmsum4fp128 v47,v57,v53
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// lfs f2,432(r29)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 432);
	ctx.f2.f64 = double(temp.f32);
	// vmrghw128 v45,v36,v34
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// vmsum4fp128 v46,v57,v52
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmrghw128 v43,v40,v32
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// vmsum4fp128 v44,v57,v51
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v42,v56,v52
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v41,v56,v53
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmrghw128 v39,v48,v45
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmsum4fp128 v40,v56,v51
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmrghw128 v38,v58,v43
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmsum4fp128 v37,v39,v54
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmsum4fp128 v36,v38,v54
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmsum4fp128 v35,v38,v52
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v34,v38,v53
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmsum4fp128 v33,v38,v51
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v32,v39,v52
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v63,v39,v53
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmsum4fp128 v62,v39,v51
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmrghw128 v61,v50,v46
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrghw128 v60,v47,v44
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v59,v49,v42
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmrghw128 v58,v41,v40
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v57,v61,v60
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrghw128 v56,v59,v58
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v55,v36,v35
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// vmrghw128 v54,v34,v33
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v34.u32)));
	// stvx128 v57,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v53,v37,v32
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v52,v63,v62
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// stvx128 v56,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v51,v55,v54
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrghw128 v50,v53,v52
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// stvx128 v51,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v50,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82880738
	ctx.lr = 0x827B1F34;
	sub_82880738(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ff1a44
	ctx.lr = 0x827B1F44;
	__restvmx_123(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B1F48"))) PPC_WEAK_FUNC(sub_827B1F48);
PPC_FUNC_IMPL(__imp__sub_827B1F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827B1F50;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6ae4
	ctx.lr = 0x827B1F58;
	__savefpr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r30,128
	ctx.r11.s64 = ctx.r30.s64 + 128;
	// lfs f13,180(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,388(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,392(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,432(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f3,f9,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fcmpu cr6,f1,f5
	ctx.cr6.compare(ctx.f1.f64, ctx.f5.f64);
	// ble cr6,0x827b2200
	if (!ctx.cr6.gt) goto loc_827B2200;
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfs f5,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// std r9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// lfs f3,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f6,f7,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f11.f64));
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fmadds f11,f5,f7,f9
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f9.f64));
	// lfs f10,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f4,f7,f8
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f8.f64));
	// lfs f8,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// lfs f6,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f4,f1,f3,f11
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmadds f5,f2,f3,f13
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f13.f64));
	// fmadds f3,f0,f3,f9
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f9.f64));
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// fadds f28,f4,f8
	ctx.f28.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// fadds f27,f5,f10
	ctx.f27.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fadds f29,f3,f6
	ctx.f29.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// bl 0x82cb2298
	ctx.lr = 0x827B2034;
	sub_82CB2298(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f1,120(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// fctiwz f0,f2
	ctx.f0.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// bl 0x82cb3d10
	ctx.lr = 0x827B206C;
	sub_82CB3D10(ctx, base);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lfs f3,432(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	ctx.f3.f64 = double(temp.f32);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f30,-32444(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -32444);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// fctiwz f9,f12
	ctx.f9.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f31,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x827ad0b8
	ctx.lr = 0x827B20F8;
	sub_827AD0B8(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827b2200
	if (ctx.cr6.eq) goto loc_827B2200;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x82cb2298
	ctx.lr = 0x827B2120;
	sub_82CB2298(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// fctiwz f10,f12
	ctx.f10.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f10.u64);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// frsp f1,f9
	ctx.f1.f64 = double(float(ctx.f9.f64));
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// bl 0x82cb3d10
	ctx.lr = 0x827B2158;
	sub_82CB3D10(ctx, base);
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lfs f3,432(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	ctx.f3.f64 = double(temp.f32);
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f7.u64);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f4,-18324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18324);
	ctx.f4.f64 = double(temp.f32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lfd f6,128(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lfd f5,136(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f0,f6
	ctx.f0.f64 = double(ctx.f6.s64);
	// fcfid f13,f5
	ctx.f13.f64 = double(ctx.f5.s64);
	// frsp f5,f0
	ctx.f5.f64 = double(float(ctx.f0.f64));
	// frsp f6,f13
	ctx.f6.f64 = double(float(ctx.f13.f64));
	// bl 0x827ad0b8
	ctx.lr = 0x827B21D8;
	sub_827AD0B8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x827b2200
	if (ctx.cr6.eq) goto loc_827B2200;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82404b10
	ctx.lr = 0x827B2200;
	sub_82404B10(ctx, base);
loc_827B2200:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b30
	ctx.lr = 0x827B220C;
	__restfpr_27(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B2210"))) PPC_WEAK_FUNC(sub_827B2210);
PPC_FUNC_IMPL(__imp__sub_827B2210) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,88
	ctx.r11.s64 = ctx.r4.s64 * 88;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,452
	ctx.r3.s64 = ctx.r11.s64 + 452;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B2220"))) PPC_WEAK_FUNC(sub_827B2220);
PPC_FUNC_IMPL(__imp__sub_827B2220) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,88
	ctx.r11.s64 = ctx.r4.s64 * 88;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,452
	ctx.r3.s64 = ctx.r11.s64 + 452;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B2230"))) PPC_WEAK_FUNC(sub_827B2230);
PPC_FUNC_IMPL(__imp__sub_827B2230) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,278(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 278);
	// b 0x827bbce8
	sub_827BBCE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B2238"))) PPC_WEAK_FUNC(sub_827B2238);
PPC_FUNC_IMPL(__imp__sub_827B2238) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,278(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 278);
	// b 0x827bbde8
	sub_827BBDE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B2240"))) PPC_WEAK_FUNC(sub_827B2240);
PPC_FUNC_IMPL(__imp__sub_827B2240) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82388240
	ctx.lr = 0x827B2254;
	sub_82388240(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827b6de0
	ctx.lr = 0x827B2260;
	sub_827B6DE0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B2274"))) PPC_WEAK_FUNC(sub_827B2274);
PPC_FUNC_IMPL(__imp__sub_827B2274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2278"))) PPC_WEAK_FUNC(sub_827B2278);
PPC_FUNC_IMPL(__imp__sub_827B2278) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,348
	ctx.r3.s64 = ctx.r3.s64 + 348;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B2280"))) PPC_WEAK_FUNC(sub_827B2280);
PPC_FUNC_IMPL(__imp__sub_827B2280) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82388240
	ctx.lr = 0x827B2294;
	sub_82388240(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827b6e50
	ctx.lr = 0x827B22A0;
	sub_827B6E50(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B22B4"))) PPC_WEAK_FUNC(sub_827B22B4);
PPC_FUNC_IMPL(__imp__sub_827B22B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B22B8"))) PPC_WEAK_FUNC(sub_827B22B8);
PPC_FUNC_IMPL(__imp__sub_827B22B8) {
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
	// lwz r11,364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// addi r31,r3,364
	ctx.r31.s64 = ctx.r3.s64 + 364;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827b2378
	if (!ctx.cr6.eq) goto loc_827B2378;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e640b8
	ctx.lr = 0x827B22EC;
	sub_82E640B8(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82388240
	ctx.lr = 0x827B22FC;
	sub_82388240(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827252f0
	ctx.lr = 0x827B2308;
	sub_827252F0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82388240
	ctx.lr = 0x827B2310;
	sub_82388240(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827b6e50
	ctx.lr = 0x827B231C;
	sub_827B6E50(ctx, base);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-31905
	ctx.r8.s64 = -2090926080;
	// addi r7,r10,-8388
	ctx.r7.s64 = ctx.r10.s64 + -8388;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-19920
	ctx.r3.s64 = ctx.r8.s64 + -19920;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r30,44(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r4,20(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,40(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// bl 0x82357898
	ctx.lr = 0x827B2354;
	sub_82357898(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823589c8
	ctx.lr = 0x827B2364;
	sub_823589C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238fb58
	ctx.lr = 0x827B2370;
	sub_8238FB58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358a60
	ctx.lr = 0x827B2378;
	sub_82358A60(ctx, base);
loc_827B2378:
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

__attribute__((alias("__imp__sub_827B2394"))) PPC_WEAK_FUNC(sub_827B2394);
PPC_FUNC_IMPL(__imp__sub_827B2394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2398"))) PPC_WEAK_FUNC(sub_827B2398);
PPC_FUNC_IMPL(__imp__sub_827B2398) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// lbz r11,278(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 278);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,25344(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25344);
	// bne cr6,0x827b23b8
	if (!ctx.cr6.eq) goto loc_827B23B8;
	// lwz r9,876(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 876);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827b23c0
	if (ctx.cr6.eq) goto loc_827B23C0;
loc_827B23B8:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x827b23c8
	if (!ctx.cr6.eq) goto loc_827B23C8;
loc_827B23C0:
	// addi r3,r3,372
	ctx.r3.s64 = ctx.r3.s64 + 372;
	// blr 
	return;
loc_827B23C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827b23dc
	if (!ctx.cr6.eq) goto loc_827B23DC;
	// lwz r10,876(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 876);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x827b23e4
	if (ctx.cr6.eq) goto loc_827B23E4;
loc_827B23DC:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x827b23ec
	if (!ctx.cr6.eq) goto loc_827B23EC;
loc_827B23E4:
	// addi r3,r3,388
	ctx.r3.s64 = ctx.r3.s64 + 388;
	// blr 
	return;
loc_827B23EC:
	// addi r3,r3,404
	ctx.r3.s64 = ctx.r3.s64 + 404;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B23F4"))) PPC_WEAK_FUNC(sub_827B23F4);
PPC_FUNC_IMPL(__imp__sub_827B23F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B23F8"))) PPC_WEAK_FUNC(sub_827B23F8);
PPC_FUNC_IMPL(__imp__sub_827B23F8) {
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
	// lwz r11,420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// addi r31,r3,420
	ctx.r31.s64 = ctx.r3.s64 + 420;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827b24b8
	if (!ctx.cr6.eq) goto loc_827B24B8;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e640b8
	ctx.lr = 0x827B242C;
	sub_82E640B8(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82388240
	ctx.lr = 0x827B243C;
	sub_82388240(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82725358
	ctx.lr = 0x827B2448;
	sub_82725358(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82388240
	ctx.lr = 0x827B2450;
	sub_82388240(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827b6de0
	ctx.lr = 0x827B245C;
	sub_827B6DE0(ctx, base);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-31905
	ctx.r8.s64 = -2090926080;
	// addi r7,r10,-6952
	ctx.r7.s64 = ctx.r10.s64 + -6952;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-19920
	ctx.r3.s64 = ctx.r8.s64 + -19920;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r30,44(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r4,20(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,40(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// bl 0x82357898
	ctx.lr = 0x827B2494;
	sub_82357898(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823589c8
	ctx.lr = 0x827B24A4;
	sub_823589C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238fb58
	ctx.lr = 0x827B24B0;
	sub_8238FB58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358a60
	ctx.lr = 0x827B24B8;
	sub_82358A60(ctx, base);
loc_827B24B8:
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

__attribute__((alias("__imp__sub_827B24D4"))) PPC_WEAK_FUNC(sub_827B24D4);
PPC_FUNC_IMPL(__imp__sub_827B24D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B24D8"))) PPC_WEAK_FUNC(sub_827B24D8);
PPC_FUNC_IMPL(__imp__sub_827B24D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x827B24E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x827b61c0
	ctx.lr = 0x827B2500;
	sub_827B61C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x827b6630
	ctx.lr = 0x827B251C;
	sub_827B6630(ctx, base);
	// or r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 | ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x827b6aa8
	ctx.lr = 0x827B2538;
	sub_827B6AA8(ctx, base);
	// or r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 | ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B2544"))) PPC_WEAK_FUNC(sub_827B2544);
PPC_FUNC_IMPL(__imp__sub_827B2544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2548"))) PPC_WEAK_FUNC(sub_827B2548);
PPC_FUNC_IMPL(__imp__sub_827B2548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x827B2550;
	__savegprlr_26(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r30,4
	ctx.r30.s64 = 4;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b25d0
	if (ctx.cr6.eq) goto loc_827B25D0;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B2590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827B25A0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x827b25a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B25A0;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x827b26a4
	if (ctx.cr6.eq) goto loc_827B26A4;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x827b2634
	if (ctx.cr6.eq) goto loc_827B2634;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x827b2704
	if (!ctx.cr6.eq) goto loc_827B2704;
loc_827B25D0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r26,4(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bl 0x8283f350
	ctx.lr = 0x827B25F4;
	sub_8283F350(ctx, base);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r8,r9,21112
	ctx.r8.s64 = ctx.r9.s64 + 21112;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r8,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827b8628
	ctx.lr = 0x827B2614;
	sub_827B8628(ctx, base);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x827b6050
	ctx.lr = 0x827B2628;
	sub_827B6050(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_827B2634:
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r26,4(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8283f350
	ctx.lr = 0x827B264C;
	sub_8283F350(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r9,r10,21140
	ctx.r9.s64 = ctx.r10.s64 + 21140;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// bl 0x827b8a28
	ctx.lr = 0x827B2674;
	sub_827B8A28(ctx, base);
	// ld r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 108);
	// ld r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 116);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,32
	ctx.r3.s64 = ctx.r28.s64 + 32;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// bl 0x827b64f0
	ctx.lr = 0x827B2698;
	sub_827B64F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_827B26A4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r26,4(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bl 0x8283f350
	ctx.lr = 0x827B26C8;
	sub_8283F350(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r8,21168
	ctx.r7.s64 = ctx.r8.s64 + 21168;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// bl 0x827b8e38
	ctx.lr = 0x827B26F0;
	sub_827B8E38(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,60
	ctx.r3.s64 = ctx.r28.s64 + 60;
	// bl 0x827b6968
	ctx.lr = 0x827B2704;
	sub_827B6968(ctx, base);
loc_827B2704:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B2710"))) PPC_WEAK_FUNC(sub_827B2710);
PPC_FUNC_IMPL(__imp__sub_827B2710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x827B2718;
	__savegprlr_20(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// ld r26,128(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r26,156(r1)
	PPC_STORE_U64(ctx.r1.u32 + 156, ctx.r26.u64);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r27,164(r1)
	PPC_STORE_U64(ctx.r1.u32 + 164, ctx.r27.u64);
	// beq cr6,0x827b27b4
	if (ctx.cr6.eq) goto loc_827B27B4;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B2780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827B2790:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x827b2790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B2790;
	// ld r27,164(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 164);
	// ld r26,156(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 156);
	// lwz r28,148(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_827B27B4:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ld r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 20);
	// rlwinm r10,r9,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	// beq cr6,0x827b2ac0
	if (ctx.cr6.eq) goto loc_827B2AC0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x827b2954
	if (ctx.cr6.eq) goto loc_827B2954;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x827b27e4
	if (ctx.cr6.eq) goto loc_827B27E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_827B27E4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b28a0
	if (ctx.cr6.eq) goto loc_827B28A0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r22,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r22.u8);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x827b7530
	ctx.lr = 0x827B280C;
	sub_827B7530(ctx, base);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827b2830
	if (ctx.cr6.eq) goto loc_827B2830;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b2830
	if (ctx.cr6.eq) goto loc_827B2830;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x827b2834
	goto loc_827B2834;
loc_827B2830:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_827B2834:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827b7758
	ctx.lr = 0x827B2840;
	sub_827B7758(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827b76b0
	ctx.lr = 0x827B2854;
	sub_827B76B0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82358a60
	ctx.lr = 0x827B285C;
	sub_82358A60(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stb r22,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r22.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827b7618
	ctx.lr = 0x827B2884;
	sub_827B7618(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827b77e0
	ctx.lr = 0x827B2894;
	sub_827B77E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_827B28A0:
	// lwz r28,24(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8283f350
	ctx.lr = 0x827B28B8;
	sub_8283F350(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// addi r10,r11,21112
	ctx.r10.s64 = ctx.r11.s64 + 21112;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// bl 0x827b8628
	ctx.lr = 0x827B28D8;
	sub_827B8628(ctx, base);
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// rlwinm r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827b28fc
	if (ctx.cr6.eq) goto loc_827B28FC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b28fc
	if (ctx.cr6.eq) goto loc_827B28FC;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x827b2900
	goto loc_827B2900;
loc_827B28FC:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_827B2900:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827b2f18
	ctx.lr = 0x827B290C;
	sub_827B2F18(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827b2e48
	ctx.lr = 0x827B2920;
	sub_827B2E48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82358a60
	ctx.lr = 0x827B2928;
	sub_82358A60(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stb r22,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r22.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827b2cd0
	ctx.lr = 0x827B2950;
	sub_827B2CD0(ctx, base);
	// b 0x827b2c28
	goto loc_827B2C28;
loc_827B2954:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b2a08
	if (ctx.cr6.eq) goto loc_827B2A08;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827b71f8
	ctx.lr = 0x827B2974;
	sub_827B71F8(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b2998
	if (ctx.cr6.eq) goto loc_827B2998;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b2998
	if (ctx.cr6.eq) goto loc_827B2998;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x827b299c
	goto loc_827B299C;
loc_827B2998:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_827B299C:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x827b7428
	ctx.lr = 0x827B29A8;
	sub_827B7428(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827b7380
	ctx.lr = 0x827B29BC;
	sub_827B7380(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82358a60
	ctx.lr = 0x827B29C4;
	sub_82358A60(ctx, base);
	// std r26,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r26.u64);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// std r27,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r27.u64);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827b72e8
	ctx.lr = 0x827B29EC;
	sub_827B72E8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827b74b0
	ctx.lr = 0x827B29FC;
	sub_827B74B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_827B2A08:
	// lwz r21,24(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r20,4(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x8283f350
	ctx.lr = 0x827B2A20;
	sub_8283F350(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// addi r10,r11,21140
	ctx.r10.s64 = ctx.r11.s64 + 21140;
	// stw r28,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r28.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// bl 0x827b8a28
	ctx.lr = 0x827B2A44;
	sub_827B8A28(ctx, base);
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// rlwinm r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827b2a68
	if (ctx.cr6.eq) goto loc_827B2A68;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b2a68
	if (ctx.cr6.eq) goto loc_827B2A68;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x827b2a6c
	goto loc_827B2A6C;
loc_827B2A68:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_827B2A6C:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827b3398
	ctx.lr = 0x827B2A78;
	sub_827B3398(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827b3298
	ctx.lr = 0x827B2A8C;
	sub_827B3298(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82358a60
	ctx.lr = 0x827B2A94;
	sub_82358A60(ctx, base);
	// std r26,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r26.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// std r27,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r27.u64);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827b30d8
	ctx.lr = 0x827B2ABC;
	sub_827B30D8(ctx, base);
	// b 0x827b2c28
	goto loc_827B2C28;
loc_827B2AC0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b2b74
	if (ctx.cr6.eq) goto loc_827B2B74;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827b6ec0
	ctx.lr = 0x827B2AE0;
	sub_827B6EC0(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b2b04
	if (ctx.cr6.eq) goto loc_827B2B04;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b2b04
	if (ctx.cr6.eq) goto loc_827B2B04;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x827b2b08
	goto loc_827B2B08;
loc_827B2B04:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_827B2B08:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x827b70f0
	ctx.lr = 0x827B2B14;
	sub_827B70F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827b7048
	ctx.lr = 0x827B2B28;
	sub_827B7048(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82358a60
	ctx.lr = 0x827B2B30;
	sub_82358A60(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stb r22,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r22.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827b6fb0
	ctx.lr = 0x827B2B58;
	sub_827B6FB0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827b7178
	ctx.lr = 0x827B2B68;
	sub_827B7178(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_827B2B74:
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r26,4(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8283f350
	ctx.lr = 0x827B2B8C;
	sub_8283F350(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// addi r10,r11,21168
	ctx.r10.s64 = ctx.r11.s64 + 21168;
	// stw r28,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r28.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// bl 0x827b8e38
	ctx.lr = 0x827B2BB0;
	sub_827B8E38(ctx, base);
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// rlwinm r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827b2bd4
	if (ctx.cr6.eq) goto loc_827B2BD4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b2bd4
	if (ctx.cr6.eq) goto loc_827B2BD4;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x827b2bd8
	goto loc_827B2BD8;
loc_827B2BD4:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_827B2BD8:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827b37a0
	ctx.lr = 0x827B2BE4;
	sub_827B37A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827b36d0
	ctx.lr = 0x827B2BF8;
	sub_827B36D0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82358a60
	ctx.lr = 0x827B2C00;
	sub_82358A60(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stb r22,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r22.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827b3558
	ctx.lr = 0x827B2C28;
	sub_827B3558(ctx, base);
loc_827B2C28:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8283f550
	ctx.lr = 0x827B2C38;
	sub_8283F550(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B2C44"))) PPC_WEAK_FUNC(sub_827B2C44);
PPC_FUNC_IMPL(__imp__sub_827B2C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2C48"))) PPC_WEAK_FUNC(sub_827B2C48);
PPC_FUNC_IMPL(__imp__sub_827B2C48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b2cc4
	if (!ctx.cr6.eq) goto loc_827B2CC4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b2cc4
	if (!ctx.cr6.eq) goto loc_827B2CC4;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x827b2cc4
	if (!ctx.cr6.eq) goto loc_827B2CC4;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b2cc4
	if (!ctx.cr6.eq) goto loc_827B2CC4;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b2cc4
	if (!ctx.cr6.eq) goto loc_827B2CC4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b2cc4
	if (!ctx.cr6.eq) goto loc_827B2CC4;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_827B2CC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B2CCC"))) PPC_WEAK_FUNC(sub_827B2CCC);
PPC_FUNC_IMPL(__imp__sub_827B2CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2CD0"))) PPC_WEAK_FUNC(sub_827B2CD0);
PPC_FUNC_IMPL(__imp__sub_827B2CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x827B2CD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827b2d4c
	if (ctx.cr6.eq) goto loc_827B2D4C;
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b2d4c
	if (ctx.cr6.eq) goto loc_827B2D4C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,84(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 84);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B2D28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827B2D4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827B2D4C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b2dac
	if (ctx.cr6.eq) goto loc_827B2DAC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B2D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b2dac
	if (ctx.cr6.eq) goto loc_827B2DAC;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B2D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827B2D98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827b2dac
	if (ctx.cr6.eq) goto loc_827B2DAC;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// bne cr6,0x827b2db0
	if (!ctx.cr6.eq) goto loc_827B2DB0;
loc_827B2DAC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_827B2DB0:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827b3e30
	ctx.lr = 0x827B2DC4;
	sub_827B3E30(ctx, base);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r30,48
	ctx.r28.s64 = ctx.r30.s64 + 48;
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r5,92
	ctx.r3.s64 = ctx.r5.s64 + 92;
	// bl 0x827d3868
	ctx.lr = 0x827B2DE4;
	sub_827D3868(ctx, base);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,84(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b2e10
	if (ctx.cr6.eq) goto loc_827B2E10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r30,112
	ctx.r7.s64 = ctx.r30.s64 + 112;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B2E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827B2E10:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8283f460
	ctx.lr = 0x827B2E3C;
	sub_8283F460(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B2E44"))) PPC_WEAK_FUNC(sub_827B2E44);
PPC_FUNC_IMPL(__imp__sub_827B2E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2E48"))) PPC_WEAK_FUNC(sub_827B2E48);
PPC_FUNC_IMPL(__imp__sub_827B2E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x827B2E50;
	__savegprlr_28(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x827854f8
	ctx.lr = 0x827B2E6C;
	sub_827854F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x827b3d28
	ctx.lr = 0x827B2E80;
	sub_827B3D28(ctx, base);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r5,80
	ctx.r3.s64 = ctx.r5.s64 + 80;
	// bl 0x827addc0
	ctx.lr = 0x827B2E94;
	sub_827ADDC0(ctx, base);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,84(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b2ec0
	if (ctx.cr6.eq) goto loc_827B2EC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B2EC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827B2EC0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,80
	ctx.r5.s64 = ctx.r11.s64 + 80;
	// lfs f0,176(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 436);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x825fec10
	ctx.lr = 0x827B2F00;
	sub_825FEC10(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82404b90
	ctx.lr = 0x827B2F0C;
	sub_82404B90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B2F14"))) PPC_WEAK_FUNC(sub_827B2F14);
PPC_FUNC_IMPL(__imp__sub_827B2F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2F18"))) PPC_WEAK_FUNC(sub_827B2F18);
PPC_FUNC_IMPL(__imp__sub_827B2F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827B2F20;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,4(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82785910
	ctx.lr = 0x827B2F3C;
	sub_82785910(ctx, base);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// beq cr6,0x827b2f4c
	if (ctx.cr6.eq) goto loc_827B2F4C;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
loc_827B2F4C:
	// lwz r10,24(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,20(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// lis r8,-31905
	ctx.r8.s64 = -2090926080;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r8,-19920
	ctx.r3.s64 = ctx.r8.s64 + -19920;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r29,44(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r6,40(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82357898
	ctx.lr = 0x827B2F80;
	sub_82357898(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823589c8
	ctx.lr = 0x827B2F90;
	sub_823589C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B2F9C"))) PPC_WEAK_FUNC(sub_827B2F9C);
PPC_FUNC_IMPL(__imp__sub_827B2F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2FA0"))) PPC_WEAK_FUNC(sub_827B2FA0);
PPC_FUNC_IMPL(__imp__sub_827B2FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827B2FA8;
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
	// beq cr6,0x827b2fe8
	if (ctx.cr6.eq) goto loc_827B2FE8;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827b2fd4
	if (!ctx.cr6.eq) goto loc_827B2FD4;
	// bl 0x822900a0
	ctx.lr = 0x827B2FD0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_827B2FD4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B2FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827B2FE8:
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

__attribute__((alias("__imp__sub_827B3000"))) PPC_WEAK_FUNC(sub_827B3000);
PPC_FUNC_IMPL(__imp__sub_827B3000) {
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
	// bl 0x827b63e8
	ctx.lr = 0x827B3018;
	sub_827B63E8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82294a58
	ctx.lr = 0x827B3020;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_827B3040"))) PPC_WEAK_FUNC(sub_827B3040);
PPC_FUNC_IMPL(__imp__sub_827B3040) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b30cc
	if (!ctx.cr6.eq) goto loc_827B30CC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b30cc
	if (!ctx.cr6.eq) goto loc_827B30CC;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x827b30cc
	if (!ctx.cr6.eq) goto loc_827B30CC;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b30cc
	if (!ctx.cr6.eq) goto loc_827B30CC;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b30cc
	if (!ctx.cr6.eq) goto loc_827B30CC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b30cc
	if (!ctx.cr6.eq) goto loc_827B30CC;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b30cc
	if (!ctx.cr6.eq) goto loc_827B30CC;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_827B30CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B30D4"))) PPC_WEAK_FUNC(sub_827B30D4);
PPC_FUNC_IMPL(__imp__sub_827B30D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B30D8"))) PPC_WEAK_FUNC(sub_827B30D8);
PPC_FUNC_IMPL(__imp__sub_827B30D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x827B30E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r5,r11,84
	ctx.r5.s64 = ctx.r11.s64 + 84;
	// bne cr6,0x827b3110
	if (!ctx.cr6.eq) goto loc_827B3110;
	// li r5,0
	ctx.r5.s64 = 0;
loc_827B3110:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f12,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f11,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x825fec10
	ctx.lr = 0x827B3144;
	sub_825FEC10(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827b31a0
	if (ctx.cr6.eq) goto loc_827B31A0;
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b31a0
	if (ctx.cr6.eq) goto loc_827B31A0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,88(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 88);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B317C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827B31A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827B31A0:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b3200
	if (ctx.cr6.eq) goto loc_827B3200;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B31C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b3200
	if (ctx.cr6.eq) goto loc_827B3200;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B31DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827B31EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827b3200
	if (ctx.cr6.eq) goto loc_827B3200;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// bne cr6,0x827b3204
	if (!ctx.cr6.eq) goto loc_827B3204;
loc_827B3200:
	// li r7,0
	ctx.r7.s64 = 0;
loc_827B3204:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827b4638
	ctx.lr = 0x827B3218;
	sub_827B4638(ctx, base);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r29,48
	ctx.r28.s64 = ctx.r29.s64 + 48;
	// lwz r6,24(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r5,96
	ctx.r3.s64 = ctx.r5.s64 + 96;
	// bl 0x827d3868
	ctx.lr = 0x827B3238;
	sub_827D3868(ctx, base);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,88(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b3264
	if (ctx.cr6.eq) goto loc_827B3264;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r29,112
	ctx.r7.s64 = ctx.r29.s64 + 112;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B3264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827B3264:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8283f460
	ctx.lr = 0x827B3290;
	sub_8283F460(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B3298"))) PPC_WEAK_FUNC(sub_827B3298);
PPC_FUNC_IMPL(__imp__sub_827B3298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x827B32A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r27,r29,92
	ctx.r27.s64 = ctx.r29.s64 + 92;
	// bne cr6,0x827b32c8
	if (!ctx.cr6.eq) goto loc_827B32C8;
	// li r27,0
	ctx.r27.s64 = 0;
loc_827B32C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x827854f8
	ctx.lr = 0x827B32D4;
	sub_827854F8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r6,192(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// bl 0x82713900
	ctx.lr = 0x827B32EC;
	sub_82713900(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x827b4530
	ctx.lr = 0x827B3300;
	sub_827B4530(ctx, base);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r5,80
	ctx.r3.s64 = ctx.r5.s64 + 80;
	// bl 0x827addc0
	ctx.lr = 0x827B3314;
	sub_827ADDC0(ctx, base);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,88(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b3340
	if (ctx.cr6.eq) goto loc_827B3340;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B3340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827B3340:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,80
	ctx.r5.s64 = ctx.r11.s64 + 80;
	// lfs f0,176(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 436);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x825fec10
	ctx.lr = 0x827B3380;
	sub_825FEC10(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82404b90
	ctx.lr = 0x827B338C;
	sub_82404B90(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B3394"))) PPC_WEAK_FUNC(sub_827B3394);
PPC_FUNC_IMPL(__imp__sub_827B3394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3398"))) PPC_WEAK_FUNC(sub_827B3398);
PPC_FUNC_IMPL(__imp__sub_827B3398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827B33A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,4(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82785910
	ctx.lr = 0x827B33BC;
	sub_82785910(ctx, base);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// beq cr6,0x827b33cc
	if (ctx.cr6.eq) goto loc_827B33CC;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
loc_827B33CC:
	// lwz r10,24(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,20(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// lis r8,-31905
	ctx.r8.s64 = -2090926080;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r8,-19920
	ctx.r3.s64 = ctx.r8.s64 + -19920;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r29,44(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r6,40(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82357898
	ctx.lr = 0x827B3400;
	sub_82357898(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823589c8
	ctx.lr = 0x827B3410;
	sub_823589C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B341C"))) PPC_WEAK_FUNC(sub_827B341C);
PPC_FUNC_IMPL(__imp__sub_827B341C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3420"))) PPC_WEAK_FUNC(sub_827B3420);
PPC_FUNC_IMPL(__imp__sub_827B3420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827B3428;
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
	// beq cr6,0x827b3468
	if (ctx.cr6.eq) goto loc_827B3468;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827b3454
	if (!ctx.cr6.eq) goto loc_827B3454;
	// bl 0x822900a0
	ctx.lr = 0x827B3450;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_827B3454:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B3468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827B3468:
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

__attribute__((alias("__imp__sub_827B3480"))) PPC_WEAK_FUNC(sub_827B3480);
PPC_FUNC_IMPL(__imp__sub_827B3480) {
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
	// bl 0x827b6860
	ctx.lr = 0x827B3498;
	sub_827B6860(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82294a58
	ctx.lr = 0x827B34A0;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_827B34C0"))) PPC_WEAK_FUNC(sub_827B34C0);
PPC_FUNC_IMPL(__imp__sub_827B34C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b354c
	if (!ctx.cr6.eq) goto loc_827B354C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b354c
	if (!ctx.cr6.eq) goto loc_827B354C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x827b354c
	if (!ctx.cr6.eq) goto loc_827B354C;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b354c
	if (!ctx.cr6.eq) goto loc_827B354C;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b354c
	if (!ctx.cr6.eq) goto loc_827B354C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b354c
	if (!ctx.cr6.eq) goto loc_827B354C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b354c
	if (!ctx.cr6.eq) goto loc_827B354C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_827B354C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B3554"))) PPC_WEAK_FUNC(sub_827B3554);
PPC_FUNC_IMPL(__imp__sub_827B3554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3558"))) PPC_WEAK_FUNC(sub_827B3558);
PPC_FUNC_IMPL(__imp__sub_827B3558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x827B3560;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827b35d4
	if (ctx.cr6.eq) goto loc_827B35D4;
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b35d4
	if (ctx.cr6.eq) goto loc_827B35D4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,84(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 84);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B35B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827B35D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827B35D4:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b3634
	if (ctx.cr6.eq) goto loc_827B3634;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B35F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b3634
	if (ctx.cr6.eq) goto loc_827B3634;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B3610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827B3620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827b3634
	if (ctx.cr6.eq) goto loc_827B3634;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// bne cr6,0x827b3638
	if (!ctx.cr6.eq) goto loc_827B3638;
loc_827B3634:
	// li r7,0
	ctx.r7.s64 = 0;
loc_827B3638:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827b4df8
	ctx.lr = 0x827B364C;
	sub_827B4DF8(ctx, base);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r30,48
	ctx.r28.s64 = ctx.r30.s64 + 48;
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r5,92
	ctx.r3.s64 = ctx.r5.s64 + 92;
	// bl 0x827d3868
	ctx.lr = 0x827B366C;
	sub_827D3868(ctx, base);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,84(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b3698
	if (ctx.cr6.eq) goto loc_827B3698;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r30,112
	ctx.r7.s64 = ctx.r30.s64 + 112;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B3698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827B3698:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8283f460
	ctx.lr = 0x827B36C4;
	sub_8283F460(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B36CC"))) PPC_WEAK_FUNC(sub_827B36CC);
PPC_FUNC_IMPL(__imp__sub_827B36CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B36D0"))) PPC_WEAK_FUNC(sub_827B36D0);
PPC_FUNC_IMPL(__imp__sub_827B36D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x827B36D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82785598
	ctx.lr = 0x827B36F8;
	sub_82785598(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x827b4cf0
	ctx.lr = 0x827B370C;
	sub_827B4CF0(ctx, base);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r5,80
	ctx.r3.s64 = ctx.r5.s64 + 80;
	// bl 0x827addc0
	ctx.lr = 0x827B3720;
	sub_827ADDC0(ctx, base);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,84(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b374c
	if (ctx.cr6.eq) goto loc_827B374C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B374C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827B374C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,80
	ctx.r5.s64 = ctx.r11.s64 + 80;
	// lfs f0,176(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 436);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x825fec10
	ctx.lr = 0x827B378C;
	sub_825FEC10(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82404b90
	ctx.lr = 0x827B3798;
	sub_82404B90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B37A0"))) PPC_WEAK_FUNC(sub_827B37A0);
PPC_FUNC_IMPL(__imp__sub_827B37A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827B37A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,4(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82785980
	ctx.lr = 0x827B37C4;
	sub_82785980(ctx, base);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// beq cr6,0x827b37d4
	if (ctx.cr6.eq) goto loc_827B37D4;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
loc_827B37D4:
	// lwz r10,24(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,20(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// lis r8,-31905
	ctx.r8.s64 = -2090926080;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r8,-19920
	ctx.r3.s64 = ctx.r8.s64 + -19920;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r29,44(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r6,40(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82357898
	ctx.lr = 0x827B3808;
	sub_82357898(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823589c8
	ctx.lr = 0x827B3818;
	sub_823589C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B3824"))) PPC_WEAK_FUNC(sub_827B3824);
PPC_FUNC_IMPL(__imp__sub_827B3824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3828"))) PPC_WEAK_FUNC(sub_827B3828);
PPC_FUNC_IMPL(__imp__sub_827B3828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x827B3830;
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
	// beq cr6,0x827b3870
	if (ctx.cr6.eq) goto loc_827B3870;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827b385c
	if (!ctx.cr6.eq) goto loc_827B385C;
	// bl 0x822900a0
	ctx.lr = 0x827B3858;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_827B385C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B3870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827B3870:
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

