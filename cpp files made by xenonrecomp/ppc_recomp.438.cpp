#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82D7F5D4"))) PPC_WEAK_FUNC(sub_82D7F5D4);
PPC_FUNC_IMPL(__imp__sub_82D7F5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F5D8"))) PPC_WEAK_FUNC(sub_82D7F5D8);
PPC_FUNC_IMPL(__imp__sub_82D7F5D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f5e8
	if (!ctx.cr6.eq) goto loc_82D7F5E8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F5E8:
	// b 0x82d81eb0
	sub_82D81EB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F5EC"))) PPC_WEAK_FUNC(sub_82D7F5EC);
PPC_FUNC_IMPL(__imp__sub_82D7F5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F5F0"))) PPC_WEAK_FUNC(sub_82D7F5F0);
PPC_FUNC_IMPL(__imp__sub_82D7F5F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f600
	if (!ctx.cr6.eq) goto loc_82D7F600;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F600:
	// b 0x82d81ef8
	sub_82D81EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F604"))) PPC_WEAK_FUNC(sub_82D7F604);
PPC_FUNC_IMPL(__imp__sub_82D7F604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F608"))) PPC_WEAK_FUNC(sub_82D7F608);
PPC_FUNC_IMPL(__imp__sub_82D7F608) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f618
	if (!ctx.cr6.eq) goto loc_82D7F618;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F618:
	// b 0x82d81f40
	sub_82D81F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F61C"))) PPC_WEAK_FUNC(sub_82D7F61C);
PPC_FUNC_IMPL(__imp__sub_82D7F61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F620"))) PPC_WEAK_FUNC(sub_82D7F620);
PPC_FUNC_IMPL(__imp__sub_82D7F620) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f630
	if (!ctx.cr6.eq) goto loc_82D7F630;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F630:
	// b 0x82d81f88
	sub_82D81F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F634"))) PPC_WEAK_FUNC(sub_82D7F634);
PPC_FUNC_IMPL(__imp__sub_82D7F634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F638"))) PPC_WEAK_FUNC(sub_82D7F638);
PPC_FUNC_IMPL(__imp__sub_82D7F638) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f648
	if (!ctx.cr6.eq) goto loc_82D7F648;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F648:
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// b 0x82d81fd0
	sub_82D81FD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F658"))) PPC_WEAK_FUNC(sub_82D7F658);
PPC_FUNC_IMPL(__imp__sub_82D7F658) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f68c
	if (!ctx.cr6.eq) goto loc_82D7F68C;
	// li r3,37
	ctx.r3.s64 = 37;
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
loc_82D7F68C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d82030
	ctx.lr = 0x82D7F694;
	sub_82D82030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d7f6b8
	if (!ctx.cr6.eq) goto loc_82D7F6B8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7f6b8
	if (ctx.cr6.eq) goto loc_82D7F6B8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D7F6B8:
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

__attribute__((alias("__imp__sub_82D7F6CC"))) PPC_WEAK_FUNC(sub_82D7F6CC);
PPC_FUNC_IMPL(__imp__sub_82D7F6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F6D0"))) PPC_WEAK_FUNC(sub_82D7F6D0);
PPC_FUNC_IMPL(__imp__sub_82D7F6D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f6e0
	if (!ctx.cr6.eq) goto loc_82D7F6E0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F6E0:
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// b 0x82d82078
	sub_82D82078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F6F0"))) PPC_WEAK_FUNC(sub_82D7F6F0);
PPC_FUNC_IMPL(__imp__sub_82D7F6F0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f724
	if (!ctx.cr6.eq) goto loc_82D7F724;
	// li r3,37
	ctx.r3.s64 = 37;
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
loc_82D7F724:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d820d8
	ctx.lr = 0x82D7F72C;
	sub_82D820D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d7f750
	if (!ctx.cr6.eq) goto loc_82D7F750;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7f750
	if (ctx.cr6.eq) goto loc_82D7F750;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D7F750:
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

__attribute__((alias("__imp__sub_82D7F764"))) PPC_WEAK_FUNC(sub_82D7F764);
PPC_FUNC_IMPL(__imp__sub_82D7F764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F768"))) PPC_WEAK_FUNC(sub_82D7F768);
PPC_FUNC_IMPL(__imp__sub_82D7F768) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f778
	if (!ctx.cr6.eq) goto loc_82D7F778;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F778:
	// b 0x82d82120
	sub_82D82120(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F77C"))) PPC_WEAK_FUNC(sub_82D7F77C);
PPC_FUNC_IMPL(__imp__sub_82D7F77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F780"))) PPC_WEAK_FUNC(sub_82D7F780);
PPC_FUNC_IMPL(__imp__sub_82D7F780) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f790
	if (!ctx.cr6.eq) goto loc_82D7F790;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F790:
	// b 0x82d82160
	sub_82D82160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F794"))) PPC_WEAK_FUNC(sub_82D7F794);
PPC_FUNC_IMPL(__imp__sub_82D7F794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F798"))) PPC_WEAK_FUNC(sub_82D7F798);
PPC_FUNC_IMPL(__imp__sub_82D7F798) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f7a8
	if (!ctx.cr6.eq) goto loc_82D7F7A8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F7A8:
	// b 0x82d821c0
	sub_82D821C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F7AC"))) PPC_WEAK_FUNC(sub_82D7F7AC);
PPC_FUNC_IMPL(__imp__sub_82D7F7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F7B0"))) PPC_WEAK_FUNC(sub_82D7F7B0);
PPC_FUNC_IMPL(__imp__sub_82D7F7B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f7c0
	if (!ctx.cr6.eq) goto loc_82D7F7C0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F7C0:
	// b 0x82d82218
	sub_82D82218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F7C4"))) PPC_WEAK_FUNC(sub_82D7F7C4);
PPC_FUNC_IMPL(__imp__sub_82D7F7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F7C8"))) PPC_WEAK_FUNC(sub_82D7F7C8);
PPC_FUNC_IMPL(__imp__sub_82D7F7C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f7d8
	if (!ctx.cr6.eq) goto loc_82D7F7D8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F7D8:
	// b 0x82d82268
	sub_82D82268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F7DC"))) PPC_WEAK_FUNC(sub_82D7F7DC);
PPC_FUNC_IMPL(__imp__sub_82D7F7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F7E0"))) PPC_WEAK_FUNC(sub_82D7F7E0);
PPC_FUNC_IMPL(__imp__sub_82D7F7E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f7f0
	if (!ctx.cr6.eq) goto loc_82D7F7F0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F7F0:
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// b 0x82d822d8
	sub_82D822D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F800"))) PPC_WEAK_FUNC(sub_82D7F800);
PPC_FUNC_IMPL(__imp__sub_82D7F800) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f810
	if (!ctx.cr6.eq) goto loc_82D7F810;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F810:
	// b 0x82d82338
	sub_82D82338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F814"))) PPC_WEAK_FUNC(sub_82D7F814);
PPC_FUNC_IMPL(__imp__sub_82D7F814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F818"))) PPC_WEAK_FUNC(sub_82D7F818);
PPC_FUNC_IMPL(__imp__sub_82D7F818) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f828
	if (!ctx.cr6.eq) goto loc_82D7F828;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F828:
	// b 0x82d82398
	sub_82D82398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F82C"))) PPC_WEAK_FUNC(sub_82D7F82C);
PPC_FUNC_IMPL(__imp__sub_82D7F82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F830"))) PPC_WEAK_FUNC(sub_82D7F830);
PPC_FUNC_IMPL(__imp__sub_82D7F830) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f840
	if (!ctx.cr6.eq) goto loc_82D7F840;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F840:
	// b 0x82d823e8
	sub_82D823E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F844"))) PPC_WEAK_FUNC(sub_82D7F844);
PPC_FUNC_IMPL(__imp__sub_82D7F844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F848"))) PPC_WEAK_FUNC(sub_82D7F848);
PPC_FUNC_IMPL(__imp__sub_82D7F848) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f858
	if (!ctx.cr6.eq) goto loc_82D7F858;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F858:
	// b 0x82d82468
	sub_82D82468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F85C"))) PPC_WEAK_FUNC(sub_82D7F85C);
PPC_FUNC_IMPL(__imp__sub_82D7F85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F860"))) PPC_WEAK_FUNC(sub_82D7F860);
PPC_FUNC_IMPL(__imp__sub_82D7F860) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f870
	if (!ctx.cr6.eq) goto loc_82D7F870;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F870:
	// b 0x82d824c0
	sub_82D824C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F874"))) PPC_WEAK_FUNC(sub_82D7F874);
PPC_FUNC_IMPL(__imp__sub_82D7F874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F878"))) PPC_WEAK_FUNC(sub_82D7F878);
PPC_FUNC_IMPL(__imp__sub_82D7F878) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f888
	if (!ctx.cr6.eq) goto loc_82D7F888;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F888:
	// b 0x82d82508
	sub_82D82508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F88C"))) PPC_WEAK_FUNC(sub_82D7F88C);
PPC_FUNC_IMPL(__imp__sub_82D7F88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F890"))) PPC_WEAK_FUNC(sub_82D7F890);
PPC_FUNC_IMPL(__imp__sub_82D7F890) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f8a0
	if (!ctx.cr6.eq) goto loc_82D7F8A0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F8A0:
	// b 0x82d92c10
	sub_82D92C10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F8A4"))) PPC_WEAK_FUNC(sub_82D7F8A4);
PPC_FUNC_IMPL(__imp__sub_82D7F8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F8A8"))) PPC_WEAK_FUNC(sub_82D7F8A8);
PPC_FUNC_IMPL(__imp__sub_82D7F8A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f8b8
	if (!ctx.cr6.eq) goto loc_82D7F8B8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F8B8:
	// b 0x82d92c58
	sub_82D92C58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F8BC"))) PPC_WEAK_FUNC(sub_82D7F8BC);
PPC_FUNC_IMPL(__imp__sub_82D7F8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F8C0"))) PPC_WEAK_FUNC(sub_82D7F8C0);
PPC_FUNC_IMPL(__imp__sub_82D7F8C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f8d0
	if (!ctx.cr6.eq) goto loc_82D7F8D0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F8D0:
	// b 0x82d92ca0
	sub_82D92CA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F8D4"))) PPC_WEAK_FUNC(sub_82D7F8D4);
PPC_FUNC_IMPL(__imp__sub_82D7F8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F8D8"))) PPC_WEAK_FUNC(sub_82D7F8D8);
PPC_FUNC_IMPL(__imp__sub_82D7F8D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f8e8
	if (!ctx.cr6.eq) goto loc_82D7F8E8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F8E8:
	// b 0x82d92ce8
	sub_82D92CE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F8EC"))) PPC_WEAK_FUNC(sub_82D7F8EC);
PPC_FUNC_IMPL(__imp__sub_82D7F8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F8F0"))) PPC_WEAK_FUNC(sub_82D7F8F0);
PPC_FUNC_IMPL(__imp__sub_82D7F8F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f900
	if (!ctx.cr6.eq) goto loc_82D7F900;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F900:
	// b 0x82d92d30
	sub_82D92D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F904"))) PPC_WEAK_FUNC(sub_82D7F904);
PPC_FUNC_IMPL(__imp__sub_82D7F904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F908"))) PPC_WEAK_FUNC(sub_82D7F908);
PPC_FUNC_IMPL(__imp__sub_82D7F908) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f918
	if (!ctx.cr6.eq) goto loc_82D7F918;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F918:
	// b 0x82d92d78
	sub_82D92D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F91C"))) PPC_WEAK_FUNC(sub_82D7F91C);
PPC_FUNC_IMPL(__imp__sub_82D7F91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F920"))) PPC_WEAK_FUNC(sub_82D7F920);
PPC_FUNC_IMPL(__imp__sub_82D7F920) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f930
	if (!ctx.cr6.eq) goto loc_82D7F930;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F930:
	// b 0x82d92dc0
	sub_82D92DC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F934"))) PPC_WEAK_FUNC(sub_82D7F934);
PPC_FUNC_IMPL(__imp__sub_82D7F934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F938"))) PPC_WEAK_FUNC(sub_82D7F938);
PPC_FUNC_IMPL(__imp__sub_82D7F938) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f948
	if (!ctx.cr6.eq) goto loc_82D7F948;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F948:
	// b 0x82d92e08
	sub_82D92E08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F94C"))) PPC_WEAK_FUNC(sub_82D7F94C);
PPC_FUNC_IMPL(__imp__sub_82D7F94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F950"))) PPC_WEAK_FUNC(sub_82D7F950);
PPC_FUNC_IMPL(__imp__sub_82D7F950) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f960
	if (!ctx.cr6.eq) goto loc_82D7F960;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F960:
	// b 0x82d92e50
	sub_82D92E50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F964"))) PPC_WEAK_FUNC(sub_82D7F964);
PPC_FUNC_IMPL(__imp__sub_82D7F964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F968"))) PPC_WEAK_FUNC(sub_82D7F968);
PPC_FUNC_IMPL(__imp__sub_82D7F968) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f978
	if (!ctx.cr6.eq) goto loc_82D7F978;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F978:
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 ^ 1;
	// b 0x82d92e88
	sub_82D92E88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F988"))) PPC_WEAK_FUNC(sub_82D7F988);
PPC_FUNC_IMPL(__imp__sub_82D7F988) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f998
	if (!ctx.cr6.eq) goto loc_82D7F998;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F998:
	// b 0x82d92ef8
	sub_82D92EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F99C"))) PPC_WEAK_FUNC(sub_82D7F99C);
PPC_FUNC_IMPL(__imp__sub_82D7F99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F9A0"))) PPC_WEAK_FUNC(sub_82D7F9A0);
PPC_FUNC_IMPL(__imp__sub_82D7F9A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f9b0
	if (!ctx.cr6.eq) goto loc_82D7F9B0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F9B0:
	// b 0x82d92f40
	sub_82D92F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F9B4"))) PPC_WEAK_FUNC(sub_82D7F9B4);
PPC_FUNC_IMPL(__imp__sub_82D7F9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F9B8"))) PPC_WEAK_FUNC(sub_82D7F9B8);
PPC_FUNC_IMPL(__imp__sub_82D7F9B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f9c8
	if (!ctx.cr6.eq) goto loc_82D7F9C8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F9C8:
	// b 0x82d92f98
	sub_82D92F98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F9CC"))) PPC_WEAK_FUNC(sub_82D7F9CC);
PPC_FUNC_IMPL(__imp__sub_82D7F9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F9D0"))) PPC_WEAK_FUNC(sub_82D7F9D0);
PPC_FUNC_IMPL(__imp__sub_82D7F9D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f9e0
	if (!ctx.cr6.eq) goto loc_82D7F9E0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F9E0:
	// b 0x82d92ff0
	sub_82D92FF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F9E4"))) PPC_WEAK_FUNC(sub_82D7F9E4);
PPC_FUNC_IMPL(__imp__sub_82D7F9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F9E8"))) PPC_WEAK_FUNC(sub_82D7F9E8);
PPC_FUNC_IMPL(__imp__sub_82D7F9E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7f9f8
	if (!ctx.cr6.eq) goto loc_82D7F9F8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7F9F8:
	// b 0x82d93038
	sub_82D93038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F9FC"))) PPC_WEAK_FUNC(sub_82D7F9FC);
PPC_FUNC_IMPL(__imp__sub_82D7F9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FA00"))) PPC_WEAK_FUNC(sub_82D7FA00);
PPC_FUNC_IMPL(__imp__sub_82D7FA00) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7fa10
	if (!ctx.cr6.eq) goto loc_82D7FA10;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7FA10:
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r7,r11,1
	ctx.r7.u64 = ctx.r11.u64 ^ 1;
	// b 0x82d93080
	sub_82D93080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7FA20"))) PPC_WEAK_FUNC(sub_82D7FA20);
PPC_FUNC_IMPL(__imp__sub_82D7FA20) {
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
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7fa54
	if (!ctx.cr6.eq) goto loc_82D7FA54;
	// li r3,37
	ctx.r3.s64 = 37;
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
loc_82D7FA54:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82d930f8
	ctx.lr = 0x82D7FA5C;
	sub_82D930F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d7fa80
	if (!ctx.cr6.eq) goto loc_82D7FA80;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7fa80
	if (ctx.cr6.eq) goto loc_82D7FA80;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D7FA80:
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

__attribute__((alias("__imp__sub_82D7FA94"))) PPC_WEAK_FUNC(sub_82D7FA94);
PPC_FUNC_IMPL(__imp__sub_82D7FA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FA98"))) PPC_WEAK_FUNC(sub_82D7FA98);
PPC_FUNC_IMPL(__imp__sub_82D7FA98) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7faa8
	if (!ctx.cr6.eq) goto loc_82D7FAA8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7FAA8:
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// b 0x82d93148
	sub_82D93148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7FAB8"))) PPC_WEAK_FUNC(sub_82D7FAB8);
PPC_FUNC_IMPL(__imp__sub_82D7FAB8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7faec
	if (!ctx.cr6.eq) goto loc_82D7FAEC;
	// li r3,37
	ctx.r3.s64 = 37;
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
loc_82D7FAEC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d93190
	ctx.lr = 0x82D7FAF4;
	sub_82D93190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d7fb18
	if (!ctx.cr6.eq) goto loc_82D7FB18;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7fb18
	if (ctx.cr6.eq) goto loc_82D7FB18;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D7FB18:
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

__attribute__((alias("__imp__sub_82D7FB2C"))) PPC_WEAK_FUNC(sub_82D7FB2C);
PPC_FUNC_IMPL(__imp__sub_82D7FB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FB30"))) PPC_WEAK_FUNC(sub_82D7FB30);
PPC_FUNC_IMPL(__imp__sub_82D7FB30) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7fb40
	if (!ctx.cr6.eq) goto loc_82D7FB40;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7FB40:
	// b 0x82d931d8
	sub_82D931D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7FB44"))) PPC_WEAK_FUNC(sub_82D7FB44);
PPC_FUNC_IMPL(__imp__sub_82D7FB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FB48"))) PPC_WEAK_FUNC(sub_82D7FB48);
PPC_FUNC_IMPL(__imp__sub_82D7FB48) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7fb58
	if (!ctx.cr6.eq) goto loc_82D7FB58;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7FB58:
	// b 0x82d93230
	sub_82D93230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7FB5C"))) PPC_WEAK_FUNC(sub_82D7FB5C);
PPC_FUNC_IMPL(__imp__sub_82D7FB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FB60"))) PPC_WEAK_FUNC(sub_82D7FB60);
PPC_FUNC_IMPL(__imp__sub_82D7FB60) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7fb70
	if (!ctx.cr6.eq) goto loc_82D7FB70;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7FB70:
	// b 0x82d93288
	sub_82D93288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7FB74"))) PPC_WEAK_FUNC(sub_82D7FB74);
PPC_FUNC_IMPL(__imp__sub_82D7FB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FB78"))) PPC_WEAK_FUNC(sub_82D7FB78);
PPC_FUNC_IMPL(__imp__sub_82D7FB78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7fb88
	if (!ctx.cr6.eq) goto loc_82D7FB88;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7FB88:
	// b 0x82d932d0
	sub_82D932D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7FB8C"))) PPC_WEAK_FUNC(sub_82D7FB8C);
PPC_FUNC_IMPL(__imp__sub_82D7FB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FB90"))) PPC_WEAK_FUNC(sub_82D7FB90);
PPC_FUNC_IMPL(__imp__sub_82D7FB90) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7fba0
	if (!ctx.cr6.eq) goto loc_82D7FBA0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7FBA0:
	// b 0x82d93318
	sub_82D93318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7FBA4"))) PPC_WEAK_FUNC(sub_82D7FBA4);
PPC_FUNC_IMPL(__imp__sub_82D7FBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FBA8"))) PPC_WEAK_FUNC(sub_82D7FBA8);
PPC_FUNC_IMPL(__imp__sub_82D7FBA8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7fbb8
	if (!ctx.cr6.eq) goto loc_82D7FBB8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7FBB8:
	// b 0x82d93360
	sub_82D93360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7FBBC"))) PPC_WEAK_FUNC(sub_82D7FBBC);
PPC_FUNC_IMPL(__imp__sub_82D7FBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FBC0"))) PPC_WEAK_FUNC(sub_82D7FBC0);
PPC_FUNC_IMPL(__imp__sub_82D7FBC0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7fbd0
	if (!ctx.cr6.eq) goto loc_82D7FBD0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7FBD0:
	// b 0x82d933a8
	sub_82D933A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7FBD4"))) PPC_WEAK_FUNC(sub_82D7FBD4);
PPC_FUNC_IMPL(__imp__sub_82D7FBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FBD8"))) PPC_WEAK_FUNC(sub_82D7FBD8);
PPC_FUNC_IMPL(__imp__sub_82D7FBD8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7fbe8
	if (!ctx.cr6.eq) goto loc_82D7FBE8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7FBE8:
	// b 0x82d93400
	sub_82D93400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7FBEC"))) PPC_WEAK_FUNC(sub_82D7FBEC);
PPC_FUNC_IMPL(__imp__sub_82D7FBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FBF0"))) PPC_WEAK_FUNC(sub_82D7FBF0);
PPC_FUNC_IMPL(__imp__sub_82D7FBF0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7fc00
	if (!ctx.cr6.eq) goto loc_82D7FC00;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7FC00:
	// b 0x82d93448
	sub_82D93448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7FC04"))) PPC_WEAK_FUNC(sub_82D7FC04);
PPC_FUNC_IMPL(__imp__sub_82D7FC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FC08"))) PPC_WEAK_FUNC(sub_82D7FC08);
PPC_FUNC_IMPL(__imp__sub_82D7FC08) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7fc18
	if (!ctx.cr6.eq) goto loc_82D7FC18;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7FC18:
	// b 0x82d93490
	sub_82D93490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7FC1C"))) PPC_WEAK_FUNC(sub_82D7FC1C);
PPC_FUNC_IMPL(__imp__sub_82D7FC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FC20"))) PPC_WEAK_FUNC(sub_82D7FC20);
PPC_FUNC_IMPL(__imp__sub_82D7FC20) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7fc30
	if (!ctx.cr6.eq) goto loc_82D7FC30;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7FC30:
	// b 0x82d934c8
	sub_82D934C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7FC34"))) PPC_WEAK_FUNC(sub_82D7FC34);
PPC_FUNC_IMPL(__imp__sub_82D7FC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FC38"))) PPC_WEAK_FUNC(sub_82D7FC38);
PPC_FUNC_IMPL(__imp__sub_82D7FC38) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7fc48
	if (!ctx.cr6.eq) goto loc_82D7FC48;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7FC48:
	// b 0x82d93530
	sub_82D93530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7FC4C"))) PPC_WEAK_FUNC(sub_82D7FC4C);
PPC_FUNC_IMPL(__imp__sub_82D7FC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FC50"))) PPC_WEAK_FUNC(sub_82D7FC50);
PPC_FUNC_IMPL(__imp__sub_82D7FC50) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7fc60
	if (!ctx.cr6.eq) goto loc_82D7FC60;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7FC60:
	// b 0x82d93578
	sub_82D93578(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7FC64"))) PPC_WEAK_FUNC(sub_82D7FC64);
PPC_FUNC_IMPL(__imp__sub_82D7FC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FC68"))) PPC_WEAK_FUNC(sub_82D7FC68);
PPC_FUNC_IMPL(__imp__sub_82D7FC68) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7fc78
	if (!ctx.cr6.eq) goto loc_82D7FC78;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7FC78:
	// b 0x82d935c0
	sub_82D935C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7FC7C"))) PPC_WEAK_FUNC(sub_82D7FC7C);
PPC_FUNC_IMPL(__imp__sub_82D7FC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FC80"))) PPC_WEAK_FUNC(sub_82D7FC80);
PPC_FUNC_IMPL(__imp__sub_82D7FC80) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7fc90
	if (!ctx.cr6.eq) goto loc_82D7FC90;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7FC90:
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// b 0x82d93608
	sub_82D93608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7FCA0"))) PPC_WEAK_FUNC(sub_82D7FCA0);
PPC_FUNC_IMPL(__imp__sub_82D7FCA0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7fcd4
	if (!ctx.cr6.eq) goto loc_82D7FCD4;
	// li r3,37
	ctx.r3.s64 = 37;
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
loc_82D7FCD4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d93650
	ctx.lr = 0x82D7FCDC;
	sub_82D93650(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d7fd00
	if (!ctx.cr6.eq) goto loc_82D7FD00;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7fd00
	if (ctx.cr6.eq) goto loc_82D7FD00;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D7FD00:
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

__attribute__((alias("__imp__sub_82D7FD14"))) PPC_WEAK_FUNC(sub_82D7FD14);
PPC_FUNC_IMPL(__imp__sub_82D7FD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FD18"))) PPC_WEAK_FUNC(sub_82D7FD18);
PPC_FUNC_IMPL(__imp__sub_82D7FD18) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7fd28
	if (!ctx.cr6.eq) goto loc_82D7FD28;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7FD28:
	// b 0x82d93698
	sub_82D93698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7FD2C"))) PPC_WEAK_FUNC(sub_82D7FD2C);
PPC_FUNC_IMPL(__imp__sub_82D7FD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FD30"))) PPC_WEAK_FUNC(sub_82D7FD30);
PPC_FUNC_IMPL(__imp__sub_82D7FD30) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82d7fd40
	if (!ctx.cr6.eq) goto loc_82D7FD40;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7FD40:
	// b 0x82d936e0
	sub_82D936E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7FD44"))) PPC_WEAK_FUNC(sub_82D7FD44);
PPC_FUNC_IMPL(__imp__sub_82D7FD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FD48"))) PPC_WEAK_FUNC(sub_82D7FD48);
PPC_FUNC_IMPL(__imp__sub_82D7FD48) {
	PPC_FUNC_PROLOGUE();
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7FD50"))) PPC_WEAK_FUNC(sub_82D7FD50);
PPC_FUNC_IMPL(__imp__sub_82D7FD50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7fd64
	if (!ctx.cr6.eq) goto loc_82D7FD64;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7FD64:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,78
	ctx.r3.s64 = 78;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7FD74"))) PPC_WEAK_FUNC(sub_82D7FD74);
PPC_FUNC_IMPL(__imp__sub_82D7FD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FD78"))) PPC_WEAK_FUNC(sub_82D7FD78);
PPC_FUNC_IMPL(__imp__sub_82D7FD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r3,r11,37
	ctx.r3.s64 = ctx.r11.s64 + 37;
	// blr 
	return;
	// cmplwi cr6,r3,10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10, ctx.xer);
	// bgt cr6,0x82d7fe34
	if (ctx.cr6.gt) goto loc_82D7FE34;
	// lis r12,-32040
	ctx.r12.s64 = -2099773440;
	// addi r12,r12,-584
	ctx.r12.s64 = ctx.r12.s64 + -584;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82D7FE24;
	case 1:
		goto loc_82D7FDE4;
	case 2:
		goto loc_82D7FDF4;
	case 3:
		goto loc_82D7FE04;
	case 4:
		goto loc_82D7FE14;
	case 5:
		goto loc_82D7FE14;
	case 6:
		goto loc_82D7FE24;
	case 7:
		goto loc_82D7FE24;
	case 8:
		goto loc_82D7FE24;
	case 9:
		goto loc_82D7FE24;
	case 10:
		goto loc_82D7FE24;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-476(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -476);
	// lwz r22,-540(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -540);
	// lwz r22,-524(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -524);
	// lwz r22,-508(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -508);
	// lwz r22,-492(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -492);
	// lwz r22,-492(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -492);
	// lwz r22,-476(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -476);
	// lwz r22,-476(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -476);
	// lwz r22,-476(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -476);
	// lwz r22,-476(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -476);
	// lwz r22,-476(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -476);
loc_82D7FDE4:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D7FDF4:
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D7FE04:
	// li r11,24
	ctx.r11.s64 = 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D7FE14:
	// li r11,32
	ctx.r11.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D7FE24:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D7FE34:
	// li r3,25
	ctx.r3.s64 = 25;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7FE3C"))) PPC_WEAK_FUNC(sub_82D7FE3C);
PPC_FUNC_IMPL(__imp__sub_82D7FE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FE40"))) PPC_WEAK_FUNC(sub_82D7FE40);
PPC_FUNC_IMPL(__imp__sub_82D7FE40) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82d7fe50
	if (ctx.cr6.eq) goto loc_82D7FE50;
	// lwz r11,1244(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1244);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82D7FE50:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82d7fe60
	if (ctx.cr6.eq) goto loc_82D7FE60;
	// lwz r11,1240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1240);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82D7FE60:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82d7fe70
	if (ctx.cr6.eq) goto loc_82D7FE70;
	// lwz r11,1256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1256);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82D7FE70:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82d7fe80
	if (ctx.cr6.eq) goto loc_82D7FE80;
	// lwz r11,1252(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1252);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_82D7FE80:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d7fe98
	if (ctx.cr6.eq) goto loc_82D7FE98;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,38372
	ctx.r11.u64 = ctx.r11.u64 | 38372;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_82D7FE98:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d7ff38
	if (ctx.cr6.eq) goto loc_82D7FF38;
	// lwz r11,1240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1240);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82d7ff38
	if (ctx.cr6.gt) goto loc_82D7FF38;
	// lis r12,-32040
	ctx.r12.s64 = -2099773440;
	// addi r12,r12,-316
	ctx.r12.s64 = ctx.r12.s64 + -316;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82D7FF30;
	case 1:
		goto loc_82D7FEF0;
	case 2:
		goto loc_82D7FF00;
	case 3:
		goto loc_82D7FF10;
	case 4:
		goto loc_82D7FF20;
	case 5:
		goto loc_82D7FF20;
	case 6:
		goto loc_82D7FF30;
	case 7:
		goto loc_82D7FF30;
	case 8:
		goto loc_82D7FF30;
	case 9:
		goto loc_82D7FF30;
	case 10:
		goto loc_82D7FF30;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-208(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -208);
	// lwz r22,-272(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -272);
	// lwz r22,-256(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -256);
	// lwz r22,-240(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -240);
	// lwz r22,-224(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -224);
	// lwz r22,-224(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -224);
	// lwz r22,-208(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -208);
	// lwz r22,-208(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -208);
	// lwz r22,-208(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -208);
	// lwz r22,-208(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -208);
	// lwz r22,-208(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -208);
loc_82D7FEF0:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D7FF00:
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D7FF10:
	// li r11,24
	ctx.r11.s64 = 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D7FF20:
	// li r11,32
	ctx.r11.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D7FF30:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82D7FF38:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d7ff54
	if (!ctx.cr6.eq) goto loc_82D7FF54;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82D7FF54:
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r10,38436
	ctx.r10.u64 = ctx.r10.u64 | 38436;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7FF6C"))) PPC_WEAK_FUNC(sub_82D7FF6C);
PPC_FUNC_IMPL(__imp__sub_82D7FF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FF70"))) PPC_WEAK_FUNC(sub_82D7FF70);
PPC_FUNC_IMPL(__imp__sub_82D7FF70) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D7FF84;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d7ff94
	if (!ctx.cr6.eq) goto loc_82D7FF94;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d91a58
	ctx.lr = 0x82D7FF94;
	sub_82D91A58(ctx, base);
loc_82D7FF94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7FFA4"))) PPC_WEAK_FUNC(sub_82D7FFA4);
PPC_FUNC_IMPL(__imp__sub_82D7FFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FFA8"))) PPC_WEAK_FUNC(sub_82D7FFA8);
PPC_FUNC_IMPL(__imp__sub_82D7FFA8) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D7FFC4;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d7ffd8
	if (!ctx.cr6.eq) goto loc_82D7FFD8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d886d0
	ctx.lr = 0x82D7FFD8;
	sub_82D886D0(ctx, base);
loc_82D7FFD8:
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

__attribute__((alias("__imp__sub_82D7FFEC"))) PPC_WEAK_FUNC(sub_82D7FFEC);
PPC_FUNC_IMPL(__imp__sub_82D7FFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7FFF0"))) PPC_WEAK_FUNC(sub_82D7FFF0);
PPC_FUNC_IMPL(__imp__sub_82D7FFF0) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D8000C;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80020
	if (!ctx.cr6.eq) goto loc_82D80020;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d88820
	ctx.lr = 0x82D80020;
	sub_82D88820(ctx, base);
loc_82D80020:
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

__attribute__((alias("__imp__sub_82D80034"))) PPC_WEAK_FUNC(sub_82D80034);
PPC_FUNC_IMPL(__imp__sub_82D80034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80038"))) PPC_WEAK_FUNC(sub_82D80038);
PPC_FUNC_IMPL(__imp__sub_82D80038) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D80054;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80068
	if (!ctx.cr6.eq) goto loc_82D80068;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d888c0
	ctx.lr = 0x82D80068;
	sub_82D888C0(ctx, base);
loc_82D80068:
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

__attribute__((alias("__imp__sub_82D8007C"))) PPC_WEAK_FUNC(sub_82D8007C);
PPC_FUNC_IMPL(__imp__sub_82D8007C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80080"))) PPC_WEAK_FUNC(sub_82D80080);
PPC_FUNC_IMPL(__imp__sub_82D80080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D80088;
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
	// bl 0x82d87108
	ctx.lr = 0x82D800A4;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d800c4
	if (!ctx.cr6.eq) goto loc_82D800C4;
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
	// bl 0x82d889a0
	ctx.lr = 0x82D800C4;
	sub_82D889A0(ctx, base);
loc_82D800C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D800CC"))) PPC_WEAK_FUNC(sub_82D800CC);
PPC_FUNC_IMPL(__imp__sub_82D800CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D800D0"))) PPC_WEAK_FUNC(sub_82D800D0);
PPC_FUNC_IMPL(__imp__sub_82D800D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D800D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82d87108
	ctx.lr = 0x82D800F8;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8011c
	if (!ctx.cr6.eq) goto loc_82D8011C;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d88ac0
	ctx.lr = 0x82D8011C;
	sub_82D88AC0(ctx, base);
loc_82D8011C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D80124"))) PPC_WEAK_FUNC(sub_82D80124);
PPC_FUNC_IMPL(__imp__sub_82D80124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80128"))) PPC_WEAK_FUNC(sub_82D80128);
PPC_FUNC_IMPL(__imp__sub_82D80128) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D80144;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80158
	if (!ctx.cr6.eq) goto loc_82D80158;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d8c698
	ctx.lr = 0x82D80158;
	sub_82D8C698(ctx, base);
loc_82D80158:
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

__attribute__((alias("__imp__sub_82D8016C"))) PPC_WEAK_FUNC(sub_82D8016C);
PPC_FUNC_IMPL(__imp__sub_82D8016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80170"))) PPC_WEAK_FUNC(sub_82D80170);
PPC_FUNC_IMPL(__imp__sub_82D80170) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D8018C;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d801a0
	if (!ctx.cr6.eq) goto loc_82D801A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d88cf8
	ctx.lr = 0x82D801A0;
	sub_82D88CF8(ctx, base);
loc_82D801A0:
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

__attribute__((alias("__imp__sub_82D801B4"))) PPC_WEAK_FUNC(sub_82D801B4);
PPC_FUNC_IMPL(__imp__sub_82D801B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D801B8"))) PPC_WEAK_FUNC(sub_82D801B8);
PPC_FUNC_IMPL(__imp__sub_82D801B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D801C0;
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
	// bl 0x82d87108
	ctx.lr = 0x82D801DC;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d801fc
	if (!ctx.cr6.eq) goto loc_82D801FC;
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
	// bl 0x82d88d18
	ctx.lr = 0x82D801FC;
	sub_82D88D18(ctx, base);
loc_82D801FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D80204"))) PPC_WEAK_FUNC(sub_82D80204);
PPC_FUNC_IMPL(__imp__sub_82D80204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80208"))) PPC_WEAK_FUNC(sub_82D80208);
PPC_FUNC_IMPL(__imp__sub_82D80208) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D80224;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80238
	if (!ctx.cr6.eq) goto loc_82D80238;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d88e88
	ctx.lr = 0x82D80238;
	sub_82D88E88(ctx, base);
loc_82D80238:
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

__attribute__((alias("__imp__sub_82D8024C"))) PPC_WEAK_FUNC(sub_82D8024C);
PPC_FUNC_IMPL(__imp__sub_82D8024C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80250"))) PPC_WEAK_FUNC(sub_82D80250);
PPC_FUNC_IMPL(__imp__sub_82D80250) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D8026C;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80280
	if (!ctx.cr6.eq) goto loc_82D80280;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d88ec8
	ctx.lr = 0x82D80280;
	sub_82D88EC8(ctx, base);
loc_82D80280:
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

__attribute__((alias("__imp__sub_82D80294"))) PPC_WEAK_FUNC(sub_82D80294);
PPC_FUNC_IMPL(__imp__sub_82D80294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80298"))) PPC_WEAK_FUNC(sub_82D80298);
PPC_FUNC_IMPL(__imp__sub_82D80298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D802A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82d87108
	ctx.lr = 0x82D802C0;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d802e4
	if (!ctx.cr6.eq) goto loc_82D802E4;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d88840
	ctx.lr = 0x82D802E4;
	sub_82D88840(ctx, base);
loc_82D802E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D802EC"))) PPC_WEAK_FUNC(sub_82D802EC);
PPC_FUNC_IMPL(__imp__sub_82D802EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D802F0"))) PPC_WEAK_FUNC(sub_82D802F0);
PPC_FUNC_IMPL(__imp__sub_82D802F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82D802F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82d87108
	ctx.lr = 0x82D8031C;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80344
	if (!ctx.cr6.eq) goto loc_82D80344;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d7fe40
	ctx.lr = 0x82D80344;
	sub_82D7FE40(ctx, base);
loc_82D80344:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8034C"))) PPC_WEAK_FUNC(sub_82D8034C);
PPC_FUNC_IMPL(__imp__sub_82D8034C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80350"))) PPC_WEAK_FUNC(sub_82D80350);
PPC_FUNC_IMPL(__imp__sub_82D80350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82d87108
	ctx.lr = 0x82D80374;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8038c
	if (!ctx.cr6.eq) goto loc_82D8038C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d88ef8
	ctx.lr = 0x82D8038C;
	sub_82D88EF8(ctx, base);
loc_82D8038C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D803A4"))) PPC_WEAK_FUNC(sub_82D803A4);
PPC_FUNC_IMPL(__imp__sub_82D803A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D803A8"))) PPC_WEAK_FUNC(sub_82D803A8);
PPC_FUNC_IMPL(__imp__sub_82D803A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82d87108
	ctx.lr = 0x82D803CC;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d803e4
	if (!ctx.cr6.eq) goto loc_82D803E4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d88f38
	ctx.lr = 0x82D803E4;
	sub_82D88F38(ctx, base);
loc_82D803E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D803FC"))) PPC_WEAK_FUNC(sub_82D803FC);
PPC_FUNC_IMPL(__imp__sub_82D803FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80400"))) PPC_WEAK_FUNC(sub_82D80400);
PPC_FUNC_IMPL(__imp__sub_82D80400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D80408;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82d87108
	ctx.lr = 0x82D80428;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8044c
	if (!ctx.cr6.eq) goto loc_82D8044C;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d88f70
	ctx.lr = 0x82D8044C;
	sub_82D88F70(ctx, base);
loc_82D8044C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D80454"))) PPC_WEAK_FUNC(sub_82D80454);
PPC_FUNC_IMPL(__imp__sub_82D80454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80458"))) PPC_WEAK_FUNC(sub_82D80458);
PPC_FUNC_IMPL(__imp__sub_82D80458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D80460;
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
	// bl 0x82d87108
	ctx.lr = 0x82D8047C;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8049c
	if (!ctx.cr6.eq) goto loc_82D8049C;
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
	// bl 0x82d88ff8
	ctx.lr = 0x82D8049C;
	sub_82D88FF8(ctx, base);
loc_82D8049C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D804A4"))) PPC_WEAK_FUNC(sub_82D804A4);
PPC_FUNC_IMPL(__imp__sub_82D804A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D804A8"))) PPC_WEAK_FUNC(sub_82D804A8);
PPC_FUNC_IMPL(__imp__sub_82D804A8) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D804C4;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d804d8
	if (!ctx.cr6.eq) goto loc_82D804D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d89040
	ctx.lr = 0x82D804D8;
	sub_82D89040(ctx, base);
loc_82D804D8:
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

__attribute__((alias("__imp__sub_82D804EC"))) PPC_WEAK_FUNC(sub_82D804EC);
PPC_FUNC_IMPL(__imp__sub_82D804EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D804F0"))) PPC_WEAK_FUNC(sub_82D804F0);
PPC_FUNC_IMPL(__imp__sub_82D804F0) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D8050C;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80520
	if (!ctx.cr6.eq) goto loc_82D80520;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d89310
	ctx.lr = 0x82D80520;
	sub_82D89310(ctx, base);
loc_82D80520:
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

__attribute__((alias("__imp__sub_82D80534"))) PPC_WEAK_FUNC(sub_82D80534);
PPC_FUNC_IMPL(__imp__sub_82D80534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80538"))) PPC_WEAK_FUNC(sub_82D80538);
PPC_FUNC_IMPL(__imp__sub_82D80538) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D80554;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80568
	if (!ctx.cr6.eq) goto loc_82D80568;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d8c9f0
	ctx.lr = 0x82D80568;
	sub_82D8C9F0(ctx, base);
loc_82D80568:
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

__attribute__((alias("__imp__sub_82D8057C"))) PPC_WEAK_FUNC(sub_82D8057C);
PPC_FUNC_IMPL(__imp__sub_82D8057C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80580"))) PPC_WEAK_FUNC(sub_82D80580);
PPC_FUNC_IMPL(__imp__sub_82D80580) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D8059C;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d805dc
	if (!ctx.cr6.eq) goto loc_82D805DC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d805c4
	if (!ctx.cr6.eq) goto loc_82D805C4;
	// li r3,37
	ctx.r3.s64 = 37;
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
loc_82D805C4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,38436
	ctx.r11.u64 = ctx.r11.u64 | 38436;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D805DC:
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

__attribute__((alias("__imp__sub_82D805F0"))) PPC_WEAK_FUNC(sub_82D805F0);
PPC_FUNC_IMPL(__imp__sub_82D805F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82d87108
	ctx.lr = 0x82D80614;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8062c
	if (!ctx.cr6.eq) goto loc_82D8062C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d89380
	ctx.lr = 0x82D8062C;
	sub_82D89380(ctx, base);
loc_82D8062C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D80644"))) PPC_WEAK_FUNC(sub_82D80644);
PPC_FUNC_IMPL(__imp__sub_82D80644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80648"))) PPC_WEAK_FUNC(sub_82D80648);
PPC_FUNC_IMPL(__imp__sub_82D80648) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D80664;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80678
	if (!ctx.cr6.eq) goto loc_82D80678;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d893f0
	ctx.lr = 0x82D80678;
	sub_82D893F0(ctx, base);
loc_82D80678:
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

__attribute__((alias("__imp__sub_82D8068C"))) PPC_WEAK_FUNC(sub_82D8068C);
PPC_FUNC_IMPL(__imp__sub_82D8068C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80690"))) PPC_WEAK_FUNC(sub_82D80690);
PPC_FUNC_IMPL(__imp__sub_82D80690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D80698;
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
	// bl 0x82d87108
	ctx.lr = 0x82D806B0;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d806cc
	if (!ctx.cr6.eq) goto loc_82D806CC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d89478
	ctx.lr = 0x82D806CC;
	sub_82D89478(ctx, base);
loc_82D806CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D806D4"))) PPC_WEAK_FUNC(sub_82D806D4);
PPC_FUNC_IMPL(__imp__sub_82D806D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D806D8"))) PPC_WEAK_FUNC(sub_82D806D8);
PPC_FUNC_IMPL(__imp__sub_82D806D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82d87108
	ctx.lr = 0x82D806FC;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80714
	if (!ctx.cr6.eq) goto loc_82D80714;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d894d8
	ctx.lr = 0x82D80714;
	sub_82D894D8(ctx, base);
loc_82D80714:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8072C"))) PPC_WEAK_FUNC(sub_82D8072C);
PPC_FUNC_IMPL(__imp__sub_82D8072C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80730"))) PPC_WEAK_FUNC(sub_82D80730);
PPC_FUNC_IMPL(__imp__sub_82D80730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D80738;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82d87108
	ctx.lr = 0x82D80758;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8077c
	if (!ctx.cr6.eq) goto loc_82D8077C;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d89598
	ctx.lr = 0x82D8077C;
	sub_82D89598(ctx, base);
loc_82D8077C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D80784"))) PPC_WEAK_FUNC(sub_82D80784);
PPC_FUNC_IMPL(__imp__sub_82D80784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80788"))) PPC_WEAK_FUNC(sub_82D80788);
PPC_FUNC_IMPL(__imp__sub_82D80788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82d87108
	ctx.lr = 0x82D807AC;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d807c4
	if (!ctx.cr6.eq) goto loc_82D807C4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d896c8
	ctx.lr = 0x82D807C4;
	sub_82D896C8(ctx, base);
loc_82D807C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D807DC"))) PPC_WEAK_FUNC(sub_82D807DC);
PPC_FUNC_IMPL(__imp__sub_82D807DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D807E0"))) PPC_WEAK_FUNC(sub_82D807E0);
PPC_FUNC_IMPL(__imp__sub_82D807E0) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D807FC;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80810
	if (!ctx.cr6.eq) goto loc_82D80810;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d89718
	ctx.lr = 0x82D80810;
	sub_82D89718(ctx, base);
loc_82D80810:
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

__attribute__((alias("__imp__sub_82D80824"))) PPC_WEAK_FUNC(sub_82D80824);
PPC_FUNC_IMPL(__imp__sub_82D80824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80828"))) PPC_WEAK_FUNC(sub_82D80828);
PPC_FUNC_IMPL(__imp__sub_82D80828) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D80844;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80858
	if (!ctx.cr6.eq) goto loc_82D80858;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d897e8
	ctx.lr = 0x82D80858;
	sub_82D897E8(ctx, base);
loc_82D80858:
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

__attribute__((alias("__imp__sub_82D8086C"))) PPC_WEAK_FUNC(sub_82D8086C);
PPC_FUNC_IMPL(__imp__sub_82D8086C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80870"))) PPC_WEAK_FUNC(sub_82D80870);
PPC_FUNC_IMPL(__imp__sub_82D80870) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D8088C;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d808a0
	if (!ctx.cr6.eq) goto loc_82D808A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d8cc88
	ctx.lr = 0x82D808A0;
	sub_82D8CC88(ctx, base);
loc_82D808A0:
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

__attribute__((alias("__imp__sub_82D808B4"))) PPC_WEAK_FUNC(sub_82D808B4);
PPC_FUNC_IMPL(__imp__sub_82D808B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D808B8"))) PPC_WEAK_FUNC(sub_82D808B8);
PPC_FUNC_IMPL(__imp__sub_82D808B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D808C0;
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
	// bl 0x82d87108
	ctx.lr = 0x82D808D8;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d808f4
	if (!ctx.cr6.eq) goto loc_82D808F4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d91af8
	ctx.lr = 0x82D808F4;
	sub_82D91AF8(ctx, base);
loc_82D808F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D808FC"))) PPC_WEAK_FUNC(sub_82D808FC);
PPC_FUNC_IMPL(__imp__sub_82D808FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80900"))) PPC_WEAK_FUNC(sub_82D80900);
PPC_FUNC_IMPL(__imp__sub_82D80900) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D80914;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80924
	if (!ctx.cr6.eq) goto loc_82D80924;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d91a50
	ctx.lr = 0x82D80924;
	sub_82D91A50(ctx, base);
loc_82D80924:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D80934"))) PPC_WEAK_FUNC(sub_82D80934);
PPC_FUNC_IMPL(__imp__sub_82D80934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80938"))) PPC_WEAK_FUNC(sub_82D80938);
PPC_FUNC_IMPL(__imp__sub_82D80938) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D8094C;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8095c
	if (!ctx.cr6.eq) goto loc_82D8095C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d90d98
	ctx.lr = 0x82D8095C;
	sub_82D90D98(ctx, base);
loc_82D8095C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8096C"))) PPC_WEAK_FUNC(sub_82D8096C);
PPC_FUNC_IMPL(__imp__sub_82D8096C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80970"))) PPC_WEAK_FUNC(sub_82D80970);
PPC_FUNC_IMPL(__imp__sub_82D80970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f29.u64);
	// stfd f30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// bl 0x82d87108
	ctx.lr = 0x82D8099C;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d809b8
	if (!ctx.cr6.eq) goto loc_82D809B8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d89808
	ctx.lr = 0x82D809B8;
	sub_82D89808(ctx, base);
loc_82D809B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D809D4"))) PPC_WEAK_FUNC(sub_82D809D4);
PPC_FUNC_IMPL(__imp__sub_82D809D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D809D8"))) PPC_WEAK_FUNC(sub_82D809D8);
PPC_FUNC_IMPL(__imp__sub_82D809D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D809E0;
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
	// bl 0x82d87108
	ctx.lr = 0x82D809F8;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80a14
	if (!ctx.cr6.eq) goto loc_82D80A14;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d89f48
	ctx.lr = 0x82D80A14;
	sub_82D89F48(ctx, base);
loc_82D80A14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D80A1C"))) PPC_WEAK_FUNC(sub_82D80A1C);
PPC_FUNC_IMPL(__imp__sub_82D80A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80A20"))) PPC_WEAK_FUNC(sub_82D80A20);
PPC_FUNC_IMPL(__imp__sub_82D80A20) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D80A3C;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80a50
	if (!ctx.cr6.eq) goto loc_82D80A50;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d89860
	ctx.lr = 0x82D80A50;
	sub_82D89860(ctx, base);
loc_82D80A50:
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

__attribute__((alias("__imp__sub_82D80A64"))) PPC_WEAK_FUNC(sub_82D80A64);
PPC_FUNC_IMPL(__imp__sub_82D80A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80A68"))) PPC_WEAK_FUNC(sub_82D80A68);
PPC_FUNC_IMPL(__imp__sub_82D80A68) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D80A84;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80a98
	if (!ctx.cr6.eq) goto loc_82D80A98;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d89e40
	ctx.lr = 0x82D80A98;
	sub_82D89E40(ctx, base);
loc_82D80A98:
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

__attribute__((alias("__imp__sub_82D80AAC"))) PPC_WEAK_FUNC(sub_82D80AAC);
PPC_FUNC_IMPL(__imp__sub_82D80AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80AB0"))) PPC_WEAK_FUNC(sub_82D80AB0);
PPC_FUNC_IMPL(__imp__sub_82D80AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D80AB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82d87108
	ctx.lr = 0x82D80AD8;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80afc
	if (!ctx.cr6.eq) goto loc_82D80AFC;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d89890
	ctx.lr = 0x82D80AFC;
	sub_82D89890(ctx, base);
loc_82D80AFC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D80B04"))) PPC_WEAK_FUNC(sub_82D80B04);
PPC_FUNC_IMPL(__imp__sub_82D80B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80B08"))) PPC_WEAK_FUNC(sub_82D80B08);
PPC_FUNC_IMPL(__imp__sub_82D80B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D80B10;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82d87108
	ctx.lr = 0x82D80B30;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80b54
	if (!ctx.cr6.eq) goto loc_82D80B54;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d89e70
	ctx.lr = 0x82D80B54;
	sub_82D89E70(ctx, base);
loc_82D80B54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D80B5C"))) PPC_WEAK_FUNC(sub_82D80B5C);
PPC_FUNC_IMPL(__imp__sub_82D80B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80B60"))) PPC_WEAK_FUNC(sub_82D80B60);
PPC_FUNC_IMPL(__imp__sub_82D80B60) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D80B7C;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80b90
	if (!ctx.cr6.eq) goto loc_82D80B90;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d89bc8
	ctx.lr = 0x82D80B90;
	sub_82D89BC8(ctx, base);
loc_82D80B90:
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

__attribute__((alias("__imp__sub_82D80BA4"))) PPC_WEAK_FUNC(sub_82D80BA4);
PPC_FUNC_IMPL(__imp__sub_82D80BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80BA8"))) PPC_WEAK_FUNC(sub_82D80BA8);
PPC_FUNC_IMPL(__imp__sub_82D80BA8) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82d87108
	ctx.lr = 0x82D80BDC;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80bfc
	if (!ctx.cr6.eq) goto loc_82D80BFC;
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
	// bl 0x82d89be0
	ctx.lr = 0x82D80BFC;
	sub_82D89BE0(ctx, base);
loc_82D80BFC:
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

__attribute__((alias("__imp__sub_82D80C1C"))) PPC_WEAK_FUNC(sub_82D80C1C);
PPC_FUNC_IMPL(__imp__sub_82D80C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80C20"))) PPC_WEAK_FUNC(sub_82D80C20);
PPC_FUNC_IMPL(__imp__sub_82D80C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D80C28;
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
	// bl 0x82d87108
	ctx.lr = 0x82D80C44;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80c64
	if (!ctx.cr6.eq) goto loc_82D80C64;
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
	// bl 0x82d89dd0
	ctx.lr = 0x82D80C64;
	sub_82D89DD0(ctx, base);
loc_82D80C64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D80C6C"))) PPC_WEAK_FUNC(sub_82D80C6C);
PPC_FUNC_IMPL(__imp__sub_82D80C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80C70"))) PPC_WEAK_FUNC(sub_82D80C70);
PPC_FUNC_IMPL(__imp__sub_82D80C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82d87108
	ctx.lr = 0x82D80C94;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80cac
	if (!ctx.cr6.eq) goto loc_82D80CAC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d8b008
	ctx.lr = 0x82D80CAC;
	sub_82D8B008(ctx, base);
loc_82D80CAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D80CC4"))) PPC_WEAK_FUNC(sub_82D80CC4);
PPC_FUNC_IMPL(__imp__sub_82D80CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80CC8"))) PPC_WEAK_FUNC(sub_82D80CC8);
PPC_FUNC_IMPL(__imp__sub_82D80CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82d87108
	ctx.lr = 0x82D80CEC;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80d04
	if (!ctx.cr6.eq) goto loc_82D80D04;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d8b060
	ctx.lr = 0x82D80D04;
	sub_82D8B060(ctx, base);
loc_82D80D04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D80D1C"))) PPC_WEAK_FUNC(sub_82D80D1C);
PPC_FUNC_IMPL(__imp__sub_82D80D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80D20"))) PPC_WEAK_FUNC(sub_82D80D20);
PPC_FUNC_IMPL(__imp__sub_82D80D20) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D80D3C;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80d50
	if (!ctx.cr6.eq) goto loc_82D80D50;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d89fa0
	ctx.lr = 0x82D80D50;
	sub_82D89FA0(ctx, base);
loc_82D80D50:
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

__attribute__((alias("__imp__sub_82D80D64"))) PPC_WEAK_FUNC(sub_82D80D64);
PPC_FUNC_IMPL(__imp__sub_82D80D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80D68"))) PPC_WEAK_FUNC(sub_82D80D68);
PPC_FUNC_IMPL(__imp__sub_82D80D68) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D80D84;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80d98
	if (!ctx.cr6.eq) goto loc_82D80D98;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d89fc8
	ctx.lr = 0x82D80D98;
	sub_82D89FC8(ctx, base);
loc_82D80D98:
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

__attribute__((alias("__imp__sub_82D80DAC"))) PPC_WEAK_FUNC(sub_82D80DAC);
PPC_FUNC_IMPL(__imp__sub_82D80DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80DB0"))) PPC_WEAK_FUNC(sub_82D80DB0);
PPC_FUNC_IMPL(__imp__sub_82D80DB0) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D80DCC;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80de0
	if (!ctx.cr6.eq) goto loc_82D80DE0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d8a030
	ctx.lr = 0x82D80DE0;
	sub_82D8A030(ctx, base);
loc_82D80DE0:
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

__attribute__((alias("__imp__sub_82D80DF4"))) PPC_WEAK_FUNC(sub_82D80DF4);
PPC_FUNC_IMPL(__imp__sub_82D80DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80DF8"))) PPC_WEAK_FUNC(sub_82D80DF8);
PPC_FUNC_IMPL(__imp__sub_82D80DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D80E00;
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
	// bl 0x82d87108
	ctx.lr = 0x82D80E18;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80e34
	if (!ctx.cr6.eq) goto loc_82D80E34;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d88da0
	ctx.lr = 0x82D80E34;
	sub_82D88DA0(ctx, base);
loc_82D80E34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D80E3C"))) PPC_WEAK_FUNC(sub_82D80E3C);
PPC_FUNC_IMPL(__imp__sub_82D80E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80E40"))) PPC_WEAK_FUNC(sub_82D80E40);
PPC_FUNC_IMPL(__imp__sub_82D80E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D80E48;
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
	// bl 0x82d87108
	ctx.lr = 0x82D80E64;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80e84
	if (!ctx.cr6.eq) goto loc_82D80E84;
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
	// bl 0x82d8a070
	ctx.lr = 0x82D80E84;
	sub_82D8A070(ctx, base);
loc_82D80E84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D80E8C"))) PPC_WEAK_FUNC(sub_82D80E8C);
PPC_FUNC_IMPL(__imp__sub_82D80E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80E90"))) PPC_WEAK_FUNC(sub_82D80E90);
PPC_FUNC_IMPL(__imp__sub_82D80E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D80E98;
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
	// bl 0x82d87108
	ctx.lr = 0x82D80EB0;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80ecc
	if (!ctx.cr6.eq) goto loc_82D80ECC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d8a138
	ctx.lr = 0x82D80ECC;
	sub_82D8A138(ctx, base);
loc_82D80ECC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D80ED4"))) PPC_WEAK_FUNC(sub_82D80ED4);
PPC_FUNC_IMPL(__imp__sub_82D80ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80ED8"))) PPC_WEAK_FUNC(sub_82D80ED8);
PPC_FUNC_IMPL(__imp__sub_82D80ED8) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D80EF4;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80f08
	if (!ctx.cr6.eq) goto loc_82D80F08;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d8a1d8
	ctx.lr = 0x82D80F08;
	sub_82D8A1D8(ctx, base);
loc_82D80F08:
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

__attribute__((alias("__imp__sub_82D80F1C"))) PPC_WEAK_FUNC(sub_82D80F1C);
PPC_FUNC_IMPL(__imp__sub_82D80F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80F20"))) PPC_WEAK_FUNC(sub_82D80F20);
PPC_FUNC_IMPL(__imp__sub_82D80F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82D80F28;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82d87108
	ctx.lr = 0x82D80F50;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80f7c
	if (!ctx.cr6.eq) goto loc_82D80F7C;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d8a1e0
	ctx.lr = 0x82D80F7C;
	sub_82D8A1E0(ctx, base);
loc_82D80F7C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D80F84"))) PPC_WEAK_FUNC(sub_82D80F84);
PPC_FUNC_IMPL(__imp__sub_82D80F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80F88"))) PPC_WEAK_FUNC(sub_82D80F88);
PPC_FUNC_IMPL(__imp__sub_82D80F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D80F90;
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
	// bl 0x82d87108
	ctx.lr = 0x82D80FAC;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d80fcc
	if (!ctx.cr6.eq) goto loc_82D80FCC;
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
	// bl 0x82d8a1e8
	ctx.lr = 0x82D80FCC;
	sub_82D8A1E8(ctx, base);
loc_82D80FCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D80FD4"))) PPC_WEAK_FUNC(sub_82D80FD4);
PPC_FUNC_IMPL(__imp__sub_82D80FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D80FD8"))) PPC_WEAK_FUNC(sub_82D80FD8);
PPC_FUNC_IMPL(__imp__sub_82D80FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D80FE0;
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
	// bl 0x82d87108
	ctx.lr = 0x82D80FF8;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d81014
	if (!ctx.cr6.eq) goto loc_82D81014;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d8a358
	ctx.lr = 0x82D81014;
	sub_82D8A358(ctx, base);
loc_82D81014:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8101C"))) PPC_WEAK_FUNC(sub_82D8101C);
PPC_FUNC_IMPL(__imp__sub_82D8101C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D81020"))) PPC_WEAK_FUNC(sub_82D81020);
PPC_FUNC_IMPL(__imp__sub_82D81020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D81028;
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
	// bl 0x82d87108
	ctx.lr = 0x82D81044;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d81064
	if (!ctx.cr6.eq) goto loc_82D81064;
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
	// bl 0x82d910a0
	ctx.lr = 0x82D81064;
	sub_82D910A0(ctx, base);
loc_82D81064:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8106C"))) PPC_WEAK_FUNC(sub_82D8106C);
PPC_FUNC_IMPL(__imp__sub_82D8106C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D81070"))) PPC_WEAK_FUNC(sub_82D81070);
PPC_FUNC_IMPL(__imp__sub_82D81070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D81078;
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
	// bl 0x82d87108
	ctx.lr = 0x82D81094;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d810b4
	if (!ctx.cr6.eq) goto loc_82D810B4;
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
	// bl 0x82d91488
	ctx.lr = 0x82D810B4;
	sub_82D91488(ctx, base);
loc_82D810B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D810BC"))) PPC_WEAK_FUNC(sub_82D810BC);
PPC_FUNC_IMPL(__imp__sub_82D810BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D810C0"))) PPC_WEAK_FUNC(sub_82D810C0);
PPC_FUNC_IMPL(__imp__sub_82D810C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82d87108
	ctx.lr = 0x82D810E4;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d810fc
	if (!ctx.cr6.eq) goto loc_82D810FC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d8cd90
	ctx.lr = 0x82D810FC;
	sub_82D8CD90(ctx, base);
loc_82D810FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D81114"))) PPC_WEAK_FUNC(sub_82D81114);
PPC_FUNC_IMPL(__imp__sub_82D81114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D81118"))) PPC_WEAK_FUNC(sub_82D81118);
PPC_FUNC_IMPL(__imp__sub_82D81118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82d87108
	ctx.lr = 0x82D8113C;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d81154
	if (!ctx.cr6.eq) goto loc_82D81154;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d8d030
	ctx.lr = 0x82D81154;
	sub_82D8D030(ctx, base);
loc_82D81154:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8116C"))) PPC_WEAK_FUNC(sub_82D8116C);
PPC_FUNC_IMPL(__imp__sub_82D8116C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D81170"))) PPC_WEAK_FUNC(sub_82D81170);
PPC_FUNC_IMPL(__imp__sub_82D81170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82d87108
	ctx.lr = 0x82D81194;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d811ac
	if (!ctx.cr6.eq) goto loc_82D811AC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d8a450
	ctx.lr = 0x82D811AC;
	sub_82D8A450(ctx, base);
loc_82D811AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D811C4"))) PPC_WEAK_FUNC(sub_82D811C4);
PPC_FUNC_IMPL(__imp__sub_82D811C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D811C8"))) PPC_WEAK_FUNC(sub_82D811C8);
PPC_FUNC_IMPL(__imp__sub_82D811C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82d87108
	ctx.lr = 0x82D811EC;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d81204
	if (!ctx.cr6.eq) goto loc_82D81204;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d8d168
	ctx.lr = 0x82D81204;
	sub_82D8D168(ctx, base);
loc_82D81204:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8121C"))) PPC_WEAK_FUNC(sub_82D8121C);
PPC_FUNC_IMPL(__imp__sub_82D8121C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D81220"))) PPC_WEAK_FUNC(sub_82D81220);
PPC_FUNC_IMPL(__imp__sub_82D81220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82d87108
	ctx.lr = 0x82D81244;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8125c
	if (!ctx.cr6.eq) goto loc_82D8125C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d8a500
	ctx.lr = 0x82D8125C;
	sub_82D8A500(ctx, base);
loc_82D8125C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D81274"))) PPC_WEAK_FUNC(sub_82D81274);
PPC_FUNC_IMPL(__imp__sub_82D81274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D81278"))) PPC_WEAK_FUNC(sub_82D81278);
PPC_FUNC_IMPL(__imp__sub_82D81278) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D81294;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d812a8
	if (!ctx.cr6.eq) goto loc_82D812A8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d8d600
	ctx.lr = 0x82D812A8;
	sub_82D8D600(ctx, base);
loc_82D812A8:
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

__attribute__((alias("__imp__sub_82D812BC"))) PPC_WEAK_FUNC(sub_82D812BC);
PPC_FUNC_IMPL(__imp__sub_82D812BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D812C0"))) PPC_WEAK_FUNC(sub_82D812C0);
PPC_FUNC_IMPL(__imp__sub_82D812C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D812C8;
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
	// bl 0x82d87108
	ctx.lr = 0x82D812E4;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d81304
	if (!ctx.cr6.eq) goto loc_82D81304;
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
	// bl 0x82d8d3a8
	ctx.lr = 0x82D81304;
	sub_82D8D3A8(ctx, base);
loc_82D81304:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8130C"))) PPC_WEAK_FUNC(sub_82D8130C);
PPC_FUNC_IMPL(__imp__sub_82D8130C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D81310"))) PPC_WEAK_FUNC(sub_82D81310);
PPC_FUNC_IMPL(__imp__sub_82D81310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D81318;
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
	// bl 0x82d87108
	ctx.lr = 0x82D81334;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d81354
	if (!ctx.cr6.eq) goto loc_82D81354;
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
	// bl 0x82d8a5e8
	ctx.lr = 0x82D81354;
	sub_82D8A5E8(ctx, base);
loc_82D81354:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8135C"))) PPC_WEAK_FUNC(sub_82D8135C);
PPC_FUNC_IMPL(__imp__sub_82D8135C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D81360"))) PPC_WEAK_FUNC(sub_82D81360);
PPC_FUNC_IMPL(__imp__sub_82D81360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82d87108
	ctx.lr = 0x82D81384;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8139c
	if (!ctx.cr6.eq) goto loc_82D8139C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d8a730
	ctx.lr = 0x82D8139C;
	sub_82D8A730(ctx, base);
loc_82D8139C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D813B4"))) PPC_WEAK_FUNC(sub_82D813B4);
PPC_FUNC_IMPL(__imp__sub_82D813B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D813B8"))) PPC_WEAK_FUNC(sub_82D813B8);
PPC_FUNC_IMPL(__imp__sub_82D813B8) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D813D4;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d813e8
	if (!ctx.cr6.eq) goto loc_82D813E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d8a778
	ctx.lr = 0x82D813E8;
	sub_82D8A778(ctx, base);
loc_82D813E8:
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

__attribute__((alias("__imp__sub_82D813FC"))) PPC_WEAK_FUNC(sub_82D813FC);
PPC_FUNC_IMPL(__imp__sub_82D813FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D81400"))) PPC_WEAK_FUNC(sub_82D81400);
PPC_FUNC_IMPL(__imp__sub_82D81400) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D8141C;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d81430
	if (!ctx.cr6.eq) goto loc_82D81430;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d8a7b8
	ctx.lr = 0x82D81430;
	sub_82D8A7B8(ctx, base);
loc_82D81430:
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

__attribute__((alias("__imp__sub_82D81444"))) PPC_WEAK_FUNC(sub_82D81444);
PPC_FUNC_IMPL(__imp__sub_82D81444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D81448"))) PPC_WEAK_FUNC(sub_82D81448);
PPC_FUNC_IMPL(__imp__sub_82D81448) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D81464;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d8147c
	if (!ctx.cr6.eq) goto loc_82D8147C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d8a8b8
	ctx.lr = 0x82D8147C;
	sub_82D8A8B8(ctx, base);
loc_82D8147C:
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

__attribute__((alias("__imp__sub_82D81490"))) PPC_WEAK_FUNC(sub_82D81490);
PPC_FUNC_IMPL(__imp__sub_82D81490) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D814AC;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d814c0
	if (!ctx.cr6.eq) goto loc_82D814C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d8aa68
	ctx.lr = 0x82D814C0;
	sub_82D8AA68(ctx, base);
loc_82D814C0:
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

__attribute__((alias("__imp__sub_82D814D4"))) PPC_WEAK_FUNC(sub_82D814D4);
PPC_FUNC_IMPL(__imp__sub_82D814D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D814D8"))) PPC_WEAK_FUNC(sub_82D814D8);
PPC_FUNC_IMPL(__imp__sub_82D814D8) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D814F4;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d81508
	if (!ctx.cr6.eq) goto loc_82D81508;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d8b7a8
	ctx.lr = 0x82D81508;
	sub_82D8B7A8(ctx, base);
loc_82D81508:
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

__attribute__((alias("__imp__sub_82D8151C"))) PPC_WEAK_FUNC(sub_82D8151C);
PPC_FUNC_IMPL(__imp__sub_82D8151C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D81520"))) PPC_WEAK_FUNC(sub_82D81520);
PPC_FUNC_IMPL(__imp__sub_82D81520) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D8153C;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d81550
	if (!ctx.cr6.eq) goto loc_82D81550;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d8b810
	ctx.lr = 0x82D81550;
	sub_82D8B810(ctx, base);
loc_82D81550:
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

__attribute__((alias("__imp__sub_82D81564"))) PPC_WEAK_FUNC(sub_82D81564);
PPC_FUNC_IMPL(__imp__sub_82D81564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D81568"))) PPC_WEAK_FUNC(sub_82D81568);
PPC_FUNC_IMPL(__imp__sub_82D81568) {
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
	// bl 0x82d87108
	ctx.lr = 0x82D81584;
	sub_82D87108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82d81598
	if (!ctx.cr6.eq) goto loc_82D81598;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d8abf0
	ctx.lr = 0x82D81598;
	sub_82D8ABF0(ctx, base);
loc_82D81598:
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

