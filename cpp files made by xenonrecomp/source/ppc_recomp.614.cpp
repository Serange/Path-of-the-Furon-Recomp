#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_833A63AC"))) PPC_WEAK_FUNC(sub_833A63AC);
PPC_FUNC_IMPL(__imp__sub_833A63AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A63B0"))) PPC_WEAK_FUNC(sub_833A63B0);
PPC_FUNC_IMPL(__imp__sub_833A63B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,22952
	ctx.r3.s64 = ctx.r11.s64 + 22952;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A63BC"))) PPC_WEAK_FUNC(sub_833A63BC);
PPC_FUNC_IMPL(__imp__sub_833A63BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A63C0"))) PPC_WEAK_FUNC(sub_833A63C0);
PPC_FUNC_IMPL(__imp__sub_833A63C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-29456
	ctx.r4.s64 = ctx.r11.s64 + -29456;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,2016
	ctx.r3.s64 = ctx.r10.s64 + 2016;
	// bl 0x82295680
	ctx.lr = 0x833A63E0;
	sub_82295680(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2016
	ctx.r8.s64 = ctx.r9.s64 + 2016;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r7,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r7.u32);
	// lis r6,-32223
	ctx.r6.s64 = -2111766528;
	// addi r4,r6,-29444
	ctx.r4.s64 = ctx.r6.s64 + -29444;
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// addi r3,r5,2016
	ctx.r3.s64 = ctx.r5.s64 + 2016;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82295680
	ctx.lr = 0x833A6408;
	sub_82295680(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,2016
	ctx.r10.s64 = ctx.r11.s64 + 2016;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// addi r4,r8,-29432
	ctx.r4.s64 = ctx.r8.s64 + -29432;
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2016
	ctx.r6.s64 = ctx.r7.s64 + 2016;
	// addi r3,r6,32
	ctx.r3.s64 = ctx.r6.s64 + 32;
	// bl 0x82295680
	ctx.lr = 0x833A6430;
	sub_82295680(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// addi r4,r5,2016
	ctx.r4.s64 = ctx.r5.s64 + 2016;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r3,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r3.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-29420
	ctx.r4.s64 = ctx.r11.s64 + -29420;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2016
	ctx.r9.s64 = ctx.r10.s64 + 2016;
	// addi r3,r9,48
	ctx.r3.s64 = ctx.r9.s64 + 48;
	// bl 0x82295680
	ctx.lr = 0x833A6458;
	sub_82295680(ctx, base);
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r7,r8,2016
	ctx.r7.s64 = ctx.r8.s64 + 2016;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r6,60(r7)
	PPC_STORE_U32(ctx.r7.u32 + 60, ctx.r6.u32);
	// lis r5,-31941
	ctx.r5.s64 = -2093285376;
	// addi r3,r5,22960
	ctx.r3.s64 = ctx.r5.s64 + 22960;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A6474;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6484"))) PPC_WEAK_FUNC(sub_833A6484);
PPC_FUNC_IMPL(__imp__sub_833A6484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A6488"))) PPC_WEAK_FUNC(sub_833A6488);
PPC_FUNC_IMPL(__imp__sub_833A6488) {
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
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r6,r11,22400
	ctx.r6.s64 = ctx.r11.s64 + 22400;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,12
	ctx.r4.s64 = 12;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,2080
	ctx.r3.s64 = ctx.r10.s64 + 2080;
	// bl 0x82298ff8
	ctx.lr = 0x833A64B0;
	sub_82298FF8(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,23056
	ctx.r3.s64 = ctx.r9.s64 + 23056;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A64BC;
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

__attribute__((alias("__imp__sub_833A64CC"))) PPC_WEAK_FUNC(sub_833A64CC);
PPC_FUNC_IMPL(__imp__sub_833A64CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A64D0"))) PPC_WEAK_FUNC(sub_833A64D0);
PPC_FUNC_IMPL(__imp__sub_833A64D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6608(r1)
	ea = -6608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-27360
	ctx.r4.s64 = ctx.r11.s64 + -27360;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,2464
	ctx.r3.s64 = ctx.r10.s64 + 2464;
	// bl 0x82295680
	ctx.lr = 0x833A64F4;
	sub_82295680(ctx, base);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r4,r9,-27380
	ctx.r4.s64 = ctx.r9.s64 + -27380;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r7,r8,2464
	ctx.r7.s64 = ctx.r8.s64 + 2464;
	// addi r3,r7,12
	ctx.r3.s64 = ctx.r7.s64 + 12;
	// bl 0x82295680
	ctx.lr = 0x833A650C;
	sub_82295680(ctx, base);
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,2464
	ctx.r5.s64 = ctx.r6.s64 + 2464;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r4,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r4.u32);
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r7.u32);
	// lis r6,-32223
	ctx.r6.s64 = -2111766528;
	// addi r4,r6,-27384
	ctx.r4.s64 = ctx.r6.s64 + -27384;
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// addi r3,r5,2464
	ctx.r3.s64 = ctx.r5.s64 + 2464;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// bl 0x82295680
	ctx.lr = 0x833A6554;
	sub_82295680(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-27404
	ctx.r4.s64 = ctx.r11.s64 + -27404;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// addi r3,r9,48
	ctx.r3.s64 = ctx.r9.s64 + 48;
	// bl 0x82295680
	ctx.lr = 0x833A656C;
	sub_82295680(ctx, base);
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r7,r8,2464
	ctx.r7.s64 = ctx.r8.s64 + 2464;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r6,60(r7)
	PPC_STORE_U32(ctx.r7.u32 + 60, ctx.r6.u32);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// addi r4,r5,2464
	ctx.r4.s64 = ctx.r5.s64 + 2464;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r3,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r3.u32);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,2464
	ctx.r10.s64 = ctx.r11.s64 + 2464;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r9.u32);
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// addi r4,r8,-27408
	ctx.r4.s64 = ctx.r8.s64 + -27408;
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// addi r3,r6,72
	ctx.r3.s64 = ctx.r6.s64 + 72;
	// bl 0x82295680
	ctx.lr = 0x833A65B4;
	sub_82295680(ctx, base);
	// lis r5,-32223
	ctx.r5.s64 = -2111766528;
	// addi r4,r5,-27432
	ctx.r4.s64 = ctx.r5.s64 + -27432;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x82295680
	ctx.lr = 0x833A65CC;
	sub_82295680(ctx, base);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, ctx.r8.u32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r5,100(r6)
	PPC_STORE_U32(ctx.r6.u32 + 100, ctx.r5.u32);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-27436
	ctx.r4.s64 = ctx.r10.s64 + -27436;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// addi r3,r8,108
	ctx.r3.s64 = ctx.r8.s64 + 108;
	// bl 0x82295680
	ctx.lr = 0x833A6614;
	sub_82295680(ctx, base);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// addi r4,r7,-27460
	ctx.r4.s64 = ctx.r7.s64 + -27460;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,2464
	ctx.r5.s64 = ctx.r6.s64 + 2464;
	// addi r3,r5,120
	ctx.r3.s64 = ctx.r5.s64 + 120;
	// bl 0x82295680
	ctx.lr = 0x833A662C;
	sub_82295680(ctx, base);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r8,136(r9)
	PPC_STORE_U32(ctx.r9.u32 + 136, ctx.r8.u32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,140(r6)
	PPC_STORE_U32(ctx.r6.u32 + 140, ctx.r5.u32);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// addi r4,r4,-27464
	ctx.r4.s64 = ctx.r4.s64 + -27464;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x82295680
	ctx.lr = 0x833A6674;
	sub_82295680(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-27484
	ctx.r4.s64 = ctx.r10.s64 + -27484;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// addi r3,r8,156
	ctx.r3.s64 = ctx.r8.s64 + 156;
	// bl 0x82295680
	ctx.lr = 0x833A668C;
	sub_82295680(ctx, base);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,168(r6)
	PPC_STORE_U32(ctx.r6.u32 + 168, ctx.r5.u32);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 176, ctx.r8.u32);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// addi r4,r7,-27488
	ctx.r4.s64 = ctx.r7.s64 + -27488;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,2464
	ctx.r5.s64 = ctx.r6.s64 + 2464;
	// addi r3,r5,180
	ctx.r3.s64 = ctx.r5.s64 + 180;
	// bl 0x82295680
	ctx.lr = 0x833A66D4;
	sub_82295680(ctx, base);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// addi r4,r4,-27508
	ctx.r4.s64 = ctx.r4.s64 + -27508;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// bl 0x82295680
	ctx.lr = 0x833A66EC;
	sub_82295680(ctx, base);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,204(r9)
	PPC_STORE_U32(ctx.r9.u32 + 204, ctx.r8.u32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r5,208(r6)
	PPC_STORE_U32(ctx.r6.u32 + 208, ctx.r5.u32);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-27512
	ctx.r4.s64 = ctx.r10.s64 + -27512;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// addi r3,r8,216
	ctx.r3.s64 = ctx.r8.s64 + 216;
	// bl 0x82295680
	ctx.lr = 0x833A6734;
	sub_82295680(ctx, base);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// addi r4,r7,-27536
	ctx.r4.s64 = ctx.r7.s64 + -27536;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,2464
	ctx.r5.s64 = ctx.r6.s64 + 2464;
	// addi r3,r5,228
	ctx.r3.s64 = ctx.r5.s64 + 228;
	// bl 0x82295680
	ctx.lr = 0x833A674C;
	sub_82295680(ctx, base);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,244(r9)
	PPC_STORE_U32(ctx.r9.u32 + 244, ctx.r8.u32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,248(r6)
	PPC_STORE_U32(ctx.r6.u32 + 248, ctx.r5.u32);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// addi r4,r4,-27540
	ctx.r4.s64 = ctx.r4.s64 + -27540;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// addi r3,r11,252
	ctx.r3.s64 = ctx.r11.s64 + 252;
	// bl 0x82295680
	ctx.lr = 0x833A6794;
	sub_82295680(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-27564
	ctx.r4.s64 = ctx.r10.s64 + -27564;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// addi r3,r8,264
	ctx.r3.s64 = ctx.r8.s64 + 264;
	// bl 0x82295680
	ctx.lr = 0x833A67AC;
	sub_82295680(ctx, base);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r5,276(r6)
	PPC_STORE_U32(ctx.r6.u32 + 276, ctx.r5.u32);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,284(r9)
	PPC_STORE_U32(ctx.r9.u32 + 284, ctx.r8.u32);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// addi r4,r7,-27568
	ctx.r4.s64 = ctx.r7.s64 + -27568;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,2464
	ctx.r5.s64 = ctx.r6.s64 + 2464;
	// addi r3,r5,288
	ctx.r3.s64 = ctx.r5.s64 + 288;
	// bl 0x82295680
	ctx.lr = 0x833A67F4;
	sub_82295680(ctx, base);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// addi r4,r4,-27576
	ctx.r4.s64 = ctx.r4.s64 + -27576;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// addi r3,r11,300
	ctx.r3.s64 = ctx.r11.s64 + 300;
	// bl 0x82295680
	ctx.lr = 0x833A680C;
	sub_82295680(ctx, base);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,312(r9)
	PPC_STORE_U32(ctx.r9.u32 + 312, ctx.r8.u32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,316(r6)
	PPC_STORE_U32(ctx.r6.u32 + 316, ctx.r5.u32);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-27580
	ctx.r4.s64 = ctx.r10.s64 + -27580;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// addi r3,r8,324
	ctx.r3.s64 = ctx.r8.s64 + 324;
	// bl 0x82295680
	ctx.lr = 0x833A6854;
	sub_82295680(ctx, base);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// addi r4,r7,-27596
	ctx.r4.s64 = ctx.r7.s64 + -27596;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,2464
	ctx.r5.s64 = ctx.r6.s64 + 2464;
	// addi r3,r5,336
	ctx.r3.s64 = ctx.r5.s64 + 336;
	// bl 0x82295680
	ctx.lr = 0x833A686C;
	sub_82295680(ctx, base);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,352(r9)
	PPC_STORE_U32(ctx.r9.u32 + 352, ctx.r8.u32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,356(r6)
	PPC_STORE_U32(ctx.r6.u32 + 356, ctx.r5.u32);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// addi r4,r4,-27600
	ctx.r4.s64 = ctx.r4.s64 + -27600;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// addi r3,r11,360
	ctx.r3.s64 = ctx.r11.s64 + 360;
	// bl 0x82295680
	ctx.lr = 0x833A68B4;
	sub_82295680(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-27620
	ctx.r4.s64 = ctx.r10.s64 + -27620;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// addi r3,r8,372
	ctx.r3.s64 = ctx.r8.s64 + 372;
	// bl 0x82295680
	ctx.lr = 0x833A68CC;
	sub_82295680(ctx, base);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,384(r6)
	PPC_STORE_U32(ctx.r6.u32 + 384, ctx.r5.u32);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,392(r9)
	PPC_STORE_U32(ctx.r9.u32 + 392, ctx.r8.u32);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// addi r4,r7,-27624
	ctx.r4.s64 = ctx.r7.s64 + -27624;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,2464
	ctx.r5.s64 = ctx.r6.s64 + 2464;
	// addi r3,r5,396
	ctx.r3.s64 = ctx.r5.s64 + 396;
	// bl 0x82295680
	ctx.lr = 0x833A6914;
	sub_82295680(ctx, base);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// addi r4,r4,-27644
	ctx.r4.s64 = ctx.r4.s64 + -27644;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// addi r3,r11,408
	ctx.r3.s64 = ctx.r11.s64 + 408;
	// bl 0x82295680
	ctx.lr = 0x833A692C;
	sub_82295680(ctx, base);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,420(r9)
	PPC_STORE_U32(ctx.r9.u32 + 420, ctx.r8.u32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r5,424(r6)
	PPC_STORE_U32(ctx.r6.u32 + 424, ctx.r5.u32);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r11.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-27648
	ctx.r4.s64 = ctx.r10.s64 + -27648;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// addi r3,r8,432
	ctx.r3.s64 = ctx.r8.s64 + 432;
	// bl 0x82295680
	ctx.lr = 0x833A6974;
	sub_82295680(ctx, base);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// addi r4,r7,-27672
	ctx.r4.s64 = ctx.r7.s64 + -27672;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,2464
	ctx.r5.s64 = ctx.r6.s64 + 2464;
	// addi r3,r5,444
	ctx.r3.s64 = ctx.r5.s64 + 444;
	// bl 0x82295680
	ctx.lr = 0x833A698C;
	sub_82295680(ctx, base);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 456, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r8,460(r9)
	PPC_STORE_U32(ctx.r9.u32 + 460, ctx.r8.u32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,464(r6)
	PPC_STORE_U32(ctx.r6.u32 + 464, ctx.r5.u32);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// addi r4,r4,-27676
	ctx.r4.s64 = ctx.r4.s64 + -27676;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// addi r3,r11,468
	ctx.r3.s64 = ctx.r11.s64 + 468;
	// bl 0x82295680
	ctx.lr = 0x833A69D4;
	sub_82295680(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-27696
	ctx.r4.s64 = ctx.r10.s64 + -27696;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// addi r3,r8,480
	ctx.r3.s64 = ctx.r8.s64 + 480;
	// bl 0x82295680
	ctx.lr = 0x833A69EC;
	sub_82295680(ctx, base);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,492(r6)
	PPC_STORE_U32(ctx.r6.u32 + 492, ctx.r5.u32);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r8,500(r9)
	PPC_STORE_U32(ctx.r9.u32 + 500, ctx.r8.u32);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// addi r4,r7,-27700
	ctx.r4.s64 = ctx.r7.s64 + -27700;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,2464
	ctx.r5.s64 = ctx.r6.s64 + 2464;
	// addi r3,r5,504
	ctx.r3.s64 = ctx.r5.s64 + 504;
	// bl 0x82295680
	ctx.lr = 0x833A6A34;
	sub_82295680(ctx, base);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// addi r4,r4,-27716
	ctx.r4.s64 = ctx.r4.s64 + -27716;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// addi r3,r11,516
	ctx.r3.s64 = ctx.r11.s64 + 516;
	// bl 0x82295680
	ctx.lr = 0x833A6A4C;
	sub_82295680(ctx, base);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,528(r9)
	PPC_STORE_U32(ctx.r9.u32 + 528, ctx.r8.u32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r5,532(r6)
	PPC_STORE_U32(ctx.r6.u32 + 532, ctx.r5.u32);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r11.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-27720
	ctx.r4.s64 = ctx.r10.s64 + -27720;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// addi r3,r8,540
	ctx.r3.s64 = ctx.r8.s64 + 540;
	// bl 0x82295680
	ctx.lr = 0x833A6A94;
	sub_82295680(ctx, base);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// addi r4,r7,-27744
	ctx.r4.s64 = ctx.r7.s64 + -27744;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r6,2464
	ctx.r5.s64 = ctx.r6.s64 + 2464;
	// addi r3,r5,552
	ctx.r3.s64 = ctx.r5.s64 + 552;
	// bl 0x82295680
	ctx.lr = 0x833A6AAC;
	sub_82295680(ctx, base);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 564, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r8,568(r9)
	PPC_STORE_U32(ctx.r9.u32 + 568, ctx.r8.u32);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,572(r6)
	PPC_STORE_U32(ctx.r6.u32 + 572, ctx.r5.u32);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// addi r4,r4,-27748
	ctx.r4.s64 = ctx.r4.s64 + -27748;
	// lis r3,-31882
	ctx.r3.s64 = -2089418752;
	// addi r11,r3,2464
	ctx.r11.s64 = ctx.r3.s64 + 2464;
	// addi r3,r11,576
	ctx.r3.s64 = ctx.r11.s64 + 576;
	// bl 0x82295680
	ctx.lr = 0x833A6AF4;
	sub_82295680(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-27764
	ctx.r4.s64 = ctx.r10.s64 + -27764;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r8,r9,2464
	ctx.r8.s64 = ctx.r9.s64 + 2464;
	// addi r3,r8,588
	ctx.r3.s64 = ctx.r8.s64 + 588;
	// bl 0x82295680
	ctx.lr = 0x833A6B0C;
	sub_82295680(ctx, base);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,2464
	ctx.r6.s64 = ctx.r7.s64 + 2464;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r5,600(r6)
	PPC_STORE_U32(ctx.r6.u32 + 600, ctx.r5.u32);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,2464
	ctx.r3.s64 = ctx.r4.s64 + 2464;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 604, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r10,2464
	ctx.r9.s64 = ctx.r10.s64 + 2464;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,608(r9)
	PPC_STORE_U32(ctx.r9.u32 + 608, ctx.r8.u32);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23112
	ctx.r3.s64 = ctx.r7.s64 + 23112;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A6B48;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,6608
	ctx.r1.s64 = ctx.r1.s64 + 6608;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6B58"))) PPC_WEAK_FUNC(sub_833A6B58);
PPC_FUNC_IMPL(__imp__sub_833A6B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-27356
	ctx.r4.s64 = ctx.r11.s64 + -27356;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,3076
	ctx.r3.s64 = ctx.r10.s64 + 3076;
	// bl 0x82295680
	ctx.lr = 0x833A6B78;
	sub_82295680(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,23168
	ctx.r3.s64 = ctx.r9.s64 + 23168;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A6B84;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6B94"))) PPC_WEAK_FUNC(sub_833A6B94);
PPC_FUNC_IMPL(__imp__sub_833A6B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A6B98"))) PPC_WEAK_FUNC(sub_833A6B98);
PPC_FUNC_IMPL(__imp__sub_833A6B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-27348
	ctx.r4.s64 = ctx.r11.s64 + -27348;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,3088
	ctx.r3.s64 = ctx.r10.s64 + 3088;
	// bl 0x82295680
	ctx.lr = 0x833A6BB8;
	sub_82295680(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,23208
	ctx.r3.s64 = ctx.r9.s64 + 23208;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A6BC4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6BD4"))) PPC_WEAK_FUNC(sub_833A6BD4);
PPC_FUNC_IMPL(__imp__sub_833A6BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A6BD8"))) PPC_WEAK_FUNC(sub_833A6BD8);
PPC_FUNC_IMPL(__imp__sub_833A6BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-27340
	ctx.r4.s64 = ctx.r11.s64 + -27340;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,3100
	ctx.r3.s64 = ctx.r10.s64 + 3100;
	// bl 0x82295680
	ctx.lr = 0x833A6BF8;
	sub_82295680(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,23248
	ctx.r3.s64 = ctx.r9.s64 + 23248;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A6C04;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6C14"))) PPC_WEAK_FUNC(sub_833A6C14);
PPC_FUNC_IMPL(__imp__sub_833A6C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A6C18"))) PPC_WEAK_FUNC(sub_833A6C18);
PPC_FUNC_IMPL(__imp__sub_833A6C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-27332
	ctx.r4.s64 = ctx.r11.s64 + -27332;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,3112
	ctx.r3.s64 = ctx.r10.s64 + 3112;
	// bl 0x82295680
	ctx.lr = 0x833A6C38;
	sub_82295680(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,23288
	ctx.r3.s64 = ctx.r9.s64 + 23288;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A6C44;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6C54"))) PPC_WEAK_FUNC(sub_833A6C54);
PPC_FUNC_IMPL(__imp__sub_833A6C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A6C58"))) PPC_WEAK_FUNC(sub_833A6C58);
PPC_FUNC_IMPL(__imp__sub_833A6C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-27320
	ctx.r4.s64 = ctx.r11.s64 + -27320;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,3124
	ctx.r3.s64 = ctx.r10.s64 + 3124;
	// bl 0x82295680
	ctx.lr = 0x833A6C78;
	sub_82295680(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,23328
	ctx.r3.s64 = ctx.r9.s64 + 23328;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A6C84;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6C94"))) PPC_WEAK_FUNC(sub_833A6C94);
PPC_FUNC_IMPL(__imp__sub_833A6C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A6C98"))) PPC_WEAK_FUNC(sub_833A6C98);
PPC_FUNC_IMPL(__imp__sub_833A6C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-27312
	ctx.r4.s64 = ctx.r11.s64 + -27312;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,3136
	ctx.r3.s64 = ctx.r10.s64 + 3136;
	// bl 0x82295680
	ctx.lr = 0x833A6CB8;
	sub_82295680(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,23368
	ctx.r3.s64 = ctx.r9.s64 + 23368;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A6CC4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6CD4"))) PPC_WEAK_FUNC(sub_833A6CD4);
PPC_FUNC_IMPL(__imp__sub_833A6CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A6CD8"))) PPC_WEAK_FUNC(sub_833A6CD8);
PPC_FUNC_IMPL(__imp__sub_833A6CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r11,-18064
	ctx.r9.s64 = ctx.r11.s64 + -18064;
	// addi r8,r10,3184
	ctx.r8.s64 = ctx.r10.s64 + 3184;
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6CF4"))) PPC_WEAK_FUNC(sub_833A6CF4);
PPC_FUNC_IMPL(__imp__sub_833A6CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A6CF8"))) PPC_WEAK_FUNC(sub_833A6CF8);
PPC_FUNC_IMPL(__imp__sub_833A6CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,3232
	ctx.r9.s64 = ctx.r11.s64 + 3232;
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

__attribute__((alias("__imp__sub_833A6D28"))) PPC_WEAK_FUNC(sub_833A6D28);
PPC_FUNC_IMPL(__imp__sub_833A6D28) {
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
	// addi r5,r11,3248
	ctx.r5.s64 = ctx.r11.s64 + 3248;
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

__attribute__((alias("__imp__sub_833A6D70"))) PPC_WEAK_FUNC(sub_833A6D70);
PPC_FUNC_IMPL(__imp__sub_833A6D70) {
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
	// addi r5,r11,3200
	ctx.r5.s64 = ctx.r11.s64 + 3200;
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

__attribute__((alias("__imp__sub_833A6DB8"))) PPC_WEAK_FUNC(sub_833A6DB8);
PPC_FUNC_IMPL(__imp__sub_833A6DB8) {
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
loc_833A6DE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a6de8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A6DE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6DF8"))) PPC_WEAK_FUNC(sub_833A6DF8);
PPC_FUNC_IMPL(__imp__sub_833A6DF8) {
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
loc_833A6E28:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a6e28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A6E28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6E38"))) PPC_WEAK_FUNC(sub_833A6E38);
PPC_FUNC_IMPL(__imp__sub_833A6E38) {
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
loc_833A6E68:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a6e68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A6E68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6E78"))) PPC_WEAK_FUNC(sub_833A6E78);
PPC_FUNC_IMPL(__imp__sub_833A6E78) {
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
loc_833A6EA8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a6ea8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A6EA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6EB8"))) PPC_WEAK_FUNC(sub_833A6EB8);
PPC_FUNC_IMPL(__imp__sub_833A6EB8) {
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
loc_833A6EE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a6ee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A6EE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6EF8"))) PPC_WEAK_FUNC(sub_833A6EF8);
PPC_FUNC_IMPL(__imp__sub_833A6EF8) {
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
loc_833A6F28:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a6f28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A6F28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6F38"))) PPC_WEAK_FUNC(sub_833A6F38);
PPC_FUNC_IMPL(__imp__sub_833A6F38) {
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
loc_833A6F68:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a6f68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A6F68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6F78"))) PPC_WEAK_FUNC(sub_833A6F78);
PPC_FUNC_IMPL(__imp__sub_833A6F78) {
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
loc_833A6FA8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a6fa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A6FA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6FB8"))) PPC_WEAK_FUNC(sub_833A6FB8);
PPC_FUNC_IMPL(__imp__sub_833A6FB8) {
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
loc_833A6FE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a6fe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A6FE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A6FF8"))) PPC_WEAK_FUNC(sub_833A6FF8);
PPC_FUNC_IMPL(__imp__sub_833A6FF8) {
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
loc_833A7028:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7028
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7028;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7038"))) PPC_WEAK_FUNC(sub_833A7038);
PPC_FUNC_IMPL(__imp__sub_833A7038) {
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
loc_833A7068:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7068
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7068;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7078"))) PPC_WEAK_FUNC(sub_833A7078);
PPC_FUNC_IMPL(__imp__sub_833A7078) {
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
loc_833A70A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a70a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A70A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A70B8"))) PPC_WEAK_FUNC(sub_833A70B8);
PPC_FUNC_IMPL(__imp__sub_833A70B8) {
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
loc_833A70E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a70e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A70E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A70F8"))) PPC_WEAK_FUNC(sub_833A70F8);
PPC_FUNC_IMPL(__imp__sub_833A70F8) {
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
loc_833A7128:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7128
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7138"))) PPC_WEAK_FUNC(sub_833A7138);
PPC_FUNC_IMPL(__imp__sub_833A7138) {
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
loc_833A7168:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7168
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7168;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7178"))) PPC_WEAK_FUNC(sub_833A7178);
PPC_FUNC_IMPL(__imp__sub_833A7178) {
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
loc_833A71A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a71a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A71A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A71B8"))) PPC_WEAK_FUNC(sub_833A71B8);
PPC_FUNC_IMPL(__imp__sub_833A71B8) {
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
loc_833A71E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a71e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A71E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A71F8"))) PPC_WEAK_FUNC(sub_833A71F8);
PPC_FUNC_IMPL(__imp__sub_833A71F8) {
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
loc_833A7228:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7228;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7238"))) PPC_WEAK_FUNC(sub_833A7238);
PPC_FUNC_IMPL(__imp__sub_833A7238) {
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
loc_833A7268:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7268
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7268;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7278"))) PPC_WEAK_FUNC(sub_833A7278);
PPC_FUNC_IMPL(__imp__sub_833A7278) {
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
loc_833A72A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a72a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A72A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A72B8"))) PPC_WEAK_FUNC(sub_833A72B8);
PPC_FUNC_IMPL(__imp__sub_833A72B8) {
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
loc_833A72E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a72e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A72E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A72F8"))) PPC_WEAK_FUNC(sub_833A72F8);
PPC_FUNC_IMPL(__imp__sub_833A72F8) {
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
loc_833A7328:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7328
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7328;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7338"))) PPC_WEAK_FUNC(sub_833A7338);
PPC_FUNC_IMPL(__imp__sub_833A7338) {
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
loc_833A7368:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7368
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7368;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7378"))) PPC_WEAK_FUNC(sub_833A7378);
PPC_FUNC_IMPL(__imp__sub_833A7378) {
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
loc_833A73A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a73a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A73A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A73B8"))) PPC_WEAK_FUNC(sub_833A73B8);
PPC_FUNC_IMPL(__imp__sub_833A73B8) {
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
loc_833A73E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a73e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A73E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A73F8"))) PPC_WEAK_FUNC(sub_833A73F8);
PPC_FUNC_IMPL(__imp__sub_833A73F8) {
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
loc_833A7428:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7428
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7428;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7438"))) PPC_WEAK_FUNC(sub_833A7438);
PPC_FUNC_IMPL(__imp__sub_833A7438) {
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
loc_833A7468:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7468;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7478"))) PPC_WEAK_FUNC(sub_833A7478);
PPC_FUNC_IMPL(__imp__sub_833A7478) {
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
loc_833A74A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a74a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A74A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A74B8"))) PPC_WEAK_FUNC(sub_833A74B8);
PPC_FUNC_IMPL(__imp__sub_833A74B8) {
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
loc_833A74E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a74e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A74E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A74F8"))) PPC_WEAK_FUNC(sub_833A74F8);
PPC_FUNC_IMPL(__imp__sub_833A74F8) {
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
loc_833A7528:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7528;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7538"))) PPC_WEAK_FUNC(sub_833A7538);
PPC_FUNC_IMPL(__imp__sub_833A7538) {
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
loc_833A7568:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7568
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7578"))) PPC_WEAK_FUNC(sub_833A7578);
PPC_FUNC_IMPL(__imp__sub_833A7578) {
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
loc_833A75A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a75a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A75A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A75B8"))) PPC_WEAK_FUNC(sub_833A75B8);
PPC_FUNC_IMPL(__imp__sub_833A75B8) {
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
loc_833A75E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a75e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A75E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A75F8"))) PPC_WEAK_FUNC(sub_833A75F8);
PPC_FUNC_IMPL(__imp__sub_833A75F8) {
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
loc_833A7628:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7628
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7628;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7638"))) PPC_WEAK_FUNC(sub_833A7638);
PPC_FUNC_IMPL(__imp__sub_833A7638) {
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
loc_833A7668:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7668
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7668;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7678"))) PPC_WEAK_FUNC(sub_833A7678);
PPC_FUNC_IMPL(__imp__sub_833A7678) {
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
loc_833A76A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a76a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A76A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A76B8"))) PPC_WEAK_FUNC(sub_833A76B8);
PPC_FUNC_IMPL(__imp__sub_833A76B8) {
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
loc_833A76E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a76e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A76E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A76F8"))) PPC_WEAK_FUNC(sub_833A76F8);
PPC_FUNC_IMPL(__imp__sub_833A76F8) {
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
loc_833A7728:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7728
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7728;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7738"))) PPC_WEAK_FUNC(sub_833A7738);
PPC_FUNC_IMPL(__imp__sub_833A7738) {
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
loc_833A7768:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7768
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7778"))) PPC_WEAK_FUNC(sub_833A7778);
PPC_FUNC_IMPL(__imp__sub_833A7778) {
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
loc_833A77A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a77a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A77A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A77B8"))) PPC_WEAK_FUNC(sub_833A77B8);
PPC_FUNC_IMPL(__imp__sub_833A77B8) {
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
loc_833A77E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a77e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A77E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A77F8"))) PPC_WEAK_FUNC(sub_833A77F8);
PPC_FUNC_IMPL(__imp__sub_833A77F8) {
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
loc_833A7828:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7828;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7838"))) PPC_WEAK_FUNC(sub_833A7838);
PPC_FUNC_IMPL(__imp__sub_833A7838) {
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
loc_833A7868:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7868
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7868;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7878"))) PPC_WEAK_FUNC(sub_833A7878);
PPC_FUNC_IMPL(__imp__sub_833A7878) {
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
loc_833A78A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a78a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A78A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A78B8"))) PPC_WEAK_FUNC(sub_833A78B8);
PPC_FUNC_IMPL(__imp__sub_833A78B8) {
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
loc_833A78E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a78e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A78E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A78F8"))) PPC_WEAK_FUNC(sub_833A78F8);
PPC_FUNC_IMPL(__imp__sub_833A78F8) {
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
loc_833A7928:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7938"))) PPC_WEAK_FUNC(sub_833A7938);
PPC_FUNC_IMPL(__imp__sub_833A7938) {
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
loc_833A7968:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7968
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7968;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7978"))) PPC_WEAK_FUNC(sub_833A7978);
PPC_FUNC_IMPL(__imp__sub_833A7978) {
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
loc_833A79A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a79a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A79A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A79B8"))) PPC_WEAK_FUNC(sub_833A79B8);
PPC_FUNC_IMPL(__imp__sub_833A79B8) {
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
loc_833A79E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a79e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A79E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A79F8"))) PPC_WEAK_FUNC(sub_833A79F8);
PPC_FUNC_IMPL(__imp__sub_833A79F8) {
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
loc_833A7A28:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7a28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7A28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7A38"))) PPC_WEAK_FUNC(sub_833A7A38);
PPC_FUNC_IMPL(__imp__sub_833A7A38) {
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
	// bne cr6,0x833a7a78
	if (!ctx.cr6.eq) goto loc_833A7A78;
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
loc_833A7A6C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7a6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7A6C;
loc_833A7A78:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,8000(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8000);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833a7aa8
	if (ctx.cr6.eq) goto loc_833A7AA8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,2000
	ctx.r11.s64 = 2000;
	// lwz r10,-2168(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2168);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,8000(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8000, ctx.r10.u32);
	// blr 
	return;
loc_833A7AA8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,-2168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2168);
	// stw r11,8000(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8000, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7AB8"))) PPC_WEAK_FUNC(sub_833A7AB8);
PPC_FUNC_IMPL(__imp__sub_833A7AB8) {
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
	// bne cr6,0x833a7af8
	if (!ctx.cr6.eq) goto loc_833A7AF8;
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
loc_833A7AEC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7aec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7AEC;
loc_833A7AF8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,8004(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8004);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833a7b28
	if (ctx.cr6.eq) goto loc_833A7B28;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,2001
	ctx.r11.s64 = 2001;
	// lwz r10,-2164(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2164);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,8004(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8004, ctx.r10.u32);
	// blr 
	return;
loc_833A7B28:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,-2164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2164);
	// stw r11,8004(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8004, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7B38"))) PPC_WEAK_FUNC(sub_833A7B38);
PPC_FUNC_IMPL(__imp__sub_833A7B38) {
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
	// bne cr6,0x833a7b78
	if (!ctx.cr6.eq) goto loc_833A7B78;
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
loc_833A7B6C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7b6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7B6C;
loc_833A7B78:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,8008(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8008);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833a7ba8
	if (ctx.cr6.eq) goto loc_833A7BA8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,2002
	ctx.r11.s64 = 2002;
	// lwz r10,-2160(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2160);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,8008(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8008, ctx.r10.u32);
	// blr 
	return;
loc_833A7BA8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,-2160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2160);
	// stw r11,8008(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8008, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7BB8"))) PPC_WEAK_FUNC(sub_833A7BB8);
PPC_FUNC_IMPL(__imp__sub_833A7BB8) {
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
	// bne cr6,0x833a7bf8
	if (!ctx.cr6.eq) goto loc_833A7BF8;
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
loc_833A7BEC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7bec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7BEC;
loc_833A7BF8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,8012(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8012);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833a7c28
	if (ctx.cr6.eq) goto loc_833A7C28;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,2003
	ctx.r11.s64 = 2003;
	// lwz r10,-2156(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2156);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,8012(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8012, ctx.r10.u32);
	// blr 
	return;
loc_833A7C28:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,-2156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2156);
	// stw r11,8012(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8012, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7C38"))) PPC_WEAK_FUNC(sub_833A7C38);
PPC_FUNC_IMPL(__imp__sub_833A7C38) {
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
	// bne cr6,0x833a7c78
	if (!ctx.cr6.eq) goto loc_833A7C78;
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
loc_833A7C6C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7c6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7C6C;
loc_833A7C78:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,8016(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8016);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833a7ca8
	if (ctx.cr6.eq) goto loc_833A7CA8;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,2004
	ctx.r11.s64 = 2004;
	// lwz r10,-2152(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2152);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,8016(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8016, ctx.r10.u32);
	// blr 
	return;
loc_833A7CA8:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,-2152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2152);
	// stw r11,8016(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8016, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7CB8"))) PPC_WEAK_FUNC(sub_833A7CB8);
PPC_FUNC_IMPL(__imp__sub_833A7CB8) {
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
	// bne cr6,0x833a7cf8
	if (!ctx.cr6.eq) goto loc_833A7CF8;
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
loc_833A7CEC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833a7cec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833A7CEC;
loc_833A7CF8:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,8020(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8020);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x833a7d28
	if (ctx.cr6.eq) goto loc_833A7D28;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,2005
	ctx.r11.s64 = 2005;
	// lwz r10,-2148(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2148);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,8020(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8020, ctx.r10.u32);
	// blr 
	return;
loc_833A7D28:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,-2148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2148);
	// stw r11,8020(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8020, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A7D38"))) PPC_WEAK_FUNC(sub_833A7D38);
PPC_FUNC_IMPL(__imp__sub_833A7D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,23432
	ctx.r3.s64 = ctx.r11.s64 + 23432;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A7D44"))) PPC_WEAK_FUNC(sub_833A7D44);
PPC_FUNC_IMPL(__imp__sub_833A7D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A7D48"))) PPC_WEAK_FUNC(sub_833A7D48);
PPC_FUNC_IMPL(__imp__sub_833A7D48) {
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
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,30448
	ctx.r6.s64 = ctx.r11.s64 + 30448;
	// addi r4,r9,28652
	ctx.r4.s64 = ctx.r9.s64 + 28652;
	// addi r3,r8,3292
	ctx.r3.s64 = ctx.r8.s64 + 3292;
	// addi r5,r10,-19752
	ctx.r5.s64 = ctx.r10.s64 + -19752;
	// bl 0x82c484a0
	ctx.lr = 0x833A7D78;
	sub_82C484A0(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23448
	ctx.r3.s64 = ctx.r7.s64 + 23448;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A7D84;
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

__attribute__((alias("__imp__sub_833A7D94"))) PPC_WEAK_FUNC(sub_833A7D94);
PPC_FUNC_IMPL(__imp__sub_833A7D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A7D98"))) PPC_WEAK_FUNC(sub_833A7D98);
PPC_FUNC_IMPL(__imp__sub_833A7D98) {
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
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,15432
	ctx.r6.s64 = ctx.r11.s64 + 15432;
	// addi r4,r9,28772
	ctx.r4.s64 = ctx.r9.s64 + 28772;
	// addi r3,r8,3568
	ctx.r3.s64 = ctx.r8.s64 + 3568;
	// addi r5,r10,-18504
	ctx.r5.s64 = ctx.r10.s64 + -18504;
	// bl 0x82c38e48
	ctx.lr = 0x833A7DC8;
	sub_82C38E48(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23472
	ctx.r3.s64 = ctx.r7.s64 + 23472;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A7DD4;
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

__attribute__((alias("__imp__sub_833A7DE4"))) PPC_WEAK_FUNC(sub_833A7DE4);
PPC_FUNC_IMPL(__imp__sub_833A7DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A7DE8"))) PPC_WEAK_FUNC(sub_833A7DE8);
PPC_FUNC_IMPL(__imp__sub_833A7DE8) {
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
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,15708
	ctx.r6.s64 = ctx.r11.s64 + 15708;
	// addi r4,r9,28788
	ctx.r4.s64 = ctx.r9.s64 + 28788;
	// addi r3,r8,3844
	ctx.r3.s64 = ctx.r8.s64 + 3844;
	// addi r5,r10,-17944
	ctx.r5.s64 = ctx.r10.s64 + -17944;
	// bl 0x82c38e48
	ctx.lr = 0x833A7E18;
	sub_82C38E48(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23496
	ctx.r3.s64 = ctx.r7.s64 + 23496;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A7E24;
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

__attribute__((alias("__imp__sub_833A7E34"))) PPC_WEAK_FUNC(sub_833A7E34);
PPC_FUNC_IMPL(__imp__sub_833A7E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A7E38"))) PPC_WEAK_FUNC(sub_833A7E38);
PPC_FUNC_IMPL(__imp__sub_833A7E38) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,28960
	ctx.r4.s64 = ctx.r10.s64 + 28960;
	// addi r3,r9,4120
	ctx.r3.s64 = ctx.r9.s64 + 4120;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-16480
	ctx.r5.s64 = ctx.r11.s64 + -16480;
	// bl 0x82c4a3c0
	ctx.lr = 0x833A7E64;
	sub_82C4A3C0(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,23520
	ctx.r3.s64 = ctx.r8.s64 + 23520;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A7E70;
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

__attribute__((alias("__imp__sub_833A7E80"))) PPC_WEAK_FUNC(sub_833A7E80);
PPC_FUNC_IMPL(__imp__sub_833A7E80) {
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
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,15432
	ctx.r6.s64 = ctx.r11.s64 + 15432;
	// addi r4,r9,29080
	ctx.r4.s64 = ctx.r9.s64 + 29080;
	// addi r3,r8,4396
	ctx.r3.s64 = ctx.r8.s64 + 4396;
	// addi r5,r10,-13672
	ctx.r5.s64 = ctx.r10.s64 + -13672;
	// bl 0x82c38e48
	ctx.lr = 0x833A7EB0;
	sub_82C38E48(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23544
	ctx.r3.s64 = ctx.r7.s64 + 23544;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A7EBC;
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

__attribute__((alias("__imp__sub_833A7ECC"))) PPC_WEAK_FUNC(sub_833A7ECC);
PPC_FUNC_IMPL(__imp__sub_833A7ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A7ED0"))) PPC_WEAK_FUNC(sub_833A7ED0);
PPC_FUNC_IMPL(__imp__sub_833A7ED0) {
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
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,15708
	ctx.r6.s64 = ctx.r11.s64 + 15708;
	// addi r4,r9,29104
	ctx.r4.s64 = ctx.r9.s64 + 29104;
	// addi r3,r8,4672
	ctx.r3.s64 = ctx.r8.s64 + 4672;
	// addi r5,r10,-13576
	ctx.r5.s64 = ctx.r10.s64 + -13576;
	// bl 0x82c38e48
	ctx.lr = 0x833A7F00;
	sub_82C38E48(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23568
	ctx.r3.s64 = ctx.r7.s64 + 23568;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A7F0C;
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

__attribute__((alias("__imp__sub_833A7F1C"))) PPC_WEAK_FUNC(sub_833A7F1C);
PPC_FUNC_IMPL(__imp__sub_833A7F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A7F20"))) PPC_WEAK_FUNC(sub_833A7F20);
PPC_FUNC_IMPL(__imp__sub_833A7F20) {
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
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,9920
	ctx.r6.s64 = ctx.r11.s64 + 9920;
	// addi r4,r9,29284
	ctx.r4.s64 = ctx.r9.s64 + 29284;
	// addi r3,r8,4948
	ctx.r3.s64 = ctx.r8.s64 + 4948;
	// addi r5,r10,-11600
	ctx.r5.s64 = ctx.r10.s64 + -11600;
	// bl 0x82c38e48
	ctx.lr = 0x833A7F50;
	sub_82C38E48(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23592
	ctx.r3.s64 = ctx.r7.s64 + 23592;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A7F5C;
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

__attribute__((alias("__imp__sub_833A7F6C"))) PPC_WEAK_FUNC(sub_833A7F6C);
PPC_FUNC_IMPL(__imp__sub_833A7F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A7F70"))) PPC_WEAK_FUNC(sub_833A7F70);
PPC_FUNC_IMPL(__imp__sub_833A7F70) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,29308
	ctx.r4.s64 = ctx.r10.s64 + 29308;
	// addi r3,r9,5224
	ctx.r3.s64 = ctx.r9.s64 + 5224;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11512
	ctx.r5.s64 = ctx.r11.s64 + -11512;
	// bl 0x82c38e48
	ctx.lr = 0x833A7F9C;
	sub_82C38E48(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,23616
	ctx.r3.s64 = ctx.r8.s64 + 23616;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A7FA8;
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

__attribute__((alias("__imp__sub_833A7FB8"))) PPC_WEAK_FUNC(sub_833A7FB8);
PPC_FUNC_IMPL(__imp__sub_833A7FB8) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,29396
	ctx.r4.s64 = ctx.r10.s64 + 29396;
	// addi r3,r9,5500
	ctx.r3.s64 = ctx.r9.s64 + 5500;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-8096
	ctx.r5.s64 = ctx.r11.s64 + -8096;
	// bl 0x82c38ed8
	ctx.lr = 0x833A7FE4;
	sub_82C38ED8(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,23640
	ctx.r3.s64 = ctx.r8.s64 + 23640;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A7FF0;
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

__attribute__((alias("__imp__sub_833A8000"))) PPC_WEAK_FUNC(sub_833A8000);
PPC_FUNC_IMPL(__imp__sub_833A8000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,23664
	ctx.r3.s64 = ctx.r11.s64 + 23664;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A800C"))) PPC_WEAK_FUNC(sub_833A800C);
PPC_FUNC_IMPL(__imp__sub_833A800C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8010"))) PPC_WEAK_FUNC(sub_833A8010);
PPC_FUNC_IMPL(__imp__sub_833A8010) {
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
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,8540
	ctx.r6.s64 = ctx.r11.s64 + 8540;
	// addi r4,r9,29484
	ctx.r4.s64 = ctx.r9.s64 + 29484;
	// addi r3,r8,5776
	ctx.r3.s64 = ctx.r8.s64 + 5776;
	// addi r5,r10,-5248
	ctx.r5.s64 = ctx.r10.s64 + -5248;
	// bl 0x82c4d7b8
	ctx.lr = 0x833A8040;
	sub_82C4D7B8(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23688
	ctx.r3.s64 = ctx.r7.s64 + 23688;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A804C;
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

__attribute__((alias("__imp__sub_833A805C"))) PPC_WEAK_FUNC(sub_833A805C);
PPC_FUNC_IMPL(__imp__sub_833A805C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8060"))) PPC_WEAK_FUNC(sub_833A8060);
PPC_FUNC_IMPL(__imp__sub_833A8060) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,29588
	ctx.r4.s64 = ctx.r10.s64 + 29588;
	// addi r3,r9,6052
	ctx.r3.s64 = ctx.r9.s64 + 6052;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,2560
	ctx.r5.s64 = ctx.r11.s64 + 2560;
	// bl 0x82c50c58
	ctx.lr = 0x833A808C;
	sub_82C50C58(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,23712
	ctx.r3.s64 = ctx.r8.s64 + 23712;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8098;
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

__attribute__((alias("__imp__sub_833A80A8"))) PPC_WEAK_FUNC(sub_833A80A8);
PPC_FUNC_IMPL(__imp__sub_833A80A8) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,5820
	ctx.r6.s64 = ctx.r11.s64 + 5820;
	// addi r4,r9,29708
	ctx.r4.s64 = ctx.r9.s64 + 29708;
	// addi r3,r8,6328
	ctx.r3.s64 = ctx.r8.s64 + 6328;
	// addi r5,r10,4760
	ctx.r5.s64 = ctx.r10.s64 + 4760;
	// bl 0x82c51d50
	ctx.lr = 0x833A80D8;
	sub_82C51D50(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23736
	ctx.r3.s64 = ctx.r7.s64 + 23736;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A80E4;
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

__attribute__((alias("__imp__sub_833A80F4"))) PPC_WEAK_FUNC(sub_833A80F4);
PPC_FUNC_IMPL(__imp__sub_833A80F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A80F8"))) PPC_WEAK_FUNC(sub_833A80F8);
PPC_FUNC_IMPL(__imp__sub_833A80F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lwz r11,28104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833a8124
	if (ctx.cr6.eq) goto loc_833A8124;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lfs f0,31900(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31900);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,6604(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 6604, temp.u32);
	// blr 
	return;
loc_833A8124:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r11,31900
	ctx.r9.s64 = ctx.r11.s64 + 31900;
	// lfs f13,31900(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31900);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1192(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1192);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,6604(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6604, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8144"))) PPC_WEAK_FUNC(sub_833A8144);
PPC_FUNC_IMPL(__imp__sub_833A8144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8148"))) PPC_WEAK_FUNC(sub_833A8148);
PPC_FUNC_IMPL(__imp__sub_833A8148) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,29824
	ctx.r4.s64 = ctx.r10.s64 + 29824;
	// addi r3,r9,6608
	ctx.r3.s64 = ctx.r9.s64 + 6608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,9432
	ctx.r5.s64 = ctx.r11.s64 + 9432;
	// bl 0x82c484a0
	ctx.lr = 0x833A8174;
	sub_82C484A0(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,23760
	ctx.r3.s64 = ctx.r8.s64 + 23760;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8180;
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

__attribute__((alias("__imp__sub_833A8190"))) PPC_WEAK_FUNC(sub_833A8190);
PPC_FUNC_IMPL(__imp__sub_833A8190) {
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
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,8540
	ctx.r6.s64 = ctx.r11.s64 + 8540;
	// addi r4,r9,29948
	ctx.r4.s64 = ctx.r9.s64 + 29948;
	// addi r3,r8,6884
	ctx.r3.s64 = ctx.r8.s64 + 6884;
	// addi r5,r10,10488
	ctx.r5.s64 = ctx.r10.s64 + 10488;
	// bl 0x82c4d7b8
	ctx.lr = 0x833A81C0;
	sub_82C4D7B8(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23784
	ctx.r3.s64 = ctx.r7.s64 + 23784;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A81CC;
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

__attribute__((alias("__imp__sub_833A81DC"))) PPC_WEAK_FUNC(sub_833A81DC);
PPC_FUNC_IMPL(__imp__sub_833A81DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A81E0"))) PPC_WEAK_FUNC(sub_833A81E0);
PPC_FUNC_IMPL(__imp__sub_833A81E0) {
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
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r3,r8,7160
	ctx.r3.s64 = ctx.r8.s64 + 7160;
	// addi r6,r11,14880
	ctx.r6.s64 = ctx.r11.s64 + 14880;
	// addi r4,r9,30056
	ctx.r4.s64 = ctx.r9.s64 + 30056;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,18456
	ctx.r5.s64 = ctx.r10.s64 + 18456;
	// bl 0x82c34238
	ctx.lr = 0x833A8218;
	sub_82C34238(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23808
	ctx.r3.s64 = ctx.r7.s64 + 23808;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8224;
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

__attribute__((alias("__imp__sub_833A8234"))) PPC_WEAK_FUNC(sub_833A8234);
PPC_FUNC_IMPL(__imp__sub_833A8234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8238"))) PPC_WEAK_FUNC(sub_833A8238);
PPC_FUNC_IMPL(__imp__sub_833A8238) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,30080
	ctx.r4.s64 = ctx.r10.s64 + 30080;
	// addi r3,r9,7436
	ctx.r3.s64 = ctx.r9.s64 + 7436;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,18560
	ctx.r5.s64 = ctx.r11.s64 + 18560;
	// bl 0x82c55768
	ctx.lr = 0x833A8264;
	sub_82C55768(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,23832
	ctx.r3.s64 = ctx.r8.s64 + 23832;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8270;
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

__attribute__((alias("__imp__sub_833A8280"))) PPC_WEAK_FUNC(sub_833A8280);
PPC_FUNC_IMPL(__imp__sub_833A8280) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,30252
	ctx.r4.s64 = ctx.r10.s64 + 30252;
	// addi r3,r9,7712
	ctx.r3.s64 = ctx.r9.s64 + 7712;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26752
	ctx.r5.s64 = ctx.r11.s64 + 26752;
	// bl 0x82c56fc8
	ctx.lr = 0x833A82AC;
	sub_82C56FC8(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,23856
	ctx.r3.s64 = ctx.r8.s64 + 23856;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A82B8;
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

__attribute__((alias("__imp__sub_833A82C8"))) PPC_WEAK_FUNC(sub_833A82C8);
PPC_FUNC_IMPL(__imp__sub_833A82C8) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,30276
	ctx.r4.s64 = ctx.r10.s64 + 30276;
	// addi r3,r9,7988
	ctx.r3.s64 = ctx.r9.s64 + 7988;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26824
	ctx.r5.s64 = ctx.r11.s64 + 26824;
	// bl 0x82c56fc8
	ctx.lr = 0x833A82F4;
	sub_82C56FC8(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,23880
	ctx.r3.s64 = ctx.r8.s64 + 23880;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8300;
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

__attribute__((alias("__imp__sub_833A8310"))) PPC_WEAK_FUNC(sub_833A8310);
PPC_FUNC_IMPL(__imp__sub_833A8310) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,30300
	ctx.r4.s64 = ctx.r10.s64 + 30300;
	// addi r3,r9,8264
	ctx.r3.s64 = ctx.r9.s64 + 8264;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29944
	ctx.r5.s64 = ctx.r11.s64 + 29944;
	// bl 0x82c58ca8
	ctx.lr = 0x833A833C;
	sub_82C58CA8(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,23904
	ctx.r3.s64 = ctx.r8.s64 + 23904;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8348;
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

__attribute__((alias("__imp__sub_833A8358"))) PPC_WEAK_FUNC(sub_833A8358);
PPC_FUNC_IMPL(__imp__sub_833A8358) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r6,r11,4716
	ctx.r6.s64 = ctx.r11.s64 + 4716;
	// addi r4,r10,30440
	ctx.r4.s64 = ctx.r10.s64 + 30440;
	// addi r3,r9,8540
	ctx.r3.s64 = ctx.r9.s64 + 8540;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82c4d7b8
	ctx.lr = 0x833A8384;
	sub_82C4D7B8(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,23928
	ctx.r3.s64 = ctx.r8.s64 + 23928;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8390;
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

__attribute__((alias("__imp__sub_833A83A0"))) PPC_WEAK_FUNC(sub_833A83A0);
PPC_FUNC_IMPL(__imp__sub_833A83A0) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,12796
	ctx.r6.s64 = ctx.r11.s64 + 12796;
	// addi r4,r9,30536
	ctx.r4.s64 = ctx.r9.s64 + 30536;
	// addi r3,r8,8816
	ctx.r3.s64 = ctx.r8.s64 + 8816;
	// addi r5,r10,-29888
	ctx.r5.s64 = ctx.r10.s64 + -29888;
	// bl 0x82c59ed8
	ctx.lr = 0x833A83D0;
	sub_82C59ED8(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23952
	ctx.r3.s64 = ctx.r7.s64 + 23952;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A83DC;
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

__attribute__((alias("__imp__sub_833A83EC"))) PPC_WEAK_FUNC(sub_833A83EC);
PPC_FUNC_IMPL(__imp__sub_833A83EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A83F0"))) PPC_WEAK_FUNC(sub_833A83F0);
PPC_FUNC_IMPL(__imp__sub_833A83F0) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,16516
	ctx.r6.s64 = ctx.r11.s64 + 16516;
	// addi r4,r9,30676
	ctx.r4.s64 = ctx.r9.s64 + 30676;
	// addi r3,r8,9092
	ctx.r3.s64 = ctx.r8.s64 + 9092;
	// addi r5,r10,-28256
	ctx.r5.s64 = ctx.r10.s64 + -28256;
	// bl 0x82c61438
	ctx.lr = 0x833A8420;
	sub_82C61438(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,23976
	ctx.r3.s64 = ctx.r7.s64 + 23976;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A842C;
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

__attribute__((alias("__imp__sub_833A843C"))) PPC_WEAK_FUNC(sub_833A843C);
PPC_FUNC_IMPL(__imp__sub_833A843C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8440"))) PPC_WEAK_FUNC(sub_833A8440);
PPC_FUNC_IMPL(__imp__sub_833A8440) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,-28988
	ctx.r6.s64 = ctx.r11.s64 + -28988;
	// addi r4,r9,31176
	ctx.r4.s64 = ctx.r9.s64 + 31176;
	// addi r3,r8,9368
	ctx.r3.s64 = ctx.r8.s64 + 9368;
	// addi r5,r10,-23320
	ctx.r5.s64 = ctx.r10.s64 + -23320;
	// bl 0x82c62390
	ctx.lr = 0x833A8470;
	sub_82C62390(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24000
	ctx.r3.s64 = ctx.r7.s64 + 24000;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A847C;
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

__attribute__((alias("__imp__sub_833A848C"))) PPC_WEAK_FUNC(sub_833A848C);
PPC_FUNC_IMPL(__imp__sub_833A848C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8490"))) PPC_WEAK_FUNC(sub_833A8490);
PPC_FUNC_IMPL(__imp__sub_833A8490) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,31192
	ctx.r4.s64 = ctx.r10.s64 + 31192;
	// addi r3,r9,9644
	ctx.r3.s64 = ctx.r9.s64 + 9644;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-22224
	ctx.r5.s64 = ctx.r11.s64 + -22224;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A84C4;
	sub_82C1E6A0(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24024
	ctx.r3.s64 = ctx.r8.s64 + 24024;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A84D0;
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

__attribute__((alias("__imp__sub_833A84E0"))) PPC_WEAK_FUNC(sub_833A84E0);
PPC_FUNC_IMPL(__imp__sub_833A84E0) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,-19632
	ctx.r4.s64 = ctx.r10.s64 + -19632;
	// addi r3,r9,9920
	ctx.r3.s64 = ctx.r9.s64 + 9920;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-20048
	ctx.r5.s64 = ctx.r11.s64 + -20048;
	// bl 0x82c38e48
	ctx.lr = 0x833A850C;
	sub_82C38E48(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24048
	ctx.r3.s64 = ctx.r8.s64 + 24048;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8518;
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

__attribute__((alias("__imp__sub_833A8528"))) PPC_WEAK_FUNC(sub_833A8528);
PPC_FUNC_IMPL(__imp__sub_833A8528) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,31696
	ctx.r4.s64 = ctx.r10.s64 + 31696;
	// addi r3,r9,10196
	ctx.r3.s64 = ctx.r9.s64 + 10196;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-17336
	ctx.r5.s64 = ctx.r11.s64 + -17336;
	// bl 0x82c38e48
	ctx.lr = 0x833A8554;
	sub_82C38E48(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24072
	ctx.r3.s64 = ctx.r8.s64 + 24072;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8560;
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

__attribute__((alias("__imp__sub_833A8570"))) PPC_WEAK_FUNC(sub_833A8570);
PPC_FUNC_IMPL(__imp__sub_833A8570) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,31748
	ctx.r4.s64 = ctx.r10.s64 + 31748;
	// addi r3,r9,10472
	ctx.r3.s64 = ctx.r9.s64 + 10472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-15080
	ctx.r5.s64 = ctx.r11.s64 + -15080;
	// bl 0x82c38e48
	ctx.lr = 0x833A859C;
	sub_82C38E48(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24096
	ctx.r3.s64 = ctx.r8.s64 + 24096;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A85A8;
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

__attribute__((alias("__imp__sub_833A85B8"))) PPC_WEAK_FUNC(sub_833A85B8);
PPC_FUNC_IMPL(__imp__sub_833A85B8) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,-28692
	ctx.r6.s64 = ctx.r11.s64 + -28692;
	// addi r4,r9,31804
	ctx.r4.s64 = ctx.r9.s64 + 31804;
	// addi r3,r8,10748
	ctx.r3.s64 = ctx.r8.s64 + 10748;
	// addi r5,r10,-12152
	ctx.r5.s64 = ctx.r10.s64 + -12152;
	// bl 0x82c38e48
	ctx.lr = 0x833A85E8;
	sub_82C38E48(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24120
	ctx.r3.s64 = ctx.r7.s64 + 24120;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A85F4;
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

__attribute__((alias("__imp__sub_833A8604"))) PPC_WEAK_FUNC(sub_833A8604);
PPC_FUNC_IMPL(__imp__sub_833A8604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8608"))) PPC_WEAK_FUNC(sub_833A8608);
PPC_FUNC_IMPL(__imp__sub_833A8608) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,31960
	ctx.r4.s64 = ctx.r10.s64 + 31960;
	// addi r3,r9,11024
	ctx.r3.s64 = ctx.r9.s64 + 11024;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7120
	ctx.r5.s64 = ctx.r11.s64 + -7120;
	// bl 0x82c38e48
	ctx.lr = 0x833A8634;
	sub_82C38E48(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24144
	ctx.r3.s64 = ctx.r8.s64 + 24144;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8640;
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

__attribute__((alias("__imp__sub_833A8650"))) PPC_WEAK_FUNC(sub_833A8650);
PPC_FUNC_IMPL(__imp__sub_833A8650) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,32084
	ctx.r4.s64 = ctx.r10.s64 + 32084;
	// addi r3,r9,11300
	ctx.r3.s64 = ctx.r9.s64 + 11300;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6192
	ctx.r5.s64 = ctx.r11.s64 + -6192;
	// bl 0x82c56fc8
	ctx.lr = 0x833A867C;
	sub_82C56FC8(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24168
	ctx.r3.s64 = ctx.r8.s64 + 24168;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8688;
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

__attribute__((alias("__imp__sub_833A8698"))) PPC_WEAK_FUNC(sub_833A8698);
PPC_FUNC_IMPL(__imp__sub_833A8698) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,-17392
	ctx.r4.s64 = ctx.r10.s64 + -17392;
	// addi r3,r9,11576
	ctx.r3.s64 = ctx.r9.s64 + 11576;
	// addi r5,r11,-4520
	ctx.r5.s64 = ctx.r11.s64 + -4520;
	// bl 0x82baef68
	ctx.lr = 0x833A86C0;
	sub_82BAEF68(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24192
	ctx.r3.s64 = ctx.r8.s64 + 24192;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A86CC;
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

__attribute__((alias("__imp__sub_833A86DC"))) PPC_WEAK_FUNC(sub_833A86DC);
PPC_FUNC_IMPL(__imp__sub_833A86DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A86E0"))) PPC_WEAK_FUNC(sub_833A86E0);
PPC_FUNC_IMPL(__imp__sub_833A86E0) {
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
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r3,r8,11844
	ctx.r3.s64 = ctx.r8.s64 + 11844;
	// addi r6,r11,4440
	ctx.r6.s64 = ctx.r11.s64 + 4440;
	// addi r4,r9,32124
	ctx.r4.s64 = ctx.r9.s64 + 32124;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-3512
	ctx.r5.s64 = ctx.r10.s64 + -3512;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A8718;
	sub_82C1E6A0(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24248
	ctx.r3.s64 = ctx.r7.s64 + 24248;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8724;
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

__attribute__((alias("__imp__sub_833A8734"))) PPC_WEAK_FUNC(sub_833A8734);
PPC_FUNC_IMPL(__imp__sub_833A8734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8738"))) PPC_WEAK_FUNC(sub_833A8738);
PPC_FUNC_IMPL(__imp__sub_833A8738) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,32188
	ctx.r4.s64 = ctx.r10.s64 + 32188;
	// addi r3,r9,12120
	ctx.r3.s64 = ctx.r9.s64 + 12120;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1680
	ctx.r5.s64 = ctx.r11.s64 + -1680;
	// bl 0x82c4a020
	ctx.lr = 0x833A876C;
	sub_82C4A020(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24272
	ctx.r3.s64 = ctx.r8.s64 + 24272;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8778;
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

__attribute__((alias("__imp__sub_833A8788"))) PPC_WEAK_FUNC(sub_833A8788);
PPC_FUNC_IMPL(__imp__sub_833A8788) {
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
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r3,r8,12396
	ctx.r3.s64 = ctx.r8.s64 + 12396;
	// addi r6,r11,16240
	ctx.r6.s64 = ctx.r11.s64 + 16240;
	// addi r4,r9,32264
	ctx.r4.s64 = ctx.r9.s64 + 32264;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,4304
	ctx.r5.s64 = ctx.r10.s64 + 4304;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A87C0;
	sub_82C1E6A0(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24296
	ctx.r3.s64 = ctx.r7.s64 + 24296;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A87CC;
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

__attribute__((alias("__imp__sub_833A87DC"))) PPC_WEAK_FUNC(sub_833A87DC);
PPC_FUNC_IMPL(__imp__sub_833A87DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A87E0"))) PPC_WEAK_FUNC(sub_833A87E0);
PPC_FUNC_IMPL(__imp__sub_833A87E0) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,32336
	ctx.r4.s64 = ctx.r10.s64 + 32336;
	// addi r3,r9,12672
	ctx.r3.s64 = ctx.r9.s64 + 12672;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,9024
	ctx.r5.s64 = ctx.r11.s64 + 9024;
	// bl 0x82c484a0
	ctx.lr = 0x833A880C;
	sub_82C484A0(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24320
	ctx.r3.s64 = ctx.r8.s64 + 24320;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8818;
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

__attribute__((alias("__imp__sub_833A8828"))) PPC_WEAK_FUNC(sub_833A8828);
PPC_FUNC_IMPL(__imp__sub_833A8828) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,32364
	ctx.r4.s64 = ctx.r10.s64 + 32364;
	// addi r3,r9,12948
	ctx.r3.s64 = ctx.r9.s64 + 12948;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,9112
	ctx.r5.s64 = ctx.r11.s64 + 9112;
	// bl 0x82c472b0
	ctx.lr = 0x833A8854;
	sub_82C472B0(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24344
	ctx.r3.s64 = ctx.r8.s64 + 24344;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8860;
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

__attribute__((alias("__imp__sub_833A8870"))) PPC_WEAK_FUNC(sub_833A8870);
PPC_FUNC_IMPL(__imp__sub_833A8870) {
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
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r3,r8,13224
	ctx.r3.s64 = ctx.r8.s64 + 13224;
	// addi r6,r11,-12904
	ctx.r6.s64 = ctx.r11.s64 + -12904;
	// addi r4,r9,32504
	ctx.r4.s64 = ctx.r9.s64 + 32504;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,12472
	ctx.r5.s64 = ctx.r10.s64 + 12472;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A88A8;
	sub_82C1E6A0(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24368
	ctx.r3.s64 = ctx.r7.s64 + 24368;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A88B4;
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

__attribute__((alias("__imp__sub_833A88C4"))) PPC_WEAK_FUNC(sub_833A88C4);
PPC_FUNC_IMPL(__imp__sub_833A88C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A88C8"))) PPC_WEAK_FUNC(sub_833A88C8);
PPC_FUNC_IMPL(__imp__sub_833A88C8) {
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
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r3,r8,13500
	ctx.r3.s64 = ctx.r8.s64 + 13500;
	// addi r6,r11,-28416
	ctx.r6.s64 = ctx.r11.s64 + -28416;
	// addi r4,r9,32576
	ctx.r4.s64 = ctx.r9.s64 + 32576;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,17080
	ctx.r5.s64 = ctx.r10.s64 + 17080;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A8900;
	sub_82C1E6A0(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24392
	ctx.r3.s64 = ctx.r7.s64 + 24392;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A890C;
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

__attribute__((alias("__imp__sub_833A891C"))) PPC_WEAK_FUNC(sub_833A891C);
PPC_FUNC_IMPL(__imp__sub_833A891C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8920"))) PPC_WEAK_FUNC(sub_833A8920);
PPC_FUNC_IMPL(__imp__sub_833A8920) {
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
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,6608
	ctx.r6.s64 = ctx.r11.s64 + 6608;
	// addi r4,r9,32640
	ctx.r4.s64 = ctx.r9.s64 + 32640;
	// addi r3,r8,13776
	ctx.r3.s64 = ctx.r8.s64 + 13776;
	// addi r5,r10,17392
	ctx.r5.s64 = ctx.r10.s64 + 17392;
	// bl 0x82c484a0
	ctx.lr = 0x833A8950;
	sub_82C484A0(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24416
	ctx.r3.s64 = ctx.r7.s64 + 24416;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A895C;
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

__attribute__((alias("__imp__sub_833A896C"))) PPC_WEAK_FUNC(sub_833A896C);
PPC_FUNC_IMPL(__imp__sub_833A896C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8970"))) PPC_WEAK_FUNC(sub_833A8970);
PPC_FUNC_IMPL(__imp__sub_833A8970) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,32748
	ctx.r4.s64 = ctx.r10.s64 + 32748;
	// addi r3,r9,14052
	ctx.r3.s64 = ctx.r9.s64 + 14052;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,17976
	ctx.r5.s64 = ctx.r11.s64 + 17976;
	// bl 0x82c34238
	ctx.lr = 0x833A89A4;
	sub_82C34238(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24440
	ctx.r3.s64 = ctx.r8.s64 + 24440;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A89B0;
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

__attribute__((alias("__imp__sub_833A89C0"))) PPC_WEAK_FUNC(sub_833A89C0);
PPC_FUNC_IMPL(__imp__sub_833A89C0) {
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
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r3,r8,14328
	ctx.r3.s64 = ctx.r8.s64 + 14328;
	// addi r6,r11,14052
	ctx.r6.s64 = ctx.r11.s64 + 14052;
	// addi r4,r9,-32768
	ctx.r4.s64 = ctx.r9.s64 + -32768;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,18248
	ctx.r5.s64 = ctx.r10.s64 + 18248;
	// bl 0x82c34238
	ctx.lr = 0x833A89F8;
	sub_82C34238(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24464
	ctx.r3.s64 = ctx.r7.s64 + 24464;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8A04;
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

__attribute__((alias("__imp__sub_833A8A14"))) PPC_WEAK_FUNC(sub_833A8A14);
PPC_FUNC_IMPL(__imp__sub_833A8A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8A18"))) PPC_WEAK_FUNC(sub_833A8A18);
PPC_FUNC_IMPL(__imp__sub_833A8A18) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,-32536
	ctx.r4.s64 = ctx.r10.s64 + -32536;
	// addi r3,r9,14604
	ctx.r3.s64 = ctx.r9.s64 + 14604;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20696
	ctx.r5.s64 = ctx.r11.s64 + 20696;
	// bl 0x82c6d180
	ctx.lr = 0x833A8A44;
	sub_82C6D180(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24488
	ctx.r3.s64 = ctx.r8.s64 + 24488;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8A50;
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

__attribute__((alias("__imp__sub_833A8A60"))) PPC_WEAK_FUNC(sub_833A8A60);
PPC_FUNC_IMPL(__imp__sub_833A8A60) {
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
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r3,r8,14880
	ctx.r3.s64 = ctx.r8.s64 + 14880;
	// addi r6,r11,14052
	ctx.r6.s64 = ctx.r11.s64 + 14052;
	// addi r4,r9,-32416
	ctx.r4.s64 = ctx.r9.s64 + -32416;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,22616
	ctx.r5.s64 = ctx.r10.s64 + 22616;
	// bl 0x82c34238
	ctx.lr = 0x833A8A98;
	sub_82C34238(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24512
	ctx.r3.s64 = ctx.r7.s64 + 24512;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8AA4;
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

__attribute__((alias("__imp__sub_833A8AB4"))) PPC_WEAK_FUNC(sub_833A8AB4);
PPC_FUNC_IMPL(__imp__sub_833A8AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8AB8"))) PPC_WEAK_FUNC(sub_833A8AB8);
PPC_FUNC_IMPL(__imp__sub_833A8AB8) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,-32288
	ctx.r4.s64 = ctx.r10.s64 + -32288;
	// addi r3,r9,15156
	ctx.r3.s64 = ctx.r9.s64 + 15156;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25784
	ctx.r5.s64 = ctx.r11.s64 + 25784;
	// bl 0x82c4a020
	ctx.lr = 0x833A8AEC;
	sub_82C4A020(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24536
	ctx.r3.s64 = ctx.r8.s64 + 24536;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8AF8;
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

__attribute__((alias("__imp__sub_833A8B08"))) PPC_WEAK_FUNC(sub_833A8B08);
PPC_FUNC_IMPL(__imp__sub_833A8B08) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,-32196
	ctx.r4.s64 = ctx.r10.s64 + -32196;
	// addi r3,r9,15432
	ctx.r3.s64 = ctx.r9.s64 + 15432;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29288
	ctx.r5.s64 = ctx.r11.s64 + 29288;
	// bl 0x82c38e48
	ctx.lr = 0x833A8B34;
	sub_82C38E48(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24560
	ctx.r3.s64 = ctx.r8.s64 + 24560;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8B40;
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

__attribute__((alias("__imp__sub_833A8B50"))) PPC_WEAK_FUNC(sub_833A8B50);
PPC_FUNC_IMPL(__imp__sub_833A8B50) {
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
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,10748
	ctx.r6.s64 = ctx.r11.s64 + 10748;
	// addi r4,r9,-32172
	ctx.r4.s64 = ctx.r9.s64 + -32172;
	// addi r3,r8,15708
	ctx.r3.s64 = ctx.r8.s64 + 15708;
	// addi r5,r10,29376
	ctx.r5.s64 = ctx.r10.s64 + 29376;
	// bl 0x82c38e48
	ctx.lr = 0x833A8B80;
	sub_82C38E48(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24584
	ctx.r3.s64 = ctx.r7.s64 + 24584;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8B8C;
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

__attribute__((alias("__imp__sub_833A8B9C"))) PPC_WEAK_FUNC(sub_833A8B9C);
PPC_FUNC_IMPL(__imp__sub_833A8B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8BA0"))) PPC_WEAK_FUNC(sub_833A8BA0);
PPC_FUNC_IMPL(__imp__sub_833A8BA0) {
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
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,-31988
	ctx.r4.s64 = ctx.r10.s64 + -31988;
	// addi r3,r9,15984
	ctx.r3.s64 = ctx.r9.s64 + 15984;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28456
	ctx.r5.s64 = ctx.r11.s64 + -28456;
	// bl 0x82c4a020
	ctx.lr = 0x833A8BD4;
	sub_82C4A020(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24608
	ctx.r3.s64 = ctx.r8.s64 + 24608;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8BE0;
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

__attribute__((alias("__imp__sub_833A8BF0"))) PPC_WEAK_FUNC(sub_833A8BF0);
PPC_FUNC_IMPL(__imp__sub_833A8BF0) {
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
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,-31872
	ctx.r4.s64 = ctx.r10.s64 + -31872;
	// addi r3,r9,16260
	ctx.r3.s64 = ctx.r9.s64 + 16260;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-17768
	ctx.r5.s64 = ctx.r11.s64 + -17768;
	// bl 0x82c4a020
	ctx.lr = 0x833A8C24;
	sub_82C4A020(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24632
	ctx.r3.s64 = ctx.r8.s64 + 24632;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8C30;
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

__attribute__((alias("__imp__sub_833A8C40"))) PPC_WEAK_FUNC(sub_833A8C40);
PPC_FUNC_IMPL(__imp__sub_833A8C40) {
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
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,-31804
	ctx.r4.s64 = ctx.r10.s64 + -31804;
	// addi r3,r9,16536
	ctx.r3.s64 = ctx.r9.s64 + 16536;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-9240
	ctx.r5.s64 = ctx.r11.s64 + -9240;
	// bl 0x82c4a020
	ctx.lr = 0x833A8C74;
	sub_82C4A020(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24656
	ctx.r3.s64 = ctx.r8.s64 + 24656;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8C80;
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

__attribute__((alias("__imp__sub_833A8C90"))) PPC_WEAK_FUNC(sub_833A8C90);
PPC_FUNC_IMPL(__imp__sub_833A8C90) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r6,r11,9828
	ctx.r6.s64 = ctx.r11.s64 + 9828;
	// addi r4,r9,-31736
	ctx.r4.s64 = ctx.r9.s64 + -31736;
	// addi r3,r8,16812
	ctx.r3.s64 = ctx.r8.s64 + 16812;
	// addi r5,r10,-8296
	ctx.r5.s64 = ctx.r10.s64 + -8296;
	// bl 0x82c7b190
	ctx.lr = 0x833A8CC0;
	sub_82C7B190(ctx, base);
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// addi r3,r7,24680
	ctx.r3.s64 = ctx.r7.s64 + 24680;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8CCC;
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

__attribute__((alias("__imp__sub_833A8CDC"))) PPC_WEAK_FUNC(sub_833A8CDC);
PPC_FUNC_IMPL(__imp__sub_833A8CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8CE0"))) PPC_WEAK_FUNC(sub_833A8CE0);
PPC_FUNC_IMPL(__imp__sub_833A8CE0) {
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
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r10,-31584
	ctx.r4.s64 = ctx.r10.s64 + -31584;
	// addi r3,r9,17088
	ctx.r3.s64 = ctx.r9.s64 + 17088;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6672
	ctx.r5.s64 = ctx.r11.s64 + -6672;
	// bl 0x82c38ed8
	ctx.lr = 0x833A8D0C;
	sub_82C38ED8(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,24704
	ctx.r3.s64 = ctx.r8.s64 + 24704;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8D18;
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

__attribute__((alias("__imp__sub_833A8D28"))) PPC_WEAK_FUNC(sub_833A8D28);
PPC_FUNC_IMPL(__imp__sub_833A8D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,24728
	ctx.r3.s64 = ctx.r11.s64 + 24728;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A8D34"))) PPC_WEAK_FUNC(sub_833A8D34);
PPC_FUNC_IMPL(__imp__sub_833A8D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8D38"))) PPC_WEAK_FUNC(sub_833A8D38);
PPC_FUNC_IMPL(__imp__sub_833A8D38) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// addi r4,r10,6348
	ctx.r4.s64 = ctx.r10.s64 + 6348;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-12904
	ctx.r3.s64 = ctx.r10.s64 + -12904;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-32088
	ctx.r5.s64 = ctx.r11.s64 + -32088;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A8D6C;
	sub_82C1E6A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,24808
	ctx.r3.s64 = ctx.r11.s64 + 24808;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8D78;
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

__attribute__((alias("__imp__sub_833A8D88"))) PPC_WEAK_FUNC(sub_833A8D88);
PPC_FUNC_IMPL(__imp__sub_833A8D88) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,6488
	ctx.r4.s64 = ctx.r11.s64 + 6488;
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,26312
	ctx.r3.s64 = ctx.r11.s64 + 26312;
	// bl 0x82c279b8
	ctx.lr = 0x833A8DB0;
	sub_82C279B8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,24936
	ctx.r3.s64 = ctx.r11.s64 + 24936;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8DBC;
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

__attribute__((alias("__imp__sub_833A8DCC"))) PPC_WEAK_FUNC(sub_833A8DCC);
PPC_FUNC_IMPL(__imp__sub_833A8DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8DD0"))) PPC_WEAK_FUNC(sub_833A8DD0);
PPC_FUNC_IMPL(__imp__sub_833A8DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,24856
	ctx.r3.s64 = ctx.r11.s64 + 24856;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A8DDC"))) PPC_WEAK_FUNC(sub_833A8DDC);
PPC_FUNC_IMPL(__imp__sub_833A8DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8DE0"))) PPC_WEAK_FUNC(sub_833A8DE0);
PPC_FUNC_IMPL(__imp__sub_833A8DE0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// addi r4,r10,6576
	ctx.r4.s64 = ctx.r10.s64 + 6576;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,28108
	ctx.r31.s64 = ctx.r10.s64 + 28108;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7912
	ctx.r5.s64 = ctx.r11.s64 + 7912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c02a90
	ctx.lr = 0x833A8E1C;
	sub_82C02A90(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r11,r11,6572
	ctx.r11.s64 = ctx.r11.s64 + 6572;
	// addi r3,r10,25064
	ctx.r3.s64 = ctx.r10.s64 + 25064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8E34;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833A8E48"))) PPC_WEAK_FUNC(sub_833A8E48);
PPC_FUNC_IMPL(__imp__sub_833A8E48) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,236
	ctx.r6.s64 = ctx.r11.s64 + 236;
	// addi r4,r10,6672
	ctx.r4.s64 = ctx.r10.s64 + 6672;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// addi r5,r11,12696
	ctx.r5.s64 = ctx.r11.s64 + 12696;
	// addi r3,r10,30448
	ctx.r3.s64 = ctx.r10.s64 + 30448;
	// bl 0x82c484a0
	ctx.lr = 0x833A8E78;
	sub_82C484A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25136
	ctx.r3.s64 = ctx.r11.s64 + 25136;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8E84;
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

__attribute__((alias("__imp__sub_833A8E94"))) PPC_WEAK_FUNC(sub_833A8E94);
PPC_FUNC_IMPL(__imp__sub_833A8E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8E98"))) PPC_WEAK_FUNC(sub_833A8E98);
PPC_FUNC_IMPL(__imp__sub_833A8E98) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// addi r4,r10,6756
	ctx.r4.s64 = ctx.r10.s64 + 6756;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,30724
	ctx.r3.s64 = ctx.r10.s64 + 30724;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14896
	ctx.r5.s64 = ctx.r11.s64 + 14896;
	// bl 0x82c4a020
	ctx.lr = 0x833A8ECC;
	sub_82C4A020(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25160
	ctx.r3.s64 = ctx.r11.s64 + 25160;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8ED8;
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

__attribute__((alias("__imp__sub_833A8EE8"))) PPC_WEAK_FUNC(sub_833A8EE8);
PPC_FUNC_IMPL(__imp__sub_833A8EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25200
	ctx.r3.s64 = ctx.r11.s64 + 25200;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A8EF4"))) PPC_WEAK_FUNC(sub_833A8EF4);
PPC_FUNC_IMPL(__imp__sub_833A8EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8EF8"))) PPC_WEAK_FUNC(sub_833A8EF8);
PPC_FUNC_IMPL(__imp__sub_833A8EF8) {
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
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,31020
	ctx.r3.s64 = ctx.r11.s64 + 31020;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c1c178
	ctx.lr = 0x833A8F1C;
	sub_82C1C178(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25184
	ctx.r3.s64 = ctx.r11.s64 + 25184;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8F28;
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

__attribute__((alias("__imp__sub_833A8F38"))) PPC_WEAK_FUNC(sub_833A8F38);
PPC_FUNC_IMPL(__imp__sub_833A8F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25224
	ctx.r3.s64 = ctx.r11.s64 + 25224;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A8F44"))) PPC_WEAK_FUNC(sub_833A8F44);
PPC_FUNC_IMPL(__imp__sub_833A8F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8F48"))) PPC_WEAK_FUNC(sub_833A8F48);
PPC_FUNC_IMPL(__imp__sub_833A8F48) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r4,r10,7680
	ctx.r4.s64 = ctx.r10.s64 + 7680;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-29296
	ctx.r3.s64 = ctx.r10.s64 + -29296;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-15952
	ctx.r5.s64 = ctx.r11.s64 + -15952;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A8F7C;
	sub_82C1E6A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25304
	ctx.r3.s64 = ctx.r11.s64 + 25304;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8F88;
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

__attribute__((alias("__imp__sub_833A8F98"))) PPC_WEAK_FUNC(sub_833A8F98);
PPC_FUNC_IMPL(__imp__sub_833A8F98) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r4,r10,7988
	ctx.r4.s64 = ctx.r10.s64 + 7988;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-28988
	ctx.r3.s64 = ctx.r10.s64 + -28988;
	// addi r5,r11,10424
	ctx.r5.s64 = ctx.r11.s64 + 10424;
	// bl 0x82c62390
	ctx.lr = 0x833A8FC4;
	sub_82C62390(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25376
	ctx.r3.s64 = ctx.r11.s64 + 25376;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8FD0;
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

__attribute__((alias("__imp__sub_833A8FE0"))) PPC_WEAK_FUNC(sub_833A8FE0);
PPC_FUNC_IMPL(__imp__sub_833A8FE0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,8416
	ctx.r4.s64 = ctx.r11.s64 + 8416;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-28692
	ctx.r3.s64 = ctx.r11.s64 + -28692;
	// bl 0x82c38e48
	ctx.lr = 0x833A9008;
	sub_82C38E48(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25400
	ctx.r3.s64 = ctx.r11.s64 + 25400;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9014;
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

__attribute__((alias("__imp__sub_833A9024"))) PPC_WEAK_FUNC(sub_833A9024);
PPC_FUNC_IMPL(__imp__sub_833A9024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9028"))) PPC_WEAK_FUNC(sub_833A9028);
PPC_FUNC_IMPL(__imp__sub_833A9028) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32062
	ctx.r11.s64 = -2101215232;
	// addi r4,r10,8480
	ctx.r4.s64 = ctx.r10.s64 + 8480;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-28416
	ctx.r3.s64 = ctx.r10.s64 + -28416;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-21512
	ctx.r5.s64 = ctx.r11.s64 + -21512;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A905C;
	sub_82C1E6A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25424
	ctx.r3.s64 = ctx.r11.s64 + 25424;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9068;
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

__attribute__((alias("__imp__sub_833A9078"))) PPC_WEAK_FUNC(sub_833A9078);
PPC_FUNC_IMPL(__imp__sub_833A9078) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,9308
	ctx.r4.s64 = ctx.r11.s64 + 9308;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-26064
	ctx.r3.s64 = ctx.r11.s64 + -26064;
	// bl 0x82c279b8
	ctx.lr = 0x833A90A0;
	sub_82C279B8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25496
	ctx.r3.s64 = ctx.r11.s64 + 25496;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A90AC;
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

__attribute__((alias("__imp__sub_833A90BC"))) PPC_WEAK_FUNC(sub_833A90BC);
PPC_FUNC_IMPL(__imp__sub_833A90BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A90C0"))) PPC_WEAK_FUNC(sub_833A90C0);
PPC_FUNC_IMPL(__imp__sub_833A90C0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,9340
	ctx.r4.s64 = ctx.r11.s64 + 9340;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r31,r11,-23712
	ctx.r31.s64 = ctx.r11.s64 + -23712;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c27850
	ctx.lr = 0x833A90F8;
	sub_82C27850(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r11,r11,9336
	ctx.r11.s64 = ctx.r11.s64 + 9336;
	// addi r3,r10,25520
	ctx.r3.s64 = ctx.r10.s64 + 25520;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9110;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833A9124"))) PPC_WEAK_FUNC(sub_833A9124);
PPC_FUNC_IMPL(__imp__sub_833A9124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9128"))) PPC_WEAK_FUNC(sub_833A9128);
PPC_FUNC_IMPL(__imp__sub_833A9128) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,9552
	ctx.r6.s64 = ctx.r11.s64 + 9552;
	// addi r4,r10,9996
	ctx.r4.s64 = ctx.r10.s64 + 9996;
	// lis r11,-32061
	ctx.r11.s64 = -2101149696;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r10,-23396
	ctx.r3.s64 = ctx.r10.s64 + -23396;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r11,5936
	ctx.r5.s64 = ctx.r11.s64 + 5936;
	// bl 0x82c1e608
	ctx.lr = 0x833A9160;
	sub_82C1E608(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25592
	ctx.r3.s64 = ctx.r11.s64 + 25592;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A916C;
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

__attribute__((alias("__imp__sub_833A917C"))) PPC_WEAK_FUNC(sub_833A917C);
PPC_FUNC_IMPL(__imp__sub_833A917C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9180"))) PPC_WEAK_FUNC(sub_833A9180);
PPC_FUNC_IMPL(__imp__sub_833A9180) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32060
	ctx.r11.s64 = -2101084160;
	// addi r4,r10,10196
	ctx.r4.s64 = ctx.r10.s64 + 10196;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,-23640
	ctx.r5.s64 = ctx.r11.s64 + -23640;
	// addi r3,r10,-9692
	ctx.r3.s64 = ctx.r10.s64 + -9692;
	// bl 0x82c75968
	ctx.lr = 0x833A91A8;
	sub_82C75968(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25928
	ctx.r3.s64 = ctx.r11.s64 + 25928;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A91B4;
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

__attribute__((alias("__imp__sub_833A91C4"))) PPC_WEAK_FUNC(sub_833A91C4);
PPC_FUNC_IMPL(__imp__sub_833A91C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A91C8"))) PPC_WEAK_FUNC(sub_833A91C8);
PPC_FUNC_IMPL(__imp__sub_833A91C8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32060
	ctx.r11.s64 = -2101084160;
	// addi r4,r10,10472
	ctx.r4.s64 = ctx.r10.s64 + 10472;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1352
	ctx.r3.s64 = ctx.r10.s64 + -1352;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,21024
	ctx.r5.s64 = ctx.r11.s64 + 21024;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A91FC;
	sub_82C1E6A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26000
	ctx.r3.s64 = ctx.r11.s64 + 26000;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9208;
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

__attribute__((alias("__imp__sub_833A9218"))) PPC_WEAK_FUNC(sub_833A9218);
PPC_FUNC_IMPL(__imp__sub_833A9218) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32060
	ctx.r11.s64 = -2101084160;
	// addi r4,r10,10596
	ctx.r4.s64 = ctx.r10.s64 + 10596;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,236
	ctx.r3.s64 = ctx.r10.s64 + 236;
	// addi r5,r11,22824
	ctx.r5.s64 = ctx.r11.s64 + 22824;
	// bl 0x82c484a0
	ctx.lr = 0x833A9244;
	sub_82C484A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26024
	ctx.r3.s64 = ctx.r11.s64 + 26024;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9250;
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

__attribute__((alias("__imp__sub_833A9260"))) PPC_WEAK_FUNC(sub_833A9260);
PPC_FUNC_IMPL(__imp__sub_833A9260) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32060
	ctx.r11.s64 = -2101084160;
	// addi r4,r10,10624
	ctx.r4.s64 = ctx.r10.s64 + 10624;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,-40
	ctx.r31.s64 = ctx.r10.s64 + -40;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,24440
	ctx.r5.s64 = ctx.r11.s64 + 24440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c46f78
	ctx.lr = 0x833A929C;
	sub_82C46F78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r11,r11,10592
	ctx.r11.s64 = ctx.r11.s64 + 10592;
	// addi r3,r10,26048
	ctx.r3.s64 = ctx.r10.s64 + 26048;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82cb0ae8
	ctx.lr = 0x833A92B4;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833A92C8"))) PPC_WEAK_FUNC(sub_833A92C8);
PPC_FUNC_IMPL(__imp__sub_833A92C8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,10868
	ctx.r4.s64 = ctx.r10.s64 + 10868;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1544
	ctx.r3.s64 = ctx.r10.s64 + 1544;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25992
	ctx.r5.s64 = ctx.r11.s64 + -25992;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A92FC;
	sub_82C1E6A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26120
	ctx.r3.s64 = ctx.r11.s64 + 26120;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9308;
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

__attribute__((alias("__imp__sub_833A9318"))) PPC_WEAK_FUNC(sub_833A9318);
PPC_FUNC_IMPL(__imp__sub_833A9318) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,10972
	ctx.r4.s64 = ctx.r10.s64 + 10972;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,1820
	ctx.r3.s64 = ctx.r10.s64 + 1820;
	// addi r5,r11,-24232
	ctx.r5.s64 = ctx.r11.s64 + -24232;
	// bl 0x82c38ed8
	ctx.lr = 0x833A9344;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26144
	ctx.r3.s64 = ctx.r11.s64 + 26144;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9350;
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

__attribute__((alias("__imp__sub_833A9360"))) PPC_WEAK_FUNC(sub_833A9360);
PPC_FUNC_IMPL(__imp__sub_833A9360) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,11032
	ctx.r4.s64 = ctx.r10.s64 + 11032;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,2096
	ctx.r3.s64 = ctx.r10.s64 + 2096;
	// addi r5,r11,-22184
	ctx.r5.s64 = ctx.r11.s64 + -22184;
	// bl 0x82c38ed8
	ctx.lr = 0x833A938C;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26168
	ctx.r3.s64 = ctx.r11.s64 + 26168;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9398;
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

__attribute__((alias("__imp__sub_833A93A8"))) PPC_WEAK_FUNC(sub_833A93A8);
PPC_FUNC_IMPL(__imp__sub_833A93A8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,11220
	ctx.r4.s64 = ctx.r10.s64 + 11220;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4440
	ctx.r3.s64 = ctx.r10.s64 + 4440;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-13920
	ctx.r5.s64 = ctx.r11.s64 + -13920;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A93DC;
	sub_82C1E6A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26192
	ctx.r3.s64 = ctx.r11.s64 + 26192;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A93E8;
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

__attribute__((alias("__imp__sub_833A93F8"))) PPC_WEAK_FUNC(sub_833A93F8);
PPC_FUNC_IMPL(__imp__sub_833A93F8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,11272
	ctx.r4.s64 = ctx.r10.s64 + 11272;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,4716
	ctx.r31.s64 = ctx.r10.s64 + 4716;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11056
	ctx.r5.s64 = ctx.r11.s64 + -11056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c4d6f0
	ctx.lr = 0x833A9434;
	sub_82C4D6F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r11,r11,11268
	ctx.r11.s64 = ctx.r11.s64 + 11268;
	// addi r3,r10,26264
	ctx.r3.s64 = ctx.r10.s64 + 26264;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82cb0ae8
	ctx.lr = 0x833A944C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833A9460"))) PPC_WEAK_FUNC(sub_833A9460);
PPC_FUNC_IMPL(__imp__sub_833A9460) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,11428
	ctx.r4.s64 = ctx.r10.s64 + 11428;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,4992
	ctx.r3.s64 = ctx.r10.s64 + 4992;
	// addi r5,r11,-6616
	ctx.r5.s64 = ctx.r11.s64 + -6616;
	// bl 0x82c38ed8
	ctx.lr = 0x833A948C;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26288
	ctx.r3.s64 = ctx.r11.s64 + 26288;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9498;
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

__attribute__((alias("__imp__sub_833A94A8"))) PPC_WEAK_FUNC(sub_833A94A8);
PPC_FUNC_IMPL(__imp__sub_833A94A8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,11468
	ctx.r4.s64 = ctx.r10.s64 + 11468;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,5268
	ctx.r3.s64 = ctx.r10.s64 + 5268;
	// addi r5,r11,-6240
	ctx.r5.s64 = ctx.r11.s64 + -6240;
	// bl 0x82c38ed8
	ctx.lr = 0x833A94D4;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26312
	ctx.r3.s64 = ctx.r11.s64 + 26312;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A94E0;
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

__attribute__((alias("__imp__sub_833A94F0"))) PPC_WEAK_FUNC(sub_833A94F0);
PPC_FUNC_IMPL(__imp__sub_833A94F0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,11640
	ctx.r4.s64 = ctx.r10.s64 + 11640;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5544
	ctx.r3.s64 = ctx.r10.s64 + 5544;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1920
	ctx.r5.s64 = ctx.r11.s64 + -1920;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A9524;
	sub_82C1E6A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26336
	ctx.r3.s64 = ctx.r11.s64 + 26336;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9530;
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

__attribute__((alias("__imp__sub_833A9540"))) PPC_WEAK_FUNC(sub_833A9540);
PPC_FUNC_IMPL(__imp__sub_833A9540) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,11752
	ctx.r4.s64 = ctx.r10.s64 + 11752;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,5820
	ctx.r3.s64 = ctx.r10.s64 + 5820;
	// addi r5,r11,5368
	ctx.r5.s64 = ctx.r11.s64 + 5368;
	// bl 0x82c51d50
	ctx.lr = 0x833A956C;
	sub_82C51D50(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26360
	ctx.r3.s64 = ctx.r11.s64 + 26360;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9578;
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

__attribute__((alias("__imp__sub_833A9588"))) PPC_WEAK_FUNC(sub_833A9588);
PPC_FUNC_IMPL(__imp__sub_833A9588) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,11808
	ctx.r4.s64 = ctx.r10.s64 + 11808;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,6096
	ctx.r3.s64 = ctx.r10.s64 + 6096;
	// addi r5,r11,6152
	ctx.r5.s64 = ctx.r11.s64 + 6152;
	// bl 0x82c38ed8
	ctx.lr = 0x833A95B4;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26384
	ctx.r3.s64 = ctx.r11.s64 + 26384;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A95C0;
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

__attribute__((alias("__imp__sub_833A95D0"))) PPC_WEAK_FUNC(sub_833A95D0);
PPC_FUNC_IMPL(__imp__sub_833A95D0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,11844
	ctx.r4.s64 = ctx.r10.s64 + 11844;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,6372
	ctx.r3.s64 = ctx.r10.s64 + 6372;
	// addi r5,r11,6536
	ctx.r5.s64 = ctx.r11.s64 + 6536;
	// bl 0x82c38ed8
	ctx.lr = 0x833A95FC;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26408
	ctx.r3.s64 = ctx.r11.s64 + 26408;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9608;
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

__attribute__((alias("__imp__sub_833A9618"))) PPC_WEAK_FUNC(sub_833A9618);
PPC_FUNC_IMPL(__imp__sub_833A9618) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,11880
	ctx.r4.s64 = ctx.r10.s64 + 11880;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,6648
	ctx.r3.s64 = ctx.r10.s64 + 6648;
	// addi r5,r11,6896
	ctx.r5.s64 = ctx.r11.s64 + 6896;
	// bl 0x82c38ed8
	ctx.lr = 0x833A9644;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26432
	ctx.r3.s64 = ctx.r11.s64 + 26432;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9650;
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

__attribute__((alias("__imp__sub_833A9660"))) PPC_WEAK_FUNC(sub_833A9660);
PPC_FUNC_IMPL(__imp__sub_833A9660) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,12000
	ctx.r4.s64 = ctx.r10.s64 + 12000;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,6928
	ctx.r3.s64 = ctx.r10.s64 + 6928;
	// addi r5,r11,13560
	ctx.r5.s64 = ctx.r11.s64 + 13560;
	// bl 0x82c484a0
	ctx.lr = 0x833A968C;
	sub_82C484A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26456
	ctx.r3.s64 = ctx.r11.s64 + 26456;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9698;
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

__attribute__((alias("__imp__sub_833A96A8"))) PPC_WEAK_FUNC(sub_833A96A8);
PPC_FUNC_IMPL(__imp__sub_833A96A8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,12280
	ctx.r4.s64 = ctx.r10.s64 + 12280;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,7208
	ctx.r3.s64 = ctx.r10.s64 + 7208;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,19656
	ctx.r5.s64 = ctx.r11.s64 + 19656;
	// bl 0x82c4a020
	ctx.lr = 0x833A96DC;
	sub_82C4A020(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26480
	ctx.r3.s64 = ctx.r11.s64 + 26480;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A96E8;
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

__attribute__((alias("__imp__sub_833A96F8"))) PPC_WEAK_FUNC(sub_833A96F8);
PPC_FUNC_IMPL(__imp__sub_833A96F8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,12432
	ctx.r4.s64 = ctx.r11.s64 + 12432;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,9552
	ctx.r3.s64 = ctx.r11.s64 + 9552;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82c1e608
	ctx.lr = 0x833A9728;
	sub_82C1E608(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26504
	ctx.r3.s64 = ctx.r11.s64 + 26504;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9734;
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

__attribute__((alias("__imp__sub_833A9744"))) PPC_WEAK_FUNC(sub_833A9744);
PPC_FUNC_IMPL(__imp__sub_833A9744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9748"))) PPC_WEAK_FUNC(sub_833A9748);
PPC_FUNC_IMPL(__imp__sub_833A9748) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,12460
	ctx.r4.s64 = ctx.r10.s64 + 12460;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,9828
	ctx.r3.s64 = ctx.r10.s64 + 9828;
	// addi r5,r11,22856
	ctx.r5.s64 = ctx.r11.s64 + 22856;
	// bl 0x82c7b190
	ctx.lr = 0x833A9774;
	sub_82C7B190(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26576
	ctx.r3.s64 = ctx.r11.s64 + 26576;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9780;
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

__attribute__((alias("__imp__sub_833A9790"))) PPC_WEAK_FUNC(sub_833A9790);
PPC_FUNC_IMPL(__imp__sub_833A9790) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,12524
	ctx.r4.s64 = ctx.r10.s64 + 12524;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,10104
	ctx.r3.s64 = ctx.r10.s64 + 10104;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26296
	ctx.r5.s64 = ctx.r11.s64 + 26296;
	// bl 0x82c4a020
	ctx.lr = 0x833A97C4;
	sub_82C4A020(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26600
	ctx.r3.s64 = ctx.r11.s64 + 26600;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A97D0;
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

__attribute__((alias("__imp__sub_833A97E0"))) PPC_WEAK_FUNC(sub_833A97E0);
PPC_FUNC_IMPL(__imp__sub_833A97E0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,12624
	ctx.r4.s64 = ctx.r10.s64 + 12624;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,11416
	ctx.r3.s64 = ctx.r10.s64 + 11416;
	// addi r5,r11,29200
	ctx.r5.s64 = ctx.r11.s64 + 29200;
	// bl 0x82c57058
	ctx.lr = 0x833A980C;
	sub_82C57058(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26648
	ctx.r3.s64 = ctx.r11.s64 + 26648;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9818;
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

__attribute__((alias("__imp__sub_833A9828"))) PPC_WEAK_FUNC(sub_833A9828);
PPC_FUNC_IMPL(__imp__sub_833A9828) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,12732
	ctx.r4.s64 = ctx.r10.s64 + 12732;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,11692
	ctx.r3.s64 = ctx.r10.s64 + 11692;
	// addi r5,r11,-32248
	ctx.r5.s64 = ctx.r11.s64 + -32248;
	// bl 0x82c62390
	ctx.lr = 0x833A9854;
	sub_82C62390(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26672
	ctx.r3.s64 = ctx.r11.s64 + 26672;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9860;
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

__attribute__((alias("__imp__sub_833A9870"))) PPC_WEAK_FUNC(sub_833A9870);
PPC_FUNC_IMPL(__imp__sub_833A9870) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,12792
	ctx.r4.s64 = ctx.r10.s64 + 12792;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,11968
	ctx.r3.s64 = ctx.r10.s64 + 11968;
	// addi r5,r11,-29248
	ctx.r5.s64 = ctx.r11.s64 + -29248;
	// bl 0x82c57058
	ctx.lr = 0x833A989C;
	sub_82C57058(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26696
	ctx.r3.s64 = ctx.r11.s64 + 26696;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A98A8;
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

__attribute__((alias("__imp__sub_833A98B8"))) PPC_WEAK_FUNC(sub_833A98B8);
PPC_FUNC_IMPL(__imp__sub_833A98B8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,12828
	ctx.r4.s64 = ctx.r10.s64 + 12828;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,12244
	ctx.r3.s64 = ctx.r10.s64 + 12244;
	// addi r5,r11,-28936
	ctx.r5.s64 = ctx.r11.s64 + -28936;
	// bl 0x82c57058
	ctx.lr = 0x833A98E4;
	sub_82C57058(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26720
	ctx.r3.s64 = ctx.r11.s64 + 26720;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A98F0;
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

__attribute__((alias("__imp__sub_833A9900"))) PPC_WEAK_FUNC(sub_833A9900);
PPC_FUNC_IMPL(__imp__sub_833A9900) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,12876
	ctx.r4.s64 = ctx.r10.s64 + 12876;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,12520
	ctx.r3.s64 = ctx.r10.s64 + 12520;
	// addi r5,r11,-28624
	ctx.r5.s64 = ctx.r11.s64 + -28624;
	// bl 0x82c57058
	ctx.lr = 0x833A992C;
	sub_82C57058(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26744
	ctx.r3.s64 = ctx.r11.s64 + 26744;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9938;
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

__attribute__((alias("__imp__sub_833A9948"))) PPC_WEAK_FUNC(sub_833A9948);
PPC_FUNC_IMPL(__imp__sub_833A9948) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,12932
	ctx.r4.s64 = ctx.r10.s64 + 12932;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,12796
	ctx.r3.s64 = ctx.r10.s64 + 12796;
	// addi r5,r11,-24728
	ctx.r5.s64 = ctx.r11.s64 + -24728;
	// bl 0x82c59ed8
	ctx.lr = 0x833A9974;
	sub_82C59ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26768
	ctx.r3.s64 = ctx.r11.s64 + 26768;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9980;
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

__attribute__((alias("__imp__sub_833A9990"))) PPC_WEAK_FUNC(sub_833A9990);
PPC_FUNC_IMPL(__imp__sub_833A9990) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13020
	ctx.r4.s64 = ctx.r10.s64 + 13020;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,-23032
	ctx.r5.s64 = ctx.r11.s64 + -23032;
	// addi r3,r10,13072
	ctx.r3.s64 = ctx.r10.s64 + 13072;
	// bl 0x82c60828
	ctx.lr = 0x833A99B8;
	sub_82C60828(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26792
	ctx.r3.s64 = ctx.r11.s64 + 26792;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A99C4;
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

__attribute__((alias("__imp__sub_833A99D4"))) PPC_WEAK_FUNC(sub_833A99D4);
PPC_FUNC_IMPL(__imp__sub_833A99D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A99D8"))) PPC_WEAK_FUNC(sub_833A99D8);
PPC_FUNC_IMPL(__imp__sub_833A99D8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13116
	ctx.r4.s64 = ctx.r10.s64 + 13116;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,-19984
	ctx.r5.s64 = ctx.r11.s64 + -19984;
	// addi r3,r10,13348
	ctx.r3.s64 = ctx.r10.s64 + 13348;
	// bl 0x82c608b8
	ctx.lr = 0x833A9A00;
	sub_82C608B8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26816
	ctx.r3.s64 = ctx.r11.s64 + 26816;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9A0C;
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

__attribute__((alias("__imp__sub_833A9A1C"))) PPC_WEAK_FUNC(sub_833A9A1C);
PPC_FUNC_IMPL(__imp__sub_833A9A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9A20"))) PPC_WEAK_FUNC(sub_833A9A20);
PPC_FUNC_IMPL(__imp__sub_833A9A20) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13348
	ctx.r4.s64 = ctx.r10.s64 + 13348;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,-9112
	ctx.r5.s64 = ctx.r11.s64 + -9112;
	// addi r3,r10,15688
	ctx.r3.s64 = ctx.r10.s64 + 15688;
	// bl 0x82c26628
	ctx.lr = 0x833A9A48;
	sub_82C26628(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26840
	ctx.r3.s64 = ctx.r11.s64 + 26840;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9A54;
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

__attribute__((alias("__imp__sub_833A9A64"))) PPC_WEAK_FUNC(sub_833A9A64);
PPC_FUNC_IMPL(__imp__sub_833A9A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9A68"))) PPC_WEAK_FUNC(sub_833A9A68);
PPC_FUNC_IMPL(__imp__sub_833A9A68) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,13368
	ctx.r4.s64 = ctx.r11.s64 + 13368;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,15964
	ctx.r3.s64 = ctx.r11.s64 + 15964;
	// bl 0x82c279b8
	ctx.lr = 0x833A9A90;
	sub_82C279B8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26912
	ctx.r3.s64 = ctx.r11.s64 + 26912;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9A9C;
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

__attribute__((alias("__imp__sub_833A9AAC"))) PPC_WEAK_FUNC(sub_833A9AAC);
PPC_FUNC_IMPL(__imp__sub_833A9AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9AB0"))) PPC_WEAK_FUNC(sub_833A9AB0);
PPC_FUNC_IMPL(__imp__sub_833A9AB0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13428
	ctx.r4.s64 = ctx.r10.s64 + 13428;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,16240
	ctx.r3.s64 = ctx.r10.s64 + 16240;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,3848
	ctx.r5.s64 = ctx.r11.s64 + 3848;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A9AE4;
	sub_82C1E6A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26936
	ctx.r3.s64 = ctx.r11.s64 + 26936;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9AF0;
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

__attribute__((alias("__imp__sub_833A9B00"))) PPC_WEAK_FUNC(sub_833A9B00);
PPC_FUNC_IMPL(__imp__sub_833A9B00) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13456
	ctx.r4.s64 = ctx.r10.s64 + 13456;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,16516
	ctx.r3.s64 = ctx.r10.s64 + 16516;
	// addi r5,r11,5584
	ctx.r5.s64 = ctx.r11.s64 + 5584;
	// bl 0x82c61438
	ctx.lr = 0x833A9B2C;
	sub_82C61438(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26960
	ctx.r3.s64 = ctx.r11.s64 + 26960;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9B38;
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

__attribute__((alias("__imp__sub_833A9B48"))) PPC_WEAK_FUNC(sub_833A9B48);
PPC_FUNC_IMPL(__imp__sub_833A9B48) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13548
	ctx.r4.s64 = ctx.r10.s64 + 13548;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,16792
	ctx.r3.s64 = ctx.r10.s64 + 16792;
	// addi r5,r11,9400
	ctx.r5.s64 = ctx.r11.s64 + 9400;
	// bl 0x82c38ed8
	ctx.lr = 0x833A9B74;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26984
	ctx.r3.s64 = ctx.r11.s64 + 26984;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9B80;
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

__attribute__((alias("__imp__sub_833A9B90"))) PPC_WEAK_FUNC(sub_833A9B90);
PPC_FUNC_IMPL(__imp__sub_833A9B90) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13616
	ctx.r4.s64 = ctx.r10.s64 + 13616;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,17076
	ctx.r3.s64 = ctx.r10.s64 + 17076;
	// addi r5,r11,13984
	ctx.r5.s64 = ctx.r11.s64 + 13984;
	// bl 0x82c38ed8
	ctx.lr = 0x833A9BBC;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27008
	ctx.r3.s64 = ctx.r11.s64 + 27008;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9BC8;
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

__attribute__((alias("__imp__sub_833A9BD8"))) PPC_WEAK_FUNC(sub_833A9BD8);
PPC_FUNC_IMPL(__imp__sub_833A9BD8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13656
	ctx.r4.s64 = ctx.r10.s64 + 13656;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,17352
	ctx.r3.s64 = ctx.r10.s64 + 17352;
	// addi r5,r11,14592
	ctx.r5.s64 = ctx.r11.s64 + 14592;
	// bl 0x82c57058
	ctx.lr = 0x833A9C04;
	sub_82C57058(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27032
	ctx.r3.s64 = ctx.r11.s64 + 27032;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9C10;
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

__attribute__((alias("__imp__sub_833A9C20"))) PPC_WEAK_FUNC(sub_833A9C20);
PPC_FUNC_IMPL(__imp__sub_833A9C20) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13696
	ctx.r4.s64 = ctx.r10.s64 + 13696;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,17628
	ctx.r3.s64 = ctx.r10.s64 + 17628;
	// addi r5,r11,14984
	ctx.r5.s64 = ctx.r11.s64 + 14984;
	// bl 0x82c57058
	ctx.lr = 0x833A9C4C;
	sub_82C57058(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27056
	ctx.r3.s64 = ctx.r11.s64 + 27056;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9C58;
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

__attribute__((alias("__imp__sub_833A9C68"))) PPC_WEAK_FUNC(sub_833A9C68);
PPC_FUNC_IMPL(__imp__sub_833A9C68) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,-17512
	ctx.r4.s64 = ctx.r10.s64 + -17512;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,15168
	ctx.r5.s64 = ctx.r11.s64 + 15168;
	// addi r3,r10,18568
	ctx.r3.s64 = ctx.r10.s64 + 18568;
	// bl 0x82c65220
	ctx.lr = 0x833A9C90;
	sub_82C65220(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27080
	ctx.r3.s64 = ctx.r11.s64 + 27080;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9C9C;
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

__attribute__((alias("__imp__sub_833A9CAC"))) PPC_WEAK_FUNC(sub_833A9CAC);
PPC_FUNC_IMPL(__imp__sub_833A9CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9CB0"))) PPC_WEAK_FUNC(sub_833A9CB0);
PPC_FUNC_IMPL(__imp__sub_833A9CB0) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,-17764
	ctx.r4.s64 = ctx.r10.s64 + -17764;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,15160
	ctx.r5.s64 = ctx.r11.s64 + 15160;
	// addi r3,r10,18300
	ctx.r3.s64 = ctx.r10.s64 + 18300;
	// bl 0x82c652f8
	ctx.lr = 0x833A9CD8;
	sub_82C652F8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27104
	ctx.r3.s64 = ctx.r11.s64 + 27104;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9CE4;
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

__attribute__((alias("__imp__sub_833A9CF4"))) PPC_WEAK_FUNC(sub_833A9CF4);
PPC_FUNC_IMPL(__imp__sub_833A9CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9CF8"))) PPC_WEAK_FUNC(sub_833A9CF8);
PPC_FUNC_IMPL(__imp__sub_833A9CF8) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,-17736
	ctx.r4.s64 = ctx.r10.s64 + -17736;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,15280
	ctx.r5.s64 = ctx.r11.s64 + 15280;
	// addi r3,r10,19372
	ctx.r3.s64 = ctx.r10.s64 + 19372;
	// bl 0x82c652f8
	ctx.lr = 0x833A9D20;
	sub_82C652F8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27128
	ctx.r3.s64 = ctx.r11.s64 + 27128;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9D2C;
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

__attribute__((alias("__imp__sub_833A9D3C"))) PPC_WEAK_FUNC(sub_833A9D3C);
PPC_FUNC_IMPL(__imp__sub_833A9D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9D40"))) PPC_WEAK_FUNC(sub_833A9D40);
PPC_FUNC_IMPL(__imp__sub_833A9D40) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,-17712
	ctx.r4.s64 = ctx.r10.s64 + -17712;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,15312
	ctx.r5.s64 = ctx.r11.s64 + 15312;
	// addi r3,r10,20980
	ctx.r3.s64 = ctx.r10.s64 + 20980;
	// bl 0x82c652f8
	ctx.lr = 0x833A9D68;
	sub_82C652F8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27152
	ctx.r3.s64 = ctx.r11.s64 + 27152;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9D74;
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

__attribute__((alias("__imp__sub_833A9D84"))) PPC_WEAK_FUNC(sub_833A9D84);
PPC_FUNC_IMPL(__imp__sub_833A9D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9D88"))) PPC_WEAK_FUNC(sub_833A9D88);
PPC_FUNC_IMPL(__imp__sub_833A9D88) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13736
	ctx.r4.s64 = ctx.r10.s64 + 13736;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,15368
	ctx.r5.s64 = ctx.r11.s64 + 15368;
	// addi r3,r10,21248
	ctx.r3.s64 = ctx.r10.s64 + 21248;
	// bl 0x82c652f8
	ctx.lr = 0x833A9DB0;
	sub_82C652F8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27176
	ctx.r3.s64 = ctx.r11.s64 + 27176;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9DBC;
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

__attribute__((alias("__imp__sub_833A9DCC"))) PPC_WEAK_FUNC(sub_833A9DCC);
PPC_FUNC_IMPL(__imp__sub_833A9DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9DD0"))) PPC_WEAK_FUNC(sub_833A9DD0);
PPC_FUNC_IMPL(__imp__sub_833A9DD0) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,-17600
	ctx.r4.s64 = ctx.r10.s64 + -17600;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,18544
	ctx.r5.s64 = ctx.r11.s64 + 18544;
	// addi r3,r10,18836
	ctx.r3.s64 = ctx.r10.s64 + 18836;
	// bl 0x82c653d0
	ctx.lr = 0x833A9DF8;
	sub_82C653D0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27200
	ctx.r3.s64 = ctx.r11.s64 + 27200;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9E04;
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

__attribute__((alias("__imp__sub_833A9E14"))) PPC_WEAK_FUNC(sub_833A9E14);
PPC_FUNC_IMPL(__imp__sub_833A9E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9E18"))) PPC_WEAK_FUNC(sub_833A9E18);
PPC_FUNC_IMPL(__imp__sub_833A9E18) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,-17620
	ctx.r4.s64 = ctx.r10.s64 + -17620;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,15424
	ctx.r5.s64 = ctx.r11.s64 + 15424;
	// addi r3,r10,20176
	ctx.r3.s64 = ctx.r10.s64 + 20176;
	// bl 0x82c653d0
	ctx.lr = 0x833A9E40;
	sub_82C653D0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27224
	ctx.r3.s64 = ctx.r11.s64 + 27224;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9E4C;
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

__attribute__((alias("__imp__sub_833A9E5C"))) PPC_WEAK_FUNC(sub_833A9E5C);
PPC_FUNC_IMPL(__imp__sub_833A9E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9E60"))) PPC_WEAK_FUNC(sub_833A9E60);
PPC_FUNC_IMPL(__imp__sub_833A9E60) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13760
	ctx.r4.s64 = ctx.r10.s64 + 13760;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,18624
	ctx.r5.s64 = ctx.r11.s64 + 18624;
	// addi r3,r10,19640
	ctx.r3.s64 = ctx.r10.s64 + 19640;
	// bl 0x82c653d0
	ctx.lr = 0x833A9E88;
	sub_82C653D0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27248
	ctx.r3.s64 = ctx.r11.s64 + 27248;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9E94;
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

__attribute__((alias("__imp__sub_833A9EA4"))) PPC_WEAK_FUNC(sub_833A9EA4);
PPC_FUNC_IMPL(__imp__sub_833A9EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9EA8"))) PPC_WEAK_FUNC(sub_833A9EA8);
PPC_FUNC_IMPL(__imp__sub_833A9EA8) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,-17588
	ctx.r4.s64 = ctx.r10.s64 + -17588;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,15432
	ctx.r5.s64 = ctx.r11.s64 + 15432;
	// addi r3,r10,21784
	ctx.r3.s64 = ctx.r10.s64 + 21784;
	// bl 0x82c654a8
	ctx.lr = 0x833A9ED0;
	sub_82C654A8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27272
	ctx.r3.s64 = ctx.r11.s64 + 27272;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9EDC;
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

__attribute__((alias("__imp__sub_833A9EEC"))) PPC_WEAK_FUNC(sub_833A9EEC);
PPC_FUNC_IMPL(__imp__sub_833A9EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9EF0"))) PPC_WEAK_FUNC(sub_833A9EF0);
PPC_FUNC_IMPL(__imp__sub_833A9EF0) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,-17564
	ctx.r4.s64 = ctx.r10.s64 + -17564;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,15880
	ctx.r5.s64 = ctx.r11.s64 + 15880;
	// addi r3,r10,21516
	ctx.r3.s64 = ctx.r10.s64 + 21516;
	// bl 0x82c654a8
	ctx.lr = 0x833A9F18;
	sub_82C654A8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27296
	ctx.r3.s64 = ctx.r11.s64 + 27296;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9F24;
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

__attribute__((alias("__imp__sub_833A9F34"))) PPC_WEAK_FUNC(sub_833A9F34);
PPC_FUNC_IMPL(__imp__sub_833A9F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9F38"))) PPC_WEAK_FUNC(sub_833A9F38);
PPC_FUNC_IMPL(__imp__sub_833A9F38) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,-17476
	ctx.r4.s64 = ctx.r10.s64 + -17476;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,19192
	ctx.r5.s64 = ctx.r11.s64 + 19192;
	// addi r3,r10,19908
	ctx.r3.s64 = ctx.r10.s64 + 19908;
	// bl 0x82c65580
	ctx.lr = 0x833A9F60;
	sub_82C65580(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27320
	ctx.r3.s64 = ctx.r11.s64 + 27320;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9F6C;
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

__attribute__((alias("__imp__sub_833A9F7C"))) PPC_WEAK_FUNC(sub_833A9F7C);
PPC_FUNC_IMPL(__imp__sub_833A9F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9F80"))) PPC_WEAK_FUNC(sub_833A9F80);
PPC_FUNC_IMPL(__imp__sub_833A9F80) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13784
	ctx.r4.s64 = ctx.r10.s64 + 13784;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,18712
	ctx.r5.s64 = ctx.r11.s64 + 18712;
	// addi r3,r10,22320
	ctx.r3.s64 = ctx.r10.s64 + 22320;
	// bl 0x82c65580
	ctx.lr = 0x833A9FA8;
	sub_82C65580(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27344
	ctx.r3.s64 = ctx.r11.s64 + 27344;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9FB4;
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

__attribute__((alias("__imp__sub_833A9FC4"))) PPC_WEAK_FUNC(sub_833A9FC4);
PPC_FUNC_IMPL(__imp__sub_833A9FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

