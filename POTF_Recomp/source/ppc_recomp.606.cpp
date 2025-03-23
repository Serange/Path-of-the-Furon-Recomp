#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8338507C"))) PPC_WEAK_FUNC(sub_8338507C);
PPC_FUNC_IMPL(__imp__sub_8338507C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83385080"))) PPC_WEAK_FUNC(sub_83385080);
PPC_FUNC_IMPL(__imp__sub_83385080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-2840
	ctx.r3.s64 = ctx.r11.s64 + -2840;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338508C"))) PPC_WEAK_FUNC(sub_8338508C);
PPC_FUNC_IMPL(__imp__sub_8338508C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83385090"))) PPC_WEAK_FUNC(sub_83385090);
PPC_FUNC_IMPL(__imp__sub_83385090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-2824
	ctx.r3.s64 = ctx.r11.s64 + -2824;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338509C"))) PPC_WEAK_FUNC(sub_8338509C);
PPC_FUNC_IMPL(__imp__sub_8338509C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833850A0"))) PPC_WEAK_FUNC(sub_833850A0);
PPC_FUNC_IMPL(__imp__sub_833850A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-2808
	ctx.r3.s64 = ctx.r11.s64 + -2808;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833850AC"))) PPC_WEAK_FUNC(sub_833850AC);
PPC_FUNC_IMPL(__imp__sub_833850AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833850B0"))) PPC_WEAK_FUNC(sub_833850B0);
PPC_FUNC_IMPL(__imp__sub_833850B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-2792
	ctx.r3.s64 = ctx.r11.s64 + -2792;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833850BC"))) PPC_WEAK_FUNC(sub_833850BC);
PPC_FUNC_IMPL(__imp__sub_833850BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833850C0"))) PPC_WEAK_FUNC(sub_833850C0);
PPC_FUNC_IMPL(__imp__sub_833850C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-2776
	ctx.r3.s64 = ctx.r11.s64 + -2776;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833850CC"))) PPC_WEAK_FUNC(sub_833850CC);
PPC_FUNC_IMPL(__imp__sub_833850CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833850D0"))) PPC_WEAK_FUNC(sub_833850D0);
PPC_FUNC_IMPL(__imp__sub_833850D0) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x822959a8
	ctx.lr = 0x833850EC;
	sub_822959A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83385164
	if (ctx.cr6.eq) goto loc_83385164;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r5,r7,1
	ctx.r5.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// lfd f0,-18344(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18344);
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r8,r9,-15276
	ctx.r8.s64 = ctx.r9.s64 + -15276;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x82832990
	ctx.lr = 0x83385148;
	sub_82832990(ctx, base);
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// stw r31,-9688(r3)
	PPC_STORE_U32(ctx.r3.u32 + -9688, ctx.r31.u32);
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
loc_83385164:
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// stw r11,-9688(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9688, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83385180"))) PPC_WEAK_FUNC(sub_83385180);
PPC_FUNC_IMPL(__imp__sub_83385180) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x822959a8
	ctx.lr = 0x8338519C;
	sub_822959A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83385214
	if (ctx.cr6.eq) goto loc_83385214;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r5,r7,1
	ctx.r5.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// lfd f0,-18344(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18344);
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r8,r9,-15196
	ctx.r8.s64 = ctx.r9.s64 + -15196;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x82832990
	ctx.lr = 0x833851F8;
	sub_82832990(ctx, base);
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// stw r31,-9684(r3)
	PPC_STORE_U32(ctx.r3.u32 + -9684, ctx.r31.u32);
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
loc_83385214:
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// stw r11,-9684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9684, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83385230"))) PPC_WEAK_FUNC(sub_83385230);
PPC_FUNC_IMPL(__imp__sub_83385230) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x822959a8
	ctx.lr = 0x8338524C;
	sub_822959A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x833852c4
	if (ctx.cr6.eq) goto loc_833852C4;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r5,r7,1
	ctx.r5.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// lfd f0,-18344(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18344);
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r8,r9,-15116
	ctx.r8.s64 = ctx.r9.s64 + -15116;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x82832990
	ctx.lr = 0x833852A8;
	sub_82832990(ctx, base);
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// stw r31,-9680(r3)
	PPC_STORE_U32(ctx.r3.u32 + -9680, ctx.r31.u32);
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
loc_833852C4:
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// stw r11,-9680(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9680, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_833852E0"))) PPC_WEAK_FUNC(sub_833852E0);
PPC_FUNC_IMPL(__imp__sub_833852E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-2760
	ctx.r3.s64 = ctx.r11.s64 + -2760;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833852EC"))) PPC_WEAK_FUNC(sub_833852EC);
PPC_FUNC_IMPL(__imp__sub_833852EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833852F0"))) PPC_WEAK_FUNC(sub_833852F0);
PPC_FUNC_IMPL(__imp__sub_833852F0) {
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
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r30,r31,-9664
	ctx.r30.s64 = ctx.r31.s64 + -9664;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-9428
	ctx.r5.s64 = ctx.r8.s64 + -9428;
	// addi r4,r7,-9384
	ctx.r4.s64 = ctx.r7.s64 + -9384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,1416
	ctx.r10.s64 = ctx.r10.s64 + 1416;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338534C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,1584
	ctx.r10.s64 = ctx.r10.s64 + 1584;
	// addi r9,r9,1680
	ctx.r9.s64 = ctx.r9.s64 + 1680;
	// stw r11,-9664(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9664, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-2680
	ctx.r3.s64 = ctx.r3.s64 + -2680;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338537C;
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

__attribute__((alias("__imp__sub_83385394"))) PPC_WEAK_FUNC(sub_83385394);
PPC_FUNC_IMPL(__imp__sub_83385394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83385398"))) PPC_WEAK_FUNC(sub_83385398);
PPC_FUNC_IMPL(__imp__sub_83385398) {
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
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r30,r31,-9572
	ctx.r30.s64 = ctx.r31.s64 + -9572;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-9336
	ctx.r5.s64 = ctx.r8.s64 + -9336;
	// addi r4,r7,-9292
	ctx.r4.s64 = ctx.r7.s64 + -9292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,2392
	ctx.r10.s64 = ctx.r10.s64 + 2392;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x833853F4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,2464
	ctx.r10.s64 = ctx.r10.s64 + 2464;
	// addi r9,r9,2560
	ctx.r9.s64 = ctx.r9.s64 + 2560;
	// stw r11,-9572(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9572, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-2592
	ctx.r3.s64 = ctx.r3.s64 + -2592;
	// bl 0x82cb0ae8
	ctx.lr = 0x83385424;
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

__attribute__((alias("__imp__sub_8338543C"))) PPC_WEAK_FUNC(sub_8338543C);
PPC_FUNC_IMPL(__imp__sub_8338543C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83385440"))) PPC_WEAK_FUNC(sub_83385440);
PPC_FUNC_IMPL(__imp__sub_83385440) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// addi r4,r11,13008
	ctx.r4.s64 = ctx.r11.s64 + 13008;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r30,r31,-9480
	ctx.r30.s64 = ctx.r31.s64 + -9480;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-8912
	ctx.r5.s64 = ctx.r8.s64 + -8912;
	// addi r4,r7,-8840
	ctx.r4.s64 = ctx.r7.s64 + -8840;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,12720
	ctx.r10.s64 = ctx.r10.s64 + 12720;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x8338549C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,12896
	ctx.r10.s64 = ctx.r10.s64 + 12896;
	// addi r9,r9,12992
	ctx.r9.s64 = ctx.r9.s64 + 12992;
	// stw r11,-9480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9480, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-2504
	ctx.r3.s64 = ctx.r3.s64 + -2504;
	// bl 0x82cb0ae8
	ctx.lr = 0x833854CC;
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

__attribute__((alias("__imp__sub_833854E4"))) PPC_WEAK_FUNC(sub_833854E4);
PPC_FUNC_IMPL(__imp__sub_833854E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833854E8"))) PPC_WEAK_FUNC(sub_833854E8);
PPC_FUNC_IMPL(__imp__sub_833854E8) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// addi r4,r11,12456
	ctx.r4.s64 = ctx.r11.s64 + 12456;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r30,r31,-9388
	ctx.r30.s64 = ctx.r31.s64 + -9388;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-8768
	ctx.r5.s64 = ctx.r8.s64 + -8768;
	// addi r4,r7,-8696
	ctx.r4.s64 = ctx.r7.s64 + -8696;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,12168
	ctx.r10.s64 = ctx.r10.s64 + 12168;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83385544;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,12328
	ctx.r10.s64 = ctx.r10.s64 + 12328;
	// addi r9,r9,12448
	ctx.r9.s64 = ctx.r9.s64 + 12448;
	// stw r11,-9388(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9388, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-2416
	ctx.r3.s64 = ctx.r3.s64 + -2416;
	// bl 0x82cb0ae8
	ctx.lr = 0x83385574;
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

__attribute__((alias("__imp__sub_8338558C"))) PPC_WEAK_FUNC(sub_8338558C);
PPC_FUNC_IMPL(__imp__sub_8338558C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83385590"))) PPC_WEAK_FUNC(sub_83385590);
PPC_FUNC_IMPL(__imp__sub_83385590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-2328
	ctx.r3.s64 = ctx.r11.s64 + -2328;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8338559C"))) PPC_WEAK_FUNC(sub_8338559C);
PPC_FUNC_IMPL(__imp__sub_8338559C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833855A0"))) PPC_WEAK_FUNC(sub_833855A0);
PPC_FUNC_IMPL(__imp__sub_833855A0) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,20832
	ctx.r4.s64 = ctx.r11.s64 + 20832;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r30,r31,-920
	ctx.r30.s64 = ctx.r31.s64 + -920;
	// addi r6,r9,-8624
	ctx.r6.s64 = ctx.r9.s64 + -8624;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,-8544
	ctx.r4.s64 = ctx.r7.s64 + -8544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,20512
	ctx.r10.s64 = ctx.r10.s64 + 20512;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833855FC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,20584
	ctx.r10.s64 = ctx.r10.s64 + 20584;
	// addi r9,r9,20704
	ctx.r9.s64 = ctx.r9.s64 + 20704;
	// stw r11,-920(r31)
	PPC_STORE_U32(ctx.r31.u32 + -920, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-2312
	ctx.r3.s64 = ctx.r3.s64 + -2312;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338562C;
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

__attribute__((alias("__imp__sub_83385644"))) PPC_WEAK_FUNC(sub_83385644);
PPC_FUNC_IMPL(__imp__sub_83385644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83385648"))) PPC_WEAK_FUNC(sub_83385648);
PPC_FUNC_IMPL(__imp__sub_83385648) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,21664
	ctx.r4.s64 = ctx.r11.s64 + 21664;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r30,r31,-1012
	ctx.r30.s64 = ctx.r31.s64 + -1012;
	// addi r6,r9,-8380
	ctx.r6.s64 = ctx.r9.s64 + -8380;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,-8344
	ctx.r4.s64 = ctx.r7.s64 + -8344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,21280
	ctx.r10.s64 = ctx.r10.s64 + 21280;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833856A4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,21352
	ctx.r10.s64 = ctx.r10.s64 + 21352;
	// addi r9,r9,21472
	ctx.r9.s64 = ctx.r9.s64 + 21472;
	// stw r11,-1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1012, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-2224
	ctx.r3.s64 = ctx.r3.s64 + -2224;
	// bl 0x82cb0ae8
	ctx.lr = 0x833856D4;
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

__attribute__((alias("__imp__sub_833856EC"))) PPC_WEAK_FUNC(sub_833856EC);
PPC_FUNC_IMPL(__imp__sub_833856EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833856F0"))) PPC_WEAK_FUNC(sub_833856F0);
PPC_FUNC_IMPL(__imp__sub_833856F0) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,22496
	ctx.r4.s64 = ctx.r11.s64 + 22496;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r30,r31,-1104
	ctx.r30.s64 = ctx.r31.s64 + -1104;
	// addi r6,r9,-8168
	ctx.r6.s64 = ctx.r9.s64 + -8168;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,-8120
	ctx.r4.s64 = ctx.r7.s64 + -8120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,22112
	ctx.r10.s64 = ctx.r10.s64 + 22112;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338574C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,22184
	ctx.r10.s64 = ctx.r10.s64 + 22184;
	// addi r9,r9,22304
	ctx.r9.s64 = ctx.r9.s64 + 22304;
	// stw r11,-1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1104, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-2136
	ctx.r3.s64 = ctx.r3.s64 + -2136;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338577C;
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

__attribute__((alias("__imp__sub_83385794"))) PPC_WEAK_FUNC(sub_83385794);
PPC_FUNC_IMPL(__imp__sub_83385794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83385798"))) PPC_WEAK_FUNC(sub_83385798);
PPC_FUNC_IMPL(__imp__sub_83385798) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,23328
	ctx.r4.s64 = ctx.r11.s64 + 23328;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r30,r31,-1196
	ctx.r30.s64 = ctx.r31.s64 + -1196;
	// addi r6,r9,-7932
	ctx.r6.s64 = ctx.r9.s64 + -7932;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,-7880
	ctx.r4.s64 = ctx.r7.s64 + -7880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,22944
	ctx.r10.s64 = ctx.r10.s64 + 22944;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833857F4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,23016
	ctx.r10.s64 = ctx.r10.s64 + 23016;
	// addi r9,r9,23136
	ctx.r9.s64 = ctx.r9.s64 + 23136;
	// stw r11,-1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1196, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-2048
	ctx.r3.s64 = ctx.r3.s64 + -2048;
	// bl 0x82cb0ae8
	ctx.lr = 0x83385824;
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

__attribute__((alias("__imp__sub_8338583C"))) PPC_WEAK_FUNC(sub_8338583C);
PPC_FUNC_IMPL(__imp__sub_8338583C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83385840"))) PPC_WEAK_FUNC(sub_83385840);
PPC_FUNC_IMPL(__imp__sub_83385840) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,24160
	ctx.r4.s64 = ctx.r11.s64 + 24160;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r30,r31,-1288
	ctx.r30.s64 = ctx.r31.s64 + -1288;
	// addi r6,r9,-7688
	ctx.r6.s64 = ctx.r9.s64 + -7688;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,-7648
	ctx.r4.s64 = ctx.r7.s64 + -7648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,23776
	ctx.r10.s64 = ctx.r10.s64 + 23776;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338589C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,23848
	ctx.r10.s64 = ctx.r10.s64 + 23848;
	// addi r9,r9,23968
	ctx.r9.s64 = ctx.r9.s64 + 23968;
	// stw r11,-1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1288, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-1960
	ctx.r3.s64 = ctx.r3.s64 + -1960;
	// bl 0x82cb0ae8
	ctx.lr = 0x833858CC;
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

__attribute__((alias("__imp__sub_833858E4"))) PPC_WEAK_FUNC(sub_833858E4);
PPC_FUNC_IMPL(__imp__sub_833858E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833858E8"))) PPC_WEAK_FUNC(sub_833858E8);
PPC_FUNC_IMPL(__imp__sub_833858E8) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,24904
	ctx.r4.s64 = ctx.r11.s64 + 24904;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r30,r31,-1380
	ctx.r30.s64 = ctx.r31.s64 + -1380;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7476
	ctx.r5.s64 = ctx.r8.s64 + -7476;
	// addi r4,r7,-7424
	ctx.r4.s64 = ctx.r7.s64 + -7424;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,24608
	ctx.r10.s64 = ctx.r10.s64 + 24608;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83385944;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,24680
	ctx.r10.s64 = ctx.r10.s64 + 24680;
	// addi r9,r9,24776
	ctx.r9.s64 = ctx.r9.s64 + 24776;
	// stw r11,-1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1380, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-1872
	ctx.r3.s64 = ctx.r3.s64 + -1872;
	// bl 0x82cb0ae8
	ctx.lr = 0x83385974;
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

__attribute__((alias("__imp__sub_8338598C"))) PPC_WEAK_FUNC(sub_8338598C);
PPC_FUNC_IMPL(__imp__sub_8338598C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83385990"))) PPC_WEAK_FUNC(sub_83385990);
PPC_FUNC_IMPL(__imp__sub_83385990) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,25736
	ctx.r4.s64 = ctx.r11.s64 + 25736;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r30,r31,-1472
	ctx.r30.s64 = ctx.r31.s64 + -1472;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-7248
	ctx.r4.s64 = ctx.r7.s64 + -7248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,25352
	ctx.r10.s64 = ctx.r10.s64 + 25352;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833859EC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,25424
	ctx.r10.s64 = ctx.r10.s64 + 25424;
	// addi r9,r9,25544
	ctx.r9.s64 = ctx.r9.s64 + 25544;
	// stw r11,-1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1472, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-1784
	ctx.r3.s64 = ctx.r3.s64 + -1784;
	// bl 0x82cb0ae8
	ctx.lr = 0x83385A1C;
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

__attribute__((alias("__imp__sub_83385A34"))) PPC_WEAK_FUNC(sub_83385A34);
PPC_FUNC_IMPL(__imp__sub_83385A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83385A38"))) PPC_WEAK_FUNC(sub_83385A38);
PPC_FUNC_IMPL(__imp__sub_83385A38) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,26624
	ctx.r4.s64 = ctx.r11.s64 + 26624;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r30,r31,-1564
	ctx.r30.s64 = ctx.r31.s64 + -1564;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-7072
	ctx.r4.s64 = ctx.r7.s64 + -7072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,26192
	ctx.r10.s64 = ctx.r10.s64 + 26192;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83385A94;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,26264
	ctx.r10.s64 = ctx.r10.s64 + 26264;
	// addi r9,r9,26384
	ctx.r9.s64 = ctx.r9.s64 + 26384;
	// stw r11,-1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1564, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-1696
	ctx.r3.s64 = ctx.r3.s64 + -1696;
	// bl 0x82cb0ae8
	ctx.lr = 0x83385AC4;
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

__attribute__((alias("__imp__sub_83385ADC"))) PPC_WEAK_FUNC(sub_83385ADC);
PPC_FUNC_IMPL(__imp__sub_83385ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83385AE0"))) PPC_WEAK_FUNC(sub_83385AE0);
PPC_FUNC_IMPL(__imp__sub_83385AE0) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,27512
	ctx.r4.s64 = ctx.r11.s64 + 27512;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r30,r31,-1656
	ctx.r30.s64 = ctx.r31.s64 + -1656;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-6888
	ctx.r4.s64 = ctx.r7.s64 + -6888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,27080
	ctx.r10.s64 = ctx.r10.s64 + 27080;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83385B3C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,27152
	ctx.r10.s64 = ctx.r10.s64 + 27152;
	// addi r9,r9,27272
	ctx.r9.s64 = ctx.r9.s64 + 27272;
	// stw r11,-1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1656, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-1608
	ctx.r3.s64 = ctx.r3.s64 + -1608;
	// bl 0x82cb0ae8
	ctx.lr = 0x83385B6C;
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

__attribute__((alias("__imp__sub_83385B84"))) PPC_WEAK_FUNC(sub_83385B84);
PPC_FUNC_IMPL(__imp__sub_83385B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83385B88"))) PPC_WEAK_FUNC(sub_83385B88);
PPC_FUNC_IMPL(__imp__sub_83385B88) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,28400
	ctx.r4.s64 = ctx.r11.s64 + 28400;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r30,r31,-1748
	ctx.r30.s64 = ctx.r31.s64 + -1748;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-6688
	ctx.r4.s64 = ctx.r7.s64 + -6688;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,27968
	ctx.r10.s64 = ctx.r10.s64 + 27968;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83385BE4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,28040
	ctx.r10.s64 = ctx.r10.s64 + 28040;
	// addi r9,r9,28160
	ctx.r9.s64 = ctx.r9.s64 + 28160;
	// stw r11,-1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1748, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-1520
	ctx.r3.s64 = ctx.r3.s64 + -1520;
	// bl 0x82cb0ae8
	ctx.lr = 0x83385C14;
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

__attribute__((alias("__imp__sub_83385C2C"))) PPC_WEAK_FUNC(sub_83385C2C);
PPC_FUNC_IMPL(__imp__sub_83385C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83385C30"))) PPC_WEAK_FUNC(sub_83385C30);
PPC_FUNC_IMPL(__imp__sub_83385C30) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,29288
	ctx.r4.s64 = ctx.r11.s64 + 29288;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r30,r31,-1840
	ctx.r30.s64 = ctx.r31.s64 + -1840;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-6488
	ctx.r4.s64 = ctx.r7.s64 + -6488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,28856
	ctx.r10.s64 = ctx.r10.s64 + 28856;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83385C8C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,28928
	ctx.r10.s64 = ctx.r10.s64 + 28928;
	// addi r9,r9,29048
	ctx.r9.s64 = ctx.r9.s64 + 29048;
	// stw r11,-1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1840, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-1432
	ctx.r3.s64 = ctx.r3.s64 + -1432;
	// bl 0x82cb0ae8
	ctx.lr = 0x83385CBC;
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

__attribute__((alias("__imp__sub_83385CD4"))) PPC_WEAK_FUNC(sub_83385CD4);
PPC_FUNC_IMPL(__imp__sub_83385CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83385CD8"))) PPC_WEAK_FUNC(sub_83385CD8);
PPC_FUNC_IMPL(__imp__sub_83385CD8) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,30104
	ctx.r4.s64 = ctx.r11.s64 + 30104;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r30,r31,-1932
	ctx.r30.s64 = ctx.r31.s64 + -1932;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-6308
	ctx.r5.s64 = ctx.r8.s64 + -6308;
	// addi r4,r7,-6264
	ctx.r4.s64 = ctx.r7.s64 + -6264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,29744
	ctx.r10.s64 = ctx.r10.s64 + 29744;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83385D34;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,29816
	ctx.r10.s64 = ctx.r10.s64 + 29816;
	// addi r9,r9,29912
	ctx.r9.s64 = ctx.r9.s64 + 29912;
	// stw r11,-1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1932, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-1344
	ctx.r3.s64 = ctx.r3.s64 + -1344;
	// bl 0x82cb0ae8
	ctx.lr = 0x83385D64;
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

__attribute__((alias("__imp__sub_83385D7C"))) PPC_WEAK_FUNC(sub_83385D7C);
PPC_FUNC_IMPL(__imp__sub_83385D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83385D80"))) PPC_WEAK_FUNC(sub_83385D80);
PPC_FUNC_IMPL(__imp__sub_83385D80) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,30920
	ctx.r4.s64 = ctx.r11.s64 + 30920;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r30,r31,-2024
	ctx.r30.s64 = ctx.r31.s64 + -2024;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-6120
	ctx.r4.s64 = ctx.r7.s64 + -6120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,30536
	ctx.r10.s64 = ctx.r10.s64 + 30536;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83385DDC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,30608
	ctx.r10.s64 = ctx.r10.s64 + 30608;
	// addi r9,r9,30728
	ctx.r9.s64 = ctx.r9.s64 + 30728;
	// stw r11,-2024(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2024, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-1256
	ctx.r3.s64 = ctx.r3.s64 + -1256;
	// bl 0x82cb0ae8
	ctx.lr = 0x83385E0C;
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

__attribute__((alias("__imp__sub_83385E24"))) PPC_WEAK_FUNC(sub_83385E24);
PPC_FUNC_IMPL(__imp__sub_83385E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83385E28"))) PPC_WEAK_FUNC(sub_83385E28);
PPC_FUNC_IMPL(__imp__sub_83385E28) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,31808
	ctx.r4.s64 = ctx.r11.s64 + 31808;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r30,r31,-2116
	ctx.r30.s64 = ctx.r31.s64 + -2116;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-5944
	ctx.r4.s64 = ctx.r7.s64 + -5944;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,31376
	ctx.r10.s64 = ctx.r10.s64 + 31376;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83385E84;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,31448
	ctx.r10.s64 = ctx.r10.s64 + 31448;
	// addi r9,r9,31568
	ctx.r9.s64 = ctx.r9.s64 + 31568;
	// stw r11,-2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2116, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-1168
	ctx.r3.s64 = ctx.r3.s64 + -1168;
	// bl 0x82cb0ae8
	ctx.lr = 0x83385EB4;
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

__attribute__((alias("__imp__sub_83385ECC"))) PPC_WEAK_FUNC(sub_83385ECC);
PPC_FUNC_IMPL(__imp__sub_83385ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83385ED0"))) PPC_WEAK_FUNC(sub_83385ED0);
PPC_FUNC_IMPL(__imp__sub_83385ED0) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,32696
	ctx.r4.s64 = ctx.r11.s64 + 32696;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r30,r31,-2208
	ctx.r30.s64 = ctx.r31.s64 + -2208;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-5752
	ctx.r4.s64 = ctx.r7.s64 + -5752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,32264
	ctx.r10.s64 = ctx.r10.s64 + 32264;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83385F2C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,32336
	ctx.r10.s64 = ctx.r10.s64 + 32336;
	// addi r9,r9,32456
	ctx.r9.s64 = ctx.r9.s64 + 32456;
	// stw r11,-2208(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2208, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-1080
	ctx.r3.s64 = ctx.r3.s64 + -1080;
	// bl 0x82cb0ae8
	ctx.lr = 0x83385F5C;
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

__attribute__((alias("__imp__sub_83385F74"))) PPC_WEAK_FUNC(sub_83385F74);
PPC_FUNC_IMPL(__imp__sub_83385F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83385F78"))) PPC_WEAK_FUNC(sub_83385F78);
PPC_FUNC_IMPL(__imp__sub_83385F78) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-31952
	ctx.r4.s64 = ctx.r11.s64 + -31952;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-2300
	ctx.r30.s64 = ctx.r31.s64 + -2300;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-5552
	ctx.r4.s64 = ctx.r7.s64 + -5552;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-32384
	ctx.r10.s64 = ctx.r10.s64 + -32384;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83385FD4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-32312
	ctx.r10.s64 = ctx.r10.s64 + -32312;
	// addi r9,r9,-32192
	ctx.r9.s64 = ctx.r9.s64 + -32192;
	// stw r11,-2300(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2300, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-992
	ctx.r3.s64 = ctx.r3.s64 + -992;
	// bl 0x82cb0ae8
	ctx.lr = 0x83386004;
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

__attribute__((alias("__imp__sub_8338601C"))) PPC_WEAK_FUNC(sub_8338601C);
PPC_FUNC_IMPL(__imp__sub_8338601C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83386020"))) PPC_WEAK_FUNC(sub_83386020);
PPC_FUNC_IMPL(__imp__sub_83386020) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-31064
	ctx.r4.s64 = ctx.r11.s64 + -31064;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-2392
	ctx.r30.s64 = ctx.r31.s64 + -2392;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-5352
	ctx.r4.s64 = ctx.r7.s64 + -5352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-31496
	ctx.r10.s64 = ctx.r10.s64 + -31496;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338607C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-31424
	ctx.r10.s64 = ctx.r10.s64 + -31424;
	// addi r9,r9,-31304
	ctx.r9.s64 = ctx.r9.s64 + -31304;
	// stw r11,-2392(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2392, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-904
	ctx.r3.s64 = ctx.r3.s64 + -904;
	// bl 0x82cb0ae8
	ctx.lr = 0x833860AC;
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

__attribute__((alias("__imp__sub_833860C4"))) PPC_WEAK_FUNC(sub_833860C4);
PPC_FUNC_IMPL(__imp__sub_833860C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833860C8"))) PPC_WEAK_FUNC(sub_833860C8);
PPC_FUNC_IMPL(__imp__sub_833860C8) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-30248
	ctx.r4.s64 = ctx.r11.s64 + -30248;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-2484
	ctx.r30.s64 = ctx.r31.s64 + -2484;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-6308
	ctx.r5.s64 = ctx.r8.s64 + -6308;
	// addi r4,r7,-5168
	ctx.r4.s64 = ctx.r7.s64 + -5168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-30608
	ctx.r10.s64 = ctx.r10.s64 + -30608;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83386124;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-30536
	ctx.r10.s64 = ctx.r10.s64 + -30536;
	// addi r9,r9,-30440
	ctx.r9.s64 = ctx.r9.s64 + -30440;
	// stw r11,-2484(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2484, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-816
	ctx.r3.s64 = ctx.r3.s64 + -816;
	// bl 0x82cb0ae8
	ctx.lr = 0x83386154;
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

__attribute__((alias("__imp__sub_8338616C"))) PPC_WEAK_FUNC(sub_8338616C);
PPC_FUNC_IMPL(__imp__sub_8338616C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83386170"))) PPC_WEAK_FUNC(sub_83386170);
PPC_FUNC_IMPL(__imp__sub_83386170) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-29616
	ctx.r4.s64 = ctx.r11.s64 + -29616;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-2576
	ctx.r30.s64 = ctx.r31.s64 + -2576;
	// addi r6,r9,-8624
	ctx.r6.s64 = ctx.r9.s64 + -8624;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,-5024
	ctx.r4.s64 = ctx.r7.s64 + -5024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-29816
	ctx.r10.s64 = ctx.r10.s64 + -29816;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833861CC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-29744
	ctx.r10.s64 = ctx.r10.s64 + -29744;
	// addi r9,r9,-29624
	ctx.r9.s64 = ctx.r9.s64 + -29624;
	// stw r11,-2576(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2576, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-728
	ctx.r3.s64 = ctx.r3.s64 + -728;
	// bl 0x82cb0ae8
	ctx.lr = 0x833861FC;
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

__attribute__((alias("__imp__sub_83386214"))) PPC_WEAK_FUNC(sub_83386214);
PPC_FUNC_IMPL(__imp__sub_83386214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83386218"))) PPC_WEAK_FUNC(sub_83386218);
PPC_FUNC_IMPL(__imp__sub_83386218) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-28968
	ctx.r4.s64 = ctx.r11.s64 + -28968;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-2668
	ctx.r30.s64 = ctx.r31.s64 + -2668;
	// addi r6,r9,-8380
	ctx.r6.s64 = ctx.r9.s64 + -8380;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,-4848
	ctx.r4.s64 = ctx.r7.s64 + -4848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-29168
	ctx.r10.s64 = ctx.r10.s64 + -29168;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83386274;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-29096
	ctx.r10.s64 = ctx.r10.s64 + -29096;
	// addi r9,r9,-28976
	ctx.r9.s64 = ctx.r9.s64 + -28976;
	// stw r11,-2668(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2668, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-640
	ctx.r3.s64 = ctx.r3.s64 + -640;
	// bl 0x82cb0ae8
	ctx.lr = 0x833862A4;
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

__attribute__((alias("__imp__sub_833862BC"))) PPC_WEAK_FUNC(sub_833862BC);
PPC_FUNC_IMPL(__imp__sub_833862BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833862C0"))) PPC_WEAK_FUNC(sub_833862C0);
PPC_FUNC_IMPL(__imp__sub_833862C0) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-28320
	ctx.r4.s64 = ctx.r11.s64 + -28320;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-2760
	ctx.r30.s64 = ctx.r31.s64 + -2760;
	// addi r6,r9,-8168
	ctx.r6.s64 = ctx.r9.s64 + -8168;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,-4656
	ctx.r4.s64 = ctx.r7.s64 + -4656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-28520
	ctx.r10.s64 = ctx.r10.s64 + -28520;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338631C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-28448
	ctx.r10.s64 = ctx.r10.s64 + -28448;
	// addi r9,r9,-28328
	ctx.r9.s64 = ctx.r9.s64 + -28328;
	// stw r11,-2760(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2760, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-552
	ctx.r3.s64 = ctx.r3.s64 + -552;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338634C;
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

__attribute__((alias("__imp__sub_83386364"))) PPC_WEAK_FUNC(sub_83386364);
PPC_FUNC_IMPL(__imp__sub_83386364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83386368"))) PPC_WEAK_FUNC(sub_83386368);
PPC_FUNC_IMPL(__imp__sub_83386368) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-27672
	ctx.r4.s64 = ctx.r11.s64 + -27672;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-2852
	ctx.r30.s64 = ctx.r31.s64 + -2852;
	// addi r6,r9,-7932
	ctx.r6.s64 = ctx.r9.s64 + -7932;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,-4456
	ctx.r4.s64 = ctx.r7.s64 + -4456;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-27872
	ctx.r10.s64 = ctx.r10.s64 + -27872;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833863C4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-27800
	ctx.r10.s64 = ctx.r10.s64 + -27800;
	// addi r9,r9,-27680
	ctx.r9.s64 = ctx.r9.s64 + -27680;
	// stw r11,-2852(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2852, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-464
	ctx.r3.s64 = ctx.r3.s64 + -464;
	// bl 0x82cb0ae8
	ctx.lr = 0x833863F4;
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

__attribute__((alias("__imp__sub_8338640C"))) PPC_WEAK_FUNC(sub_8338640C);
PPC_FUNC_IMPL(__imp__sub_8338640C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83386410"))) PPC_WEAK_FUNC(sub_83386410);
PPC_FUNC_IMPL(__imp__sub_83386410) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-27024
	ctx.r4.s64 = ctx.r11.s64 + -27024;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-2944
	ctx.r30.s64 = ctx.r31.s64 + -2944;
	// addi r6,r9,-7688
	ctx.r6.s64 = ctx.r9.s64 + -7688;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,-4248
	ctx.r4.s64 = ctx.r7.s64 + -4248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-27224
	ctx.r10.s64 = ctx.r10.s64 + -27224;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338646C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-27152
	ctx.r10.s64 = ctx.r10.s64 + -27152;
	// addi r9,r9,-27032
	ctx.r9.s64 = ctx.r9.s64 + -27032;
	// stw r11,-2944(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2944, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-376
	ctx.r3.s64 = ctx.r3.s64 + -376;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338649C;
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

__attribute__((alias("__imp__sub_833864B4"))) PPC_WEAK_FUNC(sub_833864B4);
PPC_FUNC_IMPL(__imp__sub_833864B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833864B8"))) PPC_WEAK_FUNC(sub_833864B8);
PPC_FUNC_IMPL(__imp__sub_833864B8) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-26400
	ctx.r4.s64 = ctx.r11.s64 + -26400;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-3036
	ctx.r30.s64 = ctx.r31.s64 + -3036;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7476
	ctx.r5.s64 = ctx.r8.s64 + -7476;
	// addi r4,r7,-4064
	ctx.r4.s64 = ctx.r7.s64 + -4064;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-26576
	ctx.r10.s64 = ctx.r10.s64 + -26576;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83386514;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-26504
	ctx.r10.s64 = ctx.r10.s64 + -26504;
	// addi r9,r9,-26408
	ctx.r9.s64 = ctx.r9.s64 + -26408;
	// stw r11,-3036(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3036, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-288
	ctx.r3.s64 = ctx.r3.s64 + -288;
	// bl 0x82cb0ae8
	ctx.lr = 0x83386544;
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

__attribute__((alias("__imp__sub_8338655C"))) PPC_WEAK_FUNC(sub_8338655C);
PPC_FUNC_IMPL(__imp__sub_8338655C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83386560"))) PPC_WEAK_FUNC(sub_83386560);
PPC_FUNC_IMPL(__imp__sub_83386560) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-25752
	ctx.r4.s64 = ctx.r11.s64 + -25752;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-3128
	ctx.r30.s64 = ctx.r31.s64 + -3128;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-3920
	ctx.r4.s64 = ctx.r7.s64 + -3920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-25952
	ctx.r10.s64 = ctx.r10.s64 + -25952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833865BC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-25880
	ctx.r10.s64 = ctx.r10.s64 + -25880;
	// addi r9,r9,-25760
	ctx.r9.s64 = ctx.r9.s64 + -25760;
	// stw r11,-3128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3128, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// bl 0x82cb0ae8
	ctx.lr = 0x833865EC;
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

__attribute__((alias("__imp__sub_83386604"))) PPC_WEAK_FUNC(sub_83386604);
PPC_FUNC_IMPL(__imp__sub_83386604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83386608"))) PPC_WEAK_FUNC(sub_83386608);
PPC_FUNC_IMPL(__imp__sub_83386608) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-25096
	ctx.r4.s64 = ctx.r11.s64 + -25096;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-3220
	ctx.r30.s64 = ctx.r31.s64 + -3220;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-3736
	ctx.r4.s64 = ctx.r7.s64 + -3736;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-25296
	ctx.r10.s64 = ctx.r10.s64 + -25296;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83386664;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-25224
	ctx.r10.s64 = ctx.r10.s64 + -25224;
	// addi r9,r9,-25104
	ctx.r9.s64 = ctx.r9.s64 + -25104;
	// stw r11,-3220(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3220, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-112
	ctx.r3.s64 = ctx.r3.s64 + -112;
	// bl 0x82cb0ae8
	ctx.lr = 0x83386694;
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

__attribute__((alias("__imp__sub_833866AC"))) PPC_WEAK_FUNC(sub_833866AC);
PPC_FUNC_IMPL(__imp__sub_833866AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833866B0"))) PPC_WEAK_FUNC(sub_833866B0);
PPC_FUNC_IMPL(__imp__sub_833866B0) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-24440
	ctx.r4.s64 = ctx.r11.s64 + -24440;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-3312
	ctx.r30.s64 = ctx.r31.s64 + -3312;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-3536
	ctx.r4.s64 = ctx.r7.s64 + -3536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-24640
	ctx.r10.s64 = ctx.r10.s64 + -24640;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338670C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-24568
	ctx.r10.s64 = ctx.r10.s64 + -24568;
	// addi r9,r9,-24448
	ctx.r9.s64 = ctx.r9.s64 + -24448;
	// stw r11,-3312(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3312, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338673C;
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

__attribute__((alias("__imp__sub_83386754"))) PPC_WEAK_FUNC(sub_83386754);
PPC_FUNC_IMPL(__imp__sub_83386754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83386758"))) PPC_WEAK_FUNC(sub_83386758);
PPC_FUNC_IMPL(__imp__sub_83386758) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-23784
	ctx.r4.s64 = ctx.r11.s64 + -23784;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-3404
	ctx.r30.s64 = ctx.r31.s64 + -3404;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-3328
	ctx.r4.s64 = ctx.r7.s64 + -3328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-23984
	ctx.r10.s64 = ctx.r10.s64 + -23984;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833867B4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-23912
	ctx.r10.s64 = ctx.r10.s64 + -23912;
	// addi r9,r9,-23792
	ctx.r9.s64 = ctx.r9.s64 + -23792;
	// stw r11,-3404(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3404, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x82cb0ae8
	ctx.lr = 0x833867E4;
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

__attribute__((alias("__imp__sub_833867FC"))) PPC_WEAK_FUNC(sub_833867FC);
PPC_FUNC_IMPL(__imp__sub_833867FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83386800"))) PPC_WEAK_FUNC(sub_83386800);
PPC_FUNC_IMPL(__imp__sub_83386800) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-23128
	ctx.r4.s64 = ctx.r11.s64 + -23128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-3496
	ctx.r30.s64 = ctx.r31.s64 + -3496;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-3112
	ctx.r4.s64 = ctx.r7.s64 + -3112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-23328
	ctx.r10.s64 = ctx.r10.s64 + -23328;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338685C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-23256
	ctx.r10.s64 = ctx.r10.s64 + -23256;
	// addi r9,r9,-23136
	ctx.r9.s64 = ctx.r9.s64 + -23136;
	// stw r11,-3496(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3496, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338688C;
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

__attribute__((alias("__imp__sub_833868A4"))) PPC_WEAK_FUNC(sub_833868A4);
PPC_FUNC_IMPL(__imp__sub_833868A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833868A8"))) PPC_WEAK_FUNC(sub_833868A8);
PPC_FUNC_IMPL(__imp__sub_833868A8) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-22496
	ctx.r4.s64 = ctx.r11.s64 + -22496;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-3588
	ctx.r30.s64 = ctx.r31.s64 + -3588;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-6308
	ctx.r5.s64 = ctx.r8.s64 + -6308;
	// addi r4,r7,-2920
	ctx.r4.s64 = ctx.r7.s64 + -2920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-22672
	ctx.r10.s64 = ctx.r10.s64 + -22672;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83386904;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-22600
	ctx.r10.s64 = ctx.r10.s64 + -22600;
	// addi r9,r9,-22504
	ctx.r9.s64 = ctx.r9.s64 + -22504;
	// stw r11,-3588(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3588, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,240
	ctx.r3.s64 = ctx.r3.s64 + 240;
	// bl 0x82cb0ae8
	ctx.lr = 0x83386934;
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

__attribute__((alias("__imp__sub_8338694C"))) PPC_WEAK_FUNC(sub_8338694C);
PPC_FUNC_IMPL(__imp__sub_8338694C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83386950"))) PPC_WEAK_FUNC(sub_83386950);
PPC_FUNC_IMPL(__imp__sub_83386950) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-21864
	ctx.r4.s64 = ctx.r11.s64 + -21864;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-3680
	ctx.r30.s64 = ctx.r31.s64 + -3680;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-2768
	ctx.r4.s64 = ctx.r7.s64 + -2768;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-22064
	ctx.r10.s64 = ctx.r10.s64 + -22064;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833869AC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-21992
	ctx.r10.s64 = ctx.r10.s64 + -21992;
	// addi r9,r9,-21872
	ctx.r9.s64 = ctx.r9.s64 + -21872;
	// stw r11,-3680(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3680, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,328
	ctx.r3.s64 = ctx.r3.s64 + 328;
	// bl 0x82cb0ae8
	ctx.lr = 0x833869DC;
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

__attribute__((alias("__imp__sub_833869F4"))) PPC_WEAK_FUNC(sub_833869F4);
PPC_FUNC_IMPL(__imp__sub_833869F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833869F8"))) PPC_WEAK_FUNC(sub_833869F8);
PPC_FUNC_IMPL(__imp__sub_833869F8) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-21208
	ctx.r4.s64 = ctx.r11.s64 + -21208;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-3772
	ctx.r30.s64 = ctx.r31.s64 + -3772;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-2576
	ctx.r4.s64 = ctx.r7.s64 + -2576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-21408
	ctx.r10.s64 = ctx.r10.s64 + -21408;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83386A54;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-21336
	ctx.r10.s64 = ctx.r10.s64 + -21336;
	// addi r9,r9,-21216
	ctx.r9.s64 = ctx.r9.s64 + -21216;
	// stw r11,-3772(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3772, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,416
	ctx.r3.s64 = ctx.r3.s64 + 416;
	// bl 0x82cb0ae8
	ctx.lr = 0x83386A84;
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

__attribute__((alias("__imp__sub_83386A9C"))) PPC_WEAK_FUNC(sub_83386A9C);
PPC_FUNC_IMPL(__imp__sub_83386A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83386AA0"))) PPC_WEAK_FUNC(sub_83386AA0);
PPC_FUNC_IMPL(__imp__sub_83386AA0) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-20552
	ctx.r4.s64 = ctx.r11.s64 + -20552;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-3864
	ctx.r30.s64 = ctx.r31.s64 + -3864;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-2376
	ctx.r4.s64 = ctx.r7.s64 + -2376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-20752
	ctx.r10.s64 = ctx.r10.s64 + -20752;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83386AFC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-20680
	ctx.r10.s64 = ctx.r10.s64 + -20680;
	// addi r9,r9,-20560
	ctx.r9.s64 = ctx.r9.s64 + -20560;
	// stw r11,-3864(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3864, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,504
	ctx.r3.s64 = ctx.r3.s64 + 504;
	// bl 0x82cb0ae8
	ctx.lr = 0x83386B2C;
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

__attribute__((alias("__imp__sub_83386B44"))) PPC_WEAK_FUNC(sub_83386B44);
PPC_FUNC_IMPL(__imp__sub_83386B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83386B48"))) PPC_WEAK_FUNC(sub_83386B48);
PPC_FUNC_IMPL(__imp__sub_83386B48) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-19896
	ctx.r4.s64 = ctx.r11.s64 + -19896;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-3956
	ctx.r30.s64 = ctx.r31.s64 + -3956;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-2160
	ctx.r4.s64 = ctx.r7.s64 + -2160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-20096
	ctx.r10.s64 = ctx.r10.s64 + -20096;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83386BA4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-20024
	ctx.r10.s64 = ctx.r10.s64 + -20024;
	// addi r9,r9,-19904
	ctx.r9.s64 = ctx.r9.s64 + -19904;
	// stw r11,-3956(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3956, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,592
	ctx.r3.s64 = ctx.r3.s64 + 592;
	// bl 0x82cb0ae8
	ctx.lr = 0x83386BD4;
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

__attribute__((alias("__imp__sub_83386BEC"))) PPC_WEAK_FUNC(sub_83386BEC);
PPC_FUNC_IMPL(__imp__sub_83386BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83386BF0"))) PPC_WEAK_FUNC(sub_83386BF0);
PPC_FUNC_IMPL(__imp__sub_83386BF0) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-19240
	ctx.r4.s64 = ctx.r11.s64 + -19240;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-4048
	ctx.r30.s64 = ctx.r31.s64 + -4048;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-1944
	ctx.r4.s64 = ctx.r7.s64 + -1944;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-19440
	ctx.r10.s64 = ctx.r10.s64 + -19440;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83386C4C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-19368
	ctx.r10.s64 = ctx.r10.s64 + -19368;
	// addi r9,r9,-19248
	ctx.r9.s64 = ctx.r9.s64 + -19248;
	// stw r11,-4048(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4048, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,680
	ctx.r3.s64 = ctx.r3.s64 + 680;
	// bl 0x82cb0ae8
	ctx.lr = 0x83386C7C;
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

__attribute__((alias("__imp__sub_83386C94"))) PPC_WEAK_FUNC(sub_83386C94);
PPC_FUNC_IMPL(__imp__sub_83386C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83386C98"))) PPC_WEAK_FUNC(sub_83386C98);
PPC_FUNC_IMPL(__imp__sub_83386C98) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-18608
	ctx.r4.s64 = ctx.r11.s64 + -18608;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-4140
	ctx.r30.s64 = ctx.r31.s64 + -4140;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-6308
	ctx.r5.s64 = ctx.r8.s64 + -6308;
	// addi r4,r7,-1744
	ctx.r4.s64 = ctx.r7.s64 + -1744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-18784
	ctx.r10.s64 = ctx.r10.s64 + -18784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83386CF4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-18712
	ctx.r10.s64 = ctx.r10.s64 + -18712;
	// addi r9,r9,-18616
	ctx.r9.s64 = ctx.r9.s64 + -18616;
	// stw r11,-4140(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4140, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,768
	ctx.r3.s64 = ctx.r3.s64 + 768;
	// bl 0x82cb0ae8
	ctx.lr = 0x83386D24;
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

__attribute__((alias("__imp__sub_83386D3C"))) PPC_WEAK_FUNC(sub_83386D3C);
PPC_FUNC_IMPL(__imp__sub_83386D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83386D40"))) PPC_WEAK_FUNC(sub_83386D40);
PPC_FUNC_IMPL(__imp__sub_83386D40) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-17888
	ctx.r4.s64 = ctx.r11.s64 + -17888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-4232
	ctx.r30.s64 = ctx.r31.s64 + -4232;
	// addi r6,r9,-8624
	ctx.r6.s64 = ctx.r9.s64 + -8624;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,-1592
	ctx.r4.s64 = ctx.r7.s64 + -1592;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-18176
	ctx.r10.s64 = ctx.r10.s64 + -18176;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83386D9C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-18104
	ctx.r10.s64 = ctx.r10.s64 + -18104;
	// addi r9,r9,-17984
	ctx.r9.s64 = ctx.r9.s64 + -17984;
	// stw r11,-4232(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4232, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,856
	ctx.r3.s64 = ctx.r3.s64 + 856;
	// bl 0x82cb0ae8
	ctx.lr = 0x83386DCC;
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

__attribute__((alias("__imp__sub_83386DE4"))) PPC_WEAK_FUNC(sub_83386DE4);
PPC_FUNC_IMPL(__imp__sub_83386DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83386DE8"))) PPC_WEAK_FUNC(sub_83386DE8);
PPC_FUNC_IMPL(__imp__sub_83386DE8) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-17088
	ctx.r4.s64 = ctx.r11.s64 + -17088;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-4324
	ctx.r30.s64 = ctx.r31.s64 + -4324;
	// addi r6,r9,-8380
	ctx.r6.s64 = ctx.r9.s64 + -8380;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,-1432
	ctx.r4.s64 = ctx.r7.s64 + -1432;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-17440
	ctx.r10.s64 = ctx.r10.s64 + -17440;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83386E44;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-17368
	ctx.r10.s64 = ctx.r10.s64 + -17368;
	// addi r9,r9,-17248
	ctx.r9.s64 = ctx.r9.s64 + -17248;
	// stw r11,-4324(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4324, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,944
	ctx.r3.s64 = ctx.r3.s64 + 944;
	// bl 0x82cb0ae8
	ctx.lr = 0x83386E74;
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

__attribute__((alias("__imp__sub_83386E8C"))) PPC_WEAK_FUNC(sub_83386E8C);
PPC_FUNC_IMPL(__imp__sub_83386E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83386E90"))) PPC_WEAK_FUNC(sub_83386E90);
PPC_FUNC_IMPL(__imp__sub_83386E90) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-16288
	ctx.r4.s64 = ctx.r11.s64 + -16288;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-4416
	ctx.r30.s64 = ctx.r31.s64 + -4416;
	// addi r6,r9,-8168
	ctx.r6.s64 = ctx.r9.s64 + -8168;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,-1256
	ctx.r4.s64 = ctx.r7.s64 + -1256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-16640
	ctx.r10.s64 = ctx.r10.s64 + -16640;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83386EEC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-16568
	ctx.r10.s64 = ctx.r10.s64 + -16568;
	// addi r9,r9,-16448
	ctx.r9.s64 = ctx.r9.s64 + -16448;
	// stw r11,-4416(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4416, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,1032
	ctx.r3.s64 = ctx.r3.s64 + 1032;
	// bl 0x82cb0ae8
	ctx.lr = 0x83386F1C;
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

__attribute__((alias("__imp__sub_83386F34"))) PPC_WEAK_FUNC(sub_83386F34);
PPC_FUNC_IMPL(__imp__sub_83386F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83386F38"))) PPC_WEAK_FUNC(sub_83386F38);
PPC_FUNC_IMPL(__imp__sub_83386F38) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-15488
	ctx.r4.s64 = ctx.r11.s64 + -15488;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-4508
	ctx.r30.s64 = ctx.r31.s64 + -4508;
	// addi r6,r9,-7932
	ctx.r6.s64 = ctx.r9.s64 + -7932;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,-1072
	ctx.r4.s64 = ctx.r7.s64 + -1072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-15840
	ctx.r10.s64 = ctx.r10.s64 + -15840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83386F94;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-15768
	ctx.r10.s64 = ctx.r10.s64 + -15768;
	// addi r9,r9,-15648
	ctx.r9.s64 = ctx.r9.s64 + -15648;
	// stw r11,-4508(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4508, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,1120
	ctx.r3.s64 = ctx.r3.s64 + 1120;
	// bl 0x82cb0ae8
	ctx.lr = 0x83386FC4;
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

__attribute__((alias("__imp__sub_83386FDC"))) PPC_WEAK_FUNC(sub_83386FDC);
PPC_FUNC_IMPL(__imp__sub_83386FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83386FE0"))) PPC_WEAK_FUNC(sub_83386FE0);
PPC_FUNC_IMPL(__imp__sub_83386FE0) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-14688
	ctx.r4.s64 = ctx.r11.s64 + -14688;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-4600
	ctx.r30.s64 = ctx.r31.s64 + -4600;
	// addi r6,r9,-7688
	ctx.r6.s64 = ctx.r9.s64 + -7688;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,-888
	ctx.r4.s64 = ctx.r7.s64 + -888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-15040
	ctx.r10.s64 = ctx.r10.s64 + -15040;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338703C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-14968
	ctx.r10.s64 = ctx.r10.s64 + -14968;
	// addi r9,r9,-14848
	ctx.r9.s64 = ctx.r9.s64 + -14848;
	// stw r11,-4600(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4600, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,1208
	ctx.r3.s64 = ctx.r3.s64 + 1208;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338706C;
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

__attribute__((alias("__imp__sub_83387084"))) PPC_WEAK_FUNC(sub_83387084);
PPC_FUNC_IMPL(__imp__sub_83387084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83387088"))) PPC_WEAK_FUNC(sub_83387088);
PPC_FUNC_IMPL(__imp__sub_83387088) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-13976
	ctx.r4.s64 = ctx.r11.s64 + -13976;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-4692
	ctx.r30.s64 = ctx.r31.s64 + -4692;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7476
	ctx.r5.s64 = ctx.r8.s64 + -7476;
	// addi r4,r7,-720
	ctx.r4.s64 = ctx.r7.s64 + -720;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-14240
	ctx.r10.s64 = ctx.r10.s64 + -14240;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x833870E4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-14168
	ctx.r10.s64 = ctx.r10.s64 + -14168;
	// addi r9,r9,-14072
	ctx.r9.s64 = ctx.r9.s64 + -14072;
	// stw r11,-4692(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4692, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,1296
	ctx.r3.s64 = ctx.r3.s64 + 1296;
	// bl 0x82cb0ae8
	ctx.lr = 0x83387114;
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

__attribute__((alias("__imp__sub_8338712C"))) PPC_WEAK_FUNC(sub_8338712C);
PPC_FUNC_IMPL(__imp__sub_8338712C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83387130"))) PPC_WEAK_FUNC(sub_83387130);
PPC_FUNC_IMPL(__imp__sub_83387130) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-13176
	ctx.r4.s64 = ctx.r11.s64 + -13176;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-4784
	ctx.r30.s64 = ctx.r31.s64 + -4784;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-592
	ctx.r4.s64 = ctx.r7.s64 + -592;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-13528
	ctx.r10.s64 = ctx.r10.s64 + -13528;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338718C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-13456
	ctx.r10.s64 = ctx.r10.s64 + -13456;
	// addi r9,r9,-13336
	ctx.r9.s64 = ctx.r9.s64 + -13336;
	// stw r11,-4784(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4784, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,1384
	ctx.r3.s64 = ctx.r3.s64 + 1384;
	// bl 0x82cb0ae8
	ctx.lr = 0x833871BC;
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

__attribute__((alias("__imp__sub_833871D4"))) PPC_WEAK_FUNC(sub_833871D4);
PPC_FUNC_IMPL(__imp__sub_833871D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833871D8"))) PPC_WEAK_FUNC(sub_833871D8);
PPC_FUNC_IMPL(__imp__sub_833871D8) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-12320
	ctx.r4.s64 = ctx.r11.s64 + -12320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-4876
	ctx.r30.s64 = ctx.r31.s64 + -4876;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-424
	ctx.r4.s64 = ctx.r7.s64 + -424;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-12720
	ctx.r10.s64 = ctx.r10.s64 + -12720;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83387234;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-12648
	ctx.r10.s64 = ctx.r10.s64 + -12648;
	// addi r9,r9,-12528
	ctx.r9.s64 = ctx.r9.s64 + -12528;
	// stw r11,-4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4876, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,1472
	ctx.r3.s64 = ctx.r3.s64 + 1472;
	// bl 0x82cb0ae8
	ctx.lr = 0x83387264;
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

__attribute__((alias("__imp__sub_8338727C"))) PPC_WEAK_FUNC(sub_8338727C);
PPC_FUNC_IMPL(__imp__sub_8338727C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83387280"))) PPC_WEAK_FUNC(sub_83387280);
PPC_FUNC_IMPL(__imp__sub_83387280) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-11464
	ctx.r4.s64 = ctx.r11.s64 + -11464;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-4968
	ctx.r30.s64 = ctx.r31.s64 + -4968;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-240
	ctx.r4.s64 = ctx.r7.s64 + -240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-11864
	ctx.r10.s64 = ctx.r10.s64 + -11864;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833872DC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-11792
	ctx.r10.s64 = ctx.r10.s64 + -11792;
	// addi r9,r9,-11672
	ctx.r9.s64 = ctx.r9.s64 + -11672;
	// stw r11,-4968(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4968, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,1560
	ctx.r3.s64 = ctx.r3.s64 + 1560;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338730C;
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

__attribute__((alias("__imp__sub_83387324"))) PPC_WEAK_FUNC(sub_83387324);
PPC_FUNC_IMPL(__imp__sub_83387324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83387328"))) PPC_WEAK_FUNC(sub_83387328);
PPC_FUNC_IMPL(__imp__sub_83387328) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-10608
	ctx.r4.s64 = ctx.r11.s64 + -10608;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-5060
	ctx.r30.s64 = ctx.r31.s64 + -5060;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,-48
	ctx.r4.s64 = ctx.r7.s64 + -48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-11008
	ctx.r10.s64 = ctx.r10.s64 + -11008;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83387384;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-10936
	ctx.r10.s64 = ctx.r10.s64 + -10936;
	// addi r9,r9,-10816
	ctx.r9.s64 = ctx.r9.s64 + -10816;
	// stw r11,-5060(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5060, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,1648
	ctx.r3.s64 = ctx.r3.s64 + 1648;
	// bl 0x82cb0ae8
	ctx.lr = 0x833873B4;
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

__attribute__((alias("__imp__sub_833873CC"))) PPC_WEAK_FUNC(sub_833873CC);
PPC_FUNC_IMPL(__imp__sub_833873CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833873D0"))) PPC_WEAK_FUNC(sub_833873D0);
PPC_FUNC_IMPL(__imp__sub_833873D0) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-9752
	ctx.r4.s64 = ctx.r11.s64 + -9752;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-5152
	ctx.r30.s64 = ctx.r31.s64 + -5152;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,144
	ctx.r4.s64 = ctx.r7.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-10152
	ctx.r10.s64 = ctx.r10.s64 + -10152;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338742C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-10080
	ctx.r10.s64 = ctx.r10.s64 + -10080;
	// addi r9,r9,-9960
	ctx.r9.s64 = ctx.r9.s64 + -9960;
	// stw r11,-5152(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5152, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,1736
	ctx.r3.s64 = ctx.r3.s64 + 1736;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338745C;
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

__attribute__((alias("__imp__sub_83387474"))) PPC_WEAK_FUNC(sub_83387474);
PPC_FUNC_IMPL(__imp__sub_83387474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83387478"))) PPC_WEAK_FUNC(sub_83387478);
PPC_FUNC_IMPL(__imp__sub_83387478) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-8968
	ctx.r4.s64 = ctx.r11.s64 + -8968;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-5244
	ctx.r30.s64 = ctx.r31.s64 + -5244;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-6308
	ctx.r5.s64 = ctx.r8.s64 + -6308;
	// addi r4,r7,320
	ctx.r4.s64 = ctx.r7.s64 + 320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-9296
	ctx.r10.s64 = ctx.r10.s64 + -9296;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x833874D4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-9224
	ctx.r10.s64 = ctx.r10.s64 + -9224;
	// addi r9,r9,-9128
	ctx.r9.s64 = ctx.r9.s64 + -9128;
	// stw r11,-5244(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5244, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,1824
	ctx.r3.s64 = ctx.r3.s64 + 1824;
	// bl 0x82cb0ae8
	ctx.lr = 0x83387504;
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

__attribute__((alias("__imp__sub_8338751C"))) PPC_WEAK_FUNC(sub_8338751C);
PPC_FUNC_IMPL(__imp__sub_8338751C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83387520"))) PPC_WEAK_FUNC(sub_83387520);
PPC_FUNC_IMPL(__imp__sub_83387520) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-8184
	ctx.r4.s64 = ctx.r11.s64 + -8184;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-5336
	ctx.r30.s64 = ctx.r31.s64 + -5336;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,456
	ctx.r4.s64 = ctx.r7.s64 + 456;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-8536
	ctx.r10.s64 = ctx.r10.s64 + -8536;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338757C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-8464
	ctx.r10.s64 = ctx.r10.s64 + -8464;
	// addi r9,r9,-8344
	ctx.r9.s64 = ctx.r9.s64 + -8344;
	// stw r11,-5336(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5336, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,1912
	ctx.r3.s64 = ctx.r3.s64 + 1912;
	// bl 0x82cb0ae8
	ctx.lr = 0x833875AC;
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

__attribute__((alias("__imp__sub_833875C4"))) PPC_WEAK_FUNC(sub_833875C4);
PPC_FUNC_IMPL(__imp__sub_833875C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833875C8"))) PPC_WEAK_FUNC(sub_833875C8);
PPC_FUNC_IMPL(__imp__sub_833875C8) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-7328
	ctx.r4.s64 = ctx.r11.s64 + -7328;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-5428
	ctx.r30.s64 = ctx.r31.s64 + -5428;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,624
	ctx.r4.s64 = ctx.r7.s64 + 624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-7728
	ctx.r10.s64 = ctx.r10.s64 + -7728;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83387624;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-7656
	ctx.r10.s64 = ctx.r10.s64 + -7656;
	// addi r9,r9,-7536
	ctx.r9.s64 = ctx.r9.s64 + -7536;
	// stw r11,-5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5428, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,2000
	ctx.r3.s64 = ctx.r3.s64 + 2000;
	// bl 0x82cb0ae8
	ctx.lr = 0x83387654;
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

__attribute__((alias("__imp__sub_8338766C"))) PPC_WEAK_FUNC(sub_8338766C);
PPC_FUNC_IMPL(__imp__sub_8338766C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83387670"))) PPC_WEAK_FUNC(sub_83387670);
PPC_FUNC_IMPL(__imp__sub_83387670) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-6472
	ctx.r4.s64 = ctx.r11.s64 + -6472;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-5520
	ctx.r30.s64 = ctx.r31.s64 + -5520;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,808
	ctx.r4.s64 = ctx.r7.s64 + 808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-6872
	ctx.r10.s64 = ctx.r10.s64 + -6872;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833876CC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-6800
	ctx.r10.s64 = ctx.r10.s64 + -6800;
	// addi r9,r9,-6680
	ctx.r9.s64 = ctx.r9.s64 + -6680;
	// stw r11,-5520(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5520, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,2088
	ctx.r3.s64 = ctx.r3.s64 + 2088;
	// bl 0x82cb0ae8
	ctx.lr = 0x833876FC;
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

__attribute__((alias("__imp__sub_83387714"))) PPC_WEAK_FUNC(sub_83387714);
PPC_FUNC_IMPL(__imp__sub_83387714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83387718"))) PPC_WEAK_FUNC(sub_83387718);
PPC_FUNC_IMPL(__imp__sub_83387718) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-5616
	ctx.r4.s64 = ctx.r11.s64 + -5616;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-5612
	ctx.r30.s64 = ctx.r31.s64 + -5612;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,1000
	ctx.r4.s64 = ctx.r7.s64 + 1000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-6016
	ctx.r10.s64 = ctx.r10.s64 + -6016;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83387774;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-5944
	ctx.r10.s64 = ctx.r10.s64 + -5944;
	// addi r9,r9,-5824
	ctx.r9.s64 = ctx.r9.s64 + -5824;
	// stw r11,-5612(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5612, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,2176
	ctx.r3.s64 = ctx.r3.s64 + 2176;
	// bl 0x82cb0ae8
	ctx.lr = 0x833877A4;
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

__attribute__((alias("__imp__sub_833877BC"))) PPC_WEAK_FUNC(sub_833877BC);
PPC_FUNC_IMPL(__imp__sub_833877BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833877C0"))) PPC_WEAK_FUNC(sub_833877C0);
PPC_FUNC_IMPL(__imp__sub_833877C0) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-4760
	ctx.r4.s64 = ctx.r11.s64 + -4760;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-5704
	ctx.r30.s64 = ctx.r31.s64 + -5704;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,1200
	ctx.r4.s64 = ctx.r7.s64 + 1200;
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
	ctx.lr = 0x8338781C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-5088
	ctx.r10.s64 = ctx.r10.s64 + -5088;
	// addi r9,r9,-4968
	ctx.r9.s64 = ctx.r9.s64 + -4968;
	// stw r11,-5704(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5704, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,2264
	ctx.r3.s64 = ctx.r3.s64 + 2264;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338784C;
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

__attribute__((alias("__imp__sub_83387864"))) PPC_WEAK_FUNC(sub_83387864);
PPC_FUNC_IMPL(__imp__sub_83387864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83387868"))) PPC_WEAK_FUNC(sub_83387868);
PPC_FUNC_IMPL(__imp__sub_83387868) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-3976
	ctx.r4.s64 = ctx.r11.s64 + -3976;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-5796
	ctx.r30.s64 = ctx.r31.s64 + -5796;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-6308
	ctx.r5.s64 = ctx.r8.s64 + -6308;
	// addi r4,r7,1376
	ctx.r4.s64 = ctx.r7.s64 + 1376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-4304
	ctx.r10.s64 = ctx.r10.s64 + -4304;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x833878C4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-4232
	ctx.r10.s64 = ctx.r10.s64 + -4232;
	// addi r9,r9,-4136
	ctx.r9.s64 = ctx.r9.s64 + -4136;
	// stw r11,-5796(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5796, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,2352
	ctx.r3.s64 = ctx.r3.s64 + 2352;
	// bl 0x82cb0ae8
	ctx.lr = 0x833878F4;
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

__attribute__((alias("__imp__sub_8338790C"))) PPC_WEAK_FUNC(sub_8338790C);
PPC_FUNC_IMPL(__imp__sub_8338790C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83387910"))) PPC_WEAK_FUNC(sub_83387910);
PPC_FUNC_IMPL(__imp__sub_83387910) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-3344
	ctx.r4.s64 = ctx.r11.s64 + -3344;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-5888
	ctx.r30.s64 = ctx.r31.s64 + -5888;
	// addi r6,r9,-8624
	ctx.r6.s64 = ctx.r9.s64 + -8624;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,1512
	ctx.r4.s64 = ctx.r7.s64 + 1512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-3544
	ctx.r10.s64 = ctx.r10.s64 + -3544;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338796C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-3472
	ctx.r10.s64 = ctx.r10.s64 + -3472;
	// addi r9,r9,-3352
	ctx.r9.s64 = ctx.r9.s64 + -3352;
	// stw r11,-5888(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5888, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,2440
	ctx.r3.s64 = ctx.r3.s64 + 2440;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338799C;
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

__attribute__((alias("__imp__sub_833879B4"))) PPC_WEAK_FUNC(sub_833879B4);
PPC_FUNC_IMPL(__imp__sub_833879B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833879B8"))) PPC_WEAK_FUNC(sub_833879B8);
PPC_FUNC_IMPL(__imp__sub_833879B8) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-2696
	ctx.r4.s64 = ctx.r11.s64 + -2696;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-5980
	ctx.r30.s64 = ctx.r31.s64 + -5980;
	// addi r6,r9,-8380
	ctx.r6.s64 = ctx.r9.s64 + -8380;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,1688
	ctx.r4.s64 = ctx.r7.s64 + 1688;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-2896
	ctx.r10.s64 = ctx.r10.s64 + -2896;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83387A14;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-2824
	ctx.r10.s64 = ctx.r10.s64 + -2824;
	// addi r9,r9,-2704
	ctx.r9.s64 = ctx.r9.s64 + -2704;
	// stw r11,-5980(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5980, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,2528
	ctx.r3.s64 = ctx.r3.s64 + 2528;
	// bl 0x82cb0ae8
	ctx.lr = 0x83387A44;
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

__attribute__((alias("__imp__sub_83387A5C"))) PPC_WEAK_FUNC(sub_83387A5C);
PPC_FUNC_IMPL(__imp__sub_83387A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83387A60"))) PPC_WEAK_FUNC(sub_83387A60);
PPC_FUNC_IMPL(__imp__sub_83387A60) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-2048
	ctx.r4.s64 = ctx.r11.s64 + -2048;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-6072
	ctx.r30.s64 = ctx.r31.s64 + -6072;
	// addi r6,r9,-8168
	ctx.r6.s64 = ctx.r9.s64 + -8168;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,1872
	ctx.r4.s64 = ctx.r7.s64 + 1872;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-2248
	ctx.r10.s64 = ctx.r10.s64 + -2248;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83387ABC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-2176
	ctx.r10.s64 = ctx.r10.s64 + -2176;
	// addi r9,r9,-2056
	ctx.r9.s64 = ctx.r9.s64 + -2056;
	// stw r11,-6072(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6072, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,2616
	ctx.r3.s64 = ctx.r3.s64 + 2616;
	// bl 0x82cb0ae8
	ctx.lr = 0x83387AEC;
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

__attribute__((alias("__imp__sub_83387B04"))) PPC_WEAK_FUNC(sub_83387B04);
PPC_FUNC_IMPL(__imp__sub_83387B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83387B08"))) PPC_WEAK_FUNC(sub_83387B08);
PPC_FUNC_IMPL(__imp__sub_83387B08) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-1400
	ctx.r4.s64 = ctx.r11.s64 + -1400;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-6164
	ctx.r30.s64 = ctx.r31.s64 + -6164;
	// addi r6,r9,-7932
	ctx.r6.s64 = ctx.r9.s64 + -7932;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,2072
	ctx.r4.s64 = ctx.r7.s64 + 2072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-1600
	ctx.r10.s64 = ctx.r10.s64 + -1600;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83387B64;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-1528
	ctx.r10.s64 = ctx.r10.s64 + -1528;
	// addi r9,r9,-1408
	ctx.r9.s64 = ctx.r9.s64 + -1408;
	// stw r11,-6164(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6164, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,2704
	ctx.r3.s64 = ctx.r3.s64 + 2704;
	// bl 0x82cb0ae8
	ctx.lr = 0x83387B94;
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

__attribute__((alias("__imp__sub_83387BAC"))) PPC_WEAK_FUNC(sub_83387BAC);
PPC_FUNC_IMPL(__imp__sub_83387BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83387BB0"))) PPC_WEAK_FUNC(sub_83387BB0);
PPC_FUNC_IMPL(__imp__sub_83387BB0) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-752
	ctx.r4.s64 = ctx.r11.s64 + -752;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-6256
	ctx.r30.s64 = ctx.r31.s64 + -6256;
	// addi r6,r9,-7688
	ctx.r6.s64 = ctx.r9.s64 + -7688;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,2272
	ctx.r4.s64 = ctx.r7.s64 + 2272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-952
	ctx.r10.s64 = ctx.r10.s64 + -952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83387C0C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-880
	ctx.r10.s64 = ctx.r10.s64 + -880;
	// addi r9,r9,-760
	ctx.r9.s64 = ctx.r9.s64 + -760;
	// stw r11,-6256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6256, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,2792
	ctx.r3.s64 = ctx.r3.s64 + 2792;
	// bl 0x82cb0ae8
	ctx.lr = 0x83387C3C;
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

__attribute__((alias("__imp__sub_83387C54"))) PPC_WEAK_FUNC(sub_83387C54);
PPC_FUNC_IMPL(__imp__sub_83387C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83387C58"))) PPC_WEAK_FUNC(sub_83387C58);
PPC_FUNC_IMPL(__imp__sub_83387C58) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,-128
	ctx.r4.s64 = ctx.r11.s64 + -128;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-6348
	ctx.r30.s64 = ctx.r31.s64 + -6348;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7476
	ctx.r5.s64 = ctx.r8.s64 + -7476;
	// addi r4,r7,2456
	ctx.r4.s64 = ctx.r7.s64 + 2456;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-304
	ctx.r10.s64 = ctx.r10.s64 + -304;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83387CB4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-232
	ctx.r10.s64 = ctx.r10.s64 + -232;
	// addi r9,r9,-136
	ctx.r9.s64 = ctx.r9.s64 + -136;
	// stw r11,-6348(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6348, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,2880
	ctx.r3.s64 = ctx.r3.s64 + 2880;
	// bl 0x82cb0ae8
	ctx.lr = 0x83387CE4;
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

__attribute__((alias("__imp__sub_83387CFC"))) PPC_WEAK_FUNC(sub_83387CFC);
PPC_FUNC_IMPL(__imp__sub_83387CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83387D00"))) PPC_WEAK_FUNC(sub_83387D00);
PPC_FUNC_IMPL(__imp__sub_83387D00) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,520
	ctx.r4.s64 = ctx.r11.s64 + 520;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-6440
	ctx.r30.s64 = ctx.r31.s64 + -6440;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,2592
	ctx.r4.s64 = ctx.r7.s64 + 2592;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,320
	ctx.r10.s64 = ctx.r10.s64 + 320;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83387D5C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,392
	ctx.r10.s64 = ctx.r10.s64 + 392;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stw r11,-6440(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6440, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,2968
	ctx.r3.s64 = ctx.r3.s64 + 2968;
	// bl 0x82cb0ae8
	ctx.lr = 0x83387D8C;
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

__attribute__((alias("__imp__sub_83387DA4"))) PPC_WEAK_FUNC(sub_83387DA4);
PPC_FUNC_IMPL(__imp__sub_83387DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83387DA8"))) PPC_WEAK_FUNC(sub_83387DA8);
PPC_FUNC_IMPL(__imp__sub_83387DA8) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,1176
	ctx.r4.s64 = ctx.r11.s64 + 1176;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-6532
	ctx.r30.s64 = ctx.r31.s64 + -6532;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,2776
	ctx.r4.s64 = ctx.r7.s64 + 2776;
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
	ctx.lr = 0x83387E04;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,1048
	ctx.r10.s64 = ctx.r10.s64 + 1048;
	// addi r9,r9,1168
	ctx.r9.s64 = ctx.r9.s64 + 1168;
	// stw r11,-6532(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6532, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,3056
	ctx.r3.s64 = ctx.r3.s64 + 3056;
	// bl 0x82cb0ae8
	ctx.lr = 0x83387E34;
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

__attribute__((alias("__imp__sub_83387E4C"))) PPC_WEAK_FUNC(sub_83387E4C);
PPC_FUNC_IMPL(__imp__sub_83387E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83387E50"))) PPC_WEAK_FUNC(sub_83387E50);
PPC_FUNC_IMPL(__imp__sub_83387E50) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,1832
	ctx.r4.s64 = ctx.r11.s64 + 1832;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-6624
	ctx.r30.s64 = ctx.r31.s64 + -6624;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,2968
	ctx.r4.s64 = ctx.r7.s64 + 2968;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,1632
	ctx.r10.s64 = ctx.r10.s64 + 1632;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83387EAC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,1704
	ctx.r10.s64 = ctx.r10.s64 + 1704;
	// addi r9,r9,1824
	ctx.r9.s64 = ctx.r9.s64 + 1824;
	// stw r11,-6624(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6624, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,3144
	ctx.r3.s64 = ctx.r3.s64 + 3144;
	// bl 0x82cb0ae8
	ctx.lr = 0x83387EDC;
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

__attribute__((alias("__imp__sub_83387EF4"))) PPC_WEAK_FUNC(sub_83387EF4);
PPC_FUNC_IMPL(__imp__sub_83387EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83387EF8"))) PPC_WEAK_FUNC(sub_83387EF8);
PPC_FUNC_IMPL(__imp__sub_83387EF8) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,2488
	ctx.r4.s64 = ctx.r11.s64 + 2488;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-6716
	ctx.r30.s64 = ctx.r31.s64 + -6716;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,3176
	ctx.r4.s64 = ctx.r7.s64 + 3176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,2288
	ctx.r10.s64 = ctx.r10.s64 + 2288;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83387F54;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,2360
	ctx.r10.s64 = ctx.r10.s64 + 2360;
	// addi r9,r9,2480
	ctx.r9.s64 = ctx.r9.s64 + 2480;
	// stw r11,-6716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6716, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,3232
	ctx.r3.s64 = ctx.r3.s64 + 3232;
	// bl 0x82cb0ae8
	ctx.lr = 0x83387F84;
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

__attribute__((alias("__imp__sub_83387F9C"))) PPC_WEAK_FUNC(sub_83387F9C);
PPC_FUNC_IMPL(__imp__sub_83387F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83387FA0"))) PPC_WEAK_FUNC(sub_83387FA0);
PPC_FUNC_IMPL(__imp__sub_83387FA0) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,3144
	ctx.r4.s64 = ctx.r11.s64 + 3144;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-6808
	ctx.r30.s64 = ctx.r31.s64 + -6808;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,3384
	ctx.r4.s64 = ctx.r7.s64 + 3384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,2944
	ctx.r10.s64 = ctx.r10.s64 + 2944;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83387FFC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,3016
	ctx.r10.s64 = ctx.r10.s64 + 3016;
	// addi r9,r9,3136
	ctx.r9.s64 = ctx.r9.s64 + 3136;
	// stw r11,-6808(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6808, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,3320
	ctx.r3.s64 = ctx.r3.s64 + 3320;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338802C;
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

__attribute__((alias("__imp__sub_83388044"))) PPC_WEAK_FUNC(sub_83388044);
PPC_FUNC_IMPL(__imp__sub_83388044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83388048"))) PPC_WEAK_FUNC(sub_83388048);
PPC_FUNC_IMPL(__imp__sub_83388048) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,3776
	ctx.r4.s64 = ctx.r11.s64 + 3776;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-6900
	ctx.r30.s64 = ctx.r31.s64 + -6900;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-6308
	ctx.r5.s64 = ctx.r8.s64 + -6308;
	// addi r4,r7,3576
	ctx.r4.s64 = ctx.r7.s64 + 3576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,3600
	ctx.r10.s64 = ctx.r10.s64 + 3600;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x833880A4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,3672
	ctx.r10.s64 = ctx.r10.s64 + 3672;
	// addi r9,r9,3768
	ctx.r9.s64 = ctx.r9.s64 + 3768;
	// stw r11,-6900(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6900, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,3408
	ctx.r3.s64 = ctx.r3.s64 + 3408;
	// bl 0x82cb0ae8
	ctx.lr = 0x833880D4;
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

__attribute__((alias("__imp__sub_833880EC"))) PPC_WEAK_FUNC(sub_833880EC);
PPC_FUNC_IMPL(__imp__sub_833880EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833880F0"))) PPC_WEAK_FUNC(sub_833880F0);
PPC_FUNC_IMPL(__imp__sub_833880F0) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,4408
	ctx.r4.s64 = ctx.r11.s64 + 4408;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-6992
	ctx.r30.s64 = ctx.r31.s64 + -6992;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,3720
	ctx.r4.s64 = ctx.r7.s64 + 3720;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,4208
	ctx.r10.s64 = ctx.r10.s64 + 4208;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338814C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,4280
	ctx.r10.s64 = ctx.r10.s64 + 4280;
	// addi r9,r9,4400
	ctx.r9.s64 = ctx.r9.s64 + 4400;
	// stw r11,-6992(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6992, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,3496
	ctx.r3.s64 = ctx.r3.s64 + 3496;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338817C;
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

__attribute__((alias("__imp__sub_83388194"))) PPC_WEAK_FUNC(sub_83388194);
PPC_FUNC_IMPL(__imp__sub_83388194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83388198"))) PPC_WEAK_FUNC(sub_83388198);
PPC_FUNC_IMPL(__imp__sub_83388198) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,5064
	ctx.r4.s64 = ctx.r11.s64 + 5064;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-7084
	ctx.r30.s64 = ctx.r31.s64 + -7084;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,3904
	ctx.r4.s64 = ctx.r7.s64 + 3904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,4864
	ctx.r10.s64 = ctx.r10.s64 + 4864;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833881F4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,4936
	ctx.r10.s64 = ctx.r10.s64 + 4936;
	// addi r9,r9,5056
	ctx.r9.s64 = ctx.r9.s64 + 5056;
	// stw r11,-7084(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7084, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,3584
	ctx.r3.s64 = ctx.r3.s64 + 3584;
	// bl 0x82cb0ae8
	ctx.lr = 0x83388224;
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

__attribute__((alias("__imp__sub_8338823C"))) PPC_WEAK_FUNC(sub_8338823C);
PPC_FUNC_IMPL(__imp__sub_8338823C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83388240"))) PPC_WEAK_FUNC(sub_83388240);
PPC_FUNC_IMPL(__imp__sub_83388240) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,5720
	ctx.r4.s64 = ctx.r11.s64 + 5720;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-7176
	ctx.r30.s64 = ctx.r31.s64 + -7176;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,4096
	ctx.r4.s64 = ctx.r7.s64 + 4096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,5520
	ctx.r10.s64 = ctx.r10.s64 + 5520;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338829C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,5592
	ctx.r10.s64 = ctx.r10.s64 + 5592;
	// addi r9,r9,5712
	ctx.r9.s64 = ctx.r9.s64 + 5712;
	// stw r11,-7176(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7176, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,3672
	ctx.r3.s64 = ctx.r3.s64 + 3672;
	// bl 0x82cb0ae8
	ctx.lr = 0x833882CC;
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

__attribute__((alias("__imp__sub_833882E4"))) PPC_WEAK_FUNC(sub_833882E4);
PPC_FUNC_IMPL(__imp__sub_833882E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833882E8"))) PPC_WEAK_FUNC(sub_833882E8);
PPC_FUNC_IMPL(__imp__sub_833882E8) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,6376
	ctx.r4.s64 = ctx.r11.s64 + 6376;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-7268
	ctx.r30.s64 = ctx.r31.s64 + -7268;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,4304
	ctx.r4.s64 = ctx.r7.s64 + 4304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,6176
	ctx.r10.s64 = ctx.r10.s64 + 6176;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83388344;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,6248
	ctx.r10.s64 = ctx.r10.s64 + 6248;
	// addi r9,r9,6368
	ctx.r9.s64 = ctx.r9.s64 + 6368;
	// stw r11,-7268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7268, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,3760
	ctx.r3.s64 = ctx.r3.s64 + 3760;
	// bl 0x82cb0ae8
	ctx.lr = 0x83388374;
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

__attribute__((alias("__imp__sub_8338838C"))) PPC_WEAK_FUNC(sub_8338838C);
PPC_FUNC_IMPL(__imp__sub_8338838C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83388390"))) PPC_WEAK_FUNC(sub_83388390);
PPC_FUNC_IMPL(__imp__sub_83388390) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,7032
	ctx.r4.s64 = ctx.r11.s64 + 7032;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-7360
	ctx.r30.s64 = ctx.r31.s64 + -7360;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,4512
	ctx.r4.s64 = ctx.r7.s64 + 4512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,6832
	ctx.r10.s64 = ctx.r10.s64 + 6832;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833883EC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,6904
	ctx.r10.s64 = ctx.r10.s64 + 6904;
	// addi r9,r9,7024
	ctx.r9.s64 = ctx.r9.s64 + 7024;
	// stw r11,-7360(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7360, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,3848
	ctx.r3.s64 = ctx.r3.s64 + 3848;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338841C;
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

__attribute__((alias("__imp__sub_83388434"))) PPC_WEAK_FUNC(sub_83388434);
PPC_FUNC_IMPL(__imp__sub_83388434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83388438"))) PPC_WEAK_FUNC(sub_83388438);
PPC_FUNC_IMPL(__imp__sub_83388438) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,7664
	ctx.r4.s64 = ctx.r11.s64 + 7664;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-7452
	ctx.r30.s64 = ctx.r31.s64 + -7452;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-6308
	ctx.r5.s64 = ctx.r8.s64 + -6308;
	// addi r4,r7,4704
	ctx.r4.s64 = ctx.r7.s64 + 4704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,7488
	ctx.r10.s64 = ctx.r10.s64 + 7488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83388494;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,7560
	ctx.r10.s64 = ctx.r10.s64 + 7560;
	// addi r9,r9,7656
	ctx.r9.s64 = ctx.r9.s64 + 7656;
	// stw r11,-7452(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7452, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,3936
	ctx.r3.s64 = ctx.r3.s64 + 3936;
	// bl 0x82cb0ae8
	ctx.lr = 0x833884C4;
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

__attribute__((alias("__imp__sub_833884DC"))) PPC_WEAK_FUNC(sub_833884DC);
PPC_FUNC_IMPL(__imp__sub_833884DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833884E0"))) PPC_WEAK_FUNC(sub_833884E0);
PPC_FUNC_IMPL(__imp__sub_833884E0) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,8416
	ctx.r4.s64 = ctx.r11.s64 + 8416;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-7544
	ctx.r30.s64 = ctx.r31.s64 + -7544;
	// addi r6,r9,-8624
	ctx.r6.s64 = ctx.r9.s64 + -8624;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,4856
	ctx.r4.s64 = ctx.r7.s64 + 4856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,8096
	ctx.r10.s64 = ctx.r10.s64 + 8096;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338853C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,8168
	ctx.r10.s64 = ctx.r10.s64 + 8168;
	// addi r9,r9,8288
	ctx.r9.s64 = ctx.r9.s64 + 8288;
	// stw r11,-7544(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7544, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,4024
	ctx.r3.s64 = ctx.r3.s64 + 4024;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338856C;
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

__attribute__((alias("__imp__sub_83388584"))) PPC_WEAK_FUNC(sub_83388584);
PPC_FUNC_IMPL(__imp__sub_83388584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83388588"))) PPC_WEAK_FUNC(sub_83388588);
PPC_FUNC_IMPL(__imp__sub_83388588) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,9120
	ctx.r4.s64 = ctx.r11.s64 + 9120;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-7636
	ctx.r30.s64 = ctx.r31.s64 + -7636;
	// addi r6,r9,-8380
	ctx.r6.s64 = ctx.r9.s64 + -8380;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,5016
	ctx.r4.s64 = ctx.r7.s64 + 5016;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,8864
	ctx.r10.s64 = ctx.r10.s64 + 8864;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833885E4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,8936
	ctx.r10.s64 = ctx.r10.s64 + 8936;
	// addi r9,r9,9056
	ctx.r9.s64 = ctx.r9.s64 + 9056;
	// stw r11,-7636(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7636, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,4112
	ctx.r3.s64 = ctx.r3.s64 + 4112;
	// bl 0x82cb0ae8
	ctx.lr = 0x83388614;
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

__attribute__((alias("__imp__sub_8338862C"))) PPC_WEAK_FUNC(sub_8338862C);
PPC_FUNC_IMPL(__imp__sub_8338862C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83388630"))) PPC_WEAK_FUNC(sub_83388630);
PPC_FUNC_IMPL(__imp__sub_83388630) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,9824
	ctx.r4.s64 = ctx.r11.s64 + 9824;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-7728
	ctx.r30.s64 = ctx.r31.s64 + -7728;
	// addi r6,r9,-8168
	ctx.r6.s64 = ctx.r9.s64 + -8168;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,5192
	ctx.r4.s64 = ctx.r7.s64 + 5192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,9568
	ctx.r10.s64 = ctx.r10.s64 + 9568;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338868C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,9640
	ctx.r10.s64 = ctx.r10.s64 + 9640;
	// addi r9,r9,9760
	ctx.r9.s64 = ctx.r9.s64 + 9760;
	// stw r11,-7728(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7728, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,4200
	ctx.r3.s64 = ctx.r3.s64 + 4200;
	// bl 0x82cb0ae8
	ctx.lr = 0x833886BC;
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

__attribute__((alias("__imp__sub_833886D4"))) PPC_WEAK_FUNC(sub_833886D4);
PPC_FUNC_IMPL(__imp__sub_833886D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833886D8"))) PPC_WEAK_FUNC(sub_833886D8);
PPC_FUNC_IMPL(__imp__sub_833886D8) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,10528
	ctx.r4.s64 = ctx.r11.s64 + 10528;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-7820
	ctx.r30.s64 = ctx.r31.s64 + -7820;
	// addi r6,r9,-7932
	ctx.r6.s64 = ctx.r9.s64 + -7932;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,5376
	ctx.r4.s64 = ctx.r7.s64 + 5376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,10272
	ctx.r10.s64 = ctx.r10.s64 + 10272;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83388734;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,10344
	ctx.r10.s64 = ctx.r10.s64 + 10344;
	// addi r9,r9,10464
	ctx.r9.s64 = ctx.r9.s64 + 10464;
	// stw r11,-7820(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7820, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,4288
	ctx.r3.s64 = ctx.r3.s64 + 4288;
	// bl 0x82cb0ae8
	ctx.lr = 0x83388764;
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

__attribute__((alias("__imp__sub_8338877C"))) PPC_WEAK_FUNC(sub_8338877C);
PPC_FUNC_IMPL(__imp__sub_8338877C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83388780"))) PPC_WEAK_FUNC(sub_83388780);
PPC_FUNC_IMPL(__imp__sub_83388780) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,11232
	ctx.r4.s64 = ctx.r11.s64 + 11232;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-7912
	ctx.r30.s64 = ctx.r31.s64 + -7912;
	// addi r6,r9,-7688
	ctx.r6.s64 = ctx.r9.s64 + -7688;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,5560
	ctx.r4.s64 = ctx.r7.s64 + 5560;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,10976
	ctx.r10.s64 = ctx.r10.s64 + 10976;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833887DC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,11048
	ctx.r10.s64 = ctx.r10.s64 + 11048;
	// addi r9,r9,11168
	ctx.r9.s64 = ctx.r9.s64 + 11168;
	// stw r11,-7912(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7912, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,4376
	ctx.r3.s64 = ctx.r3.s64 + 4376;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338880C;
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

__attribute__((alias("__imp__sub_83388824"))) PPC_WEAK_FUNC(sub_83388824);
PPC_FUNC_IMPL(__imp__sub_83388824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83388828"))) PPC_WEAK_FUNC(sub_83388828);
PPC_FUNC_IMPL(__imp__sub_83388828) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,11976
	ctx.r4.s64 = ctx.r11.s64 + 11976;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-8004
	ctx.r30.s64 = ctx.r31.s64 + -8004;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7476
	ctx.r5.s64 = ctx.r8.s64 + -7476;
	// addi r4,r7,5728
	ctx.r4.s64 = ctx.r7.s64 + 5728;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,11680
	ctx.r10.s64 = ctx.r10.s64 + 11680;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83388884;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,11752
	ctx.r10.s64 = ctx.r10.s64 + 11752;
	// addi r9,r9,11848
	ctx.r9.s64 = ctx.r9.s64 + 11848;
	// stw r11,-8004(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8004, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,4464
	ctx.r3.s64 = ctx.r3.s64 + 4464;
	// bl 0x82cb0ae8
	ctx.lr = 0x833888B4;
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

__attribute__((alias("__imp__sub_833888CC"))) PPC_WEAK_FUNC(sub_833888CC);
PPC_FUNC_IMPL(__imp__sub_833888CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833888D0"))) PPC_WEAK_FUNC(sub_833888D0);
PPC_FUNC_IMPL(__imp__sub_833888D0) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,12808
	ctx.r4.s64 = ctx.r11.s64 + 12808;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-8096
	ctx.r30.s64 = ctx.r31.s64 + -8096;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,5856
	ctx.r4.s64 = ctx.r7.s64 + 5856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,12424
	ctx.r10.s64 = ctx.r10.s64 + 12424;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338892C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,12496
	ctx.r10.s64 = ctx.r10.s64 + 12496;
	// addi r9,r9,12616
	ctx.r9.s64 = ctx.r9.s64 + 12616;
	// stw r11,-8096(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8096, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,4552
	ctx.r3.s64 = ctx.r3.s64 + 4552;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338895C;
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

__attribute__((alias("__imp__sub_83388974"))) PPC_WEAK_FUNC(sub_83388974);
PPC_FUNC_IMPL(__imp__sub_83388974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83388978"))) PPC_WEAK_FUNC(sub_83388978);
PPC_FUNC_IMPL(__imp__sub_83388978) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,13520
	ctx.r4.s64 = ctx.r11.s64 + 13520;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-8188
	ctx.r30.s64 = ctx.r31.s64 + -8188;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,6024
	ctx.r4.s64 = ctx.r7.s64 + 6024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,13264
	ctx.r10.s64 = ctx.r10.s64 + 13264;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833889D4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,13336
	ctx.r10.s64 = ctx.r10.s64 + 13336;
	// addi r9,r9,13456
	ctx.r9.s64 = ctx.r9.s64 + 13456;
	// stw r11,-8188(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8188, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,4640
	ctx.r3.s64 = ctx.r3.s64 + 4640;
	// bl 0x82cb0ae8
	ctx.lr = 0x83388A04;
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

__attribute__((alias("__imp__sub_83388A1C"))) PPC_WEAK_FUNC(sub_83388A1C);
PPC_FUNC_IMPL(__imp__sub_83388A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83388A20"))) PPC_WEAK_FUNC(sub_83388A20);
PPC_FUNC_IMPL(__imp__sub_83388A20) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,14232
	ctx.r4.s64 = ctx.r11.s64 + 14232;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-8280
	ctx.r30.s64 = ctx.r31.s64 + -8280;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,6208
	ctx.r4.s64 = ctx.r7.s64 + 6208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,13976
	ctx.r10.s64 = ctx.r10.s64 + 13976;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83388A7C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,14048
	ctx.r10.s64 = ctx.r10.s64 + 14048;
	// addi r9,r9,14168
	ctx.r9.s64 = ctx.r9.s64 + 14168;
	// stw r11,-8280(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8280, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,4728
	ctx.r3.s64 = ctx.r3.s64 + 4728;
	// bl 0x82cb0ae8
	ctx.lr = 0x83388AAC;
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

__attribute__((alias("__imp__sub_83388AC4"))) PPC_WEAK_FUNC(sub_83388AC4);
PPC_FUNC_IMPL(__imp__sub_83388AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83388AC8"))) PPC_WEAK_FUNC(sub_83388AC8);
PPC_FUNC_IMPL(__imp__sub_83388AC8) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,14944
	ctx.r4.s64 = ctx.r11.s64 + 14944;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-8372
	ctx.r30.s64 = ctx.r31.s64 + -8372;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,6400
	ctx.r4.s64 = ctx.r7.s64 + 6400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,14688
	ctx.r10.s64 = ctx.r10.s64 + 14688;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83388B24;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,14760
	ctx.r10.s64 = ctx.r10.s64 + 14760;
	// addi r9,r9,14880
	ctx.r9.s64 = ctx.r9.s64 + 14880;
	// stw r11,-8372(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8372, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,4816
	ctx.r3.s64 = ctx.r3.s64 + 4816;
	// bl 0x82cb0ae8
	ctx.lr = 0x83388B54;
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

__attribute__((alias("__imp__sub_83388B6C"))) PPC_WEAK_FUNC(sub_83388B6C);
PPC_FUNC_IMPL(__imp__sub_83388B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83388B70"))) PPC_WEAK_FUNC(sub_83388B70);
PPC_FUNC_IMPL(__imp__sub_83388B70) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,15656
	ctx.r4.s64 = ctx.r11.s64 + 15656;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-8464
	ctx.r30.s64 = ctx.r31.s64 + -8464;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,6592
	ctx.r4.s64 = ctx.r7.s64 + 6592;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,15400
	ctx.r10.s64 = ctx.r10.s64 + 15400;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83388BCC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,15472
	ctx.r10.s64 = ctx.r10.s64 + 15472;
	// addi r9,r9,15592
	ctx.r9.s64 = ctx.r9.s64 + 15592;
	// stw r11,-8464(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8464, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,4904
	ctx.r3.s64 = ctx.r3.s64 + 4904;
	// bl 0x82cb0ae8
	ctx.lr = 0x83388BFC;
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

__attribute__((alias("__imp__sub_83388C14"))) PPC_WEAK_FUNC(sub_83388C14);
PPC_FUNC_IMPL(__imp__sub_83388C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83388C18"))) PPC_WEAK_FUNC(sub_83388C18);
PPC_FUNC_IMPL(__imp__sub_83388C18) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,16472
	ctx.r4.s64 = ctx.r11.s64 + 16472;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-8556
	ctx.r30.s64 = ctx.r31.s64 + -8556;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-6308
	ctx.r5.s64 = ctx.r8.s64 + -6308;
	// addi r4,r7,6768
	ctx.r4.s64 = ctx.r7.s64 + 6768;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,16112
	ctx.r10.s64 = ctx.r10.s64 + 16112;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83388C74;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,16184
	ctx.r10.s64 = ctx.r10.s64 + 16184;
	// addi r9,r9,16280
	ctx.r9.s64 = ctx.r9.s64 + 16280;
	// stw r11,-8556(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8556, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,4992
	ctx.r3.s64 = ctx.r3.s64 + 4992;
	// bl 0x82cb0ae8
	ctx.lr = 0x83388CA4;
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

__attribute__((alias("__imp__sub_83388CBC"))) PPC_WEAK_FUNC(sub_83388CBC);
PPC_FUNC_IMPL(__imp__sub_83388CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83388CC0"))) PPC_WEAK_FUNC(sub_83388CC0);
PPC_FUNC_IMPL(__imp__sub_83388CC0) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,17288
	ctx.r4.s64 = ctx.r11.s64 + 17288;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-8648
	ctx.r30.s64 = ctx.r31.s64 + -8648;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,6904
	ctx.r4.s64 = ctx.r7.s64 + 6904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,16904
	ctx.r10.s64 = ctx.r10.s64 + 16904;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83388D1C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,16976
	ctx.r10.s64 = ctx.r10.s64 + 16976;
	// addi r9,r9,17096
	ctx.r9.s64 = ctx.r9.s64 + 17096;
	// stw r11,-8648(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8648, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,5080
	ctx.r3.s64 = ctx.r3.s64 + 5080;
	// bl 0x82cb0ae8
	ctx.lr = 0x83388D4C;
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

__attribute__((alias("__imp__sub_83388D64"))) PPC_WEAK_FUNC(sub_83388D64);
PPC_FUNC_IMPL(__imp__sub_83388D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83388D68"))) PPC_WEAK_FUNC(sub_83388D68);
PPC_FUNC_IMPL(__imp__sub_83388D68) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,18000
	ctx.r4.s64 = ctx.r11.s64 + 18000;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-8740
	ctx.r30.s64 = ctx.r31.s64 + -8740;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,7072
	ctx.r4.s64 = ctx.r7.s64 + 7072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,17744
	ctx.r10.s64 = ctx.r10.s64 + 17744;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83388DC4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,17816
	ctx.r10.s64 = ctx.r10.s64 + 17816;
	// addi r9,r9,17936
	ctx.r9.s64 = ctx.r9.s64 + 17936;
	// stw r11,-8740(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8740, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,5168
	ctx.r3.s64 = ctx.r3.s64 + 5168;
	// bl 0x82cb0ae8
	ctx.lr = 0x83388DF4;
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

__attribute__((alias("__imp__sub_83388E0C"))) PPC_WEAK_FUNC(sub_83388E0C);
PPC_FUNC_IMPL(__imp__sub_83388E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83388E10"))) PPC_WEAK_FUNC(sub_83388E10);
PPC_FUNC_IMPL(__imp__sub_83388E10) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,18712
	ctx.r4.s64 = ctx.r11.s64 + 18712;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-8832
	ctx.r30.s64 = ctx.r31.s64 + -8832;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,7256
	ctx.r4.s64 = ctx.r7.s64 + 7256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,18456
	ctx.r10.s64 = ctx.r10.s64 + 18456;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83388E6C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,18528
	ctx.r10.s64 = ctx.r10.s64 + 18528;
	// addi r9,r9,18648
	ctx.r9.s64 = ctx.r9.s64 + 18648;
	// stw r11,-8832(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8832, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,5256
	ctx.r3.s64 = ctx.r3.s64 + 5256;
	// bl 0x82cb0ae8
	ctx.lr = 0x83388E9C;
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

__attribute__((alias("__imp__sub_83388EB4"))) PPC_WEAK_FUNC(sub_83388EB4);
PPC_FUNC_IMPL(__imp__sub_83388EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83388EB8"))) PPC_WEAK_FUNC(sub_83388EB8);
PPC_FUNC_IMPL(__imp__sub_83388EB8) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,19424
	ctx.r4.s64 = ctx.r11.s64 + 19424;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-8924
	ctx.r30.s64 = ctx.r31.s64 + -8924;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,7448
	ctx.r4.s64 = ctx.r7.s64 + 7448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,19168
	ctx.r10.s64 = ctx.r10.s64 + 19168;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83388F14;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,19240
	ctx.r10.s64 = ctx.r10.s64 + 19240;
	// addi r9,r9,19360
	ctx.r9.s64 = ctx.r9.s64 + 19360;
	// stw r11,-8924(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8924, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,5344
	ctx.r3.s64 = ctx.r3.s64 + 5344;
	// bl 0x82cb0ae8
	ctx.lr = 0x83388F44;
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

__attribute__((alias("__imp__sub_83388F5C"))) PPC_WEAK_FUNC(sub_83388F5C);
PPC_FUNC_IMPL(__imp__sub_83388F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83388F60"))) PPC_WEAK_FUNC(sub_83388F60);
PPC_FUNC_IMPL(__imp__sub_83388F60) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,20136
	ctx.r4.s64 = ctx.r11.s64 + 20136;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-9016
	ctx.r30.s64 = ctx.r31.s64 + -9016;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,7648
	ctx.r4.s64 = ctx.r7.s64 + 7648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,19880
	ctx.r10.s64 = ctx.r10.s64 + 19880;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83388FBC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,19952
	ctx.r10.s64 = ctx.r10.s64 + 19952;
	// addi r9,r9,20072
	ctx.r9.s64 = ctx.r9.s64 + 20072;
	// stw r11,-9016(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9016, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,5432
	ctx.r3.s64 = ctx.r3.s64 + 5432;
	// bl 0x82cb0ae8
	ctx.lr = 0x83388FEC;
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

__attribute__((alias("__imp__sub_83389004"))) PPC_WEAK_FUNC(sub_83389004);
PPC_FUNC_IMPL(__imp__sub_83389004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83389008"))) PPC_WEAK_FUNC(sub_83389008);
PPC_FUNC_IMPL(__imp__sub_83389008) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,20952
	ctx.r4.s64 = ctx.r11.s64 + 20952;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-9108
	ctx.r30.s64 = ctx.r31.s64 + -9108;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-6308
	ctx.r5.s64 = ctx.r8.s64 + -6308;
	// addi r4,r7,7824
	ctx.r4.s64 = ctx.r7.s64 + 7824;
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
	ctx.lr = 0x83389064;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,20664
	ctx.r10.s64 = ctx.r10.s64 + 20664;
	// addi r9,r9,20760
	ctx.r9.s64 = ctx.r9.s64 + 20760;
	// stw r11,-9108(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9108, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,5520
	ctx.r3.s64 = ctx.r3.s64 + 5520;
	// bl 0x82cb0ae8
	ctx.lr = 0x83389094;
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

__attribute__((alias("__imp__sub_833890AC"))) PPC_WEAK_FUNC(sub_833890AC);
PPC_FUNC_IMPL(__imp__sub_833890AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833890B0"))) PPC_WEAK_FUNC(sub_833890B0);
PPC_FUNC_IMPL(__imp__sub_833890B0) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,21584
	ctx.r4.s64 = ctx.r11.s64 + 21584;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-9200
	ctx.r30.s64 = ctx.r31.s64 + -9200;
	// addi r6,r9,-8624
	ctx.r6.s64 = ctx.r9.s64 + -8624;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,7960
	ctx.r4.s64 = ctx.r7.s64 + 7960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,21384
	ctx.r10.s64 = ctx.r10.s64 + 21384;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338910C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,21456
	ctx.r10.s64 = ctx.r10.s64 + 21456;
	// addi r9,r9,21576
	ctx.r9.s64 = ctx.r9.s64 + 21576;
	// stw r11,-9200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9200, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,5608
	ctx.r3.s64 = ctx.r3.s64 + 5608;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338913C;
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

__attribute__((alias("__imp__sub_83389154"))) PPC_WEAK_FUNC(sub_83389154);
PPC_FUNC_IMPL(__imp__sub_83389154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83389158"))) PPC_WEAK_FUNC(sub_83389158);
PPC_FUNC_IMPL(__imp__sub_83389158) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,22232
	ctx.r4.s64 = ctx.r11.s64 + 22232;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-9292
	ctx.r30.s64 = ctx.r31.s64 + -9292;
	// addi r6,r9,-8380
	ctx.r6.s64 = ctx.r9.s64 + -8380;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,8136
	ctx.r4.s64 = ctx.r7.s64 + 8136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,22032
	ctx.r10.s64 = ctx.r10.s64 + 22032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833891B4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// addi r9,r9,22224
	ctx.r9.s64 = ctx.r9.s64 + 22224;
	// stw r11,-9292(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9292, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,5696
	ctx.r3.s64 = ctx.r3.s64 + 5696;
	// bl 0x82cb0ae8
	ctx.lr = 0x833891E4;
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

__attribute__((alias("__imp__sub_833891FC"))) PPC_WEAK_FUNC(sub_833891FC);
PPC_FUNC_IMPL(__imp__sub_833891FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83389200"))) PPC_WEAK_FUNC(sub_83389200);
PPC_FUNC_IMPL(__imp__sub_83389200) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,22880
	ctx.r4.s64 = ctx.r11.s64 + 22880;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-9384
	ctx.r30.s64 = ctx.r31.s64 + -9384;
	// addi r6,r9,-8168
	ctx.r6.s64 = ctx.r9.s64 + -8168;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,8320
	ctx.r4.s64 = ctx.r7.s64 + 8320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,22680
	ctx.r10.s64 = ctx.r10.s64 + 22680;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338925C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,22752
	ctx.r10.s64 = ctx.r10.s64 + 22752;
	// addi r9,r9,22872
	ctx.r9.s64 = ctx.r9.s64 + 22872;
	// stw r11,-9384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9384, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,5784
	ctx.r3.s64 = ctx.r3.s64 + 5784;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338928C;
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

__attribute__((alias("__imp__sub_833892A4"))) PPC_WEAK_FUNC(sub_833892A4);
PPC_FUNC_IMPL(__imp__sub_833892A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833892A8"))) PPC_WEAK_FUNC(sub_833892A8);
PPC_FUNC_IMPL(__imp__sub_833892A8) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,23528
	ctx.r4.s64 = ctx.r11.s64 + 23528;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-9476
	ctx.r30.s64 = ctx.r31.s64 + -9476;
	// addi r6,r9,-7932
	ctx.r6.s64 = ctx.r9.s64 + -7932;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,8520
	ctx.r4.s64 = ctx.r7.s64 + 8520;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,23328
	ctx.r10.s64 = ctx.r10.s64 + 23328;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83389304;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,23400
	ctx.r10.s64 = ctx.r10.s64 + 23400;
	// addi r9,r9,23520
	ctx.r9.s64 = ctx.r9.s64 + 23520;
	// stw r11,-9476(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9476, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,5872
	ctx.r3.s64 = ctx.r3.s64 + 5872;
	// bl 0x82cb0ae8
	ctx.lr = 0x83389334;
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

__attribute__((alias("__imp__sub_8338934C"))) PPC_WEAK_FUNC(sub_8338934C);
PPC_FUNC_IMPL(__imp__sub_8338934C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83389350"))) PPC_WEAK_FUNC(sub_83389350);
PPC_FUNC_IMPL(__imp__sub_83389350) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,24176
	ctx.r4.s64 = ctx.r11.s64 + 24176;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-9568
	ctx.r30.s64 = ctx.r31.s64 + -9568;
	// addi r6,r9,-7688
	ctx.r6.s64 = ctx.r9.s64 + -7688;
	// addi r5,r8,-8596
	ctx.r5.s64 = ctx.r8.s64 + -8596;
	// addi r4,r7,8720
	ctx.r4.s64 = ctx.r7.s64 + 8720;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,23976
	ctx.r10.s64 = ctx.r10.s64 + 23976;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833893AC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,24048
	ctx.r10.s64 = ctx.r10.s64 + 24048;
	// addi r9,r9,24168
	ctx.r9.s64 = ctx.r9.s64 + 24168;
	// stw r11,-9568(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9568, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,5960
	ctx.r3.s64 = ctx.r3.s64 + 5960;
	// bl 0x82cb0ae8
	ctx.lr = 0x833893DC;
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

__attribute__((alias("__imp__sub_833893F4"))) PPC_WEAK_FUNC(sub_833893F4);
PPC_FUNC_IMPL(__imp__sub_833893F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833893F8"))) PPC_WEAK_FUNC(sub_833893F8);
PPC_FUNC_IMPL(__imp__sub_833893F8) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,24800
	ctx.r4.s64 = ctx.r11.s64 + 24800;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-9660
	ctx.r30.s64 = ctx.r31.s64 + -9660;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7476
	ctx.r5.s64 = ctx.r8.s64 + -7476;
	// addi r4,r7,8904
	ctx.r4.s64 = ctx.r7.s64 + 8904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,24624
	ctx.r10.s64 = ctx.r10.s64 + 24624;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83389454;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,24696
	ctx.r10.s64 = ctx.r10.s64 + 24696;
	// addi r9,r9,24792
	ctx.r9.s64 = ctx.r9.s64 + 24792;
	// stw r11,-9660(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9660, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,6048
	ctx.r3.s64 = ctx.r3.s64 + 6048;
	// bl 0x82cb0ae8
	ctx.lr = 0x83389484;
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

__attribute__((alias("__imp__sub_8338949C"))) PPC_WEAK_FUNC(sub_8338949C);
PPC_FUNC_IMPL(__imp__sub_8338949C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833894A0"))) PPC_WEAK_FUNC(sub_833894A0);
PPC_FUNC_IMPL(__imp__sub_833894A0) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,25448
	ctx.r4.s64 = ctx.r11.s64 + 25448;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-9752
	ctx.r30.s64 = ctx.r31.s64 + -9752;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,9040
	ctx.r4.s64 = ctx.r7.s64 + 9040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,25248
	ctx.r10.s64 = ctx.r10.s64 + 25248;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833894FC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,25320
	ctx.r10.s64 = ctx.r10.s64 + 25320;
	// addi r9,r9,25440
	ctx.r9.s64 = ctx.r9.s64 + 25440;
	// stw r11,-9752(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9752, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,6136
	ctx.r3.s64 = ctx.r3.s64 + 6136;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338952C;
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

__attribute__((alias("__imp__sub_83389544"))) PPC_WEAK_FUNC(sub_83389544);
PPC_FUNC_IMPL(__imp__sub_83389544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83389548"))) PPC_WEAK_FUNC(sub_83389548);
PPC_FUNC_IMPL(__imp__sub_83389548) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,26104
	ctx.r4.s64 = ctx.r11.s64 + 26104;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-9844
	ctx.r30.s64 = ctx.r31.s64 + -9844;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,9224
	ctx.r4.s64 = ctx.r7.s64 + 9224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,25904
	ctx.r10.s64 = ctx.r10.s64 + 25904;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833895A4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,25976
	ctx.r10.s64 = ctx.r10.s64 + 25976;
	// addi r9,r9,26096
	ctx.r9.s64 = ctx.r9.s64 + 26096;
	// stw r11,-9844(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9844, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,6224
	ctx.r3.s64 = ctx.r3.s64 + 6224;
	// bl 0x82cb0ae8
	ctx.lr = 0x833895D4;
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

__attribute__((alias("__imp__sub_833895EC"))) PPC_WEAK_FUNC(sub_833895EC);
PPC_FUNC_IMPL(__imp__sub_833895EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833895F0"))) PPC_WEAK_FUNC(sub_833895F0);
PPC_FUNC_IMPL(__imp__sub_833895F0) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,26760
	ctx.r4.s64 = ctx.r11.s64 + 26760;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-9936
	ctx.r30.s64 = ctx.r31.s64 + -9936;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,9416
	ctx.r4.s64 = ctx.r7.s64 + 9416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,26560
	ctx.r10.s64 = ctx.r10.s64 + 26560;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338964C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,26632
	ctx.r10.s64 = ctx.r10.s64 + 26632;
	// addi r9,r9,26752
	ctx.r9.s64 = ctx.r9.s64 + 26752;
	// stw r11,-9936(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9936, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,6312
	ctx.r3.s64 = ctx.r3.s64 + 6312;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338967C;
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

__attribute__((alias("__imp__sub_83389694"))) PPC_WEAK_FUNC(sub_83389694);
PPC_FUNC_IMPL(__imp__sub_83389694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83389698"))) PPC_WEAK_FUNC(sub_83389698);
PPC_FUNC_IMPL(__imp__sub_83389698) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,27416
	ctx.r4.s64 = ctx.r11.s64 + 27416;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-10028
	ctx.r30.s64 = ctx.r31.s64 + -10028;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,9624
	ctx.r4.s64 = ctx.r7.s64 + 9624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,27216
	ctx.r10.s64 = ctx.r10.s64 + 27216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833896F4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,27288
	ctx.r10.s64 = ctx.r10.s64 + 27288;
	// addi r9,r9,27408
	ctx.r9.s64 = ctx.r9.s64 + 27408;
	// stw r11,-10028(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10028, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,6400
	ctx.r3.s64 = ctx.r3.s64 + 6400;
	// bl 0x82cb0ae8
	ctx.lr = 0x83389724;
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

__attribute__((alias("__imp__sub_8338973C"))) PPC_WEAK_FUNC(sub_8338973C);
PPC_FUNC_IMPL(__imp__sub_8338973C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83389740"))) PPC_WEAK_FUNC(sub_83389740);
PPC_FUNC_IMPL(__imp__sub_83389740) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,28072
	ctx.r4.s64 = ctx.r11.s64 + 28072;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-10120
	ctx.r30.s64 = ctx.r31.s64 + -10120;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,9832
	ctx.r4.s64 = ctx.r7.s64 + 9832;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,27872
	ctx.r10.s64 = ctx.r10.s64 + 27872;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x8338979C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,27944
	ctx.r10.s64 = ctx.r10.s64 + 27944;
	// addi r9,r9,28064
	ctx.r9.s64 = ctx.r9.s64 + 28064;
	// stw r11,-10120(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10120, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,6488
	ctx.r3.s64 = ctx.r3.s64 + 6488;
	// bl 0x82cb0ae8
	ctx.lr = 0x833897CC;
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

__attribute__((alias("__imp__sub_833897E4"))) PPC_WEAK_FUNC(sub_833897E4);
PPC_FUNC_IMPL(__imp__sub_833897E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833897E8"))) PPC_WEAK_FUNC(sub_833897E8);
PPC_FUNC_IMPL(__imp__sub_833897E8) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,28704
	ctx.r4.s64 = ctx.r11.s64 + 28704;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-10212
	ctx.r30.s64 = ctx.r31.s64 + -10212;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-6308
	ctx.r5.s64 = ctx.r8.s64 + -6308;
	// addi r4,r7,10024
	ctx.r4.s64 = ctx.r7.s64 + 10024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,28528
	ctx.r10.s64 = ctx.r10.s64 + 28528;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83389844;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,28600
	ctx.r10.s64 = ctx.r10.s64 + 28600;
	// addi r9,r9,28696
	ctx.r9.s64 = ctx.r9.s64 + 28696;
	// stw r11,-10212(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10212, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,6576
	ctx.r3.s64 = ctx.r3.s64 + 6576;
	// bl 0x82cb0ae8
	ctx.lr = 0x83389874;
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

__attribute__((alias("__imp__sub_8338988C"))) PPC_WEAK_FUNC(sub_8338988C);
PPC_FUNC_IMPL(__imp__sub_8338988C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83389890"))) PPC_WEAK_FUNC(sub_83389890);
PPC_FUNC_IMPL(__imp__sub_83389890) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,29336
	ctx.r4.s64 = ctx.r11.s64 + 29336;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-10304
	ctx.r30.s64 = ctx.r31.s64 + -10304;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,10168
	ctx.r4.s64 = ctx.r7.s64 + 10168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,29136
	ctx.r10.s64 = ctx.r10.s64 + 29136;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x833898EC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,29208
	ctx.r10.s64 = ctx.r10.s64 + 29208;
	// addi r9,r9,29328
	ctx.r9.s64 = ctx.r9.s64 + 29328;
	// stw r11,-10304(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10304, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,6664
	ctx.r3.s64 = ctx.r3.s64 + 6664;
	// bl 0x82cb0ae8
	ctx.lr = 0x8338991C;
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

__attribute__((alias("__imp__sub_83389934"))) PPC_WEAK_FUNC(sub_83389934);
PPC_FUNC_IMPL(__imp__sub_83389934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83389938"))) PPC_WEAK_FUNC(sub_83389938);
PPC_FUNC_IMPL(__imp__sub_83389938) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,29992
	ctx.r4.s64 = ctx.r11.s64 + 29992;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-10396
	ctx.r30.s64 = ctx.r31.s64 + -10396;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,10352
	ctx.r4.s64 = ctx.r7.s64 + 10352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,29792
	ctx.r10.s64 = ctx.r10.s64 + 29792;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83389994;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,29864
	ctx.r10.s64 = ctx.r10.s64 + 29864;
	// addi r9,r9,29984
	ctx.r9.s64 = ctx.r9.s64 + 29984;
	// stw r11,-10396(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10396, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,6752
	ctx.r3.s64 = ctx.r3.s64 + 6752;
	// bl 0x82cb0ae8
	ctx.lr = 0x833899C4;
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

__attribute__((alias("__imp__sub_833899DC"))) PPC_WEAK_FUNC(sub_833899DC);
PPC_FUNC_IMPL(__imp__sub_833899DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833899E0"))) PPC_WEAK_FUNC(sub_833899E0);
PPC_FUNC_IMPL(__imp__sub_833899E0) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,30648
	ctx.r4.s64 = ctx.r11.s64 + 30648;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-10488
	ctx.r30.s64 = ctx.r31.s64 + -10488;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,10544
	ctx.r4.s64 = ctx.r7.s64 + 10544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,30448
	ctx.r10.s64 = ctx.r10.s64 + 30448;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83389A3C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,30520
	ctx.r10.s64 = ctx.r10.s64 + 30520;
	// addi r9,r9,30640
	ctx.r9.s64 = ctx.r9.s64 + 30640;
	// stw r11,-10488(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10488, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,6840
	ctx.r3.s64 = ctx.r3.s64 + 6840;
	// bl 0x82cb0ae8
	ctx.lr = 0x83389A6C;
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

__attribute__((alias("__imp__sub_83389A84"))) PPC_WEAK_FUNC(sub_83389A84);
PPC_FUNC_IMPL(__imp__sub_83389A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83389A88"))) PPC_WEAK_FUNC(sub_83389A88);
PPC_FUNC_IMPL(__imp__sub_83389A88) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,31304
	ctx.r4.s64 = ctx.r11.s64 + 31304;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-10580
	ctx.r30.s64 = ctx.r31.s64 + -10580;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,10752
	ctx.r4.s64 = ctx.r7.s64 + 10752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,31104
	ctx.r10.s64 = ctx.r10.s64 + 31104;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83389AE4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,31176
	ctx.r10.s64 = ctx.r10.s64 + 31176;
	// addi r9,r9,31296
	ctx.r9.s64 = ctx.r9.s64 + 31296;
	// stw r11,-10580(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10580, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,6928
	ctx.r3.s64 = ctx.r3.s64 + 6928;
	// bl 0x82cb0ae8
	ctx.lr = 0x83389B14;
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

__attribute__((alias("__imp__sub_83389B2C"))) PPC_WEAK_FUNC(sub_83389B2C);
PPC_FUNC_IMPL(__imp__sub_83389B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83389B30"))) PPC_WEAK_FUNC(sub_83389B30);
PPC_FUNC_IMPL(__imp__sub_83389B30) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,31960
	ctx.r4.s64 = ctx.r11.s64 + 31960;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-10672
	ctx.r30.s64 = ctx.r31.s64 + -10672;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-7292
	ctx.r5.s64 = ctx.r8.s64 + -7292;
	// addi r4,r7,10960
	ctx.r4.s64 = ctx.r7.s64 + 10960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,31760
	ctx.r10.s64 = ctx.r10.s64 + 31760;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83389B8C;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,31832
	ctx.r10.s64 = ctx.r10.s64 + 31832;
	// addi r9,r9,31952
	ctx.r9.s64 = ctx.r9.s64 + 31952;
	// stw r11,-10672(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10672, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,7016
	ctx.r3.s64 = ctx.r3.s64 + 7016;
	// bl 0x82cb0ae8
	ctx.lr = 0x83389BBC;
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

__attribute__((alias("__imp__sub_83389BD4"))) PPC_WEAK_FUNC(sub_83389BD4);
PPC_FUNC_IMPL(__imp__sub_83389BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83389BD8"))) PPC_WEAK_FUNC(sub_83389BD8);
PPC_FUNC_IMPL(__imp__sub_83389BD8) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// addi r4,r11,32592
	ctx.r4.s64 = ctx.r11.s64 + 32592;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r30,r31,-10764
	ctx.r30.s64 = ctx.r31.s64 + -10764;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,-6308
	ctx.r5.s64 = ctx.r8.s64 + -6308;
	// addi r4,r7,11152
	ctx.r4.s64 = ctx.r7.s64 + 11152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,32416
	ctx.r10.s64 = ctx.r10.s64 + 32416;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83389C34;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,32488
	ctx.r10.s64 = ctx.r10.s64 + 32488;
	// addi r9,r9,32584
	ctx.r9.s64 = ctx.r9.s64 + 32584;
	// stw r11,-10764(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10764, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,7104
	ctx.r3.s64 = ctx.r3.s64 + 7104;
	// bl 0x82cb0ae8
	ctx.lr = 0x83389C64;
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

__attribute__((alias("__imp__sub_83389C7C"))) PPC_WEAK_FUNC(sub_83389C7C);
PPC_FUNC_IMPL(__imp__sub_83389C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83389C80"))) PPC_WEAK_FUNC(sub_83389C80);
PPC_FUNC_IMPL(__imp__sub_83389C80) {
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
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// addi r30,r31,-736
	ctx.r30.s64 = ctx.r31.s64 + -736;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,18592
	ctx.r5.s64 = ctx.r8.s64 + 18592;
	// addi r4,r7,18656
	ctx.r4.s64 = ctx.r7.s64 + 18656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-20520
	ctx.r10.s64 = ctx.r10.s64 + -20520;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83389CDC;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lis r9,-32120
	ctx.r9.s64 = -2105016320;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-20352
	ctx.r10.s64 = ctx.r10.s64 + -20352;
	// addi r9,r9,-20256
	ctx.r9.s64 = ctx.r9.s64 + -20256;
	// stw r11,-736(r31)
	PPC_STORE_U32(ctx.r31.u32 + -736, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,7480
	ctx.r3.s64 = ctx.r3.s64 + 7480;
	// bl 0x82cb0ae8
	ctx.lr = 0x83389D0C;
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

__attribute__((alias("__imp__sub_83389D24"))) PPC_WEAK_FUNC(sub_83389D24);
PPC_FUNC_IMPL(__imp__sub_83389D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83389D28"))) PPC_WEAK_FUNC(sub_83389D28);
PPC_FUNC_IMPL(__imp__sub_83389D28) {
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
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// addi r30,r31,-828
	ctx.r30.s64 = ctx.r31.s64 + -828;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,18772
	ctx.r5.s64 = ctx.r8.s64 + 18772;
	// addi r4,r7,18832
	ctx.r4.s64 = ctx.r7.s64 + 18832;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-20160
	ctx.r10.s64 = ctx.r10.s64 + -20160;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83389D84;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lis r9,-32120
	ctx.r9.s64 = -2105016320;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-20088
	ctx.r10.s64 = ctx.r10.s64 + -20088;
	// addi r9,r9,-19992
	ctx.r9.s64 = ctx.r9.s64 + -19992;
	// stw r11,-828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -828, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,7568
	ctx.r3.s64 = ctx.r3.s64 + 7568;
	// bl 0x82cb0ae8
	ctx.lr = 0x83389DB4;
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

__attribute__((alias("__imp__sub_83389DCC"))) PPC_WEAK_FUNC(sub_83389DCC);
PPC_FUNC_IMPL(__imp__sub_83389DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83389DD0"))) PPC_WEAK_FUNC(sub_83389DD0);
PPC_FUNC_IMPL(__imp__sub_83389DD0) {
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
	// addi r30,r31,-9296
	ctx.r30.s64 = ctx.r31.s64 + -9296;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,18948
	ctx.r5.s64 = ctx.r8.s64 + 18948;
	// addi r4,r7,19016
	ctx.r4.s64 = ctx.r7.s64 + 19016;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-25728
	ctx.r10.s64 = ctx.r10.s64 + -25728;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83389E2C;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lis r9,-32120
	ctx.r9.s64 = -2105016320;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-25568
	ctx.r10.s64 = ctx.r10.s64 + -25568;
	// addi r9,r9,-25472
	ctx.r9.s64 = ctx.r9.s64 + -25472;
	// stw r11,-9296(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9296, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,7656
	ctx.r3.s64 = ctx.r3.s64 + 7656;
	// bl 0x82cb0ae8
	ctx.lr = 0x83389E5C;
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

__attribute__((alias("__imp__sub_83389E74"))) PPC_WEAK_FUNC(sub_83389E74);
PPC_FUNC_IMPL(__imp__sub_83389E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83389E78"))) PPC_WEAK_FUNC(sub_83389E78);
PPC_FUNC_IMPL(__imp__sub_83389E78) {
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
	// addi r30,r31,-9204
	ctx.r30.s64 = ctx.r31.s64 + -9204;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,19088
	ctx.r5.s64 = ctx.r8.s64 + 19088;
	// addi r4,r7,19152
	ctx.r4.s64 = ctx.r7.s64 + 19152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-25008
	ctx.r10.s64 = ctx.r10.s64 + -25008;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82390d30
	ctx.lr = 0x83389ED4;
	sub_82390D30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lis r9,-32120
	ctx.r9.s64 = -2105016320;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// addi r10,r10,-24840
	ctx.r10.s64 = ctx.r10.s64 + -24840;
	// addi r9,r9,-24744
	ctx.r9.s64 = ctx.r9.s64 + -24744;
	// stw r11,-9204(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9204, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,7744
	ctx.r3.s64 = ctx.r3.s64 + 7744;
	// bl 0x82cb0ae8
	ctx.lr = 0x83389F04;
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

__attribute__((alias("__imp__sub_83389F1C"))) PPC_WEAK_FUNC(sub_83389F1C);
PPC_FUNC_IMPL(__imp__sub_83389F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83389F20"))) PPC_WEAK_FUNC(sub_83389F20);
PPC_FUNC_IMPL(__imp__sub_83389F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,7832
	ctx.r3.s64 = ctx.r11.s64 + 7832;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83389F2C"))) PPC_WEAK_FUNC(sub_83389F2C);
PPC_FUNC_IMPL(__imp__sub_83389F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83389F30"))) PPC_WEAK_FUNC(sub_83389F30);
PPC_FUNC_IMPL(__imp__sub_83389F30) {
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
	// addi r3,r11,-9112
	ctx.r3.s64 = ctx.r11.s64 + -9112;
	// bl 0x8287e5e8
	ctx.lr = 0x83389F48;
	sub_8287E5E8(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r3,r10,7920
	ctx.r3.s64 = ctx.r10.s64 + 7920;
	// bl 0x82cb0ae8
	ctx.lr = 0x83389F54;
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

__attribute__((alias("__imp__sub_83389F64"))) PPC_WEAK_FUNC(sub_83389F64);
PPC_FUNC_IMPL(__imp__sub_83389F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83389F68"))) PPC_WEAK_FUNC(sub_83389F68);
PPC_FUNC_IMPL(__imp__sub_83389F68) {
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
	// addi r30,r31,-8572
	ctx.r30.s64 = ctx.r31.s64 + -8572;
	// addi r6,r9,-4864
	ctx.r6.s64 = ctx.r9.s64 + -4864;
	// addi r5,r8,19764
	ctx.r5.s64 = ctx.r8.s64 + 19764;
	// addi r4,r7,19812
	ctx.r4.s64 = ctx.r7.s64 + 19812;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-3160
	ctx.r10.s64 = ctx.r10.s64 + -3160;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,439
	ctx.r8.s64 = 439;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82390d30
	ctx.lr = 0x83389FC4;
	sub_82390D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lis r9,-32120
	ctx.r9.s64 = -2105016320;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-2984
	ctx.r10.s64 = ctx.r10.s64 + -2984;
	// addi r9,r9,-2888
	ctx.r9.s64 = ctx.r9.s64 + -2888;
	// stw r11,-8572(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8572, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r3,8016
	ctx.r3.s64 = ctx.r3.s64 + 8016;
	// bl 0x82cb0ae8
	ctx.lr = 0x83389FF4;
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

__attribute__((alias("__imp__sub_8338A00C"))) PPC_WEAK_FUNC(sub_8338A00C);
PPC_FUNC_IMPL(__imp__sub_8338A00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

