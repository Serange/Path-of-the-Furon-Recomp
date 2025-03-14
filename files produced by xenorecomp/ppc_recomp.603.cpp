#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83374B10"))) PPC_WEAK_FUNC(sub_83374B10);
PPC_FUNC_IMPL(__imp__sub_83374B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15040
	ctx.r3.s64 = ctx.r11.s64 + -15040;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83374B1C"))) PPC_WEAK_FUNC(sub_83374B1C);
PPC_FUNC_IMPL(__imp__sub_83374B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374B20"))) PPC_WEAK_FUNC(sub_83374B20);
PPC_FUNC_IMPL(__imp__sub_83374B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15016
	ctx.r3.s64 = ctx.r11.s64 + -15016;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83374B2C"))) PPC_WEAK_FUNC(sub_83374B2C);
PPC_FUNC_IMPL(__imp__sub_83374B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374B30"))) PPC_WEAK_FUNC(sub_83374B30);
PPC_FUNC_IMPL(__imp__sub_83374B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-14992
	ctx.r3.s64 = ctx.r11.s64 + -14992;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83374B3C"))) PPC_WEAK_FUNC(sub_83374B3C);
PPC_FUNC_IMPL(__imp__sub_83374B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374B40"))) PPC_WEAK_FUNC(sub_83374B40);
PPC_FUNC_IMPL(__imp__sub_83374B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-14968
	ctx.r3.s64 = ctx.r11.s64 + -14968;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83374B4C"))) PPC_WEAK_FUNC(sub_83374B4C);
PPC_FUNC_IMPL(__imp__sub_83374B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374B50"))) PPC_WEAK_FUNC(sub_83374B50);
PPC_FUNC_IMPL(__imp__sub_83374B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-14952
	ctx.r3.s64 = ctx.r11.s64 + -14952;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83374B5C"))) PPC_WEAK_FUNC(sub_83374B5C);
PPC_FUNC_IMPL(__imp__sub_83374B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374B60"))) PPC_WEAK_FUNC(sub_83374B60);
PPC_FUNC_IMPL(__imp__sub_83374B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-14872
	ctx.r3.s64 = ctx.r11.s64 + -14872;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83374B6C"))) PPC_WEAK_FUNC(sub_83374B6C);
PPC_FUNC_IMPL(__imp__sub_83374B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374B70"))) PPC_WEAK_FUNC(sub_83374B70);
PPC_FUNC_IMPL(__imp__sub_83374B70) {
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
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// addi r4,r11,3272
	ctx.r4.s64 = ctx.r11.s64 + 3272;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// addi r30,r31,-14684
	ctx.r30.s64 = ctx.r31.s64 + -14684;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-19416
	ctx.r5.s64 = ctx.r8.s64 + -19416;
	// addi r4,r7,-19384
	ctx.r4.s64 = ctx.r7.s64 + -19384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,2736
	ctx.r10.s64 = ctx.r10.s64 + 2736;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83374BCC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,3080
	ctx.r10.s64 = ctx.r10.s64 + 3080;
	// addi r9,r9,3280
	ctx.r9.s64 = ctx.r9.s64 + 3280;
	// stw r11,-14684(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14684, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-14792
	ctx.r3.s64 = ctx.r3.s64 + -14792;
	// bl 0x82cb0ae8
	ctx.lr = 0x83374BFC;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83374C14"))) PPC_WEAK_FUNC(sub_83374C14);
PPC_FUNC_IMPL(__imp__sub_83374C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374C18"))) PPC_WEAK_FUNC(sub_83374C18);
PPC_FUNC_IMPL(__imp__sub_83374C18) {
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
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// addi r4,r11,3272
	ctx.r4.s64 = ctx.r11.s64 + 3272;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// addi r30,r31,-14592
	ctx.r30.s64 = ctx.r31.s64 + -14592;
	// addi r6,r9,-19348
	ctx.r6.s64 = ctx.r9.s64 + -19348;
	// addi r5,r8,-19312
	ctx.r5.s64 = ctx.r8.s64 + -19312;
	// addi r4,r7,-19280
	ctx.r4.s64 = ctx.r7.s64 + -19280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,1608
	ctx.r10.s64 = ctx.r10.s64 + 1608;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83374C74;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,1952
	ctx.r10.s64 = ctx.r10.s64 + 1952;
	// addi r9,r9,2144
	ctx.r9.s64 = ctx.r9.s64 + 2144;
	// stw r11,-14592(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14592, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-14704
	ctx.r3.s64 = ctx.r3.s64 + -14704;
	// bl 0x82cb0ae8
	ctx.lr = 0x83374CA4;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83374CBC"))) PPC_WEAK_FUNC(sub_83374CBC);
PPC_FUNC_IMPL(__imp__sub_83374CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374CC0"))) PPC_WEAK_FUNC(sub_83374CC0);
PPC_FUNC_IMPL(__imp__sub_83374CC0) {
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
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// addi r4,r11,3272
	ctx.r4.s64 = ctx.r11.s64 + 3272;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// addi r30,r31,-14500
	ctx.r30.s64 = ctx.r31.s64 + -14500;
	// addi r6,r9,-19236
	ctx.r6.s64 = ctx.r9.s64 + -19236;
	// addi r5,r8,-19312
	ctx.r5.s64 = ctx.r8.s64 + -19312;
	// addi r4,r7,-19204
	ctx.r4.s64 = ctx.r7.s64 + -19204;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,592
	ctx.r10.s64 = ctx.r10.s64 + 592;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83374D1C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,1312
	ctx.r10.s64 = ctx.r10.s64 + 1312;
	// addi r9,r9,1600
	ctx.r9.s64 = ctx.r9.s64 + 1600;
	// stw r11,-14500(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14500, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-14616
	ctx.r3.s64 = ctx.r3.s64 + -14616;
	// bl 0x82cb0ae8
	ctx.lr = 0x83374D4C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83374D64"))) PPC_WEAK_FUNC(sub_83374D64);
PPC_FUNC_IMPL(__imp__sub_83374D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374D68"))) PPC_WEAK_FUNC(sub_83374D68);
PPC_FUNC_IMPL(__imp__sub_83374D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// lis r10,-31887
	ctx.r10.s64 = -2089746432;
	// addi r11,r11,18592
	ctx.r11.s64 = ctx.r11.s64 + 18592;
	// stw r11,25576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25576, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83374D7C"))) PPC_WEAK_FUNC(sub_83374D7C);
PPC_FUNC_IMPL(__imp__sub_83374D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374D80"))) PPC_WEAK_FUNC(sub_83374D80);
PPC_FUNC_IMPL(__imp__sub_83374D80) {
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
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// addi r4,r11,3272
	ctx.r4.s64 = ctx.r11.s64 + 3272;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// addi r30,r31,-14404
	ctx.r30.s64 = ctx.r31.s64 + -14404;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-15408
	ctx.r5.s64 = ctx.r8.s64 + -15408;
	// addi r4,r7,-15352
	ctx.r4.s64 = ctx.r7.s64 + -15352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-3760
	ctx.r10.s64 = ctx.r10.s64 + -3760;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83374DDC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32198
	ctx.r9.s64 = -2110128128;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-3600
	ctx.r10.s64 = ctx.r10.s64 + -3600;
	// addi r9,r9,-3480
	ctx.r9.s64 = ctx.r9.s64 + -3480;
	// stw r11,-14404(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14404, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-14368
	ctx.r3.s64 = ctx.r3.s64 + -14368;
	// bl 0x82cb0ae8
	ctx.lr = 0x83374E0C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_83374E24"))) PPC_WEAK_FUNC(sub_83374E24);
PPC_FUNC_IMPL(__imp__sub_83374E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374E28"))) PPC_WEAK_FUNC(sub_83374E28);
PPC_FUNC_IMPL(__imp__sub_83374E28) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,-14312
	ctx.r3.s64 = ctx.r11.s64 + -14312;
	// bl 0x823a1c10
	ctx.lr = 0x83374E40;
	sub_823A1C10(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r3,r10,-14280
	ctx.r3.s64 = ctx.r10.s64 + -14280;
	// bl 0x82cb0ae8
	ctx.lr = 0x83374E4C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83374E5C"))) PPC_WEAK_FUNC(sub_83374E5C);
PPC_FUNC_IMPL(__imp__sub_83374E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374E60"))) PPC_WEAK_FUNC(sub_83374E60);
PPC_FUNC_IMPL(__imp__sub_83374E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83374E68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r11,-14288
	ctx.r11.s64 = ctx.r11.s64 + -14288;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r11,-15196
	ctx.r28.s64 = ctx.r11.s64 + -15196;
loc_83374E88:
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// addi r3,r31,-12
	ctx.r3.s64 = ctx.r31.s64 + -12;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r28,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r28.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// bl 0x82832788
	ctx.lr = 0x83374EB8;
	sub_82832788(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// bge 0x83374e88
	if (!ctx.cr0.lt) goto loc_83374E88;
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-14240
	ctx.r3.s64 = ctx.r11.s64 + -14240;
	// bl 0x82cb0ae8
	ctx.lr = 0x83374ED0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83374ED8"))) PPC_WEAK_FUNC(sub_83374ED8);
PPC_FUNC_IMPL(__imp__sub_83374ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-14160
	ctx.r3.s64 = ctx.r11.s64 + -14160;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83374EE4"))) PPC_WEAK_FUNC(sub_83374EE4);
PPC_FUNC_IMPL(__imp__sub_83374EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374EE8"))) PPC_WEAK_FUNC(sub_83374EE8);
PPC_FUNC_IMPL(__imp__sub_83374EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-13928
	ctx.r3.s64 = ctx.r11.s64 + -13928;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83374EF4"))) PPC_WEAK_FUNC(sub_83374EF4);
PPC_FUNC_IMPL(__imp__sub_83374EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374EF8"))) PPC_WEAK_FUNC(sub_83374EF8);
PPC_FUNC_IMPL(__imp__sub_83374EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-13848
	ctx.r3.s64 = ctx.r11.s64 + -13848;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83374F04"))) PPC_WEAK_FUNC(sub_83374F04);
PPC_FUNC_IMPL(__imp__sub_83374F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374F08"))) PPC_WEAK_FUNC(sub_83374F08);
PPC_FUNC_IMPL(__imp__sub_83374F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-13816
	ctx.r3.s64 = ctx.r11.s64 + -13816;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83374F14"))) PPC_WEAK_FUNC(sub_83374F14);
PPC_FUNC_IMPL(__imp__sub_83374F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374F18"))) PPC_WEAK_FUNC(sub_83374F18);
PPC_FUNC_IMPL(__imp__sub_83374F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r11,-18064
	ctx.r9.s64 = ctx.r11.s64 + -18064;
	// addi r8,r10,-14176
	ctx.r8.s64 = ctx.r10.s64 + -14176;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83374F34"))) PPC_WEAK_FUNC(sub_83374F34);
PPC_FUNC_IMPL(__imp__sub_83374F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83374F38"))) PPC_WEAK_FUNC(sub_83374F38);
PPC_FUNC_IMPL(__imp__sub_83374F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-14144
	ctx.r9.s64 = ctx.r11.s64 + -14144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83374F68"))) PPC_WEAK_FUNC(sub_83374F68);
PPC_FUNC_IMPL(__imp__sub_83374F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,7967
	ctx.r10.s64 = 522125312;
	// lis r9,7967
	ctx.r9.s64 = 522125312;
	// lis r8,7967
	ctx.r8.s64 = 522125312;
	// lis r7,7967
	ctx.r7.s64 = 522125312;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-14128
	ctx.r5.s64 = ctx.r11.s64 + -14128;
	// ori r4,r10,7948
	ctx.r4.u64 = ctx.r10.u64 | 7948;
	// ori r3,r9,7949
	ctx.r3.u64 = ctx.r9.u64 | 7949;
	// ori r11,r8,7950
	ctx.r11.u64 = ctx.r8.u64 | 7950;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,7951
	ctx.r10.u64 = ctx.r7.u64 | 7951;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83374FB0"))) PPC_WEAK_FUNC(sub_83374FB0);
PPC_FUNC_IMPL(__imp__sub_83374FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,7967
	ctx.r10.s64 = 522125312;
	// lis r9,7967
	ctx.r9.s64 = 522125312;
	// lis r8,7967
	ctx.r8.s64 = 522125312;
	// lis r7,7967
	ctx.r7.s64 = 522125312;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-14160
	ctx.r5.s64 = ctx.r11.s64 + -14160;
	// ori r4,r10,7951
	ctx.r4.u64 = ctx.r10.u64 | 7951;
	// ori r3,r9,7950
	ctx.r3.u64 = ctx.r9.u64 | 7950;
	// ori r11,r8,7949
	ctx.r11.u64 = ctx.r8.u64 | 7949;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,7948
	ctx.r10.u64 = ctx.r7.u64 | 7948;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83374FF8"))) PPC_WEAK_FUNC(sub_83374FF8);
PPC_FUNC_IMPL(__imp__sub_83374FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-13656
	ctx.r3.s64 = ctx.r11.s64 + -13656;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83375004"))) PPC_WEAK_FUNC(sub_83375004);
PPC_FUNC_IMPL(__imp__sub_83375004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83375008"))) PPC_WEAK_FUNC(sub_83375008);
PPC_FUNC_IMPL(__imp__sub_83375008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-13640
	ctx.r3.s64 = ctx.r11.s64 + -13640;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83375014"))) PPC_WEAK_FUNC(sub_83375014);
PPC_FUNC_IMPL(__imp__sub_83375014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83375018"))) PPC_WEAK_FUNC(sub_83375018);
PPC_FUNC_IMPL(__imp__sub_83375018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-13544
	ctx.r3.s64 = ctx.r11.s64 + -13544;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83375024"))) PPC_WEAK_FUNC(sub_83375024);
PPC_FUNC_IMPL(__imp__sub_83375024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83375028"))) PPC_WEAK_FUNC(sub_83375028);
PPC_FUNC_IMPL(__imp__sub_83375028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-13448
	ctx.r3.s64 = ctx.r11.s64 + -13448;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83375034"))) PPC_WEAK_FUNC(sub_83375034);
PPC_FUNC_IMPL(__imp__sub_83375034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83375038"))) PPC_WEAK_FUNC(sub_83375038);
PPC_FUNC_IMPL(__imp__sub_83375038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-13352
	ctx.r3.s64 = ctx.r11.s64 + -13352;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83375044"))) PPC_WEAK_FUNC(sub_83375044);
PPC_FUNC_IMPL(__imp__sub_83375044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83375048"))) PPC_WEAK_FUNC(sub_83375048);
PPC_FUNC_IMPL(__imp__sub_83375048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-13256
	ctx.r3.s64 = ctx.r11.s64 + -13256;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83375054"))) PPC_WEAK_FUNC(sub_83375054);
PPC_FUNC_IMPL(__imp__sub_83375054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83375058"))) PPC_WEAK_FUNC(sub_83375058);
PPC_FUNC_IMPL(__imp__sub_83375058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-13160
	ctx.r3.s64 = ctx.r11.s64 + -13160;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83375064"))) PPC_WEAK_FUNC(sub_83375064);
PPC_FUNC_IMPL(__imp__sub_83375064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83375068"))) PPC_WEAK_FUNC(sub_83375068);
PPC_FUNC_IMPL(__imp__sub_83375068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-13064
	ctx.r3.s64 = ctx.r11.s64 + -13064;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83375074"))) PPC_WEAK_FUNC(sub_83375074);
PPC_FUNC_IMPL(__imp__sub_83375074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83375078"))) PPC_WEAK_FUNC(sub_83375078);
PPC_FUNC_IMPL(__imp__sub_83375078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-12968
	ctx.r3.s64 = ctx.r11.s64 + -12968;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83375084"))) PPC_WEAK_FUNC(sub_83375084);
PPC_FUNC_IMPL(__imp__sub_83375084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83375088"))) PPC_WEAK_FUNC(sub_83375088);
PPC_FUNC_IMPL(__imp__sub_83375088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-12872
	ctx.r3.s64 = ctx.r11.s64 + -12872;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83375094"))) PPC_WEAK_FUNC(sub_83375094);
PPC_FUNC_IMPL(__imp__sub_83375094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83375098"))) PPC_WEAK_FUNC(sub_83375098);
PPC_FUNC_IMPL(__imp__sub_83375098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-12776
	ctx.r3.s64 = ctx.r11.s64 + -12776;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833750A4"))) PPC_WEAK_FUNC(sub_833750A4);
PPC_FUNC_IMPL(__imp__sub_833750A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833750A8"))) PPC_WEAK_FUNC(sub_833750A8);
PPC_FUNC_IMPL(__imp__sub_833750A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833750e8
	if (!ctx.cr6.eq) goto loc_833750E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833750DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833750dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833750DC;
loc_833750E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,260(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 260);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375118
	if (ctx.cr6.eq) goto loc_83375118;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,65
	ctx.r11.s64 = 65;
	// lwz r10,20632(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20632);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,260(r8)
	PPC_STORE_U32(ctx.r8.u32 + 260, ctx.r10.u32);
	// blr 
	return;
loc_83375118:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20632);
	// stw r11,260(r8)
	PPC_STORE_U32(ctx.r8.u32 + 260, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83375128"))) PPC_WEAK_FUNC(sub_83375128);
PPC_FUNC_IMPL(__imp__sub_83375128) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83375168
	if (!ctx.cr6.eq) goto loc_83375168;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337515C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337515c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337515C;
loc_83375168:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375198
	if (ctx.cr6.eq) goto loc_83375198;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,20636(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20636);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83375198:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20636);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833751A8"))) PPC_WEAK_FUNC(sub_833751A8);
PPC_FUNC_IMPL(__imp__sub_833751A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r9,r11,26648
	ctx.r9.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833751e8
	if (!ctx.cr6.eq) goto loc_833751E8;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r8,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r8.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r8,r7,-31560
	ctx.r8.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833751DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833751dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833751DC;
loc_833751E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r8,r10,-31560
	ctx.r8.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x83375218
	if (ctx.cr6.eq) goto loc_83375218;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,20640(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20640);
	// stw r11,-31468(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31468, ctx.r11.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_83375218:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20640);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83375228"))) PPC_WEAK_FUNC(sub_83375228);
PPC_FUNC_IMPL(__imp__sub_83375228) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83375268
	if (!ctx.cr6.eq) goto loc_83375268;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337525C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337525c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337525C;
loc_83375268:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375298
	if (ctx.cr6.eq) goto loc_83375298;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,20644(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20644);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// blr 
	return;
loc_83375298:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20644);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833752A8"))) PPC_WEAK_FUNC(sub_833752A8);
PPC_FUNC_IMPL(__imp__sub_833752A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833752e8
	if (!ctx.cr6.eq) goto loc_833752E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833752DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833752dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833752DC;
loc_833752E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,288(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 288);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375318
	if (ctx.cr6.eq) goto loc_83375318;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,72
	ctx.r11.s64 = 72;
	// lwz r10,20648(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20648);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,288(r8)
	PPC_STORE_U32(ctx.r8.u32 + 288, ctx.r10.u32);
	// blr 
	return;
loc_83375318:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20648);
	// stw r11,288(r8)
	PPC_STORE_U32(ctx.r8.u32 + 288, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83375328"))) PPC_WEAK_FUNC(sub_83375328);
PPC_FUNC_IMPL(__imp__sub_83375328) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83375368
	if (!ctx.cr6.eq) goto loc_83375368;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337535C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337535c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337535C;
loc_83375368:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,292(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 292);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375398
	if (ctx.cr6.eq) goto loc_83375398;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,73
	ctx.r11.s64 = 73;
	// lwz r10,20652(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20652);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 292, ctx.r10.u32);
	// blr 
	return;
loc_83375398:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20652);
	// stw r11,292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 292, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833753A8"))) PPC_WEAK_FUNC(sub_833753A8);
PPC_FUNC_IMPL(__imp__sub_833753A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833753e8
	if (!ctx.cr6.eq) goto loc_833753E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833753DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833753dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833753DC;
loc_833753E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,324(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 324);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375418
	if (ctx.cr6.eq) goto loc_83375418;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,81
	ctx.r11.s64 = 81;
	// lwz r10,20656(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20656);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,324(r8)
	PPC_STORE_U32(ctx.r8.u32 + 324, ctx.r10.u32);
	// blr 
	return;
loc_83375418:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20656);
	// stw r11,324(r8)
	PPC_STORE_U32(ctx.r8.u32 + 324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83375428"))) PPC_WEAK_FUNC(sub_83375428);
PPC_FUNC_IMPL(__imp__sub_83375428) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83375468
	if (!ctx.cr6.eq) goto loc_83375468;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337545C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337545c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337545C;
loc_83375468:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,72(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375498
	if (ctx.cr6.eq) goto loc_83375498;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,18
	ctx.r11.s64 = 18;
	// lwz r10,20660(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20660);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,72(r8)
	PPC_STORE_U32(ctx.r8.u32 + 72, ctx.r10.u32);
	// blr 
	return;
loc_83375498:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20660);
	// stw r11,72(r8)
	PPC_STORE_U32(ctx.r8.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833754A8"))) PPC_WEAK_FUNC(sub_833754A8);
PPC_FUNC_IMPL(__imp__sub_833754A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833754e8
	if (!ctx.cr6.eq) goto loc_833754E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833754DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833754dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833754DC;
loc_833754E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,104(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375518
	if (ctx.cr6.eq) goto loc_83375518;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,26
	ctx.r11.s64 = 26;
	// lwz r10,20664(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20664);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, ctx.r10.u32);
	// blr 
	return;
loc_83375518:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20664);
	// stw r11,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83375528"))) PPC_WEAK_FUNC(sub_83375528);
PPC_FUNC_IMPL(__imp__sub_83375528) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83375568
	if (!ctx.cr6.eq) goto loc_83375568;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337555C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337555c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337555C;
loc_83375568:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,64(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375598
	if (ctx.cr6.eq) goto loc_83375598;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r10,20668(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20668);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,64(r8)
	PPC_STORE_U32(ctx.r8.u32 + 64, ctx.r10.u32);
	// blr 
	return;
loc_83375598:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20668);
	// stw r11,64(r8)
	PPC_STORE_U32(ctx.r8.u32 + 64, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833755A8"))) PPC_WEAK_FUNC(sub_833755A8);
PPC_FUNC_IMPL(__imp__sub_833755A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833755e8
	if (!ctx.cr6.eq) goto loc_833755E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833755DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833755dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833755DC;
loc_833755E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,216(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 216);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375618
	if (ctx.cr6.eq) goto loc_83375618;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,54
	ctx.r11.s64 = 54;
	// lwz r10,20672(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20672);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 216, ctx.r10.u32);
	// blr 
	return;
loc_83375618:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20672);
	// stw r11,216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 216, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83375628"))) PPC_WEAK_FUNC(sub_83375628);
PPC_FUNC_IMPL(__imp__sub_83375628) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83375668
	if (!ctx.cr6.eq) goto loc_83375668;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337565C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337565c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337565C;
loc_83375668:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,228(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 228);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375698
	if (ctx.cr6.eq) goto loc_83375698;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,57
	ctx.r11.s64 = 57;
	// lwz r10,20676(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20676);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 228, ctx.r10.u32);
	// blr 
	return;
loc_83375698:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20676);
	// stw r11,228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 228, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833756A8"))) PPC_WEAK_FUNC(sub_833756A8);
PPC_FUNC_IMPL(__imp__sub_833756A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833756e8
	if (!ctx.cr6.eq) goto loc_833756E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833756DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833756dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833756DC;
loc_833756E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,336(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 336);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375718
	if (ctx.cr6.eq) goto loc_83375718;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,84
	ctx.r11.s64 = 84;
	// lwz r10,20680(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20680);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,336(r8)
	PPC_STORE_U32(ctx.r8.u32 + 336, ctx.r10.u32);
	// blr 
	return;
loc_83375718:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20680);
	// stw r11,336(r8)
	PPC_STORE_U32(ctx.r8.u32 + 336, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83375728"))) PPC_WEAK_FUNC(sub_83375728);
PPC_FUNC_IMPL(__imp__sub_83375728) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83375768
	if (!ctx.cr6.eq) goto loc_83375768;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337575C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337575c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337575C;
loc_83375768:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,340(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375798
	if (ctx.cr6.eq) goto loc_83375798;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,85
	ctx.r11.s64 = 85;
	// lwz r10,20684(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20684);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,340(r8)
	PPC_STORE_U32(ctx.r8.u32 + 340, ctx.r10.u32);
	// blr 
	return;
loc_83375798:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20684);
	// stw r11,340(r8)
	PPC_STORE_U32(ctx.r8.u32 + 340, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833757A8"))) PPC_WEAK_FUNC(sub_833757A8);
PPC_FUNC_IMPL(__imp__sub_833757A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833757e8
	if (!ctx.cr6.eq) goto loc_833757E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833757DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833757dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833757DC;
loc_833757E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,348(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 348);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375818
	if (ctx.cr6.eq) goto loc_83375818;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,87
	ctx.r11.s64 = 87;
	// lwz r10,20688(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20688);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,348(r8)
	PPC_STORE_U32(ctx.r8.u32 + 348, ctx.r10.u32);
	// blr 
	return;
loc_83375818:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20688);
	// stw r11,348(r8)
	PPC_STORE_U32(ctx.r8.u32 + 348, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83375828"))) PPC_WEAK_FUNC(sub_83375828);
PPC_FUNC_IMPL(__imp__sub_83375828) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83375868
	if (!ctx.cr6.eq) goto loc_83375868;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337585C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337585c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337585C;
loc_83375868:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,344(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 344);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375898
	if (ctx.cr6.eq) goto loc_83375898;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,86
	ctx.r11.s64 = 86;
	// lwz r10,20692(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20692);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,344(r8)
	PPC_STORE_U32(ctx.r8.u32 + 344, ctx.r10.u32);
	// blr 
	return;
loc_83375898:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20692);
	// stw r11,344(r8)
	PPC_STORE_U32(ctx.r8.u32 + 344, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833758A8"))) PPC_WEAK_FUNC(sub_833758A8);
PPC_FUNC_IMPL(__imp__sub_833758A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833758e8
	if (!ctx.cr6.eq) goto loc_833758E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833758DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833758dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833758DC;
loc_833758E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,256(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 256);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375918
	if (ctx.cr6.eq) goto loc_83375918;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,64
	ctx.r11.s64 = 64;
	// lwz r10,20696(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20696);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 256, ctx.r10.u32);
	// blr 
	return;
loc_83375918:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20696(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20696);
	// stw r11,256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 256, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83375928"))) PPC_WEAK_FUNC(sub_83375928);
PPC_FUNC_IMPL(__imp__sub_83375928) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83375968
	if (!ctx.cr6.eq) goto loc_83375968;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337595C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337595c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337595C;
loc_83375968:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,280(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 280);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375998
	if (ctx.cr6.eq) goto loc_83375998;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,70
	ctx.r11.s64 = 70;
	// lwz r10,20700(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20700);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,280(r8)
	PPC_STORE_U32(ctx.r8.u32 + 280, ctx.r10.u32);
	// blr 
	return;
loc_83375998:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20700(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20700);
	// stw r11,280(r8)
	PPC_STORE_U32(ctx.r8.u32 + 280, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833759A8"))) PPC_WEAK_FUNC(sub_833759A8);
PPC_FUNC_IMPL(__imp__sub_833759A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833759e8
	if (!ctx.cr6.eq) goto loc_833759E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833759DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833759dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833759DC;
loc_833759E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,284(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 284);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375a18
	if (ctx.cr6.eq) goto loc_83375A18;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,71
	ctx.r11.s64 = 71;
	// lwz r10,20704(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20704);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,284(r8)
	PPC_STORE_U32(ctx.r8.u32 + 284, ctx.r10.u32);
	// blr 
	return;
loc_83375A18:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20704);
	// stw r11,284(r8)
	PPC_STORE_U32(ctx.r8.u32 + 284, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83375A28"))) PPC_WEAK_FUNC(sub_83375A28);
PPC_FUNC_IMPL(__imp__sub_83375A28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83375a68
	if (!ctx.cr6.eq) goto loc_83375A68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83375A5C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83375a5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83375A5C;
loc_83375A68:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,180(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 180);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375a98
	if (ctx.cr6.eq) goto loc_83375A98;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,45
	ctx.r11.s64 = 45;
	// lwz r10,20708(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20708);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,180(r8)
	PPC_STORE_U32(ctx.r8.u32 + 180, ctx.r10.u32);
	// blr 
	return;
loc_83375A98:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20708(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20708);
	// stw r11,180(r8)
	PPC_STORE_U32(ctx.r8.u32 + 180, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83375AA8"))) PPC_WEAK_FUNC(sub_83375AA8);
PPC_FUNC_IMPL(__imp__sub_83375AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83375ae8
	if (!ctx.cr6.eq) goto loc_83375AE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83375ADC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83375adc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83375ADC;
loc_83375AE8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,212(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 212);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375b18
	if (ctx.cr6.eq) goto loc_83375B18;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,53
	ctx.r11.s64 = 53;
	// lwz r10,20712(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20712);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,212(r8)
	PPC_STORE_U32(ctx.r8.u32 + 212, ctx.r10.u32);
	// blr 
	return;
loc_83375B18:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20712);
	// stw r11,212(r8)
	PPC_STORE_U32(ctx.r8.u32 + 212, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83375B28"))) PPC_WEAK_FUNC(sub_83375B28);
PPC_FUNC_IMPL(__imp__sub_83375B28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83375b68
	if (!ctx.cr6.eq) goto loc_83375B68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83375B5C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83375b5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83375B5C;
loc_83375B68:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,332(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 332);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375b98
	if (ctx.cr6.eq) goto loc_83375B98;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,83
	ctx.r11.s64 = 83;
	// lwz r10,20716(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20716);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,332(r8)
	PPC_STORE_U32(ctx.r8.u32 + 332, ctx.r10.u32);
	// blr 
	return;
loc_83375B98:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20716);
	// stw r11,332(r8)
	PPC_STORE_U32(ctx.r8.u32 + 332, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83375BA8"))) PPC_WEAK_FUNC(sub_83375BA8);
PPC_FUNC_IMPL(__imp__sub_83375BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83375be8
	if (!ctx.cr6.eq) goto loc_83375BE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83375BDC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83375bdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83375BDC;
loc_83375BE8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,44(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375c18
	if (ctx.cr6.eq) goto loc_83375C18;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,11
	ctx.r11.s64 = 11;
	// lwz r10,20720(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20720);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r10.u32);
	// blr 
	return;
loc_83375C18:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20720);
	// stw r11,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83375C28"))) PPC_WEAK_FUNC(sub_83375C28);
PPC_FUNC_IMPL(__imp__sub_83375C28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83375c68
	if (!ctx.cr6.eq) goto loc_83375C68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83375C5C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83375c5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83375C5C;
loc_83375C68:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,232(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 232);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375c98
	if (ctx.cr6.eq) goto loc_83375C98;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,58
	ctx.r11.s64 = 58;
	// lwz r10,20724(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20724);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,232(r8)
	PPC_STORE_U32(ctx.r8.u32 + 232, ctx.r10.u32);
	// blr 
	return;
loc_83375C98:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20724);
	// stw r11,232(r8)
	PPC_STORE_U32(ctx.r8.u32 + 232, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83375CA8"))) PPC_WEAK_FUNC(sub_83375CA8);
PPC_FUNC_IMPL(__imp__sub_83375CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83375ce8
	if (!ctx.cr6.eq) goto loc_83375CE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83375CDC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83375cdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83375CDC;
loc_83375CE8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,192(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375d18
	if (ctx.cr6.eq) goto loc_83375D18;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,48
	ctx.r11.s64 = 48;
	// lwz r10,20728(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20728);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 192, ctx.r10.u32);
	// blr 
	return;
loc_83375D18:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20728);
	// stw r11,192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 192, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83375D28"))) PPC_WEAK_FUNC(sub_83375D28);
PPC_FUNC_IMPL(__imp__sub_83375D28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83375d68
	if (!ctx.cr6.eq) goto loc_83375D68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83375D5C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83375d5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83375D5C;
loc_83375D68:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,320(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 320);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375d98
	if (ctx.cr6.eq) goto loc_83375D98;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,80
	ctx.r11.s64 = 80;
	// lwz r10,20732(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20732);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 320, ctx.r10.u32);
	// blr 
	return;
loc_83375D98:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20732(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20732);
	// stw r11,320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83375DA8"))) PPC_WEAK_FUNC(sub_83375DA8);
PPC_FUNC_IMPL(__imp__sub_83375DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83375de8
	if (!ctx.cr6.eq) goto loc_83375DE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83375DDC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83375ddc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83375DDC;
loc_83375DE8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,164(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 164);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375e18
	if (ctx.cr6.eq) goto loc_83375E18;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,41
	ctx.r11.s64 = 41;
	// lwz r10,20736(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20736);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,164(r8)
	PPC_STORE_U32(ctx.r8.u32 + 164, ctx.r10.u32);
	// blr 
	return;
loc_83375E18:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20736);
	// stw r11,164(r8)
	PPC_STORE_U32(ctx.r8.u32 + 164, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83375E28"))) PPC_WEAK_FUNC(sub_83375E28);
PPC_FUNC_IMPL(__imp__sub_83375E28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83375e68
	if (!ctx.cr6.eq) goto loc_83375E68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83375E5C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83375e5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83375E5C;
loc_83375E68:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,88(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375e98
	if (ctx.cr6.eq) goto loc_83375E98;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,22
	ctx.r11.s64 = 22;
	// lwz r10,20740(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20740);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,88(r8)
	PPC_STORE_U32(ctx.r8.u32 + 88, ctx.r10.u32);
	// blr 
	return;
loc_83375E98:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20740);
	// stw r11,88(r8)
	PPC_STORE_U32(ctx.r8.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83375EA8"))) PPC_WEAK_FUNC(sub_83375EA8);
PPC_FUNC_IMPL(__imp__sub_83375EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83375ee8
	if (!ctx.cr6.eq) goto loc_83375EE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83375EDC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83375edc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83375EDC;
loc_83375EE8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375f18
	if (ctx.cr6.eq) goto loc_83375F18;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,20744(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20744);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r10.u32);
	// blr 
	return;
loc_83375F18:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20744);
	// stw r11,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83375F28"))) PPC_WEAK_FUNC(sub_83375F28);
PPC_FUNC_IMPL(__imp__sub_83375F28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83375f68
	if (!ctx.cr6.eq) goto loc_83375F68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83375F5C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83375f5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83375F5C;
loc_83375F68:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83375f98
	if (ctx.cr6.eq) goto loc_83375F98;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r10,20748(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20748);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r10.u32);
	// blr 
	return;
loc_83375F98:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20748);
	// stw r11,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83375FA8"))) PPC_WEAK_FUNC(sub_83375FA8);
PPC_FUNC_IMPL(__imp__sub_83375FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83375fe8
	if (!ctx.cr6.eq) goto loc_83375FE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83375FDC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83375fdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83375FDC;
loc_83375FE8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376018
	if (ctx.cr6.eq) goto loc_83376018;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,10
	ctx.r11.s64 = 10;
	// lwz r10,20752(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20752);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r10.u32);
	// blr 
	return;
loc_83376018:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20752);
	// stw r11,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376028"))) PPC_WEAK_FUNC(sub_83376028);
PPC_FUNC_IMPL(__imp__sub_83376028) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376068
	if (!ctx.cr6.eq) goto loc_83376068;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337605C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337605c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337605C;
loc_83376068:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,24(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376098
	if (ctx.cr6.eq) goto loc_83376098;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r10,20756(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20756);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r10.u32);
	// blr 
	return;
loc_83376098:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20756);
	// stw r11,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833760A8"))) PPC_WEAK_FUNC(sub_833760A8);
PPC_FUNC_IMPL(__imp__sub_833760A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833760e8
	if (!ctx.cr6.eq) goto loc_833760E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833760DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833760dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833760DC;
loc_833760E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376118
	if (ctx.cr6.eq) goto loc_83376118;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,7
	ctx.r11.s64 = 7;
	// lwz r10,20760(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20760);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// blr 
	return;
loc_83376118:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20760);
	// stw r11,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376128"))) PPC_WEAK_FUNC(sub_83376128);
PPC_FUNC_IMPL(__imp__sub_83376128) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376168
	if (!ctx.cr6.eq) goto loc_83376168;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337615C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337615c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337615C;
loc_83376168:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,276(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 276);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376198
	if (ctx.cr6.eq) goto loc_83376198;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,69
	ctx.r11.s64 = 69;
	// lwz r10,20764(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20764);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,276(r8)
	PPC_STORE_U32(ctx.r8.u32 + 276, ctx.r10.u32);
	// blr 
	return;
loc_83376198:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20764);
	// stw r11,276(r8)
	PPC_STORE_U32(ctx.r8.u32 + 276, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833761A8"))) PPC_WEAK_FUNC(sub_833761A8);
PPC_FUNC_IMPL(__imp__sub_833761A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833761e8
	if (!ctx.cr6.eq) goto loc_833761E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833761DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833761dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833761DC;
loc_833761E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,36(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376218
	if (ctx.cr6.eq) goto loc_83376218;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,9
	ctx.r11.s64 = 9;
	// lwz r10,20768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20768);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r10.u32);
	// blr 
	return;
loc_83376218:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20768);
	// stw r11,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376228"))) PPC_WEAK_FUNC(sub_83376228);
PPC_FUNC_IMPL(__imp__sub_83376228) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376268
	if (!ctx.cr6.eq) goto loc_83376268;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337625C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337625c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337625C;
loc_83376268:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,52(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376298
	if (ctx.cr6.eq) goto loc_83376298;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,13
	ctx.r11.s64 = 13;
	// lwz r10,20772(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20772);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r10.u32);
	// blr 
	return;
loc_83376298:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20772);
	// stw r11,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833762A8"))) PPC_WEAK_FUNC(sub_833762A8);
PPC_FUNC_IMPL(__imp__sub_833762A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833762e8
	if (!ctx.cr6.eq) goto loc_833762E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833762DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833762dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833762DC;
loc_833762E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,60(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376318
	if (ctx.cr6.eq) goto loc_83376318;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r10,20776(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20776);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,60(r8)
	PPC_STORE_U32(ctx.r8.u32 + 60, ctx.r10.u32);
	// blr 
	return;
loc_83376318:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20776);
	// stw r11,60(r8)
	PPC_STORE_U32(ctx.r8.u32 + 60, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376328"))) PPC_WEAK_FUNC(sub_83376328);
PPC_FUNC_IMPL(__imp__sub_83376328) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376368
	if (!ctx.cr6.eq) goto loc_83376368;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337635C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337635c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337635C;
loc_83376368:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,80(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376398
	if (ctx.cr6.eq) goto loc_83376398;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,20
	ctx.r11.s64 = 20;
	// lwz r10,20780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20780);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,80(r8)
	PPC_STORE_U32(ctx.r8.u32 + 80, ctx.r10.u32);
	// blr 
	return;
loc_83376398:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20780);
	// stw r11,80(r8)
	PPC_STORE_U32(ctx.r8.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833763A8"))) PPC_WEAK_FUNC(sub_833763A8);
PPC_FUNC_IMPL(__imp__sub_833763A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833763e8
	if (!ctx.cr6.eq) goto loc_833763E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833763DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833763dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833763DC;
loc_833763E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,92(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 92);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376418
	if (ctx.cr6.eq) goto loc_83376418;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,23
	ctx.r11.s64 = 23;
	// lwz r10,20784(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20784);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,92(r8)
	PPC_STORE_U32(ctx.r8.u32 + 92, ctx.r10.u32);
	// blr 
	return;
loc_83376418:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20784);
	// stw r11,92(r8)
	PPC_STORE_U32(ctx.r8.u32 + 92, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376428"))) PPC_WEAK_FUNC(sub_83376428);
PPC_FUNC_IMPL(__imp__sub_83376428) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376468
	if (!ctx.cr6.eq) goto loc_83376468;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337645C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337645c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337645C;
loc_83376468:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,100(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376498
	if (ctx.cr6.eq) goto loc_83376498;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,25
	ctx.r11.s64 = 25;
	// lwz r10,20788(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20788);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r10.u32);
	// blr 
	return;
loc_83376498:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20788);
	// stw r11,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833764A8"))) PPC_WEAK_FUNC(sub_833764A8);
PPC_FUNC_IMPL(__imp__sub_833764A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833764e8
	if (!ctx.cr6.eq) goto loc_833764E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833764DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833764dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833764DC;
loc_833764E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,108(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376518
	if (ctx.cr6.eq) goto loc_83376518;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,27
	ctx.r11.s64 = 27;
	// lwz r10,20792(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20792);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 108, ctx.r10.u32);
	// blr 
	return;
loc_83376518:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20792);
	// stw r11,108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376528"))) PPC_WEAK_FUNC(sub_83376528);
PPC_FUNC_IMPL(__imp__sub_83376528) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376568
	if (!ctx.cr6.eq) goto loc_83376568;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337655C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337655c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337655C;
loc_83376568:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,112(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376598
	if (ctx.cr6.eq) goto loc_83376598;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,28
	ctx.r11.s64 = 28;
	// lwz r10,20796(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20796);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 112, ctx.r10.u32);
	// blr 
	return;
loc_83376598:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20796);
	// stw r11,112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833765A8"))) PPC_WEAK_FUNC(sub_833765A8);
PPC_FUNC_IMPL(__imp__sub_833765A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833765e8
	if (!ctx.cr6.eq) goto loc_833765E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833765DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833765dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833765DC;
loc_833765E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,220(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 220);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376618
	if (ctx.cr6.eq) goto loc_83376618;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,55
	ctx.r11.s64 = 55;
	// lwz r10,20800(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20800);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 220, ctx.r10.u32);
	// blr 
	return;
loc_83376618:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20800);
	// stw r11,220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 220, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376628"))) PPC_WEAK_FUNC(sub_83376628);
PPC_FUNC_IMPL(__imp__sub_83376628) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376668
	if (!ctx.cr6.eq) goto loc_83376668;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337665C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337665c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337665C;
loc_83376668:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,264(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 264);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376698
	if (ctx.cr6.eq) goto loc_83376698;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,66
	ctx.r11.s64 = 66;
	// lwz r10,20804(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20804);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,264(r8)
	PPC_STORE_U32(ctx.r8.u32 + 264, ctx.r10.u32);
	// blr 
	return;
loc_83376698:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20804);
	// stw r11,264(r8)
	PPC_STORE_U32(ctx.r8.u32 + 264, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833766A8"))) PPC_WEAK_FUNC(sub_833766A8);
PPC_FUNC_IMPL(__imp__sub_833766A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833766e8
	if (!ctx.cr6.eq) goto loc_833766E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833766DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833766dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833766DC;
loc_833766E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,268(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 268);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376718
	if (ctx.cr6.eq) goto loc_83376718;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,67
	ctx.r11.s64 = 67;
	// lwz r10,20808(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20808);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,268(r8)
	PPC_STORE_U32(ctx.r8.u32 + 268, ctx.r10.u32);
	// blr 
	return;
loc_83376718:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20808(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20808);
	// stw r11,268(r8)
	PPC_STORE_U32(ctx.r8.u32 + 268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376728"))) PPC_WEAK_FUNC(sub_83376728);
PPC_FUNC_IMPL(__imp__sub_83376728) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376768
	if (!ctx.cr6.eq) goto loc_83376768;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337675C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337675c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337675C;
loc_83376768:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 272);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376798
	if (ctx.cr6.eq) goto loc_83376798;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,68
	ctx.r11.s64 = 68;
	// lwz r10,20812(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20812);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,272(r8)
	PPC_STORE_U32(ctx.r8.u32 + 272, ctx.r10.u32);
	// blr 
	return;
loc_83376798:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20812);
	// stw r11,272(r8)
	PPC_STORE_U32(ctx.r8.u32 + 272, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833767A8"))) PPC_WEAK_FUNC(sub_833767A8);
PPC_FUNC_IMPL(__imp__sub_833767A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833767e8
	if (!ctx.cr6.eq) goto loc_833767E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833767DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833767dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833767DC;
loc_833767E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,200(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 200);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376818
	if (ctx.cr6.eq) goto loc_83376818;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,50
	ctx.r11.s64 = 50;
	// lwz r10,20816(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20816);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,200(r8)
	PPC_STORE_U32(ctx.r8.u32 + 200, ctx.r10.u32);
	// blr 
	return;
loc_83376818:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20816);
	// stw r11,200(r8)
	PPC_STORE_U32(ctx.r8.u32 + 200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376828"))) PPC_WEAK_FUNC(sub_83376828);
PPC_FUNC_IMPL(__imp__sub_83376828) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376868
	if (!ctx.cr6.eq) goto loc_83376868;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337685C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337685c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337685C;
loc_83376868:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,204(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 204);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376898
	if (ctx.cr6.eq) goto loc_83376898;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,51
	ctx.r11.s64 = 51;
	// lwz r10,20820(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20820);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,204(r8)
	PPC_STORE_U32(ctx.r8.u32 + 204, ctx.r10.u32);
	// blr 
	return;
loc_83376898:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20820(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20820);
	// stw r11,204(r8)
	PPC_STORE_U32(ctx.r8.u32 + 204, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833768A8"))) PPC_WEAK_FUNC(sub_833768A8);
PPC_FUNC_IMPL(__imp__sub_833768A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833768e8
	if (!ctx.cr6.eq) goto loc_833768E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833768DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833768dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833768DC;
loc_833768E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,116(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 116);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376918
	if (ctx.cr6.eq) goto loc_83376918;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,29
	ctx.r11.s64 = 29;
	// lwz r10,20824(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20824);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,116(r8)
	PPC_STORE_U32(ctx.r8.u32 + 116, ctx.r10.u32);
	// blr 
	return;
loc_83376918:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20824);
	// stw r11,116(r8)
	PPC_STORE_U32(ctx.r8.u32 + 116, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376928"))) PPC_WEAK_FUNC(sub_83376928);
PPC_FUNC_IMPL(__imp__sub_83376928) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376968
	if (!ctx.cr6.eq) goto loc_83376968;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337695C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337695c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337695C;
loc_83376968:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,120(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376998
	if (ctx.cr6.eq) goto loc_83376998;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,30
	ctx.r11.s64 = 30;
	// lwz r10,20828(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20828);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,120(r8)
	PPC_STORE_U32(ctx.r8.u32 + 120, ctx.r10.u32);
	// blr 
	return;
loc_83376998:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20828);
	// stw r11,120(r8)
	PPC_STORE_U32(ctx.r8.u32 + 120, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833769A8"))) PPC_WEAK_FUNC(sub_833769A8);
PPC_FUNC_IMPL(__imp__sub_833769A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833769e8
	if (!ctx.cr6.eq) goto loc_833769E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833769DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833769dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833769DC;
loc_833769E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,124(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 124);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376a18
	if (ctx.cr6.eq) goto loc_83376A18;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,31
	ctx.r11.s64 = 31;
	// lwz r10,20832(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20832);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 124, ctx.r10.u32);
	// blr 
	return;
loc_83376A18:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20832);
	// stw r11,124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376A28"))) PPC_WEAK_FUNC(sub_83376A28);
PPC_FUNC_IMPL(__imp__sub_83376A28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376a68
	if (!ctx.cr6.eq) goto loc_83376A68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83376A5C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83376a5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83376A5C;
loc_83376A68:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,208(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 208);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376a98
	if (ctx.cr6.eq) goto loc_83376A98;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,52
	ctx.r11.s64 = 52;
	// lwz r10,20836(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20836);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,208(r8)
	PPC_STORE_U32(ctx.r8.u32 + 208, ctx.r10.u32);
	// blr 
	return;
loc_83376A98:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20836(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20836);
	// stw r11,208(r8)
	PPC_STORE_U32(ctx.r8.u32 + 208, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376AA8"))) PPC_WEAK_FUNC(sub_83376AA8);
PPC_FUNC_IMPL(__imp__sub_83376AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376ae8
	if (!ctx.cr6.eq) goto loc_83376AE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83376ADC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83376adc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83376ADC;
loc_83376AE8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,128(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 128);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376b18
	if (ctx.cr6.eq) goto loc_83376B18;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,32
	ctx.r11.s64 = 32;
	// lwz r10,20840(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20840);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 128, ctx.r10.u32);
	// blr 
	return;
loc_83376B18:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20840);
	// stw r11,128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376B28"))) PPC_WEAK_FUNC(sub_83376B28);
PPC_FUNC_IMPL(__imp__sub_83376B28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376b68
	if (!ctx.cr6.eq) goto loc_83376B68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83376B5C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83376b5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83376B5C;
loc_83376B68:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,132(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 132);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376b98
	if (ctx.cr6.eq) goto loc_83376B98;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,33
	ctx.r11.s64 = 33;
	// lwz r10,20844(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20844);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 132, ctx.r10.u32);
	// blr 
	return;
loc_83376B98:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20844);
	// stw r11,132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 132, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376BA8"))) PPC_WEAK_FUNC(sub_83376BA8);
PPC_FUNC_IMPL(__imp__sub_83376BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376be8
	if (!ctx.cr6.eq) goto loc_83376BE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83376BDC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83376bdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83376BDC;
loc_83376BE8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,144(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376c18
	if (ctx.cr6.eq) goto loc_83376C18;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,36
	ctx.r11.s64 = 36;
	// lwz r10,20848(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20848);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 144, ctx.r10.u32);
	// blr 
	return;
loc_83376C18:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20848(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20848);
	// stw r11,144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 144, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376C28"))) PPC_WEAK_FUNC(sub_83376C28);
PPC_FUNC_IMPL(__imp__sub_83376C28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376c68
	if (!ctx.cr6.eq) goto loc_83376C68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83376C5C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83376c5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83376C5C;
loc_83376C68:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,148(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 148);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376c98
	if (ctx.cr6.eq) goto loc_83376C98;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,37
	ctx.r11.s64 = 37;
	// lwz r10,20852(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20852);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,148(r8)
	PPC_STORE_U32(ctx.r8.u32 + 148, ctx.r10.u32);
	// blr 
	return;
loc_83376C98:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20852);
	// stw r11,148(r8)
	PPC_STORE_U32(ctx.r8.u32 + 148, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376CA8"))) PPC_WEAK_FUNC(sub_83376CA8);
PPC_FUNC_IMPL(__imp__sub_83376CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376ce8
	if (!ctx.cr6.eq) goto loc_83376CE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83376CDC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83376cdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83376CDC;
loc_83376CE8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,152(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 152);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376d18
	if (ctx.cr6.eq) goto loc_83376D18;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,38
	ctx.r11.s64 = 38;
	// lwz r10,20856(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20856);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 152, ctx.r10.u32);
	// blr 
	return;
loc_83376D18:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20856);
	// stw r11,152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376D28"))) PPC_WEAK_FUNC(sub_83376D28);
PPC_FUNC_IMPL(__imp__sub_83376D28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376d68
	if (!ctx.cr6.eq) goto loc_83376D68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83376D5C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83376d5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83376D5C;
loc_83376D68:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,156(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 156);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376d98
	if (ctx.cr6.eq) goto loc_83376D98;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,39
	ctx.r11.s64 = 39;
	// lwz r10,20860(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20860);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,156(r8)
	PPC_STORE_U32(ctx.r8.u32 + 156, ctx.r10.u32);
	// blr 
	return;
loc_83376D98:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20860(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20860);
	// stw r11,156(r8)
	PPC_STORE_U32(ctx.r8.u32 + 156, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376DA8"))) PPC_WEAK_FUNC(sub_83376DA8);
PPC_FUNC_IMPL(__imp__sub_83376DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376de8
	if (!ctx.cr6.eq) goto loc_83376DE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83376DDC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83376ddc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83376DDC;
loc_83376DE8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,160(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 160);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376e18
	if (ctx.cr6.eq) goto loc_83376E18;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,40
	ctx.r11.s64 = 40;
	// lwz r10,20864(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20864);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,160(r8)
	PPC_STORE_U32(ctx.r8.u32 + 160, ctx.r10.u32);
	// blr 
	return;
loc_83376E18:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20864(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20864);
	// stw r11,160(r8)
	PPC_STORE_U32(ctx.r8.u32 + 160, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376E28"))) PPC_WEAK_FUNC(sub_83376E28);
PPC_FUNC_IMPL(__imp__sub_83376E28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376e68
	if (!ctx.cr6.eq) goto loc_83376E68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83376E5C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83376e5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83376E5C;
loc_83376E68:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 168);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376e98
	if (ctx.cr6.eq) goto loc_83376E98;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,42
	ctx.r11.s64 = 42;
	// lwz r10,20868(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20868);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 168, ctx.r10.u32);
	// blr 
	return;
loc_83376E98:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20868);
	// stw r11,168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 168, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376EA8"))) PPC_WEAK_FUNC(sub_83376EA8);
PPC_FUNC_IMPL(__imp__sub_83376EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376ee8
	if (!ctx.cr6.eq) goto loc_83376EE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83376EDC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83376edc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83376EDC;
loc_83376EE8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,176(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376f18
	if (ctx.cr6.eq) goto loc_83376F18;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,44
	ctx.r11.s64 = 44;
	// lwz r10,20872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20872);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,176(r8)
	PPC_STORE_U32(ctx.r8.u32 + 176, ctx.r10.u32);
	// blr 
	return;
loc_83376F18:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20872);
	// stw r11,176(r8)
	PPC_STORE_U32(ctx.r8.u32 + 176, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376F28"))) PPC_WEAK_FUNC(sub_83376F28);
PPC_FUNC_IMPL(__imp__sub_83376F28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376f68
	if (!ctx.cr6.eq) goto loc_83376F68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83376F5C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83376f5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83376F5C;
loc_83376F68:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,184(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 184);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83376f98
	if (ctx.cr6.eq) goto loc_83376F98;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,46
	ctx.r11.s64 = 46;
	// lwz r10,20876(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20876);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 184, ctx.r10.u32);
	// blr 
	return;
loc_83376F98:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20876);
	// stw r11,184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 184, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83376FA8"))) PPC_WEAK_FUNC(sub_83376FA8);
PPC_FUNC_IMPL(__imp__sub_83376FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83376fe8
	if (!ctx.cr6.eq) goto loc_83376FE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83376FDC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83376fdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83376FDC;
loc_83376FE8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,76(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83377018
	if (ctx.cr6.eq) goto loc_83377018;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,19
	ctx.r11.s64 = 19;
	// lwz r10,20880(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20880);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,76(r8)
	PPC_STORE_U32(ctx.r8.u32 + 76, ctx.r10.u32);
	// blr 
	return;
loc_83377018:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20880(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20880);
	// stw r11,76(r8)
	PPC_STORE_U32(ctx.r8.u32 + 76, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377028"))) PPC_WEAK_FUNC(sub_83377028);
PPC_FUNC_IMPL(__imp__sub_83377028) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83377068
	if (!ctx.cr6.eq) goto loc_83377068;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337705C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337705c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337705C;
loc_83377068:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,224(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83377098
	if (ctx.cr6.eq) goto loc_83377098;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,56
	ctx.r11.s64 = 56;
	// lwz r10,20884(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20884);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,224(r8)
	PPC_STORE_U32(ctx.r8.u32 + 224, ctx.r10.u32);
	// blr 
	return;
loc_83377098:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20884);
	// stw r11,224(r8)
	PPC_STORE_U32(ctx.r8.u32 + 224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833770A8"))) PPC_WEAK_FUNC(sub_833770A8);
PPC_FUNC_IMPL(__imp__sub_833770A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833770e8
	if (!ctx.cr6.eq) goto loc_833770E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833770DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833770dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833770DC;
loc_833770E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,328(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 328);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83377118
	if (ctx.cr6.eq) goto loc_83377118;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,82
	ctx.r11.s64 = 82;
	// lwz r10,20888(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20888);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,328(r8)
	PPC_STORE_U32(ctx.r8.u32 + 328, ctx.r10.u32);
	// blr 
	return;
loc_83377118:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20888(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20888);
	// stw r11,328(r8)
	PPC_STORE_U32(ctx.r8.u32 + 328, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377128"))) PPC_WEAK_FUNC(sub_83377128);
PPC_FUNC_IMPL(__imp__sub_83377128) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377158:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377158
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377158;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377168"))) PPC_WEAK_FUNC(sub_83377168);
PPC_FUNC_IMPL(__imp__sub_83377168) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833771a8
	if (!ctx.cr6.eq) goto loc_833771A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337719C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337719c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337719C;
loc_833771A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,232(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 232);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833771d8
	if (ctx.cr6.eq) goto loc_833771D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,58
	ctx.r11.s64 = 58;
	// lwz r10,20892(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20892);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,232(r8)
	PPC_STORE_U32(ctx.r8.u32 + 232, ctx.r10.u32);
	// blr 
	return;
loc_833771D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20892);
	// stw r11,232(r8)
	PPC_STORE_U32(ctx.r8.u32 + 232, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833771E8"))) PPC_WEAK_FUNC(sub_833771E8);
PPC_FUNC_IMPL(__imp__sub_833771E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377218:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377218
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377218;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377228"))) PPC_WEAK_FUNC(sub_83377228);
PPC_FUNC_IMPL(__imp__sub_83377228) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83377268
	if (!ctx.cr6.eq) goto loc_83377268;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337725C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337725c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337725C;
loc_83377268:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,236(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 236);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83377298
	if (ctx.cr6.eq) goto loc_83377298;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,59
	ctx.r11.s64 = 59;
	// lwz r10,20896(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20896);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 236, ctx.r10.u32);
	// blr 
	return;
loc_83377298:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20896);
	// stw r11,236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 236, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833772A8"))) PPC_WEAK_FUNC(sub_833772A8);
PPC_FUNC_IMPL(__imp__sub_833772A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833772D8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833772d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833772D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833772E8"))) PPC_WEAK_FUNC(sub_833772E8);
PPC_FUNC_IMPL(__imp__sub_833772E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83377328
	if (!ctx.cr6.eq) goto loc_83377328;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337731C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337731c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337731C;
loc_83377328:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,240(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 240);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83377358
	if (ctx.cr6.eq) goto loc_83377358;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,60
	ctx.r11.s64 = 60;
	// lwz r10,20900(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20900);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,240(r8)
	PPC_STORE_U32(ctx.r8.u32 + 240, ctx.r10.u32);
	// blr 
	return;
loc_83377358:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20900);
	// stw r11,240(r8)
	PPC_STORE_U32(ctx.r8.u32 + 240, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377368"))) PPC_WEAK_FUNC(sub_83377368);
PPC_FUNC_IMPL(__imp__sub_83377368) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377398:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377398
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377398;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833773A8"))) PPC_WEAK_FUNC(sub_833773A8);
PPC_FUNC_IMPL(__imp__sub_833773A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833773e8
	if (!ctx.cr6.eq) goto loc_833773E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833773DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833773dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833773DC;
loc_833773E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,328(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 328);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83377418
	if (ctx.cr6.eq) goto loc_83377418;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,82
	ctx.r11.s64 = 82;
	// lwz r10,20904(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20904);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,328(r8)
	PPC_STORE_U32(ctx.r8.u32 + 328, ctx.r10.u32);
	// blr 
	return;
loc_83377418:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20904);
	// stw r11,328(r8)
	PPC_STORE_U32(ctx.r8.u32 + 328, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377428"))) PPC_WEAK_FUNC(sub_83377428);
PPC_FUNC_IMPL(__imp__sub_83377428) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377458:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377458
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377458;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377468"))) PPC_WEAK_FUNC(sub_83377468);
PPC_FUNC_IMPL(__imp__sub_83377468) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833774a8
	if (!ctx.cr6.eq) goto loc_833774A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337749C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337749c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337749C;
loc_833774A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,244(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 244);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833774d8
	if (ctx.cr6.eq) goto loc_833774D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,61
	ctx.r11.s64 = 61;
	// lwz r10,20908(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20908);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,244(r8)
	PPC_STORE_U32(ctx.r8.u32 + 244, ctx.r10.u32);
	// blr 
	return;
loc_833774D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20908(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20908);
	// stw r11,244(r8)
	PPC_STORE_U32(ctx.r8.u32 + 244, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833774E8"))) PPC_WEAK_FUNC(sub_833774E8);
PPC_FUNC_IMPL(__imp__sub_833774E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377518:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377518
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377518;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377528"))) PPC_WEAK_FUNC(sub_83377528);
PPC_FUNC_IMPL(__imp__sub_83377528) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83377568
	if (!ctx.cr6.eq) goto loc_83377568;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337755C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337755c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337755C;
loc_83377568:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,248(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 248);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83377598
	if (ctx.cr6.eq) goto loc_83377598;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,62
	ctx.r11.s64 = 62;
	// lwz r10,20912(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20912);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,248(r8)
	PPC_STORE_U32(ctx.r8.u32 + 248, ctx.r10.u32);
	// blr 
	return;
loc_83377598:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20912);
	// stw r11,248(r8)
	PPC_STORE_U32(ctx.r8.u32 + 248, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833775A8"))) PPC_WEAK_FUNC(sub_833775A8);
PPC_FUNC_IMPL(__imp__sub_833775A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833775D8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833775d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833775D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833775E8"))) PPC_WEAK_FUNC(sub_833775E8);
PPC_FUNC_IMPL(__imp__sub_833775E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83377628
	if (!ctx.cr6.eq) goto loc_83377628;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337761C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337761c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337761C;
loc_83377628:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,252(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 252);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83377658
	if (ctx.cr6.eq) goto loc_83377658;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,63
	ctx.r11.s64 = 63;
	// lwz r10,20916(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20916);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,252(r8)
	PPC_STORE_U32(ctx.r8.u32 + 252, ctx.r10.u32);
	// blr 
	return;
loc_83377658:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20916(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20916);
	// stw r11,252(r8)
	PPC_STORE_U32(ctx.r8.u32 + 252, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377668"))) PPC_WEAK_FUNC(sub_83377668);
PPC_FUNC_IMPL(__imp__sub_83377668) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377698:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377698
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377698;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833776A8"))) PPC_WEAK_FUNC(sub_833776A8);
PPC_FUNC_IMPL(__imp__sub_833776A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833776e8
	if (!ctx.cr6.eq) goto loc_833776E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833776DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833776dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833776DC;
loc_833776E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,332(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 332);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83377718
	if (ctx.cr6.eq) goto loc_83377718;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,83
	ctx.r11.s64 = 83;
	// lwz r10,20920(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20920);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,332(r8)
	PPC_STORE_U32(ctx.r8.u32 + 332, ctx.r10.u32);
	// blr 
	return;
loc_83377718:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20920);
	// stw r11,332(r8)
	PPC_STORE_U32(ctx.r8.u32 + 332, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377728"))) PPC_WEAK_FUNC(sub_83377728);
PPC_FUNC_IMPL(__imp__sub_83377728) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377758:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377758
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377758;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377768"))) PPC_WEAK_FUNC(sub_83377768);
PPC_FUNC_IMPL(__imp__sub_83377768) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833777a8
	if (!ctx.cr6.eq) goto loc_833777A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337779C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337779c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337779C;
loc_833777A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,256(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 256);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833777d8
	if (ctx.cr6.eq) goto loc_833777D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,64
	ctx.r11.s64 = 64;
	// lwz r10,20924(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20924);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 256, ctx.r10.u32);
	// blr 
	return;
loc_833777D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20924);
	// stw r11,256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 256, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833777E8"))) PPC_WEAK_FUNC(sub_833777E8);
PPC_FUNC_IMPL(__imp__sub_833777E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377818:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377818
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377818;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377828"))) PPC_WEAK_FUNC(sub_83377828);
PPC_FUNC_IMPL(__imp__sub_83377828) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83377868
	if (!ctx.cr6.eq) goto loc_83377868;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337785C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337785c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337785C;
loc_83377868:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,260(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 260);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83377898
	if (ctx.cr6.eq) goto loc_83377898;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,65
	ctx.r11.s64 = 65;
	// lwz r10,20928(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20928);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,260(r8)
	PPC_STORE_U32(ctx.r8.u32 + 260, ctx.r10.u32);
	// blr 
	return;
loc_83377898:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20928);
	// stw r11,260(r8)
	PPC_STORE_U32(ctx.r8.u32 + 260, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833778A8"))) PPC_WEAK_FUNC(sub_833778A8);
PPC_FUNC_IMPL(__imp__sub_833778A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833778D8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833778d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833778D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833778E8"))) PPC_WEAK_FUNC(sub_833778E8);
PPC_FUNC_IMPL(__imp__sub_833778E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83377928
	if (!ctx.cr6.eq) goto loc_83377928;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337791C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337791c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337791C;
loc_83377928:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,264(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 264);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83377958
	if (ctx.cr6.eq) goto loc_83377958;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,66
	ctx.r11.s64 = 66;
	// lwz r10,20932(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20932);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,264(r8)
	PPC_STORE_U32(ctx.r8.u32 + 264, ctx.r10.u32);
	// blr 
	return;
loc_83377958:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20932);
	// stw r11,264(r8)
	PPC_STORE_U32(ctx.r8.u32 + 264, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377968"))) PPC_WEAK_FUNC(sub_83377968);
PPC_FUNC_IMPL(__imp__sub_83377968) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377998:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377998
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377998;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833779A8"))) PPC_WEAK_FUNC(sub_833779A8);
PPC_FUNC_IMPL(__imp__sub_833779A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833779e8
	if (!ctx.cr6.eq) goto loc_833779E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833779DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833779dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833779DC;
loc_833779E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,336(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 336);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83377a18
	if (ctx.cr6.eq) goto loc_83377A18;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,84
	ctx.r11.s64 = 84;
	// lwz r10,20936(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20936);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,336(r8)
	PPC_STORE_U32(ctx.r8.u32 + 336, ctx.r10.u32);
	// blr 
	return;
loc_83377A18:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20936);
	// stw r11,336(r8)
	PPC_STORE_U32(ctx.r8.u32 + 336, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377A28"))) PPC_WEAK_FUNC(sub_83377A28);
PPC_FUNC_IMPL(__imp__sub_83377A28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377A58:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377a58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377A58;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377A68"))) PPC_WEAK_FUNC(sub_83377A68);
PPC_FUNC_IMPL(__imp__sub_83377A68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83377aa8
	if (!ctx.cr6.eq) goto loc_83377AA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377A9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377a9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377A9C;
loc_83377AA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,268(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 268);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83377ad8
	if (ctx.cr6.eq) goto loc_83377AD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,67
	ctx.r11.s64 = 67;
	// lwz r10,20940(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20940);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,268(r8)
	PPC_STORE_U32(ctx.r8.u32 + 268, ctx.r10.u32);
	// blr 
	return;
loc_83377AD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20940(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20940);
	// stw r11,268(r8)
	PPC_STORE_U32(ctx.r8.u32 + 268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377AE8"))) PPC_WEAK_FUNC(sub_83377AE8);
PPC_FUNC_IMPL(__imp__sub_83377AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377B18:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377b18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377B18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377B28"))) PPC_WEAK_FUNC(sub_83377B28);
PPC_FUNC_IMPL(__imp__sub_83377B28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83377b68
	if (!ctx.cr6.eq) goto loc_83377B68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377B5C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377b5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377B5C;
loc_83377B68:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 272);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83377b98
	if (ctx.cr6.eq) goto loc_83377B98;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,68
	ctx.r11.s64 = 68;
	// lwz r10,20944(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20944);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,272(r8)
	PPC_STORE_U32(ctx.r8.u32 + 272, ctx.r10.u32);
	// blr 
	return;
loc_83377B98:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20944);
	// stw r11,272(r8)
	PPC_STORE_U32(ctx.r8.u32 + 272, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377BA8"))) PPC_WEAK_FUNC(sub_83377BA8);
PPC_FUNC_IMPL(__imp__sub_83377BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377BD8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377bd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377BD8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377BE8"))) PPC_WEAK_FUNC(sub_83377BE8);
PPC_FUNC_IMPL(__imp__sub_83377BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83377c28
	if (!ctx.cr6.eq) goto loc_83377C28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377C1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377c1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377C1C;
loc_83377C28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,276(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 276);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83377c58
	if (ctx.cr6.eq) goto loc_83377C58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,69
	ctx.r11.s64 = 69;
	// lwz r10,20948(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20948);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,276(r8)
	PPC_STORE_U32(ctx.r8.u32 + 276, ctx.r10.u32);
	// blr 
	return;
loc_83377C58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20948);
	// stw r11,276(r8)
	PPC_STORE_U32(ctx.r8.u32 + 276, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377C68"))) PPC_WEAK_FUNC(sub_83377C68);
PPC_FUNC_IMPL(__imp__sub_83377C68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377C98:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377c98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377C98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377CA8"))) PPC_WEAK_FUNC(sub_83377CA8);
PPC_FUNC_IMPL(__imp__sub_83377CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83377ce8
	if (!ctx.cr6.eq) goto loc_83377CE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377CDC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377cdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377CDC;
loc_83377CE8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,340(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83377d18
	if (ctx.cr6.eq) goto loc_83377D18;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,85
	ctx.r11.s64 = 85;
	// lwz r10,20952(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20952);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,340(r8)
	PPC_STORE_U32(ctx.r8.u32 + 340, ctx.r10.u32);
	// blr 
	return;
loc_83377D18:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20952);
	// stw r11,340(r8)
	PPC_STORE_U32(ctx.r8.u32 + 340, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377D28"))) PPC_WEAK_FUNC(sub_83377D28);
PPC_FUNC_IMPL(__imp__sub_83377D28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377D58:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377d58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377D58;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377D68"))) PPC_WEAK_FUNC(sub_83377D68);
PPC_FUNC_IMPL(__imp__sub_83377D68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83377da8
	if (!ctx.cr6.eq) goto loc_83377DA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377D9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377d9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377D9C;
loc_83377DA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,284(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 284);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83377dd8
	if (ctx.cr6.eq) goto loc_83377DD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,71
	ctx.r11.s64 = 71;
	// lwz r10,20956(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20956);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,284(r8)
	PPC_STORE_U32(ctx.r8.u32 + 284, ctx.r10.u32);
	// blr 
	return;
loc_83377DD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20956);
	// stw r11,284(r8)
	PPC_STORE_U32(ctx.r8.u32 + 284, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377DE8"))) PPC_WEAK_FUNC(sub_83377DE8);
PPC_FUNC_IMPL(__imp__sub_83377DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377E18:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377e18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377E18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377E28"))) PPC_WEAK_FUNC(sub_83377E28);
PPC_FUNC_IMPL(__imp__sub_83377E28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83377e68
	if (!ctx.cr6.eq) goto loc_83377E68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377E5C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377e5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377E5C;
loc_83377E68:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,280(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 280);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83377e98
	if (ctx.cr6.eq) goto loc_83377E98;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,70
	ctx.r11.s64 = 70;
	// lwz r10,20960(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20960);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,280(r8)
	PPC_STORE_U32(ctx.r8.u32 + 280, ctx.r10.u32);
	// blr 
	return;
loc_83377E98:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20960);
	// stw r11,280(r8)
	PPC_STORE_U32(ctx.r8.u32 + 280, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377EA8"))) PPC_WEAK_FUNC(sub_83377EA8);
PPC_FUNC_IMPL(__imp__sub_83377EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377ED8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377ed8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377ED8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377EE8"))) PPC_WEAK_FUNC(sub_83377EE8);
PPC_FUNC_IMPL(__imp__sub_83377EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83377f28
	if (!ctx.cr6.eq) goto loc_83377F28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377F1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377f1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377F1C;
loc_83377F28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,344(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 344);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83377f58
	if (ctx.cr6.eq) goto loc_83377F58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,86
	ctx.r11.s64 = 86;
	// lwz r10,20964(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20964);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,344(r8)
	PPC_STORE_U32(ctx.r8.u32 + 344, ctx.r10.u32);
	// blr 
	return;
loc_83377F58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20964);
	// stw r11,344(r8)
	PPC_STORE_U32(ctx.r8.u32 + 344, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377F68"))) PPC_WEAK_FUNC(sub_83377F68);
PPC_FUNC_IMPL(__imp__sub_83377F68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377F98:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377f98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377F98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83377FA8"))) PPC_WEAK_FUNC(sub_83377FA8);
PPC_FUNC_IMPL(__imp__sub_83377FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83377fe8
	if (!ctx.cr6.eq) goto loc_83377FE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83377FDC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83377fdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83377FDC;
loc_83377FE8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,220(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 220);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378018
	if (ctx.cr6.eq) goto loc_83378018;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,55
	ctx.r11.s64 = 55;
	// lwz r10,20968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20968);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 220, ctx.r10.u32);
	// blr 
	return;
loc_83378018:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20968);
	// stw r11,220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 220, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378028"))) PPC_WEAK_FUNC(sub_83378028);
PPC_FUNC_IMPL(__imp__sub_83378028) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83378058:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83378058
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83378058;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378068"))) PPC_WEAK_FUNC(sub_83378068);
PPC_FUNC_IMPL(__imp__sub_83378068) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833780a8
	if (!ctx.cr6.eq) goto loc_833780A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337809C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337809c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337809C;
loc_833780A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,224(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833780d8
	if (ctx.cr6.eq) goto loc_833780D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,56
	ctx.r11.s64 = 56;
	// lwz r10,20972(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20972);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,224(r8)
	PPC_STORE_U32(ctx.r8.u32 + 224, ctx.r10.u32);
	// blr 
	return;
loc_833780D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20972);
	// stw r11,224(r8)
	PPC_STORE_U32(ctx.r8.u32 + 224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833780E8"))) PPC_WEAK_FUNC(sub_833780E8);
PPC_FUNC_IMPL(__imp__sub_833780E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83378118:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83378118
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83378118;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378128"))) PPC_WEAK_FUNC(sub_83378128);
PPC_FUNC_IMPL(__imp__sub_83378128) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83378168
	if (!ctx.cr6.eq) goto loc_83378168;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337815C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337815c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337815C;
loc_83378168:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,216(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 216);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378198
	if (ctx.cr6.eq) goto loc_83378198;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,54
	ctx.r11.s64 = 54;
	// lwz r10,20976(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20976);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 216, ctx.r10.u32);
	// blr 
	return;
loc_83378198:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20976);
	// stw r11,216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 216, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833781A8"))) PPC_WEAK_FUNC(sub_833781A8);
PPC_FUNC_IMPL(__imp__sub_833781A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833781D8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833781d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833781D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833781E8"))) PPC_WEAK_FUNC(sub_833781E8);
PPC_FUNC_IMPL(__imp__sub_833781E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83378228
	if (!ctx.cr6.eq) goto loc_83378228;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337821C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337821c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337821C;
loc_83378228:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,288(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 288);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378258
	if (ctx.cr6.eq) goto loc_83378258;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,72
	ctx.r11.s64 = 72;
	// lwz r10,20980(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20980);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,288(r8)
	PPC_STORE_U32(ctx.r8.u32 + 288, ctx.r10.u32);
	// blr 
	return;
loc_83378258:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20980);
	// stw r11,288(r8)
	PPC_STORE_U32(ctx.r8.u32 + 288, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378268"))) PPC_WEAK_FUNC(sub_83378268);
PPC_FUNC_IMPL(__imp__sub_83378268) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83378298:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83378298
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83378298;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833782A8"))) PPC_WEAK_FUNC(sub_833782A8);
PPC_FUNC_IMPL(__imp__sub_833782A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833782e8
	if (!ctx.cr6.eq) goto loc_833782E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833782DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833782dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833782DC;
loc_833782E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,348(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 348);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378318
	if (ctx.cr6.eq) goto loc_83378318;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,87
	ctx.r11.s64 = 87;
	// lwz r10,20984(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20984);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,348(r8)
	PPC_STORE_U32(ctx.r8.u32 + 348, ctx.r10.u32);
	// blr 
	return;
loc_83378318:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20984);
	// stw r11,348(r8)
	PPC_STORE_U32(ctx.r8.u32 + 348, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378328"))) PPC_WEAK_FUNC(sub_83378328);
PPC_FUNC_IMPL(__imp__sub_83378328) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83378358:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83378358
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83378358;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378368"))) PPC_WEAK_FUNC(sub_83378368);
PPC_FUNC_IMPL(__imp__sub_83378368) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833783a8
	if (!ctx.cr6.eq) goto loc_833783A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337839C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337839c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337839C;
loc_833783A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,384(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 384);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833783d8
	if (ctx.cr6.eq) goto loc_833783D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,96
	ctx.r11.s64 = 96;
	// lwz r10,20988(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20988);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,384(r8)
	PPC_STORE_U32(ctx.r8.u32 + 384, ctx.r10.u32);
	// blr 
	return;
loc_833783D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20988);
	// stw r11,384(r8)
	PPC_STORE_U32(ctx.r8.u32 + 384, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833783E8"))) PPC_WEAK_FUNC(sub_833783E8);
PPC_FUNC_IMPL(__imp__sub_833783E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83378418:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83378418
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83378418;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378428"))) PPC_WEAK_FUNC(sub_83378428);
PPC_FUNC_IMPL(__imp__sub_83378428) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83378468
	if (!ctx.cr6.eq) goto loc_83378468;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337845C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337845c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337845C;
loc_83378468:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,292(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 292);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378498
	if (ctx.cr6.eq) goto loc_83378498;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,73
	ctx.r11.s64 = 73;
	// lwz r10,20992(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20992);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 292, ctx.r10.u32);
	// blr 
	return;
loc_83378498:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20992(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20992);
	// stw r11,292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 292, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833784A8"))) PPC_WEAK_FUNC(sub_833784A8);
PPC_FUNC_IMPL(__imp__sub_833784A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833784D8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833784d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833784D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833784E8"))) PPC_WEAK_FUNC(sub_833784E8);
PPC_FUNC_IMPL(__imp__sub_833784E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83378528
	if (!ctx.cr6.eq) goto loc_83378528;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337851C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337851c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337851C;
loc_83378528:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,296(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 296);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378558
	if (ctx.cr6.eq) goto loc_83378558;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,74
	ctx.r11.s64 = 74;
	// lwz r10,20996(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20996);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,296(r8)
	PPC_STORE_U32(ctx.r8.u32 + 296, ctx.r10.u32);
	// blr 
	return;
loc_83378558:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,20996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20996);
	// stw r11,296(r8)
	PPC_STORE_U32(ctx.r8.u32 + 296, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378568"))) PPC_WEAK_FUNC(sub_83378568);
PPC_FUNC_IMPL(__imp__sub_83378568) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83378598:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83378598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83378598;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833785A8"))) PPC_WEAK_FUNC(sub_833785A8);
PPC_FUNC_IMPL(__imp__sub_833785A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833785e8
	if (!ctx.cr6.eq) goto loc_833785E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833785DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833785dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833785DC;
loc_833785E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,300(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 300);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378618
	if (ctx.cr6.eq) goto loc_83378618;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,75
	ctx.r11.s64 = 75;
	// lwz r10,21000(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21000);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,300(r8)
	PPC_STORE_U32(ctx.r8.u32 + 300, ctx.r10.u32);
	// blr 
	return;
loc_83378618:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21000);
	// stw r11,300(r8)
	PPC_STORE_U32(ctx.r8.u32 + 300, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378628"))) PPC_WEAK_FUNC(sub_83378628);
PPC_FUNC_IMPL(__imp__sub_83378628) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83378658:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83378658
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83378658;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378668"))) PPC_WEAK_FUNC(sub_83378668);
PPC_FUNC_IMPL(__imp__sub_83378668) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,25624
	ctx.r8.s64 = ctx.r11.s64 + 25624;
	// lwz r11,18172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833786a8
	if (!ctx.cr6.eq) goto loc_833786A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,255
	ctx.r10.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337869C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337869c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337869C;
loc_833786A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,304(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 304);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833786d8
	if (ctx.cr6.eq) goto loc_833786D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,76
	ctx.r11.s64 = 76;
	// lwz r10,21004(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21004);
	// stw r11,-31464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31464, ctx.r11.u32);
	// stw r10,304(r8)
	PPC_STORE_U32(ctx.r8.u32 + 304, ctx.r10.u32);
	// blr 
	return;
loc_833786D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21004);
	// stw r11,304(r8)
	PPC_STORE_U32(ctx.r8.u32 + 304, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833786E8"))) PPC_WEAK_FUNC(sub_833786E8);
PPC_FUNC_IMPL(__imp__sub_833786E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83378728
	if (!ctx.cr6.eq) goto loc_83378728;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337871C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337871c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337871C;
loc_83378728:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,516(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 516);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378758
	if (ctx.cr6.eq) goto loc_83378758;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,129
	ctx.r11.s64 = 129;
	// lwz r10,21008(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21008);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,516(r8)
	PPC_STORE_U32(ctx.r8.u32 + 516, ctx.r10.u32);
	// blr 
	return;
loc_83378758:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21008);
	// stw r11,516(r8)
	PPC_STORE_U32(ctx.r8.u32 + 516, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378768"))) PPC_WEAK_FUNC(sub_83378768);
PPC_FUNC_IMPL(__imp__sub_83378768) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833787a8
	if (!ctx.cr6.eq) goto loc_833787A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337879C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337879c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337879C;
loc_833787A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,968(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 968);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833787d8
	if (ctx.cr6.eq) goto loc_833787D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,242
	ctx.r11.s64 = 242;
	// lwz r10,21012(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21012);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,968(r8)
	PPC_STORE_U32(ctx.r8.u32 + 968, ctx.r10.u32);
	// blr 
	return;
loc_833787D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21012);
	// stw r11,968(r8)
	PPC_STORE_U32(ctx.r8.u32 + 968, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833787E8"))) PPC_WEAK_FUNC(sub_833787E8);
PPC_FUNC_IMPL(__imp__sub_833787E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83378828
	if (!ctx.cr6.eq) goto loc_83378828;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337881C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337881c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337881C;
loc_83378828:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,972(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 972);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378858
	if (ctx.cr6.eq) goto loc_83378858;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,243
	ctx.r11.s64 = 243;
	// lwz r10,21016(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21016);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,972(r8)
	PPC_STORE_U32(ctx.r8.u32 + 972, ctx.r10.u32);
	// blr 
	return;
loc_83378858:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21016);
	// stw r11,972(r8)
	PPC_STORE_U32(ctx.r8.u32 + 972, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378868"))) PPC_WEAK_FUNC(sub_83378868);
PPC_FUNC_IMPL(__imp__sub_83378868) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833788a8
	if (!ctx.cr6.eq) goto loc_833788A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337889C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337889c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337889C;
loc_833788A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,520(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 520);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833788d8
	if (ctx.cr6.eq) goto loc_833788D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,130
	ctx.r11.s64 = 130;
	// lwz r10,21020(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21020);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,520(r8)
	PPC_STORE_U32(ctx.r8.u32 + 520, ctx.r10.u32);
	// blr 
	return;
loc_833788D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21020);
	// stw r11,520(r8)
	PPC_STORE_U32(ctx.r8.u32 + 520, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833788E8"))) PPC_WEAK_FUNC(sub_833788E8);
PPC_FUNC_IMPL(__imp__sub_833788E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83378928
	if (!ctx.cr6.eq) goto loc_83378928;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337891C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337891c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337891C;
loc_83378928:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,524(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 524);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378958
	if (ctx.cr6.eq) goto loc_83378958;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,131
	ctx.r11.s64 = 131;
	// lwz r10,21024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21024);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,524(r8)
	PPC_STORE_U32(ctx.r8.u32 + 524, ctx.r10.u32);
	// blr 
	return;
loc_83378958:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21024);
	// stw r11,524(r8)
	PPC_STORE_U32(ctx.r8.u32 + 524, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378968"))) PPC_WEAK_FUNC(sub_83378968);
PPC_FUNC_IMPL(__imp__sub_83378968) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833789a8
	if (!ctx.cr6.eq) goto loc_833789A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337899C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337899c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337899C;
loc_833789A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,528(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 528);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833789d8
	if (ctx.cr6.eq) goto loc_833789D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,132
	ctx.r11.s64 = 132;
	// lwz r10,21028(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21028);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,528(r8)
	PPC_STORE_U32(ctx.r8.u32 + 528, ctx.r10.u32);
	// blr 
	return;
loc_833789D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21028);
	// stw r11,528(r8)
	PPC_STORE_U32(ctx.r8.u32 + 528, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833789E8"))) PPC_WEAK_FUNC(sub_833789E8);
PPC_FUNC_IMPL(__imp__sub_833789E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83378a28
	if (!ctx.cr6.eq) goto loc_83378A28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83378A1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83378a1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83378A1C;
loc_83378A28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,532(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 532);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378a58
	if (ctx.cr6.eq) goto loc_83378A58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,133
	ctx.r11.s64 = 133;
	// lwz r10,21032(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21032);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,532(r8)
	PPC_STORE_U32(ctx.r8.u32 + 532, ctx.r10.u32);
	// blr 
	return;
loc_83378A58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21032);
	// stw r11,532(r8)
	PPC_STORE_U32(ctx.r8.u32 + 532, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378A68"))) PPC_WEAK_FUNC(sub_83378A68);
PPC_FUNC_IMPL(__imp__sub_83378A68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83378aa8
	if (!ctx.cr6.eq) goto loc_83378AA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83378A9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83378a9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83378A9C;
loc_83378AA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,792(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 792);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378ad8
	if (ctx.cr6.eq) goto loc_83378AD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,198
	ctx.r11.s64 = 198;
	// lwz r10,21036(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,792(r8)
	PPC_STORE_U32(ctx.r8.u32 + 792, ctx.r10.u32);
	// blr 
	return;
loc_83378AD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21036);
	// stw r11,792(r8)
	PPC_STORE_U32(ctx.r8.u32 + 792, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378AE8"))) PPC_WEAK_FUNC(sub_83378AE8);
PPC_FUNC_IMPL(__imp__sub_83378AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83378b28
	if (!ctx.cr6.eq) goto loc_83378B28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83378B1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83378b1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83378B1C;
loc_83378B28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,536(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 536);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378b58
	if (ctx.cr6.eq) goto loc_83378B58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,134
	ctx.r11.s64 = 134;
	// lwz r10,21040(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21040);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,536(r8)
	PPC_STORE_U32(ctx.r8.u32 + 536, ctx.r10.u32);
	// blr 
	return;
loc_83378B58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21040);
	// stw r11,536(r8)
	PPC_STORE_U32(ctx.r8.u32 + 536, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378B68"))) PPC_WEAK_FUNC(sub_83378B68);
PPC_FUNC_IMPL(__imp__sub_83378B68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83378ba8
	if (!ctx.cr6.eq) goto loc_83378BA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83378B9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83378b9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83378B9C;
loc_83378BA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,540(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 540);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378bd8
	if (ctx.cr6.eq) goto loc_83378BD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,135
	ctx.r11.s64 = 135;
	// lwz r10,21044(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21044);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,540(r8)
	PPC_STORE_U32(ctx.r8.u32 + 540, ctx.r10.u32);
	// blr 
	return;
loc_83378BD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21044);
	// stw r11,540(r8)
	PPC_STORE_U32(ctx.r8.u32 + 540, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378BE8"))) PPC_WEAK_FUNC(sub_83378BE8);
PPC_FUNC_IMPL(__imp__sub_83378BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83378c28
	if (!ctx.cr6.eq) goto loc_83378C28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83378C1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83378c1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83378C1C;
loc_83378C28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,544(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 544);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378c58
	if (ctx.cr6.eq) goto loc_83378C58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,136
	ctx.r11.s64 = 136;
	// lwz r10,21048(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21048);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,544(r8)
	PPC_STORE_U32(ctx.r8.u32 + 544, ctx.r10.u32);
	// blr 
	return;
loc_83378C58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21048);
	// stw r11,544(r8)
	PPC_STORE_U32(ctx.r8.u32 + 544, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378C68"))) PPC_WEAK_FUNC(sub_83378C68);
PPC_FUNC_IMPL(__imp__sub_83378C68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83378ca8
	if (!ctx.cr6.eq) goto loc_83378CA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83378C9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83378c9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83378C9C;
loc_83378CA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,548(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 548);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378cd8
	if (ctx.cr6.eq) goto loc_83378CD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,137
	ctx.r11.s64 = 137;
	// lwz r10,21052(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21052);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,548(r8)
	PPC_STORE_U32(ctx.r8.u32 + 548, ctx.r10.u32);
	// blr 
	return;
loc_83378CD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21052);
	// stw r11,548(r8)
	PPC_STORE_U32(ctx.r8.u32 + 548, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378CE8"))) PPC_WEAK_FUNC(sub_83378CE8);
PPC_FUNC_IMPL(__imp__sub_83378CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83378d28
	if (!ctx.cr6.eq) goto loc_83378D28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83378D1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83378d1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83378D1C;
loc_83378D28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,552(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 552);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378d58
	if (ctx.cr6.eq) goto loc_83378D58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,138
	ctx.r11.s64 = 138;
	// lwz r10,21056(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21056);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,552(r8)
	PPC_STORE_U32(ctx.r8.u32 + 552, ctx.r10.u32);
	// blr 
	return;
loc_83378D58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21056);
	// stw r11,552(r8)
	PPC_STORE_U32(ctx.r8.u32 + 552, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378D68"))) PPC_WEAK_FUNC(sub_83378D68);
PPC_FUNC_IMPL(__imp__sub_83378D68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83378da8
	if (!ctx.cr6.eq) goto loc_83378DA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83378D9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83378d9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83378D9C;
loc_83378DA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,556(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 556);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378dd8
	if (ctx.cr6.eq) goto loc_83378DD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,139
	ctx.r11.s64 = 139;
	// lwz r10,21060(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21060);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,556(r8)
	PPC_STORE_U32(ctx.r8.u32 + 556, ctx.r10.u32);
	// blr 
	return;
loc_83378DD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21060);
	// stw r11,556(r8)
	PPC_STORE_U32(ctx.r8.u32 + 556, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378DE8"))) PPC_WEAK_FUNC(sub_83378DE8);
PPC_FUNC_IMPL(__imp__sub_83378DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83378e28
	if (!ctx.cr6.eq) goto loc_83378E28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83378E1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83378e1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83378E1C;
loc_83378E28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,560(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 560);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378e58
	if (ctx.cr6.eq) goto loc_83378E58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,140
	ctx.r11.s64 = 140;
	// lwz r10,21064(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21064);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,560(r8)
	PPC_STORE_U32(ctx.r8.u32 + 560, ctx.r10.u32);
	// blr 
	return;
loc_83378E58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21064);
	// stw r11,560(r8)
	PPC_STORE_U32(ctx.r8.u32 + 560, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378E68"))) PPC_WEAK_FUNC(sub_83378E68);
PPC_FUNC_IMPL(__imp__sub_83378E68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83378ea8
	if (!ctx.cr6.eq) goto loc_83378EA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83378E9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83378e9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83378E9C;
loc_83378EA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,564(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 564);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378ed8
	if (ctx.cr6.eq) goto loc_83378ED8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,141
	ctx.r11.s64 = 141;
	// lwz r10,21068(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21068);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,564(r8)
	PPC_STORE_U32(ctx.r8.u32 + 564, ctx.r10.u32);
	// blr 
	return;
loc_83378ED8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21068);
	// stw r11,564(r8)
	PPC_STORE_U32(ctx.r8.u32 + 564, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378EE8"))) PPC_WEAK_FUNC(sub_83378EE8);
PPC_FUNC_IMPL(__imp__sub_83378EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83378f28
	if (!ctx.cr6.eq) goto loc_83378F28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83378F1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83378f1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83378F1C;
loc_83378F28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,784(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 784);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378f58
	if (ctx.cr6.eq) goto loc_83378F58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,196
	ctx.r11.s64 = 196;
	// lwz r10,21072(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21072);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,784(r8)
	PPC_STORE_U32(ctx.r8.u32 + 784, ctx.r10.u32);
	// blr 
	return;
loc_83378F58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21072);
	// stw r11,784(r8)
	PPC_STORE_U32(ctx.r8.u32 + 784, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378F68"))) PPC_WEAK_FUNC(sub_83378F68);
PPC_FUNC_IMPL(__imp__sub_83378F68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83378fa8
	if (!ctx.cr6.eq) goto loc_83378FA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83378F9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83378f9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83378F9C;
loc_83378FA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,572(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 572);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83378fd8
	if (ctx.cr6.eq) goto loc_83378FD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,143
	ctx.r11.s64 = 143;
	// lwz r10,21076(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21076);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,572(r8)
	PPC_STORE_U32(ctx.r8.u32 + 572, ctx.r10.u32);
	// blr 
	return;
loc_83378FD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21076);
	// stw r11,572(r8)
	PPC_STORE_U32(ctx.r8.u32 + 572, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83378FE8"))) PPC_WEAK_FUNC(sub_83378FE8);
PPC_FUNC_IMPL(__imp__sub_83378FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379028
	if (!ctx.cr6.eq) goto loc_83379028;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337901C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337901c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337901C;
loc_83379028:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,576(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 576);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379058
	if (ctx.cr6.eq) goto loc_83379058;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,144
	ctx.r11.s64 = 144;
	// lwz r10,21080(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21080);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,576(r8)
	PPC_STORE_U32(ctx.r8.u32 + 576, ctx.r10.u32);
	// blr 
	return;
loc_83379058:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21080);
	// stw r11,576(r8)
	PPC_STORE_U32(ctx.r8.u32 + 576, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379068"))) PPC_WEAK_FUNC(sub_83379068);
PPC_FUNC_IMPL(__imp__sub_83379068) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833790a8
	if (!ctx.cr6.eq) goto loc_833790A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337909C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337909c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337909C;
loc_833790A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,580(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 580);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833790d8
	if (ctx.cr6.eq) goto loc_833790D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,145
	ctx.r11.s64 = 145;
	// lwz r10,21084(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21084);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,580(r8)
	PPC_STORE_U32(ctx.r8.u32 + 580, ctx.r10.u32);
	// blr 
	return;
loc_833790D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21084);
	// stw r11,580(r8)
	PPC_STORE_U32(ctx.r8.u32 + 580, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833790E8"))) PPC_WEAK_FUNC(sub_833790E8);
PPC_FUNC_IMPL(__imp__sub_833790E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379128
	if (!ctx.cr6.eq) goto loc_83379128;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337911C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337911c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337911C;
loc_83379128:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,584(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 584);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379158
	if (ctx.cr6.eq) goto loc_83379158;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,146
	ctx.r11.s64 = 146;
	// lwz r10,21088(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21088);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,584(r8)
	PPC_STORE_U32(ctx.r8.u32 + 584, ctx.r10.u32);
	// blr 
	return;
loc_83379158:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21088);
	// stw r11,584(r8)
	PPC_STORE_U32(ctx.r8.u32 + 584, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379168"))) PPC_WEAK_FUNC(sub_83379168);
PPC_FUNC_IMPL(__imp__sub_83379168) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833791a8
	if (!ctx.cr6.eq) goto loc_833791A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337919C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337919c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337919C;
loc_833791A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,588(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 588);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833791d8
	if (ctx.cr6.eq) goto loc_833791D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,147
	ctx.r11.s64 = 147;
	// lwz r10,21092(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21092);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,588(r8)
	PPC_STORE_U32(ctx.r8.u32 + 588, ctx.r10.u32);
	// blr 
	return;
loc_833791D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21092);
	// stw r11,588(r8)
	PPC_STORE_U32(ctx.r8.u32 + 588, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833791E8"))) PPC_WEAK_FUNC(sub_833791E8);
PPC_FUNC_IMPL(__imp__sub_833791E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379228
	if (!ctx.cr6.eq) goto loc_83379228;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337921C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337921c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337921C;
loc_83379228:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,592(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 592);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379258
	if (ctx.cr6.eq) goto loc_83379258;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,148
	ctx.r11.s64 = 148;
	// lwz r10,21096(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21096);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,592(r8)
	PPC_STORE_U32(ctx.r8.u32 + 592, ctx.r10.u32);
	// blr 
	return;
loc_83379258:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21096);
	// stw r11,592(r8)
	PPC_STORE_U32(ctx.r8.u32 + 592, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379268"))) PPC_WEAK_FUNC(sub_83379268);
PPC_FUNC_IMPL(__imp__sub_83379268) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833792a8
	if (!ctx.cr6.eq) goto loc_833792A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337929C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337929c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337929C;
loc_833792A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,596(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 596);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833792d8
	if (ctx.cr6.eq) goto loc_833792D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,149
	ctx.r11.s64 = 149;
	// lwz r10,21100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21100);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,596(r8)
	PPC_STORE_U32(ctx.r8.u32 + 596, ctx.r10.u32);
	// blr 
	return;
loc_833792D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21100);
	// stw r11,596(r8)
	PPC_STORE_U32(ctx.r8.u32 + 596, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833792E8"))) PPC_WEAK_FUNC(sub_833792E8);
PPC_FUNC_IMPL(__imp__sub_833792E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379328
	if (!ctx.cr6.eq) goto loc_83379328;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337931C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337931c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337931C;
loc_83379328:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,600(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 600);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379358
	if (ctx.cr6.eq) goto loc_83379358;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,150
	ctx.r11.s64 = 150;
	// lwz r10,21104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21104);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,600(r8)
	PPC_STORE_U32(ctx.r8.u32 + 600, ctx.r10.u32);
	// blr 
	return;
loc_83379358:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21104);
	// stw r11,600(r8)
	PPC_STORE_U32(ctx.r8.u32 + 600, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379368"))) PPC_WEAK_FUNC(sub_83379368);
PPC_FUNC_IMPL(__imp__sub_83379368) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833793a8
	if (!ctx.cr6.eq) goto loc_833793A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337939C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337939c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337939C;
loc_833793A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,604(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 604);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833793d8
	if (ctx.cr6.eq) goto loc_833793D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,151
	ctx.r11.s64 = 151;
	// lwz r10,21108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21108);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,604(r8)
	PPC_STORE_U32(ctx.r8.u32 + 604, ctx.r10.u32);
	// blr 
	return;
loc_833793D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21108);
	// stw r11,604(r8)
	PPC_STORE_U32(ctx.r8.u32 + 604, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833793E8"))) PPC_WEAK_FUNC(sub_833793E8);
PPC_FUNC_IMPL(__imp__sub_833793E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379428
	if (!ctx.cr6.eq) goto loc_83379428;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337941C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337941c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337941C;
loc_83379428:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,608(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 608);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379458
	if (ctx.cr6.eq) goto loc_83379458;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,152
	ctx.r11.s64 = 152;
	// lwz r10,21112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21112);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,608(r8)
	PPC_STORE_U32(ctx.r8.u32 + 608, ctx.r10.u32);
	// blr 
	return;
loc_83379458:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21112);
	// stw r11,608(r8)
	PPC_STORE_U32(ctx.r8.u32 + 608, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379468"))) PPC_WEAK_FUNC(sub_83379468);
PPC_FUNC_IMPL(__imp__sub_83379468) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833794a8
	if (!ctx.cr6.eq) goto loc_833794A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337949C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337949c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337949C;
loc_833794A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,612(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 612);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833794d8
	if (ctx.cr6.eq) goto loc_833794D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,153
	ctx.r11.s64 = 153;
	// lwz r10,21116(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21116);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,612(r8)
	PPC_STORE_U32(ctx.r8.u32 + 612, ctx.r10.u32);
	// blr 
	return;
loc_833794D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21116);
	// stw r11,612(r8)
	PPC_STORE_U32(ctx.r8.u32 + 612, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833794E8"))) PPC_WEAK_FUNC(sub_833794E8);
PPC_FUNC_IMPL(__imp__sub_833794E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379528
	if (!ctx.cr6.eq) goto loc_83379528;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337951C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337951c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337951C;
loc_83379528:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,616(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 616);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379558
	if (ctx.cr6.eq) goto loc_83379558;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,154
	ctx.r11.s64 = 154;
	// lwz r10,21120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21120);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,616(r8)
	PPC_STORE_U32(ctx.r8.u32 + 616, ctx.r10.u32);
	// blr 
	return;
loc_83379558:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// stw r11,616(r8)
	PPC_STORE_U32(ctx.r8.u32 + 616, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379568"))) PPC_WEAK_FUNC(sub_83379568);
PPC_FUNC_IMPL(__imp__sub_83379568) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833795a8
	if (!ctx.cr6.eq) goto loc_833795A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337959C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337959c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337959C;
loc_833795A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,620(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 620);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833795d8
	if (ctx.cr6.eq) goto loc_833795D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,155
	ctx.r11.s64 = 155;
	// lwz r10,21124(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21124);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,620(r8)
	PPC_STORE_U32(ctx.r8.u32 + 620, ctx.r10.u32);
	// blr 
	return;
loc_833795D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21124);
	// stw r11,620(r8)
	PPC_STORE_U32(ctx.r8.u32 + 620, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833795E8"))) PPC_WEAK_FUNC(sub_833795E8);
PPC_FUNC_IMPL(__imp__sub_833795E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379628
	if (!ctx.cr6.eq) goto loc_83379628;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337961C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337961c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337961C;
loc_83379628:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,624(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 624);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379658
	if (ctx.cr6.eq) goto loc_83379658;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,156
	ctx.r11.s64 = 156;
	// lwz r10,21128(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21128);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,624(r8)
	PPC_STORE_U32(ctx.r8.u32 + 624, ctx.r10.u32);
	// blr 
	return;
loc_83379658:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21128);
	// stw r11,624(r8)
	PPC_STORE_U32(ctx.r8.u32 + 624, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379668"))) PPC_WEAK_FUNC(sub_83379668);
PPC_FUNC_IMPL(__imp__sub_83379668) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833796a8
	if (!ctx.cr6.eq) goto loc_833796A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337969C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337969c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337969C;
loc_833796A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,628(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 628);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833796d8
	if (ctx.cr6.eq) goto loc_833796D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,157
	ctx.r11.s64 = 157;
	// lwz r10,21132(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21132);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,628(r8)
	PPC_STORE_U32(ctx.r8.u32 + 628, ctx.r10.u32);
	// blr 
	return;
loc_833796D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21132);
	// stw r11,628(r8)
	PPC_STORE_U32(ctx.r8.u32 + 628, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833796E8"))) PPC_WEAK_FUNC(sub_833796E8);
PPC_FUNC_IMPL(__imp__sub_833796E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379728
	if (!ctx.cr6.eq) goto loc_83379728;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337971C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337971c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337971C;
loc_83379728:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,632(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 632);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379758
	if (ctx.cr6.eq) goto loc_83379758;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,158
	ctx.r11.s64 = 158;
	// lwz r10,21136(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21136);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,632(r8)
	PPC_STORE_U32(ctx.r8.u32 + 632, ctx.r10.u32);
	// blr 
	return;
loc_83379758:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21136);
	// stw r11,632(r8)
	PPC_STORE_U32(ctx.r8.u32 + 632, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379768"))) PPC_WEAK_FUNC(sub_83379768);
PPC_FUNC_IMPL(__imp__sub_83379768) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833797a8
	if (!ctx.cr6.eq) goto loc_833797A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337979C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337979c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337979C;
loc_833797A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,636(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 636);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833797d8
	if (ctx.cr6.eq) goto loc_833797D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,159
	ctx.r11.s64 = 159;
	// lwz r10,21140(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21140);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,636(r8)
	PPC_STORE_U32(ctx.r8.u32 + 636, ctx.r10.u32);
	// blr 
	return;
loc_833797D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21140);
	// stw r11,636(r8)
	PPC_STORE_U32(ctx.r8.u32 + 636, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833797E8"))) PPC_WEAK_FUNC(sub_833797E8);
PPC_FUNC_IMPL(__imp__sub_833797E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379828
	if (!ctx.cr6.eq) goto loc_83379828;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337981C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337981c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337981C;
loc_83379828:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,640(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 640);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379858
	if (ctx.cr6.eq) goto loc_83379858;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,160
	ctx.r11.s64 = 160;
	// lwz r10,21144(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21144);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,640(r8)
	PPC_STORE_U32(ctx.r8.u32 + 640, ctx.r10.u32);
	// blr 
	return;
loc_83379858:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21144);
	// stw r11,640(r8)
	PPC_STORE_U32(ctx.r8.u32 + 640, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379868"))) PPC_WEAK_FUNC(sub_83379868);
PPC_FUNC_IMPL(__imp__sub_83379868) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833798a8
	if (!ctx.cr6.eq) goto loc_833798A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337989C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337989c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337989C;
loc_833798A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,644(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 644);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833798d8
	if (ctx.cr6.eq) goto loc_833798D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,161
	ctx.r11.s64 = 161;
	// lwz r10,21148(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21148);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,644(r8)
	PPC_STORE_U32(ctx.r8.u32 + 644, ctx.r10.u32);
	// blr 
	return;
loc_833798D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21148);
	// stw r11,644(r8)
	PPC_STORE_U32(ctx.r8.u32 + 644, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833798E8"))) PPC_WEAK_FUNC(sub_833798E8);
PPC_FUNC_IMPL(__imp__sub_833798E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379928
	if (!ctx.cr6.eq) goto loc_83379928;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337991C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337991c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337991C;
loc_83379928:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,648(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 648);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379958
	if (ctx.cr6.eq) goto loc_83379958;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,162
	ctx.r11.s64 = 162;
	// lwz r10,21152(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21152);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,648(r8)
	PPC_STORE_U32(ctx.r8.u32 + 648, ctx.r10.u32);
	// blr 
	return;
loc_83379958:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21152);
	// stw r11,648(r8)
	PPC_STORE_U32(ctx.r8.u32 + 648, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379968"))) PPC_WEAK_FUNC(sub_83379968);
PPC_FUNC_IMPL(__imp__sub_83379968) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833799a8
	if (!ctx.cr6.eq) goto loc_833799A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337999C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337999c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337999C;
loc_833799A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,652(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 652);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833799d8
	if (ctx.cr6.eq) goto loc_833799D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,163
	ctx.r11.s64 = 163;
	// lwz r10,21156(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21156);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,652(r8)
	PPC_STORE_U32(ctx.r8.u32 + 652, ctx.r10.u32);
	// blr 
	return;
loc_833799D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21156);
	// stw r11,652(r8)
	PPC_STORE_U32(ctx.r8.u32 + 652, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833799E8"))) PPC_WEAK_FUNC(sub_833799E8);
PPC_FUNC_IMPL(__imp__sub_833799E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379a28
	if (!ctx.cr6.eq) goto loc_83379A28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83379A1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83379a1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83379A1C;
loc_83379A28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,656(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 656);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379a58
	if (ctx.cr6.eq) goto loc_83379A58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,164
	ctx.r11.s64 = 164;
	// lwz r10,21160(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21160);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,656(r8)
	PPC_STORE_U32(ctx.r8.u32 + 656, ctx.r10.u32);
	// blr 
	return;
loc_83379A58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21160);
	// stw r11,656(r8)
	PPC_STORE_U32(ctx.r8.u32 + 656, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379A68"))) PPC_WEAK_FUNC(sub_83379A68);
PPC_FUNC_IMPL(__imp__sub_83379A68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379aa8
	if (!ctx.cr6.eq) goto loc_83379AA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83379A9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83379a9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83379A9C;
loc_83379AA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,660(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 660);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379ad8
	if (ctx.cr6.eq) goto loc_83379AD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,165
	ctx.r11.s64 = 165;
	// lwz r10,21164(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21164);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,660(r8)
	PPC_STORE_U32(ctx.r8.u32 + 660, ctx.r10.u32);
	// blr 
	return;
loc_83379AD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21164);
	// stw r11,660(r8)
	PPC_STORE_U32(ctx.r8.u32 + 660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379AE8"))) PPC_WEAK_FUNC(sub_83379AE8);
PPC_FUNC_IMPL(__imp__sub_83379AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379b28
	if (!ctx.cr6.eq) goto loc_83379B28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83379B1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83379b1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83379B1C;
loc_83379B28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,664(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 664);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379b58
	if (ctx.cr6.eq) goto loc_83379B58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,166
	ctx.r11.s64 = 166;
	// lwz r10,21168(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21168);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,664(r8)
	PPC_STORE_U32(ctx.r8.u32 + 664, ctx.r10.u32);
	// blr 
	return;
loc_83379B58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21168);
	// stw r11,664(r8)
	PPC_STORE_U32(ctx.r8.u32 + 664, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379B68"))) PPC_WEAK_FUNC(sub_83379B68);
PPC_FUNC_IMPL(__imp__sub_83379B68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379ba8
	if (!ctx.cr6.eq) goto loc_83379BA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83379B9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83379b9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83379B9C;
loc_83379BA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,668(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 668);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379bd8
	if (ctx.cr6.eq) goto loc_83379BD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,167
	ctx.r11.s64 = 167;
	// lwz r10,21172(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21172);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,668(r8)
	PPC_STORE_U32(ctx.r8.u32 + 668, ctx.r10.u32);
	// blr 
	return;
loc_83379BD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21172);
	// stw r11,668(r8)
	PPC_STORE_U32(ctx.r8.u32 + 668, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379BE8"))) PPC_WEAK_FUNC(sub_83379BE8);
PPC_FUNC_IMPL(__imp__sub_83379BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379c28
	if (!ctx.cr6.eq) goto loc_83379C28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83379C1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83379c1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83379C1C;
loc_83379C28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,996(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 996);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379c58
	if (ctx.cr6.eq) goto loc_83379C58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,249
	ctx.r11.s64 = 249;
	// lwz r10,21176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21176);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,996(r8)
	PPC_STORE_U32(ctx.r8.u32 + 996, ctx.r10.u32);
	// blr 
	return;
loc_83379C58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21176);
	// stw r11,996(r8)
	PPC_STORE_U32(ctx.r8.u32 + 996, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379C68"))) PPC_WEAK_FUNC(sub_83379C68);
PPC_FUNC_IMPL(__imp__sub_83379C68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379ca8
	if (!ctx.cr6.eq) goto loc_83379CA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83379C9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83379c9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83379C9C;
loc_83379CA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1000(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1000);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379cd8
	if (ctx.cr6.eq) goto loc_83379CD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,250
	ctx.r11.s64 = 250;
	// lwz r10,21180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21180);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1000(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1000, ctx.r10.u32);
	// blr 
	return;
loc_83379CD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21180);
	// stw r11,1000(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1000, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379CE8"))) PPC_WEAK_FUNC(sub_83379CE8);
PPC_FUNC_IMPL(__imp__sub_83379CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379d28
	if (!ctx.cr6.eq) goto loc_83379D28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83379D1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83379d1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83379D1C;
loc_83379D28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1004(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1004);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379d58
	if (ctx.cr6.eq) goto loc_83379D58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,251
	ctx.r11.s64 = 251;
	// lwz r10,21184(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21184);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1004(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1004, ctx.r10.u32);
	// blr 
	return;
loc_83379D58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21184);
	// stw r11,1004(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1004, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379D68"))) PPC_WEAK_FUNC(sub_83379D68);
PPC_FUNC_IMPL(__imp__sub_83379D68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379da8
	if (!ctx.cr6.eq) goto loc_83379DA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83379D9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83379d9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83379D9C;
loc_83379DA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,676(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 676);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379dd8
	if (ctx.cr6.eq) goto loc_83379DD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,169
	ctx.r11.s64 = 169;
	// lwz r10,21188(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21188);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,676(r8)
	PPC_STORE_U32(ctx.r8.u32 + 676, ctx.r10.u32);
	// blr 
	return;
loc_83379DD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21188);
	// stw r11,676(r8)
	PPC_STORE_U32(ctx.r8.u32 + 676, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379DE8"))) PPC_WEAK_FUNC(sub_83379DE8);
PPC_FUNC_IMPL(__imp__sub_83379DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379e28
	if (!ctx.cr6.eq) goto loc_83379E28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83379E1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83379e1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83379E1C;
loc_83379E28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,680(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 680);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379e58
	if (ctx.cr6.eq) goto loc_83379E58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,170
	ctx.r11.s64 = 170;
	// lwz r10,21192(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21192);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,680(r8)
	PPC_STORE_U32(ctx.r8.u32 + 680, ctx.r10.u32);
	// blr 
	return;
loc_83379E58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21192);
	// stw r11,680(r8)
	PPC_STORE_U32(ctx.r8.u32 + 680, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379E68"))) PPC_WEAK_FUNC(sub_83379E68);
PPC_FUNC_IMPL(__imp__sub_83379E68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379ea8
	if (!ctx.cr6.eq) goto loc_83379EA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83379E9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83379e9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83379E9C;
loc_83379EA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,684(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 684);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379ed8
	if (ctx.cr6.eq) goto loc_83379ED8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,171
	ctx.r11.s64 = 171;
	// lwz r10,21196(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21196);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,684(r8)
	PPC_STORE_U32(ctx.r8.u32 + 684, ctx.r10.u32);
	// blr 
	return;
loc_83379ED8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21196);
	// stw r11,684(r8)
	PPC_STORE_U32(ctx.r8.u32 + 684, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379EE8"))) PPC_WEAK_FUNC(sub_83379EE8);
PPC_FUNC_IMPL(__imp__sub_83379EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379f28
	if (!ctx.cr6.eq) goto loc_83379F28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83379F1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83379f1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83379F1C;
loc_83379F28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,688(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 688);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379f58
	if (ctx.cr6.eq) goto loc_83379F58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,172
	ctx.r11.s64 = 172;
	// lwz r10,21200(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21200);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,688(r8)
	PPC_STORE_U32(ctx.r8.u32 + 688, ctx.r10.u32);
	// blr 
	return;
loc_83379F58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21200);
	// stw r11,688(r8)
	PPC_STORE_U32(ctx.r8.u32 + 688, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379F68"))) PPC_WEAK_FUNC(sub_83379F68);
PPC_FUNC_IMPL(__imp__sub_83379F68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83379fa8
	if (!ctx.cr6.eq) goto loc_83379FA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83379F9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83379f9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83379F9C;
loc_83379FA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,692(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 692);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83379fd8
	if (ctx.cr6.eq) goto loc_83379FD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,173
	ctx.r11.s64 = 173;
	// lwz r10,21204(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21204);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,692(r8)
	PPC_STORE_U32(ctx.r8.u32 + 692, ctx.r10.u32);
	// blr 
	return;
loc_83379FD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21204);
	// stw r11,692(r8)
	PPC_STORE_U32(ctx.r8.u32 + 692, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83379FE8"))) PPC_WEAK_FUNC(sub_83379FE8);
PPC_FUNC_IMPL(__imp__sub_83379FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337a028
	if (!ctx.cr6.eq) goto loc_8337A028;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337A01C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337a01c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337A01C;
loc_8337A028:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,696(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 696);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337a058
	if (ctx.cr6.eq) goto loc_8337A058;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,174
	ctx.r11.s64 = 174;
	// lwz r10,21208(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21208);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,696(r8)
	PPC_STORE_U32(ctx.r8.u32 + 696, ctx.r10.u32);
	// blr 
	return;
loc_8337A058:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21208);
	// stw r11,696(r8)
	PPC_STORE_U32(ctx.r8.u32 + 696, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337A068"))) PPC_WEAK_FUNC(sub_8337A068);
PPC_FUNC_IMPL(__imp__sub_8337A068) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337a0a8
	if (!ctx.cr6.eq) goto loc_8337A0A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337A09C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337a09c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337A09C;
loc_8337A0A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,700(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 700);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337a0d8
	if (ctx.cr6.eq) goto loc_8337A0D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,175
	ctx.r11.s64 = 175;
	// lwz r10,21212(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21212);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,700(r8)
	PPC_STORE_U32(ctx.r8.u32 + 700, ctx.r10.u32);
	// blr 
	return;
loc_8337A0D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21212);
	// stw r11,700(r8)
	PPC_STORE_U32(ctx.r8.u32 + 700, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337A0E8"))) PPC_WEAK_FUNC(sub_8337A0E8);
PPC_FUNC_IMPL(__imp__sub_8337A0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337a128
	if (!ctx.cr6.eq) goto loc_8337A128;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337A11C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337a11c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337A11C;
loc_8337A128:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,704(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 704);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337a158
	if (ctx.cr6.eq) goto loc_8337A158;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,176
	ctx.r11.s64 = 176;
	// lwz r10,21216(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21216);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,704(r8)
	PPC_STORE_U32(ctx.r8.u32 + 704, ctx.r10.u32);
	// blr 
	return;
loc_8337A158:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21216);
	// stw r11,704(r8)
	PPC_STORE_U32(ctx.r8.u32 + 704, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337A168"))) PPC_WEAK_FUNC(sub_8337A168);
PPC_FUNC_IMPL(__imp__sub_8337A168) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337a1a8
	if (!ctx.cr6.eq) goto loc_8337A1A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337A19C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337a19c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337A19C;
loc_8337A1A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,708(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 708);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337a1d8
	if (ctx.cr6.eq) goto loc_8337A1D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,177
	ctx.r11.s64 = 177;
	// lwz r10,21220(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21220);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,708(r8)
	PPC_STORE_U32(ctx.r8.u32 + 708, ctx.r10.u32);
	// blr 
	return;
loc_8337A1D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21220);
	// stw r11,708(r8)
	PPC_STORE_U32(ctx.r8.u32 + 708, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337A1E8"))) PPC_WEAK_FUNC(sub_8337A1E8);
PPC_FUNC_IMPL(__imp__sub_8337A1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337a228
	if (!ctx.cr6.eq) goto loc_8337A228;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337A21C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337a21c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337A21C;
loc_8337A228:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,712(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 712);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337a258
	if (ctx.cr6.eq) goto loc_8337A258;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,178
	ctx.r11.s64 = 178;
	// lwz r10,21224(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21224);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,712(r8)
	PPC_STORE_U32(ctx.r8.u32 + 712, ctx.r10.u32);
	// blr 
	return;
loc_8337A258:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21224);
	// stw r11,712(r8)
	PPC_STORE_U32(ctx.r8.u32 + 712, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337A268"))) PPC_WEAK_FUNC(sub_8337A268);
PPC_FUNC_IMPL(__imp__sub_8337A268) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337a2a8
	if (!ctx.cr6.eq) goto loc_8337A2A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337A29C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337a29c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337A29C;
loc_8337A2A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,716(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 716);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337a2d8
	if (ctx.cr6.eq) goto loc_8337A2D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,179
	ctx.r11.s64 = 179;
	// lwz r10,21228(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21228);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,716(r8)
	PPC_STORE_U32(ctx.r8.u32 + 716, ctx.r10.u32);
	// blr 
	return;
loc_8337A2D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21228);
	// stw r11,716(r8)
	PPC_STORE_U32(ctx.r8.u32 + 716, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337A2E8"))) PPC_WEAK_FUNC(sub_8337A2E8);
PPC_FUNC_IMPL(__imp__sub_8337A2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337a328
	if (!ctx.cr6.eq) goto loc_8337A328;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337A31C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337a31c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337A31C;
loc_8337A328:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,720(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 720);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337a358
	if (ctx.cr6.eq) goto loc_8337A358;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,180
	ctx.r11.s64 = 180;
	// lwz r10,21232(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21232);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,720(r8)
	PPC_STORE_U32(ctx.r8.u32 + 720, ctx.r10.u32);
	// blr 
	return;
loc_8337A358:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21232);
	// stw r11,720(r8)
	PPC_STORE_U32(ctx.r8.u32 + 720, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337A368"))) PPC_WEAK_FUNC(sub_8337A368);
PPC_FUNC_IMPL(__imp__sub_8337A368) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337a3a8
	if (!ctx.cr6.eq) goto loc_8337A3A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337A39C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337a39c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337A39C;
loc_8337A3A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,724(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 724);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337a3d8
	if (ctx.cr6.eq) goto loc_8337A3D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,181
	ctx.r11.s64 = 181;
	// lwz r10,21236(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21236);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,724(r8)
	PPC_STORE_U32(ctx.r8.u32 + 724, ctx.r10.u32);
	// blr 
	return;
loc_8337A3D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21236);
	// stw r11,724(r8)
	PPC_STORE_U32(ctx.r8.u32 + 724, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337A3E8"))) PPC_WEAK_FUNC(sub_8337A3E8);
PPC_FUNC_IMPL(__imp__sub_8337A3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337a428
	if (!ctx.cr6.eq) goto loc_8337A428;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337A41C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337a41c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337A41C;
loc_8337A428:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,840(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 840);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337a458
	if (ctx.cr6.eq) goto loc_8337A458;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,210
	ctx.r11.s64 = 210;
	// lwz r10,21240(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21240);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,840(r8)
	PPC_STORE_U32(ctx.r8.u32 + 840, ctx.r10.u32);
	// blr 
	return;
loc_8337A458:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21240);
	// stw r11,840(r8)
	PPC_STORE_U32(ctx.r8.u32 + 840, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337A468"))) PPC_WEAK_FUNC(sub_8337A468);
PPC_FUNC_IMPL(__imp__sub_8337A468) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337a4a8
	if (!ctx.cr6.eq) goto loc_8337A4A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337A49C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337a49c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337A49C;
loc_8337A4A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,728(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 728);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337a4d8
	if (ctx.cr6.eq) goto loc_8337A4D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,182
	ctx.r11.s64 = 182;
	// lwz r10,21244(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21244);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,728(r8)
	PPC_STORE_U32(ctx.r8.u32 + 728, ctx.r10.u32);
	// blr 
	return;
loc_8337A4D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21244);
	// stw r11,728(r8)
	PPC_STORE_U32(ctx.r8.u32 + 728, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337A4E8"))) PPC_WEAK_FUNC(sub_8337A4E8);
PPC_FUNC_IMPL(__imp__sub_8337A4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337a528
	if (!ctx.cr6.eq) goto loc_8337A528;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337A51C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337a51c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337A51C;
loc_8337A528:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,732(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 732);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337a558
	if (ctx.cr6.eq) goto loc_8337A558;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,183
	ctx.r11.s64 = 183;
	// lwz r10,21248(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21248);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,732(r8)
	PPC_STORE_U32(ctx.r8.u32 + 732, ctx.r10.u32);
	// blr 
	return;
loc_8337A558:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21248);
	// stw r11,732(r8)
	PPC_STORE_U32(ctx.r8.u32 + 732, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337A568"))) PPC_WEAK_FUNC(sub_8337A568);
PPC_FUNC_IMPL(__imp__sub_8337A568) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337a5a8
	if (!ctx.cr6.eq) goto loc_8337A5A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337A59C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337a59c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337A59C;
loc_8337A5A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,736(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 736);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337a5d8
	if (ctx.cr6.eq) goto loc_8337A5D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,184
	ctx.r11.s64 = 184;
	// lwz r10,21252(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21252);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,736(r8)
	PPC_STORE_U32(ctx.r8.u32 + 736, ctx.r10.u32);
	// blr 
	return;
loc_8337A5D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21252);
	// stw r11,736(r8)
	PPC_STORE_U32(ctx.r8.u32 + 736, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337A5E8"))) PPC_WEAK_FUNC(sub_8337A5E8);
PPC_FUNC_IMPL(__imp__sub_8337A5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337a628
	if (!ctx.cr6.eq) goto loc_8337A628;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337A61C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337a61c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337A61C;
loc_8337A628:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,740(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 740);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337a658
	if (ctx.cr6.eq) goto loc_8337A658;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,185
	ctx.r11.s64 = 185;
	// lwz r10,21256(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21256);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,740(r8)
	PPC_STORE_U32(ctx.r8.u32 + 740, ctx.r10.u32);
	// blr 
	return;
loc_8337A658:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21256);
	// stw r11,740(r8)
	PPC_STORE_U32(ctx.r8.u32 + 740, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337A668"))) PPC_WEAK_FUNC(sub_8337A668);
PPC_FUNC_IMPL(__imp__sub_8337A668) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337a6a8
	if (!ctx.cr6.eq) goto loc_8337A6A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337A69C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337a69c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337A69C;
loc_8337A6A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,744(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 744);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337a6d8
	if (ctx.cr6.eq) goto loc_8337A6D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,186
	ctx.r11.s64 = 186;
	// lwz r10,21260(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21260);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,744(r8)
	PPC_STORE_U32(ctx.r8.u32 + 744, ctx.r10.u32);
	// blr 
	return;
loc_8337A6D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21260);
	// stw r11,744(r8)
	PPC_STORE_U32(ctx.r8.u32 + 744, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337A6E8"))) PPC_WEAK_FUNC(sub_8337A6E8);
PPC_FUNC_IMPL(__imp__sub_8337A6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337a728
	if (!ctx.cr6.eq) goto loc_8337A728;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337A71C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337a71c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337A71C;
loc_8337A728:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,748(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 748);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337a758
	if (ctx.cr6.eq) goto loc_8337A758;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,187
	ctx.r11.s64 = 187;
	// lwz r10,21264(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21264);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,748(r8)
	PPC_STORE_U32(ctx.r8.u32 + 748, ctx.r10.u32);
	// blr 
	return;
loc_8337A758:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21264);
	// stw r11,748(r8)
	PPC_STORE_U32(ctx.r8.u32 + 748, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337A768"))) PPC_WEAK_FUNC(sub_8337A768);
PPC_FUNC_IMPL(__imp__sub_8337A768) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337A798:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337a798
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337A798;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337A7A8"))) PPC_WEAK_FUNC(sub_8337A7A8);
PPC_FUNC_IMPL(__imp__sub_8337A7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337a7e8
	if (!ctx.cr6.eq) goto loc_8337A7E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337A7DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337a7dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337A7DC;
loc_8337A7E8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,752(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 752);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337a818
	if (ctx.cr6.eq) goto loc_8337A818;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,188
	ctx.r11.s64 = 188;
	// lwz r10,21272(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21272);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,752(r8)
	PPC_STORE_U32(ctx.r8.u32 + 752, ctx.r10.u32);
	// blr 
	return;
loc_8337A818:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21272);
	// stw r11,752(r8)
	PPC_STORE_U32(ctx.r8.u32 + 752, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337A828"))) PPC_WEAK_FUNC(sub_8337A828);
PPC_FUNC_IMPL(__imp__sub_8337A828) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337A858:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337a858
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337A858;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337A868"))) PPC_WEAK_FUNC(sub_8337A868);
PPC_FUNC_IMPL(__imp__sub_8337A868) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337a8a8
	if (!ctx.cr6.eq) goto loc_8337A8A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337A89C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337a89c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337A89C;
loc_8337A8A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,756(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 756);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337a8d8
	if (ctx.cr6.eq) goto loc_8337A8D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,189
	ctx.r11.s64 = 189;
	// lwz r10,21280(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21280);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,756(r8)
	PPC_STORE_U32(ctx.r8.u32 + 756, ctx.r10.u32);
	// blr 
	return;
loc_8337A8D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21280);
	// stw r11,756(r8)
	PPC_STORE_U32(ctx.r8.u32 + 756, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337A8E8"))) PPC_WEAK_FUNC(sub_8337A8E8);
PPC_FUNC_IMPL(__imp__sub_8337A8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337a928
	if (!ctx.cr6.eq) goto loc_8337A928;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337A91C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337a91c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337A91C;
loc_8337A928:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,760(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 760);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337a958
	if (ctx.cr6.eq) goto loc_8337A958;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,190
	ctx.r11.s64 = 190;
	// lwz r10,21284(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21284);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,760(r8)
	PPC_STORE_U32(ctx.r8.u32 + 760, ctx.r10.u32);
	// blr 
	return;
loc_8337A958:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21284);
	// stw r11,760(r8)
	PPC_STORE_U32(ctx.r8.u32 + 760, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337A968"))) PPC_WEAK_FUNC(sub_8337A968);
PPC_FUNC_IMPL(__imp__sub_8337A968) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337a9a8
	if (!ctx.cr6.eq) goto loc_8337A9A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337A99C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337a99c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337A99C;
loc_8337A9A8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,764(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 764);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337a9d8
	if (ctx.cr6.eq) goto loc_8337A9D8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,191
	ctx.r11.s64 = 191;
	// lwz r10,21288(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21288);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,764(r8)
	PPC_STORE_U32(ctx.r8.u32 + 764, ctx.r10.u32);
	// blr 
	return;
loc_8337A9D8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21288);
	// stw r11,764(r8)
	PPC_STORE_U32(ctx.r8.u32 + 764, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337A9E8"))) PPC_WEAK_FUNC(sub_8337A9E8);
PPC_FUNC_IMPL(__imp__sub_8337A9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337aa28
	if (!ctx.cr6.eq) goto loc_8337AA28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337AA1C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337aa1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337AA1C;
loc_8337AA28:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,768(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 768);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337aa58
	if (ctx.cr6.eq) goto loc_8337AA58;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,192
	ctx.r11.s64 = 192;
	// lwz r10,21292(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21292);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,768(r8)
	PPC_STORE_U32(ctx.r8.u32 + 768, ctx.r10.u32);
	// blr 
	return;
loc_8337AA58:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21292);
	// stw r11,768(r8)
	PPC_STORE_U32(ctx.r8.u32 + 768, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8337AA68"))) PPC_WEAK_FUNC(sub_8337AA68);
PPC_FUNC_IMPL(__imp__sub_8337AA68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8337aaa8
	if (!ctx.cr6.eq) goto loc_8337AAA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8337AA9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8337aa9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8337AA9C;
loc_8337AAA8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,772(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 772);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8337aad8
	if (ctx.cr6.eq) goto loc_8337AAD8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,193
	ctx.r11.s64 = 193;
	// lwz r10,21296(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21296);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,772(r8)
	PPC_STORE_U32(ctx.r8.u32 + 772, ctx.r10.u32);
	// blr 
	return;
loc_8337AAD8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,21296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21296);
	// stw r11,772(r8)
	PPC_STORE_U32(ctx.r8.u32 + 772, ctx.r11.u32);
	// blr 
	return;
}

