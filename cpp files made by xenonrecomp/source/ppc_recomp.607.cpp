#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8338A0B4"))) PPC_WEAK_FUNC(sub_8338A0B4);
PPC_FUNC_IMPL(__imp__sub_8338A0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A0B8"))) PPC_WEAK_FUNC(sub_8338A0B8);
PPC_FUNC_IMPL(__imp__sub_8338A0B8) {
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
	// addi r3,r11,-8388
	ctx.r3.s64 = ctx.r11.s64 + -8388;
	// bl 0x82884d40
	ctx.lr = 0x8338A0D0;
	sub_82884D40(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r3,r10,8192
	ctx.r3.s64 = ctx.r10.s64 + 8192;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338A0DC;
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

__attribute__((alias("__imp__sub_8338A0EC"))) PPC_WEAK_FUNC(sub_8338A0EC);
PPC_FUNC_IMPL(__imp__sub_8338A0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A0F0"))) PPC_WEAK_FUNC(sub_8338A0F0);
PPC_FUNC_IMPL(__imp__sub_8338A0F0) {
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
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// addi r30,r31,-8364
	ctx.r30.s64 = ctx.r31.s64 + -8364;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,20040
	ctx.r5.s64 = ctx.r8.s64 + 20040;
	// addi r4,r7,20100
	ctx.r4.s64 = ctx.r7.s64 + 20100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-5160
	ctx.r10.s64 = ctx.r10.s64 + -5160;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338A14C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lis r9,-32120
	ctx.r9.s64 = -2105016320;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-5000
	ctx.r10.s64 = ctx.r10.s64 + -5000;
	// addi r9,r9,-520
	ctx.r9.s64 = ctx.r9.s64 + -520;
	// stw r11,-8364(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8364, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,8232
	ctx.r3.s64 = ctx.r3.s64 + 8232;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338A17C;
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

__attribute__((alias("__imp__sub_8338A194"))) PPC_WEAK_FUNC(sub_8338A194);
PPC_FUNC_IMPL(__imp__sub_8338A194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A198"))) PPC_WEAK_FUNC(sub_8338A198);
PPC_FUNC_IMPL(__imp__sub_8338A198) {
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
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// addi r30,r31,-8272
	ctx.r30.s64 = ctx.r31.s64 + -8272;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,20160
	ctx.r5.s64 = ctx.r8.s64 + 20160;
	// addi r4,r7,20224
	ctx.r4.s64 = ctx.r7.s64 + 20224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-4688
	ctx.r10.s64 = ctx.r10.s64 + -4688;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338A1F4;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lis r9,-32120
	ctx.r9.s64 = -2105016320;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-4528
	ctx.r10.s64 = ctx.r10.s64 + -4528;
	// addi r9,r9,-520
	ctx.r9.s64 = ctx.r9.s64 + -520;
	// stw r11,-8272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8272, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,8320
	ctx.r3.s64 = ctx.r3.s64 + 8320;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338A224;
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

__attribute__((alias("__imp__sub_8338A23C"))) PPC_WEAK_FUNC(sub_8338A23C);
PPC_FUNC_IMPL(__imp__sub_8338A23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A240"))) PPC_WEAK_FUNC(sub_8338A240);
PPC_FUNC_IMPL(__imp__sub_8338A240) {
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
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// addi r30,r31,-8180
	ctx.r30.s64 = ctx.r31.s64 + -8180;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,20296
	ctx.r5.s64 = ctx.r8.s64 + 20296;
	// addi r4,r7,20376
	ctx.r4.s64 = ctx.r7.s64 + 20376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-4216
	ctx.r10.s64 = ctx.r10.s64 + -4216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338A29C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lis r9,-32120
	ctx.r9.s64 = -2105016320;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-4056
	ctx.r10.s64 = ctx.r10.s64 + -4056;
	// addi r9,r9,-3936
	ctx.r9.s64 = ctx.r9.s64 + -3936;
	// stw r11,-8180(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8180, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,8408
	ctx.r3.s64 = ctx.r3.s64 + 8408;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338A2CC;
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

__attribute__((alias("__imp__sub_8338A2E4"))) PPC_WEAK_FUNC(sub_8338A2E4);
PPC_FUNC_IMPL(__imp__sub_8338A2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A2E8"))) PPC_WEAK_FUNC(sub_8338A2E8);
PPC_FUNC_IMPL(__imp__sub_8338A2E8) {
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
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// addi r30,r31,-8088
	ctx.r30.s64 = ctx.r31.s64 + -8088;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,20456
	ctx.r5.s64 = ctx.r8.s64 + 20456;
	// addi r4,r7,20528
	ctx.r4.s64 = ctx.r7.s64 + 20528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-3744
	ctx.r10.s64 = ctx.r10.s64 + -3744;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338A344;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lis r9,-32120
	ctx.r9.s64 = -2105016320;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-3576
	ctx.r10.s64 = ctx.r10.s64 + -3576;
	// addi r9,r9,-3480
	ctx.r9.s64 = ctx.r9.s64 + -3480;
	// stw r11,-8088(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8088, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,8496
	ctx.r3.s64 = ctx.r3.s64 + 8496;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338A374;
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

__attribute__((alias("__imp__sub_8338A38C"))) PPC_WEAK_FUNC(sub_8338A38C);
PPC_FUNC_IMPL(__imp__sub_8338A38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A390"))) PPC_WEAK_FUNC(sub_8338A390);
PPC_FUNC_IMPL(__imp__sub_8338A390) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,16768
	ctx.r4.s64 = ctx.r11.s64 + 16768;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// addi r30,r31,-276
	ctx.r30.s64 = ctx.r31.s64 + -276;
	// addi r6,r9,28260
	ctx.r6.s64 = ctx.r9.s64 + 28260;
	// addi r5,r8,20604
	ctx.r5.s64 = ctx.r8.s64 + 20604;
	// addi r4,r7,20664
	ctx.r4.s64 = ctx.r7.s64 + 20664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,19920
	ctx.r10.s64 = ctx.r10.s64 + 19920;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338A3EC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,19992
	ctx.r10.s64 = ctx.r10.s64 + 19992;
	// addi r9,r9,16744
	ctx.r9.s64 = ctx.r9.s64 + 16744;
	// stw r11,-276(r31)
	PPC_STORE_U32(ctx.r31.u32 + -276, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,8584
	ctx.r3.s64 = ctx.r3.s64 + 8584;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338A41C;
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

__attribute__((alias("__imp__sub_8338A434"))) PPC_WEAK_FUNC(sub_8338A434);
PPC_FUNC_IMPL(__imp__sub_8338A434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A438"))) PPC_WEAK_FUNC(sub_8338A438);
PPC_FUNC_IMPL(__imp__sub_8338A438) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,17184
	ctx.r4.s64 = ctx.r11.s64 + 17184;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// addi r30,r31,-368
	ctx.r30.s64 = ctx.r31.s64 + -368;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,20604
	ctx.r5.s64 = ctx.r8.s64 + 20604;
	// addi r4,r7,20752
	ctx.r4.s64 = ctx.r7.s64 + 20752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,20088
	ctx.r10.s64 = ctx.r10.s64 + 20088;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338A494;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,20160
	ctx.r10.s64 = ctx.r10.s64 + 20160;
	// addi r9,r9,17176
	ctx.r9.s64 = ctx.r9.s64 + 17176;
	// stw r11,-368(r31)
	PPC_STORE_U32(ctx.r31.u32 + -368, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,8672
	ctx.r3.s64 = ctx.r3.s64 + 8672;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338A4C4;
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

__attribute__((alias("__imp__sub_8338A4DC"))) PPC_WEAK_FUNC(sub_8338A4DC);
PPC_FUNC_IMPL(__imp__sub_8338A4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A4E0"))) PPC_WEAK_FUNC(sub_8338A4E0);
PPC_FUNC_IMPL(__imp__sub_8338A4E0) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,17624
	ctx.r4.s64 = ctx.r11.s64 + 17624;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// addi r30,r31,-460
	ctx.r30.s64 = ctx.r31.s64 + -460;
	// addi r6,r9,28260
	ctx.r6.s64 = ctx.r9.s64 + 28260;
	// addi r5,r8,20604
	ctx.r5.s64 = ctx.r8.s64 + 20604;
	// addi r4,r7,20848
	ctx.r4.s64 = ctx.r7.s64 + 20848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,20256
	ctx.r10.s64 = ctx.r10.s64 + 20256;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338A53C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,20328
	ctx.r10.s64 = ctx.r10.s64 + 20328;
	// addi r9,r9,17592
	ctx.r9.s64 = ctx.r9.s64 + 17592;
	// stw r11,-460(r31)
	PPC_STORE_U32(ctx.r31.u32 + -460, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,8760
	ctx.r3.s64 = ctx.r3.s64 + 8760;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338A56C;
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

__attribute__((alias("__imp__sub_8338A584"))) PPC_WEAK_FUNC(sub_8338A584);
PPC_FUNC_IMPL(__imp__sub_8338A584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A588"))) PPC_WEAK_FUNC(sub_8338A588);
PPC_FUNC_IMPL(__imp__sub_8338A588) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,18048
	ctx.r4.s64 = ctx.r11.s64 + 18048;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// addi r30,r31,-552
	ctx.r30.s64 = ctx.r31.s64 + -552;
	// addi r6,r9,28752
	ctx.r6.s64 = ctx.r9.s64 + 28752;
	// addi r5,r8,20604
	ctx.r5.s64 = ctx.r8.s64 + 20604;
	// addi r4,r7,20944
	ctx.r4.s64 = ctx.r7.s64 + 20944;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,20424
	ctx.r10.s64 = ctx.r10.s64 + 20424;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338A5E4;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,20496
	ctx.r10.s64 = ctx.r10.s64 + 20496;
	// addi r9,r9,18032
	ctx.r9.s64 = ctx.r9.s64 + 18032;
	// stw r11,-552(r31)
	PPC_STORE_U32(ctx.r31.u32 + -552, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,8848
	ctx.r3.s64 = ctx.r3.s64 + 8848;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338A614;
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

__attribute__((alias("__imp__sub_8338A62C"))) PPC_WEAK_FUNC(sub_8338A62C);
PPC_FUNC_IMPL(__imp__sub_8338A62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A630"))) PPC_WEAK_FUNC(sub_8338A630);
PPC_FUNC_IMPL(__imp__sub_8338A630) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,18480
	ctx.r4.s64 = ctx.r11.s64 + 18480;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// addi r30,r31,-644
	ctx.r30.s64 = ctx.r31.s64 + -644;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,20604
	ctx.r5.s64 = ctx.r8.s64 + 20604;
	// addi r4,r7,21048
	ctx.r4.s64 = ctx.r7.s64 + 21048;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,20592
	ctx.r10.s64 = ctx.r10.s64 + 20592;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338A68C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,20664
	ctx.r10.s64 = ctx.r10.s64 + 20664;
	// addi r9,r9,18456
	ctx.r9.s64 = ctx.r9.s64 + 18456;
	// stw r11,-644(r31)
	PPC_STORE_U32(ctx.r31.u32 + -644, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,8936
	ctx.r3.s64 = ctx.r3.s64 + 8936;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338A6BC;
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

__attribute__((alias("__imp__sub_8338A6D4"))) PPC_WEAK_FUNC(sub_8338A6D4);
PPC_FUNC_IMPL(__imp__sub_8338A6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A6D8"))) PPC_WEAK_FUNC(sub_8338A6D8);
PPC_FUNC_IMPL(__imp__sub_8338A6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,9024
	ctx.r3.s64 = ctx.r11.s64 + 9024;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338A6E4"))) PPC_WEAK_FUNC(sub_8338A6E4);
PPC_FUNC_IMPL(__imp__sub_8338A6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A6E8"))) PPC_WEAK_FUNC(sub_8338A6E8);
PPC_FUNC_IMPL(__imp__sub_8338A6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,9040
	ctx.r3.s64 = ctx.r11.s64 + 9040;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338A6F4"))) PPC_WEAK_FUNC(sub_8338A6F4);
PPC_FUNC_IMPL(__imp__sub_8338A6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A6F8"))) PPC_WEAK_FUNC(sub_8338A6F8);
PPC_FUNC_IMPL(__imp__sub_8338A6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,9056
	ctx.r3.s64 = ctx.r11.s64 + 9056;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338A704"))) PPC_WEAK_FUNC(sub_8338A704);
PPC_FUNC_IMPL(__imp__sub_8338A704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A708"))) PPC_WEAK_FUNC(sub_8338A708);
PPC_FUNC_IMPL(__imp__sub_8338A708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,9072
	ctx.r3.s64 = ctx.r11.s64 + 9072;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338A714"))) PPC_WEAK_FUNC(sub_8338A714);
PPC_FUNC_IMPL(__imp__sub_8338A714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A718"))) PPC_WEAK_FUNC(sub_8338A718);
PPC_FUNC_IMPL(__imp__sub_8338A718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,9088
	ctx.r3.s64 = ctx.r11.s64 + 9088;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338A724"))) PPC_WEAK_FUNC(sub_8338A724);
PPC_FUNC_IMPL(__imp__sub_8338A724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A728"))) PPC_WEAK_FUNC(sub_8338A728);
PPC_FUNC_IMPL(__imp__sub_8338A728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,9104
	ctx.r3.s64 = ctx.r11.s64 + 9104;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338A734"))) PPC_WEAK_FUNC(sub_8338A734);
PPC_FUNC_IMPL(__imp__sub_8338A734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A738"))) PPC_WEAK_FUNC(sub_8338A738);
PPC_FUNC_IMPL(__imp__sub_8338A738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,9120
	ctx.r3.s64 = ctx.r11.s64 + 9120;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338A744"))) PPC_WEAK_FUNC(sub_8338A744);
PPC_FUNC_IMPL(__imp__sub_8338A744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A748"))) PPC_WEAK_FUNC(sub_8338A748);
PPC_FUNC_IMPL(__imp__sub_8338A748) {
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
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r30,r31,-7988
	ctx.r30.s64 = ctx.r31.s64 + -7988;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,22072
	ctx.r5.s64 = ctx.r8.s64 + 22072;
	// addi r4,r7,22116
	ctx.r4.s64 = ctx.r7.s64 + 22116;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-27784
	ctx.r10.s64 = ctx.r10.s64 + -27784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338A7A4;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-27608
	ctx.r10.s64 = ctx.r10.s64 + -27608;
	// addi r9,r9,-27512
	ctx.r9.s64 = ctx.r9.s64 + -27512;
	// stw r11,-7988(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7988, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,9784
	ctx.r3.s64 = ctx.r3.s64 + 9784;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338A7D4;
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

__attribute__((alias("__imp__sub_8338A7EC"))) PPC_WEAK_FUNC(sub_8338A7EC);
PPC_FUNC_IMPL(__imp__sub_8338A7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A7F0"))) PPC_WEAK_FUNC(sub_8338A7F0);
PPC_FUNC_IMPL(__imp__sub_8338A7F0) {
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
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r30,r31,-7896
	ctx.r30.s64 = ctx.r31.s64 + -7896;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,22164
	ctx.r5.s64 = ctx.r8.s64 + 22164;
	// addi r4,r7,22208
	ctx.r4.s64 = ctx.r7.s64 + 22208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-26312
	ctx.r10.s64 = ctx.r10.s64 + -26312;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338A84C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-26240
	ctx.r10.s64 = ctx.r10.s64 + -26240;
	// addi r9,r9,-26144
	ctx.r9.s64 = ctx.r9.s64 + -26144;
	// stw r11,-7896(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7896, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,9872
	ctx.r3.s64 = ctx.r3.s64 + 9872;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338A87C;
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

__attribute__((alias("__imp__sub_8338A894"))) PPC_WEAK_FUNC(sub_8338A894);
PPC_FUNC_IMPL(__imp__sub_8338A894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A898"))) PPC_WEAK_FUNC(sub_8338A898);
PPC_FUNC_IMPL(__imp__sub_8338A898) {
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
	// addi r3,r11,-7804
	ctx.r3.s64 = ctx.r11.s64 + -7804;
	// bl 0x8288a4e8
	ctx.lr = 0x8338A8B0;
	sub_8288A4E8(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r3,r10,9960
	ctx.r3.s64 = ctx.r10.s64 + 9960;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338A8BC;
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

__attribute__((alias("__imp__sub_8338A8CC"))) PPC_WEAK_FUNC(sub_8338A8CC);
PPC_FUNC_IMPL(__imp__sub_8338A8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A8D0"))) PPC_WEAK_FUNC(sub_8338A8D0);
PPC_FUNC_IMPL(__imp__sub_8338A8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,10000
	ctx.r3.s64 = ctx.r11.s64 + 10000;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338A8DC"))) PPC_WEAK_FUNC(sub_8338A8DC);
PPC_FUNC_IMPL(__imp__sub_8338A8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A8E0"))) PPC_WEAK_FUNC(sub_8338A8E0);
PPC_FUNC_IMPL(__imp__sub_8338A8E0) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-1712
	ctx.r4.s64 = ctx.r11.s64 + -1712;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r30,r31,1196
	ctx.r30.s64 = ctx.r31.s64 + 1196;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,22704
	ctx.r4.s64 = ctx.r7.s64 + 22704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-2128
	ctx.r10.s64 = ctx.r10.s64 + -2128;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338A93C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-1952
	ctx.r10.s64 = ctx.r10.s64 + -1952;
	// addi r9,r9,-1856
	ctx.r9.s64 = ctx.r9.s64 + -1856;
	// stw r11,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,10088
	ctx.r3.s64 = ctx.r3.s64 + 10088;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338A96C;
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

__attribute__((alias("__imp__sub_8338A984"))) PPC_WEAK_FUNC(sub_8338A984);
PPC_FUNC_IMPL(__imp__sub_8338A984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338A988"))) PPC_WEAK_FUNC(sub_8338A988);
PPC_FUNC_IMPL(__imp__sub_8338A988) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-1016
	ctx.r4.s64 = ctx.r11.s64 + -1016;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r30,r31,1104
	ctx.r30.s64 = ctx.r31.s64 + 1104;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,22800
	ctx.r4.s64 = ctx.r7.s64 + 22800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-1432
	ctx.r10.s64 = ctx.r10.s64 + -1432;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338A9E4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-1256
	ctx.r10.s64 = ctx.r10.s64 + -1256;
	// addi r9,r9,-1160
	ctx.r9.s64 = ctx.r9.s64 + -1160;
	// stw r11,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,10176
	ctx.r3.s64 = ctx.r3.s64 + 10176;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338AA14;
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

__attribute__((alias("__imp__sub_8338AA2C"))) PPC_WEAK_FUNC(sub_8338AA2C);
PPC_FUNC_IMPL(__imp__sub_8338AA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338AA30"))) PPC_WEAK_FUNC(sub_8338AA30);
PPC_FUNC_IMPL(__imp__sub_8338AA30) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-424
	ctx.r4.s64 = ctx.r11.s64 + -424;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r30,r31,1012
	ctx.r30.s64 = ctx.r31.s64 + 1012;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-6308
	ctx.r5.s64 = ctx.r8.s64 + -6308;
	// addi r4,r7,22896
	ctx.r4.s64 = ctx.r7.s64 + 22896;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-736
	ctx.r10.s64 = ctx.r10.s64 + -736;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338AA8C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-664
	ctx.r10.s64 = ctx.r10.s64 + -664;
	// addi r9,r9,-568
	ctx.r9.s64 = ctx.r9.s64 + -568;
	// stw r11,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,10264
	ctx.r3.s64 = ctx.r3.s64 + 10264;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338AABC;
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

__attribute__((alias("__imp__sub_8338AAD4"))) PPC_WEAK_FUNC(sub_8338AAD4);
PPC_FUNC_IMPL(__imp__sub_8338AAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338AAD8"))) PPC_WEAK_FUNC(sub_8338AAD8);
PPC_FUNC_IMPL(__imp__sub_8338AAD8) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,264
	ctx.r4.s64 = ctx.r11.s64 + 264;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r30,r31,920
	ctx.r30.s64 = ctx.r31.s64 + 920;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-6308
	ctx.r5.s64 = ctx.r8.s64 + -6308;
	// addi r4,r7,22984
	ctx.r4.s64 = ctx.r7.s64 + 22984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338AB34;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// addi r9,r9,120
	ctx.r9.s64 = ctx.r9.s64 + 120;
	// stw r11,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,10352
	ctx.r3.s64 = ctx.r3.s64 + 10352;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338AB64;
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

__attribute__((alias("__imp__sub_8338AB7C"))) PPC_WEAK_FUNC(sub_8338AB7C);
PPC_FUNC_IMPL(__imp__sub_8338AB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338AB80"))) PPC_WEAK_FUNC(sub_8338AB80);
PPC_FUNC_IMPL(__imp__sub_8338AB80) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,1008
	ctx.r4.s64 = ctx.r11.s64 + 1008;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r30,r31,828
	ctx.r30.s64 = ctx.r31.s64 + 828;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,23076
	ctx.r5.s64 = ctx.r8.s64 + 23076;
	// addi r4,r7,23136
	ctx.r4.s64 = ctx.r7.s64 + 23136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,648
	ctx.r10.s64 = ctx.r10.s64 + 648;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,454
	ctx.r8.s64 = 454;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338ABDC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,824
	ctx.r10.s64 = ctx.r10.s64 + 824;
	// addi r9,r9,920
	ctx.r9.s64 = ctx.r9.s64 + 920;
	// stw r11,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,10440
	ctx.r3.s64 = ctx.r3.s64 + 10440;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338AC0C;
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

__attribute__((alias("__imp__sub_8338AC24"))) PPC_WEAK_FUNC(sub_8338AC24);
PPC_FUNC_IMPL(__imp__sub_8338AC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338AC28"))) PPC_WEAK_FUNC(sub_8338AC28);
PPC_FUNC_IMPL(__imp__sub_8338AC28) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,1608
	ctx.r4.s64 = ctx.r11.s64 + 1608;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r30,r31,736
	ctx.r30.s64 = ctx.r31.s64 + 736;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,23076
	ctx.r5.s64 = ctx.r8.s64 + 23076;
	// addi r4,r7,23224
	ctx.r4.s64 = ctx.r7.s64 + 23224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,1280
	ctx.r10.s64 = ctx.r10.s64 + 1280;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338AC84;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,1456
	ctx.r10.s64 = ctx.r10.s64 + 1456;
	// addi r9,r9,1552
	ctx.r9.s64 = ctx.r9.s64 + 1552;
	// stw r11,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,10528
	ctx.r3.s64 = ctx.r3.s64 + 10528;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338ACB4;
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

__attribute__((alias("__imp__sub_8338ACCC"))) PPC_WEAK_FUNC(sub_8338ACCC);
PPC_FUNC_IMPL(__imp__sub_8338ACCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338ACD0"))) PPC_WEAK_FUNC(sub_8338ACD0);
PPC_FUNC_IMPL(__imp__sub_8338ACD0) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,2208
	ctx.r4.s64 = ctx.r11.s64 + 2208;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r30,r31,644
	ctx.r30.s64 = ctx.r31.s64 + 644;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,23076
	ctx.r5.s64 = ctx.r8.s64 + 23076;
	// addi r4,r7,23328
	ctx.r4.s64 = ctx.r7.s64 + 23328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,1880
	ctx.r10.s64 = ctx.r10.s64 + 1880;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338AD2C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,2056
	ctx.r10.s64 = ctx.r10.s64 + 2056;
	// addi r9,r9,2152
	ctx.r9.s64 = ctx.r9.s64 + 2152;
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,10616
	ctx.r3.s64 = ctx.r3.s64 + 10616;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338AD5C;
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

__attribute__((alias("__imp__sub_8338AD74"))) PPC_WEAK_FUNC(sub_8338AD74);
PPC_FUNC_IMPL(__imp__sub_8338AD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338AD78"))) PPC_WEAK_FUNC(sub_8338AD78);
PPC_FUNC_IMPL(__imp__sub_8338AD78) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,2904
	ctx.r4.s64 = ctx.r11.s64 + 2904;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r30,r31,552
	ctx.r30.s64 = ctx.r31.s64 + 552;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,23076
	ctx.r5.s64 = ctx.r8.s64 + 23076;
	// addi r4,r7,23432
	ctx.r4.s64 = ctx.r7.s64 + 23432;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,2488
	ctx.r10.s64 = ctx.r10.s64 + 2488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338ADD4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,2664
	ctx.r10.s64 = ctx.r10.s64 + 2664;
	// addi r9,r9,2760
	ctx.r9.s64 = ctx.r9.s64 + 2760;
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,10704
	ctx.r3.s64 = ctx.r3.s64 + 10704;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338AE04;
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

__attribute__((alias("__imp__sub_8338AE1C"))) PPC_WEAK_FUNC(sub_8338AE1C);
PPC_FUNC_IMPL(__imp__sub_8338AE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338AE20"))) PPC_WEAK_FUNC(sub_8338AE20);
PPC_FUNC_IMPL(__imp__sub_8338AE20) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,3512
	ctx.r4.s64 = ctx.r11.s64 + 3512;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r30,r31,460
	ctx.r30.s64 = ctx.r31.s64 + 460;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,23076
	ctx.r5.s64 = ctx.r8.s64 + 23076;
	// addi r4,r7,23536
	ctx.r4.s64 = ctx.r7.s64 + 23536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,3184
	ctx.r10.s64 = ctx.r10.s64 + 3184;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338AE7C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,3360
	ctx.r10.s64 = ctx.r10.s64 + 3360;
	// addi r9,r9,3456
	ctx.r9.s64 = ctx.r9.s64 + 3456;
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,10792
	ctx.r3.s64 = ctx.r3.s64 + 10792;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338AEAC;
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

__attribute__((alias("__imp__sub_8338AEC4"))) PPC_WEAK_FUNC(sub_8338AEC4);
PPC_FUNC_IMPL(__imp__sub_8338AEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338AEC8"))) PPC_WEAK_FUNC(sub_8338AEC8);
PPC_FUNC_IMPL(__imp__sub_8338AEC8) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,4208
	ctx.r4.s64 = ctx.r11.s64 + 4208;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r30,r31,368
	ctx.r30.s64 = ctx.r31.s64 + 368;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,23076
	ctx.r5.s64 = ctx.r8.s64 + 23076;
	// addi r4,r7,23664
	ctx.r4.s64 = ctx.r7.s64 + 23664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,3792
	ctx.r10.s64 = ctx.r10.s64 + 3792;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338AF24;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,3968
	ctx.r10.s64 = ctx.r10.s64 + 3968;
	// addi r9,r9,4064
	ctx.r9.s64 = ctx.r9.s64 + 4064;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,10880
	ctx.r3.s64 = ctx.r3.s64 + 10880;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338AF54;
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

__attribute__((alias("__imp__sub_8338AF6C"))) PPC_WEAK_FUNC(sub_8338AF6C);
PPC_FUNC_IMPL(__imp__sub_8338AF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338AF70"))) PPC_WEAK_FUNC(sub_8338AF70);
PPC_FUNC_IMPL(__imp__sub_8338AF70) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,4744
	ctx.r4.s64 = ctx.r11.s64 + 4744;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r30,r31,276
	ctx.r30.s64 = ctx.r31.s64 + 276;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,23772
	ctx.r5.s64 = ctx.r8.s64 + 23772;
	// addi r4,r7,23832
	ctx.r4.s64 = ctx.r7.s64 + 23832;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,4488
	ctx.r10.s64 = ctx.r10.s64 + 4488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,454
	ctx.r8.s64 = 454;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338AFCC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,4560
	ctx.r10.s64 = ctx.r10.s64 + 4560;
	// addi r9,r9,4656
	ctx.r9.s64 = ctx.r9.s64 + 4656;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,10968
	ctx.r3.s64 = ctx.r3.s64 + 10968;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338AFFC;
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

__attribute__((alias("__imp__sub_8338B014"))) PPC_WEAK_FUNC(sub_8338B014);
PPC_FUNC_IMPL(__imp__sub_8338B014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338B018"))) PPC_WEAK_FUNC(sub_8338B018);
PPC_FUNC_IMPL(__imp__sub_8338B018) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,5360
	ctx.r4.s64 = ctx.r11.s64 + 5360;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r30,r31,184
	ctx.r30.s64 = ctx.r31.s64 + 184;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,23772
	ctx.r5.s64 = ctx.r8.s64 + 23772;
	// addi r4,r7,23912
	ctx.r4.s64 = ctx.r7.s64 + 23912;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,5136
	ctx.r10.s64 = ctx.r10.s64 + 5136;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338B074;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,5208
	ctx.r10.s64 = ctx.r10.s64 + 5208;
	// addi r9,r9,5304
	ctx.r9.s64 = ctx.r9.s64 + 5304;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,11056
	ctx.r3.s64 = ctx.r3.s64 + 11056;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338B0A4;
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

__attribute__((alias("__imp__sub_8338B0BC"))) PPC_WEAK_FUNC(sub_8338B0BC);
PPC_FUNC_IMPL(__imp__sub_8338B0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338B0C0"))) PPC_WEAK_FUNC(sub_8338B0C0);
PPC_FUNC_IMPL(__imp__sub_8338B0C0) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,5960
	ctx.r4.s64 = ctx.r11.s64 + 5960;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r30,r31,92
	ctx.r30.s64 = ctx.r31.s64 + 92;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,23772
	ctx.r5.s64 = ctx.r8.s64 + 23772;
	// addi r4,r7,24008
	ctx.r4.s64 = ctx.r7.s64 + 24008;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,5736
	ctx.r10.s64 = ctx.r10.s64 + 5736;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338B11C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,5808
	ctx.r10.s64 = ctx.r10.s64 + 5808;
	// addi r9,r9,5904
	ctx.r9.s64 = ctx.r9.s64 + 5904;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,11144
	ctx.r3.s64 = ctx.r3.s64 + 11144;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338B14C;
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

__attribute__((alias("__imp__sub_8338B164"))) PPC_WEAK_FUNC(sub_8338B164);
PPC_FUNC_IMPL(__imp__sub_8338B164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338B168"))) PPC_WEAK_FUNC(sub_8338B168);
PPC_FUNC_IMPL(__imp__sub_8338B168) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,6664
	ctx.r4.s64 = ctx.r11.s64 + 6664;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r30,r31,0
	ctx.r30.s64 = ctx.r31.s64 + 0;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,23772
	ctx.r5.s64 = ctx.r8.s64 + 23772;
	// addi r4,r7,24104
	ctx.r4.s64 = ctx.r7.s64 + 24104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,6352
	ctx.r10.s64 = ctx.r10.s64 + 6352;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338B1C4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,6424
	ctx.r10.s64 = ctx.r10.s64 + 6424;
	// addi r9,r9,6520
	ctx.r9.s64 = ctx.r9.s64 + 6520;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,11232
	ctx.r3.s64 = ctx.r3.s64 + 11232;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338B1F4;
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

__attribute__((alias("__imp__sub_8338B20C"))) PPC_WEAK_FUNC(sub_8338B20C);
PPC_FUNC_IMPL(__imp__sub_8338B20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338B210"))) PPC_WEAK_FUNC(sub_8338B210);
PPC_FUNC_IMPL(__imp__sub_8338B210) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,7264
	ctx.r4.s64 = ctx.r11.s64 + 7264;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r30,r31,-92
	ctx.r30.s64 = ctx.r31.s64 + -92;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,23772
	ctx.r5.s64 = ctx.r8.s64 + 23772;
	// addi r4,r7,24208
	ctx.r4.s64 = ctx.r7.s64 + 24208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,7040
	ctx.r10.s64 = ctx.r10.s64 + 7040;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338B26C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,7112
	ctx.r10.s64 = ctx.r10.s64 + 7112;
	// addi r9,r9,7208
	ctx.r9.s64 = ctx.r9.s64 + 7208;
	// stw r11,-92(r31)
	PPC_STORE_U32(ctx.r31.u32 + -92, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,11320
	ctx.r3.s64 = ctx.r3.s64 + 11320;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338B29C;
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

__attribute__((alias("__imp__sub_8338B2B4"))) PPC_WEAK_FUNC(sub_8338B2B4);
PPC_FUNC_IMPL(__imp__sub_8338B2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338B2B8"))) PPC_WEAK_FUNC(sub_8338B2B8);
PPC_FUNC_IMPL(__imp__sub_8338B2B8) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,7952
	ctx.r4.s64 = ctx.r11.s64 + 7952;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r30,r31,-184
	ctx.r30.s64 = ctx.r31.s64 + -184;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,23772
	ctx.r5.s64 = ctx.r8.s64 + 23772;
	// addi r4,r7,24336
	ctx.r4.s64 = ctx.r7.s64 + 24336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,7640
	ctx.r10.s64 = ctx.r10.s64 + 7640;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338B314;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,7712
	ctx.r10.s64 = ctx.r10.s64 + 7712;
	// addi r9,r9,7808
	ctx.r9.s64 = ctx.r9.s64 + 7808;
	// stw r11,-184(r31)
	PPC_STORE_U32(ctx.r31.u32 + -184, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,11408
	ctx.r3.s64 = ctx.r3.s64 + 11408;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338B344;
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

__attribute__((alias("__imp__sub_8338B35C"))) PPC_WEAK_FUNC(sub_8338B35C);
PPC_FUNC_IMPL(__imp__sub_8338B35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338B360"))) PPC_WEAK_FUNC(sub_8338B360);
PPC_FUNC_IMPL(__imp__sub_8338B360) {
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
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// addi r30,r31,-7780
	ctx.r30.s64 = ctx.r31.s64 + -7780;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,25448
	ctx.r5.s64 = ctx.r8.s64 + 25448;
	// addi r4,r7,25492
	ctx.r4.s64 = ctx.r7.s64 + 25492;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-12872
	ctx.r10.s64 = ctx.r10.s64 + -12872;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338B3BC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// lis r9,-32118
	ctx.r9.s64 = -2104885248;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-12704
	ctx.r10.s64 = ctx.r10.s64 + -12704;
	// addi r9,r9,-12608
	ctx.r9.s64 = ctx.r9.s64 + -12608;
	// stw r11,-7780(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7780, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,11496
	ctx.r3.s64 = ctx.r3.s64 + 11496;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338B3EC;
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

__attribute__((alias("__imp__sub_8338B404"))) PPC_WEAK_FUNC(sub_8338B404);
PPC_FUNC_IMPL(__imp__sub_8338B404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338B408"))) PPC_WEAK_FUNC(sub_8338B408);
PPC_FUNC_IMPL(__imp__sub_8338B408) {
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
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// addi r30,r31,-7688
	ctx.r30.s64 = ctx.r31.s64 + -7688;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,25560
	ctx.r5.s64 = ctx.r8.s64 + 25560;
	// addi r4,r7,25600
	ctx.r4.s64 = ctx.r7.s64 + 25600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-11864
	ctx.r10.s64 = ctx.r10.s64 + -11864;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338B464;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// lis r9,-32118
	ctx.r9.s64 = -2104885248;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-11792
	ctx.r10.s64 = ctx.r10.s64 + -11792;
	// addi r9,r9,-11696
	ctx.r9.s64 = ctx.r9.s64 + -11696;
	// stw r11,-7688(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7688, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,11584
	ctx.r3.s64 = ctx.r3.s64 + 11584;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338B494;
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

__attribute__((alias("__imp__sub_8338B4AC"))) PPC_WEAK_FUNC(sub_8338B4AC);
PPC_FUNC_IMPL(__imp__sub_8338B4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338B4B0"))) PPC_WEAK_FUNC(sub_8338B4B0);
PPC_FUNC_IMPL(__imp__sub_8338B4B0) {
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
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// addi r30,r31,-7596
	ctx.r30.s64 = ctx.r31.s64 + -7596;
	// addi r6,r9,-19348
	ctx.r6.s64 = ctx.r9.s64 + -19348;
	// addi r5,r8,25932
	ctx.r5.s64 = ctx.r8.s64 + 25932;
	// addi r4,r7,25964
	ctx.r4.s64 = ctx.r7.s64 + 25964;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,3536
	ctx.r10.s64 = ctx.r10.s64 + 3536;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338B50C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// lis r9,-32118
	ctx.r9.s64 = -2104885248;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,3712
	ctx.r10.s64 = ctx.r10.s64 + 3712;
	// addi r9,r9,3808
	ctx.r9.s64 = ctx.r9.s64 + 3808;
	// stw r11,-7596(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7596, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,11744
	ctx.r3.s64 = ctx.r3.s64 + 11744;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338B53C;
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

__attribute__((alias("__imp__sub_8338B554"))) PPC_WEAK_FUNC(sub_8338B554);
PPC_FUNC_IMPL(__imp__sub_8338B554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338B558"))) PPC_WEAK_FUNC(sub_8338B558);
PPC_FUNC_IMPL(__imp__sub_8338B558) {
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
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// addi r30,r31,-7504
	ctx.r30.s64 = ctx.r31.s64 + -7504;
	// addi r6,r9,-19236
	ctx.r6.s64 = ctx.r9.s64 + -19236;
	// addi r5,r8,25932
	ctx.r5.s64 = ctx.r8.s64 + 25932;
	// addi r4,r7,26096
	ctx.r4.s64 = ctx.r7.s64 + 26096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,5056
	ctx.r10.s64 = ctx.r10.s64 + 5056;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338B5B4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// lis r9,-32118
	ctx.r9.s64 = -2104885248;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,5128
	ctx.r10.s64 = ctx.r10.s64 + 5128;
	// addi r9,r9,5224
	ctx.r9.s64 = ctx.r9.s64 + 5224;
	// stw r11,-7504(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7504, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,11832
	ctx.r3.s64 = ctx.r3.s64 + 11832;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338B5E4;
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

__attribute__((alias("__imp__sub_8338B5FC"))) PPC_WEAK_FUNC(sub_8338B5FC);
PPC_FUNC_IMPL(__imp__sub_8338B5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338B600"))) PPC_WEAK_FUNC(sub_8338B600);
PPC_FUNC_IMPL(__imp__sub_8338B600) {
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
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// addi r30,r31,-7412
	ctx.r30.s64 = ctx.r31.s64 + -7412;
	// addi r6,r9,-19348
	ctx.r6.s64 = ctx.r9.s64 + -19348;
	// addi r5,r8,26296
	ctx.r5.s64 = ctx.r8.s64 + 26296;
	// addi r4,r7,26340
	ctx.r4.s64 = ctx.r7.s64 + 26340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,18256
	ctx.r10.s64 = ctx.r10.s64 + 18256;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338B65C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// lis r9,-32118
	ctx.r9.s64 = -2104885248;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,18424
	ctx.r10.s64 = ctx.r10.s64 + 18424;
	// addi r9,r9,18520
	ctx.r9.s64 = ctx.r9.s64 + 18520;
	// stw r11,-7412(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7412, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,11992
	ctx.r3.s64 = ctx.r3.s64 + 11992;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338B68C;
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

__attribute__((alias("__imp__sub_8338B6A4"))) PPC_WEAK_FUNC(sub_8338B6A4);
PPC_FUNC_IMPL(__imp__sub_8338B6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338B6A8"))) PPC_WEAK_FUNC(sub_8338B6A8);
PPC_FUNC_IMPL(__imp__sub_8338B6A8) {
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
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// addi r30,r31,-7320
	ctx.r30.s64 = ctx.r31.s64 + -7320;
	// addi r6,r9,-19236
	ctx.r6.s64 = ctx.r9.s64 + -19236;
	// addi r5,r8,26296
	ctx.r5.s64 = ctx.r8.s64 + 26296;
	// addi r4,r7,26484
	ctx.r4.s64 = ctx.r7.s64 + 26484;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,19248
	ctx.r10.s64 = ctx.r10.s64 + 19248;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338B704;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// lis r9,-32118
	ctx.r9.s64 = -2104885248;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,19320
	ctx.r10.s64 = ctx.r10.s64 + 19320;
	// addi r9,r9,19416
	ctx.r9.s64 = ctx.r9.s64 + 19416;
	// stw r11,-7320(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7320, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,12080
	ctx.r3.s64 = ctx.r3.s64 + 12080;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338B734;
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

__attribute__((alias("__imp__sub_8338B74C"))) PPC_WEAK_FUNC(sub_8338B74C);
PPC_FUNC_IMPL(__imp__sub_8338B74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338B750"))) PPC_WEAK_FUNC(sub_8338B750);
PPC_FUNC_IMPL(__imp__sub_8338B750) {
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
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// addi r30,r31,-7228
	ctx.r30.s64 = ctx.r31.s64 + -7228;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,26660
	ctx.r5.s64 = ctx.r8.s64 + 26660;
	// addi r4,r7,26712
	ctx.r4.s64 = ctx.r7.s64 + 26712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,28080
	ctx.r10.s64 = ctx.r10.s64 + 28080;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338B7AC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// lis r9,-32118
	ctx.r9.s64 = -2104885248;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,28248
	ctx.r10.s64 = ctx.r10.s64 + 28248;
	// addi r9,r9,28344
	ctx.r9.s64 = ctx.r9.s64 + 28344;
	// stw r11,-7228(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7228, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,12168
	ctx.r3.s64 = ctx.r3.s64 + 12168;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338B7DC;
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

__attribute__((alias("__imp__sub_8338B7F4"))) PPC_WEAK_FUNC(sub_8338B7F4);
PPC_FUNC_IMPL(__imp__sub_8338B7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338B7F8"))) PPC_WEAK_FUNC(sub_8338B7F8);
PPC_FUNC_IMPL(__imp__sub_8338B7F8) {
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
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// addi r30,r31,-7136
	ctx.r30.s64 = ctx.r31.s64 + -7136;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,26768
	ctx.r5.s64 = ctx.r8.s64 + 26768;
	// addi r4,r7,26840
	ctx.r4.s64 = ctx.r7.s64 + 26840;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,29096
	ctx.r10.s64 = ctx.r10.s64 + 29096;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338B854;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// lis r9,-32118
	ctx.r9.s64 = -2104885248;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,29256
	ctx.r10.s64 = ctx.r10.s64 + 29256;
	// addi r9,r9,29352
	ctx.r9.s64 = ctx.r9.s64 + 29352;
	// stw r11,-7136(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7136, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,12256
	ctx.r3.s64 = ctx.r3.s64 + 12256;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338B884;
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

__attribute__((alias("__imp__sub_8338B89C"))) PPC_WEAK_FUNC(sub_8338B89C);
PPC_FUNC_IMPL(__imp__sub_8338B89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338B8A0"))) PPC_WEAK_FUNC(sub_8338B8A0);
PPC_FUNC_IMPL(__imp__sub_8338B8A0) {
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
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// addi r30,r31,-7044
	ctx.r30.s64 = ctx.r31.s64 + -7044;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,26908
	ctx.r5.s64 = ctx.r8.s64 + 26908;
	// addi r4,r7,26960
	ctx.r4.s64 = ctx.r7.s64 + 26960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,29856
	ctx.r10.s64 = ctx.r10.s64 + 29856;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338B8FC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// lis r9,-32118
	ctx.r9.s64 = -2104885248;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,30016
	ctx.r10.s64 = ctx.r10.s64 + 30016;
	// addi r9,r9,30112
	ctx.r9.s64 = ctx.r9.s64 + 30112;
	// stw r11,-7044(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7044, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,12344
	ctx.r3.s64 = ctx.r3.s64 + 12344;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338B92C;
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

__attribute__((alias("__imp__sub_8338B944"))) PPC_WEAK_FUNC(sub_8338B944);
PPC_FUNC_IMPL(__imp__sub_8338B944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338B948"))) PPC_WEAK_FUNC(sub_8338B948);
PPC_FUNC_IMPL(__imp__sub_8338B948) {
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
	// addi r3,r11,-6952
	ctx.r3.s64 = ctx.r11.s64 + -6952;
	// bl 0x828a97a8
	ctx.lr = 0x8338B960;
	sub_828A97A8(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r3,r10,12432
	ctx.r3.s64 = ctx.r10.s64 + 12432;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338B96C;
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

__attribute__((alias("__imp__sub_8338B97C"))) PPC_WEAK_FUNC(sub_8338B97C);
PPC_FUNC_IMPL(__imp__sub_8338B97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338B980"))) PPC_WEAK_FUNC(sub_8338B980);
PPC_FUNC_IMPL(__imp__sub_8338B980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,12472
	ctx.r3.s64 = ctx.r11.s64 + 12472;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338B98C"))) PPC_WEAK_FUNC(sub_8338B98C);
PPC_FUNC_IMPL(__imp__sub_8338B98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338B990"))) PPC_WEAK_FUNC(sub_8338B990);
PPC_FUNC_IMPL(__imp__sub_8338B990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,12488
	ctx.r3.s64 = ctx.r11.s64 + 12488;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338B99C"))) PPC_WEAK_FUNC(sub_8338B99C);
PPC_FUNC_IMPL(__imp__sub_8338B99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338B9A0"))) PPC_WEAK_FUNC(sub_8338B9A0);
PPC_FUNC_IMPL(__imp__sub_8338B9A0) {
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
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// addi r4,r11,-23728
	ctx.r4.s64 = ctx.r11.s64 + -23728;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// addi r30,r31,-6912
	ctx.r30.s64 = ctx.r31.s64 + -6912;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,27340
	ctx.r5.s64 = ctx.r8.s64 + 27340;
	// addi r4,r7,27396
	ctx.r4.s64 = ctx.r7.s64 + 27396;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-24008
	ctx.r10.s64 = ctx.r10.s64 + -24008;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338B9FC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// lis r9,-32117
	ctx.r9.s64 = -2104819712;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-23832
	ctx.r10.s64 = ctx.r10.s64 + -23832;
	// addi r9,r9,-23736
	ctx.r9.s64 = ctx.r9.s64 + -23736;
	// stw r11,-6912(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6912, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,12648
	ctx.r3.s64 = ctx.r3.s64 + 12648;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338BA2C;
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

__attribute__((alias("__imp__sub_8338BA44"))) PPC_WEAK_FUNC(sub_8338BA44);
PPC_FUNC_IMPL(__imp__sub_8338BA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338BA48"))) PPC_WEAK_FUNC(sub_8338BA48);
PPC_FUNC_IMPL(__imp__sub_8338BA48) {
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
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// addi r4,r11,-22952
	ctx.r4.s64 = ctx.r11.s64 + -22952;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// addi r30,r31,-6820
	ctx.r30.s64 = ctx.r31.s64 + -6820;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,27452
	ctx.r5.s64 = ctx.r8.s64 + 27452;
	// addi r4,r7,27508
	ctx.r4.s64 = ctx.r7.s64 + 27508;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-23240
	ctx.r10.s64 = ctx.r10.s64 + -23240;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338BAA4;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// lis r9,-32117
	ctx.r9.s64 = -2104819712;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-23080
	ctx.r10.s64 = ctx.r10.s64 + -23080;
	// addi r9,r9,-22960
	ctx.r9.s64 = ctx.r9.s64 + -22960;
	// stw r11,-6820(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6820, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,12736
	ctx.r3.s64 = ctx.r3.s64 + 12736;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338BAD4;
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

__attribute__((alias("__imp__sub_8338BAEC"))) PPC_WEAK_FUNC(sub_8338BAEC);
PPC_FUNC_IMPL(__imp__sub_8338BAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338BAF0"))) PPC_WEAK_FUNC(sub_8338BAF0);
PPC_FUNC_IMPL(__imp__sub_8338BAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,12824
	ctx.r3.s64 = ctx.r11.s64 + 12824;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338BAFC"))) PPC_WEAK_FUNC(sub_8338BAFC);
PPC_FUNC_IMPL(__imp__sub_8338BAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338BB00"))) PPC_WEAK_FUNC(sub_8338BB00);
PPC_FUNC_IMPL(__imp__sub_8338BB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// addi r9,r10,24280
	ctx.r9.s64 = ctx.r10.s64 + 24280;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r6,-12(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r8,-8(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r7,24280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24280, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8338BB38"))) PPC_WEAK_FUNC(sub_8338BB38);
PPC_FUNC_IMPL(__imp__sub_8338BB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,12840
	ctx.r3.s64 = ctx.r11.s64 + 12840;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338BB44"))) PPC_WEAK_FUNC(sub_8338BB44);
PPC_FUNC_IMPL(__imp__sub_8338BB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338BB48"))) PPC_WEAK_FUNC(sub_8338BB48);
PPC_FUNC_IMPL(__imp__sub_8338BB48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// addi r9,r10,25216
	ctx.r9.s64 = ctx.r10.s64 + 25216;
	// lfs f0,-14344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14344);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r6,-12(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r8,-8(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r7,25216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25216, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8338BB80"))) PPC_WEAK_FUNC(sub_8338BB80);
PPC_FUNC_IMPL(__imp__sub_8338BB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// addi r9,r10,25232
	ctx.r9.s64 = ctx.r10.s64 + 25232;
	// lfs f0,-15696(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15696);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r6,-12(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r8,-8(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r7,25232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25232, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8338BBB8"))) PPC_WEAK_FUNC(sub_8338BBB8);
PPC_FUNC_IMPL(__imp__sub_8338BBB8) {
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
	// addi r3,r11,-6728
	ctx.r3.s64 = ctx.r11.s64 + -6728;
	// bl 0x82475b38
	ctx.lr = 0x8338BBD0;
	sub_82475B38(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r3,r10,12856
	ctx.r3.s64 = ctx.r10.s64 + 12856;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338BBDC;
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

__attribute__((alias("__imp__sub_8338BBEC"))) PPC_WEAK_FUNC(sub_8338BBEC);
PPC_FUNC_IMPL(__imp__sub_8338BBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338BBF0"))) PPC_WEAK_FUNC(sub_8338BBF0);
PPC_FUNC_IMPL(__imp__sub_8338BBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r9,r11,26144
	ctx.r9.s64 = ctx.r11.s64 + 26144;
	// addi r3,r10,12872
	ctx.r3.s64 = ctx.r10.s64 + 12872;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338BC10"))) PPC_WEAK_FUNC(sub_8338BC10);
PPC_FUNC_IMPL(__imp__sub_8338BC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r9,r11,-22816
	ctx.r9.s64 = ctx.r11.s64 + -22816;
	// addi r3,r10,12952
	ctx.r3.s64 = ctx.r10.s64 + 12952;
	// lwz r11,264(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 264);
	// clrlwi r8,r11,9
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFFF;
	// oris r11,r8,8192
	ctx.r11.u64 = ctx.r8.u64 | 536870912;
	// stw r11,264(r9)
	PPC_STORE_U32(ctx.r9.u32 + 264, ctx.r11.u32);
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338BC34"))) PPC_WEAK_FUNC(sub_8338BC34);
PPC_FUNC_IMPL(__imp__sub_8338BC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338BC38"))) PPC_WEAK_FUNC(sub_8338BC38);
PPC_FUNC_IMPL(__imp__sub_8338BC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// addi r9,r11,-6224
	ctx.r9.s64 = ctx.r11.s64 + -6224;
	// addi r11,r10,-17840
	ctx.r11.s64 = ctx.r10.s64 + -17840;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8338BC54:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8338bc54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8338BC54;
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,12960
	ctx.r3.s64 = ctx.r11.s64 + 12960;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338BC74"))) PPC_WEAK_FUNC(sub_8338BC74);
PPC_FUNC_IMPL(__imp__sub_8338BC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338BC78"))) PPC_WEAK_FUNC(sub_8338BC78);
PPC_FUNC_IMPL(__imp__sub_8338BC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,13040
	ctx.r3.s64 = ctx.r11.s64 + 13040;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338BC84"))) PPC_WEAK_FUNC(sub_8338BC84);
PPC_FUNC_IMPL(__imp__sub_8338BC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338BC88"))) PPC_WEAK_FUNC(sub_8338BC88);
PPC_FUNC_IMPL(__imp__sub_8338BC88) {
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
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r6,-32233
	ctx.r6.s64 = -2112421888;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r9,-32115
	ctx.r9.s64 = -2104688640;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r8,-32115
	ctx.r8.s64 = -2104688640;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r5,r7,32316
	ctx.r5.s64 = ctx.r7.s64 + 32316;
	// addi r4,r6,32356
	ctx.r4.s64 = ctx.r6.s64 + 32356;
	// li r31,434
	ctx.r31.s64 = 434;
	// addi r3,r3,-6148
	ctx.r3.s64 = ctx.r3.s64 + -6148;
	// addi r10,r11,-24912
	ctx.r10.s64 = ctx.r11.s64 + -24912;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r9,r9,-24920
	ctx.r9.s64 = ctx.r9.s64 + -24920;
	// addi r8,r8,-25432
	ctx.r8.s64 = ctx.r8.s64 + -25432;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82785290
	ctx.lr = 0x8338BCE4;
	sub_82785290(ctx, base);
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

__attribute__((alias("__imp__sub_8338BCF8"))) PPC_WEAK_FUNC(sub_8338BCF8);
PPC_FUNC_IMPL(__imp__sub_8338BCF8) {
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
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r6,-32233
	ctx.r6.s64 = -2112421888;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r9,-32115
	ctx.r9.s64 = -2104688640;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r8,-32115
	ctx.r8.s64 = -2104688640;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r5,r7,32316
	ctx.r5.s64 = ctx.r7.s64 + 32316;
	// addi r4,r6,32396
	ctx.r4.s64 = ctx.r6.s64 + 32396;
	// li r31,339
	ctx.r31.s64 = 339;
	// addi r3,r3,-6100
	ctx.r3.s64 = ctx.r3.s64 + -6100;
	// addi r10,r11,-24912
	ctx.r10.s64 = ctx.r11.s64 + -24912;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r9,r9,-24976
	ctx.r9.s64 = ctx.r9.s64 + -24976;
	// addi r8,r8,-25136
	ctx.r8.s64 = ctx.r8.s64 + -25136;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82785290
	ctx.lr = 0x8338BD54;
	sub_82785290(ctx, base);
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

__attribute__((alias("__imp__sub_8338BD68"))) PPC_WEAK_FUNC(sub_8338BD68);
PPC_FUNC_IMPL(__imp__sub_8338BD68) {
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
	// addi r5,r11,-6016
	ctx.r5.s64 = ctx.r11.s64 + -6016;
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8338BDB0"))) PPC_WEAK_FUNC(sub_8338BDB0);
PPC_FUNC_IMPL(__imp__sub_8338BDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-6032
	ctx.r9.s64 = ctx.r11.s64 + -6032;
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8338BDE0"))) PPC_WEAK_FUNC(sub_8338BDE0);
PPC_FUNC_IMPL(__imp__sub_8338BDE0) {
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
	// addi r5,r11,-6048
	ctx.r5.s64 = ctx.r11.s64 + -6048;
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8338BE28"))) PPC_WEAK_FUNC(sub_8338BE28);
PPC_FUNC_IMPL(__imp__sub_8338BE28) {
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
	// addi r5,r11,-6000
	ctx.r5.s64 = ctx.r11.s64 + -6000;
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8338BE70"))) PPC_WEAK_FUNC(sub_8338BE70);
PPC_FUNC_IMPL(__imp__sub_8338BE70) {
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
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r3,r11,29128
	ctx.r3.s64 = ctx.r11.s64 + 29128;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x82832990
	ctx.lr = 0x8338BE94;
	sub_82832990(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r3,r10,13136
	ctx.r3.s64 = ctx.r10.s64 + 13136;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338BEA0;
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

__attribute__((alias("__imp__sub_8338BEB0"))) PPC_WEAK_FUNC(sub_8338BEB0);
PPC_FUNC_IMPL(__imp__sub_8338BEB0) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-10512
	ctx.r4.s64 = ctx.r11.s64 + -10512;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,4140
	ctx.r30.s64 = ctx.r31.s64 + 4140;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28268
	ctx.r5.s64 = ctx.r8.s64 + -28268;
	// addi r4,r7,-28232
	ctx.r4.s64 = ctx.r7.s64 + -28232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-10784
	ctx.r10.s64 = ctx.r10.s64 + -10784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338BF0C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-10616
	ctx.r10.s64 = ctx.r10.s64 + -10616;
	// addi r9,r9,-10520
	ctx.r9.s64 = ctx.r9.s64 + -10520;
	// stw r11,4140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4140, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,13176
	ctx.r3.s64 = ctx.r3.s64 + 13176;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338BF3C;
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

__attribute__((alias("__imp__sub_8338BF54"))) PPC_WEAK_FUNC(sub_8338BF54);
PPC_FUNC_IMPL(__imp__sub_8338BF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338BF58"))) PPC_WEAK_FUNC(sub_8338BF58);
PPC_FUNC_IMPL(__imp__sub_8338BF58) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-9824
	ctx.r4.s64 = ctx.r11.s64 + -9824;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,4048
	ctx.r30.s64 = ctx.r31.s64 + 4048;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28188
	ctx.r5.s64 = ctx.r8.s64 + -28188;
	// addi r4,r7,-28148
	ctx.r4.s64 = ctx.r7.s64 + -28148;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-10088
	ctx.r10.s64 = ctx.r10.s64 + -10088;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338BFB4;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-9928
	ctx.r10.s64 = ctx.r10.s64 + -9928;
	// addi r9,r9,-9832
	ctx.r9.s64 = ctx.r9.s64 + -9832;
	// stw r11,4048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4048, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,13264
	ctx.r3.s64 = ctx.r3.s64 + 13264;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338BFE4;
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

__attribute__((alias("__imp__sub_8338BFFC"))) PPC_WEAK_FUNC(sub_8338BFFC);
PPC_FUNC_IMPL(__imp__sub_8338BFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338C000"))) PPC_WEAK_FUNC(sub_8338C000);
PPC_FUNC_IMPL(__imp__sub_8338C000) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-9192
	ctx.r4.s64 = ctx.r11.s64 + -9192;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,3956
	ctx.r30.s64 = ctx.r31.s64 + 3956;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28268
	ctx.r5.s64 = ctx.r8.s64 + -28268;
	// addi r4,r7,-28100
	ctx.r4.s64 = ctx.r7.s64 + -28100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-9464
	ctx.r10.s64 = ctx.r10.s64 + -9464;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338C05C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-9296
	ctx.r10.s64 = ctx.r10.s64 + -9296;
	// addi r9,r9,-9200
	ctx.r9.s64 = ctx.r9.s64 + -9200;
	// stw r11,3956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3956, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,13352
	ctx.r3.s64 = ctx.r3.s64 + 13352;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338C08C;
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

__attribute__((alias("__imp__sub_8338C0A4"))) PPC_WEAK_FUNC(sub_8338C0A4);
PPC_FUNC_IMPL(__imp__sub_8338C0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338C0A8"))) PPC_WEAK_FUNC(sub_8338C0A8);
PPC_FUNC_IMPL(__imp__sub_8338C0A8) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-8536
	ctx.r4.s64 = ctx.r11.s64 + -8536;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,3864
	ctx.r30.s64 = ctx.r31.s64 + 3864;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28188
	ctx.r5.s64 = ctx.r8.s64 + -28188;
	// addi r4,r7,-28056
	ctx.r4.s64 = ctx.r7.s64 + -28056;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-8800
	ctx.r10.s64 = ctx.r10.s64 + -8800;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338C104;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-8640
	ctx.r10.s64 = ctx.r10.s64 + -8640;
	// addi r9,r9,-8544
	ctx.r9.s64 = ctx.r9.s64 + -8544;
	// stw r11,3864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3864, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,13440
	ctx.r3.s64 = ctx.r3.s64 + 13440;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338C134;
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

__attribute__((alias("__imp__sub_8338C14C"))) PPC_WEAK_FUNC(sub_8338C14C);
PPC_FUNC_IMPL(__imp__sub_8338C14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338C150"))) PPC_WEAK_FUNC(sub_8338C150);
PPC_FUNC_IMPL(__imp__sub_8338C150) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-7912
	ctx.r4.s64 = ctx.r11.s64 + -7912;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,3772
	ctx.r30.s64 = ctx.r31.s64 + 3772;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28268
	ctx.r5.s64 = ctx.r8.s64 + -28268;
	// addi r4,r7,-28008
	ctx.r4.s64 = ctx.r7.s64 + -28008;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-8184
	ctx.r10.s64 = ctx.r10.s64 + -8184;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338C1AC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-8016
	ctx.r10.s64 = ctx.r10.s64 + -8016;
	// addi r9,r9,-7920
	ctx.r9.s64 = ctx.r9.s64 + -7920;
	// stw r11,3772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3772, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,13528
	ctx.r3.s64 = ctx.r3.s64 + 13528;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338C1DC;
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

__attribute__((alias("__imp__sub_8338C1F4"))) PPC_WEAK_FUNC(sub_8338C1F4);
PPC_FUNC_IMPL(__imp__sub_8338C1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338C1F8"))) PPC_WEAK_FUNC(sub_8338C1F8);
PPC_FUNC_IMPL(__imp__sub_8338C1F8) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-7256
	ctx.r4.s64 = ctx.r11.s64 + -7256;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,3680
	ctx.r30.s64 = ctx.r31.s64 + 3680;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28188
	ctx.r5.s64 = ctx.r8.s64 + -28188;
	// addi r4,r7,-27964
	ctx.r4.s64 = ctx.r7.s64 + -27964;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-7520
	ctx.r10.s64 = ctx.r10.s64 + -7520;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338C254;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-7360
	ctx.r10.s64 = ctx.r10.s64 + -7360;
	// addi r9,r9,-7264
	ctx.r9.s64 = ctx.r9.s64 + -7264;
	// stw r11,3680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3680, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,13616
	ctx.r3.s64 = ctx.r3.s64 + 13616;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338C284;
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

__attribute__((alias("__imp__sub_8338C29C"))) PPC_WEAK_FUNC(sub_8338C29C);
PPC_FUNC_IMPL(__imp__sub_8338C29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338C2A0"))) PPC_WEAK_FUNC(sub_8338C2A0);
PPC_FUNC_IMPL(__imp__sub_8338C2A0) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-6496
	ctx.r4.s64 = ctx.r11.s64 + -6496;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,3588
	ctx.r30.s64 = ctx.r31.s64 + 3588;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28268
	ctx.r5.s64 = ctx.r8.s64 + -28268;
	// addi r4,r7,-27916
	ctx.r4.s64 = ctx.r7.s64 + -27916;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-6768
	ctx.r10.s64 = ctx.r10.s64 + -6768;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338C2FC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-6600
	ctx.r10.s64 = ctx.r10.s64 + -6600;
	// addi r9,r9,-6504
	ctx.r9.s64 = ctx.r9.s64 + -6504;
	// stw r11,3588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3588, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,13704
	ctx.r3.s64 = ctx.r3.s64 + 13704;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338C32C;
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

__attribute__((alias("__imp__sub_8338C344"))) PPC_WEAK_FUNC(sub_8338C344);
PPC_FUNC_IMPL(__imp__sub_8338C344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338C348"))) PPC_WEAK_FUNC(sub_8338C348);
PPC_FUNC_IMPL(__imp__sub_8338C348) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-5840
	ctx.r4.s64 = ctx.r11.s64 + -5840;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,3496
	ctx.r30.s64 = ctx.r31.s64 + 3496;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28188
	ctx.r5.s64 = ctx.r8.s64 + -28188;
	// addi r4,r7,-27872
	ctx.r4.s64 = ctx.r7.s64 + -27872;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-6104
	ctx.r10.s64 = ctx.r10.s64 + -6104;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338C3A4;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-5944
	ctx.r10.s64 = ctx.r10.s64 + -5944;
	// addi r9,r9,-5848
	ctx.r9.s64 = ctx.r9.s64 + -5848;
	// stw r11,3496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3496, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,13792
	ctx.r3.s64 = ctx.r3.s64 + 13792;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338C3D4;
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

__attribute__((alias("__imp__sub_8338C3EC"))) PPC_WEAK_FUNC(sub_8338C3EC);
PPC_FUNC_IMPL(__imp__sub_8338C3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338C3F0"))) PPC_WEAK_FUNC(sub_8338C3F0);
PPC_FUNC_IMPL(__imp__sub_8338C3F0) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-5080
	ctx.r4.s64 = ctx.r11.s64 + -5080;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,3404
	ctx.r30.s64 = ctx.r31.s64 + 3404;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28268
	ctx.r5.s64 = ctx.r8.s64 + -28268;
	// addi r4,r7,-27824
	ctx.r4.s64 = ctx.r7.s64 + -27824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-5352
	ctx.r10.s64 = ctx.r10.s64 + -5352;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338C44C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-5184
	ctx.r10.s64 = ctx.r10.s64 + -5184;
	// addi r9,r9,-5088
	ctx.r9.s64 = ctx.r9.s64 + -5088;
	// stw r11,3404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3404, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,13880
	ctx.r3.s64 = ctx.r3.s64 + 13880;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338C47C;
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

__attribute__((alias("__imp__sub_8338C494"))) PPC_WEAK_FUNC(sub_8338C494);
PPC_FUNC_IMPL(__imp__sub_8338C494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338C498"))) PPC_WEAK_FUNC(sub_8338C498);
PPC_FUNC_IMPL(__imp__sub_8338C498) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-4424
	ctx.r4.s64 = ctx.r11.s64 + -4424;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,3312
	ctx.r30.s64 = ctx.r31.s64 + 3312;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28188
	ctx.r5.s64 = ctx.r8.s64 + -28188;
	// addi r4,r7,-27780
	ctx.r4.s64 = ctx.r7.s64 + -27780;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-4688
	ctx.r10.s64 = ctx.r10.s64 + -4688;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338C4F4;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-4528
	ctx.r10.s64 = ctx.r10.s64 + -4528;
	// addi r9,r9,-4432
	ctx.r9.s64 = ctx.r9.s64 + -4432;
	// stw r11,3312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3312, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,13968
	ctx.r3.s64 = ctx.r3.s64 + 13968;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338C524;
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

__attribute__((alias("__imp__sub_8338C53C"))) PPC_WEAK_FUNC(sub_8338C53C);
PPC_FUNC_IMPL(__imp__sub_8338C53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338C540"))) PPC_WEAK_FUNC(sub_8338C540);
PPC_FUNC_IMPL(__imp__sub_8338C540) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-3664
	ctx.r4.s64 = ctx.r11.s64 + -3664;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,3220
	ctx.r30.s64 = ctx.r31.s64 + 3220;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28268
	ctx.r5.s64 = ctx.r8.s64 + -28268;
	// addi r4,r7,-27732
	ctx.r4.s64 = ctx.r7.s64 + -27732;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-3936
	ctx.r10.s64 = ctx.r10.s64 + -3936;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338C59C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-3768
	ctx.r10.s64 = ctx.r10.s64 + -3768;
	// addi r9,r9,-3672
	ctx.r9.s64 = ctx.r9.s64 + -3672;
	// stw r11,3220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3220, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,14056
	ctx.r3.s64 = ctx.r3.s64 + 14056;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338C5CC;
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

__attribute__((alias("__imp__sub_8338C5E4"))) PPC_WEAK_FUNC(sub_8338C5E4);
PPC_FUNC_IMPL(__imp__sub_8338C5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338C5E8"))) PPC_WEAK_FUNC(sub_8338C5E8);
PPC_FUNC_IMPL(__imp__sub_8338C5E8) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-3008
	ctx.r4.s64 = ctx.r11.s64 + -3008;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,3128
	ctx.r30.s64 = ctx.r31.s64 + 3128;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28188
	ctx.r5.s64 = ctx.r8.s64 + -28188;
	// addi r4,r7,-27688
	ctx.r4.s64 = ctx.r7.s64 + -27688;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-3272
	ctx.r10.s64 = ctx.r10.s64 + -3272;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338C644;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-3112
	ctx.r10.s64 = ctx.r10.s64 + -3112;
	// addi r9,r9,-3016
	ctx.r9.s64 = ctx.r9.s64 + -3016;
	// stw r11,3128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3128, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,14144
	ctx.r3.s64 = ctx.r3.s64 + 14144;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338C674;
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

__attribute__((alias("__imp__sub_8338C68C"))) PPC_WEAK_FUNC(sub_8338C68C);
PPC_FUNC_IMPL(__imp__sub_8338C68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338C690"))) PPC_WEAK_FUNC(sub_8338C690);
PPC_FUNC_IMPL(__imp__sub_8338C690) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-2248
	ctx.r4.s64 = ctx.r11.s64 + -2248;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,3036
	ctx.r30.s64 = ctx.r31.s64 + 3036;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28268
	ctx.r5.s64 = ctx.r8.s64 + -28268;
	// addi r4,r7,-27640
	ctx.r4.s64 = ctx.r7.s64 + -27640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-2520
	ctx.r10.s64 = ctx.r10.s64 + -2520;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338C6EC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-2352
	ctx.r10.s64 = ctx.r10.s64 + -2352;
	// addi r9,r9,-2256
	ctx.r9.s64 = ctx.r9.s64 + -2256;
	// stw r11,3036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3036, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,14232
	ctx.r3.s64 = ctx.r3.s64 + 14232;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338C71C;
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

__attribute__((alias("__imp__sub_8338C734"))) PPC_WEAK_FUNC(sub_8338C734);
PPC_FUNC_IMPL(__imp__sub_8338C734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338C738"))) PPC_WEAK_FUNC(sub_8338C738);
PPC_FUNC_IMPL(__imp__sub_8338C738) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-1592
	ctx.r4.s64 = ctx.r11.s64 + -1592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,2944
	ctx.r30.s64 = ctx.r31.s64 + 2944;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28188
	ctx.r5.s64 = ctx.r8.s64 + -28188;
	// addi r4,r7,-27596
	ctx.r4.s64 = ctx.r7.s64 + -27596;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-1856
	ctx.r10.s64 = ctx.r10.s64 + -1856;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338C794;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-1696
	ctx.r10.s64 = ctx.r10.s64 + -1696;
	// addi r9,r9,-1600
	ctx.r9.s64 = ctx.r9.s64 + -1600;
	// stw r11,2944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2944, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,14320
	ctx.r3.s64 = ctx.r3.s64 + 14320;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338C7C4;
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

__attribute__((alias("__imp__sub_8338C7DC"))) PPC_WEAK_FUNC(sub_8338C7DC);
PPC_FUNC_IMPL(__imp__sub_8338C7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338C7E0"))) PPC_WEAK_FUNC(sub_8338C7E0);
PPC_FUNC_IMPL(__imp__sub_8338C7E0) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-832
	ctx.r4.s64 = ctx.r11.s64 + -832;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,2852
	ctx.r30.s64 = ctx.r31.s64 + 2852;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28268
	ctx.r5.s64 = ctx.r8.s64 + -28268;
	// addi r4,r7,-27548
	ctx.r4.s64 = ctx.r7.s64 + -27548;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-1104
	ctx.r10.s64 = ctx.r10.s64 + -1104;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338C83C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-936
	ctx.r10.s64 = ctx.r10.s64 + -936;
	// addi r9,r9,-840
	ctx.r9.s64 = ctx.r9.s64 + -840;
	// stw r11,2852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2852, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,14408
	ctx.r3.s64 = ctx.r3.s64 + 14408;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338C86C;
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

__attribute__((alias("__imp__sub_8338C884"))) PPC_WEAK_FUNC(sub_8338C884);
PPC_FUNC_IMPL(__imp__sub_8338C884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338C888"))) PPC_WEAK_FUNC(sub_8338C888);
PPC_FUNC_IMPL(__imp__sub_8338C888) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-176
	ctx.r4.s64 = ctx.r11.s64 + -176;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,2760
	ctx.r30.s64 = ctx.r31.s64 + 2760;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28188
	ctx.r5.s64 = ctx.r8.s64 + -28188;
	// addi r4,r7,-27504
	ctx.r4.s64 = ctx.r7.s64 + -27504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-440
	ctx.r10.s64 = ctx.r10.s64 + -440;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338C8E4;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-280
	ctx.r10.s64 = ctx.r10.s64 + -280;
	// addi r9,r9,-184
	ctx.r9.s64 = ctx.r9.s64 + -184;
	// stw r11,2760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2760, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,14496
	ctx.r3.s64 = ctx.r3.s64 + 14496;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338C914;
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

__attribute__((alias("__imp__sub_8338C92C"))) PPC_WEAK_FUNC(sub_8338C92C);
PPC_FUNC_IMPL(__imp__sub_8338C92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338C930"))) PPC_WEAK_FUNC(sub_8338C930);
PPC_FUNC_IMPL(__imp__sub_8338C930) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,584
	ctx.r4.s64 = ctx.r11.s64 + 584;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,2668
	ctx.r30.s64 = ctx.r31.s64 + 2668;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28268
	ctx.r5.s64 = ctx.r8.s64 + -28268;
	// addi r4,r7,-27456
	ctx.r4.s64 = ctx.r7.s64 + -27456;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,312
	ctx.r10.s64 = ctx.r10.s64 + 312;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338C98C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,480
	ctx.r10.s64 = ctx.r10.s64 + 480;
	// addi r9,r9,576
	ctx.r9.s64 = ctx.r9.s64 + 576;
	// stw r11,2668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2668, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,14584
	ctx.r3.s64 = ctx.r3.s64 + 14584;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338C9BC;
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

__attribute__((alias("__imp__sub_8338C9D4"))) PPC_WEAK_FUNC(sub_8338C9D4);
PPC_FUNC_IMPL(__imp__sub_8338C9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338C9D8"))) PPC_WEAK_FUNC(sub_8338C9D8);
PPC_FUNC_IMPL(__imp__sub_8338C9D8) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,1240
	ctx.r4.s64 = ctx.r11.s64 + 1240;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,2576
	ctx.r30.s64 = ctx.r31.s64 + 2576;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28188
	ctx.r5.s64 = ctx.r8.s64 + -28188;
	// addi r4,r7,-27412
	ctx.r4.s64 = ctx.r7.s64 + -27412;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,976
	ctx.r10.s64 = ctx.r10.s64 + 976;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338CA34;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,1136
	ctx.r10.s64 = ctx.r10.s64 + 1136;
	// addi r9,r9,1232
	ctx.r9.s64 = ctx.r9.s64 + 1232;
	// stw r11,2576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2576, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,14672
	ctx.r3.s64 = ctx.r3.s64 + 14672;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338CA64;
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

__attribute__((alias("__imp__sub_8338CA7C"))) PPC_WEAK_FUNC(sub_8338CA7C);
PPC_FUNC_IMPL(__imp__sub_8338CA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338CA80"))) PPC_WEAK_FUNC(sub_8338CA80);
PPC_FUNC_IMPL(__imp__sub_8338CA80) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,2000
	ctx.r4.s64 = ctx.r11.s64 + 2000;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,2484
	ctx.r30.s64 = ctx.r31.s64 + 2484;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28268
	ctx.r5.s64 = ctx.r8.s64 + -28268;
	// addi r4,r7,-27364
	ctx.r4.s64 = ctx.r7.s64 + -27364;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,1728
	ctx.r10.s64 = ctx.r10.s64 + 1728;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338CADC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,1896
	ctx.r10.s64 = ctx.r10.s64 + 1896;
	// addi r9,r9,1992
	ctx.r9.s64 = ctx.r9.s64 + 1992;
	// stw r11,2484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2484, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,14760
	ctx.r3.s64 = ctx.r3.s64 + 14760;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338CB0C;
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

__attribute__((alias("__imp__sub_8338CB24"))) PPC_WEAK_FUNC(sub_8338CB24);
PPC_FUNC_IMPL(__imp__sub_8338CB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338CB28"))) PPC_WEAK_FUNC(sub_8338CB28);
PPC_FUNC_IMPL(__imp__sub_8338CB28) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,2656
	ctx.r4.s64 = ctx.r11.s64 + 2656;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,2392
	ctx.r30.s64 = ctx.r31.s64 + 2392;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28188
	ctx.r5.s64 = ctx.r8.s64 + -28188;
	// addi r4,r7,-27316
	ctx.r4.s64 = ctx.r7.s64 + -27316;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,2392
	ctx.r10.s64 = ctx.r10.s64 + 2392;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338CB84;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,2552
	ctx.r10.s64 = ctx.r10.s64 + 2552;
	// addi r9,r9,2648
	ctx.r9.s64 = ctx.r9.s64 + 2648;
	// stw r11,2392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2392, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,14848
	ctx.r3.s64 = ctx.r3.s64 + 14848;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338CBB4;
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

__attribute__((alias("__imp__sub_8338CBCC"))) PPC_WEAK_FUNC(sub_8338CBCC);
PPC_FUNC_IMPL(__imp__sub_8338CBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338CBD0"))) PPC_WEAK_FUNC(sub_8338CBD0);
PPC_FUNC_IMPL(__imp__sub_8338CBD0) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,3416
	ctx.r4.s64 = ctx.r11.s64 + 3416;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,2300
	ctx.r30.s64 = ctx.r31.s64 + 2300;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28268
	ctx.r5.s64 = ctx.r8.s64 + -28268;
	// addi r4,r7,-27268
	ctx.r4.s64 = ctx.r7.s64 + -27268;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,3144
	ctx.r10.s64 = ctx.r10.s64 + 3144;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338CC2C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,3312
	ctx.r10.s64 = ctx.r10.s64 + 3312;
	// addi r9,r9,3408
	ctx.r9.s64 = ctx.r9.s64 + 3408;
	// stw r11,2300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2300, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,14936
	ctx.r3.s64 = ctx.r3.s64 + 14936;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338CC5C;
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

__attribute__((alias("__imp__sub_8338CC74"))) PPC_WEAK_FUNC(sub_8338CC74);
PPC_FUNC_IMPL(__imp__sub_8338CC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338CC78"))) PPC_WEAK_FUNC(sub_8338CC78);
PPC_FUNC_IMPL(__imp__sub_8338CC78) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,4072
	ctx.r4.s64 = ctx.r11.s64 + 4072;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,2208
	ctx.r30.s64 = ctx.r31.s64 + 2208;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28188
	ctx.r5.s64 = ctx.r8.s64 + -28188;
	// addi r4,r7,-27220
	ctx.r4.s64 = ctx.r7.s64 + -27220;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,3808
	ctx.r10.s64 = ctx.r10.s64 + 3808;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338CCD4;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,3968
	ctx.r10.s64 = ctx.r10.s64 + 3968;
	// addi r9,r9,4064
	ctx.r9.s64 = ctx.r9.s64 + 4064;
	// stw r11,2208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2208, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,15024
	ctx.r3.s64 = ctx.r3.s64 + 15024;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338CD04;
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

__attribute__((alias("__imp__sub_8338CD1C"))) PPC_WEAK_FUNC(sub_8338CD1C);
PPC_FUNC_IMPL(__imp__sub_8338CD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338CD20"))) PPC_WEAK_FUNC(sub_8338CD20);
PPC_FUNC_IMPL(__imp__sub_8338CD20) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,4832
	ctx.r4.s64 = ctx.r11.s64 + 4832;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,2116
	ctx.r30.s64 = ctx.r31.s64 + 2116;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28268
	ctx.r5.s64 = ctx.r8.s64 + -28268;
	// addi r4,r7,-27172
	ctx.r4.s64 = ctx.r7.s64 + -27172;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,4560
	ctx.r10.s64 = ctx.r10.s64 + 4560;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338CD7C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,4728
	ctx.r10.s64 = ctx.r10.s64 + 4728;
	// addi r9,r9,4824
	ctx.r9.s64 = ctx.r9.s64 + 4824;
	// stw r11,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,15112
	ctx.r3.s64 = ctx.r3.s64 + 15112;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338CDAC;
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

__attribute__((alias("__imp__sub_8338CDC4"))) PPC_WEAK_FUNC(sub_8338CDC4);
PPC_FUNC_IMPL(__imp__sub_8338CDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338CDC8"))) PPC_WEAK_FUNC(sub_8338CDC8);
PPC_FUNC_IMPL(__imp__sub_8338CDC8) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,5488
	ctx.r4.s64 = ctx.r11.s64 + 5488;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,2024
	ctx.r30.s64 = ctx.r31.s64 + 2024;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28188
	ctx.r5.s64 = ctx.r8.s64 + -28188;
	// addi r4,r7,-27124
	ctx.r4.s64 = ctx.r7.s64 + -27124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,5224
	ctx.r10.s64 = ctx.r10.s64 + 5224;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338CE24;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,5384
	ctx.r10.s64 = ctx.r10.s64 + 5384;
	// addi r9,r9,5480
	ctx.r9.s64 = ctx.r9.s64 + 5480;
	// stw r11,2024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2024, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,15200
	ctx.r3.s64 = ctx.r3.s64 + 15200;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338CE54;
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

__attribute__((alias("__imp__sub_8338CE6C"))) PPC_WEAK_FUNC(sub_8338CE6C);
PPC_FUNC_IMPL(__imp__sub_8338CE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338CE70"))) PPC_WEAK_FUNC(sub_8338CE70);
PPC_FUNC_IMPL(__imp__sub_8338CE70) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,6248
	ctx.r4.s64 = ctx.r11.s64 + 6248;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,1932
	ctx.r30.s64 = ctx.r31.s64 + 1932;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28268
	ctx.r5.s64 = ctx.r8.s64 + -28268;
	// addi r4,r7,-27076
	ctx.r4.s64 = ctx.r7.s64 + -27076;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,5976
	ctx.r10.s64 = ctx.r10.s64 + 5976;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338CECC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,6144
	ctx.r10.s64 = ctx.r10.s64 + 6144;
	// addi r9,r9,6240
	ctx.r9.s64 = ctx.r9.s64 + 6240;
	// stw r11,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,15288
	ctx.r3.s64 = ctx.r3.s64 + 15288;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338CEFC;
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

__attribute__((alias("__imp__sub_8338CF14"))) PPC_WEAK_FUNC(sub_8338CF14);
PPC_FUNC_IMPL(__imp__sub_8338CF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338CF18"))) PPC_WEAK_FUNC(sub_8338CF18);
PPC_FUNC_IMPL(__imp__sub_8338CF18) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,6904
	ctx.r4.s64 = ctx.r11.s64 + 6904;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,1840
	ctx.r30.s64 = ctx.r31.s64 + 1840;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28188
	ctx.r5.s64 = ctx.r8.s64 + -28188;
	// addi r4,r7,-27028
	ctx.r4.s64 = ctx.r7.s64 + -27028;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,6640
	ctx.r10.s64 = ctx.r10.s64 + 6640;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338CF74;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,6800
	ctx.r10.s64 = ctx.r10.s64 + 6800;
	// addi r9,r9,6896
	ctx.r9.s64 = ctx.r9.s64 + 6896;
	// stw r11,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,15376
	ctx.r3.s64 = ctx.r3.s64 + 15376;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338CFA4;
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

__attribute__((alias("__imp__sub_8338CFBC"))) PPC_WEAK_FUNC(sub_8338CFBC);
PPC_FUNC_IMPL(__imp__sub_8338CFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338CFC0"))) PPC_WEAK_FUNC(sub_8338CFC0);
PPC_FUNC_IMPL(__imp__sub_8338CFC0) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,7664
	ctx.r4.s64 = ctx.r11.s64 + 7664;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,1748
	ctx.r30.s64 = ctx.r31.s64 + 1748;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28268
	ctx.r5.s64 = ctx.r8.s64 + -28268;
	// addi r4,r7,-26980
	ctx.r4.s64 = ctx.r7.s64 + -26980;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,7392
	ctx.r10.s64 = ctx.r10.s64 + 7392;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338D01C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,7560
	ctx.r10.s64 = ctx.r10.s64 + 7560;
	// addi r9,r9,7656
	ctx.r9.s64 = ctx.r9.s64 + 7656;
	// stw r11,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,15464
	ctx.r3.s64 = ctx.r3.s64 + 15464;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338D04C;
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

__attribute__((alias("__imp__sub_8338D064"))) PPC_WEAK_FUNC(sub_8338D064);
PPC_FUNC_IMPL(__imp__sub_8338D064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338D068"))) PPC_WEAK_FUNC(sub_8338D068);
PPC_FUNC_IMPL(__imp__sub_8338D068) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,8320
	ctx.r4.s64 = ctx.r11.s64 + 8320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,1656
	ctx.r30.s64 = ctx.r31.s64 + 1656;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28188
	ctx.r5.s64 = ctx.r8.s64 + -28188;
	// addi r4,r7,-26932
	ctx.r4.s64 = ctx.r7.s64 + -26932;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,8056
	ctx.r10.s64 = ctx.r10.s64 + 8056;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338D0C4;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,8216
	ctx.r10.s64 = ctx.r10.s64 + 8216;
	// addi r9,r9,8312
	ctx.r9.s64 = ctx.r9.s64 + 8312;
	// stw r11,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,15552
	ctx.r3.s64 = ctx.r3.s64 + 15552;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338D0F4;
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

__attribute__((alias("__imp__sub_8338D10C"))) PPC_WEAK_FUNC(sub_8338D10C);
PPC_FUNC_IMPL(__imp__sub_8338D10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338D110"))) PPC_WEAK_FUNC(sub_8338D110);
PPC_FUNC_IMPL(__imp__sub_8338D110) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,9080
	ctx.r4.s64 = ctx.r11.s64 + 9080;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,1564
	ctx.r30.s64 = ctx.r31.s64 + 1564;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28268
	ctx.r5.s64 = ctx.r8.s64 + -28268;
	// addi r4,r7,-26884
	ctx.r4.s64 = ctx.r7.s64 + -26884;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,8808
	ctx.r10.s64 = ctx.r10.s64 + 8808;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338D16C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,8976
	ctx.r10.s64 = ctx.r10.s64 + 8976;
	// addi r9,r9,9072
	ctx.r9.s64 = ctx.r9.s64 + 9072;
	// stw r11,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,15640
	ctx.r3.s64 = ctx.r3.s64 + 15640;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338D19C;
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

__attribute__((alias("__imp__sub_8338D1B4"))) PPC_WEAK_FUNC(sub_8338D1B4);
PPC_FUNC_IMPL(__imp__sub_8338D1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338D1B8"))) PPC_WEAK_FUNC(sub_8338D1B8);
PPC_FUNC_IMPL(__imp__sub_8338D1B8) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,9736
	ctx.r4.s64 = ctx.r11.s64 + 9736;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,1472
	ctx.r30.s64 = ctx.r31.s64 + 1472;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28188
	ctx.r5.s64 = ctx.r8.s64 + -28188;
	// addi r4,r7,-26836
	ctx.r4.s64 = ctx.r7.s64 + -26836;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,9472
	ctx.r10.s64 = ctx.r10.s64 + 9472;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338D214;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,9632
	ctx.r10.s64 = ctx.r10.s64 + 9632;
	// addi r9,r9,9728
	ctx.r9.s64 = ctx.r9.s64 + 9728;
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,15728
	ctx.r3.s64 = ctx.r3.s64 + 15728;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338D244;
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

__attribute__((alias("__imp__sub_8338D25C"))) PPC_WEAK_FUNC(sub_8338D25C);
PPC_FUNC_IMPL(__imp__sub_8338D25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338D260"))) PPC_WEAK_FUNC(sub_8338D260);
PPC_FUNC_IMPL(__imp__sub_8338D260) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,10496
	ctx.r4.s64 = ctx.r11.s64 + 10496;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,1380
	ctx.r30.s64 = ctx.r31.s64 + 1380;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28268
	ctx.r5.s64 = ctx.r8.s64 + -28268;
	// addi r4,r7,-26788
	ctx.r4.s64 = ctx.r7.s64 + -26788;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,10224
	ctx.r10.s64 = ctx.r10.s64 + 10224;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338D2BC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,10392
	ctx.r10.s64 = ctx.r10.s64 + 10392;
	// addi r9,r9,10488
	ctx.r9.s64 = ctx.r9.s64 + 10488;
	// stw r11,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,15816
	ctx.r3.s64 = ctx.r3.s64 + 15816;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338D2EC;
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

__attribute__((alias("__imp__sub_8338D304"))) PPC_WEAK_FUNC(sub_8338D304);
PPC_FUNC_IMPL(__imp__sub_8338D304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338D308"))) PPC_WEAK_FUNC(sub_8338D308);
PPC_FUNC_IMPL(__imp__sub_8338D308) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,11152
	ctx.r4.s64 = ctx.r11.s64 + 11152;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r31,1288
	ctx.r30.s64 = ctx.r31.s64 + 1288;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-28188
	ctx.r5.s64 = ctx.r8.s64 + -28188;
	// addi r4,r7,-26740
	ctx.r4.s64 = ctx.r7.s64 + -26740;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,10888
	ctx.r10.s64 = ctx.r10.s64 + 10888;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338D364;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,11048
	ctx.r10.s64 = ctx.r10.s64 + 11048;
	// addi r9,r9,11144
	ctx.r9.s64 = ctx.r9.s64 + 11144;
	// stw r11,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,15904
	ctx.r3.s64 = ctx.r3.s64 + 15904;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338D394;
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

__attribute__((alias("__imp__sub_8338D3AC"))) PPC_WEAK_FUNC(sub_8338D3AC);
PPC_FUNC_IMPL(__imp__sub_8338D3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338D3B0"))) PPC_WEAK_FUNC(sub_8338D3B0);
PPC_FUNC_IMPL(__imp__sub_8338D3B0) {
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
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r6,-32232
	ctx.r6.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r9,-32110
	ctx.r9.s64 = -2104360960;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r8,-32110
	ctx.r8.s64 = -2104360960;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r5,r7,-24816
	ctx.r5.s64 = ctx.r7.s64 + -24816;
	// addi r4,r6,-24772
	ctx.r4.s64 = ctx.r6.s64 + -24772;
	// li r31,433
	ctx.r31.s64 = 433;
	// addi r3,r3,-5984
	ctx.r3.s64 = ctx.r3.s64 + -5984;
	// addi r10,r11,-24912
	ctx.r10.s64 = ctx.r11.s64 + -24912;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r9,r9,-10440
	ctx.r9.s64 = ctx.r9.s64 + -10440;
	// addi r8,r8,-9104
	ctx.r8.s64 = ctx.r8.s64 + -9104;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82785290
	ctx.lr = 0x8338D40C;
	sub_82785290(ctx, base);
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

__attribute__((alias("__imp__sub_8338D420"))) PPC_WEAK_FUNC(sub_8338D420);
PPC_FUNC_IMPL(__imp__sub_8338D420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r11,-18064
	ctx.r9.s64 = ctx.r11.s64 + -18064;
	// addi r8,r10,-5744
	ctx.r8.s64 = ctx.r10.s64 + -5744;
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8338D43C"))) PPC_WEAK_FUNC(sub_8338D43C);
PPC_FUNC_IMPL(__imp__sub_8338D43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338D440"))) PPC_WEAK_FUNC(sub_8338D440);
PPC_FUNC_IMPL(__imp__sub_8338D440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-5712
	ctx.r9.s64 = ctx.r11.s64 + -5712;
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8338D470"))) PPC_WEAK_FUNC(sub_8338D470);
PPC_FUNC_IMPL(__imp__sub_8338D470) {
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
	// addi r5,r11,-5696
	ctx.r5.s64 = ctx.r11.s64 + -5696;
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8338D4B8"))) PPC_WEAK_FUNC(sub_8338D4B8);
PPC_FUNC_IMPL(__imp__sub_8338D4B8) {
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
	// addi r5,r11,-5728
	ctx.r5.s64 = ctx.r11.s64 + -5728;
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
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8338D500"))) PPC_WEAK_FUNC(sub_8338D500);
PPC_FUNC_IMPL(__imp__sub_8338D500) {
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
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// addi r4,r11,-4832
	ctx.r4.s64 = ctx.r11.s64 + -4832;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32110
	ctx.r10.s64 = -2104360960;
	// addi r30,r31,-5680
	ctx.r30.s64 = ctx.r31.s64 + -5680;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-24340
	ctx.r5.s64 = ctx.r8.s64 + -24340;
	// addi r4,r7,-24296
	ctx.r4.s64 = ctx.r7.s64 + -24296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-5416
	ctx.r10.s64 = ctx.r10.s64 + -5416;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338D55C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32110
	ctx.r10.s64 = -2104360960;
	// lis r9,-32110
	ctx.r9.s64 = -2104360960;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-5240
	ctx.r10.s64 = ctx.r10.s64 + -5240;
	// addi r9,r9,-5144
	ctx.r9.s64 = ctx.r9.s64 + -5144;
	// stw r11,-5680(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5680, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,16264
	ctx.r3.s64 = ctx.r3.s64 + 16264;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338D58C;
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

__attribute__((alias("__imp__sub_8338D5A4"))) PPC_WEAK_FUNC(sub_8338D5A4);
PPC_FUNC_IMPL(__imp__sub_8338D5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338D5A8"))) PPC_WEAK_FUNC(sub_8338D5A8);
PPC_FUNC_IMPL(__imp__sub_8338D5A8) {
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
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32110
	ctx.r10.s64 = -2104360960;
	// addi r30,r31,-5936
	ctx.r30.s64 = ctx.r31.s64 + -5936;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-24252
	ctx.r5.s64 = ctx.r8.s64 + -24252;
	// addi r4,r7,-24192
	ctx.r4.s64 = ctx.r7.s64 + -24192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-4296
	ctx.r10.s64 = ctx.r10.s64 + -4296;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338D604;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32110
	ctx.r10.s64 = -2104360960;
	// lis r9,-32110
	ctx.r9.s64 = -2104360960;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-4224
	ctx.r10.s64 = ctx.r10.s64 + -4224;
	// addi r9,r9,-4128
	ctx.r9.s64 = ctx.r9.s64 + -4128;
	// stw r11,-5936(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5936, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,16352
	ctx.r3.s64 = ctx.r3.s64 + 16352;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338D634;
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

__attribute__((alias("__imp__sub_8338D64C"))) PPC_WEAK_FUNC(sub_8338D64C);
PPC_FUNC_IMPL(__imp__sub_8338D64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338D650"))) PPC_WEAK_FUNC(sub_8338D650);
PPC_FUNC_IMPL(__imp__sub_8338D650) {
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
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32110
	ctx.r10.s64 = -2104360960;
	// addi r30,r31,-5844
	ctx.r30.s64 = ctx.r31.s64 + -5844;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-24132
	ctx.r5.s64 = ctx.r8.s64 + -24132;
	// addi r4,r7,-24064
	ctx.r4.s64 = ctx.r7.s64 + -24064;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-2440
	ctx.r10.s64 = ctx.r10.s64 + -2440;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338D6AC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32110
	ctx.r10.s64 = -2104360960;
	// lis r9,-32110
	ctx.r9.s64 = -2104360960;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-2368
	ctx.r10.s64 = ctx.r10.s64 + -2368;
	// addi r9,r9,-2272
	ctx.r9.s64 = ctx.r9.s64 + -2272;
	// stw r11,-5844(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5844, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,16440
	ctx.r3.s64 = ctx.r3.s64 + 16440;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338D6DC;
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

__attribute__((alias("__imp__sub_8338D6F4"))) PPC_WEAK_FUNC(sub_8338D6F4);
PPC_FUNC_IMPL(__imp__sub_8338D6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338D6F8"))) PPC_WEAK_FUNC(sub_8338D6F8);
PPC_FUNC_IMPL(__imp__sub_8338D6F8) {
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
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,3272
	ctx.r4.s64 = ctx.r11.s64 + 3272;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// addi r30,r31,5060
	ctx.r30.s64 = ctx.r31.s64 + 5060;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-23008
	ctx.r5.s64 = ctx.r8.s64 + -23008;
	// addi r4,r7,-22960
	ctx.r4.s64 = ctx.r7.s64 + -22960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,7960
	ctx.r10.s64 = ctx.r10.s64 + 7960;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338D754;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// lis r9,-32109
	ctx.r9.s64 = -2104295424;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,8032
	ctx.r10.s64 = ctx.r10.s64 + 8032;
	// addi r9,r9,8128
	ctx.r9.s64 = ctx.r9.s64 + 8128;
	// stw r11,5060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5060, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,16528
	ctx.r3.s64 = ctx.r3.s64 + 16528;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338D784;
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

__attribute__((alias("__imp__sub_8338D79C"))) PPC_WEAK_FUNC(sub_8338D79C);
PPC_FUNC_IMPL(__imp__sub_8338D79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338D7A0"))) PPC_WEAK_FUNC(sub_8338D7A0);
PPC_FUNC_IMPL(__imp__sub_8338D7A0) {
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
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,3272
	ctx.r4.s64 = ctx.r11.s64 + 3272;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// addi r30,r31,4968
	ctx.r30.s64 = ctx.r31.s64 + 4968;
	// addi r6,r9,-22860
	ctx.r6.s64 = ctx.r9.s64 + -22860;
	// addi r5,r8,-22820
	ctx.r5.s64 = ctx.r8.s64 + -22820;
	// addi r4,r7,-22768
	ctx.r4.s64 = ctx.r7.s64 + -22768;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,8344
	ctx.r10.s64 = ctx.r10.s64 + 8344;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338D7FC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// lis r9,-32109
	ctx.r9.s64 = -2104295424;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,8416
	ctx.r10.s64 = ctx.r10.s64 + 8416;
	// addi r9,r9,8512
	ctx.r9.s64 = ctx.r9.s64 + 8512;
	// stw r11,4968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4968, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,16616
	ctx.r3.s64 = ctx.r3.s64 + 16616;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338D82C;
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

__attribute__((alias("__imp__sub_8338D844"))) PPC_WEAK_FUNC(sub_8338D844);
PPC_FUNC_IMPL(__imp__sub_8338D844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338D848"))) PPC_WEAK_FUNC(sub_8338D848);
PPC_FUNC_IMPL(__imp__sub_8338D848) {
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
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,3272
	ctx.r4.s64 = ctx.r11.s64 + 3272;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// addi r30,r31,4876
	ctx.r30.s64 = ctx.r31.s64 + 4876;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-23008
	ctx.r5.s64 = ctx.r8.s64 + -23008;
	// addi r4,r7,-22672
	ctx.r4.s64 = ctx.r7.s64 + -22672;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,8800
	ctx.r10.s64 = ctx.r10.s64 + 8800;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338D8A4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// lis r9,-32109
	ctx.r9.s64 = -2104295424;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,8872
	ctx.r10.s64 = ctx.r10.s64 + 8872;
	// addi r9,r9,8968
	ctx.r9.s64 = ctx.r9.s64 + 8968;
	// stw r11,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,16704
	ctx.r3.s64 = ctx.r3.s64 + 16704;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338D8D4;
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

__attribute__((alias("__imp__sub_8338D8EC"))) PPC_WEAK_FUNC(sub_8338D8EC);
PPC_FUNC_IMPL(__imp__sub_8338D8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338D8F0"))) PPC_WEAK_FUNC(sub_8338D8F0);
PPC_FUNC_IMPL(__imp__sub_8338D8F0) {
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
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,3272
	ctx.r4.s64 = ctx.r11.s64 + 3272;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// addi r30,r31,4784
	ctx.r30.s64 = ctx.r31.s64 + 4784;
	// addi r6,r9,-22560
	ctx.r6.s64 = ctx.r9.s64 + -22560;
	// addi r5,r8,-22820
	ctx.r5.s64 = ctx.r8.s64 + -22820;
	// addi r4,r7,-22504
	ctx.r4.s64 = ctx.r7.s64 + -22504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,9184
	ctx.r10.s64 = ctx.r10.s64 + 9184;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338D94C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// lis r9,-32109
	ctx.r9.s64 = -2104295424;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,9256
	ctx.r10.s64 = ctx.r10.s64 + 9256;
	// addi r9,r9,9352
	ctx.r9.s64 = ctx.r9.s64 + 9352;
	// stw r11,4784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4784, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,16792
	ctx.r3.s64 = ctx.r3.s64 + 16792;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338D97C;
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

__attribute__((alias("__imp__sub_8338D994"))) PPC_WEAK_FUNC(sub_8338D994);
PPC_FUNC_IMPL(__imp__sub_8338D994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338D998"))) PPC_WEAK_FUNC(sub_8338D998);
PPC_FUNC_IMPL(__imp__sub_8338D998) {
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
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,3272
	ctx.r4.s64 = ctx.r11.s64 + 3272;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// addi r30,r31,4692
	ctx.r30.s64 = ctx.r31.s64 + 4692;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-23008
	ctx.r5.s64 = ctx.r8.s64 + -23008;
	// addi r4,r7,-22392
	ctx.r4.s64 = ctx.r7.s64 + -22392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,9640
	ctx.r10.s64 = ctx.r10.s64 + 9640;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338D9F4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// lis r9,-32109
	ctx.r9.s64 = -2104295424;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,9712
	ctx.r10.s64 = ctx.r10.s64 + 9712;
	// addi r9,r9,9808
	ctx.r9.s64 = ctx.r9.s64 + 9808;
	// stw r11,4692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4692, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,16880
	ctx.r3.s64 = ctx.r3.s64 + 16880;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338DA24;
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

__attribute__((alias("__imp__sub_8338DA3C"))) PPC_WEAK_FUNC(sub_8338DA3C);
PPC_FUNC_IMPL(__imp__sub_8338DA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338DA40"))) PPC_WEAK_FUNC(sub_8338DA40);
PPC_FUNC_IMPL(__imp__sub_8338DA40) {
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
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,3272
	ctx.r4.s64 = ctx.r11.s64 + 3272;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// addi r30,r31,4600
	ctx.r30.s64 = ctx.r31.s64 + 4600;
	// addi r6,r9,-22280
	ctx.r6.s64 = ctx.r9.s64 + -22280;
	// addi r5,r8,-22820
	ctx.r5.s64 = ctx.r8.s64 + -22820;
	// addi r4,r7,-22224
	ctx.r4.s64 = ctx.r7.s64 + -22224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,10024
	ctx.r10.s64 = ctx.r10.s64 + 10024;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338DA9C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// lis r9,-32109
	ctx.r9.s64 = -2104295424;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,10096
	ctx.r10.s64 = ctx.r10.s64 + 10096;
	// addi r9,r9,10192
	ctx.r9.s64 = ctx.r9.s64 + 10192;
	// stw r11,4600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4600, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,16968
	ctx.r3.s64 = ctx.r3.s64 + 16968;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338DACC;
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

__attribute__((alias("__imp__sub_8338DAE4"))) PPC_WEAK_FUNC(sub_8338DAE4);
PPC_FUNC_IMPL(__imp__sub_8338DAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338DAE8"))) PPC_WEAK_FUNC(sub_8338DAE8);
PPC_FUNC_IMPL(__imp__sub_8338DAE8) {
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
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,3272
	ctx.r4.s64 = ctx.r11.s64 + 3272;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// addi r30,r31,4508
	ctx.r30.s64 = ctx.r31.s64 + 4508;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-23008
	ctx.r5.s64 = ctx.r8.s64 + -23008;
	// addi r4,r7,-22112
	ctx.r4.s64 = ctx.r7.s64 + -22112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,10480
	ctx.r10.s64 = ctx.r10.s64 + 10480;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338DB44;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// lis r9,-32109
	ctx.r9.s64 = -2104295424;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,10552
	ctx.r10.s64 = ctx.r10.s64 + 10552;
	// addi r9,r9,10648
	ctx.r9.s64 = ctx.r9.s64 + 10648;
	// stw r11,4508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4508, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,17056
	ctx.r3.s64 = ctx.r3.s64 + 17056;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338DB74;
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

__attribute__((alias("__imp__sub_8338DB8C"))) PPC_WEAK_FUNC(sub_8338DB8C);
PPC_FUNC_IMPL(__imp__sub_8338DB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338DB90"))) PPC_WEAK_FUNC(sub_8338DB90);
PPC_FUNC_IMPL(__imp__sub_8338DB90) {
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
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,3272
	ctx.r4.s64 = ctx.r11.s64 + 3272;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// addi r30,r31,4416
	ctx.r30.s64 = ctx.r31.s64 + 4416;
	// addi r6,r9,-22016
	ctx.r6.s64 = ctx.r9.s64 + -22016;
	// addi r5,r8,-22820
	ctx.r5.s64 = ctx.r8.s64 + -22820;
	// addi r4,r7,-21968
	ctx.r4.s64 = ctx.r7.s64 + -21968;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,10864
	ctx.r10.s64 = ctx.r10.s64 + 10864;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338DBEC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// lis r9,-32109
	ctx.r9.s64 = -2104295424;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,10936
	ctx.r10.s64 = ctx.r10.s64 + 10936;
	// addi r9,r9,11032
	ctx.r9.s64 = ctx.r9.s64 + 11032;
	// stw r11,4416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4416, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,17144
	ctx.r3.s64 = ctx.r3.s64 + 17144;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338DC1C;
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

__attribute__((alias("__imp__sub_8338DC34"))) PPC_WEAK_FUNC(sub_8338DC34);
PPC_FUNC_IMPL(__imp__sub_8338DC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338DC38"))) PPC_WEAK_FUNC(sub_8338DC38);
PPC_FUNC_IMPL(__imp__sub_8338DC38) {
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
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,3272
	ctx.r4.s64 = ctx.r11.s64 + 3272;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// addi r30,r31,4324
	ctx.r30.s64 = ctx.r31.s64 + 4324;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-23008
	ctx.r5.s64 = ctx.r8.s64 + -23008;
	// addi r4,r7,-21872
	ctx.r4.s64 = ctx.r7.s64 + -21872;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,11320
	ctx.r10.s64 = ctx.r10.s64 + 11320;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338DC94;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// lis r9,-32109
	ctx.r9.s64 = -2104295424;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,11392
	ctx.r10.s64 = ctx.r10.s64 + 11392;
	// addi r9,r9,11488
	ctx.r9.s64 = ctx.r9.s64 + 11488;
	// stw r11,4324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4324, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,17232
	ctx.r3.s64 = ctx.r3.s64 + 17232;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338DCC4;
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

__attribute__((alias("__imp__sub_8338DCDC"))) PPC_WEAK_FUNC(sub_8338DCDC);
PPC_FUNC_IMPL(__imp__sub_8338DCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338DCE0"))) PPC_WEAK_FUNC(sub_8338DCE0);
PPC_FUNC_IMPL(__imp__sub_8338DCE0) {
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
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,3272
	ctx.r4.s64 = ctx.r11.s64 + 3272;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// addi r30,r31,4232
	ctx.r30.s64 = ctx.r31.s64 + 4232;
	// addi r6,r9,-21780
	ctx.r6.s64 = ctx.r9.s64 + -21780;
	// addi r5,r8,-22820
	ctx.r5.s64 = ctx.r8.s64 + -22820;
	// addi r4,r7,-21744
	ctx.r4.s64 = ctx.r7.s64 + -21744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,11704
	ctx.r10.s64 = ctx.r10.s64 + 11704;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338DD3C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// lis r9,-32109
	ctx.r9.s64 = -2104295424;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,11776
	ctx.r10.s64 = ctx.r10.s64 + 11776;
	// addi r9,r9,11872
	ctx.r9.s64 = ctx.r9.s64 + 11872;
	// stw r11,4232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4232, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,17320
	ctx.r3.s64 = ctx.r3.s64 + 17320;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338DD6C;
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

__attribute__((alias("__imp__sub_8338DD84"))) PPC_WEAK_FUNC(sub_8338DD84);
PPC_FUNC_IMPL(__imp__sub_8338DD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338DD88"))) PPC_WEAK_FUNC(sub_8338DD88);
PPC_FUNC_IMPL(__imp__sub_8338DD88) {
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
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// addi r30,r31,-5588
	ctx.r30.s64 = ctx.r31.s64 + -5588;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-21656
	ctx.r5.s64 = ctx.r8.s64 + -21656;
	// addi r4,r7,-21600
	ctx.r4.s64 = ctx.r7.s64 + -21600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338DDE4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// lis r9,-32109
	ctx.r9.s64 = -2104295424;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-56
	ctx.r10.s64 = ctx.r10.s64 + -56;
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// stw r11,-5588(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5588, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,17408
	ctx.r3.s64 = ctx.r3.s64 + 17408;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338DE14;
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

__attribute__((alias("__imp__sub_8338DE2C"))) PPC_WEAK_FUNC(sub_8338DE2C);
PPC_FUNC_IMPL(__imp__sub_8338DE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338DE30"))) PPC_WEAK_FUNC(sub_8338DE30);
PPC_FUNC_IMPL(__imp__sub_8338DE30) {
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
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// addi r30,r31,-5496
	ctx.r30.s64 = ctx.r31.s64 + -5496;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-21544
	ctx.r5.s64 = ctx.r8.s64 + -21544;
	// addi r4,r7,-21492
	ctx.r4.s64 = ctx.r7.s64 + -21492;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,760
	ctx.r10.s64 = ctx.r10.s64 + 760;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338DE8C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// lis r9,-32109
	ctx.r9.s64 = -2104295424;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,832
	ctx.r10.s64 = ctx.r10.s64 + 832;
	// addi r9,r9,928
	ctx.r9.s64 = ctx.r9.s64 + 928;
	// stw r11,-5496(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5496, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,17496
	ctx.r3.s64 = ctx.r3.s64 + 17496;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338DEBC;
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

__attribute__((alias("__imp__sub_8338DED4"))) PPC_WEAK_FUNC(sub_8338DED4);
PPC_FUNC_IMPL(__imp__sub_8338DED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338DED8"))) PPC_WEAK_FUNC(sub_8338DED8);
PPC_FUNC_IMPL(__imp__sub_8338DED8) {
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
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// addi r30,r31,-5404
	ctx.r30.s64 = ctx.r31.s64 + -5404;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-19896
	ctx.r5.s64 = ctx.r8.s64 + -19896;
	// addi r4,r7,-19816
	ctx.r4.s64 = ctx.r7.s64 + -19816;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,8368
	ctx.r10.s64 = ctx.r10.s64 + 8368;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338DF34;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// lis r9,-32108
	ctx.r9.s64 = -2104229888;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,8528
	ctx.r10.s64 = ctx.r10.s64 + 8528;
	// addi r9,r9,8624
	ctx.r9.s64 = ctx.r9.s64 + 8624;
	// stw r11,-5404(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5404, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,17728
	ctx.r3.s64 = ctx.r3.s64 + 17728;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338DF64;
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

__attribute__((alias("__imp__sub_8338DF7C"))) PPC_WEAK_FUNC(sub_8338DF7C);
PPC_FUNC_IMPL(__imp__sub_8338DF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338DF80"))) PPC_WEAK_FUNC(sub_8338DF80);
PPC_FUNC_IMPL(__imp__sub_8338DF80) {
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
	// lis r11,-32108
	ctx.r11.s64 = -2104229888;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// addi r4,r11,10016
	ctx.r4.s64 = ctx.r11.s64 + 10016;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// addi r30,r31,-5312
	ctx.r30.s64 = ctx.r31.s64 + -5312;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-19640
	ctx.r5.s64 = ctx.r8.s64 + -19640;
	// addi r4,r7,-19568
	ctx.r4.s64 = ctx.r7.s64 + -19568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,9272
	ctx.r10.s64 = ctx.r10.s64 + 9272;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338DFDC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// lis r9,-32108
	ctx.r9.s64 = -2104229888;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,9448
	ctx.r10.s64 = ctx.r10.s64 + 9448;
	// addi r9,r9,10008
	ctx.r9.s64 = ctx.r9.s64 + 10008;
	// stw r11,-5312(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5312, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,17816
	ctx.r3.s64 = ctx.r3.s64 + 17816;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338E00C;
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

__attribute__((alias("__imp__sub_8338E024"))) PPC_WEAK_FUNC(sub_8338E024);
PPC_FUNC_IMPL(__imp__sub_8338E024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338E028"))) PPC_WEAK_FUNC(sub_8338E028);
PPC_FUNC_IMPL(__imp__sub_8338E028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,17904
	ctx.r3.s64 = ctx.r11.s64 + 17904;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338E034"))) PPC_WEAK_FUNC(sub_8338E034);
PPC_FUNC_IMPL(__imp__sub_8338E034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338E038"))) PPC_WEAK_FUNC(sub_8338E038);
PPC_FUNC_IMPL(__imp__sub_8338E038) {
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
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-27896
	ctx.r4.s64 = ctx.r11.s64 + -27896;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// addi r30,r31,5888
	ctx.r30.s64 = ctx.r31.s64 + 5888;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-19408
	ctx.r5.s64 = ctx.r8.s64 + -19408;
	// addi r4,r7,-19340
	ctx.r4.s64 = ctx.r7.s64 + -19340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,12312
	ctx.r10.s64 = ctx.r10.s64 + 12312;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,403
	ctx.r8.s64 = 403;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338E094;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,12384
	ctx.r10.s64 = ctx.r10.s64 + 12384;
	// addi r9,r9,-27920
	ctx.r9.s64 = ctx.r9.s64 + -27920;
	// stw r11,5888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5888, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,17920
	ctx.r3.s64 = ctx.r3.s64 + 17920;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338E0C4;
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

__attribute__((alias("__imp__sub_8338E0DC"))) PPC_WEAK_FUNC(sub_8338E0DC);
PPC_FUNC_IMPL(__imp__sub_8338E0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338E0E0"))) PPC_WEAK_FUNC(sub_8338E0E0);
PPC_FUNC_IMPL(__imp__sub_8338E0E0) {
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
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-27288
	ctx.r4.s64 = ctx.r11.s64 + -27288;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// addi r30,r31,5796
	ctx.r30.s64 = ctx.r31.s64 + 5796;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-19408
	ctx.r5.s64 = ctx.r8.s64 + -19408;
	// addi r4,r7,-19296
	ctx.r4.s64 = ctx.r7.s64 + -19296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,12480
	ctx.r10.s64 = ctx.r10.s64 + 12480;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,403
	ctx.r8.s64 = 403;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338E13C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,12552
	ctx.r10.s64 = ctx.r10.s64 + 12552;
	// addi r9,r9,-27312
	ctx.r9.s64 = ctx.r9.s64 + -27312;
	// stw r11,5796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5796, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,18008
	ctx.r3.s64 = ctx.r3.s64 + 18008;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338E16C;
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

__attribute__((alias("__imp__sub_8338E184"))) PPC_WEAK_FUNC(sub_8338E184);
PPC_FUNC_IMPL(__imp__sub_8338E184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338E188"))) PPC_WEAK_FUNC(sub_8338E188);
PPC_FUNC_IMPL(__imp__sub_8338E188) {
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
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-26680
	ctx.r4.s64 = ctx.r11.s64 + -26680;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// addi r30,r31,5704
	ctx.r30.s64 = ctx.r31.s64 + 5704;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-19408
	ctx.r5.s64 = ctx.r8.s64 + -19408;
	// addi r4,r7,-19248
	ctx.r4.s64 = ctx.r7.s64 + -19248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,12648
	ctx.r10.s64 = ctx.r10.s64 + 12648;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,403
	ctx.r8.s64 = 403;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338E1E4;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,12720
	ctx.r10.s64 = ctx.r10.s64 + 12720;
	// addi r9,r9,-26704
	ctx.r9.s64 = ctx.r9.s64 + -26704;
	// stw r11,5704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5704, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,18096
	ctx.r3.s64 = ctx.r3.s64 + 18096;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338E214;
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

__attribute__((alias("__imp__sub_8338E22C"))) PPC_WEAK_FUNC(sub_8338E22C);
PPC_FUNC_IMPL(__imp__sub_8338E22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338E230"))) PPC_WEAK_FUNC(sub_8338E230);
PPC_FUNC_IMPL(__imp__sub_8338E230) {
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
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-31536
	ctx.r4.s64 = ctx.r11.s64 + -31536;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// addi r30,r31,5612
	ctx.r30.s64 = ctx.r31.s64 + 5612;
	// addi r6,r9,28260
	ctx.r6.s64 = ctx.r9.s64 + 28260;
	// addi r5,r8,-19408
	ctx.r5.s64 = ctx.r8.s64 + -19408;
	// addi r4,r7,-19204
	ctx.r4.s64 = ctx.r7.s64 + -19204;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,12816
	ctx.r10.s64 = ctx.r10.s64 + 12816;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,403
	ctx.r8.s64 = 403;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338E28C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,12888
	ctx.r10.s64 = ctx.r10.s64 + 12888;
	// addi r9,r9,-31568
	ctx.r9.s64 = ctx.r9.s64 + -31568;
	// stw r11,5612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5612, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,18184
	ctx.r3.s64 = ctx.r3.s64 + 18184;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338E2BC;
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

__attribute__((alias("__imp__sub_8338E2D4"))) PPC_WEAK_FUNC(sub_8338E2D4);
PPC_FUNC_IMPL(__imp__sub_8338E2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338E2D8"))) PPC_WEAK_FUNC(sub_8338E2D8);
PPC_FUNC_IMPL(__imp__sub_8338E2D8) {
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
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-30920
	ctx.r4.s64 = ctx.r11.s64 + -30920;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// addi r30,r31,5520
	ctx.r30.s64 = ctx.r31.s64 + 5520;
	// addi r6,r9,28260
	ctx.r6.s64 = ctx.r9.s64 + 28260;
	// addi r5,r8,-19408
	ctx.r5.s64 = ctx.r8.s64 + -19408;
	// addi r4,r7,-19152
	ctx.r4.s64 = ctx.r7.s64 + -19152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,12984
	ctx.r10.s64 = ctx.r10.s64 + 12984;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,403
	ctx.r8.s64 = 403;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338E334;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,13056
	ctx.r10.s64 = ctx.r10.s64 + 13056;
	// addi r9,r9,-30952
	ctx.r9.s64 = ctx.r9.s64 + -30952;
	// stw r11,5520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5520, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,18272
	ctx.r3.s64 = ctx.r3.s64 + 18272;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338E364;
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

__attribute__((alias("__imp__sub_8338E37C"))) PPC_WEAK_FUNC(sub_8338E37C);
PPC_FUNC_IMPL(__imp__sub_8338E37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338E380"))) PPC_WEAK_FUNC(sub_8338E380);
PPC_FUNC_IMPL(__imp__sub_8338E380) {
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
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-30304
	ctx.r4.s64 = ctx.r11.s64 + -30304;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// addi r30,r31,5428
	ctx.r30.s64 = ctx.r31.s64 + 5428;
	// addi r6,r9,28260
	ctx.r6.s64 = ctx.r9.s64 + 28260;
	// addi r5,r8,-19408
	ctx.r5.s64 = ctx.r8.s64 + -19408;
	// addi r4,r7,-19092
	ctx.r4.s64 = ctx.r7.s64 + -19092;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,13152
	ctx.r10.s64 = ctx.r10.s64 + 13152;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,403
	ctx.r8.s64 = 403;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338E3DC;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,13224
	ctx.r10.s64 = ctx.r10.s64 + 13224;
	// addi r9,r9,-30336
	ctx.r9.s64 = ctx.r9.s64 + -30336;
	// stw r11,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,18360
	ctx.r3.s64 = ctx.r3.s64 + 18360;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338E40C;
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

__attribute__((alias("__imp__sub_8338E424"))) PPC_WEAK_FUNC(sub_8338E424);
PPC_FUNC_IMPL(__imp__sub_8338E424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338E428"))) PPC_WEAK_FUNC(sub_8338E428);
PPC_FUNC_IMPL(__imp__sub_8338E428) {
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
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-29704
	ctx.r4.s64 = ctx.r11.s64 + -29704;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// addi r30,r31,5336
	ctx.r30.s64 = ctx.r31.s64 + 5336;
	// addi r6,r9,28752
	ctx.r6.s64 = ctx.r9.s64 + 28752;
	// addi r5,r8,-19408
	ctx.r5.s64 = ctx.r8.s64 + -19408;
	// addi r4,r7,-19036
	ctx.r4.s64 = ctx.r7.s64 + -19036;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,13320
	ctx.r10.s64 = ctx.r10.s64 + 13320;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338E484;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,13392
	ctx.r10.s64 = ctx.r10.s64 + 13392;
	// addi r9,r9,-29720
	ctx.r9.s64 = ctx.r9.s64 + -29720;
	// stw r11,5336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5336, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,18448
	ctx.r3.s64 = ctx.r3.s64 + 18448;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338E4B4;
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

__attribute__((alias("__imp__sub_8338E4CC"))) PPC_WEAK_FUNC(sub_8338E4CC);
PPC_FUNC_IMPL(__imp__sub_8338E4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338E4D0"))) PPC_WEAK_FUNC(sub_8338E4D0);
PPC_FUNC_IMPL(__imp__sub_8338E4D0) {
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
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-29104
	ctx.r4.s64 = ctx.r11.s64 + -29104;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// addi r30,r31,5244
	ctx.r30.s64 = ctx.r31.s64 + 5244;
	// addi r6,r9,28752
	ctx.r6.s64 = ctx.r9.s64 + 28752;
	// addi r5,r8,-19408
	ctx.r5.s64 = ctx.r8.s64 + -19408;
	// addi r4,r7,-18976
	ctx.r4.s64 = ctx.r7.s64 + -18976;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,13488
	ctx.r10.s64 = ctx.r10.s64 + 13488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338E52C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,13560
	ctx.r10.s64 = ctx.r10.s64 + 13560;
	// addi r9,r9,-29120
	ctx.r9.s64 = ctx.r9.s64 + -29120;
	// stw r11,5244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5244, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,18536
	ctx.r3.s64 = ctx.r3.s64 + 18536;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338E55C;
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

__attribute__((alias("__imp__sub_8338E574"))) PPC_WEAK_FUNC(sub_8338E574);
PPC_FUNC_IMPL(__imp__sub_8338E574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338E578"))) PPC_WEAK_FUNC(sub_8338E578);
PPC_FUNC_IMPL(__imp__sub_8338E578) {
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
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-28504
	ctx.r4.s64 = ctx.r11.s64 + -28504;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// addi r30,r31,5152
	ctx.r30.s64 = ctx.r31.s64 + 5152;
	// addi r6,r9,28752
	ctx.r6.s64 = ctx.r9.s64 + 28752;
	// addi r5,r8,-19408
	ctx.r5.s64 = ctx.r8.s64 + -19408;
	// addi r4,r7,-18908
	ctx.r4.s64 = ctx.r7.s64 + -18908;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,13656
	ctx.r10.s64 = ctx.r10.s64 + 13656;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338E5D4;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,13728
	ctx.r10.s64 = ctx.r10.s64 + 13728;
	// addi r9,r9,-28520
	ctx.r9.s64 = ctx.r9.s64 + -28520;
	// stw r11,5152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5152, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,18624
	ctx.r3.s64 = ctx.r3.s64 + 18624;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338E604;
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

__attribute__((alias("__imp__sub_8338E61C"))) PPC_WEAK_FUNC(sub_8338E61C);
PPC_FUNC_IMPL(__imp__sub_8338E61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338E620"))) PPC_WEAK_FUNC(sub_8338E620);
PPC_FUNC_IMPL(__imp__sub_8338E620) {
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
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// addi r30,r31,-5220
	ctx.r30.s64 = ctx.r31.s64 + -5220;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-18816
	ctx.r5.s64 = ctx.r8.s64 + -18816;
	// addi r4,r7,32468
	ctx.r4.s64 = ctx.r7.s64 + 32468;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,16376
	ctx.r10.s64 = ctx.r10.s64 + 16376;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338E67C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// lis r9,-32108
	ctx.r9.s64 = -2104229888;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,16544
	ctx.r10.s64 = ctx.r10.s64 + 16544;
	// addi r9,r9,16640
	ctx.r9.s64 = ctx.r9.s64 + 16640;
	// stw r11,-5220(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5220, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,18712
	ctx.r3.s64 = ctx.r3.s64 + 18712;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338E6AC;
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

__attribute__((alias("__imp__sub_8338E6C4"))) PPC_WEAK_FUNC(sub_8338E6C4);
PPC_FUNC_IMPL(__imp__sub_8338E6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338E6C8"))) PPC_WEAK_FUNC(sub_8338E6C8);
PPC_FUNC_IMPL(__imp__sub_8338E6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,18800
	ctx.r3.s64 = ctx.r11.s64 + 18800;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338E6D4"))) PPC_WEAK_FUNC(sub_8338E6D4);
PPC_FUNC_IMPL(__imp__sub_8338E6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8338E6D8"))) PPC_WEAK_FUNC(sub_8338E6D8);
PPC_FUNC_IMPL(__imp__sub_8338E6D8) {
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
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// addi r30,r31,-5120
	ctx.r30.s64 = ctx.r31.s64 + -5120;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-18764
	ctx.r5.s64 = ctx.r8.s64 + -18764;
	// addi r4,r7,-18708
	ctx.r4.s64 = ctx.r7.s64 + -18708;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,15432
	ctx.r10.s64 = ctx.r10.s64 + 15432;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338E734;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// lis r9,-32108
	ctx.r9.s64 = -2104229888;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,15592
	ctx.r10.s64 = ctx.r10.s64 + 15592;
	// addi r9,r9,19664
	ctx.r9.s64 = ctx.r9.s64 + 19664;
	// stw r11,-5120(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5120, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,18816
	ctx.r3.s64 = ctx.r3.s64 + 18816;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338E764;
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

__attribute__((alias("__imp__sub_8338E77C"))) PPC_WEAK_FUNC(sub_8338E77C);
PPC_FUNC_IMPL(__imp__sub_8338E77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

