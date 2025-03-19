#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_833B6118"))) PPC_WEAK_FUNC(sub_833B6118);
PPC_FUNC_IMPL(__imp__sub_833B6118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,8680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8680, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B612C"))) PPC_WEAK_FUNC(sub_833B612C);
PPC_FUNC_IMPL(__imp__sub_833B612C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6130"))) PPC_WEAK_FUNC(sub_833B6130);
PPC_FUNC_IMPL(__imp__sub_833B6130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r8,r11,26588
	ctx.r8.s64 = ctx.r11.s64 + 26588;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r11,r8,644
	ctx.r11.s64 = ctx.r8.s64 + 644;
	// addi r9,r9,-21672
	ctx.r9.s64 = ctx.r9.s64 + -21672;
loc_833B6148:
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bge 0x833b6148
	if (!ctx.cr0.lt) goto loc_833B6148;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6164"))) PPC_WEAK_FUNC(sub_833B6164);
PPC_FUNC_IMPL(__imp__sub_833B6164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6168"))) PPC_WEAK_FUNC(sub_833B6168);
PPC_FUNC_IMPL(__imp__sub_833B6168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// addi r11,r11,6432
	ctx.r11.s64 = ctx.r11.s64 + 6432;
	// stw r11,26312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26312, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B617C"))) PPC_WEAK_FUNC(sub_833B617C);
PPC_FUNC_IMPL(__imp__sub_833B617C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6180"))) PPC_WEAK_FUNC(sub_833B6180);
PPC_FUNC_IMPL(__imp__sub_833B6180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r8,r11,27252
	ctx.r8.s64 = ctx.r11.s64 + 27252;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r11,r8,644
	ctx.r11.s64 = ctx.r8.s64 + 644;
	// addi r9,r9,-21672
	ctx.r9.s64 = ctx.r9.s64 + -21672;
loc_833B6198:
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bge 0x833b6198
	if (!ctx.cr0.lt) goto loc_833B6198;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B61B4"))) PPC_WEAK_FUNC(sub_833B61B4);
PPC_FUNC_IMPL(__imp__sub_833B61B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B61B8"))) PPC_WEAK_FUNC(sub_833B61B8);
PPC_FUNC_IMPL(__imp__sub_833B61B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r8,r11,27916
	ctx.r8.s64 = ctx.r11.s64 + 27916;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r8,164
	ctx.r11.s64 = ctx.r8.s64 + 164;
	// addi r9,r9,-21672
	ctx.r9.s64 = ctx.r9.s64 + -21672;
loc_833B61D0:
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bge 0x833b61d0
	if (!ctx.cr0.lt) goto loc_833B61D0;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B61E8"))) PPC_WEAK_FUNC(sub_833B61E8);
PPC_FUNC_IMPL(__imp__sub_833B61E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// addi r11,r11,6524
	ctx.r11.s64 = ctx.r11.s64 + 6524;
	// stw r11,28108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B61FC"))) PPC_WEAK_FUNC(sub_833B61FC);
PPC_FUNC_IMPL(__imp__sub_833B61FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6200"))) PPC_WEAK_FUNC(sub_833B6200);
PPC_FUNC_IMPL(__imp__sub_833B6200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,28384
	ctx.r11.s64 = ctx.r11.s64 + 28384;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6214"))) PPC_WEAK_FUNC(sub_833B6214);
PPC_FUNC_IMPL(__imp__sub_833B6214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6218"))) PPC_WEAK_FUNC(sub_833B6218);
PPC_FUNC_IMPL(__imp__sub_833B6218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,29416
	ctx.r11.s64 = ctx.r11.s64 + 29416;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B622C"))) PPC_WEAK_FUNC(sub_833B622C);
PPC_FUNC_IMPL(__imp__sub_833B622C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6230"))) PPC_WEAK_FUNC(sub_833B6230);
PPC_FUNC_IMPL(__imp__sub_833B6230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// addi r11,r11,28768
	ctx.r11.s64 = ctx.r11.s64 + 28768;
	// stw r11,30448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30448, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6244"))) PPC_WEAK_FUNC(sub_833B6244);
PPC_FUNC_IMPL(__imp__sub_833B6244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6248"))) PPC_WEAK_FUNC(sub_833B6248);
PPC_FUNC_IMPL(__imp__sub_833B6248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// addi r11,r11,32260
	ctx.r11.s64 = ctx.r11.s64 + 32260;
	// stw r11,30724(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30724, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B625C"))) PPC_WEAK_FUNC(sub_833B625C);
PPC_FUNC_IMPL(__imp__sub_833B625C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6260"))) PPC_WEAK_FUNC(sub_833B6260);
PPC_FUNC_IMPL(__imp__sub_833B6260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// addi r3,r11,31020
	ctx.r3.s64 = ctx.r11.s64 + 31020;
	// b 0x82c1af58
	sub_82C1AF58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B626C"))) PPC_WEAK_FUNC(sub_833B626C);
PPC_FUNC_IMPL(__imp__sub_833B626C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6270"))) PPC_WEAK_FUNC(sub_833B6270);
PPC_FUNC_IMPL(__imp__sub_833B6270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,8744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8744, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6284"))) PPC_WEAK_FUNC(sub_833B6284);
PPC_FUNC_IMPL(__imp__sub_833B6284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6288"))) PPC_WEAK_FUNC(sub_833B6288);
PPC_FUNC_IMPL(__imp__sub_833B6288) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B628C"))) PPC_WEAK_FUNC(sub_833B628C);
PPC_FUNC_IMPL(__imp__sub_833B628C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6290"))) PPC_WEAK_FUNC(sub_833B6290);
PPC_FUNC_IMPL(__imp__sub_833B6290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-32400
	ctx.r11.s64 = ctx.r11.s64 + -32400;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B62A4"))) PPC_WEAK_FUNC(sub_833B62A4);
PPC_FUNC_IMPL(__imp__sub_833B62A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B62A8"))) PPC_WEAK_FUNC(sub_833B62A8);
PPC_FUNC_IMPL(__imp__sub_833B62A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,32104
	ctx.r11.s64 = ctx.r11.s64 + 32104;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B62BC"))) PPC_WEAK_FUNC(sub_833B62BC);
PPC_FUNC_IMPL(__imp__sub_833B62BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B62C0"))) PPC_WEAK_FUNC(sub_833B62C0);
PPC_FUNC_IMPL(__imp__sub_833B62C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,31072
	ctx.r11.s64 = ctx.r11.s64 + 31072;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B62D4"))) PPC_WEAK_FUNC(sub_833B62D4);
PPC_FUNC_IMPL(__imp__sub_833B62D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B62D8"))) PPC_WEAK_FUNC(sub_833B62D8);
PPC_FUNC_IMPL(__imp__sub_833B62D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,31656
	ctx.r11.s64 = ctx.r11.s64 + 31656;
	// stw r11,-29296(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29296, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B62EC"))) PPC_WEAK_FUNC(sub_833B62EC);
PPC_FUNC_IMPL(__imp__sub_833B62EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B62F0"))) PPC_WEAK_FUNC(sub_833B62F0);
PPC_FUNC_IMPL(__imp__sub_833B62F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-30328
	ctx.r11.s64 = ctx.r11.s64 + -30328;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6304"))) PPC_WEAK_FUNC(sub_833B6304);
PPC_FUNC_IMPL(__imp__sub_833B6304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6308"))) PPC_WEAK_FUNC(sub_833B6308);
PPC_FUNC_IMPL(__imp__sub_833B6308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31360
	ctx.r11.s64 = ctx.r11.s64 + -31360;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B631C"))) PPC_WEAK_FUNC(sub_833B631C);
PPC_FUNC_IMPL(__imp__sub_833B631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6320"))) PPC_WEAK_FUNC(sub_833B6320);
PPC_FUNC_IMPL(__imp__sub_833B6320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,31660
	ctx.r11.s64 = ctx.r11.s64 + 31660;
	// stw r11,-28988(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28988, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6334"))) PPC_WEAK_FUNC(sub_833B6334);
PPC_FUNC_IMPL(__imp__sub_833B6334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6338"))) PPC_WEAK_FUNC(sub_833B6338);
PPC_FUNC_IMPL(__imp__sub_833B6338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,28956
	ctx.r11.s64 = ctx.r11.s64 + 28956;
	// stw r11,-28692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28692, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B634C"))) PPC_WEAK_FUNC(sub_833B634C);
PPC_FUNC_IMPL(__imp__sub_833B634C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6350"))) PPC_WEAK_FUNC(sub_833B6350);
PPC_FUNC_IMPL(__imp__sub_833B6350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,31656
	ctx.r11.s64 = ctx.r11.s64 + 31656;
	// stw r11,-28416(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28416, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6364"))) PPC_WEAK_FUNC(sub_833B6364);
PPC_FUNC_IMPL(__imp__sub_833B6364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6368"))) PPC_WEAK_FUNC(sub_833B6368);
PPC_FUNC_IMPL(__imp__sub_833B6368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-28136
	ctx.r11.s64 = ctx.r11.s64 + -28136;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B637C"))) PPC_WEAK_FUNC(sub_833B637C);
PPC_FUNC_IMPL(__imp__sub_833B637C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6380"))) PPC_WEAK_FUNC(sub_833B6380);
PPC_FUNC_IMPL(__imp__sub_833B6380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-27096
	ctx.r11.s64 = ctx.r11.s64 + -27096;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6394"))) PPC_WEAK_FUNC(sub_833B6394);
PPC_FUNC_IMPL(__imp__sub_833B6394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6398"))) PPC_WEAK_FUNC(sub_833B6398);
PPC_FUNC_IMPL(__imp__sub_833B6398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,6432
	ctx.r11.s64 = ctx.r11.s64 + 6432;
	// stw r11,-26064(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26064, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B63AC"))) PPC_WEAK_FUNC(sub_833B63AC);
PPC_FUNC_IMPL(__imp__sub_833B63AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B63B0"))) PPC_WEAK_FUNC(sub_833B63B0);
PPC_FUNC_IMPL(__imp__sub_833B63B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,6432
	ctx.r11.s64 = ctx.r11.s64 + 6432;
	// stw r11,-23712(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23712, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B63C4"))) PPC_WEAK_FUNC(sub_833B63C4);
PPC_FUNC_IMPL(__imp__sub_833B63C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B63C8"))) PPC_WEAK_FUNC(sub_833B63C8);
PPC_FUNC_IMPL(__imp__sub_833B63C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-24744
	ctx.r11.s64 = ctx.r11.s64 + -24744;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B63DC"))) PPC_WEAK_FUNC(sub_833B63DC);
PPC_FUNC_IMPL(__imp__sub_833B63DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B63E0"))) PPC_WEAK_FUNC(sub_833B63E0);
PPC_FUNC_IMPL(__imp__sub_833B63E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-25776
	ctx.r11.s64 = ctx.r11.s64 + -25776;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B63F4"))) PPC_WEAK_FUNC(sub_833B63F4);
PPC_FUNC_IMPL(__imp__sub_833B63F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B63F8"))) PPC_WEAK_FUNC(sub_833B63F8);
PPC_FUNC_IMPL(__imp__sub_833B63F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,9084
	ctx.r11.s64 = ctx.r11.s64 + 9084;
	// stw r11,-23396(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B640C"))) PPC_WEAK_FUNC(sub_833B640C);
PPC_FUNC_IMPL(__imp__sub_833B640C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6410"))) PPC_WEAK_FUNC(sub_833B6410);
PPC_FUNC_IMPL(__imp__sub_833B6410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-12800
	ctx.r11.s64 = ctx.r11.s64 + -12800;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6424"))) PPC_WEAK_FUNC(sub_833B6424);
PPC_FUNC_IMPL(__imp__sub_833B6424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6428"))) PPC_WEAK_FUNC(sub_833B6428);
PPC_FUNC_IMPL(__imp__sub_833B6428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-13832
	ctx.r11.s64 = ctx.r11.s64 + -13832;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B643C"))) PPC_WEAK_FUNC(sub_833B643C);
PPC_FUNC_IMPL(__imp__sub_833B643C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6440"))) PPC_WEAK_FUNC(sub_833B6440);
PPC_FUNC_IMPL(__imp__sub_833B6440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-14864
	ctx.r11.s64 = ctx.r11.s64 + -14864;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6454"))) PPC_WEAK_FUNC(sub_833B6454);
PPC_FUNC_IMPL(__imp__sub_833B6454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6458"))) PPC_WEAK_FUNC(sub_833B6458);
PPC_FUNC_IMPL(__imp__sub_833B6458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-15896
	ctx.r11.s64 = ctx.r11.s64 + -15896;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B646C"))) PPC_WEAK_FUNC(sub_833B646C);
PPC_FUNC_IMPL(__imp__sub_833B646C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6470"))) PPC_WEAK_FUNC(sub_833B6470);
PPC_FUNC_IMPL(__imp__sub_833B6470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-16928
	ctx.r11.s64 = ctx.r11.s64 + -16928;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6484"))) PPC_WEAK_FUNC(sub_833B6484);
PPC_FUNC_IMPL(__imp__sub_833B6484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6488"))) PPC_WEAK_FUNC(sub_833B6488);
PPC_FUNC_IMPL(__imp__sub_833B6488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-17960
	ctx.r11.s64 = ctx.r11.s64 + -17960;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B649C"))) PPC_WEAK_FUNC(sub_833B649C);
PPC_FUNC_IMPL(__imp__sub_833B649C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B64A0"))) PPC_WEAK_FUNC(sub_833B64A0);
PPC_FUNC_IMPL(__imp__sub_833B64A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-18992
	ctx.r11.s64 = ctx.r11.s64 + -18992;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B64B4"))) PPC_WEAK_FUNC(sub_833B64B4);
PPC_FUNC_IMPL(__imp__sub_833B64B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B64B8"))) PPC_WEAK_FUNC(sub_833B64B8);
PPC_FUNC_IMPL(__imp__sub_833B64B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20024
	ctx.r11.s64 = ctx.r11.s64 + -20024;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B64CC"))) PPC_WEAK_FUNC(sub_833B64CC);
PPC_FUNC_IMPL(__imp__sub_833B64CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B64D0"))) PPC_WEAK_FUNC(sub_833B64D0);
PPC_FUNC_IMPL(__imp__sub_833B64D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-21056
	ctx.r11.s64 = ctx.r11.s64 + -21056;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B64E4"))) PPC_WEAK_FUNC(sub_833B64E4);
PPC_FUNC_IMPL(__imp__sub_833B64E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B64E8"))) PPC_WEAK_FUNC(sub_833B64E8);
PPC_FUNC_IMPL(__imp__sub_833B64E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-22088
	ctx.r11.s64 = ctx.r11.s64 + -22088;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B64FC"))) PPC_WEAK_FUNC(sub_833B64FC);
PPC_FUNC_IMPL(__imp__sub_833B64FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6500"))) PPC_WEAK_FUNC(sub_833B6500);
PPC_FUNC_IMPL(__imp__sub_833B6500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-23120
	ctx.r11.s64 = ctx.r11.s64 + -23120;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6514"))) PPC_WEAK_FUNC(sub_833B6514);
PPC_FUNC_IMPL(__imp__sub_833B6514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6518"))) PPC_WEAK_FUNC(sub_833B6518);
PPC_FUNC_IMPL(__imp__sub_833B6518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-11768
	ctx.r11.s64 = ctx.r11.s64 + -11768;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B652C"))) PPC_WEAK_FUNC(sub_833B652C);
PPC_FUNC_IMPL(__imp__sub_833B652C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6530"))) PPC_WEAK_FUNC(sub_833B6530);
PPC_FUNC_IMPL(__imp__sub_833B6530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-10728
	ctx.r11.s64 = ctx.r11.s64 + -10728;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6544"))) PPC_WEAK_FUNC(sub_833B6544);
PPC_FUNC_IMPL(__imp__sub_833B6544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6548"))) PPC_WEAK_FUNC(sub_833B6548);
PPC_FUNC_IMPL(__imp__sub_833B6548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,10192
	ctx.r11.s64 = ctx.r11.s64 + 10192;
	// stw r11,-9692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9692, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B655C"))) PPC_WEAK_FUNC(sub_833B655C);
PPC_FUNC_IMPL(__imp__sub_833B655C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6560"))) PPC_WEAK_FUNC(sub_833B6560);
PPC_FUNC_IMPL(__imp__sub_833B6560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,-1416(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1416, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6574"))) PPC_WEAK_FUNC(sub_833B6574);
PPC_FUNC_IMPL(__imp__sub_833B6574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6578"))) PPC_WEAK_FUNC(sub_833B6578);
PPC_FUNC_IMPL(__imp__sub_833B6578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,-1384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1384, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B658C"))) PPC_WEAK_FUNC(sub_833B658C);
PPC_FUNC_IMPL(__imp__sub_833B658C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6590"))) PPC_WEAK_FUNC(sub_833B6590);
PPC_FUNC_IMPL(__imp__sub_833B6590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,31656
	ctx.r11.s64 = ctx.r11.s64 + 31656;
	// stw r11,-1352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1352, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B65A4"))) PPC_WEAK_FUNC(sub_833B65A4);
PPC_FUNC_IMPL(__imp__sub_833B65A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B65A8"))) PPC_WEAK_FUNC(sub_833B65A8);
PPC_FUNC_IMPL(__imp__sub_833B65A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,28768
	ctx.r11.s64 = ctx.r11.s64 + 28768;
	// stw r11,236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 236, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B65BC"))) PPC_WEAK_FUNC(sub_833B65BC);
PPC_FUNC_IMPL(__imp__sub_833B65BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B65C0"))) PPC_WEAK_FUNC(sub_833B65C0);
PPC_FUNC_IMPL(__imp__sub_833B65C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,32500
	ctx.r11.s64 = ctx.r11.s64 + 32500;
	// stw r11,-40(r10)
	PPC_STORE_U32(ctx.r10.u32 + -40, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B65D4"))) PPC_WEAK_FUNC(sub_833B65D4);
PPC_FUNC_IMPL(__imp__sub_833B65D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B65D8"))) PPC_WEAK_FUNC(sub_833B65D8);
PPC_FUNC_IMPL(__imp__sub_833B65D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1072
	ctx.r11.s64 = ctx.r11.s64 + -1072;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B65EC"))) PPC_WEAK_FUNC(sub_833B65EC);
PPC_FUNC_IMPL(__imp__sub_833B65EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B65F0"))) PPC_WEAK_FUNC(sub_833B65F0);
PPC_FUNC_IMPL(__imp__sub_833B65F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6604"))) PPC_WEAK_FUNC(sub_833B6604);
PPC_FUNC_IMPL(__imp__sub_833B6604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6608"))) PPC_WEAK_FUNC(sub_833B6608);
PPC_FUNC_IMPL(__imp__sub_833B6608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,31656
	ctx.r11.s64 = ctx.r11.s64 + 31656;
	// stw r11,1544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1544, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B661C"))) PPC_WEAK_FUNC(sub_833B661C);
PPC_FUNC_IMPL(__imp__sub_833B661C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6620"))) PPC_WEAK_FUNC(sub_833B6620);
PPC_FUNC_IMPL(__imp__sub_833B6620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,29464
	ctx.r11.s64 = ctx.r11.s64 + 29464;
	// stw r11,1820(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1820, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6634"))) PPC_WEAK_FUNC(sub_833B6634);
PPC_FUNC_IMPL(__imp__sub_833B6634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6638"))) PPC_WEAK_FUNC(sub_833B6638);
PPC_FUNC_IMPL(__imp__sub_833B6638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,29464
	ctx.r11.s64 = ctx.r11.s64 + 29464;
	// stw r11,2096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2096, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B664C"))) PPC_WEAK_FUNC(sub_833B664C);
PPC_FUNC_IMPL(__imp__sub_833B664C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6650"))) PPC_WEAK_FUNC(sub_833B6650);
PPC_FUNC_IMPL(__imp__sub_833B6650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,31656
	ctx.r11.s64 = ctx.r11.s64 + 31656;
	// stw r11,4440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4440, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6664"))) PPC_WEAK_FUNC(sub_833B6664);
PPC_FUNC_IMPL(__imp__sub_833B6664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6668"))) PPC_WEAK_FUNC(sub_833B6668);
PPC_FUNC_IMPL(__imp__sub_833B6668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,2376
	ctx.r11.s64 = ctx.r11.s64 + 2376;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B667C"))) PPC_WEAK_FUNC(sub_833B667C);
PPC_FUNC_IMPL(__imp__sub_833B667C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6680"))) PPC_WEAK_FUNC(sub_833B6680);
PPC_FUNC_IMPL(__imp__sub_833B6680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,3408
	ctx.r11.s64 = ctx.r11.s64 + 3408;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6694"))) PPC_WEAK_FUNC(sub_833B6694);
PPC_FUNC_IMPL(__imp__sub_833B6694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6698"))) PPC_WEAK_FUNC(sub_833B6698);
PPC_FUNC_IMPL(__imp__sub_833B6698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,29584
	ctx.r11.s64 = ctx.r11.s64 + 29584;
	// stw r11,4716(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4716, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B66AC"))) PPC_WEAK_FUNC(sub_833B66AC);
PPC_FUNC_IMPL(__imp__sub_833B66AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B66B0"))) PPC_WEAK_FUNC(sub_833B66B0);
PPC_FUNC_IMPL(__imp__sub_833B66B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,29464
	ctx.r11.s64 = ctx.r11.s64 + 29464;
	// stw r11,4992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4992, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B66C4"))) PPC_WEAK_FUNC(sub_833B66C4);
PPC_FUNC_IMPL(__imp__sub_833B66C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B66C8"))) PPC_WEAK_FUNC(sub_833B66C8);
PPC_FUNC_IMPL(__imp__sub_833B66C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,29464
	ctx.r11.s64 = ctx.r11.s64 + 29464;
	// stw r11,5268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B66DC"))) PPC_WEAK_FUNC(sub_833B66DC);
PPC_FUNC_IMPL(__imp__sub_833B66DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B66E0"))) PPC_WEAK_FUNC(sub_833B66E0);
PPC_FUNC_IMPL(__imp__sub_833B66E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,31656
	ctx.r11.s64 = ctx.r11.s64 + 31656;
	// stw r11,5544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5544, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B66F4"))) PPC_WEAK_FUNC(sub_833B66F4);
PPC_FUNC_IMPL(__imp__sub_833B66F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B66F8"))) PPC_WEAK_FUNC(sub_833B66F8);
PPC_FUNC_IMPL(__imp__sub_833B66F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,29796
	ctx.r11.s64 = ctx.r11.s64 + 29796;
	// stw r11,5820(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5820, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B670C"))) PPC_WEAK_FUNC(sub_833B670C);
PPC_FUNC_IMPL(__imp__sub_833B670C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6710"))) PPC_WEAK_FUNC(sub_833B6710);
PPC_FUNC_IMPL(__imp__sub_833B6710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,29464
	ctx.r11.s64 = ctx.r11.s64 + 29464;
	// stw r11,6096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6096, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6724"))) PPC_WEAK_FUNC(sub_833B6724);
PPC_FUNC_IMPL(__imp__sub_833B6724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6728"))) PPC_WEAK_FUNC(sub_833B6728);
PPC_FUNC_IMPL(__imp__sub_833B6728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,29464
	ctx.r11.s64 = ctx.r11.s64 + 29464;
	// stw r11,6372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6372, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B673C"))) PPC_WEAK_FUNC(sub_833B673C);
PPC_FUNC_IMPL(__imp__sub_833B673C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6740"))) PPC_WEAK_FUNC(sub_833B6740);
PPC_FUNC_IMPL(__imp__sub_833B6740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,29464
	ctx.r11.s64 = ctx.r11.s64 + 29464;
	// stw r11,6648(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6648, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6754"))) PPC_WEAK_FUNC(sub_833B6754);
PPC_FUNC_IMPL(__imp__sub_833B6754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6758"))) PPC_WEAK_FUNC(sub_833B6758);
PPC_FUNC_IMPL(__imp__sub_833B6758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,28768
	ctx.r11.s64 = ctx.r11.s64 + 28768;
	// stw r11,6928(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6928, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B676C"))) PPC_WEAK_FUNC(sub_833B676C);
PPC_FUNC_IMPL(__imp__sub_833B676C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6770"))) PPC_WEAK_FUNC(sub_833B6770);
PPC_FUNC_IMPL(__imp__sub_833B6770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,32260
	ctx.r11.s64 = ctx.r11.s64 + 32260;
	// stw r11,7208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7208, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6784"))) PPC_WEAK_FUNC(sub_833B6784);
PPC_FUNC_IMPL(__imp__sub_833B6784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6788"))) PPC_WEAK_FUNC(sub_833B6788);
PPC_FUNC_IMPL(__imp__sub_833B6788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,9084
	ctx.r11.s64 = ctx.r11.s64 + 9084;
	// stw r11,9552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9552, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B679C"))) PPC_WEAK_FUNC(sub_833B679C);
PPC_FUNC_IMPL(__imp__sub_833B679C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B67A0"))) PPC_WEAK_FUNC(sub_833B67A0);
PPC_FUNC_IMPL(__imp__sub_833B67A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,8520
	ctx.r11.s64 = ctx.r11.s64 + 8520;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B67B4"))) PPC_WEAK_FUNC(sub_833B67B4);
PPC_FUNC_IMPL(__imp__sub_833B67B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B67B8"))) PPC_WEAK_FUNC(sub_833B67B8);
PPC_FUNC_IMPL(__imp__sub_833B67B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,7488
	ctx.r11.s64 = ctx.r11.s64 + 7488;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B67CC"))) PPC_WEAK_FUNC(sub_833B67CC);
PPC_FUNC_IMPL(__imp__sub_833B67CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B67D0"))) PPC_WEAK_FUNC(sub_833B67D0);
PPC_FUNC_IMPL(__imp__sub_833B67D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-31632
	ctx.r11.s64 = ctx.r11.s64 + -31632;
	// stw r11,9828(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9828, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B67E4"))) PPC_WEAK_FUNC(sub_833B67E4);
PPC_FUNC_IMPL(__imp__sub_833B67E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B67E8"))) PPC_WEAK_FUNC(sub_833B67E8);
PPC_FUNC_IMPL(__imp__sub_833B67E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,32260
	ctx.r11.s64 = ctx.r11.s64 + 32260;
	// stw r11,10104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B67FC"))) PPC_WEAK_FUNC(sub_833B67FC);
PPC_FUNC_IMPL(__imp__sub_833B67FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6800"))) PPC_WEAK_FUNC(sub_833B6800);
PPC_FUNC_IMPL(__imp__sub_833B6800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,10384
	ctx.r11.s64 = ctx.r11.s64 + 10384;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6814"))) PPC_WEAK_FUNC(sub_833B6814);
PPC_FUNC_IMPL(__imp__sub_833B6814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6818"))) PPC_WEAK_FUNC(sub_833B6818);
PPC_FUNC_IMPL(__imp__sub_833B6818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,12568
	ctx.r11.s64 = ctx.r11.s64 + 12568;
	// stw r11,11416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11416, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B682C"))) PPC_WEAK_FUNC(sub_833B682C);
PPC_FUNC_IMPL(__imp__sub_833B682C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6830"))) PPC_WEAK_FUNC(sub_833B6830);
PPC_FUNC_IMPL(__imp__sub_833B6830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,31660
	ctx.r11.s64 = ctx.r11.s64 + 31660;
	// stw r11,11692(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11692, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6844"))) PPC_WEAK_FUNC(sub_833B6844);
PPC_FUNC_IMPL(__imp__sub_833B6844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6848"))) PPC_WEAK_FUNC(sub_833B6848);
PPC_FUNC_IMPL(__imp__sub_833B6848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,12568
	ctx.r11.s64 = ctx.r11.s64 + 12568;
	// stw r11,11968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11968, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B685C"))) PPC_WEAK_FUNC(sub_833B685C);
PPC_FUNC_IMPL(__imp__sub_833B685C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6860"))) PPC_WEAK_FUNC(sub_833B6860);
PPC_FUNC_IMPL(__imp__sub_833B6860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,12568
	ctx.r11.s64 = ctx.r11.s64 + 12568;
	// stw r11,12244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12244, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6874"))) PPC_WEAK_FUNC(sub_833B6874);
PPC_FUNC_IMPL(__imp__sub_833B6874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6878"))) PPC_WEAK_FUNC(sub_833B6878);
PPC_FUNC_IMPL(__imp__sub_833B6878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,12568
	ctx.r11.s64 = ctx.r11.s64 + 12568;
	// stw r11,12520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12520, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B688C"))) PPC_WEAK_FUNC(sub_833B688C);
PPC_FUNC_IMPL(__imp__sub_833B688C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6890"))) PPC_WEAK_FUNC(sub_833B6890);
PPC_FUNC_IMPL(__imp__sub_833B6890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,30640
	ctx.r11.s64 = ctx.r11.s64 + 30640;
	// stw r11,12796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12796, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B68A4"))) PPC_WEAK_FUNC(sub_833B68A4);
PPC_FUNC_IMPL(__imp__sub_833B68A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B68A8"))) PPC_WEAK_FUNC(sub_833B68A8);
PPC_FUNC_IMPL(__imp__sub_833B68A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,13000
	ctx.r11.s64 = ctx.r11.s64 + 13000;
	// stw r11,13072(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13072, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B68BC"))) PPC_WEAK_FUNC(sub_833B68BC);
PPC_FUNC_IMPL(__imp__sub_833B68BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B68C0"))) PPC_WEAK_FUNC(sub_833B68C0);
PPC_FUNC_IMPL(__imp__sub_833B68C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,13080
	ctx.r11.s64 = ctx.r11.s64 + 13080;
	// stw r11,13348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13348, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B68D4"))) PPC_WEAK_FUNC(sub_833B68D4);
PPC_FUNC_IMPL(__imp__sub_833B68D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B68D8"))) PPC_WEAK_FUNC(sub_833B68D8);
PPC_FUNC_IMPL(__imp__sub_833B68D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,9248
	ctx.r11.s64 = ctx.r11.s64 + 9248;
	// stw r11,15688(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15688, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B68EC"))) PPC_WEAK_FUNC(sub_833B68EC);
PPC_FUNC_IMPL(__imp__sub_833B68EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B68F0"))) PPC_WEAK_FUNC(sub_833B68F0);
PPC_FUNC_IMPL(__imp__sub_833B68F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,14656
	ctx.r11.s64 = ctx.r11.s64 + 14656;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6904"))) PPC_WEAK_FUNC(sub_833B6904);
PPC_FUNC_IMPL(__imp__sub_833B6904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6908"))) PPC_WEAK_FUNC(sub_833B6908);
PPC_FUNC_IMPL(__imp__sub_833B6908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,13624
	ctx.r11.s64 = ctx.r11.s64 + 13624;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B691C"))) PPC_WEAK_FUNC(sub_833B691C);
PPC_FUNC_IMPL(__imp__sub_833B691C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6920"))) PPC_WEAK_FUNC(sub_833B6920);
PPC_FUNC_IMPL(__imp__sub_833B6920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,6432
	ctx.r11.s64 = ctx.r11.s64 + 6432;
	// stw r11,15964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15964, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6934"))) PPC_WEAK_FUNC(sub_833B6934);
PPC_FUNC_IMPL(__imp__sub_833B6934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6938"))) PPC_WEAK_FUNC(sub_833B6938);
PPC_FUNC_IMPL(__imp__sub_833B6938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,31656
	ctx.r11.s64 = ctx.r11.s64 + 31656;
	// stw r11,16240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16240, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B694C"))) PPC_WEAK_FUNC(sub_833B694C);
PPC_FUNC_IMPL(__imp__sub_833B694C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6950"))) PPC_WEAK_FUNC(sub_833B6950);
PPC_FUNC_IMPL(__imp__sub_833B6950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,30756
	ctx.r11.s64 = ctx.r11.s64 + 30756;
	// stw r11,16516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16516, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6964"))) PPC_WEAK_FUNC(sub_833B6964);
PPC_FUNC_IMPL(__imp__sub_833B6964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6968"))) PPC_WEAK_FUNC(sub_833B6968);
PPC_FUNC_IMPL(__imp__sub_833B6968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,29464
	ctx.r11.s64 = ctx.r11.s64 + 29464;
	// stw r11,16792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16792, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B697C"))) PPC_WEAK_FUNC(sub_833B697C);
PPC_FUNC_IMPL(__imp__sub_833B697C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6980"))) PPC_WEAK_FUNC(sub_833B6980);
PPC_FUNC_IMPL(__imp__sub_833B6980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,29464
	ctx.r11.s64 = ctx.r11.s64 + 29464;
	// stw r11,17076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17076, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6994"))) PPC_WEAK_FUNC(sub_833B6994);
PPC_FUNC_IMPL(__imp__sub_833B6994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6998"))) PPC_WEAK_FUNC(sub_833B6998);
PPC_FUNC_IMPL(__imp__sub_833B6998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,12568
	ctx.r11.s64 = ctx.r11.s64 + 12568;
	// stw r11,17352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17352, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B69AC"))) PPC_WEAK_FUNC(sub_833B69AC);
PPC_FUNC_IMPL(__imp__sub_833B69AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B69B0"))) PPC_WEAK_FUNC(sub_833B69B0);
PPC_FUNC_IMPL(__imp__sub_833B69B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,12568
	ctx.r11.s64 = ctx.r11.s64 + 12568;
	// stw r11,17628(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17628, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B69C4"))) PPC_WEAK_FUNC(sub_833B69C4);
PPC_FUNC_IMPL(__imp__sub_833B69C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B69C8"))) PPC_WEAK_FUNC(sub_833B69C8);
PPC_FUNC_IMPL(__imp__sub_833B69C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,18568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B69DC"))) PPC_WEAK_FUNC(sub_833B69DC);
PPC_FUNC_IMPL(__imp__sub_833B69DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B69E0"))) PPC_WEAK_FUNC(sub_833B69E0);
PPC_FUNC_IMPL(__imp__sub_833B69E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,18300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18300, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B69F4"))) PPC_WEAK_FUNC(sub_833B69F4);
PPC_FUNC_IMPL(__imp__sub_833B69F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B69F8"))) PPC_WEAK_FUNC(sub_833B69F8);
PPC_FUNC_IMPL(__imp__sub_833B69F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,19372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19372, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6A0C"))) PPC_WEAK_FUNC(sub_833B6A0C);
PPC_FUNC_IMPL(__imp__sub_833B6A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6A10"))) PPC_WEAK_FUNC(sub_833B6A10);
PPC_FUNC_IMPL(__imp__sub_833B6A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,20980(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20980, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6A24"))) PPC_WEAK_FUNC(sub_833B6A24);
PPC_FUNC_IMPL(__imp__sub_833B6A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6A28"))) PPC_WEAK_FUNC(sub_833B6A28);
PPC_FUNC_IMPL(__imp__sub_833B6A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,21248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21248, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6A3C"))) PPC_WEAK_FUNC(sub_833B6A3C);
PPC_FUNC_IMPL(__imp__sub_833B6A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6A40"))) PPC_WEAK_FUNC(sub_833B6A40);
PPC_FUNC_IMPL(__imp__sub_833B6A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,18836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18836, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6A54"))) PPC_WEAK_FUNC(sub_833B6A54);
PPC_FUNC_IMPL(__imp__sub_833B6A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6A58"))) PPC_WEAK_FUNC(sub_833B6A58);
PPC_FUNC_IMPL(__imp__sub_833B6A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,20176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20176, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6A6C"))) PPC_WEAK_FUNC(sub_833B6A6C);
PPC_FUNC_IMPL(__imp__sub_833B6A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6A70"))) PPC_WEAK_FUNC(sub_833B6A70);
PPC_FUNC_IMPL(__imp__sub_833B6A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,19640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19640, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6A84"))) PPC_WEAK_FUNC(sub_833B6A84);
PPC_FUNC_IMPL(__imp__sub_833B6A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6A88"))) PPC_WEAK_FUNC(sub_833B6A88);
PPC_FUNC_IMPL(__imp__sub_833B6A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,21784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21784, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6A9C"))) PPC_WEAK_FUNC(sub_833B6A9C);
PPC_FUNC_IMPL(__imp__sub_833B6A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6AA0"))) PPC_WEAK_FUNC(sub_833B6AA0);
PPC_FUNC_IMPL(__imp__sub_833B6AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,21516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21516, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6AB4"))) PPC_WEAK_FUNC(sub_833B6AB4);
PPC_FUNC_IMPL(__imp__sub_833B6AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6AB8"))) PPC_WEAK_FUNC(sub_833B6AB8);
PPC_FUNC_IMPL(__imp__sub_833B6AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,19908(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19908, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6ACC"))) PPC_WEAK_FUNC(sub_833B6ACC);
PPC_FUNC_IMPL(__imp__sub_833B6ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6AD0"))) PPC_WEAK_FUNC(sub_833B6AD0);
PPC_FUNC_IMPL(__imp__sub_833B6AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,22320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6AE4"))) PPC_WEAK_FUNC(sub_833B6AE4);
PPC_FUNC_IMPL(__imp__sub_833B6AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6AE8"))) PPC_WEAK_FUNC(sub_833B6AE8);
PPC_FUNC_IMPL(__imp__sub_833B6AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,20444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20444, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6AFC"))) PPC_WEAK_FUNC(sub_833B6AFC);
PPC_FUNC_IMPL(__imp__sub_833B6AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6B00"))) PPC_WEAK_FUNC(sub_833B6B00);
PPC_FUNC_IMPL(__imp__sub_833B6B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,19104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6B14"))) PPC_WEAK_FUNC(sub_833B6B14);
PPC_FUNC_IMPL(__imp__sub_833B6B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6B18"))) PPC_WEAK_FUNC(sub_833B6B18);
PPC_FUNC_IMPL(__imp__sub_833B6B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,20712(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20712, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6B2C"))) PPC_WEAK_FUNC(sub_833B6B2C);
PPC_FUNC_IMPL(__imp__sub_833B6B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6B30"))) PPC_WEAK_FUNC(sub_833B6B30);
PPC_FUNC_IMPL(__imp__sub_833B6B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,22052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22052, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6B44"))) PPC_WEAK_FUNC(sub_833B6B44);
PPC_FUNC_IMPL(__imp__sub_833B6B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6B48"))) PPC_WEAK_FUNC(sub_833B6B48);
PPC_FUNC_IMPL(__imp__sub_833B6B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,18224
	ctx.r11.s64 = ctx.r11.s64 + 18224;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stb r10,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6B60"))) PPC_WEAK_FUNC(sub_833B6B60);
PPC_FUNC_IMPL(__imp__sub_833B6B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,18144
	ctx.r11.s64 = ctx.r11.s64 + 18144;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stb r10,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6B78"))) PPC_WEAK_FUNC(sub_833B6B78);
PPC_FUNC_IMPL(__imp__sub_833B6B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,18064
	ctx.r11.s64 = ctx.r11.s64 + 18064;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stb r10,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6B90"))) PPC_WEAK_FUNC(sub_833B6B90);
PPC_FUNC_IMPL(__imp__sub_833B6B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,17984
	ctx.r11.s64 = ctx.r11.s64 + 17984;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stb r10,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6BA8"))) PPC_WEAK_FUNC(sub_833B6BA8);
PPC_FUNC_IMPL(__imp__sub_833B6BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,17904
	ctx.r11.s64 = ctx.r11.s64 + 17904;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stb r10,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6BC0"))) PPC_WEAK_FUNC(sub_833B6BC0);
PPC_FUNC_IMPL(__imp__sub_833B6BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,32260
	ctx.r11.s64 = ctx.r11.s64 + 32260;
	// stw r11,22588(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22588, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6BD4"))) PPC_WEAK_FUNC(sub_833B6BD4);
PPC_FUNC_IMPL(__imp__sub_833B6BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6BD8"))) PPC_WEAK_FUNC(sub_833B6BD8);
PPC_FUNC_IMPL(__imp__sub_833B6BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,32260
	ctx.r11.s64 = ctx.r11.s64 + 32260;
	// stw r11,22864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22864, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6BEC"))) PPC_WEAK_FUNC(sub_833B6BEC);
PPC_FUNC_IMPL(__imp__sub_833B6BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6BF0"))) PPC_WEAK_FUNC(sub_833B6BF0);
PPC_FUNC_IMPL(__imp__sub_833B6BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,32260
	ctx.r11.s64 = ctx.r11.s64 + 32260;
	// stw r11,23140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23140, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6C04"))) PPC_WEAK_FUNC(sub_833B6C04);
PPC_FUNC_IMPL(__imp__sub_833B6C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6C08"))) PPC_WEAK_FUNC(sub_833B6C08);
PPC_FUNC_IMPL(__imp__sub_833B6C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,24528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24528, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6C1C"))) PPC_WEAK_FUNC(sub_833B6C1C);
PPC_FUNC_IMPL(__imp__sub_833B6C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6C20"))) PPC_WEAK_FUNC(sub_833B6C20);
PPC_FUNC_IMPL(__imp__sub_833B6C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,9084
	ctx.r11.s64 = ctx.r11.s64 + 9084;
	// stw r11,24796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24796, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6C34"))) PPC_WEAK_FUNC(sub_833B6C34);
PPC_FUNC_IMPL(__imp__sub_833B6C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6C38"))) PPC_WEAK_FUNC(sub_833B6C38);
PPC_FUNC_IMPL(__imp__sub_833B6C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,23416
	ctx.r11.s64 = ctx.r11.s64 + 23416;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stb r10,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6C50"))) PPC_WEAK_FUNC(sub_833B6C50);
PPC_FUNC_IMPL(__imp__sub_833B6C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,23496
	ctx.r11.s64 = ctx.r11.s64 + 23496;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6C64"))) PPC_WEAK_FUNC(sub_833B6C64);
PPC_FUNC_IMPL(__imp__sub_833B6C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6C68"))) PPC_WEAK_FUNC(sub_833B6C68);
PPC_FUNC_IMPL(__imp__sub_833B6C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-32448
	ctx.r11.s64 = ctx.r11.s64 + -32448;
	// stw r11,25072(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25072, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6C7C"))) PPC_WEAK_FUNC(sub_833B6C7C);
PPC_FUNC_IMPL(__imp__sub_833B6C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6C80"))) PPC_WEAK_FUNC(sub_833B6C80);
PPC_FUNC_IMPL(__imp__sub_833B6C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,30756
	ctx.r11.s64 = ctx.r11.s64 + 30756;
	// stw r11,25352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25352, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6C94"))) PPC_WEAK_FUNC(sub_833B6C94);
PPC_FUNC_IMPL(__imp__sub_833B6C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6C98"))) PPC_WEAK_FUNC(sub_833B6C98);
PPC_FUNC_IMPL(__imp__sub_833B6C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,31656
	ctx.r11.s64 = ctx.r11.s64 + 31656;
	// stw r11,25628(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25628, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6CAC"))) PPC_WEAK_FUNC(sub_833B6CAC);
PPC_FUNC_IMPL(__imp__sub_833B6CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6CB0"))) PPC_WEAK_FUNC(sub_833B6CB0);
PPC_FUNC_IMPL(__imp__sub_833B6CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,30244
	ctx.r11.s64 = ctx.r11.s64 + 30244;
	// stw r11,27220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27220, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6CC4"))) PPC_WEAK_FUNC(sub_833B6CC4);
PPC_FUNC_IMPL(__imp__sub_833B6CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6CC8"))) PPC_WEAK_FUNC(sub_833B6CC8);
PPC_FUNC_IMPL(__imp__sub_833B6CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,30244
	ctx.r11.s64 = ctx.r11.s64 + 30244;
	// stw r11,28600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28600, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6CDC"))) PPC_WEAK_FUNC(sub_833B6CDC);
PPC_FUNC_IMPL(__imp__sub_833B6CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6CE0"))) PPC_WEAK_FUNC(sub_833B6CE0);
PPC_FUNC_IMPL(__imp__sub_833B6CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,30244
	ctx.r11.s64 = ctx.r11.s64 + 30244;
	// stw r11,27496(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27496, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6CF4"))) PPC_WEAK_FUNC(sub_833B6CF4);
PPC_FUNC_IMPL(__imp__sub_833B6CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6CF8"))) PPC_WEAK_FUNC(sub_833B6CF8);
PPC_FUNC_IMPL(__imp__sub_833B6CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,30244
	ctx.r11.s64 = ctx.r11.s64 + 30244;
	// stw r11,29428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29428, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6D0C"))) PPC_WEAK_FUNC(sub_833B6D0C);
PPC_FUNC_IMPL(__imp__sub_833B6D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6D10"))) PPC_WEAK_FUNC(sub_833B6D10);
PPC_FUNC_IMPL(__imp__sub_833B6D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,30244
	ctx.r11.s64 = ctx.r11.s64 + 30244;
	// stw r11,29152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6D24"))) PPC_WEAK_FUNC(sub_833B6D24);
PPC_FUNC_IMPL(__imp__sub_833B6D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6D28"))) PPC_WEAK_FUNC(sub_833B6D28);
PPC_FUNC_IMPL(__imp__sub_833B6D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,12404
	ctx.r11.s64 = ctx.r11.s64 + 12404;
	// stw r11,28048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28048, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6D3C"))) PPC_WEAK_FUNC(sub_833B6D3C);
PPC_FUNC_IMPL(__imp__sub_833B6D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6D40"))) PPC_WEAK_FUNC(sub_833B6D40);
PPC_FUNC_IMPL(__imp__sub_833B6D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,12404
	ctx.r11.s64 = ctx.r11.s64 + 12404;
	// stw r11,26944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26944, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6D54"))) PPC_WEAK_FUNC(sub_833B6D54);
PPC_FUNC_IMPL(__imp__sub_833B6D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6D58"))) PPC_WEAK_FUNC(sub_833B6D58);
PPC_FUNC_IMPL(__imp__sub_833B6D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,12404
	ctx.r11.s64 = ctx.r11.s64 + 12404;
	// stw r11,28324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6D6C"))) PPC_WEAK_FUNC(sub_833B6D6C);
PPC_FUNC_IMPL(__imp__sub_833B6D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6D70"))) PPC_WEAK_FUNC(sub_833B6D70);
PPC_FUNC_IMPL(__imp__sub_833B6D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,30244
	ctx.r11.s64 = ctx.r11.s64 + 30244;
	// stw r11,28876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28876, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6D84"))) PPC_WEAK_FUNC(sub_833B6D84);
PPC_FUNC_IMPL(__imp__sub_833B6D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6D88"))) PPC_WEAK_FUNC(sub_833B6D88);
PPC_FUNC_IMPL(__imp__sub_833B6D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,12404
	ctx.r11.s64 = ctx.r11.s64 + 12404;
	// stw r11,27772(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27772, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6D9C"))) PPC_WEAK_FUNC(sub_833B6D9C);
PPC_FUNC_IMPL(__imp__sub_833B6D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6DA0"))) PPC_WEAK_FUNC(sub_833B6DA0);
PPC_FUNC_IMPL(__imp__sub_833B6DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,25912
	ctx.r11.s64 = ctx.r11.s64 + 25912;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

