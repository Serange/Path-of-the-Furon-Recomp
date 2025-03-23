#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83308960"))) PPC_WEAK_FUNC(sub_83308960);
PPC_FUNC_IMPL(__imp__sub_83308960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83308980;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19296
	ctx.r11.s64 = ctx.r11.s64 + 19296;
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

__attribute__((alias("__imp__sub_833089A4"))) PPC_WEAK_FUNC(sub_833089A4);
PPC_FUNC_IMPL(__imp__sub_833089A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833089A8"))) PPC_WEAK_FUNC(sub_833089A8);
PPC_FUNC_IMPL(__imp__sub_833089A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833089AC"))) PPC_WEAK_FUNC(sub_833089AC);
PPC_FUNC_IMPL(__imp__sub_833089AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833089B0"))) PPC_WEAK_FUNC(sub_833089B0);
PPC_FUNC_IMPL(__imp__sub_833089B0) {
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
	// bl 0x832fb668
	ctx.lr = 0x833089D0;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833089e0
	if (ctx.cr0.eq) goto loc_833089E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x833089E0;
	sub_822990F0(ctx, base);
loc_833089E0:
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

__attribute__((alias("__imp__sub_833089FC"))) PPC_WEAK_FUNC(sub_833089FC);
PPC_FUNC_IMPL(__imp__sub_833089FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308A00"))) PPC_WEAK_FUNC(sub_83308A00);
PPC_FUNC_IMPL(__imp__sub_83308A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83308A20;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19312
	ctx.r11.s64 = ctx.r11.s64 + 19312;
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

__attribute__((alias("__imp__sub_83308A44"))) PPC_WEAK_FUNC(sub_83308A44);
PPC_FUNC_IMPL(__imp__sub_83308A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308A48"))) PPC_WEAK_FUNC(sub_83308A48);
PPC_FUNC_IMPL(__imp__sub_83308A48) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83308A4C"))) PPC_WEAK_FUNC(sub_83308A4C);
PPC_FUNC_IMPL(__imp__sub_83308A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308A50"))) PPC_WEAK_FUNC(sub_83308A50);
PPC_FUNC_IMPL(__imp__sub_83308A50) {
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
	// bl 0x832fb668
	ctx.lr = 0x83308A70;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83308a80
	if (ctx.cr0.eq) goto loc_83308A80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83308A80;
	sub_822990F0(ctx, base);
loc_83308A80:
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

__attribute__((alias("__imp__sub_83308A9C"))) PPC_WEAK_FUNC(sub_83308A9C);
PPC_FUNC_IMPL(__imp__sub_83308A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308AA0"))) PPC_WEAK_FUNC(sub_83308AA0);
PPC_FUNC_IMPL(__imp__sub_83308AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83308AC0;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19328
	ctx.r11.s64 = ctx.r11.s64 + 19328;
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

__attribute__((alias("__imp__sub_83308AE4"))) PPC_WEAK_FUNC(sub_83308AE4);
PPC_FUNC_IMPL(__imp__sub_83308AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308AE8"))) PPC_WEAK_FUNC(sub_83308AE8);
PPC_FUNC_IMPL(__imp__sub_83308AE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83308AEC"))) PPC_WEAK_FUNC(sub_83308AEC);
PPC_FUNC_IMPL(__imp__sub_83308AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308AF0"))) PPC_WEAK_FUNC(sub_83308AF0);
PPC_FUNC_IMPL(__imp__sub_83308AF0) {
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
	// bl 0x832fb668
	ctx.lr = 0x83308B10;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83308b20
	if (ctx.cr0.eq) goto loc_83308B20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83308B20;
	sub_822990F0(ctx, base);
loc_83308B20:
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

__attribute__((alias("__imp__sub_83308B3C"))) PPC_WEAK_FUNC(sub_83308B3C);
PPC_FUNC_IMPL(__imp__sub_83308B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308B40"))) PPC_WEAK_FUNC(sub_83308B40);
PPC_FUNC_IMPL(__imp__sub_83308B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83308B60;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19344
	ctx.r11.s64 = ctx.r11.s64 + 19344;
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

__attribute__((alias("__imp__sub_83308B84"))) PPC_WEAK_FUNC(sub_83308B84);
PPC_FUNC_IMPL(__imp__sub_83308B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308B88"))) PPC_WEAK_FUNC(sub_83308B88);
PPC_FUNC_IMPL(__imp__sub_83308B88) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83308B8C"))) PPC_WEAK_FUNC(sub_83308B8C);
PPC_FUNC_IMPL(__imp__sub_83308B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308B90"))) PPC_WEAK_FUNC(sub_83308B90);
PPC_FUNC_IMPL(__imp__sub_83308B90) {
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
	// bl 0x832fb668
	ctx.lr = 0x83308BB0;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83308bc0
	if (ctx.cr0.eq) goto loc_83308BC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83308BC0;
	sub_822990F0(ctx, base);
loc_83308BC0:
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

__attribute__((alias("__imp__sub_83308BDC"))) PPC_WEAK_FUNC(sub_83308BDC);
PPC_FUNC_IMPL(__imp__sub_83308BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308BE0"))) PPC_WEAK_FUNC(sub_83308BE0);
PPC_FUNC_IMPL(__imp__sub_83308BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83308C00;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19360
	ctx.r11.s64 = ctx.r11.s64 + 19360;
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

__attribute__((alias("__imp__sub_83308C24"))) PPC_WEAK_FUNC(sub_83308C24);
PPC_FUNC_IMPL(__imp__sub_83308C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308C28"))) PPC_WEAK_FUNC(sub_83308C28);
PPC_FUNC_IMPL(__imp__sub_83308C28) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83308C2C"))) PPC_WEAK_FUNC(sub_83308C2C);
PPC_FUNC_IMPL(__imp__sub_83308C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308C30"))) PPC_WEAK_FUNC(sub_83308C30);
PPC_FUNC_IMPL(__imp__sub_83308C30) {
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
	// bl 0x832fb668
	ctx.lr = 0x83308C50;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83308c60
	if (ctx.cr0.eq) goto loc_83308C60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83308C60;
	sub_822990F0(ctx, base);
loc_83308C60:
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

__attribute__((alias("__imp__sub_83308C7C"))) PPC_WEAK_FUNC(sub_83308C7C);
PPC_FUNC_IMPL(__imp__sub_83308C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308C80"))) PPC_WEAK_FUNC(sub_83308C80);
PPC_FUNC_IMPL(__imp__sub_83308C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83308CA0;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19376
	ctx.r11.s64 = ctx.r11.s64 + 19376;
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

__attribute__((alias("__imp__sub_83308CC4"))) PPC_WEAK_FUNC(sub_83308CC4);
PPC_FUNC_IMPL(__imp__sub_83308CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308CC8"))) PPC_WEAK_FUNC(sub_83308CC8);
PPC_FUNC_IMPL(__imp__sub_83308CC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83308CCC"))) PPC_WEAK_FUNC(sub_83308CCC);
PPC_FUNC_IMPL(__imp__sub_83308CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308CD0"))) PPC_WEAK_FUNC(sub_83308CD0);
PPC_FUNC_IMPL(__imp__sub_83308CD0) {
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
	// bl 0x832fb668
	ctx.lr = 0x83308CF0;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83308d00
	if (ctx.cr0.eq) goto loc_83308D00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83308D00;
	sub_822990F0(ctx, base);
loc_83308D00:
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

__attribute__((alias("__imp__sub_83308D1C"))) PPC_WEAK_FUNC(sub_83308D1C);
PPC_FUNC_IMPL(__imp__sub_83308D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308D20"))) PPC_WEAK_FUNC(sub_83308D20);
PPC_FUNC_IMPL(__imp__sub_83308D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83308D40;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19392
	ctx.r11.s64 = ctx.r11.s64 + 19392;
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

__attribute__((alias("__imp__sub_83308D64"))) PPC_WEAK_FUNC(sub_83308D64);
PPC_FUNC_IMPL(__imp__sub_83308D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308D68"))) PPC_WEAK_FUNC(sub_83308D68);
PPC_FUNC_IMPL(__imp__sub_83308D68) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83308D6C"))) PPC_WEAK_FUNC(sub_83308D6C);
PPC_FUNC_IMPL(__imp__sub_83308D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308D70"))) PPC_WEAK_FUNC(sub_83308D70);
PPC_FUNC_IMPL(__imp__sub_83308D70) {
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
	// bl 0x832fb668
	ctx.lr = 0x83308D90;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83308da0
	if (ctx.cr0.eq) goto loc_83308DA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83308DA0;
	sub_822990F0(ctx, base);
loc_83308DA0:
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

__attribute__((alias("__imp__sub_83308DBC"))) PPC_WEAK_FUNC(sub_83308DBC);
PPC_FUNC_IMPL(__imp__sub_83308DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308DC0"))) PPC_WEAK_FUNC(sub_83308DC0);
PPC_FUNC_IMPL(__imp__sub_83308DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83308DE0;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19408
	ctx.r11.s64 = ctx.r11.s64 + 19408;
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

__attribute__((alias("__imp__sub_83308E04"))) PPC_WEAK_FUNC(sub_83308E04);
PPC_FUNC_IMPL(__imp__sub_83308E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308E08"))) PPC_WEAK_FUNC(sub_83308E08);
PPC_FUNC_IMPL(__imp__sub_83308E08) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83308E0C"))) PPC_WEAK_FUNC(sub_83308E0C);
PPC_FUNC_IMPL(__imp__sub_83308E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308E10"))) PPC_WEAK_FUNC(sub_83308E10);
PPC_FUNC_IMPL(__imp__sub_83308E10) {
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
	// bl 0x832fb668
	ctx.lr = 0x83308E30;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83308e40
	if (ctx.cr0.eq) goto loc_83308E40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83308E40;
	sub_822990F0(ctx, base);
loc_83308E40:
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

__attribute__((alias("__imp__sub_83308E5C"))) PPC_WEAK_FUNC(sub_83308E5C);
PPC_FUNC_IMPL(__imp__sub_83308E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308E60"))) PPC_WEAK_FUNC(sub_83308E60);
PPC_FUNC_IMPL(__imp__sub_83308E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83308E80;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19424
	ctx.r11.s64 = ctx.r11.s64 + 19424;
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

__attribute__((alias("__imp__sub_83308EA4"))) PPC_WEAK_FUNC(sub_83308EA4);
PPC_FUNC_IMPL(__imp__sub_83308EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308EA8"))) PPC_WEAK_FUNC(sub_83308EA8);
PPC_FUNC_IMPL(__imp__sub_83308EA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83308EAC"))) PPC_WEAK_FUNC(sub_83308EAC);
PPC_FUNC_IMPL(__imp__sub_83308EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308EB0"))) PPC_WEAK_FUNC(sub_83308EB0);
PPC_FUNC_IMPL(__imp__sub_83308EB0) {
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
	// bl 0x832fb668
	ctx.lr = 0x83308ED0;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83308ee0
	if (ctx.cr0.eq) goto loc_83308EE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83308EE0;
	sub_822990F0(ctx, base);
loc_83308EE0:
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

__attribute__((alias("__imp__sub_83308EFC"))) PPC_WEAK_FUNC(sub_83308EFC);
PPC_FUNC_IMPL(__imp__sub_83308EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308F00"))) PPC_WEAK_FUNC(sub_83308F00);
PPC_FUNC_IMPL(__imp__sub_83308F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83308F20;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19440
	ctx.r11.s64 = ctx.r11.s64 + 19440;
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

__attribute__((alias("__imp__sub_83308F44"))) PPC_WEAK_FUNC(sub_83308F44);
PPC_FUNC_IMPL(__imp__sub_83308F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308F48"))) PPC_WEAK_FUNC(sub_83308F48);
PPC_FUNC_IMPL(__imp__sub_83308F48) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83308F4C"))) PPC_WEAK_FUNC(sub_83308F4C);
PPC_FUNC_IMPL(__imp__sub_83308F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308F50"))) PPC_WEAK_FUNC(sub_83308F50);
PPC_FUNC_IMPL(__imp__sub_83308F50) {
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
	// bl 0x832fb668
	ctx.lr = 0x83308F70;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83308f80
	if (ctx.cr0.eq) goto loc_83308F80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83308F80;
	sub_822990F0(ctx, base);
loc_83308F80:
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

__attribute__((alias("__imp__sub_83308F9C"))) PPC_WEAK_FUNC(sub_83308F9C);
PPC_FUNC_IMPL(__imp__sub_83308F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308FA0"))) PPC_WEAK_FUNC(sub_83308FA0);
PPC_FUNC_IMPL(__imp__sub_83308FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83308FC0;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19456
	ctx.r11.s64 = ctx.r11.s64 + 19456;
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

__attribute__((alias("__imp__sub_83308FE4"))) PPC_WEAK_FUNC(sub_83308FE4);
PPC_FUNC_IMPL(__imp__sub_83308FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308FE8"))) PPC_WEAK_FUNC(sub_83308FE8);
PPC_FUNC_IMPL(__imp__sub_83308FE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83308FEC"))) PPC_WEAK_FUNC(sub_83308FEC);
PPC_FUNC_IMPL(__imp__sub_83308FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83308FF0"))) PPC_WEAK_FUNC(sub_83308FF0);
PPC_FUNC_IMPL(__imp__sub_83308FF0) {
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
	// bl 0x832fb668
	ctx.lr = 0x83309010;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83309020
	if (ctx.cr0.eq) goto loc_83309020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83309020;
	sub_822990F0(ctx, base);
loc_83309020:
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

__attribute__((alias("__imp__sub_8330903C"))) PPC_WEAK_FUNC(sub_8330903C);
PPC_FUNC_IMPL(__imp__sub_8330903C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309040"))) PPC_WEAK_FUNC(sub_83309040);
PPC_FUNC_IMPL(__imp__sub_83309040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83309060;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19472
	ctx.r11.s64 = ctx.r11.s64 + 19472;
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

__attribute__((alias("__imp__sub_83309084"))) PPC_WEAK_FUNC(sub_83309084);
PPC_FUNC_IMPL(__imp__sub_83309084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309088"))) PPC_WEAK_FUNC(sub_83309088);
PPC_FUNC_IMPL(__imp__sub_83309088) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330908C"))) PPC_WEAK_FUNC(sub_8330908C);
PPC_FUNC_IMPL(__imp__sub_8330908C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309090"))) PPC_WEAK_FUNC(sub_83309090);
PPC_FUNC_IMPL(__imp__sub_83309090) {
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
	// bl 0x832fb668
	ctx.lr = 0x833090B0;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833090c0
	if (ctx.cr0.eq) goto loc_833090C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x833090C0;
	sub_822990F0(ctx, base);
loc_833090C0:
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

__attribute__((alias("__imp__sub_833090DC"))) PPC_WEAK_FUNC(sub_833090DC);
PPC_FUNC_IMPL(__imp__sub_833090DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833090E0"))) PPC_WEAK_FUNC(sub_833090E0);
PPC_FUNC_IMPL(__imp__sub_833090E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83309100;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19488
	ctx.r11.s64 = ctx.r11.s64 + 19488;
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

__attribute__((alias("__imp__sub_83309124"))) PPC_WEAK_FUNC(sub_83309124);
PPC_FUNC_IMPL(__imp__sub_83309124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309128"))) PPC_WEAK_FUNC(sub_83309128);
PPC_FUNC_IMPL(__imp__sub_83309128) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330912C"))) PPC_WEAK_FUNC(sub_8330912C);
PPC_FUNC_IMPL(__imp__sub_8330912C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309130"))) PPC_WEAK_FUNC(sub_83309130);
PPC_FUNC_IMPL(__imp__sub_83309130) {
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
	// bl 0x832fb668
	ctx.lr = 0x83309150;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83309160
	if (ctx.cr0.eq) goto loc_83309160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83309160;
	sub_822990F0(ctx, base);
loc_83309160:
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

__attribute__((alias("__imp__sub_8330917C"))) PPC_WEAK_FUNC(sub_8330917C);
PPC_FUNC_IMPL(__imp__sub_8330917C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309180"))) PPC_WEAK_FUNC(sub_83309180);
PPC_FUNC_IMPL(__imp__sub_83309180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x833091A0;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19504
	ctx.r11.s64 = ctx.r11.s64 + 19504;
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

__attribute__((alias("__imp__sub_833091C4"))) PPC_WEAK_FUNC(sub_833091C4);
PPC_FUNC_IMPL(__imp__sub_833091C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833091C8"))) PPC_WEAK_FUNC(sub_833091C8);
PPC_FUNC_IMPL(__imp__sub_833091C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833091CC"))) PPC_WEAK_FUNC(sub_833091CC);
PPC_FUNC_IMPL(__imp__sub_833091CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833091D0"))) PPC_WEAK_FUNC(sub_833091D0);
PPC_FUNC_IMPL(__imp__sub_833091D0) {
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
	// bl 0x832fb668
	ctx.lr = 0x833091F0;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83309200
	if (ctx.cr0.eq) goto loc_83309200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83309200;
	sub_822990F0(ctx, base);
loc_83309200:
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

__attribute__((alias("__imp__sub_8330921C"))) PPC_WEAK_FUNC(sub_8330921C);
PPC_FUNC_IMPL(__imp__sub_8330921C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309220"))) PPC_WEAK_FUNC(sub_83309220);
PPC_FUNC_IMPL(__imp__sub_83309220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83309240;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19520
	ctx.r11.s64 = ctx.r11.s64 + 19520;
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

__attribute__((alias("__imp__sub_83309264"))) PPC_WEAK_FUNC(sub_83309264);
PPC_FUNC_IMPL(__imp__sub_83309264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309268"))) PPC_WEAK_FUNC(sub_83309268);
PPC_FUNC_IMPL(__imp__sub_83309268) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330926C"))) PPC_WEAK_FUNC(sub_8330926C);
PPC_FUNC_IMPL(__imp__sub_8330926C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309270"))) PPC_WEAK_FUNC(sub_83309270);
PPC_FUNC_IMPL(__imp__sub_83309270) {
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
	// bl 0x832fb668
	ctx.lr = 0x83309290;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833092a0
	if (ctx.cr0.eq) goto loc_833092A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x833092A0;
	sub_822990F0(ctx, base);
loc_833092A0:
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

__attribute__((alias("__imp__sub_833092BC"))) PPC_WEAK_FUNC(sub_833092BC);
PPC_FUNC_IMPL(__imp__sub_833092BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833092C0"))) PPC_WEAK_FUNC(sub_833092C0);
PPC_FUNC_IMPL(__imp__sub_833092C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x833092E0;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19536
	ctx.r11.s64 = ctx.r11.s64 + 19536;
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

__attribute__((alias("__imp__sub_83309304"))) PPC_WEAK_FUNC(sub_83309304);
PPC_FUNC_IMPL(__imp__sub_83309304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309308"))) PPC_WEAK_FUNC(sub_83309308);
PPC_FUNC_IMPL(__imp__sub_83309308) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330930C"))) PPC_WEAK_FUNC(sub_8330930C);
PPC_FUNC_IMPL(__imp__sub_8330930C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309310"))) PPC_WEAK_FUNC(sub_83309310);
PPC_FUNC_IMPL(__imp__sub_83309310) {
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
	// bl 0x832fb668
	ctx.lr = 0x83309330;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83309340
	if (ctx.cr0.eq) goto loc_83309340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83309340;
	sub_822990F0(ctx, base);
loc_83309340:
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

__attribute__((alias("__imp__sub_8330935C"))) PPC_WEAK_FUNC(sub_8330935C);
PPC_FUNC_IMPL(__imp__sub_8330935C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309360"))) PPC_WEAK_FUNC(sub_83309360);
PPC_FUNC_IMPL(__imp__sub_83309360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83309380;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19552
	ctx.r11.s64 = ctx.r11.s64 + 19552;
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

__attribute__((alias("__imp__sub_833093A4"))) PPC_WEAK_FUNC(sub_833093A4);
PPC_FUNC_IMPL(__imp__sub_833093A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833093A8"))) PPC_WEAK_FUNC(sub_833093A8);
PPC_FUNC_IMPL(__imp__sub_833093A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833093AC"))) PPC_WEAK_FUNC(sub_833093AC);
PPC_FUNC_IMPL(__imp__sub_833093AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833093B0"))) PPC_WEAK_FUNC(sub_833093B0);
PPC_FUNC_IMPL(__imp__sub_833093B0) {
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
	// bl 0x832fb668
	ctx.lr = 0x833093D0;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833093e0
	if (ctx.cr0.eq) goto loc_833093E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x833093E0;
	sub_822990F0(ctx, base);
loc_833093E0:
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

__attribute__((alias("__imp__sub_833093FC"))) PPC_WEAK_FUNC(sub_833093FC);
PPC_FUNC_IMPL(__imp__sub_833093FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309400"))) PPC_WEAK_FUNC(sub_83309400);
PPC_FUNC_IMPL(__imp__sub_83309400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83309420;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19568
	ctx.r11.s64 = ctx.r11.s64 + 19568;
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

__attribute__((alias("__imp__sub_83309444"))) PPC_WEAK_FUNC(sub_83309444);
PPC_FUNC_IMPL(__imp__sub_83309444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309448"))) PPC_WEAK_FUNC(sub_83309448);
PPC_FUNC_IMPL(__imp__sub_83309448) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330944C"))) PPC_WEAK_FUNC(sub_8330944C);
PPC_FUNC_IMPL(__imp__sub_8330944C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309450"))) PPC_WEAK_FUNC(sub_83309450);
PPC_FUNC_IMPL(__imp__sub_83309450) {
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
	// bl 0x832fb668
	ctx.lr = 0x83309470;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83309480
	if (ctx.cr0.eq) goto loc_83309480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83309480;
	sub_822990F0(ctx, base);
loc_83309480:
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

__attribute__((alias("__imp__sub_8330949C"))) PPC_WEAK_FUNC(sub_8330949C);
PPC_FUNC_IMPL(__imp__sub_8330949C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833094A0"))) PPC_WEAK_FUNC(sub_833094A0);
PPC_FUNC_IMPL(__imp__sub_833094A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x833094C0;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19584
	ctx.r11.s64 = ctx.r11.s64 + 19584;
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

__attribute__((alias("__imp__sub_833094E4"))) PPC_WEAK_FUNC(sub_833094E4);
PPC_FUNC_IMPL(__imp__sub_833094E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833094E8"))) PPC_WEAK_FUNC(sub_833094E8);
PPC_FUNC_IMPL(__imp__sub_833094E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833094EC"))) PPC_WEAK_FUNC(sub_833094EC);
PPC_FUNC_IMPL(__imp__sub_833094EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833094F0"))) PPC_WEAK_FUNC(sub_833094F0);
PPC_FUNC_IMPL(__imp__sub_833094F0) {
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
	// bl 0x832fb668
	ctx.lr = 0x83309510;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83309520
	if (ctx.cr0.eq) goto loc_83309520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83309520;
	sub_822990F0(ctx, base);
loc_83309520:
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

__attribute__((alias("__imp__sub_8330953C"))) PPC_WEAK_FUNC(sub_8330953C);
PPC_FUNC_IMPL(__imp__sub_8330953C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309540"))) PPC_WEAK_FUNC(sub_83309540);
PPC_FUNC_IMPL(__imp__sub_83309540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83309560;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19600
	ctx.r11.s64 = ctx.r11.s64 + 19600;
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

__attribute__((alias("__imp__sub_83309584"))) PPC_WEAK_FUNC(sub_83309584);
PPC_FUNC_IMPL(__imp__sub_83309584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309588"))) PPC_WEAK_FUNC(sub_83309588);
PPC_FUNC_IMPL(__imp__sub_83309588) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330958C"))) PPC_WEAK_FUNC(sub_8330958C);
PPC_FUNC_IMPL(__imp__sub_8330958C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309590"))) PPC_WEAK_FUNC(sub_83309590);
PPC_FUNC_IMPL(__imp__sub_83309590) {
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
	// bl 0x832fb668
	ctx.lr = 0x833095B0;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833095c0
	if (ctx.cr0.eq) goto loc_833095C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x833095C0;
	sub_822990F0(ctx, base);
loc_833095C0:
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

__attribute__((alias("__imp__sub_833095DC"))) PPC_WEAK_FUNC(sub_833095DC);
PPC_FUNC_IMPL(__imp__sub_833095DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833095E0"))) PPC_WEAK_FUNC(sub_833095E0);
PPC_FUNC_IMPL(__imp__sub_833095E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83309600;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19616
	ctx.r11.s64 = ctx.r11.s64 + 19616;
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

__attribute__((alias("__imp__sub_83309624"))) PPC_WEAK_FUNC(sub_83309624);
PPC_FUNC_IMPL(__imp__sub_83309624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309628"))) PPC_WEAK_FUNC(sub_83309628);
PPC_FUNC_IMPL(__imp__sub_83309628) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330962C"))) PPC_WEAK_FUNC(sub_8330962C);
PPC_FUNC_IMPL(__imp__sub_8330962C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309630"))) PPC_WEAK_FUNC(sub_83309630);
PPC_FUNC_IMPL(__imp__sub_83309630) {
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
	// bl 0x832fb668
	ctx.lr = 0x83309650;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83309660
	if (ctx.cr0.eq) goto loc_83309660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83309660;
	sub_822990F0(ctx, base);
loc_83309660:
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

__attribute__((alias("__imp__sub_8330967C"))) PPC_WEAK_FUNC(sub_8330967C);
PPC_FUNC_IMPL(__imp__sub_8330967C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309680"))) PPC_WEAK_FUNC(sub_83309680);
PPC_FUNC_IMPL(__imp__sub_83309680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x833096A0;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19632
	ctx.r11.s64 = ctx.r11.s64 + 19632;
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

__attribute__((alias("__imp__sub_833096C4"))) PPC_WEAK_FUNC(sub_833096C4);
PPC_FUNC_IMPL(__imp__sub_833096C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833096C8"))) PPC_WEAK_FUNC(sub_833096C8);
PPC_FUNC_IMPL(__imp__sub_833096C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833096CC"))) PPC_WEAK_FUNC(sub_833096CC);
PPC_FUNC_IMPL(__imp__sub_833096CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833096D0"))) PPC_WEAK_FUNC(sub_833096D0);
PPC_FUNC_IMPL(__imp__sub_833096D0) {
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
	// bl 0x832fb668
	ctx.lr = 0x833096F0;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83309700
	if (ctx.cr0.eq) goto loc_83309700;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83309700;
	sub_822990F0(ctx, base);
loc_83309700:
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

__attribute__((alias("__imp__sub_8330971C"))) PPC_WEAK_FUNC(sub_8330971C);
PPC_FUNC_IMPL(__imp__sub_8330971C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309720"))) PPC_WEAK_FUNC(sub_83309720);
PPC_FUNC_IMPL(__imp__sub_83309720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83309740;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19648
	ctx.r11.s64 = ctx.r11.s64 + 19648;
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

__attribute__((alias("__imp__sub_83309764"))) PPC_WEAK_FUNC(sub_83309764);
PPC_FUNC_IMPL(__imp__sub_83309764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309768"))) PPC_WEAK_FUNC(sub_83309768);
PPC_FUNC_IMPL(__imp__sub_83309768) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330976C"))) PPC_WEAK_FUNC(sub_8330976C);
PPC_FUNC_IMPL(__imp__sub_8330976C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309770"))) PPC_WEAK_FUNC(sub_83309770);
PPC_FUNC_IMPL(__imp__sub_83309770) {
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
	// bl 0x832fb668
	ctx.lr = 0x83309790;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833097a0
	if (ctx.cr0.eq) goto loc_833097A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x833097A0;
	sub_822990F0(ctx, base);
loc_833097A0:
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

__attribute__((alias("__imp__sub_833097BC"))) PPC_WEAK_FUNC(sub_833097BC);
PPC_FUNC_IMPL(__imp__sub_833097BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833097C0"))) PPC_WEAK_FUNC(sub_833097C0);
PPC_FUNC_IMPL(__imp__sub_833097C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x833097E0;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19664
	ctx.r11.s64 = ctx.r11.s64 + 19664;
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

__attribute__((alias("__imp__sub_83309804"))) PPC_WEAK_FUNC(sub_83309804);
PPC_FUNC_IMPL(__imp__sub_83309804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309808"))) PPC_WEAK_FUNC(sub_83309808);
PPC_FUNC_IMPL(__imp__sub_83309808) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330980C"))) PPC_WEAK_FUNC(sub_8330980C);
PPC_FUNC_IMPL(__imp__sub_8330980C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309810"))) PPC_WEAK_FUNC(sub_83309810);
PPC_FUNC_IMPL(__imp__sub_83309810) {
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
	// bl 0x832fb668
	ctx.lr = 0x83309830;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83309840
	if (ctx.cr0.eq) goto loc_83309840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83309840;
	sub_822990F0(ctx, base);
loc_83309840:
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

__attribute__((alias("__imp__sub_8330985C"))) PPC_WEAK_FUNC(sub_8330985C);
PPC_FUNC_IMPL(__imp__sub_8330985C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309860"))) PPC_WEAK_FUNC(sub_83309860);
PPC_FUNC_IMPL(__imp__sub_83309860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83309880;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19680
	ctx.r11.s64 = ctx.r11.s64 + 19680;
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

__attribute__((alias("__imp__sub_833098A4"))) PPC_WEAK_FUNC(sub_833098A4);
PPC_FUNC_IMPL(__imp__sub_833098A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833098A8"))) PPC_WEAK_FUNC(sub_833098A8);
PPC_FUNC_IMPL(__imp__sub_833098A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833098AC"))) PPC_WEAK_FUNC(sub_833098AC);
PPC_FUNC_IMPL(__imp__sub_833098AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833098B0"))) PPC_WEAK_FUNC(sub_833098B0);
PPC_FUNC_IMPL(__imp__sub_833098B0) {
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
	// bl 0x832fb668
	ctx.lr = 0x833098D0;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833098e0
	if (ctx.cr0.eq) goto loc_833098E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x833098E0;
	sub_822990F0(ctx, base);
loc_833098E0:
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

__attribute__((alias("__imp__sub_833098FC"))) PPC_WEAK_FUNC(sub_833098FC);
PPC_FUNC_IMPL(__imp__sub_833098FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309900"))) PPC_WEAK_FUNC(sub_83309900);
PPC_FUNC_IMPL(__imp__sub_83309900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83309920;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19696
	ctx.r11.s64 = ctx.r11.s64 + 19696;
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

__attribute__((alias("__imp__sub_83309944"))) PPC_WEAK_FUNC(sub_83309944);
PPC_FUNC_IMPL(__imp__sub_83309944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309948"))) PPC_WEAK_FUNC(sub_83309948);
PPC_FUNC_IMPL(__imp__sub_83309948) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330994C"))) PPC_WEAK_FUNC(sub_8330994C);
PPC_FUNC_IMPL(__imp__sub_8330994C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309950"))) PPC_WEAK_FUNC(sub_83309950);
PPC_FUNC_IMPL(__imp__sub_83309950) {
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
	// bl 0x832fb668
	ctx.lr = 0x83309970;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83309980
	if (ctx.cr0.eq) goto loc_83309980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83309980;
	sub_822990F0(ctx, base);
loc_83309980:
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

__attribute__((alias("__imp__sub_8330999C"))) PPC_WEAK_FUNC(sub_8330999C);
PPC_FUNC_IMPL(__imp__sub_8330999C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833099A0"))) PPC_WEAK_FUNC(sub_833099A0);
PPC_FUNC_IMPL(__imp__sub_833099A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x833099C0;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19712
	ctx.r11.s64 = ctx.r11.s64 + 19712;
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

__attribute__((alias("__imp__sub_833099E4"))) PPC_WEAK_FUNC(sub_833099E4);
PPC_FUNC_IMPL(__imp__sub_833099E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833099E8"))) PPC_WEAK_FUNC(sub_833099E8);
PPC_FUNC_IMPL(__imp__sub_833099E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833099EC"))) PPC_WEAK_FUNC(sub_833099EC);
PPC_FUNC_IMPL(__imp__sub_833099EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833099F0"))) PPC_WEAK_FUNC(sub_833099F0);
PPC_FUNC_IMPL(__imp__sub_833099F0) {
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
	// bl 0x832fb668
	ctx.lr = 0x83309A10;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83309a20
	if (ctx.cr0.eq) goto loc_83309A20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83309A20;
	sub_822990F0(ctx, base);
loc_83309A20:
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

__attribute__((alias("__imp__sub_83309A3C"))) PPC_WEAK_FUNC(sub_83309A3C);
PPC_FUNC_IMPL(__imp__sub_83309A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309A40"))) PPC_WEAK_FUNC(sub_83309A40);
PPC_FUNC_IMPL(__imp__sub_83309A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83309A60;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19728
	ctx.r11.s64 = ctx.r11.s64 + 19728;
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

__attribute__((alias("__imp__sub_83309A84"))) PPC_WEAK_FUNC(sub_83309A84);
PPC_FUNC_IMPL(__imp__sub_83309A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309A88"))) PPC_WEAK_FUNC(sub_83309A88);
PPC_FUNC_IMPL(__imp__sub_83309A88) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83309A8C"))) PPC_WEAK_FUNC(sub_83309A8C);
PPC_FUNC_IMPL(__imp__sub_83309A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309A90"))) PPC_WEAK_FUNC(sub_83309A90);
PPC_FUNC_IMPL(__imp__sub_83309A90) {
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
	// bl 0x832fb668
	ctx.lr = 0x83309AB0;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83309ac0
	if (ctx.cr0.eq) goto loc_83309AC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83309AC0;
	sub_822990F0(ctx, base);
loc_83309AC0:
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

__attribute__((alias("__imp__sub_83309ADC"))) PPC_WEAK_FUNC(sub_83309ADC);
PPC_FUNC_IMPL(__imp__sub_83309ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309AE0"))) PPC_WEAK_FUNC(sub_83309AE0);
PPC_FUNC_IMPL(__imp__sub_83309AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x83309B00;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19744
	ctx.r11.s64 = ctx.r11.s64 + 19744;
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

__attribute__((alias("__imp__sub_83309B24"))) PPC_WEAK_FUNC(sub_83309B24);
PPC_FUNC_IMPL(__imp__sub_83309B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309B28"))) PPC_WEAK_FUNC(sub_83309B28);
PPC_FUNC_IMPL(__imp__sub_83309B28) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fb668
	sub_832FB668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83309B2C"))) PPC_WEAK_FUNC(sub_83309B2C);
PPC_FUNC_IMPL(__imp__sub_83309B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309B30"))) PPC_WEAK_FUNC(sub_83309B30);
PPC_FUNC_IMPL(__imp__sub_83309B30) {
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
	// bl 0x832fb668
	ctx.lr = 0x83309B50;
	sub_832FB668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83309b60
	if (ctx.cr0.eq) goto loc_83309B60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83309B60;
	sub_822990F0(ctx, base);
loc_83309B60:
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

__attribute__((alias("__imp__sub_83309B7C"))) PPC_WEAK_FUNC(sub_83309B7C);
PPC_FUNC_IMPL(__imp__sub_83309B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309B80"))) PPC_WEAK_FUNC(sub_83309B80);
PPC_FUNC_IMPL(__imp__sub_83309B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x83307c28
	ctx.lr = 0x83309B98;
	sub_83307C28(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19760
	ctx.r11.s64 = ctx.r11.s64 + 19760;
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

__attribute__((alias("__imp__sub_83309BBC"))) PPC_WEAK_FUNC(sub_83309BBC);
PPC_FUNC_IMPL(__imp__sub_83309BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309BC0"))) PPC_WEAK_FUNC(sub_83309BC0);
PPC_FUNC_IMPL(__imp__sub_83309BC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fbd90
	sub_832FBD90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83309BC4"))) PPC_WEAK_FUNC(sub_83309BC4);
PPC_FUNC_IMPL(__imp__sub_83309BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309BC8"))) PPC_WEAK_FUNC(sub_83309BC8);
PPC_FUNC_IMPL(__imp__sub_83309BC8) {
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
	// bl 0x832fbd90
	ctx.lr = 0x83309BE8;
	sub_832FBD90(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83309bf8
	if (ctx.cr0.eq) goto loc_83309BF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83309BF8;
	sub_822990F0(ctx, base);
loc_83309BF8:
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

__attribute__((alias("__imp__sub_83309C14"))) PPC_WEAK_FUNC(sub_83309C14);
PPC_FUNC_IMPL(__imp__sub_83309C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309C18"))) PPC_WEAK_FUNC(sub_83309C18);
PPC_FUNC_IMPL(__imp__sub_83309C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x83307c28
	ctx.lr = 0x83309C30;
	sub_83307C28(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19776
	ctx.r11.s64 = ctx.r11.s64 + 19776;
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

__attribute__((alias("__imp__sub_83309C54"))) PPC_WEAK_FUNC(sub_83309C54);
PPC_FUNC_IMPL(__imp__sub_83309C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309C58"))) PPC_WEAK_FUNC(sub_83309C58);
PPC_FUNC_IMPL(__imp__sub_83309C58) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fbd90
	sub_832FBD90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83309C5C"))) PPC_WEAK_FUNC(sub_83309C5C);
PPC_FUNC_IMPL(__imp__sub_83309C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309C60"))) PPC_WEAK_FUNC(sub_83309C60);
PPC_FUNC_IMPL(__imp__sub_83309C60) {
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
	// bl 0x832fbd90
	ctx.lr = 0x83309C80;
	sub_832FBD90(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83309c90
	if (ctx.cr0.eq) goto loc_83309C90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83309C90;
	sub_822990F0(ctx, base);
loc_83309C90:
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

__attribute__((alias("__imp__sub_83309CAC"))) PPC_WEAK_FUNC(sub_83309CAC);
PPC_FUNC_IMPL(__imp__sub_83309CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309CB0"))) PPC_WEAK_FUNC(sub_83309CB0);
PPC_FUNC_IMPL(__imp__sub_83309CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x83307c28
	ctx.lr = 0x83309CC8;
	sub_83307C28(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19792
	ctx.r11.s64 = ctx.r11.s64 + 19792;
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

__attribute__((alias("__imp__sub_83309CEC"))) PPC_WEAK_FUNC(sub_83309CEC);
PPC_FUNC_IMPL(__imp__sub_83309CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309CF0"))) PPC_WEAK_FUNC(sub_83309CF0);
PPC_FUNC_IMPL(__imp__sub_83309CF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fbd90
	sub_832FBD90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83309CF4"))) PPC_WEAK_FUNC(sub_83309CF4);
PPC_FUNC_IMPL(__imp__sub_83309CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309CF8"))) PPC_WEAK_FUNC(sub_83309CF8);
PPC_FUNC_IMPL(__imp__sub_83309CF8) {
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
	// bl 0x832fbd90
	ctx.lr = 0x83309D18;
	sub_832FBD90(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83309d28
	if (ctx.cr0.eq) goto loc_83309D28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83309D28;
	sub_822990F0(ctx, base);
loc_83309D28:
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

__attribute__((alias("__imp__sub_83309D44"))) PPC_WEAK_FUNC(sub_83309D44);
PPC_FUNC_IMPL(__imp__sub_83309D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309D48"))) PPC_WEAK_FUNC(sub_83309D48);
PPC_FUNC_IMPL(__imp__sub_83309D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x83307c28
	ctx.lr = 0x83309D60;
	sub_83307C28(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19808
	ctx.r11.s64 = ctx.r11.s64 + 19808;
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

__attribute__((alias("__imp__sub_83309D84"))) PPC_WEAK_FUNC(sub_83309D84);
PPC_FUNC_IMPL(__imp__sub_83309D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309D88"))) PPC_WEAK_FUNC(sub_83309D88);
PPC_FUNC_IMPL(__imp__sub_83309D88) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fbd90
	sub_832FBD90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83309D8C"))) PPC_WEAK_FUNC(sub_83309D8C);
PPC_FUNC_IMPL(__imp__sub_83309D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309D90"))) PPC_WEAK_FUNC(sub_83309D90);
PPC_FUNC_IMPL(__imp__sub_83309D90) {
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
	// bl 0x832fbd90
	ctx.lr = 0x83309DB0;
	sub_832FBD90(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83309dc0
	if (ctx.cr0.eq) goto loc_83309DC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83309DC0;
	sub_822990F0(ctx, base);
loc_83309DC0:
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

__attribute__((alias("__imp__sub_83309DDC"))) PPC_WEAK_FUNC(sub_83309DDC);
PPC_FUNC_IMPL(__imp__sub_83309DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309DE0"))) PPC_WEAK_FUNC(sub_83309DE0);
PPC_FUNC_IMPL(__imp__sub_83309DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x83307c28
	ctx.lr = 0x83309DF8;
	sub_83307C28(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19824
	ctx.r11.s64 = ctx.r11.s64 + 19824;
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

__attribute__((alias("__imp__sub_83309E1C"))) PPC_WEAK_FUNC(sub_83309E1C);
PPC_FUNC_IMPL(__imp__sub_83309E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309E20"))) PPC_WEAK_FUNC(sub_83309E20);
PPC_FUNC_IMPL(__imp__sub_83309E20) {
	PPC_FUNC_PROLOGUE();
	// b 0x832fbd90
	sub_832FBD90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83309E24"))) PPC_WEAK_FUNC(sub_83309E24);
PPC_FUNC_IMPL(__imp__sub_83309E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309E28"))) PPC_WEAK_FUNC(sub_83309E28);
PPC_FUNC_IMPL(__imp__sub_83309E28) {
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
	// bl 0x832fbd90
	ctx.lr = 0x83309E48;
	sub_832FBD90(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83309e58
	if (ctx.cr0.eq) goto loc_83309E58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x83309E58;
	sub_822990F0(ctx, base);
loc_83309E58:
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

__attribute__((alias("__imp__sub_83309E74"))) PPC_WEAK_FUNC(sub_83309E74);
PPC_FUNC_IMPL(__imp__sub_83309E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309E78"))) PPC_WEAK_FUNC(sub_83309E78);
PPC_FUNC_IMPL(__imp__sub_83309E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19248
	ctx.r11.s64 = ctx.r11.s64 + 19248;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x83307360
	ctx.lr = 0x83309E9C;
	sub_83307360(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83309eac
	if (ctx.cr6.eq) goto loc_83309EAC;
	// bl 0x822990f0
	ctx.lr = 0x83309EAC;
	sub_822990F0(ctx, base);
loc_83309EAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fb668
	ctx.lr = 0x83309EB4;
	sub_832FB668(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83309EC8"))) PPC_WEAK_FUNC(sub_83309EC8);
PPC_FUNC_IMPL(__imp__sub_83309EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x83307270
	ctx.lr = 0x83309EE0;
	sub_83307270(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19840
	ctx.r11.s64 = ctx.r11.s64 + 19840;
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

__attribute__((alias("__imp__sub_83309F04"))) PPC_WEAK_FUNC(sub_83309F04);
PPC_FUNC_IMPL(__imp__sub_83309F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309F08"))) PPC_WEAK_FUNC(sub_83309F08);
PPC_FUNC_IMPL(__imp__sub_83309F08) {
	PPC_FUNC_PROLOGUE();
	// b 0x83309e78
	sub_83309E78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83309F0C"))) PPC_WEAK_FUNC(sub_83309F0C);
PPC_FUNC_IMPL(__imp__sub_83309F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309F10"))) PPC_WEAK_FUNC(sub_83309F10);
PPC_FUNC_IMPL(__imp__sub_83309F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x83307270
	ctx.lr = 0x83309F28;
	sub_83307270(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19856
	ctx.r11.s64 = ctx.r11.s64 + 19856;
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

__attribute__((alias("__imp__sub_83309F4C"))) PPC_WEAK_FUNC(sub_83309F4C);
PPC_FUNC_IMPL(__imp__sub_83309F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309F50"))) PPC_WEAK_FUNC(sub_83309F50);
PPC_FUNC_IMPL(__imp__sub_83309F50) {
	PPC_FUNC_PROLOGUE();
	// b 0x83309e78
	sub_83309E78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83309F54"))) PPC_WEAK_FUNC(sub_83309F54);
PPC_FUNC_IMPL(__imp__sub_83309F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309F58"))) PPC_WEAK_FUNC(sub_83309F58);
PPC_FUNC_IMPL(__imp__sub_83309F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x83307270
	ctx.lr = 0x83309F70;
	sub_83307270(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19872
	ctx.r11.s64 = ctx.r11.s64 + 19872;
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

__attribute__((alias("__imp__sub_83309F94"))) PPC_WEAK_FUNC(sub_83309F94);
PPC_FUNC_IMPL(__imp__sub_83309F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309F98"))) PPC_WEAK_FUNC(sub_83309F98);
PPC_FUNC_IMPL(__imp__sub_83309F98) {
	PPC_FUNC_PROLOGUE();
	// b 0x83309e78
	sub_83309E78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83309F9C"))) PPC_WEAK_FUNC(sub_83309F9C);
PPC_FUNC_IMPL(__imp__sub_83309F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309FA0"))) PPC_WEAK_FUNC(sub_83309FA0);
PPC_FUNC_IMPL(__imp__sub_83309FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x83307270
	ctx.lr = 0x83309FB8;
	sub_83307270(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19888
	ctx.r11.s64 = ctx.r11.s64 + 19888;
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

__attribute__((alias("__imp__sub_83309FDC"))) PPC_WEAK_FUNC(sub_83309FDC);
PPC_FUNC_IMPL(__imp__sub_83309FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309FE0"))) PPC_WEAK_FUNC(sub_83309FE0);
PPC_FUNC_IMPL(__imp__sub_83309FE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83309e78
	sub_83309E78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83309FE4"))) PPC_WEAK_FUNC(sub_83309FE4);
PPC_FUNC_IMPL(__imp__sub_83309FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83309FE8"))) PPC_WEAK_FUNC(sub_83309FE8);
PPC_FUNC_IMPL(__imp__sub_83309FE8) {
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
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,43866
	ctx.r10.u64 = ctx.r10.u64 | 43866;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8330a550
	if (ctx.cr6.gt) goto loc_8330A550;
	// beq cr6,0x8330a520
	if (ctx.cr6.eq) goto loc_8330A520;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,84
	ctx.r10.u64 = ctx.r10.u64 | 84;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8330a2a4
	if (ctx.cr6.gt) goto loc_8330A2A4;
	// beq cr6,0x8330a3a4
	if (ctx.cr6.eq) goto loc_8330A3A4;
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r10,r10,323
	ctx.r10.u64 = ctx.r10.u64 | 323;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8330a170
	if (ctx.cr6.gt) goto loc_8330A170;
	// beq cr6,0x8330a08c
	if (ctx.cr6.eq) goto loc_8330A08C;
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r10,r10,75
	ctx.r10.u64 = ctx.r10.u64 | 75;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8330a11c
	if (ctx.cr6.gt) goto loc_8330A11C;
	// beq cr6,0x8330a230
	if (ctx.cr6.eq) goto loc_8330A230;
	// addis r11,r11,-1168
	ctx.r11.s64 = ctx.r11.s64 + -76546048;
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330a0ec
	if (ctx.cr0.eq) goto loc_8330A0EC;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x8330a0ec
	if (ctx.cr6.eq) goto loc_8330A0EC;
	// addis r11,r11,-880
	ctx.r11.s64 = ctx.r11.s64 + -57671680;
	// addic. r11,r11,-72
	ctx.xer.ca = ctx.r11.u32 > 71;
	ctx.r11.s64 = ctx.r11.s64 + -72;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330a0bc
	if (ctx.cr0.eq) goto loc_8330A0BC;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x8330a0bc
	if (ctx.cr6.eq) goto loc_8330A0BC;
	// lis r10,4135
	ctx.r10.s64 = 270991360;
	// ori r10,r10,65529
	ctx.r10.u64 = ctx.r10.u64 | 65529;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8330aab8
	if (!ctx.cr6.eq) goto loc_8330AAB8;
loc_8330A08C:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A094;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A0B0;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19328
	ctx.r11.s64 = ctx.r11.s64 + 19328;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A0BC:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A0C4;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A0E0;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19504
	ctx.r11.s64 = ctx.r11.s64 + 19504;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A0EC:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A0F4;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A110;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19360
	ctx.r11.s64 = ctx.r11.s64 + 19360;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A11C:
	// addis r11,r11,-6184
	ctx.r11.s64 = ctx.r11.s64 + -405274624;
	// addic. r11,r11,-76
	ctx.xer.ca = ctx.r11.u32 > 75;
	ctx.r11.s64 = ctx.r11.s64 + -76;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330a208
	if (ctx.cr0.eq) goto loc_8330A208;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8330a1d8
	if (ctx.cr6.eq) goto loc_8330A1D8;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// beq cr6,0x8330a1a8
	if (ctx.cr6.eq) goto loc_8330A1A8;
	// cmplwi cr6,r11,106
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 106, ctx.xer);
	// bne cr6,0x8330aab8
	if (!ctx.cr6.eq) goto loc_8330AAB8;
loc_8330A140:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A148;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A164;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19456
	ctx.r11.s64 = ctx.r11.s64 + 19456;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A170:
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r10,r10,438
	ctx.r10.u64 = ctx.r10.u64 | 438;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8330a258
	if (ctx.cr6.gt) goto loc_8330A258;
	// beq cr6,0x8330a140
	if (ctx.cr6.eq) goto loc_8330A140;
	// addis r11,r11,-6184
	ctx.r11.s64 = ctx.r11.s64 + -405274624;
	// addic. r11,r11,-331
	ctx.xer.ca = ctx.r11.u32 > 330;
	ctx.r11.s64 = ctx.r11.s64 + -331;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330a230
	if (ctx.cr0.eq) goto loc_8330A230;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8330a208
	if (ctx.cr6.eq) goto loc_8330A208;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8330a1d8
	if (ctx.cr6.eq) goto loc_8330A1D8;
	// cmplwi cr6,r11,59
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 59, ctx.xer);
	// bne cr6,0x8330aab8
	if (!ctx.cr6.eq) goto loc_8330AAB8;
loc_8330A1A8:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A1B0;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A1CC;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19264
	ctx.r11.s64 = ctx.r11.s64 + 19264;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A1D8:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A1E0;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A1FC;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19344
	ctx.r11.s64 = ctx.r11.s64 + 19344;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A208:
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82295bc8
	ctx.lr = 0x8330A210;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83307270
	ctx.lr = 0x8330A224;
	sub_83307270(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19856
	ctx.r11.s64 = ctx.r11.s64 + 19856;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A230:
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82295bc8
	ctx.lr = 0x8330A238;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83307270
	ctx.lr = 0x8330A24C;
	sub_83307270(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19888
	ctx.r11.s64 = ctx.r11.s64 + 19888;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A258:
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-75
	ctx.xer.ca = ctx.r11.u32 > 74;
	ctx.r11.s64 = ctx.r11.s64 + -75;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8330A260:
	// beq 0x8330a37c
	if (ctx.cr0.eq) goto loc_8330A37C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8330a354
	if (ctx.cr6.eq) goto loc_8330A354;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x8330a32c
	if (ctx.cr6.eq) goto loc_8330A32C;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8330aab8
	if (!ctx.cr6.eq) goto loc_8330AAB8;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82295bc8
	ctx.lr = 0x8330A284;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83307c28
	ctx.lr = 0x8330A298;
	sub_83307C28(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19776
	ctx.r11.s64 = ctx.r11.s64 + 19776;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A2A4:
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,340
	ctx.r10.u64 = ctx.r10.u64 | 340;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8330a3cc
	if (ctx.cr6.gt) goto loc_8330A3CC;
	// beq cr6,0x8330a3a4
	if (ctx.cr6.eq) goto loc_8330A3A4;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,182
	ctx.r10.u64 = ctx.r10.u64 | 182;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8330a320
	if (ctx.cr6.gt) goto loc_8330A320;
	// beq cr6,0x8330a46c
	if (ctx.cr6.eq) goto loc_8330A46C;
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-90
	ctx.xer.ca = ctx.r11.u32 > 89;
	ctx.r11.s64 = ctx.r11.s64 + -90;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8330A2D4:
	// beq 0x8330a43c
	if (ctx.cr0.eq) goto loc_8330A43C;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x8330a414
	if (ctx.cr6.eq) goto loc_8330A414;
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// beq cr6,0x8330a3ec
	if (ctx.cr6.eq) goto loc_8330A3EC;
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// bne cr6,0x8330aab8
	if (!ctx.cr6.eq) goto loc_8330AAB8;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A2F8;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A314;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19408
	ctx.r11.s64 = ctx.r11.s64 + 19408;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A320:
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-331
	ctx.xer.ca = ctx.r11.u32 > 330;
	ctx.r11.s64 = ctx.r11.s64 + -331;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8330a260
	goto loc_8330A260;
loc_8330A32C:
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82295bc8
	ctx.lr = 0x8330A334;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83307c28
	ctx.lr = 0x8330A348;
	sub_83307C28(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19760
	ctx.r11.s64 = ctx.r11.s64 + 19760;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A354:
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82295bc8
	ctx.lr = 0x8330A35C;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83307270
	ctx.lr = 0x8330A370;
	sub_83307270(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19840
	ctx.r11.s64 = ctx.r11.s64 + 19840;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A37C:
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82295bc8
	ctx.lr = 0x8330A384;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83307270
	ctx.lr = 0x8330A398;
	sub_83307270(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19872
	ctx.r11.s64 = ctx.r11.s64 + 19872;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A3A4:
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82295bc8
	ctx.lr = 0x8330A3AC;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83307c28
	ctx.lr = 0x8330A3C0;
	sub_83307C28(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19808
	ctx.r11.s64 = ctx.r11.s64 + 19808;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A3CC:
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,438
	ctx.r10.u64 = ctx.r10.u64 | 438;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8330a49c
	if (ctx.cr6.gt) goto loc_8330A49C;
	// beq cr6,0x8330a46c
	if (ctx.cr6.eq) goto loc_8330A46C;
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-346
	ctx.xer.ca = ctx.r11.u32 > 345;
	ctx.r11.s64 = ctx.r11.s64 + -346;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8330a2d4
	goto loc_8330A2D4;
loc_8330A3EC:
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82295bc8
	ctx.lr = 0x8330A3F4;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83307c28
	ctx.lr = 0x8330A408;
	sub_83307C28(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19824
	ctx.r11.s64 = ctx.r11.s64 + 19824;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A414:
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82295bc8
	ctx.lr = 0x8330A41C;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83307c28
	ctx.lr = 0x8330A430;
	sub_83307C28(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19792
	ctx.r11.s64 = ctx.r11.s64 + 19792;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A43C:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A444;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A460;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19472
	ctx.r11.s64 = ctx.r11.s64 + 19472;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A46C:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A474;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A490;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19392
	ctx.r11.s64 = ctx.r11.s64 + 19392;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A49C:
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-10934
	ctx.xer.ca = ctx.r11.u32 > 10933;
	ctx.r11.s64 = ctx.r11.s64 + -10934;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330a4f0
	if (ctx.cr0.eq) goto loc_8330A4F0;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x8330a4f0
	if (ctx.cr6.eq) goto loc_8330A4F0;
	// cmplwi cr6,r11,32676
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32676, ctx.xer);
	// beq cr6,0x8330a520
	if (ctx.cr6.eq) goto loc_8330A520;
	// cmplwi cr6,r11,32720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32720, ctx.xer);
	// bne cr6,0x8330aab8
	if (!ctx.cr6.eq) goto loc_8330AAB8;
loc_8330A4C0:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A4C8;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A4E4;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19584
	ctx.r11.s64 = ctx.r11.s64 + 19584;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A4F0:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A4F8;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A514;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19616
	ctx.r11.s64 = ctx.r11.s64 + 19616;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A520:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A528;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A544;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19632
	ctx.r11.s64 = ctx.r11.s64 + 19632;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A550:
	// lis r10,10784
	ctx.r10.s64 = 706740224;
	// ori r10,r10,134
	ctx.r10.u64 = ctx.r10.u64 | 134;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8330a7f4
	if (ctx.cr6.gt) goto loc_8330A7F4;
	// beq cr6,0x8330a870
	if (ctx.cr6.eq) goto loc_8330A870;
	// lis r10,10240
	ctx.r10.s64 = 671088640;
	// ori r10,r10,258
	ctx.r10.u64 = ctx.r10.u64 | 258;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8330a6d0
	if (ctx.cr6.gt) goto loc_8330A6D0;
	// beq cr6,0x8330a6a0
	if (ctx.cr6.eq) goto loc_8330A6A0;
	// lis r10,6690
	ctx.r10.s64 = 438435840;
	// ori r10,r10,43686
	ctx.r10.u64 = ctx.r10.u64 | 43686;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8330a618
	if (ctx.cr6.gt) goto loc_8330A618;
	// beq cr6,0x8330a670
	if (ctx.cr6.eq) goto loc_8330A670;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,43910
	ctx.r10.u64 = ctx.r10.u64 | 43910;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330a4c0
	if (ctx.cr6.eq) goto loc_8330A4C0;
	// addis r11,r11,-6690
	ctx.r11.s64 = ctx.r11.s64 + -438435840;
	// addic. r11,r11,-88
	ctx.xer.ca = ctx.r11.u32 > 87;
	ctx.r11.s64 = ctx.r11.s64 + -88;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330a5e8
	if (ctx.cr0.eq) goto loc_8330A5E8;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x8330a5e8
	if (ctx.cr6.eq) goto loc_8330A5E8;
	// cmplwi cr6,r11,43528
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43528, ctx.xer);
	// bne cr6,0x8330aab8
	if (!ctx.cr6.eq) goto loc_8330AAB8;
loc_8330A5B8:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A5C0;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A5DC;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19696
	ctx.r11.s64 = ctx.r11.s64 + 19696;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A5E8:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A5F0;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A60C;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19648
	ctx.r11.s64 = ctx.r11.s64 + 19648;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A618:
	// addis r11,r11,-6691
	ctx.r11.s64 = ctx.r11.s64 + -438501376;
	// addic. r11,r11,21664
	ctx.xer.ca = ctx.r11.u32 > 4294945631;
	ctx.r11.s64 = ctx.r11.s64 + 21664;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330a5b8
	if (ctx.cr0.eq) goto loc_8330A5B8;
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// beq cr6,0x8330a670
	if (ctx.cr6.eq) goto loc_8330A670;
	// addis r11,r11,-3549
	ctx.r11.s64 = ctx.r11.s64 + -232587264;
	// addic. r11,r11,-21666
	ctx.xer.ca = ctx.r11.u32 > 21665;
	ctx.r11.s64 = ctx.r11.s64 + -21666;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330a6a0
	if (ctx.cr0.eq) goto loc_8330A6A0;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// bne cr6,0x8330aab8
	if (!ctx.cr6.eq) goto loc_8330AAB8;
loc_8330A640:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A648;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A664;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19520
	ctx.r11.s64 = ctx.r11.s64 + 19520;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A670:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A678;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A694;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19744
	ctx.r11.s64 = ctx.r11.s64 + 19744;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A6A0:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A6A8;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A6C4;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19488
	ctx.r11.s64 = ctx.r11.s64 + 19488;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A6D0:
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// ori r10,r10,134
	ctx.r10.u64 = ctx.r10.u64 | 134;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8330a740
	if (ctx.cr6.gt) goto loc_8330A740;
	// beq cr6,0x8330a764
	if (ctx.cr6.eq) goto loc_8330A764;
	// lis r10,10240
	ctx.r10.s64 = 671088640;
	// ori r10,r10,344
	ctx.r10.u64 = ctx.r10.u64 | 344;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330a640
	if (ctx.cr6.eq) goto loc_8330A640;
	// addis r11,r11,-10280
	ctx.r11.s64 = ctx.r11.s64 + -673710080;
	// addic. r11,r11,-67
	ctx.xer.ca = ctx.r11.u32 > 66;
	ctx.r11.s64 = ctx.r11.s64 + -67;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330a7c4
	if (ctx.cr0.eq) goto loc_8330A7C4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8330a794
	if (ctx.cr6.eq) goto loc_8330A794;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x8330aab8
	if (!ctx.cr6.eq) goto loc_8330AAB8;
loc_8330A710:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A718;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A734;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19376
	ctx.r11.s64 = ctx.r11.s64 + 19376;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A740:
	// addis r11,r11,-10280
	ctx.r11.s64 = ctx.r11.s64 + -673710080;
	// addic. r11,r11,-323
	ctx.xer.ca = ctx.r11.u32 > 322;
	ctx.r11.s64 = ctx.r11.s64 + -323;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330a7c4
	if (ctx.cr0.eq) goto loc_8330A7C4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8330a794
	if (ctx.cr6.eq) goto loc_8330A794;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x8330a710
	if (ctx.cr6.eq) goto loc_8330A710;
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// bne cr6,0x8330aab8
	if (!ctx.cr6.eq) goto loc_8330AAB8;
loc_8330A764:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A76C;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A788;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19280
	ctx.r11.s64 = ctx.r11.s64 + 19280;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A794:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A79C;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A7B8;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19296
	ctx.r11.s64 = ctx.r11.s64 + 19296;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A7C4:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A7CC;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A7E8;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19312
	ctx.r11.s64 = ctx.r11.s64 + 19312;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A7F4:
	// lis r10,11552
	ctx.r10.s64 = 757071872;
	// ori r10,r10,43850
	ctx.r10.u64 = ctx.r10.u64 | 43850;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8330a984
	if (ctx.cr6.gt) goto loc_8330A984;
	// beq cr6,0x8330a954
	if (ctx.cr6.eq) goto loc_8330A954;
	// lis r10,10784
	ctx.r10.s64 = 706740224;
	// ori r10,r10,2950
	ctx.r10.u64 = ctx.r10.u64 | 2950;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8330a8d0
	if (ctx.cr6.gt) goto loc_8330A8D0;
	// beq cr6,0x8330a8a0
	if (ctx.cr6.eq) goto loc_8330A8A0;
	// addis r11,r11,-10784
	ctx.r11.s64 = ctx.r11.s64 + -706740224;
	// addic. r11,r11,-390
	ctx.xer.ca = ctx.r11.u32 > 389;
	ctx.r11.s64 = ctx.r11.s64 + -390;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330a870
	if (ctx.cr0.eq) goto loc_8330A870;
	// cmplwi cr6,r11,2239
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2239, ctx.xer);
	// beq cr6,0x8330a840
	if (ctx.cr6.eq) goto loc_8330A840;
	// cmplwi cr6,r11,2304
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2304, ctx.xer);
	// beq cr6,0x8330a8a0
	if (ctx.cr6.eq) goto loc_8330A8A0;
	// cmplwi cr6,r11,2495
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2495, ctx.xer);
	// bne cr6,0x8330aab8
	if (!ctx.cr6.eq) goto loc_8330AAB8;
loc_8330A840:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A848;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A864;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19552
	ctx.r11.s64 = ctx.r11.s64 + 19552;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A870:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A878;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A894;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19424
	ctx.r11.s64 = ctx.r11.s64 + 19424;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A8A0:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A8A8;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A8C4;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19568
	ctx.r11.s64 = ctx.r11.s64 + 19568;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A8D0:
	// addis r11,r11,-11552
	ctx.r11.s64 = ctx.r11.s64 + -757071872;
	// addic. r11,r11,-153
	ctx.xer.ca = ctx.r11.u32 > 152;
	ctx.r11.s64 = ctx.r11.s64 + -153;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330a924
	if (ctx.cr0.eq) goto loc_8330A924;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x8330a924
	if (ctx.cr6.eq) goto loc_8330A924;
	// cmplwi cr6,r11,43441
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43441, ctx.xer);
	// beq cr6,0x8330a954
	if (ctx.cr6.eq) goto loc_8330A954;
	// cmplwi cr6,r11,43520
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43520, ctx.xer);
	// bne cr6,0x8330aab8
	if (!ctx.cr6.eq) goto loc_8330AAB8;
loc_8330A8F4:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A8FC;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A918;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19600
	ctx.r11.s64 = ctx.r11.s64 + 19600;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A924:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A92C;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A948;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19440
	ctx.r11.s64 = ctx.r11.s64 + 19440;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A954:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A95C;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A978;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19536
	ctx.r11.s64 = ctx.r11.s64 + 19536;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A984:
	// lis r10,11554
	ctx.r10.s64 = 757202944;
	// ori r10,r10,43941
	ctx.r10.u64 = ctx.r10.u64 | 43941;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8330aa24
	if (ctx.cr6.gt) goto loc_8330AA24;
	// beq cr6,0x8330a9f4
	if (ctx.cr6.eq) goto loc_8330A9F4;
	// lis r10,11552
	ctx.r10.s64 = 757071872;
	// ori r10,r10,43929
	ctx.r10.u64 = ctx.r10.u64 | 43929;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330a8f4
	if (ctx.cr6.eq) goto loc_8330A8F4;
	// addis r11,r11,-11555
	ctx.r11.s64 = ctx.r11.s64 + -757268480;
	// addic. r11,r11,21857
	ctx.xer.ca = ctx.r11.u32 > 4294945438;
	ctx.r11.s64 = ctx.r11.s64 + 21857;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330a9c4
	if (ctx.cr0.eq) goto loc_8330A9C4;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x8330a9f4
	if (ctx.cr6.eq) goto loc_8330A9F4;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x8330aab8
	if (!ctx.cr6.eq) goto loc_8330AAB8;
loc_8330A9C4:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A9CC;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330A9E8;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19680
	ctx.r11.s64 = ctx.r11.s64 + 19680;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330A9F4:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330A9FC;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330AA18;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19728
	ctx.r11.s64 = ctx.r11.s64 + 19728;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330AA24:
	// addis r11,r11,-11683
	ctx.r11.s64 = ctx.r11.s64 + -765657088;
	// addic. r11,r11,21922
	ctx.xer.ca = ctx.r11.u32 > 4294945373;
	ctx.r11.s64 = ctx.r11.s64 + 21922;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330aa78
	if (ctx.cr0.eq) goto loc_8330AA78;
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// beq cr6,0x8330aa48
	if (ctx.cr6.eq) goto loc_8330AA48;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x8330aa78
	if (ctx.cr6.eq) goto loc_8330AA78;
	// cmplwi cr6,r11,326
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 326, ctx.xer);
	// bne cr6,0x8330aab8
	if (!ctx.cr6.eq) goto loc_8330AAB8;
loc_8330AA48:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330AA50;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330AA6C;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19712
	ctx.r11.s64 = ctx.r11.s64 + 19712;
	// b 0x8330aaa4
	goto loc_8330AAA4;
loc_8330AA78:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82295bc8
	ctx.lr = 0x8330AA80;
	sub_82295BC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8330aaac
	if (ctx.cr0.eq) goto loc_8330AAAC;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc0e0
	ctx.lr = 0x8330AA9C;
	sub_832FC0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,19664
	ctx.r11.s64 = ctx.r11.s64 + 19664;
loc_8330AAA4:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8330aab0
	goto loc_8330AAB0;
loc_8330AAAC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8330AAB0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330aac0
	if (!ctx.cr6.eq) goto loc_8330AAC0;
loc_8330AAB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8330ab20
	goto loc_8330AB20;
loc_8330AAC0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8330aafc
	if (ctx.cr6.eq) goto loc_8330AAFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fc518
	ctx.lr = 0x8330AAD8;
	sub_832FC518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8330aafc
	if (!ctx.cr0.lt) goto loc_8330AAFC;
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
	ctx.lr = 0x8330AAF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8330aab8
	goto loc_8330AAB8;
loc_8330AAFC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8330ab1c
	if (ctx.cr6.eq) goto loc_8330AB1C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8330AB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330AB1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8330AB20:
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

__attribute__((alias("__imp__sub_8330AB38"))) PPC_WEAK_FUNC(sub_8330AB38);
PPC_FUNC_IMPL(__imp__sub_8330AB38) {
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
	// bl 0x83309e78
	ctx.lr = 0x8330AB58;
	sub_83309E78(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330ab68
	if (ctx.cr0.eq) goto loc_8330AB68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x8330AB68;
	sub_822990F0(ctx, base);
loc_8330AB68:
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

__attribute__((alias("__imp__sub_8330AB84"))) PPC_WEAK_FUNC(sub_8330AB84);
PPC_FUNC_IMPL(__imp__sub_8330AB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330AB88"))) PPC_WEAK_FUNC(sub_8330AB88);
PPC_FUNC_IMPL(__imp__sub_8330AB88) {
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
	// bl 0x83309e78
	ctx.lr = 0x8330ABA8;
	sub_83309E78(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330abb8
	if (ctx.cr0.eq) goto loc_8330ABB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x8330ABB8;
	sub_822990F0(ctx, base);
loc_8330ABB8:
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

__attribute__((alias("__imp__sub_8330ABD4"))) PPC_WEAK_FUNC(sub_8330ABD4);
PPC_FUNC_IMPL(__imp__sub_8330ABD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330ABD8"))) PPC_WEAK_FUNC(sub_8330ABD8);
PPC_FUNC_IMPL(__imp__sub_8330ABD8) {
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
	// bl 0x83309e78
	ctx.lr = 0x8330ABF8;
	sub_83309E78(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330ac08
	if (ctx.cr0.eq) goto loc_8330AC08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x8330AC08;
	sub_822990F0(ctx, base);
loc_8330AC08:
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

__attribute__((alias("__imp__sub_8330AC24"))) PPC_WEAK_FUNC(sub_8330AC24);
PPC_FUNC_IMPL(__imp__sub_8330AC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330AC28"))) PPC_WEAK_FUNC(sub_8330AC28);
PPC_FUNC_IMPL(__imp__sub_8330AC28) {
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
	// bl 0x83309e78
	ctx.lr = 0x8330AC48;
	sub_83309E78(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330ac58
	if (ctx.cr0.eq) goto loc_8330AC58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x8330AC58;
	sub_822990F0(ctx, base);
loc_8330AC58:
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

__attribute__((alias("__imp__sub_8330AC74"))) PPC_WEAK_FUNC(sub_8330AC74);
PPC_FUNC_IMPL(__imp__sub_8330AC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330AC78"))) PPC_WEAK_FUNC(sub_8330AC78);
PPC_FUNC_IMPL(__imp__sub_8330AC78) {
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
	// bl 0x83309e78
	ctx.lr = 0x8330AC98;
	sub_83309E78(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330aca8
	if (ctx.cr0.eq) goto loc_8330ACA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x8330ACA8;
	sub_822990F0(ctx, base);
loc_8330ACA8:
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

__attribute__((alias("__imp__sub_8330ACC4"))) PPC_WEAK_FUNC(sub_8330ACC4);
PPC_FUNC_IMPL(__imp__sub_8330ACC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330ACC8"))) PPC_WEAK_FUNC(sub_8330ACC8);
PPC_FUNC_IMPL(__imp__sub_8330ACC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cb1160
	sub_82CB1160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330ACCC"))) PPC_WEAK_FUNC(sub_8330ACCC);
PPC_FUNC_IMPL(__imp__sub_8330ACCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330ACD0"))) PPC_WEAK_FUNC(sub_8330ACD0);
PPC_FUNC_IMPL(__imp__sub_8330ACD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cb16f0
	sub_82CB16F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330ACD4"))) PPC_WEAK_FUNC(sub_8330ACD4);
PPC_FUNC_IMPL(__imp__sub_8330ACD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330ACD8"))) PPC_WEAK_FUNC(sub_8330ACD8);
PPC_FUNC_IMPL(__imp__sub_8330ACD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8330ACE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r30,r10,27,5,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// clrlwi r29,r10,27
	ctx.r29.u64 = ctx.r10.u32 & 0x1F;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8330ad60
	if (ctx.cr6.eq) goto loc_8330AD60;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// bge cr6,0x8330ad48
	if (!ctx.cr6.lt) goto loc_8330AD48;
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x8330AD48;
	sub_82CB16F0(ctx, base);
loc_8330AD48:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,-2
	ctx.r10.s64 = -2;
	// slw r10,r10,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r29.u8 & 0x3F));
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// b 0x8330ad84
	goto loc_8330AD84;
loc_8330AD60:
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// li r9,-2
	ctx.r9.s64 = -2;
	// lwzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// slw r9,r9,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r29.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
loc_8330AD84:
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330AD90"))) PPC_WEAK_FUNC(sub_8330AD90);
PPC_FUNC_IMPL(__imp__sub_8330AD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8330AD98;
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
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8330add8
	if (ctx.cr6.lt) goto loc_8330ADD8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-20824
	ctx.r6.s64 = ctx.r11.s64 + -20824;
	// addi r5,r10,-20896
	ctx.r5.s64 = ctx.r10.s64 + -20896;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,281
	ctx.r7.s64 = 281;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330ADD8;
	sub_8320CF10(ctx, base);
loc_8330ADD8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330ADF0"))) PPC_WEAK_FUNC(sub_8330ADF0);
PPC_FUNC_IMPL(__imp__sub_8330ADF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8330ADF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83216a28
	ctx.lr = 0x8330AE0C;
	sub_83216A28(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x8330aec8
	if (ctx.cr0.eq) goto loc_8330AEC8;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r28,r9,-21168
	ctx.r28.s64 = ctx.r9.s64 + -21168;
	// addi r27,r8,20000
	ctx.r27.s64 = ctx.r8.s64 + 20000;
	// addi r26,r11,19904
	ctx.r26.s64 = ctx.r11.s64 + 19904;
loc_8330AE30:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330aeb8
	if (ctx.cr0.eq) goto loc_8330AEB8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x832d4848
	ctx.lr = 0x8330AE50;
	sub_832D4848(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8330ae7c
	if (ctx.cr6.eq) goto loc_8330AE7C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8330ae7c
	if (ctx.cr6.eq) goto loc_8330AE7C;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,455
	ctx.r7.s64 = 455;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330AE7C;
	sub_8320CF10(ctx, base);
loc_8330AE7C:
	// addi r8,r30,-1
	ctx.r8.s64 = ctx.r30.s64 + -1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r31,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r9,r31,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r7,r31,27
	ctx.r7.u64 = ctx.r31.u32 & 0x1F;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwzx r6,r11,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// stwx r8,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r8.u32);
	// stwx r7,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r7.u32);
loc_8330AEB8:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bne 0x8330ae30
	if (!ctx.cr0.eq) goto loc_8330AE30;
loc_8330AEC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330AED4"))) PPC_WEAK_FUNC(sub_8330AED4);
PPC_FUNC_IMPL(__imp__sub_8330AED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330AED8"))) PPC_WEAK_FUNC(sub_8330AED8);
PPC_FUNC_IMPL(__imp__sub_8330AED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8330AEE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,2584
	ctx.r28.s64 = ctx.r10.s64 + 2584;
	// bne cr6,0x8330af24
	if (!ctx.cr6.eq) goto loc_8330AF24;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-20840
	ctx.r5.s64 = ctx.r11.s64 + -20840;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,265
	ctx.r7.s64 = 265;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330AF24;
	sub_8320CF10(ctx, base);
loc_8330AF24:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8330af4c
	if (ctx.cr6.lt) goto loc_8330AF4C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,20140
	ctx.r5.s64 = ctx.r11.s64 + 20140;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,266
	ctx.r7.s64 = 266;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330AF4C;
	sub_8320CF10(ctx, base);
loc_8330AF4C:
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8330af7c
	if (ctx.cr6.lt) goto loc_8330AF7C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,20064
	ctx.r5.s64 = ctx.r11.s64 + 20064;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,267
	ctx.r7.s64 = 267;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330AF7C;
	sub_8320CF10(ctx, base);
loc_8330AF7C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8330acd8
	ctx.lr = 0x8330AF8C;
	sub_8330ACD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330AF94"))) PPC_WEAK_FUNC(sub_8330AF94);
PPC_FUNC_IMPL(__imp__sub_8330AF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330AF98"))) PPC_WEAK_FUNC(sub_8330AF98);
PPC_FUNC_IMPL(__imp__sub_8330AF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bne cr6,0x8330afd4
	if (!ctx.cr6.eq) goto loc_8330AFD4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,2584
	ctx.r6.s64 = ctx.r11.s64 + 2584;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,453
	ctx.r7.s64 = 453;
	// bl 0x8320cf10
	ctx.lr = 0x8330AFD4;
	sub_8320CF10(ctx, base);
loc_8330AFD4:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8330AFEC"))) PPC_WEAK_FUNC(sub_8330AFEC);
PPC_FUNC_IMPL(__imp__sub_8330AFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330AFF0"))) PPC_WEAK_FUNC(sub_8330AFF0);
PPC_FUNC_IMPL(__imp__sub_8330AFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8330AFF8;
	__savegprlr_26(ctx, base);
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330b038
	if (!ctx.cr6.eq) goto loc_8330B038;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,19904
	ctx.r6.s64 = ctx.r11.s64 + 19904;
	// addi r5,r10,-5864
	ctx.r5.s64 = ctx.r10.s64 + -5864;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1306
	ctx.r7.s64 = 1306;
	// bl 0x8320cf10
	ctx.lr = 0x8330B038;
	sub_8320CF10(ctx, base);
loc_8330B038:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330B048;
	sub_83214F50(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8330b0dc
	if (!ctx.cr6.eq) goto loc_8330B0DC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330B060;
	sub_83214F50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330B074;
	sub_83214F50(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,55
	ctx.r4.s64 = 55;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330B088;
	sub_83214F50(ctx, base);
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwimi r9,r26,30,2,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r26.u32, 30) & 0x3FFFFFFF) | (ctx.r9.u64 & 0xFFFFFFFFC0000000);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// beq 0x8330b0c4
	if (ctx.cr0.eq) goto loc_8330B0C4;
	// addi r9,r3,3
	ctx.r9.s64 = ctx.r3.s64 + 3;
	// rlwimi r10,r9,4,2,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0x3FFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFFC000003F);
	// b 0x8330b0cc
	goto loc_8330B0CC;
loc_8330B0C4:
	// oris r10,r10,16383
	ctx.r10.u64 = ctx.r10.u64 | 1073676288;
	// ori r10,r10,65472
	ctx.r10.u64 = ctx.r10.u64 | 65472;
loc_8330B0CC:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8330B0DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330B0E4"))) PPC_WEAK_FUNC(sub_8330B0E4);
PPC_FUNC_IMPL(__imp__sub_8330B0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330B0E8"))) PPC_WEAK_FUNC(sub_8330B0E8);
PPC_FUNC_IMPL(__imp__sub_8330B0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8330B0F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,926
	ctx.r4.s64 = 926;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8330ad90
	ctx.lr = 0x8330B110;
	sub_8330AD90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8330b140
	if (!ctx.cr6.eq) goto loc_8330B140;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,19904
	ctx.r6.s64 = ctx.r11.s64 + 19904;
	// addi r5,r10,20196
	ctx.r5.s64 = ctx.r10.s64 + 20196;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1436
	ctx.r7.s64 = 1436;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330B140;
	sub_8320CF10(ctx, base);
loc_8330B140:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,986
	ctx.r4.s64 = 986;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8330ad90
	ctx.lr = 0x8330B150;
	sub_8330AD90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,987
	ctx.r4.s64 = 987;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8330ad90
	ctx.lr = 0x8330B164;
	sub_8330AD90(ctx, base);
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// rlwimi r8,r31,30,2,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r31.u32, 30) & 0x3FFFFFFF) | (ctx.r8.u64 & 0xFFFFFFFFC0000000);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8330b1a8
	if (ctx.cr6.eq) goto loc_8330B1A8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwimi r9,r10,4,2,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0x3FFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFFC000003F);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// b 0x8330b1b8
	goto loc_8330B1B8;
loc_8330B1A8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// oris r10,r10,16383
	ctx.r10.u64 = ctx.r10.u64 | 1073676288;
	// ori r10,r10,65472
	ctx.r10.u64 = ctx.r10.u64 | 65472;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8330B1B8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330B1CC"))) PPC_WEAK_FUNC(sub_8330B1CC);
PPC_FUNC_IMPL(__imp__sub_8330B1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330B1D0"))) PPC_WEAK_FUNC(sub_8330B1D0);
PPC_FUNC_IMPL(__imp__sub_8330B1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bne cr6,0x8330b20c
	if (!ctx.cr6.eq) goto loc_8330B20C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,19904
	ctx.r6.s64 = ctx.r11.s64 + 19904;
	// addi r5,r10,-5864
	ctx.r5.s64 = ctx.r10.s64 + -5864;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1836
	ctx.r7.s64 = 1836;
	// bl 0x8320cf10
	ctx.lr = 0x8330B20C;
	sub_8320CF10(ctx, base);
loc_8330B20C:
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,65
	ctx.r4.s64 = 65;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8330aed8
	ctx.lr = 0x8330B21C;
	sub_8330AED8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8330B230"))) PPC_WEAK_FUNC(sub_8330B230);
PPC_FUNC_IMPL(__imp__sub_8330B230) {
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
	// bl 0x8330af98
	ctx.lr = 0x8330B240;
	sub_8330AF98(ctx, base);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8330B254"))) PPC_WEAK_FUNC(sub_8330B254);
PPC_FUNC_IMPL(__imp__sub_8330B254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330B258"))) PPC_WEAK_FUNC(sub_8330B258);
PPC_FUNC_IMPL(__imp__sub_8330B258) {
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
	// bl 0x8330af98
	ctx.lr = 0x8330B268;
	sub_8330AF98(ctx, base);
	// addi r3,r3,656
	ctx.r3.s64 = ctx.r3.s64 + 656;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8330B27C"))) PPC_WEAK_FUNC(sub_8330B27C);
PPC_FUNC_IMPL(__imp__sub_8330B27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330B280"))) PPC_WEAK_FUNC(sub_8330B280);
PPC_FUNC_IMPL(__imp__sub_8330B280) {
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
	// bl 0x8330af98
	ctx.lr = 0x8330B290;
	sub_8330AF98(ctx, base);
	// addi r3,r3,772
	ctx.r3.s64 = ctx.r3.s64 + 772;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8330B2A4"))) PPC_WEAK_FUNC(sub_8330B2A4);
PPC_FUNC_IMPL(__imp__sub_8330B2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330B2A8"))) PPC_WEAK_FUNC(sub_8330B2A8);
PPC_FUNC_IMPL(__imp__sub_8330B2A8) {
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
	// bl 0x8330af98
	ctx.lr = 0x8330B2B8;
	sub_8330AF98(ctx, base);
	// addi r3,r3,688
	ctx.r3.s64 = ctx.r3.s64 + 688;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

