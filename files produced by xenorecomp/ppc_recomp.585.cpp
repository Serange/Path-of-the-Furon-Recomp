#include "ppc_recomp_shared.h"

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

__attribute__((alias("__imp__sub_8330B2CC"))) PPC_WEAK_FUNC(sub_8330B2CC);
PPC_FUNC_IMPL(__imp__sub_8330B2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330B2D0"))) PPC_WEAK_FUNC(sub_8330B2D0);
PPC_FUNC_IMPL(__imp__sub_8330B2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x8330B2D8;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r6,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r6.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r27.u32);
	// bl 0x83216a00
	ctx.lr = 0x8330B2F4;
	sub_83216A00(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8330b6e4
	if (ctx.cr0.eq) goto loc_8330B6E4;
	// lis r29,-32247
	ctx.r29.s64 = -2113339392;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r3,-32247
	ctx.r3.s64 = -2113339392;
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31906
	ctx.r31.s64 = -2090991616;
	// lis r30,-32247
	ctx.r30.s64 = -2113339392;
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r29,20640
	ctx.r29.s64 = ctx.r29.s64 + 20640;
	// addi r3,r3,-4684
	ctx.r3.s64 = ctx.r3.s64 + -4684;
	// addi r4,r4,20536
	ctx.r4.s64 = ctx.r4.s64 + 20536;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r10,r10,-20572
	ctx.r10.s64 = ctx.r10.s64 + -20572;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r22,r31,-18144
	ctx.r22.s64 = ctx.r31.s64 + -18144;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r18,r30,-20528
	ctx.r18.s64 = ctx.r30.s64 + -20528;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r17,r5,20440
	ctx.r17.s64 = ctx.r5.s64 + 20440;
	// addi r16,r6,20344
	ctx.r16.s64 = ctx.r6.s64 + 20344;
	// addi r15,r7,20248
	ctx.r15.s64 = ctx.r7.s64 + 20248;
	// addi r14,r8,20212
	ctx.r14.s64 = ctx.r8.s64 + 20212;
	// addi r26,r9,-21168
	ctx.r26.s64 = ctx.r9.s64 + -21168;
	// addi r25,r11,19904
	ctx.r25.s64 = ctx.r11.s64 + 19904;
loc_8330B374:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbz r23,0(r28)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// rlwinm r31,r11,12,28,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x8330b3a4
	if (ctx.cr6.lt) goto loc_8330B3A4;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,246
	ctx.r7.s64 = 246;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330B3A0;
	sub_8320CF10(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8330B3A4:
	// li r20,0
	ctx.r20.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8330b6cc
	if (ctx.cr6.eq) goto loc_8330B6CC;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
loc_8330B3B8:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330b6b8
	if (ctx.cr0.eq) goto loc_8330B6B8;
	// addi r11,r23,128
	ctx.r11.s64 = ctx.r23.s64 + 128;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,20,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFF;
	// srw r11,r11,r19
	ctx.r11.u64 = ctx.r19.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r19.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8330b6a0
	if (ctx.cr6.lt) goto loc_8330B6A0;
	// beq cr6,0x8330b674
	if (ctx.cr6.eq) goto loc_8330B674;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8330b414
	if (ctx.cr6.lt) goto loc_8330B414;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,330
	ctx.r7.s64 = 330;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330B40C;
	sub_8320CF10(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8330b6b8
	goto loc_8330B6B8;
loc_8330B414:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8330b438
	if (ctx.cr6.eq) goto loc_8330B438;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,277
	ctx.r7.s64 = 277;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330B434;
	sub_8320CF10(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8330B438:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r11,49152
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49152, ctx.xer);
	// beq cr6,0x8330b464
	if (ctx.cr6.eq) goto loc_8330B464;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,278
	ctx.r7.s64 = 278;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330B460;
	sub_8320CF10(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8330B464:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8330b490
	if (ctx.cr6.eq) goto loc_8330B490;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,279
	ctx.r7.s64 = 279;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330B48C;
	sub_8320CF10(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8330B490:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,12
	ctx.r10.s64 = 786432;
	// rlwinm r11,r11,0,12,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330b4c0
	if (ctx.cr6.eq) goto loc_8330B4C0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,280
	ctx.r7.s64 = 280;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330B4BC;
	sub_8320CF10(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8330B4C0:
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8330b560
	if (!ctx.cr6.eq) goto loc_8330B560;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,89
	ctx.r4.s64 = 89;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330B4E0;
	sub_83214F50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330B4F4;
	sub_83214F50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330B508;
	sub_83214F50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330B51C;
	sub_83214F50(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r29,-4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// beq cr6,0x8330b624
	if (ctx.cr6.eq) goto loc_8330B624;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// beq cr6,0x8330b624
	if (ctx.cr6.eq) goto loc_8330B624;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x8330b61c
	if (ctx.cr6.eq) goto loc_8330B61C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330b61c
	if (ctx.cr6.eq) goto loc_8330B61C;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r7,291
	ctx.r7.s64 = 291;
	// b 0x8330b60c
	goto loc_8330B60C;
loc_8330B560:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8330b580
	if (ctx.cr6.eq) goto loc_8330B580;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,295
	ctx.r7.s64 = 295;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330B580;
	sub_8320CF10(ctx, base);
loc_8330B580:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330B590;
	sub_83214F50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,98
	ctx.r4.s64 = 98;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330B5A4;
	sub_83214F50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,99
	ctx.r4.s64 = 99;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330B5B8;
	sub_83214F50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,97
	ctx.r4.s64 = 97;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330B5CC;
	sub_83214F50(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r29,-4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// beq cr6,0x8330b624
	if (ctx.cr6.eq) goto loc_8330B624;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// beq cr6,0x8330b624
	if (ctx.cr6.eq) goto loc_8330B624;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x8330b61c
	if (ctx.cr6.eq) goto loc_8330B61C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330b61c
	if (ctx.cr6.eq) goto loc_8330B61C;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r7,299
	ctx.r7.s64 = 299;
loc_8330B60C:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330B61C;
	sub_8320CF10(ctx, base);
loc_8330B61C:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8330b628
	goto loc_8330B628;
loc_8330B624:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8330B628:
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,292(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r11,r23,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// oris r10,r10,75
	ctx.r10.u64 = ctx.r10.u64 | 4915200;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | ctx.r29.u64;
	// rlwimi r9,r27,30,2,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r27.u32, 30) & 0x3FFFFFFF) | (ctx.r9.u64 & 0xFFFFFFFFC0000000);
	// lwz r27,292(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// oris r8,r31,19200
	ctx.r8.u64 = ctx.r31.u64 | 1258291200;
	// lis r7,19200
	ctx.r7.s64 = 1258291200;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x8330b6b8
	goto loc_8330B6B8;
loc_8330B674:
	// add r11,r21,r28
	ctx.r11.u64 = ctx.r21.u64 + ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x832d47a0
	ctx.lr = 0x8330B688;
	sub_832D47A0(ctx, base);
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, temp.u32);
	// b 0x8330b6b8
	goto loc_8330B6B8;
loc_8330B6A0:
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r21,r28
	ctx.r10.u64 = ctx.r21.u64 + ctx.r28.u64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r27
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, temp.u32);
loc_8330B6B8:
	// rlwinm. r31,r31,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// addi r21,r21,8
	ctx.r21.s64 = ctx.r21.s64 + 8;
	// bne 0x8330b3b8
	if (!ctx.cr0.eq) goto loc_8330B3B8;
loc_8330B6CC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r28,36
	ctx.r28.s64 = ctx.r28.s64 + 36;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne 0x8330b374
	if (!ctx.cr0.eq) goto loc_8330B374;
loc_8330B6E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330B6F0"))) PPC_WEAK_FUNC(sub_8330B6F0);
PPC_FUNC_IMPL(__imp__sub_8330B6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8330B6F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,19904
	ctx.r29.s64 = ctx.r10.s64 + 19904;
	// bne cr6,0x8330b738
	if (!ctx.cr6.eq) goto loc_8330B738;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,371
	ctx.r7.s64 = 371;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330B738;
	sub_8320CF10(ctx, base);
loc_8330B738:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8330b75c
	if (!ctx.cr6.eq) goto loc_8330B75C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5864
	ctx.r5.s64 = ctx.r11.s64 + -5864;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,372
	ctx.r7.s64 = 372;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330B75C;
	sub_8320CF10(ctx, base);
loc_8330B75C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8330af98
	ctx.lr = 0x8330B764;
	sub_8330AF98(ctx, base);
	// addic. r31,r3,16
	ctx.xer.ca = ctx.r3.u32 > 4294967279;
	ctx.r31.s64 = ctx.r3.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8330b788
	if (!ctx.cr0.eq) goto loc_8330B788;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5288
	ctx.r5.s64 = ctx.r11.s64 + 5288;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,377
	ctx.r7.s64 = 377;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330B788;
	sub_8320CF10(ctx, base);
loc_8330B788:
	// addi r11,r31,512
	ctx.r11.s64 = ctx.r31.s64 + 512;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8330B798:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8330b798
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8330B798;
	// lwz r3,52(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// bl 0x83215fe8
	ctx.lr = 0x8330B7AC;
	sub_83215FE8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8330b2d0
	ctx.lr = 0x8330B7BC;
	sub_8330B2D0(ctx, base);
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x83215fe8
	ctx.lr = 0x8330B7C4;
	sub_83215FE8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8330b2d0
	ctx.lr = 0x8330B7D4;
	sub_8330B2D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330B7E0"))) PPC_WEAK_FUNC(sub_8330B7E0);
PPC_FUNC_IMPL(__imp__sub_8330B7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8330B7E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,19904
	ctx.r27.s64 = ctx.r10.s64 + 19904;
	// bne cr6,0x8330b828
	if (!ctx.cr6.eq) goto loc_8330B828;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,502
	ctx.r7.s64 = 502;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330B828;
	sub_8320CF10(ctx, base);
loc_8330B828:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8330b84c
	if (!ctx.cr6.eq) goto loc_8330B84C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5864
	ctx.r5.s64 = ctx.r11.s64 + -5864;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,503
	ctx.r7.s64 = 503;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330B84C;
	sub_8320CF10(ctx, base);
loc_8330B84C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8330af98
	ctx.lr = 0x8330B854;
	sub_8330AF98(ctx, base);
	// addic. r31,r3,656
	ctx.xer.ca = ctx.r3.u32 > 4294966639;
	ctx.r31.s64 = ctx.r3.s64 + 656;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8330b878
	if (!ctx.cr0.eq) goto loc_8330B878;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5288
	ctx.r5.s64 = ctx.r11.s64 + 5288;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,508
	ctx.r7.s64 = 508;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330B878;
	sub_8320CF10(ctx, base);
loc_8330B878:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x83215fe8
	ctx.lr = 0x8330B898;
	sub_83215FE8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8330adf0
	ctx.lr = 0x8330B8A4;
	sub_8330ADF0(ctx, base);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x83215fe8
	ctx.lr = 0x8330B8AC;
	sub_83215FE8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8330adf0
	ctx.lr = 0x8330B8B8;
	sub_8330ADF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330B8C4"))) PPC_WEAK_FUNC(sub_8330B8C4);
PPC_FUNC_IMPL(__imp__sub_8330B8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330B8C8"))) PPC_WEAK_FUNC(sub_8330B8C8);
PPC_FUNC_IMPL(__imp__sub_8330B8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x8330B8D0;
	__savegprlr_19(ctx, base);
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f29.u64);
	// stfd f30,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r4,984
	ctx.r4.s64 = 984;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330B8F8;
	sub_83214BF0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// bl 0x83214f50
	ctx.lr = 0x8330B90C;
	sub_83214F50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,57
	ctx.r4.s64 = 57;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330B920;
	sub_83214F50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330b93c
	if (!ctx.cr6.eq) goto loc_8330B93C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330cb98
	if (ctx.cr6.eq) goto loc_8330CB98;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_8330B93C:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x8330cb98
	if (!ctx.cr6.eq) goto loc_8330CB98;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,79
	ctx.r4.s64 = 79;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// bl 0x83214f50
	ctx.lr = 0x8330B958;
	sub_83214F50(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x8330b964
	if (!ctx.cr6.eq) goto loc_8330B964;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
loc_8330B964:
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// clrlwi. r8,r29,20
	ctx.r8.u64 = ctx.r29.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r31,r10,-21168
	ctx.r31.s64 = ctx.r10.s64 + -21168;
	// addi r30,r9,19904
	ctx.r30.s64 = ctx.r9.s64 + 19904;
	// beq 0x8330b9a0
	if (ctx.cr0.eq) goto loc_8330B9A0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,22124
	ctx.r5.s64 = ctx.r11.s64 + 22124;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,721
	ctx.r7.s64 = 721;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330B9A0;
	sub_8320CF10(ctx, base);
loc_8330B9A0:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r4,82
	ctx.r4.s64 = 82;
	// rlwimi r11,r29,20,12,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 20) & 0xFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFF00000);
	// stw r22,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r22.u32);
	// rlwimi r10,r22,31,0,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r22.u32, 31) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// bl 0x83214f50
	ctx.lr = 0x8330B9CC;
	sub_83214F50(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// rlwimi r11,r3,19,10,12
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 19) & 0x380000) | (ctx.r11.u64 & 0xFFFFFFFFFFC7FFFF);
	// li r4,83
	ctx.r4.s64 = 83;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330B9E8;
	sub_83214F50(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// rlwimi r11,r3,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// beq cr6,0x8330ba0c
	if (ctx.cr6.eq) goto loc_8330BA0C;
	// li r4,962
	ctx.r4.s64 = 962;
	// bl 0x83214bf0
	ctx.lr = 0x8330BA08;
	sub_83214BF0(ctx, base);
	// b 0x8330ba18
	goto loc_8330BA18;
loc_8330BA0C:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,84
	ctx.r4.s64 = 84;
	// bl 0x83214f50
	ctx.lr = 0x8330BA18;
	sub_83214F50(ctx, base);
loc_8330BA18:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,79
	ctx.r4.s64 = 79;
	// rlwimi r11,r3,13,16,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 13) & 0xE000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// bl 0x83214f50
	ctx.lr = 0x8330BA34;
	sub_83214F50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8330ba50
	if (ctx.cr6.eq) goto loc_8330BA50;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// rlwimi r11,r22,10,20,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r22.u32, 10) & 0xC00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF3FF);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// b 0x8330ba6c
	goto loc_8330BA6C;
loc_8330BA50:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,79
	ctx.r4.s64 = 79;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330BA60;
	sub_83214F50(ctx, base);
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwimi r11,r3,21,9,10
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 21) & 0x600000) | (ctx.r11.u64 & 0xFFFFFFFFFF9FFFFF);
	// stw r11,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
loc_8330BA6C:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330BA7C;
	sub_83214F50(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330BA90;
	sub_83214F50(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330BAA4;
	sub_83214F50(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330BAB8;
	sub_83214F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8330badc
	if (ctx.cr0.eq) goto loc_8330BADC;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83313b98
	ctx.lr = 0x8330BADC;
	sub_83313B98(ctx, base);
loc_8330BADC:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330BAEC;
	sub_83214F50(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8330bea4
	if (ctx.cr0.eq) goto loc_8330BEA4;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330BB04;
	sub_83214F50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330BB18;
	sub_83214F50(ctx, base);
	// or r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 | ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330BB2C;
	sub_83214F50(ctx, base);
	// or r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 | ctx.r28.u64;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83313ff8
	ctx.lr = 0x8330BB44;
	sub_83313FF8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330BB54;
	sub_83214F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8330be3c
	if (ctx.cr0.eq) goto loc_8330BE3C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,304(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330bb88
	if (ctx.cr6.eq) goto loc_8330BB88;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,22084
	ctx.r5.s64 = ctx.r11.s64 + 22084;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,782
	ctx.r7.s64 = 782;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330BB88;
	sub_8320CF10(ctx, base);
loc_8330BB88:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8330bbb4
	if (ctx.cr6.eq) goto loc_8330BBB4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,22040
	ctx.r5.s64 = ctx.r11.s64 + 22040;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,783
	ctx.r7.s64 = 783;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330BBB4;
	sub_8320CF10(ctx, base);
loc_8330BBB4:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,312(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330bbe0
	if (ctx.cr6.eq) goto loc_8330BBE0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21996
	ctx.r5.s64 = ctx.r11.s64 + 21996;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,784
	ctx.r7.s64 = 784;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330BBE0;
	sub_8320CF10(ctx, base);
loc_8330BBE0:
	// cmplwi cr6,r29,4146
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4146, ctx.xer);
	// beq cr6,0x8330bc60
	if (ctx.cr6.eq) goto loc_8330BC60;
	// cmplwi cr6,r29,4147
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4147, ctx.xer);
	// beq cr6,0x8330bc60
	if (ctx.cr6.eq) goto loc_8330BC60;
	// cmplwi cr6,r29,4152
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4152, ctx.xer);
	// beq cr6,0x8330bc60
	if (ctx.cr6.eq) goto loc_8330BC60;
	// cmplwi cr6,r29,4151
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4151, ctx.xer);
	// beq cr6,0x8330bc60
	if (ctx.cr6.eq) goto loc_8330BC60;
	// cmplwi cr6,r29,4155
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4155, ctx.xer);
	// beq cr6,0x8330bc60
	if (ctx.cr6.eq) goto loc_8330BC60;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330bc34
	if (ctx.cr6.eq) goto loc_8330BC34;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21952
	ctx.r5.s64 = ctx.r11.s64 + 21952;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,802
	ctx.r7.s64 = 802;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330BC34;
	sub_8320CF10(ctx, base);
loc_8330BC34:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330bc60
	if (ctx.cr6.eq) goto loc_8330BC60;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21908
	ctx.r5.s64 = ctx.r11.s64 + 21908;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,803
	ctx.r7.s64 = 803;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330BC60;
	sub_8320CF10(ctx, base);
loc_8330BC60:
	// cmplwi cr6,r29,4122
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4122, ctx.xer);
	// beq cr6,0x8330bcc8
	if (ctx.cr6.eq) goto loc_8330BCC8;
	// cmplwi cr6,r29,4129
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4129, ctx.xer);
	// beq cr6,0x8330bcc8
	if (ctx.cr6.eq) goto loc_8330BCC8;
	// cmplwi cr6,r29,4136
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4136, ctx.xer);
	// beq cr6,0x8330bcc8
	if (ctx.cr6.eq) goto loc_8330BCC8;
	// cmplwi cr6,r29,4143
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4143, ctx.xer);
	// beq cr6,0x8330bcc8
	if (ctx.cr6.eq) goto loc_8330BCC8;
	// cmplwi cr6,r29,4156
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4156, ctx.xer);
	// beq cr6,0x8330bcc8
	if (ctx.cr6.eq) goto loc_8330BCC8;
	// cmplwi cr6,r29,4157
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4157, ctx.xer);
	// beq cr6,0x8330bcc8
	if (ctx.cr6.eq) goto loc_8330BCC8;
	// cmplwi cr6,r29,4158
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4158, ctx.xer);
	// beq cr6,0x8330bcc8
	if (ctx.cr6.eq) goto loc_8330BCC8;
	// cmplwi cr6,r29,4159
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4159, ctx.xer);
	// beq cr6,0x8330bcc8
	if (ctx.cr6.eq) goto loc_8330BCC8;
	// cmplwi cr6,r29,4160
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4160, ctx.xer);
	// beq cr6,0x8330bcc8
	if (ctx.cr6.eq) goto loc_8330BCC8;
	// cmplwi cr6,r29,4161
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4161, ctx.xer);
	// beq cr6,0x8330bcc8
	if (ctx.cr6.eq) goto loc_8330BCC8;
	// cmplwi cr6,r29,4118
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4118, ctx.xer);
	// beq cr6,0x8330bcc8
	if (ctx.cr6.eq) goto loc_8330BCC8;
	// cmplwi cr6,r29,4119
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4119, ctx.xer);
	// beq cr6,0x8330bcc8
	if (ctx.cr6.eq) goto loc_8330BCC8;
	// cmplwi cr6,r29,4150
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4150, ctx.xer);
	// bne cr6,0x8330bcd0
	if (!ctx.cr6.eq) goto loc_8330BCD0;
loc_8330BCC8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8330bd08
	if (!ctx.cr6.eq) goto loc_8330BD08;
loc_8330BCD0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8330bd08
	if (ctx.cr6.eq) goto loc_8330BD08;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330bd08
	if (ctx.cr6.eq) goto loc_8330BD08;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21864
	ctx.r5.s64 = ctx.r11.s64 + 21864;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,834
	ctx.r7.s64 = 834;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330BD08;
	sub_8320CF10(ctx, base);
loc_8330BD08:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,328(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330bd34
	if (ctx.cr6.eq) goto loc_8330BD34;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21816
	ctx.r5.s64 = ctx.r11.s64 + 21816;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,837
	ctx.r7.s64 = 837;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330BD34;
	sub_8320CF10(ctx, base);
loc_8330BD34:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330bd60
	if (ctx.cr6.eq) goto loc_8330BD60;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21768
	ctx.r5.s64 = ctx.r11.s64 + 21768;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,838
	ctx.r7.s64 = 838;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330BD60;
	sub_8320CF10(ctx, base);
loc_8330BD60:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,336(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330bd8c
	if (ctx.cr6.eq) goto loc_8330BD8C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21720
	ctx.r5.s64 = ctx.r11.s64 + 21720;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,839
	ctx.r7.s64 = 839;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330BD8C;
	sub_8320CF10(ctx, base);
loc_8330BD8C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330bdb8
	if (ctx.cr6.eq) goto loc_8330BDB8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21668
	ctx.r5.s64 = ctx.r11.s64 + 21668;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,840
	ctx.r7.s64 = 840;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330BDB8;
	sub_8320CF10(ctx, base);
loc_8330BDB8:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,344(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330bde4
	if (ctx.cr6.eq) goto loc_8330BDE4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21616
	ctx.r5.s64 = ctx.r11.s64 + 21616;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,841
	ctx.r7.s64 = 841;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330BDE4;
	sub_8320CF10(ctx, base);
loc_8330BDE4:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,348(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330be10
	if (ctx.cr6.eq) goto loc_8330BE10;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21564
	ctx.r5.s64 = ctx.r11.s64 + 21564;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,842
	ctx.r7.s64 = 842;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330BE10;
	sub_8320CF10(ctx, base);
loc_8330BE10:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,352(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330be3c
	if (ctx.cr6.eq) goto loc_8330BE3C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21512
	ctx.r5.s64 = ctx.r11.s64 + 21512;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,843
	ctx.r7.s64 = 843;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330BE3C;
	sub_8320CF10(ctx, base);
loc_8330BE3C:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r10,304(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r9,308(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r8,312(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r7,316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r6,320(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r5,328(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r29,340(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r28,344(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r20,348(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r19,352(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r20,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// stw r19,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
loc_8330BEA4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// beq cr6,0x8330beec
	if (ctx.cr6.eq) goto loc_8330BEEC;
	// li r4,960
	ctx.r4.s64 = 960;
	// bl 0x83214bf0
	ctx.lr = 0x8330BEB8;
	sub_83214BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8330bed0
	if (ctx.cr0.eq) goto loc_8330BED0;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x833135e0
	ctx.lr = 0x8330BED0;
	sub_833135E0(ctx, base);
loc_8330BED0:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// rlwimi r11,r10,26,0,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0xFC000000) | (ctx.r11.u64 & 0xFFFFFFFF03FFFFFF);
	// rlwinm r11,r11,0,11,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF1FFFFF;
	// rlwimi r11,r9,21,8,10
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 21) & 0xE00000) | (ctx.r11.u64 & 0xFFFFFFFFFF1FFFFF);
	// b 0x8330bf10
	goto loc_8330BF10;
loc_8330BEEC:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r4,74
	ctx.r4.s64 = 74;
	// rlwimi r11,r10,26,0,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0xFC000000) | (ctx.r11.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// bl 0x83214f50
	ctx.lr = 0x8330BF08;
	sub_83214F50(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwimi r11,r3,22,8,9
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 22) & 0xC00000) | (ctx.r11.u64 & 0xFFFFFFFFFF3FFFFF);
loc_8330BF10:
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r4,58
	ctx.r4.s64 = 58;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwimi r11,r10,2,28,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF3);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r10,r8,3,26,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 3) & 0x38) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC7);
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwimi r9,r11,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// lwz r8,16(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// lwz r29,124(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi r6,r6,31
	ctx.r6.u64 = ctx.r6.u32 & 0x1;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r7,r7,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0xFFFFFC00;
	// lwz r28,4(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// rlwimi r11,r10,3,0,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0xFFFFFFF8) | (ctx.r11.u64 & 0xFFFFFFFF00000007);
	// clrlwi r10,r8,13
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFFF;
	// rlwinm r29,r29,31,0,0
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x80000000;
	// or r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwimi r9,r11,3,0,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 3) & 0xFFFFFFF8) | (ctx.r9.u64 & 0xFFFFFFFF00000007);
	// or r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 | ctx.r29.u64;
	// rlwinm r10,r8,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r8,r28,0,20,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// rlwinm r9,r9,19,0,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0xFFF80000;
	// rlwinm r8,r8,0,10,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFC03FFFFF;
	// rlwinm r11,r11,0,13,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFF8007FFFF;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// bl 0x83214f50
	ctx.lr = 0x8330BFB0;
	sub_83214F50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi. r11,r29,27
	ctx.r11.u64 = ctx.r29.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8330bfd8
	if (ctx.cr0.eq) goto loc_8330BFD8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21492
	ctx.r5.s64 = ctx.r11.s64 + 21492;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,904
	ctx.r7.s64 = 904;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330BFD8;
	sub_8320CF10(ctx, base);
loc_8330BFD8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// rlwimi r11,r29,28,22,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 28) & 0x3FE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC01);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// beq cr6,0x8330bff4
	if (ctx.cr6.eq) goto loc_8330BFF4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x8330c00c
	goto loc_8330C00C;
loc_8330BFF4:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330C004;
	sub_83214F50(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// rlwimi r11,r3,0,31,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
loc_8330C00C:
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// beq cr6,0x8330c324
	if (ctx.cr6.eq) goto loc_8330C324;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// beq cr6,0x8330c324
	if (ctx.cr6.eq) goto loc_8330C324;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8330c0b0
	if (!ctx.cr6.eq) goto loc_8330C0B0;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8330c054
	if (!ctx.cr6.gt) goto loc_8330C054;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21472
	ctx.r5.s64 = ctx.r11.s64 + 21472;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,946
	ctx.r7.s64 = 946;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C054;
	sub_8320CF10(ctx, base);
loc_8330C054:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8330c078
	if (!ctx.cr6.eq) goto loc_8330C078;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21460
	ctx.r5.s64 = ctx.r11.s64 + 21460;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,947
	ctx.r7.s64 = 947;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C078;
	sub_8320CF10(ctx, base);
loc_8330C078:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330C088;
	sub_83214F50(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// rlwinm r11,r11,0,11,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// clrlwi r9,r9,8
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFFF;
	// rlwinm r10,r10,0,11,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF9FFFFF;
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// stw r9,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r9.u32);
	// stw r10,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r10.u32);
	// b 0x8330c414
	goto loc_8330C414;
loc_8330C0B0:
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// bne cr6,0x8330c1bc
	if (!ctx.cr6.eq) goto loc_8330C1BC;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330C0C8;
	sub_83214F50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmplwi cr6,r29,8191
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8191, ctx.xer);
	// addi r27,r11,21444
	ctx.r27.s64 = ctx.r11.s64 + 21444;
	// ble cr6,0x8330c0f4
	if (!ctx.cr6.gt) goto loc_8330C0F4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,960
	ctx.r7.s64 = 960;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C0F4;
	sub_8320CF10(ctx, base);
loc_8330C0F4:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r28,r11,21460
	ctx.r28.s64 = ctx.r11.s64 + 21460;
	// bne cr6,0x8330c11c
	if (!ctx.cr6.eq) goto loc_8330C11C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,961
	ctx.r7.s64 = 961;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C11C;
	sub_8320CF10(ctx, base);
loc_8330C11C:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// li r4,77
	ctx.r4.s64 = 77;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330C138;
	sub_83214F50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,8191
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8191, ctx.xer);
	// ble cr6,0x8330c15c
	if (!ctx.cr6.gt) goto loc_8330C15C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,966
	ctx.r7.s64 = 966;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C15C;
	sub_8320CF10(ctx, base);
loc_8330C15C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8330c17c
	if (!ctx.cr6.eq) goto loc_8330C17C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,967
	ctx.r7.s64 = 967;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C17C;
	sub_8320CF10(ctx, base);
loc_8330C17C:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lis r9,6144
	ctx.r9.s64 = 402653184;
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r7,8(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwimi r9,r11,13,6,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 13) & 0x3FFE000) | (ctx.r9.u64 & 0xFFFFFFFFFC001FFF);
	// lwz r6,24(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// ori r11,r8,3072
	ctx.r11.u64 = ctx.r8.u64 | 3072;
	// rlwinm r8,r7,0,11,9
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// oris r11,r6,96
	ctx.r11.u64 = ctx.r6.u64 | 6291456;
	// stw r8,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r8.u32);
	// stw r10,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r10.u32);
	// stw r11,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
	// b 0x8330c414
	goto loc_8330C414;
loc_8330C1BC:
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// beq cr6,0x8330c1e0
	if (ctx.cr6.eq) goto loc_8330C1E0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21408
	ctx.r5.s64 = ctx.r11.s64 + 21408;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,980
	ctx.r7.s64 = 980;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C1E0;
	sub_8320CF10(ctx, base);
loc_8330C1E0:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330C1F0;
	sub_83214F50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmplwi cr6,r29,2047
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2047, ctx.xer);
	// addi r28,r11,21392
	ctx.r28.s64 = ctx.r11.s64 + 21392;
	// ble cr6,0x8330c21c
	if (!ctx.cr6.gt) goto loc_8330C21C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,985
	ctx.r7.s64 = 985;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C21C;
	sub_8320CF10(ctx, base);
loc_8330C21C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r27,r11,21460
	ctx.r27.s64 = ctx.r11.s64 + 21460;
	// bne cr6,0x8330c244
	if (!ctx.cr6.eq) goto loc_8330C244;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,986
	ctx.r7.s64 = 986;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C244;
	sub_8320CF10(ctx, base);
loc_8330C244:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// li r4,77
	ctx.r4.s64 = 77;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330C260;
	sub_83214F50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,2047
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2047, ctx.xer);
	// ble cr6,0x8330c284
	if (!ctx.cr6.gt) goto loc_8330C284;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,991
	ctx.r7.s64 = 991;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C284;
	sub_8320CF10(ctx, base);
loc_8330C284:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8330c2a4
	if (!ctx.cr6.eq) goto loc_8330C2A4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,992
	ctx.r7.s64 = 992;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C2A4;
	sub_8320CF10(ctx, base);
loc_8330C2A4:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// rlwinm r11,r11,11,10,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x3FF800;
	// li r4,78
	ctx.r4.s64 = 78;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// bl 0x83214f50
	ctx.lr = 0x8330C2C8;
	sub_83214F50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,1023
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1023, ctx.xer);
	// ble cr6,0x8330c2f0
	if (!ctx.cr6.gt) goto loc_8330C2F0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21376
	ctx.r5.s64 = ctx.r11.s64 + 21376;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,997
	ctx.r7.s64 = 997;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C2F0;
	sub_8320CF10(ctx, base);
loc_8330C2F0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8330c310
	if (!ctx.cr6.eq) goto loc_8330C310;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,998
	ctx.r7.s64 = 998;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C310;
	sub_8320CF10(ctx, base);
loc_8330C310:
	// lwz r8,24(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// rlwinm r11,r11,22,0,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xFFC00000;
	// rlwimi r8,r22,22,9,10
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r22.u32, 22) & 0x600000) | (ctx.r8.u64 & 0xFFFFFFFFFF9FFFFF);
	// b 0x8330c3f8
	goto loc_8330C3F8;
loc_8330C324:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330C334;
	sub_83214F50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmplwi cr6,r29,8191
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8191, ctx.xer);
	// addi r27,r11,21444
	ctx.r27.s64 = ctx.r11.s64 + 21444;
	// ble cr6,0x8330c360
	if (!ctx.cr6.gt) goto loc_8330C360;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,928
	ctx.r7.s64 = 928;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C360;
	sub_8320CF10(ctx, base);
loc_8330C360:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r28,r11,21460
	ctx.r28.s64 = ctx.r11.s64 + 21460;
	// bne cr6,0x8330c388
	if (!ctx.cr6.eq) goto loc_8330C388;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,929
	ctx.r7.s64 = 929;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C388;
	sub_8320CF10(ctx, base);
loc_8330C388:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// li r4,77
	ctx.r4.s64 = 77;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330C3A4;
	sub_83214F50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,8191
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8191, ctx.xer);
	// ble cr6,0x8330c3c8
	if (!ctx.cr6.gt) goto loc_8330C3C8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,934
	ctx.r7.s64 = 934;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C3C8;
	sub_8320CF10(ctx, base);
loc_8330C3C8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8330c3e8
	if (!ctx.cr6.eq) goto loc_8330C3E8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,935
	ctx.r7.s64 = 935;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C3E8;
	sub_8320CF10(ctx, base);
loc_8330C3E8:
	// lwz r8,24(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// rlwinm r11,r11,13,6,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x3FFE000;
	// rlwimi r8,r22,21,9,10
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r22.u32, 21) & 0x600000) | (ctx.r8.u64 & 0xFFFFFFFFFF9FFFFF);
loc_8330C3F8:
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r8,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r8.u32);
	// rlwinm r9,r9,0,11,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// stw r9,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r9.u32);
loc_8330C414:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// addi r10,r10,-18176
	ctx.r10.s64 = ctx.r10.s64 + -18176;
	// bne cr6,0x8330c444
	if (!ctx.cr6.eq) goto loc_8330C444;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r9,20(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// rlwimi r11,r22,11,19,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r22.u32, 11) & 0x1800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE7FF);
	// oris r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 2097152;
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// stw r9,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r9.u32);
	// b 0x8330c478
	goto loc_8330C478;
loc_8330C444:
	// lwz r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8330c45c
	if (!ctx.cr6.lt) goto loc_8330C45C;
	// rlwimi r9,r11,11,19,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 11) & 0x1800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE7FF);
	// stw r9,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r9.u32);
	// b 0x8330c478
	goto loc_8330C478;
loc_8330C45C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r9,r22,12,19,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r22.u32, 12) & 0x1800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE7FF);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r9,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r9.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r8,r11,1,28,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0xE) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF1);
	// stw r8,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r8.u32);
loc_8330C478:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8330c4a0
	if (!ctx.cr6.eq) goto loc_8330C4A0;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// rlwimi r11,r22,9,21,22
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r22.u32, 9) & 0x600) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF9FF);
	// oris r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 1048576;
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// stw r10,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r10.u32);
	// b 0x8330c4d4
	goto loc_8330C4D4;
loc_8330C4A0:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8330c4b8
	if (!ctx.cr6.lt) goto loc_8330C4B8;
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// rlwimi r10,r11,9,21,22
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 9) & 0x600) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF9FF);
	// stw r10,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r10.u32);
	// b 0x8330c4d4
	goto loc_8330C4D4;
loc_8330C4B8:
	// lwz r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r9,r22,10,21,22
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r22.u32, 10) & 0x600) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF9FF);
	// stw r9,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r9.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r9,r11,1,28,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0xE) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF1);
	// stw r9,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r9.u32);
loc_8330C4D4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8330c538
	if (ctx.cr6.eq) goto loc_8330C538;
	// li r4,958
	ctx.r4.s64 = 958;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330C4E8;
	sub_83214BF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x8330c4fc
	if (ctx.cr6.lt) goto loc_8330C4FC;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// ble cr6,0x8330c518
	if (!ctx.cr6.gt) goto loc_8330C518;
loc_8330C4FC:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21340
	ctx.r5.s64 = ctx.r11.s64 + 21340;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,1043
	ctx.r7.s64 = 1043;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C518;
	sub_8320CF10(ctx, base);
loc_8330C518:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// li r9,256
	ctx.r9.s64 = 256;
	// rlwinm r11,r11,0,31,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// rlwimi r9,r10,1,28,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0xE) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF1);
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// b 0x8330c544
	goto loc_8330C544;
loc_8330C538:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwimi r11,r10,7,23,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0x180) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE7F);
loc_8330C544:
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330C558;
	sub_83214F50(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// rlwimi r11,r3,4,25,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 4) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// beq cr6,0x8330c994
	if (ctx.cr6.eq) goto loc_8330C994;
	// li r4,71
	ctx.r4.s64 = 71;
	// bl 0x83214f50
	ctx.lr = 0x8330C57C;
	sub_83214F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8330c5a0
	if (ctx.cr0.eq) goto loc_8330C5A0;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83313b98
	ctx.lr = 0x8330C5A0;
	sub_83313B98(ctx, base);
loc_8330C5A0:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330C5B0;
	sub_83214F50(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8330c884
	if (ctx.cr0.eq) goto loc_8330C884;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83313ff8
	ctx.lr = 0x8330C5C8;
	sub_83313FF8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330C5D8;
	sub_83214F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8330c81c
	if (ctx.cr0.eq) goto loc_8330C81C;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330c60c
	if (ctx.cr6.eq) goto loc_8330C60C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21308
	ctx.r5.s64 = ctx.r11.s64 + 21308;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,1091
	ctx.r7.s64 = 1091;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C60C;
	sub_8320CF10(ctx, base);
loc_8330C60C:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330c638
	if (ctx.cr6.eq) goto loc_8330C638;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21272
	ctx.r5.s64 = ctx.r11.s64 + 21272;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,1092
	ctx.r7.s64 = 1092;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C638;
	sub_8320CF10(ctx, base);
loc_8330C638:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330c664
	if (ctx.cr6.eq) goto loc_8330C664;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21236
	ctx.r5.s64 = ctx.r11.s64 + 21236;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,1093
	ctx.r7.s64 = 1093;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C664;
	sub_8320CF10(ctx, base);
loc_8330C664:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330c690
	if (ctx.cr6.eq) goto loc_8330C690;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21200
	ctx.r5.s64 = ctx.r11.s64 + 21200;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,1094
	ctx.r7.s64 = 1094;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C690;
	sub_8320CF10(ctx, base);
loc_8330C690:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330c6bc
	if (ctx.cr6.eq) goto loc_8330C6BC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21164
	ctx.r5.s64 = ctx.r11.s64 + 21164;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,1095
	ctx.r7.s64 = 1095;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C6BC;
	sub_8320CF10(ctx, base);
loc_8330C6BC:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330c6e8
	if (ctx.cr6.eq) goto loc_8330C6E8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21128
	ctx.r5.s64 = ctx.r11.s64 + 21128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,1096
	ctx.r7.s64 = 1096;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C6E8;
	sub_8320CF10(ctx, base);
loc_8330C6E8:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r10,264(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330c714
	if (ctx.cr6.eq) goto loc_8330C714;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21088
	ctx.r5.s64 = ctx.r11.s64 + 21088;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,1097
	ctx.r7.s64 = 1097;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C714;
	sub_8320CF10(ctx, base);
loc_8330C714:
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r10,268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330c740
	if (ctx.cr6.eq) goto loc_8330C740;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21048
	ctx.r5.s64 = ctx.r11.s64 + 21048;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,1098
	ctx.r7.s64 = 1098;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C740;
	sub_8320CF10(ctx, base);
loc_8330C740:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r10,272(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330c76c
	if (ctx.cr6.eq) goto loc_8330C76C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,21008
	ctx.r5.s64 = ctx.r11.s64 + 21008;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,1099
	ctx.r7.s64 = 1099;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C76C;
	sub_8320CF10(ctx, base);
loc_8330C76C:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330c798
	if (ctx.cr6.eq) goto loc_8330C798;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,20964
	ctx.r5.s64 = ctx.r11.s64 + 20964;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,1100
	ctx.r7.s64 = 1100;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C798;
	sub_8320CF10(ctx, base);
loc_8330C798:
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r10,280(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330c7c4
	if (ctx.cr6.eq) goto loc_8330C7C4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,20920
	ctx.r5.s64 = ctx.r11.s64 + 20920;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,1101
	ctx.r7.s64 = 1101;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C7C4;
	sub_8320CF10(ctx, base);
loc_8330C7C4:
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r10,284(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330c7f0
	if (ctx.cr6.eq) goto loc_8330C7F0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,20876
	ctx.r5.s64 = ctx.r11.s64 + 20876;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,1102
	ctx.r7.s64 = 1102;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C7F0;
	sub_8320CF10(ctx, base);
loc_8330C7F0:
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,288(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330c81c
	if (ctx.cr6.eq) goto loc_8330C81C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,20832
	ctx.r5.s64 = ctx.r11.s64 + 20832;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,1103
	ctx.r7.s64 = 1103;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C81C;
	sub_8320CF10(ctx, base);
loc_8330C81C:
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r9,248(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r8,252(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r7,256(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r6,260(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r29,276(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r28,280(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r27,284(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r23,288(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// stw r6,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// stw r5,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// stw r27,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r27.u32);
	// stw r23,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r23.u32);
loc_8330C884:
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832d6f28
	ctx.lr = 0x8330C890;
	sub_832D6F28(ctx, base);
	// stfs f1,368(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// li r4,965
	ctx.r4.s64 = 965;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832d6f28
	ctx.lr = 0x8330C8A0;
	sub_832D6F28(ctx, base);
	// stfs f1,372(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// li r4,966
	ctx.r4.s64 = 966;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832d6f28
	ctx.lr = 0x8330C8B0;
	sub_832D6F28(ctx, base);
	// stfs f1,376(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// li r4,967
	ctx.r4.s64 = 967;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832d6f28
	ctx.lr = 0x8330C8C0;
	sub_832D6F28(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stfs f1,380(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8330c8f8
	if (ctx.cr6.eq) goto loc_8330C8F8;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8330c8f8
	if (ctx.cr6.eq) goto loc_8330C8F8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,20744
	ctx.r5.s64 = ctx.r11.s64 + 20744;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,1136
	ctx.r7.s64 = 1136;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C8F4;
	sub_8320CF10(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
loc_8330C8F8:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// cntlzw r29,r11
	ctx.r29.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// bl 0x83313470
	ctx.lr = 0x8330C908;
	sub_83313470(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r8,r29,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// bl 0x83313290
	ctx.lr = 0x8330C924;
	sub_83313290(ctx, base);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bgt cr6,0x8330c98c
	if (ctx.cr6.gt) goto loc_8330C98C;
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330c958
	if (ctx.cr6.eq) goto loc_8330C958;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,15956
	ctx.r5.s64 = ctx.r11.s64 + 15956;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,1146
	ctx.r7.s64 = 1146;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C958;
	sub_8320CF10(ctx, base);
loc_8330C958:
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8330c984
	if (ctx.cr6.eq) goto loc_8330C984;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,15924
	ctx.r5.s64 = ctx.r11.s64 + 15924;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,1147
	ctx.r7.s64 = 1147;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330C984;
	sub_8320CF10(ctx, base);
loc_8330C984:
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// b 0x8330ca4c
	goto loc_8330CA4C;
loc_8330C98C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8330ca4c
	goto loc_8330CA4C;
loc_8330C994:
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x83214f50
	ctx.lr = 0x8330C99C;
	sub_83214F50(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// rlwimi r11,r3,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// li r4,65
	ctx.r4.s64 = 65;
	// stw r11,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330C9B8;
	sub_83214F50(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// rlwimi r11,r3,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// li r4,66
	ctx.r4.s64 = 66;
	// stw r11,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330C9D4;
	sub_83214F50(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// rlwimi r11,r3,22,6,9
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 22) & 0x3C00000) | (ctx.r11.u64 & 0xFFFFFFFFFC3FFFFF);
	// li r4,67
	ctx.r4.s64 = 67;
	// stw r11,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330C9F0;
	sub_83214F50(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// rlwimi r11,r3,26,2,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 26) & 0x3C000000) | (ctx.r11.u64 & 0xFFFFFFFFC3FFFFFF);
	// li r4,87
	ctx.r4.s64 = 87;
	// stw r11,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330CA0C;
	sub_83214F50(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// rlwimi r11,r3,13,13,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 13) & 0x7E000) | (ctx.r11.u64 & 0xFFFFFFFFFFF81FFF);
	// rlwimi r10,r23,20,11,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r23.u32, 20) & 0x100000) | (ctx.r10.u64 & 0xFFFFFFFFFFEFFFFF);
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// li r4,68
	ctx.r4.s64 = 68;
	// stw r10,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832d94b8
	ctx.lr = 0x8330CA34;
	sub_832D94B8(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83312f88
	ctx.lr = 0x8330CA40;
	sub_83312F88(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// rlwimi r11,r3,10,12,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 10) & 0xFFC00) | (ctx.r11.u64 & 0xFFFFFFFFFFF003FF);
	// rlwinm r11,r11,0,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFC00;
loc_8330CA4C:
	// stw r11,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8330ca68
	if (ctx.cr6.eq) goto loc_8330CA68;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// b 0x8330ca84
	goto loc_8330CA84;
loc_8330CA68:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,69
	ctx.r4.s64 = 69;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330CA78;
	sub_83214F50(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// rlwimi r3,r11,0,0,30
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFE) | (ctx.r3.u64 & 0xFFFFFFFF00000001);
	// stw r3,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r3.u32);
loc_8330CA84:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r11,r11,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
	// bl 0x832d94b8
	ctx.lr = 0x8330CAA0;
	sub_832D94B8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832d94b8
	ctx.lr = 0x8330CAB4;
	sub_832D94B8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832d94b8
	ctx.lr = 0x8330CAC8;
	sub_832D94B8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832d94b8
	ctx.lr = 0x8330CADC;
	sub_832D94B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bne cr6,0x8330cb10
	if (!ctx.cr6.eq) goto loc_8330CB10;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x8330cb10
	if (!ctx.cr6.eq) goto loc_8330CB10;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bne cr6,0x8330cb10
	if (!ctx.cr6.eq) goto loc_8330CB10;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x8330cb10
	if (!ctx.cr6.eq) goto loc_8330CB10;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwimi r11,r22,30,0,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r22.u32, 30) & 0xC0000000) | (ctx.r11.u64 & 0xFFFFFFFF3FFFFFFF);
	// b 0x8330cb18
	goto loc_8330CB18;
loc_8330CB10:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
loc_8330CB18:
	// stw r11,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// beq cr6,0x8330cb4c
	if (ctx.cr6.eq) goto loc_8330CB4C;
	// li r4,963
	ctx.r4.s64 = 963;
	// bl 0x83214bf0
	ctx.lr = 0x8330CB30;
	sub_83214BF0(ctx, base);
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r9,r3,12
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFFF;
	// rlwimi r11,r10,23,3,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 23) & 0x1F800000) | (ctx.r11.u64 & 0xFFFFFFFFE07FFFFF);
	// rlwinm r11,r11,0,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF800000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x8330cb64
	goto loc_8330CB64;
loc_8330CB4C:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,75
	ctx.r4.s64 = 75;
	// bl 0x83214f50
	ctx.lr = 0x8330CB58;
	sub_83214F50(ctx, base);
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwimi r11,r3,20,12,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 20) & 0xFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFF00000);
	// rlwinm r11,r11,0,5,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE7FFFFFF;
loc_8330CB64:
	// stw r11,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
	// li r4,985
	ctx.r4.s64 = 985;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// rlwinm r11,r11,0,8,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFCFFFFFF;
	// rlwinm r10,r10,0,19,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF81FFF;
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// stw r10,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r10.u32);
	// bl 0x83214bf0
	ctx.lr = 0x8330CB8C;
	sub_83214BF0(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwimi r11,r3,20,11,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 20) & 0x100000) | (ctx.r11.u64 & 0xFFFFFFFFFFEFFFFF);
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
loc_8330CB98:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330CBAC"))) PPC_WEAK_FUNC(sub_8330CBAC);
PPC_FUNC_IMPL(__imp__sub_8330CBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330CBB0"))) PPC_WEAK_FUNC(sub_8330CBB0);
PPC_FUNC_IMPL(__imp__sub_8330CBB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x8330CBB8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8330cd2c
	if (ctx.cr6.lt) goto loc_8330CD2C;
	// beq cr6,0x8330cc60
	if (ctx.cr6.eq) goto loc_8330CC60;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8330cc0c
	if (ctx.cr6.lt) goto loc_8330CC0C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,19904
	ctx.r6.s64 = ctx.r11.s64 + 19904;
	// addi r5,r10,22356
	ctx.r5.s64 = ctx.r10.s64 + 22356;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1562
	ctx.r7.s64 = 1562;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330CC08;
	sub_8320CF10(ctx, base);
	// b 0x8330cd40
	goto loc_8330CD40;
loc_8330CC0C:
	// mulli r11,r28,28
	ctx.r11.s64 = ctx.r28.s64 * 28;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x832d7e98
	ctx.lr = 0x8330CC28;
	sub_832D7E98(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8330cc54
	if (!ctx.cr6.eq) goto loc_8330CC54;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,19904
	ctx.r6.s64 = ctx.r11.s64 + 19904;
	// addi r5,r10,22316
	ctx.r5.s64 = ctx.r10.s64 + 22316;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1555
	ctx.r7.s64 = 1555;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330CC54;
	sub_8320CF10(ctx, base);
loc_8330CC54:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8330cd40
	goto loc_8330CD40;
loc_8330CC60:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8330cd40
	if (!ctx.cr6.gt) goto loc_8330CD40;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// addi r24,r31,24
	ctx.r24.s64 = ctx.r31.s64 + 24;
	// addi r23,r11,22240
	ctx.r23.s64 = ctx.r11.s64 + 22240;
	// addi r26,r10,-21168
	ctx.r26.s64 = ctx.r10.s64 + -21168;
	// addi r22,r9,22160
	ctx.r22.s64 = ctx.r9.s64 + 22160;
	// addi r25,r8,19904
	ctx.r25.s64 = ctx.r8.s64 + 19904;
loc_8330CC94:
	// lwz r11,-12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8330ccbc
	if (!ctx.cr6.eq) goto loc_8330CCBC;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8330aff0
	ctx.lr = 0x8330CCB8;
	sub_8330AFF0(ctx, base);
	// b 0x8330cd14
	goto loc_8330CD14;
loc_8330CCBC:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8330ccdc
	if (ctx.cr6.eq) goto loc_8330CCDC;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1535
	ctx.r7.s64 = 1535;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330CCDC;
	sub_8320CF10(ctx, base);
loc_8330CCDC:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8330cd00
	if (ctx.cr6.eq) goto loc_8330CD00;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1539
	ctx.r7.s64 = 1539;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330CD00;
	sub_8320CF10(ctx, base);
loc_8330CD00:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8330b0e8
	ctx.lr = 0x8330CD14;
	sub_8330B0E8(ctx, base);
loc_8330CD14:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8330cc94
	if (ctx.cr6.lt) goto loc_8330CC94;
	// b 0x8330cd40
	goto loc_8330CD40;
loc_8330CD2C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8330b8c8
	ctx.lr = 0x8330CD40;
	sub_8330B8C8(ctx, base);
loc_8330CD40:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330CD48"))) PPC_WEAK_FUNC(sub_8330CD48);
PPC_FUNC_IMPL(__imp__sub_8330CD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x8330CD50;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8330af98
	ctx.lr = 0x8330CD64;
	sub_8330AF98(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addic. r24,r3,772
	ctx.xer.ca = ctx.r3.u32 > 4294966523;
	ctx.r24.s64 = ctx.r3.s64 + 772;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r26,r11,-21168
	ctx.r26.s64 = ctx.r11.s64 + -21168;
	// addi r25,r10,19904
	ctx.r25.s64 = ctx.r10.s64 + 19904;
	// bne 0x8330cd98
	if (!ctx.cr0.eq) goto loc_8330CD98;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,22504
	ctx.r5.s64 = ctx.r11.s64 + 22504;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1606
	ctx.r7.s64 = 1606;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330CD98;
	sub_8320CF10(ctx, base);
loc_8330CD98:
	// lwz r3,52(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 52);
	// bl 0x83215e08
	ctx.lr = 0x8330CDA0;
	sub_83215E08(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x832d3f50
	ctx.lr = 0x8330CDA8;
	sub_832D3F50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8330cdcc
	if (ctx.cr0.eq) goto loc_8330CDCC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,22464
	ctx.r5.s64 = ctx.r11.s64 + 22464;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1615
	ctx.r7.s64 = 1615;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330CDCC;
	sub_8320CF10(ctx, base);
loc_8330CDCC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832d3f58
	ctx.lr = 0x8330CDD4;
	sub_832D3F58(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r21,r10,22440
	ctx.r21.s64 = ctx.r10.s64 + 22440;
	// addi r20,r11,22428
	ctx.r20.s64 = ctx.r11.s64 + 22428;
	// beq 0x8330ce64
	if (ctx.cr0.eq) goto loc_8330CE64;
loc_8330CDF0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832d4350
	ctx.lr = 0x8330CDFC;
	sub_832D4350(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8330ce1c
	if (!ctx.cr0.eq) goto loc_8330CE1C;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1627
	ctx.r7.s64 = 1627;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330CE1C;
	sub_8320CF10(ctx, base);
loc_8330CE1C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8330ce40
	if (!ctx.cr6.eq) goto loc_8330CE40;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1628
	ctx.r7.s64 = 1628;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330CE40;
	sub_8320CF10(ctx, base);
loc_8330CE40:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8330cbb0
	ctx.lr = 0x8330CE58;
	sub_8330CBB0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8330cdf0
	if (ctx.cr6.lt) goto loc_8330CDF0;
loc_8330CE64:
	// lwz r3,48(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// bl 0x83215e08
	ctx.lr = 0x8330CE6C;
	sub_83215E08(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x832d3f50
	ctx.lr = 0x8330CE74;
	sub_832D3F50(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8330ce98
	if (ctx.cr6.eq) goto loc_8330CE98;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,22388
	ctx.r5.s64 = ctx.r11.s64 + 22388;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1642
	ctx.r7.s64 = 1642;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330CE98;
	sub_8320CF10(ctx, base);
loc_8330CE98:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832d3f58
	ctx.lr = 0x8330CEA0;
	sub_832D3F58(ctx, base);
	// subfic r28,r3,32
	ctx.xer.ca = ctx.r3.u32 <= 32;
	ctx.r28.s64 = 32 - ctx.r3.s64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32, ctx.xer);
	// bge cr6,0x8330cf24
	if (!ctx.cr6.lt) goto loc_8330CF24;
loc_8330CEB0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832d4350
	ctx.lr = 0x8330CEBC;
	sub_832D4350(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8330cedc
	if (!ctx.cr0.eq) goto loc_8330CEDC;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1654
	ctx.r7.s64 = 1654;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330CEDC;
	sub_8320CF10(ctx, base);
loc_8330CEDC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8330cf00
	if (!ctx.cr6.eq) goto loc_8330CF00;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1655
	ctx.r7.s64 = 1655;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330CF00;
	sub_8320CF10(ctx, base);
loc_8330CF00:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8330cbb0
	ctx.lr = 0x8330CF18;
	sub_8330CBB0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// blt cr6,0x8330ceb0
	if (ctx.cr6.lt) goto loc_8330CEB0;
loc_8330CF24:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8330cf4c
	if (!ctx.cr6.lt) goto loc_8330CF4C;
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
loc_8330CF38:
	// li r9,0
	ctx.r9.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// bne 0x8330cf38
	if (!ctx.cr0.eq) goto loc_8330CF38;
loc_8330CF4C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330CF58"))) PPC_WEAK_FUNC(sub_8330CF58);
PPC_FUNC_IMPL(__imp__sub_8330CF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8330CF60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,19904
	ctx.r28.s64 = ctx.r10.s64 + 19904;
	// bne cr6,0x8330cf9c
	if (!ctx.cr6.eq) goto loc_8330CF9C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1703
	ctx.r7.s64 = 1703;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330CF9C;
	sub_8320CF10(ctx, base);
loc_8330CF9C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8330cfc0
	if (!ctx.cr6.eq) goto loc_8330CFC0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5864
	ctx.r5.s64 = ctx.r11.s64 + -5864;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1704
	ctx.r7.s64 = 1704;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330CFC0;
	sub_8320CF10(ctx, base);
loc_8330CFC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8330af98
	ctx.lr = 0x8330CFC8;
	sub_8330AF98(ctx, base);
	// addic. r31,r3,688
	ctx.xer.ca = ctx.r3.u32 > 4294966607;
	ctx.r31.s64 = ctx.r3.s64 + 688;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8330cfec
	if (!ctx.cr0.eq) goto loc_8330CFEC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,22516
	ctx.r5.s64 = ctx.r11.s64 + 22516;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1709
	ctx.r7.s64 = 1709;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330CFEC;
	sub_8320CF10(ctx, base);
loc_8330CFEC:
	// li r4,1004
	ctx.r4.s64 = 1004;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330CFF8;
	sub_83214BF0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r4,1003
	ctx.r4.s64 = 1003;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330D008;
	sub_83214BF0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r4,1005
	ctx.r4.s64 = 1005;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330D018;
	sub_83214BF0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r4,988
	ctx.r4.s64 = 988;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330D028;
	sub_83214BF0(ctx, base);
	// stb r3,55(r31)
	PPC_STORE_U8(ctx.r31.u32 + 55, ctx.r3.u8);
	// li r4,989
	ctx.r4.s64 = 989;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330D038;
	sub_83214BF0(ctx, base);
	// stb r3,54(r31)
	PPC_STORE_U8(ctx.r31.u32 + 54, ctx.r3.u8);
	// li r4,990
	ctx.r4.s64 = 990;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330D048;
	sub_83214BF0(ctx, base);
	// stb r3,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r3.u8);
	// li r4,991
	ctx.r4.s64 = 991;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330D058;
	sub_83214BF0(ctx, base);
	// stb r3,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r3.u8);
	// li r4,992
	ctx.r4.s64 = 992;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330D068;
	sub_83214BF0(ctx, base);
	// stb r3,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r3.u8);
	// li r4,993
	ctx.r4.s64 = 993;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330D078;
	sub_83214BF0(ctx, base);
	// stb r3,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r3.u8);
	// li r4,983
	ctx.r4.s64 = 983;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d6f28
	ctx.lr = 0x8330D088;
	sub_832D6F28(ctx, base);
	// stfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330D09C;
	sub_83214F50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r11,r3,0,31,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// li r4,51
	ctx.r4.s64 = 51;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330D0B8;
	sub_83214F50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r11,r3,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// li r4,52
	ctx.r4.s64 = 52;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330D0D4;
	sub_83214F50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r11,r3,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// li r4,53
	ctx.r4.s64 = 53;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330D0F0;
	sub_83214F50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwimi r11,r3,3,28,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 3) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// li r4,50
	ctx.r4.s64 = 50;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330D10C;
	sub_83214F50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwimi r11,r3,4,27,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 4) & 0x10) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// li r4,51
	ctx.r4.s64 = 51;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330D128;
	sub_83214F50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwimi r11,r3,5,26,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 5) & 0x20) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// li r4,52
	ctx.r4.s64 = 52;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330D144;
	sub_83214F50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwimi r11,r3,6,25,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 6) & 0x40) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFBF);
	// li r4,53
	ctx.r4.s64 = 53;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330D160;
	sub_83214F50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,2
	ctx.r5.s64 = 2;
	// rlwimi r11,r3,7,24,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 7) & 0x80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// li r4,50
	ctx.r4.s64 = 50;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330D17C;
	sub_83214F50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,2
	ctx.r5.s64 = 2;
	// rlwimi r11,r3,8,23,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// li r4,51
	ctx.r4.s64 = 51;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330D198;
	sub_83214F50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,2
	ctx.r5.s64 = 2;
	// rlwimi r11,r3,9,22,22
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 9) & 0x200) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFDFF);
	// li r4,52
	ctx.r4.s64 = 52;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330D1B4;
	sub_83214F50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,2
	ctx.r5.s64 = 2;
	// rlwimi r11,r3,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// li r4,53
	ctx.r4.s64 = 53;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330D1D0;
	sub_83214F50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,3
	ctx.r5.s64 = 3;
	// rlwimi r11,r3,11,20,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 11) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// li r4,50
	ctx.r4.s64 = 50;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330D1EC;
	sub_83214F50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,3
	ctx.r5.s64 = 3;
	// rlwimi r11,r3,12,19,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 12) & 0x1000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// li r4,51
	ctx.r4.s64 = 51;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330D208;
	sub_83214F50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,3
	ctx.r5.s64 = 3;
	// rlwimi r11,r3,13,18,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 13) & 0x2000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFDFFF);
	// li r4,52
	ctx.r4.s64 = 52;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330D224;
	sub_83214F50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,3
	ctx.r5.s64 = 3;
	// rlwimi r11,r3,14,17,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 14) & 0x4000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFBFFF);
	// li r4,53
	ctx.r4.s64 = 53;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330D240;
	sub_83214F50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,979
	ctx.r4.s64 = 979;
	// rlwimi r11,r3,15,16,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 15) & 0x8000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x832d6f28
	ctx.lr = 0x8330D258;
	sub_832D6F28(ctx, base);
	// stfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// li r4,980
	ctx.r4.s64 = 980;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d6f28
	ctx.lr = 0x8330D268;
	sub_832D6F28(ctx, base);
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// li r4,981
	ctx.r4.s64 = 981;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d6f28
	ctx.lr = 0x8330D278;
	sub_832D6F28(ctx, base);
	// stfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// li r4,982
	ctx.r4.s64 = 982;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d6f28
	ctx.lr = 0x8330D288;
	sub_832D6F28(ctx, base);
	// stfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// li r4,994
	ctx.r4.s64 = 994;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d6f28
	ctx.lr = 0x8330D298;
	sub_832D6F28(ctx, base);
	// stfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// li r4,995
	ctx.r4.s64 = 995;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d6f28
	ctx.lr = 0x8330D2A8;
	sub_832D6F28(ctx, base);
	// stfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// li r4,996
	ctx.r4.s64 = 996;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d6f28
	ctx.lr = 0x8330D2B8;
	sub_832D6F28(ctx, base);
	// stfs f1,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// li r4,997
	ctx.r4.s64 = 997;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d6f28
	ctx.lr = 0x8330D2C8;
	sub_832D6F28(ctx, base);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// li r4,998
	ctx.r4.s64 = 998;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d6f28
	ctx.lr = 0x8330D2D8;
	sub_832D6F28(ctx, base);
	// stfs f1,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// li r4,999
	ctx.r4.s64 = 999;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d6f28
	ctx.lr = 0x8330D2E8;
	sub_832D6F28(ctx, base);
	// stfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330D2F8"))) PPC_WEAK_FUNC(sub_8330D2F8);
PPC_FUNC_IMPL(__imp__sub_8330D2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8330D300;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8330d328
	if (ctx.cr6.lt) goto loc_8330D328;
	// li r27,43
	ctx.r27.s64 = 43;
	// b 0x8330d330
	goto loc_8330D330;
loc_8330D328:
	// li r27,45
	ctx.r27.s64 = 45;
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_8330D330:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f30,6404(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6404);
	ctx.f30.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,24704
	ctx.r29.s64 = ctx.r11.s64 + 24704;
	// fsubs f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fctiwz f0,f31
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8330D374:
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmuls f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fctiwz f0,f31
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82cb61f0
	ctx.lr = 0x8330D3B0;
	sub_82CB61F0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// blt cr6,0x8330d374
	if (ctx.cr6.lt) goto loc_8330D374;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,26928
	ctx.r4.s64 = ctx.r10.s64 + 26928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// extsb r5,r27
	ctx.r5.s64 = ctx.r27.s8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb61f0
	ctx.lr = 0x8330D3E0;
	sub_82CB61F0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330D3F0"))) PPC_WEAK_FUNC(sub_8330D3F0);
PPC_FUNC_IMPL(__imp__sub_8330D3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8330D3F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330d434
	if (!ctx.cr6.eq) goto loc_8330D434;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,733
	ctx.r7.s64 = 733;
	// bl 0x8320cf10
	ctx.lr = 0x8330D434;
	sub_8320CF10(ctx, base);
loc_8330D434:
	// li r4,127
	ctx.r4.s64 = 127;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330D440;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8330d4a4
	if (!ctx.cr6.eq) goto loc_8330D4A4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330d464
	if (ctx.cr6.eq) goto loc_8330D464;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330D464;
	sub_832155A0(ctx, base);
loc_8330D464:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330d49c
	if (ctx.cr6.eq) goto loc_8330D49C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330d49c
	if (ctx.cr6.eq) goto loc_8330D49C;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330D49C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330D49C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330d4fc
	goto loc_8330D4FC;
loc_8330D4A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330d4c0
	if (ctx.cr6.eq) goto loc_8330D4C0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330D4C0;
	sub_832155A0(ctx, base);
loc_8330D4C0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330d4f8
	if (ctx.cr6.eq) goto loc_8330D4F8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330d4f8
	if (ctx.cr6.eq) goto loc_8330D4F8;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330D4F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330D4F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330D4FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330D504"))) PPC_WEAK_FUNC(sub_8330D504);
PPC_FUNC_IMPL(__imp__sub_8330D504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330D508"))) PPC_WEAK_FUNC(sub_8330D508);
PPC_FUNC_IMPL(__imp__sub_8330D508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8330D510;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330d54c
	if (!ctx.cr6.eq) goto loc_8330D54C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,817
	ctx.r7.s64 = 817;
	// bl 0x8320cf10
	ctx.lr = 0x8330D54C;
	sub_8320CF10(ctx, base);
loc_8330D54C:
	// li r4,163
	ctx.r4.s64 = 163;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330D558;
	sub_83214BF0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330D568;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330d5d4
	if (ctx.cr6.eq) goto loc_8330D5D4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8330d5d4
	if (!ctx.cr6.eq) goto loc_8330D5D4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330d594
	if (ctx.cr6.eq) goto loc_8330D594;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330D594;
	sub_832155A0(ctx, base);
loc_8330D594:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330d5cc
	if (ctx.cr6.eq) goto loc_8330D5CC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330d5cc
	if (ctx.cr6.eq) goto loc_8330D5CC;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330D5CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330D5CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330d62c
	goto loc_8330D62C;
loc_8330D5D4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330d5f0
	if (ctx.cr6.eq) goto loc_8330D5F0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330D5F0;
	sub_832155A0(ctx, base);
loc_8330D5F0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330d628
	if (ctx.cr6.eq) goto loc_8330D628;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330d628
	if (ctx.cr6.eq) goto loc_8330D628;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330D628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330D628:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330D62C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330D634"))) PPC_WEAK_FUNC(sub_8330D634);
PPC_FUNC_IMPL(__imp__sub_8330D634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330D638"))) PPC_WEAK_FUNC(sub_8330D638);
PPC_FUNC_IMPL(__imp__sub_8330D638) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8330d670
	if (ctx.cr6.eq) goto loc_8330D670;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x832155a0
	ctx.lr = 0x8330D670;
	sub_832155A0(ctx, base);
loc_8330D670:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8330d6a8
	if (ctx.cr6.eq) goto loc_8330D6A8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330d6a8
	if (ctx.cr6.eq) goto loc_8330D6A8;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8330D6A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330D6A8:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8330D6C4"))) PPC_WEAK_FUNC(sub_8330D6C4);
PPC_FUNC_IMPL(__imp__sub_8330D6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330D6C8"))) PPC_WEAK_FUNC(sub_8330D6C8);
PPC_FUNC_IMPL(__imp__sub_8330D6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8330D6D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8330d6fc
	if (ctx.cr6.eq) goto loc_8330D6FC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x832155a0
	ctx.lr = 0x8330D6FC;
	sub_832155A0(ctx, base);
loc_8330D6FC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330d738
	if (ctx.cr6.eq) goto loc_8330D738;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330d738
	if (ctx.cr6.eq) goto loc_8330D738;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8330D738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330D738:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330D744"))) PPC_WEAK_FUNC(sub_8330D744);
PPC_FUNC_IMPL(__imp__sub_8330D744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330D748"))) PPC_WEAK_FUNC(sub_8330D748);
PPC_FUNC_IMPL(__imp__sub_8330D748) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8330D750"))) PPC_WEAK_FUNC(sub_8330D750);
PPC_FUNC_IMPL(__imp__sub_8330D750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8330D758;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8330d794
	if (!ctx.cr6.eq) goto loc_8330D794;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,988
	ctx.r7.s64 = 988;
	// bl 0x8320cf10
	ctx.lr = 0x8330D794;
	sub_8320CF10(ctx, base);
loc_8330D794:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8330d7b0
	if (ctx.cr6.eq) goto loc_8330D7B0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330D7B0;
	sub_832155A0(ctx, base);
loc_8330D7B0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330d7ec
	if (ctx.cr6.eq) goto loc_8330D7EC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330d7ec
	if (ctx.cr6.eq) goto loc_8330D7EC;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,63
	ctx.r6.s64 = 63;
	// lwz r5,252(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8330D7EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330D7EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330D7F8"))) PPC_WEAK_FUNC(sub_8330D7F8);
PPC_FUNC_IMPL(__imp__sub_8330D7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8330D800;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330D820;
	sub_83214F50(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8330d888
	if (!ctx.cr6.eq) goto loc_8330D888;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330d844
	if (ctx.cr6.eq) goto loc_8330D844;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330D844;
	sub_832155A0(ctx, base);
loc_8330D844:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330d880
	if (ctx.cr6.eq) goto loc_8330D880;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330d880
	if (ctx.cr6.eq) goto loc_8330D880;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,14
	ctx.r6.s64 = 14;
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330D880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330D880:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330d8e4
	goto loc_8330D8E4;
loc_8330D888:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330d8a4
	if (ctx.cr6.eq) goto loc_8330D8A4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330D8A4;
	sub_832155A0(ctx, base);
loc_8330D8A4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330d8e0
	if (ctx.cr6.eq) goto loc_8330D8E0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330d8e0
	if (ctx.cr6.eq) goto loc_8330D8E0;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,14
	ctx.r6.s64 = 14;
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330D8E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330D8E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330D8E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330D8EC"))) PPC_WEAK_FUNC(sub_8330D8EC);
PPC_FUNC_IMPL(__imp__sub_8330D8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330D8F0"))) PPC_WEAK_FUNC(sub_8330D8F0);
PPC_FUNC_IMPL(__imp__sub_8330D8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8330D8F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330d934
	if (!ctx.cr6.eq) goto loc_8330D934;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1097
	ctx.r7.s64 = 1097;
	// bl 0x8320cf10
	ctx.lr = 0x8330D934;
	sub_8320CF10(ctx, base);
loc_8330D934:
	// li r4,163
	ctx.r4.s64 = 163;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330D940;
	sub_83214BF0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330D950;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330d9bc
	if (ctx.cr6.eq) goto loc_8330D9BC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8330d9bc
	if (ctx.cr6.eq) goto loc_8330D9BC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330d97c
	if (ctx.cr6.eq) goto loc_8330D97C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330D97C;
	sub_832155A0(ctx, base);
loc_8330D97C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330d9b4
	if (ctx.cr6.eq) goto loc_8330D9B4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330d9b4
	if (ctx.cr6.eq) goto loc_8330D9B4;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,15
	ctx.r6.s64 = 15;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330D9B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330D9B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330da14
	goto loc_8330DA14;
loc_8330D9BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330d9d8
	if (ctx.cr6.eq) goto loc_8330D9D8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330D9D8;
	sub_832155A0(ctx, base);
loc_8330D9D8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330da10
	if (ctx.cr6.eq) goto loc_8330DA10;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330da10
	if (ctx.cr6.eq) goto loc_8330DA10;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,15
	ctx.r6.s64 = 15;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330DA10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330DA10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330DA14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330DA1C"))) PPC_WEAK_FUNC(sub_8330DA1C);
PPC_FUNC_IMPL(__imp__sub_8330DA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330DA20"))) PPC_WEAK_FUNC(sub_8330DA20);
PPC_FUNC_IMPL(__imp__sub_8330DA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8330DA28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330da64
	if (!ctx.cr6.eq) goto loc_8330DA64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1154
	ctx.r7.s64 = 1154;
	// bl 0x8320cf10
	ctx.lr = 0x8330DA64;
	sub_8320CF10(ctx, base);
loc_8330DA64:
	// li r4,934
	ctx.r4.s64 = 934;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330DA70;
	sub_83214BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x8330dad4
	if (ctx.cr0.eq) goto loc_8330DAD4;
	// beq cr6,0x8330da94
	if (ctx.cr6.eq) goto loc_8330DA94;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330DA94;
	sub_832155A0(ctx, base);
loc_8330DA94:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330dacc
	if (ctx.cr6.eq) goto loc_8330DACC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330dacc
	if (ctx.cr6.eq) goto loc_8330DACC;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330DACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330DACC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330db28
	goto loc_8330DB28;
loc_8330DAD4:
	// beq cr6,0x8330daec
	if (ctx.cr6.eq) goto loc_8330DAEC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330DAEC;
	sub_832155A0(ctx, base);
loc_8330DAEC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330db24
	if (ctx.cr6.eq) goto loc_8330DB24;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330db24
	if (ctx.cr6.eq) goto loc_8330DB24;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330DB24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330DB24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330DB28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330DB30"))) PPC_WEAK_FUNC(sub_8330DB30);
PPC_FUNC_IMPL(__imp__sub_8330DB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8330DB38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330db74
	if (!ctx.cr6.eq) goto loc_8330DB74;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1208
	ctx.r7.s64 = 1208;
	// bl 0x8320cf10
	ctx.lr = 0x8330DB74;
	sub_8320CF10(ctx, base);
loc_8330DB74:
	// li r4,935
	ctx.r4.s64 = 935;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330DB80;
	sub_83214BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x8330dbe4
	if (ctx.cr0.eq) goto loc_8330DBE4;
	// beq cr6,0x8330dba4
	if (ctx.cr6.eq) goto loc_8330DBA4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330DBA4;
	sub_832155A0(ctx, base);
loc_8330DBA4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330dbdc
	if (ctx.cr6.eq) goto loc_8330DBDC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330dbdc
	if (ctx.cr6.eq) goto loc_8330DBDC;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,17
	ctx.r6.s64 = 17;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,68(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330DBDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330DBDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330dc38
	goto loc_8330DC38;
loc_8330DBE4:
	// beq cr6,0x8330dbfc
	if (ctx.cr6.eq) goto loc_8330DBFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330DBFC;
	sub_832155A0(ctx, base);
loc_8330DBFC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330dc34
	if (ctx.cr6.eq) goto loc_8330DC34;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330dc34
	if (ctx.cr6.eq) goto loc_8330DC34;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,17
	ctx.r6.s64 = 17;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,68(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330DC34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330DC34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330DC38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330DC40"))) PPC_WEAK_FUNC(sub_8330DC40);
PPC_FUNC_IMPL(__imp__sub_8330DC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8330DC48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330dc84
	if (!ctx.cr6.eq) goto loc_8330DC84;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1262
	ctx.r7.s64 = 1262;
	// bl 0x8320cf10
	ctx.lr = 0x8330DC84;
	sub_8320CF10(ctx, base);
loc_8330DC84:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330DC90;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8330dcf4
	if (!ctx.cr6.eq) goto loc_8330DCF4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330dcb4
	if (ctx.cr6.eq) goto loc_8330DCB4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330DCB4;
	sub_832155A0(ctx, base);
loc_8330DCB4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330dcec
	if (ctx.cr6.eq) goto loc_8330DCEC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330dcec
	if (ctx.cr6.eq) goto loc_8330DCEC;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,18
	ctx.r6.s64 = 18;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,72(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330DCEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330DCEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330dd4c
	goto loc_8330DD4C;
loc_8330DCF4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330dd10
	if (ctx.cr6.eq) goto loc_8330DD10;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330DD10;
	sub_832155A0(ctx, base);
loc_8330DD10:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330dd48
	if (ctx.cr6.eq) goto loc_8330DD48;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330dd48
	if (ctx.cr6.eq) goto loc_8330DD48;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,18
	ctx.r6.s64 = 18;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,72(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330DD48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330DD48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330DD4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330DD54"))) PPC_WEAK_FUNC(sub_8330DD54);
PPC_FUNC_IMPL(__imp__sub_8330DD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330DD58"))) PPC_WEAK_FUNC(sub_8330DD58);
PPC_FUNC_IMPL(__imp__sub_8330DD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8330DD60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330dd9c
	if (!ctx.cr6.eq) goto loc_8330DD9C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1316
	ctx.r7.s64 = 1316;
	// bl 0x8320cf10
	ctx.lr = 0x8330DD9C;
	sub_8320CF10(ctx, base);
loc_8330DD9C:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330DDA8;
	sub_83214BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x8330de0c
	if (!ctx.cr0.eq) goto loc_8330DE0C;
	// beq cr6,0x8330ddcc
	if (ctx.cr6.eq) goto loc_8330DDCC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330DDCC;
	sub_832155A0(ctx, base);
loc_8330DDCC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330de04
	if (ctx.cr6.eq) goto loc_8330DE04;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330de04
	if (ctx.cr6.eq) goto loc_8330DE04;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,19
	ctx.r6.s64 = 19;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330DE04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330DE04:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330de60
	goto loc_8330DE60;
loc_8330DE0C:
	// beq cr6,0x8330de24
	if (ctx.cr6.eq) goto loc_8330DE24;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330DE24;
	sub_832155A0(ctx, base);
loc_8330DE24:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330de5c
	if (ctx.cr6.eq) goto loc_8330DE5C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330de5c
	if (ctx.cr6.eq) goto loc_8330DE5C;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,19
	ctx.r6.s64 = 19;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330DE5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330DE5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330DE60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330DE68"))) PPC_WEAK_FUNC(sub_8330DE68);
PPC_FUNC_IMPL(__imp__sub_8330DE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8330DE70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330deac
	if (!ctx.cr6.eq) goto loc_8330DEAC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1367
	ctx.r7.s64 = 1367;
	// bl 0x8320cf10
	ctx.lr = 0x8330DEAC;
	sub_8320CF10(ctx, base);
loc_8330DEAC:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330DEB8;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8330df1c
	if (!ctx.cr6.eq) goto loc_8330DF1C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330dedc
	if (ctx.cr6.eq) goto loc_8330DEDC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330DEDC;
	sub_832155A0(ctx, base);
loc_8330DEDC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330df14
	if (ctx.cr6.eq) goto loc_8330DF14;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330df14
	if (ctx.cr6.eq) goto loc_8330DF14;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,20
	ctx.r6.s64 = 20;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330DF14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330DF14:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330df74
	goto loc_8330DF74;
loc_8330DF1C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330df38
	if (ctx.cr6.eq) goto loc_8330DF38;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330DF38;
	sub_832155A0(ctx, base);
loc_8330DF38:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330df70
	if (ctx.cr6.eq) goto loc_8330DF70;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330df70
	if (ctx.cr6.eq) goto loc_8330DF70;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330DF70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330DF70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330DF74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330DF7C"))) PPC_WEAK_FUNC(sub_8330DF7C);
PPC_FUNC_IMPL(__imp__sub_8330DF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330DF80"))) PPC_WEAK_FUNC(sub_8330DF80);
PPC_FUNC_IMPL(__imp__sub_8330DF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8330DF88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330dfc4
	if (!ctx.cr6.eq) goto loc_8330DFC4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1421
	ctx.r7.s64 = 1421;
	// bl 0x8320cf10
	ctx.lr = 0x8330DFC4;
	sub_8320CF10(ctx, base);
loc_8330DFC4:
	// li r4,171
	ctx.r4.s64 = 171;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330DFD0;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8330e034
	if (!ctx.cr6.eq) goto loc_8330E034;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330dff4
	if (ctx.cr6.eq) goto loc_8330DFF4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330DFF4;
	sub_832155A0(ctx, base);
loc_8330DFF4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330e02c
	if (ctx.cr6.eq) goto loc_8330E02C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330e02c
	if (ctx.cr6.eq) goto loc_8330E02C;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,92
	ctx.r6.s64 = 92;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,368(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330E02C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330E02C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330e08c
	goto loc_8330E08C;
loc_8330E034:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330e050
	if (ctx.cr6.eq) goto loc_8330E050;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330E050;
	sub_832155A0(ctx, base);
loc_8330E050:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330e088
	if (ctx.cr6.eq) goto loc_8330E088;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330e088
	if (ctx.cr6.eq) goto loc_8330E088;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,92
	ctx.r6.s64 = 92;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,368(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330E088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330E088:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330E08C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330E094"))) PPC_WEAK_FUNC(sub_8330E094);
PPC_FUNC_IMPL(__imp__sub_8330E094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330E098"))) PPC_WEAK_FUNC(sub_8330E098);
PPC_FUNC_IMPL(__imp__sub_8330E098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8330E0A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330e0dc
	if (!ctx.cr6.eq) goto loc_8330E0DC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1471
	ctx.r7.s64 = 1471;
	// bl 0x8320cf10
	ctx.lr = 0x8330E0DC;
	sub_8320CF10(ctx, base);
loc_8330E0DC:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330E0E8;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x8330e14c
	if (!ctx.cr6.eq) goto loc_8330E14C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330e10c
	if (ctx.cr6.eq) goto loc_8330E10C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330E10C;
	sub_832155A0(ctx, base);
loc_8330E10C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330e144
	if (ctx.cr6.eq) goto loc_8330E144;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330e144
	if (ctx.cr6.eq) goto loc_8330E144;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,21
	ctx.r6.s64 = 21;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,84(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330E144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330E144:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330e1a4
	goto loc_8330E1A4;
loc_8330E14C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330e168
	if (ctx.cr6.eq) goto loc_8330E168;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330E168;
	sub_832155A0(ctx, base);
loc_8330E168:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330e1a0
	if (ctx.cr6.eq) goto loc_8330E1A0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330e1a0
	if (ctx.cr6.eq) goto loc_8330E1A0;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,21
	ctx.r6.s64 = 21;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,84(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330E1A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330E1A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330E1A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330E1AC"))) PPC_WEAK_FUNC(sub_8330E1AC);
PPC_FUNC_IMPL(__imp__sub_8330E1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330E1B0"))) PPC_WEAK_FUNC(sub_8330E1B0);
PPC_FUNC_IMPL(__imp__sub_8330E1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8330E1B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330e1f4
	if (!ctx.cr6.eq) goto loc_8330E1F4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1521
	ctx.r7.s64 = 1521;
	// bl 0x8320cf10
	ctx.lr = 0x8330E1F4;
	sub_8320CF10(ctx, base);
loc_8330E1F4:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330E200;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8330e264
	if (!ctx.cr6.eq) goto loc_8330E264;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330e224
	if (ctx.cr6.eq) goto loc_8330E224;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330E224;
	sub_832155A0(ctx, base);
loc_8330E224:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330e25c
	if (ctx.cr6.eq) goto loc_8330E25C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330e25c
	if (ctx.cr6.eq) goto loc_8330E25C;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,22
	ctx.r6.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,88(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330E25C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330E25C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330e2bc
	goto loc_8330E2BC;
loc_8330E264:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330e280
	if (ctx.cr6.eq) goto loc_8330E280;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330E280;
	sub_832155A0(ctx, base);
loc_8330E280:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330e2b8
	if (ctx.cr6.eq) goto loc_8330E2B8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330e2b8
	if (ctx.cr6.eq) goto loc_8330E2B8;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,22
	ctx.r6.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,88(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330E2B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330E2B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330E2BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330E2C4"))) PPC_WEAK_FUNC(sub_8330E2C4);
PPC_FUNC_IMPL(__imp__sub_8330E2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330E2C8"))) PPC_WEAK_FUNC(sub_8330E2C8);
PPC_FUNC_IMPL(__imp__sub_8330E2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8330E2D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330e30c
	if (!ctx.cr6.eq) goto loc_8330E30C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1571
	ctx.r7.s64 = 1571;
	// bl 0x8320cf10
	ctx.lr = 0x8330E30C;
	sub_8320CF10(ctx, base);
loc_8330E30C:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330E318;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8330e37c
	if (!ctx.cr6.eq) goto loc_8330E37C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330e33c
	if (ctx.cr6.eq) goto loc_8330E33C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330E33C;
	sub_832155A0(ctx, base);
loc_8330E33C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330e374
	if (ctx.cr6.eq) goto loc_8330E374;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330e374
	if (ctx.cr6.eq) goto loc_8330E374;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,23
	ctx.r6.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330E374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330E374:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330e3d4
	goto loc_8330E3D4;
loc_8330E37C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330e398
	if (ctx.cr6.eq) goto loc_8330E398;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330E398;
	sub_832155A0(ctx, base);
loc_8330E398:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330e3d0
	if (ctx.cr6.eq) goto loc_8330E3D0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330e3d0
	if (ctx.cr6.eq) goto loc_8330E3D0;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,23
	ctx.r6.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330E3D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330E3D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330E3D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330E3DC"))) PPC_WEAK_FUNC(sub_8330E3DC);
PPC_FUNC_IMPL(__imp__sub_8330E3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330E3E0"))) PPC_WEAK_FUNC(sub_8330E3E0);
PPC_FUNC_IMPL(__imp__sub_8330E3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8330E3E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330e424
	if (!ctx.cr6.eq) goto loc_8330E424;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1622
	ctx.r7.s64 = 1622;
	// bl 0x8320cf10
	ctx.lr = 0x8330E424;
	sub_8320CF10(ctx, base);
loc_8330E424:
	// li r4,615
	ctx.r4.s64 = 615;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330E430;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8330e494
	if (!ctx.cr6.eq) goto loc_8330E494;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330e454
	if (ctx.cr6.eq) goto loc_8330E454;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330E454;
	sub_832155A0(ctx, base);
loc_8330E454:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330e48c
	if (ctx.cr6.eq) goto loc_8330E48C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330e48c
	if (ctx.cr6.eq) goto loc_8330E48C;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,128(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330E48C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330E48C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330e4ec
	goto loc_8330E4EC;
loc_8330E494:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330e4b0
	if (ctx.cr6.eq) goto loc_8330E4B0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330E4B0;
	sub_832155A0(ctx, base);
loc_8330E4B0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330e4e8
	if (ctx.cr6.eq) goto loc_8330E4E8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330e4e8
	if (ctx.cr6.eq) goto loc_8330E4E8;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,128(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330E4E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330E4E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330E4EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330E4F4"))) PPC_WEAK_FUNC(sub_8330E4F4);
PPC_FUNC_IMPL(__imp__sub_8330E4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330E4F8"))) PPC_WEAK_FUNC(sub_8330E4F8);
PPC_FUNC_IMPL(__imp__sub_8330E4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8330E500;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8330e540
	if (!ctx.cr6.eq) goto loc_8330E540;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1676
	ctx.r7.s64 = 1676;
	// bl 0x8320cf10
	ctx.lr = 0x8330E540;
	sub_8320CF10(ctx, base);
loc_8330E540:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330E550;
	sub_83214F50(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8330e5b8
	if (!ctx.cr6.eq) goto loc_8330E5B8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330e574
	if (ctx.cr6.eq) goto loc_8330E574;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330E574;
	sub_832155A0(ctx, base);
loc_8330E574:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330e5b0
	if (ctx.cr6.eq) goto loc_8330E5B0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330e5b0
	if (ctx.cr6.eq) goto loc_8330E5B0;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,33
	ctx.r6.s64 = 33;
	// lwz r5,132(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330E5B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330E5B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330e614
	goto loc_8330E614;
loc_8330E5B8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330e5d4
	if (ctx.cr6.eq) goto loc_8330E5D4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330E5D4;
	sub_832155A0(ctx, base);
loc_8330E5D4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330e610
	if (ctx.cr6.eq) goto loc_8330E610;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330e610
	if (ctx.cr6.eq) goto loc_8330E610;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,33
	ctx.r6.s64 = 33;
	// lwz r5,132(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330E610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330E610:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330E614:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330E61C"))) PPC_WEAK_FUNC(sub_8330E61C);
PPC_FUNC_IMPL(__imp__sub_8330E61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330E620"))) PPC_WEAK_FUNC(sub_8330E620);
PPC_FUNC_IMPL(__imp__sub_8330E620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8330E628;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8330e668
	if (!ctx.cr6.eq) goto loc_8330E668;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1726
	ctx.r7.s64 = 1726;
	// bl 0x8320cf10
	ctx.lr = 0x8330E668;
	sub_8320CF10(ctx, base);
loc_8330E668:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330E678;
	sub_83214F50(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8330e6e0
	if (!ctx.cr6.eq) goto loc_8330E6E0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330e69c
	if (ctx.cr6.eq) goto loc_8330E69C;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330E69C;
	sub_832155A0(ctx, base);
loc_8330E69C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330e6d8
	if (ctx.cr6.eq) goto loc_8330E6D8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330e6d8
	if (ctx.cr6.eq) goto loc_8330E6D8;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,34
	ctx.r6.s64 = 34;
	// lwz r5,136(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330E6D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330E6D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330e73c
	goto loc_8330E73C;
loc_8330E6E0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330e6fc
	if (ctx.cr6.eq) goto loc_8330E6FC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330E6FC;
	sub_832155A0(ctx, base);
loc_8330E6FC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330e738
	if (ctx.cr6.eq) goto loc_8330E738;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330e738
	if (ctx.cr6.eq) goto loc_8330E738;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,34
	ctx.r6.s64 = 34;
	// lwz r5,136(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330E738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330E738:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330E73C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330E744"))) PPC_WEAK_FUNC(sub_8330E744);
PPC_FUNC_IMPL(__imp__sub_8330E744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330E748"))) PPC_WEAK_FUNC(sub_8330E748);
PPC_FUNC_IMPL(__imp__sub_8330E748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8330E750;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8330e790
	if (!ctx.cr6.eq) goto loc_8330E790;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1777
	ctx.r7.s64 = 1777;
	// bl 0x8320cf10
	ctx.lr = 0x8330E790;
	sub_8320CF10(ctx, base);
loc_8330E790:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330E7A0;
	sub_83214F50(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x8330e808
	if (!ctx.cr6.eq) goto loc_8330E808;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330e7c4
	if (ctx.cr6.eq) goto loc_8330E7C4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330E7C4;
	sub_832155A0(ctx, base);
loc_8330E7C4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330e800
	if (ctx.cr6.eq) goto loc_8330E800;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330e800
	if (ctx.cr6.eq) goto loc_8330E800;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,35
	ctx.r6.s64 = 35;
	// lwz r5,140(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330E800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330E800:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330e864
	goto loc_8330E864;
loc_8330E808:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330e824
	if (ctx.cr6.eq) goto loc_8330E824;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330E824;
	sub_832155A0(ctx, base);
loc_8330E824:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330e860
	if (ctx.cr6.eq) goto loc_8330E860;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330e860
	if (ctx.cr6.eq) goto loc_8330E860;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,35
	ctx.r6.s64 = 35;
	// lwz r5,140(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330E860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330E860:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330E864:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330E86C"))) PPC_WEAK_FUNC(sub_8330E86C);
PPC_FUNC_IMPL(__imp__sub_8330E86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330E870"))) PPC_WEAK_FUNC(sub_8330E870);
PPC_FUNC_IMPL(__imp__sub_8330E870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8330E878;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330e8b4
	if (!ctx.cr6.eq) goto loc_8330E8B4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1828
	ctx.r7.s64 = 1828;
	// bl 0x8320cf10
	ctx.lr = 0x8330E8B4;
	sub_8320CF10(ctx, base);
loc_8330E8B4:
	// li r4,582
	ctx.r4.s64 = 582;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330E8C0;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8330e924
	if (!ctx.cr6.eq) goto loc_8330E924;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330e8e4
	if (ctx.cr6.eq) goto loc_8330E8E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330E8E4;
	sub_832155A0(ctx, base);
loc_8330E8E4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330e91c
	if (ctx.cr6.eq) goto loc_8330E91C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330e91c
	if (ctx.cr6.eq) goto loc_8330E91C;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,38
	ctx.r6.s64 = 38;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,152(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330E91C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330E91C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330e97c
	goto loc_8330E97C;
loc_8330E924:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330e940
	if (ctx.cr6.eq) goto loc_8330E940;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330E940;
	sub_832155A0(ctx, base);
loc_8330E940:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330e978
	if (ctx.cr6.eq) goto loc_8330E978;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330e978
	if (ctx.cr6.eq) goto loc_8330E978;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,38
	ctx.r6.s64 = 38;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,152(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330E978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330E978:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330E97C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330E984"))) PPC_WEAK_FUNC(sub_8330E984);
PPC_FUNC_IMPL(__imp__sub_8330E984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330E988"))) PPC_WEAK_FUNC(sub_8330E988);
PPC_FUNC_IMPL(__imp__sub_8330E988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8330E990;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8330e9cc
	if (!ctx.cr6.eq) goto loc_8330E9CC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1877
	ctx.r7.s64 = 1877;
	// bl 0x8320cf10
	ctx.lr = 0x8330E9CC;
	sub_8320CF10(ctx, base);
loc_8330E9CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330e9e8
	if (ctx.cr6.eq) goto loc_8330E9E8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330E9E8;
	sub_832155A0(ctx, base);
loc_8330E9E8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330ea24
	if (ctx.cr6.eq) goto loc_8330EA24;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330ea24
	if (ctx.cr6.eq) goto loc_8330EA24;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,39
	ctx.r6.s64 = 39;
	// lwz r5,156(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330EA24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330EA24:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330EA30"))) PPC_WEAK_FUNC(sub_8330EA30);
PPC_FUNC_IMPL(__imp__sub_8330EA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8330EA38;
	__savegprlr_26(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8330ea78
	if (!ctx.cr6.eq) goto loc_8330EA78;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1932
	ctx.r7.s64 = 1932;
	// bl 0x8320cf10
	ctx.lr = 0x8330EA78;
	sub_8320CF10(ctx, base);
loc_8330EA78:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330EA88;
	sub_83214F50(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330EA9C;
	sub_83214F50(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// clrldi r10,r26,32
	ctx.r10.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// rldimi r11,r11,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// rldimi r10,r3,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x8330eb14
	if (!ctx.cr6.eq) goto loc_8330EB14;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330ead0
	if (ctx.cr6.eq) goto loc_8330EAD0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330EAD0;
	sub_832155A0(ctx, base);
loc_8330EAD0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330eb0c
	if (ctx.cr6.eq) goto loc_8330EB0C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330eb0c
	if (ctx.cr6.eq) goto loc_8330EB0C;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,44
	ctx.r6.s64 = 44;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330EB0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330EB0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330eb70
	goto loc_8330EB70;
loc_8330EB14:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330eb30
	if (ctx.cr6.eq) goto loc_8330EB30;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330EB30;
	sub_832155A0(ctx, base);
loc_8330EB30:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330eb6c
	if (ctx.cr6.eq) goto loc_8330EB6C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330eb6c
	if (ctx.cr6.eq) goto loc_8330EB6C;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,44
	ctx.r6.s64 = 44;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330EB6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330EB6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330EB70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330EB78"))) PPC_WEAK_FUNC(sub_8330EB78);
PPC_FUNC_IMPL(__imp__sub_8330EB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8330EB80;
	__savegprlr_26(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8330ebc0
	if (!ctx.cr6.eq) goto loc_8330EBC0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1991
	ctx.r7.s64 = 1991;
	// bl 0x8320cf10
	ctx.lr = 0x8330EBC0;
	sub_8320CF10(ctx, base);
loc_8330EBC0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330EBD0;
	sub_83214F50(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330EBE4;
	sub_83214F50(ctx, base);
	// clrldi r11,r26,32
	ctx.r11.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// rldimi r11,r3,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// cmpldi cr6,r11,1
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 1, ctx.xer);
	// bne cr6,0x8330ec54
	if (!ctx.cr6.eq) goto loc_8330EC54;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330ec10
	if (ctx.cr6.eq) goto loc_8330EC10;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330EC10;
	sub_832155A0(ctx, base);
loc_8330EC10:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330ec4c
	if (ctx.cr6.eq) goto loc_8330EC4C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330ec4c
	if (ctx.cr6.eq) goto loc_8330EC4C;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,45
	ctx.r6.s64 = 45;
	// lwz r5,180(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330EC4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330EC4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330ecb0
	goto loc_8330ECB0;
loc_8330EC54:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330ec70
	if (ctx.cr6.eq) goto loc_8330EC70;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330EC70;
	sub_832155A0(ctx, base);
loc_8330EC70:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330ecac
	if (ctx.cr6.eq) goto loc_8330ECAC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330ecac
	if (ctx.cr6.eq) goto loc_8330ECAC;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,45
	ctx.r6.s64 = 45;
	// lwz r5,180(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330ECAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330ECAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330ECB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330ECB8"))) PPC_WEAK_FUNC(sub_8330ECB8);
PPC_FUNC_IMPL(__imp__sub_8330ECB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8330ECC0;
	__savegprlr_27(ctx, base);
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330ed00
	if (!ctx.cr6.eq) goto loc_8330ED00;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2047
	ctx.r7.s64 = 2047;
	// bl 0x8320cf10
	ctx.lr = 0x8330ED00;
	sub_8320CF10(ctx, base);
loc_8330ED00:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330ED10;
	sub_83214F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x8330ed78
	if (!ctx.cr0.eq) goto loc_8330ED78;
	// beq cr6,0x8330ed34
	if (ctx.cr6.eq) goto loc_8330ED34;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330ED34;
	sub_832155A0(ctx, base);
loc_8330ED34:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330ed70
	if (ctx.cr6.eq) goto loc_8330ED70;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330ed70
	if (ctx.cr6.eq) goto loc_8330ED70;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,46
	ctx.r6.s64 = 46;
	// lwz r5,184(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330ED70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330ED70:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330edd0
	goto loc_8330EDD0;
loc_8330ED78:
	// beq cr6,0x8330ed90
	if (ctx.cr6.eq) goto loc_8330ED90;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330ED90;
	sub_832155A0(ctx, base);
loc_8330ED90:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330edcc
	if (ctx.cr6.eq) goto loc_8330EDCC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330edcc
	if (ctx.cr6.eq) goto loc_8330EDCC;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,46
	ctx.r6.s64 = 46;
	// lwz r5,184(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330EDCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330EDCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330EDD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330EDD8"))) PPC_WEAK_FUNC(sub_8330EDD8);
PPC_FUNC_IMPL(__imp__sub_8330EDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8330EDE0;
	__savegprlr_27(ctx, base);
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330ee20
	if (!ctx.cr6.eq) goto loc_8330EE20;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2102
	ctx.r7.s64 = 2102;
	// bl 0x8320cf10
	ctx.lr = 0x8330EE20;
	sub_8320CF10(ctx, base);
loc_8330EE20:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330EE30;
	sub_83214F50(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8330ee98
	if (!ctx.cr6.eq) goto loc_8330EE98;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330ee54
	if (ctx.cr6.eq) goto loc_8330EE54;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330EE54;
	sub_832155A0(ctx, base);
loc_8330EE54:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330ee90
	if (ctx.cr6.eq) goto loc_8330EE90;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330ee90
	if (ctx.cr6.eq) goto loc_8330EE90;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,47
	ctx.r6.s64 = 47;
	// lwz r5,188(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330EE90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330EE90:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330eef4
	goto loc_8330EEF4;
loc_8330EE98:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330eeb4
	if (ctx.cr6.eq) goto loc_8330EEB4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330EEB4;
	sub_832155A0(ctx, base);
loc_8330EEB4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330eef0
	if (ctx.cr6.eq) goto loc_8330EEF0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330eef0
	if (ctx.cr6.eq) goto loc_8330EEF0;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,47
	ctx.r6.s64 = 47;
	// lwz r5,188(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330EEF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330EEF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330EEF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330EEFC"))) PPC_WEAK_FUNC(sub_8330EEFC);
PPC_FUNC_IMPL(__imp__sub_8330EEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330EF00"))) PPC_WEAK_FUNC(sub_8330EF00);
PPC_FUNC_IMPL(__imp__sub_8330EF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8330EF08;
	__savegprlr_27(ctx, base);
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330ef48
	if (!ctx.cr6.eq) goto loc_8330EF48;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2155
	ctx.r7.s64 = 2155;
	// bl 0x8320cf10
	ctx.lr = 0x8330EF48;
	sub_8320CF10(ctx, base);
loc_8330EF48:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330EF58;
	sub_83214F50(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8330efc0
	if (!ctx.cr6.eq) goto loc_8330EFC0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330ef7c
	if (ctx.cr6.eq) goto loc_8330EF7C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330EF7C;
	sub_832155A0(ctx, base);
loc_8330EF7C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330efb8
	if (ctx.cr6.eq) goto loc_8330EFB8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330efb8
	if (ctx.cr6.eq) goto loc_8330EFB8;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,48
	ctx.r6.s64 = 48;
	// lwz r5,192(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330EFB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330EFB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330f01c
	goto loc_8330F01C;
loc_8330EFC0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330efdc
	if (ctx.cr6.eq) goto loc_8330EFDC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330EFDC;
	sub_832155A0(ctx, base);
loc_8330EFDC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330f018
	if (ctx.cr6.eq) goto loc_8330F018;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330f018
	if (ctx.cr6.eq) goto loc_8330F018;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,48
	ctx.r6.s64 = 48;
	// lwz r5,192(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330F018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330F018:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330F01C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330F024"))) PPC_WEAK_FUNC(sub_8330F024);
PPC_FUNC_IMPL(__imp__sub_8330F024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330F028"))) PPC_WEAK_FUNC(sub_8330F028);
PPC_FUNC_IMPL(__imp__sub_8330F028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8330F030;
	__savegprlr_27(ctx, base);
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330f070
	if (!ctx.cr6.eq) goto loc_8330F070;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2208
	ctx.r7.s64 = 2208;
	// bl 0x8320cf10
	ctx.lr = 0x8330F070;
	sub_8320CF10(ctx, base);
loc_8330F070:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330F080;
	sub_83214F50(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8330f0e8
	if (!ctx.cr6.eq) goto loc_8330F0E8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330f0a4
	if (ctx.cr6.eq) goto loc_8330F0A4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330F0A4;
	sub_832155A0(ctx, base);
loc_8330F0A4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330f0e0
	if (ctx.cr6.eq) goto loc_8330F0E0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330f0e0
	if (ctx.cr6.eq) goto loc_8330F0E0;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,49
	ctx.r6.s64 = 49;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330F0E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330F0E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330f144
	goto loc_8330F144;
loc_8330F0E8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330f104
	if (ctx.cr6.eq) goto loc_8330F104;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330F104;
	sub_832155A0(ctx, base);
loc_8330F104:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330f140
	if (ctx.cr6.eq) goto loc_8330F140;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330f140
	if (ctx.cr6.eq) goto loc_8330F140;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,49
	ctx.r6.s64 = 49;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330F140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330F140:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330F144:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330F14C"))) PPC_WEAK_FUNC(sub_8330F14C);
PPC_FUNC_IMPL(__imp__sub_8330F14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330F150"))) PPC_WEAK_FUNC(sub_8330F150);
PPC_FUNC_IMPL(__imp__sub_8330F150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8330F158;
	__savegprlr_27(ctx, base);
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330f198
	if (!ctx.cr6.eq) goto loc_8330F198;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2261
	ctx.r7.s64 = 2261;
	// bl 0x8320cf10
	ctx.lr = 0x8330F198;
	sub_8320CF10(ctx, base);
loc_8330F198:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330F1A8;
	sub_83214F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x8330f210
	if (!ctx.cr0.eq) goto loc_8330F210;
	// beq cr6,0x8330f1cc
	if (ctx.cr6.eq) goto loc_8330F1CC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330F1CC;
	sub_832155A0(ctx, base);
loc_8330F1CC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330f208
	if (ctx.cr6.eq) goto loc_8330F208;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330f208
	if (ctx.cr6.eq) goto loc_8330F208;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,49
	ctx.r6.s64 = 49;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330F208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330F208:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330f268
	goto loc_8330F268;
loc_8330F210:
	// beq cr6,0x8330f228
	if (ctx.cr6.eq) goto loc_8330F228;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330F228;
	sub_832155A0(ctx, base);
loc_8330F228:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330f264
	if (ctx.cr6.eq) goto loc_8330F264;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330f264
	if (ctx.cr6.eq) goto loc_8330F264;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,49
	ctx.r6.s64 = 49;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330F264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330F264:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330F268:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330F270"))) PPC_WEAK_FUNC(sub_8330F270);
PPC_FUNC_IMPL(__imp__sub_8330F270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8330F278;
	__savegprlr_27(ctx, base);
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330f2b8
	if (!ctx.cr6.eq) goto loc_8330F2B8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2316
	ctx.r7.s64 = 2316;
	// bl 0x8320cf10
	ctx.lr = 0x8330F2B8;
	sub_8320CF10(ctx, base);
loc_8330F2B8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330F2C8;
	sub_83214F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x8330f330
	if (!ctx.cr0.eq) goto loc_8330F330;
	// beq cr6,0x8330f2ec
	if (ctx.cr6.eq) goto loc_8330F2EC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330F2EC;
	sub_832155A0(ctx, base);
loc_8330F2EC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330f328
	if (ctx.cr6.eq) goto loc_8330F328;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330f328
	if (ctx.cr6.eq) goto loc_8330F328;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,57
	ctx.r6.s64 = 57;
	// lwz r5,228(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330F328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330F328:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330f388
	goto loc_8330F388;
loc_8330F330:
	// beq cr6,0x8330f348
	if (ctx.cr6.eq) goto loc_8330F348;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330F348;
	sub_832155A0(ctx, base);
loc_8330F348:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330f384
	if (ctx.cr6.eq) goto loc_8330F384;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330f384
	if (ctx.cr6.eq) goto loc_8330F384;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,57
	ctx.r6.s64 = 57;
	// lwz r5,228(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330F384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330F384:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330F388:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330F390"))) PPC_WEAK_FUNC(sub_8330F390);
PPC_FUNC_IMPL(__imp__sub_8330F390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8330F398;
	__savegprlr_27(ctx, base);
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330f3d8
	if (!ctx.cr6.eq) goto loc_8330F3D8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2371
	ctx.r7.s64 = 2371;
	// bl 0x8320cf10
	ctx.lr = 0x8330F3D8;
	sub_8320CF10(ctx, base);
loc_8330F3D8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330F3E8;
	sub_83214F50(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8330f450
	if (!ctx.cr6.eq) goto loc_8330F450;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330f40c
	if (ctx.cr6.eq) goto loc_8330F40C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330F40C;
	sub_832155A0(ctx, base);
loc_8330F40C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330f448
	if (ctx.cr6.eq) goto loc_8330F448;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330f448
	if (ctx.cr6.eq) goto loc_8330F448;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,58
	ctx.r6.s64 = 58;
	// lwz r5,232(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330F448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330F448:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330f4ac
	goto loc_8330F4AC;
loc_8330F450:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330f46c
	if (ctx.cr6.eq) goto loc_8330F46C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330F46C;
	sub_832155A0(ctx, base);
loc_8330F46C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330f4a8
	if (ctx.cr6.eq) goto loc_8330F4A8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330f4a8
	if (ctx.cr6.eq) goto loc_8330F4A8;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,58
	ctx.r6.s64 = 58;
	// lwz r5,232(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330F4A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330F4A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330F4AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330F4B4"))) PPC_WEAK_FUNC(sub_8330F4B4);
PPC_FUNC_IMPL(__imp__sub_8330F4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330F4B8"))) PPC_WEAK_FUNC(sub_8330F4B8);
PPC_FUNC_IMPL(__imp__sub_8330F4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8330F4C0;
	__savegprlr_27(ctx, base);
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330f500
	if (!ctx.cr6.eq) goto loc_8330F500;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2426
	ctx.r7.s64 = 2426;
	// bl 0x8320cf10
	ctx.lr = 0x8330F500;
	sub_8320CF10(ctx, base);
loc_8330F500:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330F510;
	sub_83214F50(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8330f578
	if (!ctx.cr6.eq) goto loc_8330F578;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330f534
	if (ctx.cr6.eq) goto loc_8330F534;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330F534;
	sub_832155A0(ctx, base);
loc_8330F534:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330f570
	if (ctx.cr6.eq) goto loc_8330F570;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330f570
	if (ctx.cr6.eq) goto loc_8330F570;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,59
	ctx.r6.s64 = 59;
	// lwz r5,236(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330F570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330F570:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330f5d4
	goto loc_8330F5D4;
loc_8330F578:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330f594
	if (ctx.cr6.eq) goto loc_8330F594;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330F594;
	sub_832155A0(ctx, base);
loc_8330F594:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330f5d0
	if (ctx.cr6.eq) goto loc_8330F5D0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330f5d0
	if (ctx.cr6.eq) goto loc_8330F5D0;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,59
	ctx.r6.s64 = 59;
	// lwz r5,236(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330F5D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330F5D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330F5D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330F5DC"))) PPC_WEAK_FUNC(sub_8330F5DC);
PPC_FUNC_IMPL(__imp__sub_8330F5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330F5E0"))) PPC_WEAK_FUNC(sub_8330F5E0);
PPC_FUNC_IMPL(__imp__sub_8330F5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8330F5E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,971
	ctx.r4.s64 = 971;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330F600;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8330f664
	if (!ctx.cr6.eq) goto loc_8330F664;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8330f624
	if (ctx.cr6.eq) goto loc_8330F624;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330F624;
	sub_832155A0(ctx, base);
loc_8330F624:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330f65c
	if (ctx.cr6.eq) goto loc_8330F65C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330f65c
	if (ctx.cr6.eq) goto loc_8330F65C;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,60
	ctx.r6.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,240(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8330F65C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330F65C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330f6bc
	goto loc_8330F6BC;
loc_8330F664:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8330f680
	if (ctx.cr6.eq) goto loc_8330F680;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330F680;
	sub_832155A0(ctx, base);
loc_8330F680:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330f6b8
	if (ctx.cr6.eq) goto loc_8330F6B8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330f6b8
	if (ctx.cr6.eq) goto loc_8330F6B8;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,60
	ctx.r6.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,240(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8330F6B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330F6B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330F6BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330F6C4"))) PPC_WEAK_FUNC(sub_8330F6C4);
PPC_FUNC_IMPL(__imp__sub_8330F6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330F6C8"))) PPC_WEAK_FUNC(sub_8330F6C8);
PPC_FUNC_IMPL(__imp__sub_8330F6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8330F6D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330f70c
	if (!ctx.cr6.eq) goto loc_8330F70C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2527
	ctx.r7.s64 = 2527;
	// bl 0x8320cf10
	ctx.lr = 0x8330F70C;
	sub_8320CF10(ctx, base);
loc_8330F70C:
	// li r4,926
	ctx.r4.s64 = 926;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330F718;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8330f77c
	if (!ctx.cr6.eq) goto loc_8330F77C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330f73c
	if (ctx.cr6.eq) goto loc_8330F73C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330F73C;
	sub_832155A0(ctx, base);
loc_8330F73C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330f774
	if (ctx.cr6.eq) goto loc_8330F774;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330f774
	if (ctx.cr6.eq) goto loc_8330F774;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,144(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330F774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330F774:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8330f7d4
	goto loc_8330F7D4;
loc_8330F77C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330f798
	if (ctx.cr6.eq) goto loc_8330F798;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330F798;
	sub_832155A0(ctx, base);
loc_8330F798:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330f7d0
	if (ctx.cr6.eq) goto loc_8330F7D0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330f7d0
	if (ctx.cr6.eq) goto loc_8330F7D0;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,144(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330F7D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330F7D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8330F7D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330F7DC"))) PPC_WEAK_FUNC(sub_8330F7DC);
PPC_FUNC_IMPL(__imp__sub_8330F7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330F7E0"))) PPC_WEAK_FUNC(sub_8330F7E0);
PPC_FUNC_IMPL(__imp__sub_8330F7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8330F7E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8330f824
	if (!ctx.cr6.eq) goto loc_8330F824;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2576
	ctx.r7.s64 = 2576;
	// bl 0x8320cf10
	ctx.lr = 0x8330F824;
	sub_8320CF10(ctx, base);
loc_8330F824:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8330f840
	if (ctx.cr6.eq) goto loc_8330F840;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330F840;
	sub_832155A0(ctx, base);
loc_8330F840:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330f87c
	if (ctx.cr6.eq) goto loc_8330F87C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330f87c
	if (ctx.cr6.eq) goto loc_8330F87C;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,52
	ctx.r6.s64 = 52;
	// lwz r5,208(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8330F87C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330F87C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330F888"))) PPC_WEAK_FUNC(sub_8330F888);
PPC_FUNC_IMPL(__imp__sub_8330F888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8330F890;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8330f8d0
	if (!ctx.cr6.eq) goto loc_8330F8D0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2631
	ctx.r7.s64 = 2631;
	// bl 0x8320cf10
	ctx.lr = 0x8330F8D0;
	sub_8320CF10(ctx, base);
loc_8330F8D0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330F8E0;
	sub_83214F50(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bgt cr6,0x8330f948
	if (ctx.cr6.gt) goto loc_8330F948;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330f904
	if (ctx.cr6.eq) goto loc_8330F904;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330F904;
	sub_832155A0(ctx, base);
loc_8330F904:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330f940
	if (ctx.cr6.eq) goto loc_8330F940;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330f940
	if (ctx.cr6.eq) goto loc_8330F940;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,53
	ctx.r6.s64 = 53;
	// lwz r5,212(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330F940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330F940:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8330f9a4
	goto loc_8330F9A4;
loc_8330F948:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330f964
	if (ctx.cr6.eq) goto loc_8330F964;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330F964;
	sub_832155A0(ctx, base);
loc_8330F964:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330f9a0
	if (ctx.cr6.eq) goto loc_8330F9A0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330f9a0
	if (ctx.cr6.eq) goto loc_8330F9A0;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,53
	ctx.r6.s64 = 53;
	// lwz r5,212(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330F9A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330F9A0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8330F9A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330F9AC"))) PPC_WEAK_FUNC(sub_8330F9AC);
PPC_FUNC_IMPL(__imp__sub_8330F9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330F9B0"))) PPC_WEAK_FUNC(sub_8330F9B0);
PPC_FUNC_IMPL(__imp__sub_8330F9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8330F9B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8330f9f8
	if (!ctx.cr6.eq) goto loc_8330F9F8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2690
	ctx.r7.s64 = 2690;
	// bl 0x8320cf10
	ctx.lr = 0x8330F9F8;
	sub_8320CF10(ctx, base);
loc_8330F9F8:
	// li r4,157
	ctx.r4.s64 = 157;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330FA04;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8330fa6c
	if (!ctx.cr6.eq) goto loc_8330FA6C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330fa28
	if (ctx.cr6.eq) goto loc_8330FA28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330FA28;
	sub_832155A0(ctx, base);
loc_8330FA28:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330fa64
	if (ctx.cr6.eq) goto loc_8330FA64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330fa64
	if (ctx.cr6.eq) goto loc_8330FA64;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,91
	ctx.r6.s64 = 91;
	// lwz r5,364(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330FA64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330FA64:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8330fac8
	goto loc_8330FAC8;
loc_8330FA6C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330fa88
	if (ctx.cr6.eq) goto loc_8330FA88;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330FA88;
	sub_832155A0(ctx, base);
loc_8330FA88:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330fac4
	if (ctx.cr6.eq) goto loc_8330FAC4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8330fac4
	if (ctx.cr6.eq) goto loc_8330FAC4;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,91
	ctx.r6.s64 = 91;
	// lwz r5,364(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8330FAC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330FAC4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8330FAC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330FAD0"))) PPC_WEAK_FUNC(sub_8330FAD0);
PPC_FUNC_IMPL(__imp__sub_8330FAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8330FAD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8330fb14
	if (!ctx.cr6.eq) goto loc_8330FB14;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2744
	ctx.r7.s64 = 2744;
	// bl 0x8320cf10
	ctx.lr = 0x8330FB14;
	sub_8320CF10(ctx, base);
loc_8330FB14:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8330fb30
	if (ctx.cr6.eq) goto loc_8330FB30;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832155a0
	ctx.lr = 0x8330FB30;
	sub_832155A0(ctx, base);
loc_8330FB30:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330fb6c
	if (ctx.cr6.eq) goto loc_8330FB6C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330fb6c
	if (ctx.cr6.eq) goto loc_8330FB6C;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,101
	ctx.r6.s64 = 101;
	// lwz r5,404(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8330FB6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330FB6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330FB78"))) PPC_WEAK_FUNC(sub_8330FB78);
PPC_FUNC_IMPL(__imp__sub_8330FB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8330FB80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,567
	ctx.r4.s64 = 567;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330FB9C;
	sub_83214BF0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,974
	ctx.r4.s64 = 974;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330FBAC;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// bne cr6,0x8330fbf8
	if (!ctx.cr6.eq) goto loc_8330FBF8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8330fbc4
	if (!ctx.cr6.eq) goto loc_8330FBC4;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8330fbf0
	goto loc_8330FBF0;
loc_8330FBC4:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8330fbd4
	if (!ctx.cr6.eq) goto loc_8330FBD4;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8330fbf0
	goto loc_8330FBF0;
loc_8330FBD4:
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x8330fbe4
	if (!ctx.cr6.eq) goto loc_8330FBE4;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8330fbf0
	goto loc_8330FBF0;
loc_8330FBE4:
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8330fbf8
	if (!ctx.cr6.eq) goto loc_8330FBF8;
	// li r11,11
	ctx.r11.s64 = 11;
loc_8330FBF0:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8330fc1c
	goto loc_8330FC1C;
loc_8330FBF8:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,18988
	ctx.r5.s64 = ctx.r10.s64 + 18988;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2816
	ctx.r7.s64 = 2816;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330FC1C;
	sub_8320CF10(ctx, base);
loc_8330FC1C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8330fc54
	if (ctx.cr6.eq) goto loc_8330FC54;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8330fc54
	if (ctx.cr6.eq) goto loc_8330FC54;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r6,61
	ctx.r6.s64 = 61;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,244(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8330FC54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330FC54:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330FC60"))) PPC_WEAK_FUNC(sub_8330FC60);
PPC_FUNC_IMPL(__imp__sub_8330FC60) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8330FC74"))) PPC_WEAK_FUNC(sub_8330FC74);
PPC_FUNC_IMPL(__imp__sub_8330FC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330FC78"))) PPC_WEAK_FUNC(sub_8330FC78);
PPC_FUNC_IMPL(__imp__sub_8330FC78) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8330FC8C"))) PPC_WEAK_FUNC(sub_8330FC8C);
PPC_FUNC_IMPL(__imp__sub_8330FC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8330FC90"))) PPC_WEAK_FUNC(sub_8330FC90);
PPC_FUNC_IMPL(__imp__sub_8330FC90) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8330FCA0"))) PPC_WEAK_FUNC(sub_8330FCA0);
PPC_FUNC_IMPL(__imp__sub_8330FCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8330FCA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8330fce8
	if (!ctx.cr6.eq) goto loc_8330FCE8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2877
	ctx.r7.s64 = 2877;
	// bl 0x8320cf10
	ctx.lr = 0x8330FCE8;
	sub_8320CF10(ctx, base);
loc_8330FCE8:
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// bge cr6,0x8330fd10
	if (!ctx.cr6.lt) goto loc_8330FD10;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8330fd10
	if (ctx.cr6.eq) goto loc_8330FD10;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330FD08;
	sub_83214F50(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x8330fd14
	goto loc_8330FD14;
loc_8330FD10:
	// li r8,0
	ctx.r8.s64 = 0;
loc_8330FD14:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// beq cr6,0x8330fd84
	if (ctx.cr6.eq) goto loc_8330FD84;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8330fd84
	if (ctx.cr6.eq) goto loc_8330FD84;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,31
	ctx.r6.s64 = 31;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,124(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8330FD84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8330FD84:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8330FD90"))) PPC_WEAK_FUNC(sub_8330FD90);
PPC_FUNC_IMPL(__imp__sub_8330FD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x8330FD98;
	__savegprlr_17(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r18,r11,-21168
	ctx.r18.s64 = ctx.r11.s64 + -21168;
	// addi r17,r10,26952
	ctx.r17.s64 = ctx.r10.s64 + 26952;
	// bne cr6,0x8330fde8
	if (!ctx.cr6.eq) goto loc_8330FDE8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// addi r5,r11,-20840
	ctx.r5.s64 = ctx.r11.s64 + -20840;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r7,2967
	ctx.r7.s64 = 2967;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330FDE8;
	sub_8320CF10(ctx, base);
loc_8330FDE8:
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8330fe28
	if (!ctx.cr6.eq) goto loc_8330FE28;
	// li r4,928
	ctx.r4.s64 = 928;
	// li r28,23
	ctx.r28.s64 = 23;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330FE0C;
	sub_83214BF0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,927
	ctx.r4.s64 = 927;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x8330FE1C;
	sub_83214BF0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r24,-1
	ctx.r24.s64 = -1;
	// b 0x8330fe9c
	goto loc_8330FE9C;
loc_8330FE28:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// bl 0x83214f50
	ctx.lr = 0x8330FE34;
	sub_83214F50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330FE48;
	sub_83214F50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330FE5C;
	sub_83214F50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330FE70;
	sub_83214F50(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330FE84;
	sub_83214F50(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330FE98;
	sub_83214F50(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_8330FE9C:
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 1, ctx.xer);
	// ble cr6,0x8330feb8
	if (!ctx.cr6.gt) goto loc_8330FEB8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832ceb20
	ctx.lr = 0x8330FEB0;
	sub_832CEB20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x8330febc
	goto loc_8330FEBC;
loc_8330FEB8:
	// li r22,1
	ctx.r22.s64 = 1;
loc_8330FEBC:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// beq cr6,0x8330fed4
	if (ctx.cr6.eq) goto loc_8330FED4;
	// addi r11,r11,26352
	ctx.r11.s64 = ctx.r11.s64 + 26352;
	// addi r10,r11,-576
	ctx.r10.s64 = ctx.r11.s64 + -576;
	// b 0x8330fed8
	goto loc_8330FED8;
loc_8330FED4:
	// addi r10,r11,26352
	ctx.r10.s64 = ctx.r11.s64 + 26352;
loc_8330FED8:
	// mulli r11,r28,24
	ctx.r11.s64 = ctx.r28.s64 * 24;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8330ff08
	if (!ctx.cr6.eq) goto loc_8330FF08;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8330FF08:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x8330ff24
	if (!ctx.cr6.eq) goto loc_8330FF24;
	// cntlzw r11,r23
	ctx.r11.u64 = ctx.r23.u32 == 0 ? 32 : __builtin_clz(ctx.r23.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8330FF24:
	// stw r20,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r20.u32);
	// stw r20,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r20.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x8330ff5c
	if (!ctx.cr6.eq) goto loc_8330FF5C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x8330FF4C;
	sub_83214F50(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8330FF5C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8330ff84
	if (!ctx.cr6.eq) goto loc_8330FF84;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// addi r5,r11,18988
	ctx.r5.s64 = ctx.r11.s64 + 18988;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r7,3048
	ctx.r7.s64 = 3048;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8330FF84;
	sub_8320CF10(ctx, base);
loc_8330FF84:
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stw r25,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// stw r20,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r20.u32);
	// stw r24,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r24.u32);
	// beq cr6,0x83310020
	if (ctx.cr6.eq) goto loc_83310020;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x83310020
	if (ctx.cr6.eq) goto loc_83310020;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// addi r27,r11,-18080
	ctx.r27.s64 = ctx.r11.s64 + -18080;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r8,27068
	ctx.r4.s64 = ctx.r8.s64 + 27068;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,30
	ctx.r6.s64 = 30;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r5,120(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x83310000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r5,396(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 396);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// addi r4,r11,26936
	ctx.r4.s64 = ctx.r11.s64 + 26936;
	// li r6,99
	ctx.r6.s64 = 99;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x83310020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83310020:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331002C"))) PPC_WEAK_FUNC(sub_8331002C);
PPC_FUNC_IMPL(__imp__sub_8331002C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83310030"))) PPC_WEAK_FUNC(sub_83310030);
PPC_FUNC_IMPL(__imp__sub_83310030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x83310038;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,26952
	ctx.r24.s64 = ctx.r10.s64 + 26952;
	// bne cr6,0x8331008c
	if (!ctx.cr6.eq) goto loc_8331008C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-20840
	ctx.r5.s64 = ctx.r11.s64 + -20840;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,3110
	ctx.r7.s64 = 3110;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8331008C;
	sub_8320CF10(ctx, base);
loc_8331008C:
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bne cr6,0x833100a0
	if (!ctx.cr6.eq) goto loc_833100A0;
	// li r27,23
	ctx.r27.s64 = 23;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x833100c8
	goto loc_833100C8;
loc_833100A0:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x833100B0;
	sub_83214F50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x833100C4;
	sub_83214F50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_833100C8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// ble cr6,0x833100e4
	if (!ctx.cr6.gt) goto loc_833100E4;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832ceb20
	ctx.lr = 0x833100DC;
	sub_832CEB20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x833100e8
	goto loc_833100E8;
loc_833100E4:
	// li r22,1
	ctx.r22.s64 = 1;
loc_833100E8:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// beq cr6,0x83310100
	if (ctx.cr6.eq) goto loc_83310100;
	// addi r11,r11,26352
	ctx.r11.s64 = ctx.r11.s64 + 26352;
	// addi r30,r11,-576
	ctx.r30.s64 = ctx.r11.s64 + -576;
	// b 0x83310104
	goto loc_83310104;
loc_83310100:
	// addi r30,r11,26352
	ctx.r30.s64 = ctx.r11.s64 + 26352;
loc_83310104:
	// mulli r11,r27,24
	ctx.r11.s64 = ctx.r27.s64 * 24;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne cr6,0x833101b4
	if (!ctx.cr6.eq) goto loc_833101B4;
	// addi r11,r27,-17
	ctx.r11.s64 = ctx.r27.s64 + -17;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-17656
	ctx.r10.s64 = ctx.r10.s64 + -17656;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83310150
	if (!ctx.cr6.eq) goto loc_83310150;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,27200
	ctx.r5.s64 = ctx.r11.s64 + 27200;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,3140
	ctx.r7.s64 = 3140;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83310150;
	sub_8320CF10(ctx, base);
loc_83310150:
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x83310168
	if (ctx.cr6.lt) goto loc_83310168;
	// cmpwi cr6,r31,24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 24, ctx.xer);
	// blt cr6,0x83310184
	if (ctx.cr6.lt) goto loc_83310184;
loc_83310168:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,27160
	ctx.r5.s64 = ctx.r11.s64 + 27160;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,3142
	ctx.r7.s64 = 3142;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83310184;
	sub_8320CF10(ctx, base);
loc_83310184:
	// mulli r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 * 24;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne cr6,0x833101b4
	if (!ctx.cr6.eq) goto loc_833101B4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,27148
	ctx.r5.s64 = ctx.r11.s64 + 27148;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,3144
	ctx.r7.s64 = 3144;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833101B4;
	sub_8320CF10(ctx, base);
loc_833101B4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r20,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// beq cr6,0x83310224
	if (ctx.cr6.eq) goto loc_83310224;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x83310224
	if (ctx.cr6.eq) goto loc_83310224;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r31,r11,-18080
	ctx.r31.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27124
	ctx.r4.s64 = ctx.r10.s64 + 27124;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r6,29
	ctx.r6.s64 = 29;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83310204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r5,396(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// addi r4,r11,26936
	ctx.r4.s64 = ctx.r11.s64 + 26936;
	// li r6,99
	ctx.r6.s64 = 99;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83310224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83310224:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83310230"))) PPC_WEAK_FUNC(sub_83310230);
PPC_FUNC_IMPL(__imp__sub_83310230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x83310238;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,26952
	ctx.r24.s64 = ctx.r10.s64 + 26952;
	// bne cr6,0x83310288
	if (!ctx.cr6.eq) goto loc_83310288;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-20840
	ctx.r5.s64 = ctx.r11.s64 + -20840;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,3188
	ctx.r7.s64 = 3188;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83310288;
	sub_8320CF10(ctx, base);
loc_83310288:
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bne cr6,0x8331029c
	if (!ctx.cr6.eq) goto loc_8331029C;
	// li r30,23
	ctx.r30.s64 = 23;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x833102c4
	goto loc_833102C4;
loc_8331029C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x833102AC;
	sub_83214F50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x833102C0;
	sub_83214F50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_833102C4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x833102dc
	if (ctx.cr6.eq) goto loc_833102DC;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832ceb20
	ctx.lr = 0x833102D8;
	sub_832CEB20(ctx, base);
	// b 0x833102e0
	goto loc_833102E0;
loc_833102DC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_833102E0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// beq cr6,0x833102f8
	if (ctx.cr6.eq) goto loc_833102F8;
	// addi r11,r11,26352
	ctx.r11.s64 = ctx.r11.s64 + 26352;
	// addi r29,r11,-576
	ctx.r29.s64 = ctx.r11.s64 + -576;
	// b 0x833102fc
	goto loc_833102FC;
loc_833102F8:
	// addi r29,r11,26352
	ctx.r29.s64 = ctx.r11.s64 + 26352;
loc_833102FC:
	// mulli r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 * 24;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833103b8
	if (!ctx.cr6.eq) goto loc_833103B8;
	// addi r11,r30,-17
	ctx.r11.s64 = ctx.r30.s64 + -17;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-17656
	ctx.r10.s64 = ctx.r10.s64 + -17656;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83310350
	if (!ctx.cr6.eq) goto loc_83310350;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,27200
	ctx.r5.s64 = ctx.r11.s64 + 27200;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,3219
	ctx.r7.s64 = 3219;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83310350;
	sub_8320CF10(ctx, base);
loc_83310350:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x83310368
	if (ctx.cr6.lt) goto loc_83310368;
	// cmpwi cr6,r31,24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 24, ctx.xer);
	// blt cr6,0x83310384
	if (ctx.cr6.lt) goto loc_83310384;
loc_83310368:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,27160
	ctx.r5.s64 = ctx.r11.s64 + 27160;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,3221
	ctx.r7.s64 = 3221;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83310384;
	sub_8320CF10(ctx, base);
loc_83310384:
	// mulli r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 * 24;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bne 0x833103b8
	if (!ctx.cr0.eq) goto loc_833103B8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,27216
	ctx.r5.s64 = ctx.r11.s64 + 27216;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,3223
	ctx.r7.s64 = 3223;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833103B8;
	sub_8320CF10(ctx, base);
loc_833103B8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x833103f4
	if (ctx.cr6.eq) goto loc_833103F4;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x833103f4
	if (ctx.cr6.eq) goto loc_833103F4;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,100
	ctx.r6.s64 = 100;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r5,400(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x833103F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_833103F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83310400"))) PPC_WEAK_FUNC(sub_83310400);
PPC_FUNC_IMPL(__imp__sub_83310400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x83310408;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8331044c
	if (!ctx.cr6.eq) goto loc_8331044C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,3264
	ctx.r7.s64 = 3264;
	// bl 0x8320cf10
	ctx.lr = 0x8331044C;
	sub_8320CF10(ctx, base);
loc_8331044C:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x83310460
	if (!ctx.cr6.eq) goto loc_83310460;
	// li r30,23
	ctx.r30.s64 = 23;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x83310488
	goto loc_83310488;
loc_83310460:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x83310470;
	sub_83214F50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x83310484;
	sub_83214F50(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_83310488:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x833104a4
	if (!ctx.cr6.gt) goto loc_833104A4;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832ceb20
	ctx.lr = 0x8331049C;
	sub_832CEB20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x833104a8
	goto loc_833104A8;
loc_833104A4:
	// li r31,1
	ctx.r31.s64 = 1;
loc_833104A8:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r11,26352
	ctx.r11.s64 = ctx.r11.s64 + 26352;
	// beq cr6,0x833104d8
	if (ctx.cr6.eq) goto loc_833104D8;
	// addi r10,r11,-576
	ctx.r10.s64 = ctx.r11.s64 + -576;
	// mulli r9,r30,24
	ctx.r9.s64 = ctx.r30.s64 * 24;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,-576
	ctx.r11.s64 = ctx.r11.s64 + -576;
	// lhzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x833104ec
	goto loc_833104EC;
loc_833104D8:
	// mulli r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 * 24;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lhzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_833104EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8331050c
	if (!ctx.cr6.eq) goto loc_8331050C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83310508
	if (ctx.cr6.eq) goto loc_83310508;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8331050c
	goto loc_8331050C;
loc_83310508:
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
loc_8331050C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83310568
	if (ctx.cr6.eq) goto loc_83310568;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x83310568
	if (ctx.cr6.eq) goto loc_83310568;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r30,r11,-18080
	ctx.r30.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27048
	ctx.r4.s64 = ctx.r10.s64 + 27048;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,28
	ctx.r6.s64 = 28;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,112(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83310548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r5,396(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,26936
	ctx.r4.s64 = ctx.r11.s64 + 26936;
	// li r6,99
	ctx.r6.s64 = 99;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83310568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83310568:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83310574"))) PPC_WEAK_FUNC(sub_83310574);
PPC_FUNC_IMPL(__imp__sub_83310574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83310578"))) PPC_WEAK_FUNC(sub_83310578);
PPC_FUNC_IMPL(__imp__sub_83310578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x83310580;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,82
	ctx.r4.s64 = 82;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// bl 0x83214f50
	ctx.lr = 0x833105AC;
	sub_83214F50(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,83
	ctx.r4.s64 = 83;
	// bl 0x83214f50
	ctx.lr = 0x833105C0;
	sub_83214F50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83214f50
	ctx.lr = 0x833105D4;
	sub_83214F50(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// beq cr6,0x83310624
	if (ctx.cr6.eq) goto loc_83310624;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83310624
	if (ctx.cr6.eq) goto loc_83310624;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r7,27244
	ctx.r4.s64 = ctx.r7.s64 + 27244;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83310624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83310624:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83310630"))) PPC_WEAK_FUNC(sub_83310630);
PPC_FUNC_IMPL(__imp__sub_83310630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83310638;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83310674
	if (!ctx.cr6.eq) goto loc_83310674;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,3379
	ctx.r7.s64 = 3379;
	// bl 0x8320cf10
	ctx.lr = 0x83310674;
	sub_8320CF10(ctx, base);
loc_83310674:
	// li r4,130
	ctx.r4.s64 = 130;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6f28
	ctx.lr = 0x83310680;
	sub_832D6F28(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x833106c4
	if (ctx.cr6.eq) goto loc_833106C4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x833106c4
	if (ctx.cr6.eq) goto loc_833106C4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8330d2f8
	ctx.lr = 0x8331069C;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27272
	ctx.r4.s64 = ctx.r10.s64 + 27272;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,103
	ctx.r6.s64 = 103;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,412(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x833106C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_833106C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833106D0"))) PPC_WEAK_FUNC(sub_833106D0);
PPC_FUNC_IMPL(__imp__sub_833106D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x833106D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83310714
	if (!ctx.cr6.eq) goto loc_83310714;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,3411
	ctx.r7.s64 = 3411;
	// bl 0x8320cf10
	ctx.lr = 0x83310714;
	sub_8320CF10(ctx, base);
loc_83310714:
	// li r4,129
	ctx.r4.s64 = 129;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6f28
	ctx.lr = 0x83310720;
	sub_832D6F28(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83310764
	if (ctx.cr6.eq) goto loc_83310764;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83310764
	if (ctx.cr6.eq) goto loc_83310764;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8330d2f8
	ctx.lr = 0x8331073C;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27272
	ctx.r4.s64 = ctx.r10.s64 + 27272;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,104
	ctx.r6.s64 = 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,416(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x83310764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83310764:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83310770"))) PPC_WEAK_FUNC(sub_83310770);
PPC_FUNC_IMPL(__imp__sub_83310770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,27288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27288);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83310784"))) PPC_WEAK_FUNC(sub_83310784);
PPC_FUNC_IMPL(__imp__sub_83310784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83310788"))) PPC_WEAK_FUNC(sub_83310788);
PPC_FUNC_IMPL(__imp__sub_83310788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83310790;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x833107cc
	if (!ctx.cr6.eq) goto loc_833107CC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,3457
	ctx.r7.s64 = 3457;
	// bl 0x8320cf10
	ctx.lr = 0x833107CC;
	sub_8320CF10(ctx, base);
loc_833107CC:
	// li r4,580
	ctx.r4.s64 = 580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x833107D8;
	sub_83214BF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,581
	ctx.r4.s64 = 581;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x833107E8;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x83310818
	if (!ctx.cr6.eq) goto loc_83310818;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,27292(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27292);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x83310820
	goto loc_83310820;
loc_83310818:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lfs f0,27288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27288);
	ctx.f0.f64 = double(temp.f32);
loc_83310820:
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83310868
	if (ctx.cr6.eq) goto loc_83310868;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83310868
	if (ctx.cr6.eq) goto loc_83310868;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x8330d2f8
	ctx.lr = 0x83310840;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27272
	ctx.r4.s64 = ctx.r10.s64 + 27272;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,67
	ctx.r6.s64 = 67;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,268(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83310868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83310868:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83310874"))) PPC_WEAK_FUNC(sub_83310874);
PPC_FUNC_IMPL(__imp__sub_83310874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83310878"))) PPC_WEAK_FUNC(sub_83310878);
PPC_FUNC_IMPL(__imp__sub_83310878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,27296(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27296);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331088C"))) PPC_WEAK_FUNC(sub_8331088C);
PPC_FUNC_IMPL(__imp__sub_8331088C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83310890"))) PPC_WEAK_FUNC(sub_83310890);
PPC_FUNC_IMPL(__imp__sub_83310890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,27296(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27296);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833108A4"))) PPC_WEAK_FUNC(sub_833108A4);
PPC_FUNC_IMPL(__imp__sub_833108A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833108A8"))) PPC_WEAK_FUNC(sub_833108A8);
PPC_FUNC_IMPL(__imp__sub_833108A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x833108B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x833108ec
	if (!ctx.cr6.eq) goto loc_833108EC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,3516
	ctx.r7.s64 = 3516;
	// bl 0x8320cf10
	ctx.lr = 0x833108EC;
	sub_8320CF10(ctx, base);
loc_833108EC:
	// li r4,1000
	ctx.r4.s64 = 1000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6f28
	ctx.lr = 0x833108F8;
	sub_832D6F28(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8331093c
	if (ctx.cr6.eq) goto loc_8331093C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8331093c
	if (ctx.cr6.eq) goto loc_8331093C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8330d2f8
	ctx.lr = 0x83310914;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27272
	ctx.r4.s64 = ctx.r10.s64 + 27272;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8331093C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8331093C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83310948"))) PPC_WEAK_FUNC(sub_83310948);
PPC_FUNC_IMPL(__imp__sub_83310948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83310950;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8331098c
	if (!ctx.cr6.eq) goto loc_8331098C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,3546
	ctx.r7.s64 = 3546;
	// bl 0x8320cf10
	ctx.lr = 0x8331098C;
	sub_8320CF10(ctx, base);
loc_8331098C:
	// li r4,1001
	ctx.r4.s64 = 1001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6f28
	ctx.lr = 0x83310998;
	sub_832D6F28(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x833109dc
	if (ctx.cr6.eq) goto loc_833109DC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x833109dc
	if (ctx.cr6.eq) goto loc_833109DC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8330d2f8
	ctx.lr = 0x833109B4;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27272
	ctx.r4.s64 = ctx.r10.s64 + 27272;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,69
	ctx.r6.s64 = 69;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,276(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x833109DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_833109DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833109E8"))) PPC_WEAK_FUNC(sub_833109E8);
PPC_FUNC_IMPL(__imp__sub_833109E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x833109F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83310a2c
	if (!ctx.cr6.eq) goto loc_83310A2C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,3577
	ctx.r7.s64 = 3577;
	// bl 0x8320cf10
	ctx.lr = 0x83310A2C;
	sub_8320CF10(ctx, base);
loc_83310A2C:
	// li r4,1002
	ctx.r4.s64 = 1002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6f28
	ctx.lr = 0x83310A38;
	sub_832D6F28(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83310a7c
	if (ctx.cr6.eq) goto loc_83310A7C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83310a7c
	if (ctx.cr6.eq) goto loc_83310A7C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8330d2f8
	ctx.lr = 0x83310A54;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27272
	ctx.r4.s64 = ctx.r10.s64 + 27272;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,70
	ctx.r6.s64 = 70;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,280(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x83310A7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83310A7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83310A88"))) PPC_WEAK_FUNC(sub_83310A88);
PPC_FUNC_IMPL(__imp__sub_83310A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83310A9C"))) PPC_WEAK_FUNC(sub_83310A9C);
PPC_FUNC_IMPL(__imp__sub_83310A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83310AA0"))) PPC_WEAK_FUNC(sub_83310AA0);
PPC_FUNC_IMPL(__imp__sub_83310AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83310AA8;
	__savegprlr_27(ctx, base);
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
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83310ae8
	if (!ctx.cr6.eq) goto loc_83310AE8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,3620
	ctx.r7.s64 = 3620;
	// bl 0x8320cf10
	ctx.lr = 0x83310AE8;
	sub_8320CF10(ctx, base);
loc_83310AE8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d94b8
	ctx.lr = 0x83310AF8;
	sub_832D94B8(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83310b40
	if (ctx.cr6.eq) goto loc_83310B40;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83310b40
	if (ctx.cr6.eq) goto loc_83310B40;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8330d2f8
	ctx.lr = 0x83310B14;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27300
	ctx.r4.s64 = ctx.r10.s64 + 27300;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,11
	ctx.r6.s64 = 11;
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x83310B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83310B40:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83310B4C"))) PPC_WEAK_FUNC(sub_83310B4C);
PPC_FUNC_IMPL(__imp__sub_83310B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83310B50"))) PPC_WEAK_FUNC(sub_83310B50);
PPC_FUNC_IMPL(__imp__sub_83310B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83310B58;
	__savegprlr_27(ctx, base);
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
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83310b98
	if (!ctx.cr6.eq) goto loc_83310B98;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,3654
	ctx.r7.s64 = 3654;
	// bl 0x8320cf10
	ctx.lr = 0x83310B98;
	sub_8320CF10(ctx, base);
loc_83310B98:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d94b8
	ctx.lr = 0x83310BA8;
	sub_832D94B8(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83310bf0
	if (ctx.cr6.eq) goto loc_83310BF0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83310bf0
	if (ctx.cr6.eq) goto loc_83310BF0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8330d2f8
	ctx.lr = 0x83310BC4;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27300
	ctx.r4.s64 = ctx.r10.s64 + 27300;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,72
	ctx.r6.s64 = 72;
	// lwz r5,288(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x83310BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83310BF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83310BFC"))) PPC_WEAK_FUNC(sub_83310BFC);
PPC_FUNC_IMPL(__imp__sub_83310BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83310C00"))) PPC_WEAK_FUNC(sub_83310C00);
PPC_FUNC_IMPL(__imp__sub_83310C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83310C08;
	__savegprlr_27(ctx, base);
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
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83310c48
	if (!ctx.cr6.eq) goto loc_83310C48;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,3688
	ctx.r7.s64 = 3688;
	// bl 0x8320cf10
	ctx.lr = 0x83310C48;
	sub_8320CF10(ctx, base);
loc_83310C48:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d94b8
	ctx.lr = 0x83310C58;
	sub_832D94B8(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83310ca0
	if (ctx.cr6.eq) goto loc_83310CA0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83310ca0
	if (ctx.cr6.eq) goto loc_83310CA0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8330d2f8
	ctx.lr = 0x83310C74;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27300
	ctx.r4.s64 = ctx.r10.s64 + 27300;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,73
	ctx.r6.s64 = 73;
	// lwz r5,292(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x83310CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83310CA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83310CAC"))) PPC_WEAK_FUNC(sub_83310CAC);
PPC_FUNC_IMPL(__imp__sub_83310CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83310CB0"))) PPC_WEAK_FUNC(sub_83310CB0);
PPC_FUNC_IMPL(__imp__sub_83310CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83310CB8;
	__savegprlr_27(ctx, base);
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
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83310cf8
	if (!ctx.cr6.eq) goto loc_83310CF8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,3721
	ctx.r7.s64 = 3721;
	// bl 0x8320cf10
	ctx.lr = 0x83310CF8;
	sub_8320CF10(ctx, base);
loc_83310CF8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d94b8
	ctx.lr = 0x83310D08;
	sub_832D94B8(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83310d50
	if (ctx.cr6.eq) goto loc_83310D50;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83310d50
	if (ctx.cr6.eq) goto loc_83310D50;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8330d2f8
	ctx.lr = 0x83310D24;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27300
	ctx.r4.s64 = ctx.r10.s64 + 27300;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,74
	ctx.r6.s64 = 74;
	// lwz r5,296(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x83310D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83310D50:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83310D5C"))) PPC_WEAK_FUNC(sub_83310D5C);
PPC_FUNC_IMPL(__imp__sub_83310D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83310D60"))) PPC_WEAK_FUNC(sub_83310D60);
PPC_FUNC_IMPL(__imp__sub_83310D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83310D68;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,26952
	ctx.r28.s64 = ctx.r10.s64 + 26952;
	// bne cr6,0x83310db0
	if (!ctx.cr6.eq) goto loc_83310DB0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-20840
	ctx.r5.s64 = ctx.r11.s64 + -20840;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3754
	ctx.r7.s64 = 3754;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83310DB0;
	sub_8320CF10(ctx, base);
loc_83310DB0:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x83310DBC;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x83310dd8
	if (!ctx.cr6.eq) goto loc_83310DD8;
	// li r4,166
	ctx.r4.s64 = 166;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6f28
	ctx.lr = 0x83310DD0;
	sub_832D6F28(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x83310de4
	goto loc_83310DE4;
loc_83310DD8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_83310DE4:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x83310DF0;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x83310e14
	if (ctx.cr6.eq) goto loc_83310E14;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,27320
	ctx.r5.s64 = ctx.r11.s64 + 27320;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3767
	ctx.r7.s64 = 3767;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83310E14;
	sub_8320CF10(ctx, base);
loc_83310E14:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83310e58
	if (ctx.cr6.eq) goto loc_83310E58;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83310e58
	if (ctx.cr6.eq) goto loc_83310E58;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8330d2f8
	ctx.lr = 0x83310E30;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27272
	ctx.r4.s64 = ctx.r10.s64 + 27272;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,26
	ctx.r6.s64 = 26;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,104(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x83310E58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83310E58:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83310E64"))) PPC_WEAK_FUNC(sub_83310E64);
PPC_FUNC_IMPL(__imp__sub_83310E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83310E68"))) PPC_WEAK_FUNC(sub_83310E68);
PPC_FUNC_IMPL(__imp__sub_83310E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83310E70;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,26952
	ctx.r28.s64 = ctx.r10.s64 + 26952;
	// bne cr6,0x83310ebc
	if (!ctx.cr6.eq) goto loc_83310EBC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-20840
	ctx.r5.s64 = ctx.r11.s64 + -20840;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3800
	ctx.r7.s64 = 3800;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83310EBC;
	sub_8320CF10(ctx, base);
loc_83310EBC:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x83310EC8;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x83310f20
	if (!ctx.cr6.eq) goto loc_83310F20;
	// li r4,166
	ctx.r4.s64 = 166;
	// bl 0x832d6f28
	ctx.lr = 0x83310EDC;
	sub_832D6F28(ctx, base);
	// li r4,167
	ctx.r4.s64 = 167;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x832d6f28
	ctx.lr = 0x83310EEC;
	sub_832D6F28(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x83310f10
	if (!ctx.cr6.eq) goto loc_83310F10;
	// lis r11,32639
	ctx.r11.s64 = 2139029504;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x83310f44
	goto loc_83310F44;
loc_83310F10:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// b 0x83310f40
	goto loc_83310F40;
loc_83310F20:
	// li r4,168
	ctx.r4.s64 = 168;
	// bl 0x832d6f28
	ctx.lr = 0x83310F28;
	sub_832D6F28(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,9792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9792);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// lfs f0,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_83310F40:
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_83310F44:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214bf0
	ctx.lr = 0x83310F50;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x83310f74
	if (ctx.cr6.eq) goto loc_83310F74;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,27464
	ctx.r5.s64 = ctx.r11.s64 + 27464;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3827
	ctx.r7.s64 = 3827;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83310F74;
	sub_8320CF10(ctx, base);
loc_83310F74:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83310fb8
	if (ctx.cr6.eq) goto loc_83310FB8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83310fb8
	if (ctx.cr6.eq) goto loc_83310FB8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8330d2f8
	ctx.lr = 0x83310F90;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27272
	ctx.r4.s64 = ctx.r10.s64 + 27272;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,27
	ctx.r6.s64 = 27;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,108(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x83310FB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83310FB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83310FC8"))) PPC_WEAK_FUNC(sub_83310FC8);
PPC_FUNC_IMPL(__imp__sub_83310FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83310FD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8331100c
	if (!ctx.cr6.eq) goto loc_8331100C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,3857
	ctx.r7.s64 = 3857;
	// bl 0x8320cf10
	ctx.lr = 0x8331100C;
	sub_8320CF10(ctx, base);
loc_8331100C:
	// li r4,998
	ctx.r4.s64 = 998;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6f28
	ctx.lr = 0x83311018;
	sub_832D6F28(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8331105c
	if (ctx.cr6.eq) goto loc_8331105C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8331105c
	if (ctx.cr6.eq) goto loc_8331105C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8330d2f8
	ctx.lr = 0x83311034;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27272
	ctx.r4.s64 = ctx.r10.s64 + 27272;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,93
	ctx.r6.s64 = 93;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,372(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8331105C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8331105C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83311068"))) PPC_WEAK_FUNC(sub_83311068);
PPC_FUNC_IMPL(__imp__sub_83311068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83311070;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x833110ac
	if (!ctx.cr6.eq) goto loc_833110AC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,3889
	ctx.r7.s64 = 3889;
	// bl 0x8320cf10
	ctx.lr = 0x833110AC;
	sub_8320CF10(ctx, base);
loc_833110AC:
	// li r4,999
	ctx.r4.s64 = 999;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6f28
	ctx.lr = 0x833110B8;
	sub_832D6F28(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x833110fc
	if (ctx.cr6.eq) goto loc_833110FC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x833110fc
	if (ctx.cr6.eq) goto loc_833110FC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8330d2f8
	ctx.lr = 0x833110D4;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27272
	ctx.r4.s64 = ctx.r10.s64 + 27272;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,94
	ctx.r6.s64 = 94;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,376(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x833110FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_833110FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83311108"))) PPC_WEAK_FUNC(sub_83311108);
PPC_FUNC_IMPL(__imp__sub_83311108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,11852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11852);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331111C"))) PPC_WEAK_FUNC(sub_8331111C);
PPC_FUNC_IMPL(__imp__sub_8331111C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83311120"))) PPC_WEAK_FUNC(sub_83311120);
PPC_FUNC_IMPL(__imp__sub_83311120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,11848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11848);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83311134"))) PPC_WEAK_FUNC(sub_83311134);
PPC_FUNC_IMPL(__imp__sub_83311134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83311138"))) PPC_WEAK_FUNC(sub_83311138);
PPC_FUNC_IMPL(__imp__sub_83311138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,11844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11844);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331114C"))) PPC_WEAK_FUNC(sub_8331114C);
PPC_FUNC_IMPL(__imp__sub_8331114C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83311150"))) PPC_WEAK_FUNC(sub_83311150);
PPC_FUNC_IMPL(__imp__sub_83311150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83311164"))) PPC_WEAK_FUNC(sub_83311164);
PPC_FUNC_IMPL(__imp__sub_83311164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83311168"))) PPC_WEAK_FUNC(sub_83311168);
PPC_FUNC_IMPL(__imp__sub_83311168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331117C"))) PPC_WEAK_FUNC(sub_8331117C);
PPC_FUNC_IMPL(__imp__sub_8331117C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83311180"))) PPC_WEAK_FUNC(sub_83311180);
PPC_FUNC_IMPL(__imp__sub_83311180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83311194"))) PPC_WEAK_FUNC(sub_83311194);
PPC_FUNC_IMPL(__imp__sub_83311194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83311198"))) PPC_WEAK_FUNC(sub_83311198);
PPC_FUNC_IMPL(__imp__sub_83311198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833111AC"))) PPC_WEAK_FUNC(sub_833111AC);
PPC_FUNC_IMPL(__imp__sub_833111AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833111B0"))) PPC_WEAK_FUNC(sub_833111B0);
PPC_FUNC_IMPL(__imp__sub_833111B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833111C4"))) PPC_WEAK_FUNC(sub_833111C4);
PPC_FUNC_IMPL(__imp__sub_833111C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833111C8"))) PPC_WEAK_FUNC(sub_833111C8);
PPC_FUNC_IMPL(__imp__sub_833111C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833111DC"))) PPC_WEAK_FUNC(sub_833111DC);
PPC_FUNC_IMPL(__imp__sub_833111DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833111E0"))) PPC_WEAK_FUNC(sub_833111E0);
PPC_FUNC_IMPL(__imp__sub_833111E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,11840(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11840);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833111F4"))) PPC_WEAK_FUNC(sub_833111F4);
PPC_FUNC_IMPL(__imp__sub_833111F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833111F8"))) PPC_WEAK_FUNC(sub_833111F8);
PPC_FUNC_IMPL(__imp__sub_833111F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331120C"))) PPC_WEAK_FUNC(sub_8331120C);
PPC_FUNC_IMPL(__imp__sub_8331120C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83311210"))) PPC_WEAK_FUNC(sub_83311210);
PPC_FUNC_IMPL(__imp__sub_83311210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83311224"))) PPC_WEAK_FUNC(sub_83311224);
PPC_FUNC_IMPL(__imp__sub_83311224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83311228"))) PPC_WEAK_FUNC(sub_83311228);
PPC_FUNC_IMPL(__imp__sub_83311228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331123C"))) PPC_WEAK_FUNC(sub_8331123C);
PPC_FUNC_IMPL(__imp__sub_8331123C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83311240"))) PPC_WEAK_FUNC(sub_83311240);
PPC_FUNC_IMPL(__imp__sub_83311240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,11836(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11836);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83311254"))) PPC_WEAK_FUNC(sub_83311254);
PPC_FUNC_IMPL(__imp__sub_83311254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83311258"))) PPC_WEAK_FUNC(sub_83311258);
PPC_FUNC_IMPL(__imp__sub_83311258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331126C"))) PPC_WEAK_FUNC(sub_8331126C);
PPC_FUNC_IMPL(__imp__sub_8331126C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83311270"))) PPC_WEAK_FUNC(sub_83311270);
PPC_FUNC_IMPL(__imp__sub_83311270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83311284"))) PPC_WEAK_FUNC(sub_83311284);
PPC_FUNC_IMPL(__imp__sub_83311284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83311288"))) PPC_WEAK_FUNC(sub_83311288);
PPC_FUNC_IMPL(__imp__sub_83311288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83311290;
	__savegprlr_27(ctx, base);
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
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x833112d0
	if (!ctx.cr6.eq) goto loc_833112D0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,4098
	ctx.r7.s64 = 4098;
	// bl 0x8320cf10
	ctx.lr = 0x833112D0;
	sub_8320CF10(ctx, base);
loc_833112D0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,86
	ctx.r4.s64 = 86;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d94b8
	ctx.lr = 0x833112E0;
	sub_832D94B8(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83311328
	if (ctx.cr6.eq) goto loc_83311328;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83311328
	if (ctx.cr6.eq) goto loc_83311328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8330d2f8
	ctx.lr = 0x833112FC;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27300
	ctx.r4.s64 = ctx.r10.s64 + 27300;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,51
	ctx.r6.s64 = 51;
	// lwz r5,204(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x83311328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83311328:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83311334"))) PPC_WEAK_FUNC(sub_83311334);
PPC_FUNC_IMPL(__imp__sub_83311334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83311338"))) PPC_WEAK_FUNC(sub_83311338);
PPC_FUNC_IMPL(__imp__sub_83311338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83311340;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83311380
	if (!ctx.cr6.eq) goto loc_83311380;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,4133
	ctx.r7.s64 = 4133;
	// bl 0x8320cf10
	ctx.lr = 0x83311380;
	sub_8320CF10(ctx, base);
loc_83311380:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x83311390;
	sub_83214F50(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// stfs f1,0(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// beq cr6,0x833113e8
	if (ctx.cr6.eq) goto loc_833113E8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x833113e8
	if (ctx.cr6.eq) goto loc_833113E8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8330d2f8
	ctx.lr = 0x833113C0;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27272
	ctx.r4.s64 = ctx.r10.s64 + 27272;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,54
	ctx.r6.s64 = 54;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,216(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x833113E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_833113E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833113F4"))) PPC_WEAK_FUNC(sub_833113F4);
PPC_FUNC_IMPL(__imp__sub_833113F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833113F8"))) PPC_WEAK_FUNC(sub_833113F8);
PPC_FUNC_IMPL(__imp__sub_833113F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83311400;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8331143c
	if (!ctx.cr6.eq) goto loc_8331143C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,4163
	ctx.r7.s64 = 4163;
	// bl 0x8320cf10
	ctx.lr = 0x8331143C;
	sub_8320CF10(ctx, base);
loc_8331143C:
	// li r4,166
	ctx.r4.s64 = 166;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6f28
	ctx.lr = 0x83311448;
	sub_832D6F28(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8331148c
	if (ctx.cr6.eq) goto loc_8331148C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8331148c
	if (ctx.cr6.eq) goto loc_8331148C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8330d2f8
	ctx.lr = 0x83311464;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27272
	ctx.r4.s64 = ctx.r10.s64 + 27272;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8331148C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8331148C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83311498"))) PPC_WEAK_FUNC(sub_83311498);
PPC_FUNC_IMPL(__imp__sub_83311498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x833114A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x833114dc
	if (!ctx.cr6.eq) goto loc_833114DC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,4195
	ctx.r7.s64 = 4195;
	// bl 0x8320cf10
	ctx.lr = 0x833114DC;
	sub_8320CF10(ctx, base);
loc_833114DC:
	// li r4,167
	ctx.r4.s64 = 167;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6f28
	ctx.lr = 0x833114E8;
	sub_832D6F28(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8331152c
	if (ctx.cr6.eq) goto loc_8331152C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8331152c
	if (ctx.cr6.eq) goto loc_8331152C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8330d2f8
	ctx.lr = 0x83311504;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27272
	ctx.r4.s64 = ctx.r10.s64 + 27272;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,75
	ctx.r6.s64 = 75;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,300(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8331152C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8331152C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83311538"))) PPC_WEAK_FUNC(sub_83311538);
PPC_FUNC_IMPL(__imp__sub_83311538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83311540;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8331157c
	if (!ctx.cr6.eq) goto loc_8331157C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,4225
	ctx.r7.s64 = 4225;
	// bl 0x8320cf10
	ctx.lr = 0x8331157C;
	sub_8320CF10(ctx, base);
loc_8331157C:
	// li r4,168
	ctx.r4.s64 = 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6f28
	ctx.lr = 0x83311588;
	sub_832D6F28(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x833115cc
	if (ctx.cr6.eq) goto loc_833115CC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x833115cc
	if (ctx.cr6.eq) goto loc_833115CC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8330d2f8
	ctx.lr = 0x833115A4;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27272
	ctx.r4.s64 = ctx.r10.s64 + 27272;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,25
	ctx.r6.s64 = 25;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,100(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x833115CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_833115CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833115D8"))) PPC_WEAK_FUNC(sub_833115D8);
PPC_FUNC_IMPL(__imp__sub_833115D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x833115E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8331161c
	if (!ctx.cr6.eq) goto loc_8331161C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,4257
	ctx.r7.s64 = 4257;
	// bl 0x8320cf10
	ctx.lr = 0x8331161C;
	sub_8320CF10(ctx, base);
loc_8331161C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f1,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,0(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// beq cr6,0x8331166c
	if (ctx.cr6.eq) goto loc_8331166C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8331166c
	if (ctx.cr6.eq) goto loc_8331166C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8330d2f8
	ctx.lr = 0x83311640;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27300
	ctx.r4.s64 = ctx.r10.s64 + 27300;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// lwz r5,256(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8331166C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8331166C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83311678"))) PPC_WEAK_FUNC(sub_83311678);
PPC_FUNC_IMPL(__imp__sub_83311678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83311680;
	__savegprlr_27(ctx, base);
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
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x833116c0
	if (!ctx.cr6.eq) goto loc_833116C0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,4293
	ctx.r7.s64 = 4293;
	// bl 0x8320cf10
	ctx.lr = 0x833116C0;
	sub_8320CF10(ctx, base);
loc_833116C0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d94b8
	ctx.lr = 0x833116D0;
	sub_832D94B8(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83311718
	if (ctx.cr6.eq) goto loc_83311718;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83311718
	if (ctx.cr6.eq) goto loc_83311718;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8330d2f8
	ctx.lr = 0x833116EC;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27300
	ctx.r4.s64 = ctx.r10.s64 + 27300;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,65
	ctx.r6.s64 = 65;
	// lwz r5,260(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x83311718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83311718:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83311724"))) PPC_WEAK_FUNC(sub_83311724);
PPC_FUNC_IMPL(__imp__sub_83311724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83311728"))) PPC_WEAK_FUNC(sub_83311728);
PPC_FUNC_IMPL(__imp__sub_83311728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83311730;
	__savegprlr_27(ctx, base);
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
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83311770
	if (!ctx.cr6.eq) goto loc_83311770;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,4327
	ctx.r7.s64 = 4327;
	// bl 0x8320cf10
	ctx.lr = 0x83311770;
	sub_8320CF10(ctx, base);
loc_83311770:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d94b8
	ctx.lr = 0x83311780;
	sub_832D94B8(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x833117c8
	if (ctx.cr6.eq) goto loc_833117C8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x833117c8
	if (ctx.cr6.eq) goto loc_833117C8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8330d2f8
	ctx.lr = 0x8331179C;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27300
	ctx.r4.s64 = ctx.r10.s64 + 27300;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,66
	ctx.r6.s64 = 66;
	// lwz r5,264(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x833117C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_833117C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833117D4"))) PPC_WEAK_FUNC(sub_833117D4);
PPC_FUNC_IMPL(__imp__sub_833117D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833117D8"))) PPC_WEAK_FUNC(sub_833117D8);
PPC_FUNC_IMPL(__imp__sub_833117D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x833117E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// bne cr6,0x83311820
	if (!ctx.cr6.eq) goto loc_83311820;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,4363
	ctx.r7.s64 = 4363;
	// bl 0x8320cf10
	ctx.lr = 0x83311820;
	sub_8320CF10(ctx, base);
loc_83311820:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,89
	ctx.r4.s64 = 89;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x83311830;
	sub_83214F50(ctx, base);
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// rlwimi r11,r3,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// beq cr6,0x83311884
	if (ctx.cr6.eq) goto loc_83311884;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83311884
	if (ctx.cr6.eq) goto loc_83311884;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8330d2f8
	ctx.lr = 0x83311858;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27300
	ctx.r4.s64 = ctx.r10.s64 + 27300;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,62
	ctx.r6.s64 = 62;
	// lwz r5,248(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83311884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83311884:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83311890"))) PPC_WEAK_FUNC(sub_83311890);
PPC_FUNC_IMPL(__imp__sub_83311890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83311898;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lis r11,19200
	ctx.r11.s64 = 1258291200;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x833118f8
	if (ctx.cr6.eq) goto loc_833118F8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x833118f8
	if (ctx.cr6.eq) goto loc_833118F8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8330d2f8
	ctx.lr = 0x833118CC;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27300
	ctx.r4.s64 = ctx.r10.s64 + 27300;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,88
	ctx.r6.s64 = 88;
	// lwz r5,352(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x833118F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_833118F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83311904"))) PPC_WEAK_FUNC(sub_83311904);
PPC_FUNC_IMPL(__imp__sub_83311904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83311908"))) PPC_WEAK_FUNC(sub_83311908);
PPC_FUNC_IMPL(__imp__sub_83311908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x83311910;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,26952
	ctx.r27.s64 = ctx.r10.s64 + 26952;
	// bne cr6,0x8331195c
	if (!ctx.cr6.eq) goto loc_8331195C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-20840
	ctx.r5.s64 = ctx.r11.s64 + -20840;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,4437
	ctx.r7.s64 = 4437;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8331195C;
	sub_8320CF10(ctx, base);
loc_8331195C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x8331196C;
	sub_83214F50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x83311980;
	sub_83214F50(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r10,-17632
	ctx.r11.s64 = ctx.r10.s64 + -17632;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// beq cr6,0x833119e0
	if (ctx.cr6.eq) goto loc_833119E0;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// beq cr6,0x833119e0
	if (ctx.cr6.eq) goto loc_833119E0;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x833119d8
	if (ctx.cr6.eq) goto loc_833119D8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x833119d8
	if (ctx.cr6.eq) goto loc_833119D8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,20536
	ctx.r5.s64 = ctx.r11.s64 + 20536;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,4450
	ctx.r7.s64 = 4450;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833119D8;
	sub_8320CF10(ctx, base);
loc_833119D8:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x833119e4
	goto loc_833119E4;
loc_833119E0:
	// li r11,2
	ctx.r11.s64 = 2;
loc_833119E4:
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// oris r11,r11,75
	ctx.r11.u64 = ctx.r11.u64 | 4915200;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// beq cr6,0x83311a40
	if (ctx.cr6.eq) goto loc_83311A40;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x83311a40
	if (ctx.cr6.eq) goto loc_83311A40;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8330d2f8
	ctx.lr = 0x83311A14;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27300
	ctx.r4.s64 = ctx.r10.s64 + 27300;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,89
	ctx.r6.s64 = 89;
	// lwz r5,356(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83311A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83311A40:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83311A4C"))) PPC_WEAK_FUNC(sub_83311A4C);
PPC_FUNC_IMPL(__imp__sub_83311A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83311A50"))) PPC_WEAK_FUNC(sub_83311A50);
PPC_FUNC_IMPL(__imp__sub_83311A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83311A58;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// bne cr6,0x83311a98
	if (!ctx.cr6.eq) goto loc_83311A98;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,4490
	ctx.r7.s64 = 4490;
	// bl 0x8320cf10
	ctx.lr = 0x83311A98;
	sub_8320CF10(ctx, base);
loc_83311A98:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x83311AA8;
	sub_83214F50(ctx, base);
	// oris r11,r3,19200
	ctx.r11.u64 = ctx.r3.u64 | 1258291200;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// beq cr6,0x83311af8
	if (ctx.cr6.eq) goto loc_83311AF8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83311af8
	if (ctx.cr6.eq) goto loc_83311AF8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8330d2f8
	ctx.lr = 0x83311ACC;
	sub_8330D2F8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18080
	ctx.r11.s64 = ctx.r11.s64 + -18080;
	// addi r4,r10,27300
	ctx.r4.s64 = ctx.r10.s64 + 27300;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,90
	ctx.r6.s64 = 90;
	// lwz r5,360(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83311AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83311AF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83311B04"))) PPC_WEAK_FUNC(sub_83311B04);
PPC_FUNC_IMPL(__imp__sub_83311B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

