#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83332510"))) PPC_WEAK_FUNC(sub_83332510);
PPC_FUNC_IMPL(__imp__sub_83332510) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83332518"))) PPC_WEAK_FUNC(sub_83332518);
PPC_FUNC_IMPL(__imp__sub_83332518) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83332520"))) PPC_WEAK_FUNC(sub_83332520);
PPC_FUNC_IMPL(__imp__sub_83332520) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83332528"))) PPC_WEAK_FUNC(sub_83332528);
PPC_FUNC_IMPL(__imp__sub_83332528) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83332530"))) PPC_WEAK_FUNC(sub_83332530);
PPC_FUNC_IMPL(__imp__sub_83332530) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83332538"))) PPC_WEAK_FUNC(sub_83332538);
PPC_FUNC_IMPL(__imp__sub_83332538) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83332540"))) PPC_WEAK_FUNC(sub_83332540);
PPC_FUNC_IMPL(__imp__sub_83332540) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83332548"))) PPC_WEAK_FUNC(sub_83332548);
PPC_FUNC_IMPL(__imp__sub_83332548) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83332550"))) PPC_WEAK_FUNC(sub_83332550);
PPC_FUNC_IMPL(__imp__sub_83332550) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83332558"))) PPC_WEAK_FUNC(sub_83332558);
PPC_FUNC_IMPL(__imp__sub_83332558) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83332560"))) PPC_WEAK_FUNC(sub_83332560);
PPC_FUNC_IMPL(__imp__sub_83332560) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83332568"))) PPC_WEAK_FUNC(sub_83332568);
PPC_FUNC_IMPL(__imp__sub_83332568) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83332570"))) PPC_WEAK_FUNC(sub_83332570);
PPC_FUNC_IMPL(__imp__sub_83332570) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83332578"))) PPC_WEAK_FUNC(sub_83332578);
PPC_FUNC_IMPL(__imp__sub_83332578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-14480
	ctx.r3.s64 = ctx.r11.s64 + -14480;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83332584"))) PPC_WEAK_FUNC(sub_83332584);
PPC_FUNC_IMPL(__imp__sub_83332584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83332588"))) PPC_WEAK_FUNC(sub_83332588);
PPC_FUNC_IMPL(__imp__sub_83332588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8333258C"))) PPC_WEAK_FUNC(sub_8333258C);
PPC_FUNC_IMPL(__imp__sub_8333258C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83332590"))) PPC_WEAK_FUNC(sub_83332590);
PPC_FUNC_IMPL(__imp__sub_83332590) {
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
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,32740
	ctx.r11.s64 = ctx.r11.s64 + 32740;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x833325c4
	if (ctx.cr0.eq) goto loc_833325C4;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x832e7378
	ctx.lr = 0x833325C4;
	sub_832E7378(ctx, base);
loc_833325C4:
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

__attribute__((alias("__imp__sub_833325DC"))) PPC_WEAK_FUNC(sub_833325DC);
PPC_FUNC_IMPL(__imp__sub_833325DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833325E0"))) PPC_WEAK_FUNC(sub_833325E0);
PPC_FUNC_IMPL(__imp__sub_833325E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,32740
	ctx.r11.s64 = ctx.r11.s64 + 32740;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833325F0"))) PPC_WEAK_FUNC(sub_833325F0);
PPC_FUNC_IMPL(__imp__sub_833325F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-25536
	ctx.r11.s64 = ctx.r11.s64 + -25536;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83332600"))) PPC_WEAK_FUNC(sub_83332600);
PPC_FUNC_IMPL(__imp__sub_83332600) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83332608"))) PPC_WEAK_FUNC(sub_83332608);
PPC_FUNC_IMPL(__imp__sub_83332608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-25432
	ctx.r3.s64 = ctx.r11.s64 + -25432;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83332614"))) PPC_WEAK_FUNC(sub_83332614);
PPC_FUNC_IMPL(__imp__sub_83332614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83332618"))) PPC_WEAK_FUNC(sub_83332618);
PPC_FUNC_IMPL(__imp__sub_83332618) {
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
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,32740
	ctx.r11.s64 = ctx.r11.s64 + 32740;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8333264c
	if (ctx.cr0.eq) goto loc_8333264C;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x832e7378
	ctx.lr = 0x8333264C;
	sub_832E7378(ctx, base);
loc_8333264C:
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

__attribute__((alias("__imp__sub_83332664"))) PPC_WEAK_FUNC(sub_83332664);
PPC_FUNC_IMPL(__imp__sub_83332664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83332668"))) PPC_WEAK_FUNC(sub_83332668);
PPC_FUNC_IMPL(__imp__sub_83332668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// addi r11,r11,-25424
	ctx.r11.s64 = ctx.r11.s64 + -25424;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8333267C"))) PPC_WEAK_FUNC(sub_8333267C);
PPC_FUNC_IMPL(__imp__sub_8333267C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83332680"))) PPC_WEAK_FUNC(sub_83332680);
PPC_FUNC_IMPL(__imp__sub_83332680) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83332688"))) PPC_WEAK_FUNC(sub_83332688);
PPC_FUNC_IMPL(__imp__sub_83332688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,32740
	ctx.r11.s64 = ctx.r11.s64 + 32740;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83332698"))) PPC_WEAK_FUNC(sub_83332698);
PPC_FUNC_IMPL(__imp__sub_83332698) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stbx r6,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833326AC"))) PPC_WEAK_FUNC(sub_833326AC);
PPC_FUNC_IMPL(__imp__sub_833326AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833326B0"))) PPC_WEAK_FUNC(sub_833326B0);
PPC_FUNC_IMPL(__imp__sub_833326B0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stbx r6,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833326C4"))) PPC_WEAK_FUNC(sub_833326C4);
PPC_FUNC_IMPL(__imp__sub_833326C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833326C8"))) PPC_WEAK_FUNC(sub_833326C8);
PPC_FUNC_IMPL(__imp__sub_833326C8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x833326fc
	if (ctx.cr6.lt) goto loc_833326FC;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bgt cr6,0x833326fc
	if (ctx.cr6.gt) goto loc_833326FC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-31064
	ctx.r6.s64 = ctx.r11.s64 + -31064;
	// addi r5,r10,-12392
	ctx.r5.s64 = ctx.r10.s64 + -12392;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1686
	ctx.r7.s64 = 1686;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8320cf10
	sub_8320CF10(ctx, base);
	return;
loc_833326FC:
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stbx r6,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83332710"))) PPC_WEAK_FUNC(sub_83332710);
PPC_FUNC_IMPL(__imp__sub_83332710) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x83332744
	if (ctx.cr6.lt) goto loc_83332744;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bgt cr6,0x83332744
	if (ctx.cr6.gt) goto loc_83332744;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-31064
	ctx.r6.s64 = ctx.r11.s64 + -31064;
	// addi r5,r10,-12392
	ctx.r5.s64 = ctx.r10.s64 + -12392;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1699
	ctx.r7.s64 = 1699;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8320cf10
	sub_8320CF10(ctx, base);
	return;
loc_83332744:
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stbx r6,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83332758"))) PPC_WEAK_FUNC(sub_83332758);
PPC_FUNC_IMPL(__imp__sub_83332758) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8333276C"))) PPC_WEAK_FUNC(sub_8333276C);
PPC_FUNC_IMPL(__imp__sub_8333276C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83332770"))) PPC_WEAK_FUNC(sub_83332770);
PPC_FUNC_IMPL(__imp__sub_83332770) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// addi r11,r11,-11080
	ctx.r11.s64 = ctx.r11.s64 + -11080;
	// mulli r10,r9,52
	ctx.r10.s64 = ctx.r9.s64 * 52;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r8,r8,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x833327b4
	if (ctx.cr0.eq) goto loc_833327B4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x833327b4
	if (ctx.cr6.eq) goto loc_833327B4;
	// addi r11,r9,-18
	ctx.r11.s64 = ctx.r9.s64 + -18;
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_833327B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833327BC"))) PPC_WEAK_FUNC(sub_833327BC);
PPC_FUNC_IMPL(__imp__sub_833327BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833327C0"))) PPC_WEAK_FUNC(sub_833327C0);
PPC_FUNC_IMPL(__imp__sub_833327C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,956(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 956);
	// subf. r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgelr 
	if (!ctx.cr0.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833327D4"))) PPC_WEAK_FUNC(sub_833327D4);
PPC_FUNC_IMPL(__imp__sub_833327D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833327D8"))) PPC_WEAK_FUNC(sub_833327D8);
PPC_FUNC_IMPL(__imp__sub_833327D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,956(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 956);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x833327ec
	if (ctx.cr6.gt) goto loc_833327EC;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// b 0x833327f0
	goto loc_833327F0;
loc_833327EC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_833327F0:
	// stw r11,956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 956, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833327F8"))) PPC_WEAK_FUNC(sub_833327F8);
PPC_FUNC_IMPL(__imp__sub_833327F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x83332800;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r18,136(r17)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r17.u32 + 136);
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83332aa4
	if (ctx.cr6.eq) goto loc_83332AA4;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// li r19,1
	ctx.r19.s64 = 1;
	// addi r22,r11,-11080
	ctx.r22.s64 = ctx.r11.s64 + -11080;
loc_83332828:
	// lwz r31,28(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x83332838
	goto loc_83332838;
loc_83332834:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_83332838:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83332834
	if (!ctx.cr6.eq) goto loc_83332834;
	// addi r21,r31,8
	ctx.r21.s64 = ctx.r31.s64 + 8;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// b 0x83332a70
	goto loc_83332A70;
loc_8333284C:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83332a64
	if (ctx.cr0.eq) goto loc_83332A64;
	// lwz r11,12(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// lwz r11,2724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2724);
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x83332a64
	if (!ctx.cr6.lt) goto loc_83332A64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8333287C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mulli r10,r11,52
	ctx.r10.s64 = ctx.r11.s64 * 52;
	// lwzx r9,r10,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// rlwinm. r9,r9,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// beq 0x833328c0
	if (ctx.cr0.eq) goto loc_833328C0;
	// addi r9,r22,4
	ctx.r9.s64 = ctx.r22.s64 + 4;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833328c0
	if (ctx.cr6.eq) goto loc_833328C0;
	// addi r10,r11,-18
	ctx.r10.s64 = ctx.r11.s64 + -18;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r24,r10,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x833328c4
	goto loc_833328C4;
loc_833328C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_833328C4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83332a64
	if (ctx.cr0.eq) goto loc_83332A64;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83332a64
	if (!ctx.cr0.eq) goto loc_83332A64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
loc_833328E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83332904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83332914
	if (!ctx.cr0.eq) goto loc_83332914;
	// slw r11,r19,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r30.u8 & 0x3F));
	// or r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 | ctx.r29.u64;
loc_83332914:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x833328e8
	if (ctx.cr6.lt) goto loc_833328E8;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83332928:
	// slw r11,r19,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r30.u8 & 0x3F));
	// and. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833329d4
	if (ctx.cr0.eq) goto loc_833329D4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x83332960
	if (ctx.cr6.lt) goto loc_83332960;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83332958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x833329e4
	if (!ctx.cr6.eq) goto loc_833329E4;
loc_83332960:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8333297C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// bne cr6,0x833329d4
	if (!ctx.cr6.eq) goto loc_833329D4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x833329b4
	if (ctx.cr6.lt) goto loc_833329B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833329AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r26,r3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x833329e4
	if (!ctx.cr6.eq) goto loc_833329E4;
loc_833329B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833329D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_833329D4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x83332928
	if (ctx.cr6.lt) goto loc_83332928;
	// b 0x833329e8
	goto loc_833329E8;
loc_833329E4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_833329E8:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83332a64
	if (ctx.cr0.eq) goto loc_83332A64;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// bne cr6,0x83332a4c
	if (!ctx.cr6.eq) goto loc_83332A4C;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83332a28
	if (!ctx.cr6.eq) goto loc_83332A28;
	// lbz r9,154(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 154);
	// lbz r8,153(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 153);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83332a28
	if (!ctx.cr6.eq) goto loc_83332A28;
	// lbz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// lbz r8,159(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 159);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83332a4c
	if (ctx.cr6.eq) goto loc_83332A4C;
loc_83332A28:
	// clrlwi. r9,r24,24
	ctx.r9.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83332a64
	if (ctx.cr0.eq) goto loc_83332A64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83332a64
	if (!ctx.cr6.eq) goto loc_83332A64;
	// lbz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// lbz r10,159(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 159);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83332a64
	if (!ctx.cr6.eq) goto loc_83332A64;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
loc_83332A4C:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// bl 0x833413c8
	ctx.lr = 0x83332A64;
	sub_833413C8(ctx, base);
loc_83332A64:
	// lwz r31,0(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r21,r31,8
	ctx.r21.s64 = ctx.r31.s64 + 8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83332A70:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8333284c
	if (!ctx.cr6.eq) goto loc_8333284C;
	// lwz r18,8(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83332828
	if (!ctx.cr6.eq) goto loc_83332828;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x83332aa4
	if (!ctx.cr6.gt) goto loc_83332AA4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,12(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r11,-25320
	ctx.r4.s64 = ctx.r11.s64 + -25320;
	// bl 0x832e7968
	ctx.lr = 0x83332AA4;
	sub_832E7968(ctx, base);
loc_83332AA4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83332AAC"))) PPC_WEAK_FUNC(sub_83332AAC);
PPC_FUNC_IMPL(__imp__sub_83332AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83332AB0"))) PPC_WEAK_FUNC(sub_83332AB0);
PPC_FUNC_IMPL(__imp__sub_83332AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83332AB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r26,32
	ctx.r11.s64 = ctx.r26.s64 + 32;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r28,r10,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_83332AF0:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x83332b0c
	if (ctx.cr0.eq) goto loc_83332B0C;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// b 0x83332b10
	goto loc_83332B10;
loc_83332B0C:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_83332B10:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83332af0
	if (ctx.cr6.lt) goto loc_83332AF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83332B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83332d6c
	if (ctx.cr0.eq) goto loc_83332D6C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// addi r10,r10,-11080
	ctx.r10.s64 = ctx.r10.s64 + -11080;
	// mulli r9,r11,52
	ctx.r9.s64 = ctx.r11.s64 * 52;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83332bfc
	if (ctx.cr0.eq) goto loc_83332BFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83332B78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83332bf4
	if (ctx.cr6.eq) goto loc_83332BF4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x83332ba8
	if (ctx.cr6.eq) goto loc_83332BA8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-25248
	ctx.r6.s64 = ctx.r11.s64 + -25248;
	// addi r5,r10,-12392
	ctx.r5.s64 = ctx.r10.s64 + -12392;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,639
	ctx.r7.s64 = 639;
	// b 0x83332be8
	goto loc_83332BE8;
loc_83332BA8:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// beq cr6,0x83332bf4
	if (ctx.cr6.eq) goto loc_83332BF4;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r10,r10,-25672
	ctx.r10.s64 = ctx.r10.s64 + -25672;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// beq cr6,0x83332e8c
	if (ctx.cr6.eq) goto loc_83332E8C;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// addi r4,r7,-21168
	ctx.r4.s64 = ctx.r7.s64 + -21168;
	// addi r6,r9,-25248
	ctx.r6.s64 = ctx.r9.s64 + -25248;
	// addi r5,r8,-12392
	ctx.r5.s64 = ctx.r8.s64 + -12392;
	// li r7,635
	ctx.r7.s64 = 635;
loc_83332BE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83332BF0;
	sub_8320CF10(ctx, base);
	// b 0x83332e8c
	goto loc_83332E8C;
loc_83332BF4:
	// lbz r11,83(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// b 0x83332e64
	goto loc_83332E64;
loc_83332BFC:
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// beq cr6,0x83332d34
	if (ctx.cr6.eq) goto loc_83332D34;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// beq cr6,0x83332cfc
	if (ctx.cr6.eq) goto loc_83332CFC;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// beq cr6,0x83332cc4
	if (ctx.cr6.eq) goto loc_83332CC4;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// beq cr6,0x83332cfc
	if (ctx.cr6.eq) goto loc_83332CFC;
	// cmpwi cr6,r11,133
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 133, ctx.xer);
	// ble cr6,0x83332c2c
	if (!ctx.cr6.gt) goto loc_83332C2C;
	// cmpwi cr6,r11,135
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 135, ctx.xer);
	// ble cr6,0x83332cfc
	if (!ctx.cr6.gt) goto loc_83332CFC;
loc_83332C2C:
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r9,r11,-25672
	ctx.r9.s64 = ctx.r11.s64 + -25672;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83332c50
	if (!ctx.cr0.eq) goto loc_83332C50;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x83332c54
	goto loc_83332C54;
loc_83332C50:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83332C54:
	// lbz r11,85(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83332c70
	if (!ctx.cr0.eq) goto loc_83332C70;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x83332c74
	goto loc_83332C74;
loc_83332C70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83332C74:
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x83332c94
	if (!ctx.cr0.eq) goto loc_83332C94;
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x83332c98
	goto loc_83332C98;
loc_83332C94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83332C98:
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x83332cb8
	if (!ctx.cr0.eq) goto loc_83332CB8;
	// lbz r11,83(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x83332cbc
	goto loc_83332CBC;
loc_83332CB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83332CBC:
	// or r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x83332e8c
	goto loc_83332E8C;
loc_83332CC4:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-25672
	ctx.r10.s64 = ctx.r10.s64 + -25672;
loc_83332CD8:
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// or r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 | ctx.r30.u64;
	// blt cr6,0x83332cd8
	if (ctx.cr6.lt) goto loc_83332CD8;
	// b 0x83332e8c
	goto loc_83332E8C;
loc_83332CFC:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-25672
	ctx.r10.s64 = ctx.r10.s64 + -25672;
loc_83332D10:
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// or r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 | ctx.r30.u64;
	// blt cr6,0x83332d10
	if (ctx.cr6.lt) goto loc_83332D10;
	// b 0x83332e8c
	goto loc_83332E8C;
loc_83332D34:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-25672
	ctx.r10.s64 = ctx.r10.s64 + -25672;
loc_83332D48:
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// or r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 | ctx.r30.u64;
	// blt cr6,0x83332d48
	if (ctx.cr6.lt) goto loc_83332D48;
	// b 0x83332e8c
	goto loc_83332E8C;
loc_83332D6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83332D80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83332e78
	if (ctx.cr0.eq) goto loc_83332E78;
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83332e60
	if (ctx.cr6.eq) goto loc_83332E60;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83332e3c
	if (ctx.cr6.eq) goto loc_83332E3C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x83332e08
	if (ctx.cr6.eq) goto loc_83332E08;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x83332dc4
	if (ctx.cr6.eq) goto loc_83332DC4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x83332e3c
	if (ctx.cr6.eq) goto loc_83332E3C;
loc_83332DC4:
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r10,-25672
	ctx.r10.s64 = ctx.r10.s64 + -25672;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lbz r7,83(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// b 0x83332cbc
	goto loc_83332CBC;
loc_83332E08:
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r10,-25672
	ctx.r10.s64 = ctx.r10.s64 + -25672;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x83332cbc
	goto loc_83332CBC;
loc_83332E3C:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r10,-25672
	ctx.r10.s64 = ctx.r10.s64 + -25672;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x83332cbc
	goto loc_83332CBC;
loc_83332E60:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_83332E64:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r10,r10,-25672
	ctx.r10.s64 = ctx.r10.s64 + -25672;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x83332e8c
	goto loc_83332E8C;
loc_83332E78:
	// stb r27,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r27.u8);
	// stb r27,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r27.u8);
	// stb r27,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r27.u8);
	// stb r27,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r27.u8);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_83332E8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83332E98"))) PPC_WEAK_FUNC(sub_83332E98);
PPC_FUNC_IMPL(__imp__sub_83332E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83332EA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83332EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83332f90
	if (ctx.cr0.eq) goto loc_83332F90;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83332f90
	if (ctx.cr0.eq) goto loc_83332F90;
	// lwz r29,240(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r28,236(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r30,r11,-25656
	ctx.r30.s64 = ctx.r11.s64 + -25656;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r9,128(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x83332f90
	if (ctx.cr6.eq) goto loc_83332F90;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83332F0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83332f90
	if (ctx.cr0.eq) goto loc_83332F90;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83332F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83332f90
	if (ctx.cr0.eq) goto loc_83332F90;
	// li r5,0
	ctx.r5.s64 = 0;
loc_83332F34:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r5,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83332f54
	if (!ctx.cr0.eq) goto loc_83332F54;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r5,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x83332f98
	if (ctx.cr0.eq) goto loc_83332F98;
loc_83332F54:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83332f90
	if (!ctx.cr6.eq) goto loc_83332F90;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x83332f34
	if (ctx.cr6.lt) goto loc_83332F34;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83315378
	ctx.lr = 0x83332F78;
	sub_83315378(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// bl 0x83315248
	ctx.lr = 0x83332F90;
	sub_83315248(ctx, base);
loc_83332F90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_83332F98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83332FB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 + 112;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x83332f90
	goto loc_83332F90;
}

__attribute__((alias("__imp__sub_83332FBC"))) PPC_WEAK_FUNC(sub_83332FBC);
PPC_FUNC_IMPL(__imp__sub_83332FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83332FC0"))) PPC_WEAK_FUNC(sub_83332FC0);
PPC_FUNC_IMPL(__imp__sub_83332FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83332FC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x833331b0
	if (!ctx.cr6.eq) goto loc_833331B0;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x83333000
	if (!ctx.cr6.eq) goto loc_83333000;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,2
	ctx.r28.s64 = 2;
loc_83333000:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x83333018
	if (!ctx.cr6.eq) goto loc_83333018;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r28,1
	ctx.r28.s64 = 1;
loc_83333018:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x833331b0
	if (ctx.cr6.eq) goto loc_833331B0;
	// addi r11,r29,58
	ctx.r11.s64 = ctx.r29.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x833331b0
	if (!ctx.cr6.eq) goto loc_833331B0;
	// lwz r11,956(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 956);
	// lwz r10,2152(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2152);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x83333050
	if (ctx.cr0.lt) goto loc_83333050;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x833331b0
	if (ctx.cr6.gt) goto loc_833331B0;
loc_83333050:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83332ab0
	ctx.lr = 0x8333305C;
	sub_83332AB0(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x833322f8
	ctx.lr = 0x8333306C;
	sub_833322F8(ctx, base);
	// rlwinm r11,r7,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF;
	// rlwinm r10,r3,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r7,24,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 24) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r10,r3,24,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 24) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r7,8,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r10,r3,8,8,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r7,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwimi r10,r3,24,0,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 24) & 0xFF000000) | (ctx.r10.u64 & 0xFFFFFFFF00FFFFFF);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x833331b0
	if (ctx.cr6.gt) goto loc_833331B0;
	// and r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 & ctx.r7.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x833331b0
	if (!ctx.cr6.eq) goto loc_833331B0;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lbz r10,158(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 158);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x833331b0
	if (!ctx.cr0.eq) goto loc_833331B0;
	// lbz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x833331b0
	if (!ctx.cr0.eq) goto loc_833331B0;
	// lbz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x833331b0
	if (!ctx.cr0.eq) goto loc_833331B0;
	// addi r11,r28,58
	ctx.r11.s64 = ctx.r28.s64 + 58;
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-25424
	ctx.r11.s64 = ctx.r9.s64 + -25424;
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r7,r28,32
	ctx.r7.s64 = ctx.r28.s64 + 32;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// stw r10,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r10.u32);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// addi r8,r28,50
	ctx.r8.s64 = ctx.r28.s64 + 50;
	// stw r9,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// lwz r9,240(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r9.u32);
	// lwz r9,236(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// stw r9,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r9.u32);
	// lwz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// lbz r10,161(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 161);
	// stb r10,162(r31)
	PPC_STORE_U8(ctx.r31.u32 + 162, ctx.r10.u8);
	// lbz r10,158(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 158);
	// stb r10,161(r31)
	PPC_STORE_U8(ctx.r31.u32 + 161, ctx.r10.u8);
	// lbz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 160);
	// stb r10,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r10.u8);
	// lbz r10,159(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 159);
	// stb r10,159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 159, ctx.r10.u8);
	// lbz r10,155(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 155);
	// stb r10,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r10.u8);
	// lbz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// stb r11,155(r31)
	PPC_STORE_U8(ctx.r31.u32 + 155, ctx.r11.u8);
	// lbz r11,154(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 154);
	// stb r11,154(r31)
	PPC_STORE_U8(ctx.r31.u32 + 154, ctx.r11.u8);
	// lbz r11,153(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 153);
	// stb r11,153(r31)
	PPC_STORE_U8(ctx.r31.u32 + 153, ctx.r11.u8);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// lwzx r11,r8,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// bne cr6,0x833331ac
	if (!ctx.cr6.eq) goto loc_833331AC;
	// li r11,3
	ctx.r11.s64 = 3;
loc_833331AC:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_833331B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833331B8"))) PPC_WEAK_FUNC(sub_833331B8);
PPC_FUNC_IMPL(__imp__sub_833331B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x833331C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83333874
	if (ctx.cr0.eq) goto loc_83333874;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bgt cr6,0x83333404
	if (ctx.cr6.gt) goto loc_83333404;
	// beq cr6,0x8333342c
	if (ctx.cr6.eq) goto loc_8333342C;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// blt cr6,0x83333874
	if (ctx.cr6.lt) goto loc_83333874;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// ble cr6,0x83333214
	if (!ctx.cr6.gt) goto loc_83333214;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x8333354c
	if (ctx.cr6.eq) goto loc_8333354C;
	// ble cr6,0x83333874
	if (!ctx.cr6.gt) goto loc_83333874;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// ble cr6,0x8333342c
	if (!ctx.cr6.gt) goto loc_8333342C;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// bne cr6,0x83333874
	if (!ctx.cr6.eq) goto loc_83333874;
loc_83333214:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833151e0
	ctx.lr = 0x8333321C;
	sub_833151E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,2152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2152);
	// lwz r10,956(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 956);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x83333238
	if (ctx.cr0.lt) goto loc_83333238;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x83333874
	if (ctx.cr6.gt) goto loc_83333874;
loc_83333238:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x83333874
	if (!ctx.cr6.eq) goto loc_83333874;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833401d8
	ctx.lr = 0x83333254;
	sub_833401D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83333874
	if (ctx.cr0.eq) goto loc_83333874;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83333270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8333329c
	if (ctx.cr6.eq) goto loc_8333329C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-25248
	ctx.r6.s64 = ctx.r11.s64 + -25248;
	// addi r5,r10,-25144
	ctx.r5.s64 = ctx.r10.s64 + -25144;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1073
	ctx.r7.s64 = 1073;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8333329C;
	sub_8320CF10(ctx, base);
loc_8333329C:
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x833332bc
	if (!ctx.cr6.eq) goto loc_833332BC;
	// lwz r9,240(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// lwz r8,240(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x833332dc
	if (ctx.cr6.eq) goto loc_833332DC;
loc_833332BC:
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// rldicr r11,r11,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r8,240(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x83333874
	if (!ctx.cr6.eq) goto loc_83333874;
loc_833332DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83340128
	ctx.lr = 0x833332E8;
	sub_83340128(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83333874
	if (ctx.cr0.eq) goto loc_83333874;
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r9,240(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,240(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x8333374c
	if (!ctx.cr6.eq) goto loc_8333374C;
loc_8333331C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83333338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x833333f4
	if (ctx.cr6.eq) goto loc_833333F4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83333360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8333337C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8333339C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833333B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833333D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833333F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_833333F4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x8333331c
	if (ctx.cr6.lt) goto loc_8333331C;
	// b 0x83333830
	goto loc_83333830;
loc_83333404:
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// beq cr6,0x83333214
	if (ctx.cr6.eq) goto loc_83333214;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// beq cr6,0x8333342c
	if (ctx.cr6.eq) goto loc_8333342C;
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// ble cr6,0x83333874
	if (!ctx.cr6.gt) goto loc_83333874;
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// ble cr6,0x8333354c
	if (!ctx.cr6.gt) goto loc_8333354C;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// bne cr6,0x83333874
	if (!ctx.cr6.eq) goto loc_83333874;
loc_8333342C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833151e0
	ctx.lr = 0x83333434;
	sub_833151E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,2152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2152);
	// lwz r10,956(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 956);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x83333450
	if (ctx.cr0.lt) goto loc_83333450;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x83333874
	if (ctx.cr6.gt) goto loc_83333874;
loc_83333450:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x83333874
	if (!ctx.cr6.eq) goto loc_83333874;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833401d8
	ctx.lr = 0x8333346C;
	sub_833401D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83333874
	if (ctx.cr0.eq) goto loc_83333874;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83340128
	ctx.lr = 0x83333480;
	sub_83340128(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83333874
	if (ctx.cr0.eq) goto loc_83333874;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,236(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x83333874
	if (!ctx.cr6.eq) goto loc_83333874;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8333349C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833334B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83333538
	if (ctx.cr6.eq) goto loc_83333538;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833334E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833334FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8333351C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83333538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83333538:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x8333349c
	if (ctx.cr6.lt) goto loc_8333349C;
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// b 0x83333834
	goto loc_83333834;
loc_8333354C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83333560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8333358c
	if (ctx.cr6.eq) goto loc_8333358C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-25248
	ctx.r6.s64 = ctx.r11.s64 + -25248;
	// addi r5,r10,-25168
	ctx.r5.s64 = ctx.r10.s64 + -25168;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1118
	ctx.r7.s64 = 1118;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8333358C;
	sub_8320CF10(ctx, base);
loc_8333358C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833151e0
	ctx.lr = 0x83333594;
	sub_833151E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,2152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2152);
	// lwz r10,956(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 956);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x833335b0
	if (ctx.cr0.lt) goto loc_833335B0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x83333874
	if (ctx.cr6.gt) goto loc_83333874;
loc_833335B0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x83333874
	if (!ctx.cr6.eq) goto loc_83333874;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833401d8
	ctx.lr = 0x833335CC;
	sub_833401D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83333874
	if (ctx.cr0.eq) goto loc_83333874;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83340128
	ctx.lr = 0x833335E0;
	sub_83340128(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83333874
	if (ctx.cr0.eq) goto loc_83333874;
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r9,240(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,240(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x83333874
	if (!ctx.cr6.eq) goto loc_83333874;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r10,244(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x83333874
	if (!ctx.cr6.eq) goto loc_83333874;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83333624:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83333640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83333738
	if (ctx.cr6.eq) goto loc_83333738;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83333668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83333684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833336A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833336C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833336E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833336FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8333371C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83333738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83333738:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x83333624
	if (ctx.cr6.lt) goto loc_83333624;
	// lwz r10,248(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// b 0x83333834
	goto loc_83333834;
loc_8333374C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83333768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83333824
	if (ctx.cr6.eq) goto loc_83333824;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83333790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833337AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833337CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833337E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83333808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83333824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83333824:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x8333374c
	if (ctx.cr6.lt) goto loc_8333374C;
loc_83333830:
	// lwz r10,244(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
loc_83333834:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// beq 0x83333854
	if (ctx.cr0.eq) goto loc_83333854;
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// b 0x83333874
	goto loc_83333874;
loc_83333854:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r11,58
	ctx.r9.s64 = ctx.r11.s64 + 58;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
loc_83333874:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8333387C"))) PPC_WEAK_FUNC(sub_8333387C);
PPC_FUNC_IMPL(__imp__sub_8333387C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83333880"))) PPC_WEAK_FUNC(sub_83333880);
PPC_FUNC_IMPL(__imp__sub_83333880) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8333388C"))) PPC_WEAK_FUNC(sub_8333388C);
PPC_FUNC_IMPL(__imp__sub_8333388C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83333890"))) PPC_WEAK_FUNC(sub_83333890);
PPC_FUNC_IMPL(__imp__sub_83333890) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8333389C"))) PPC_WEAK_FUNC(sub_8333389C);
PPC_FUNC_IMPL(__imp__sub_8333389C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833338A0"))) PPC_WEAK_FUNC(sub_833338A0);
PPC_FUNC_IMPL(__imp__sub_833338A0) {
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
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,32740
	ctx.r11.s64 = ctx.r11.s64 + 32740;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x833338d4
	if (ctx.cr0.eq) goto loc_833338D4;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x832e7378
	ctx.lr = 0x833338D4;
	sub_832E7378(ctx, base);
loc_833338D4:
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

__attribute__((alias("__imp__sub_833338EC"))) PPC_WEAK_FUNC(sub_833338EC);
PPC_FUNC_IMPL(__imp__sub_833338EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833338F0"))) PPC_WEAK_FUNC(sub_833338F0);
PPC_FUNC_IMPL(__imp__sub_833338F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x833338F8;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x83314848
	ctx.lr = 0x83333910;
	sub_83314848(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r4,r11,-25052
	ctx.r4.s64 = ctx.r11.s64 + -25052;
	// bl 0x832e7968
	ctx.lr = 0x83333920;
	sub_832E7968(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8333392C:
	// lwz r11,2068(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2068);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83333944
	if (!ctx.cr6.gt) goto loc_83333944;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83333950
	goto loc_83333950;
loc_83333944:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r30,r10,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
loc_83333950:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83333990
	if (ctx.cr0.eq) goto loc_83333990;
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83333984
	if (ctx.cr0.eq) goto loc_83333984;
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// bl 0x833322f8
	ctx.lr = 0x8333396C;
	sub_833322F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8333cef8
	ctx.lr = 0x83333980;
	sub_8333CEF8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_83333984:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x8333392c
	goto loc_8333392C;
loc_83333990:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,-25120
	ctx.r24.s64 = ctx.r10.s64 + -25120;
	// addi r23,r9,-25248
	ctx.r23.s64 = ctx.r9.s64 + -25248;
	// b 0x83333ac0
	goto loc_83333AC0;
loc_833339AC:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8333cd18
	ctx.lr = 0x833339C0;
	sub_8333CD18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83332e98
	ctx.lr = 0x833339C8;
	sub_83332E98(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833339e0
	if (ctx.cr0.eq) goto loc_833339E0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// b 0x833339e4
	goto loc_833339E4;
loc_833339E0:
	// lwz r27,20(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_833339E4:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// blt cr6,0x83333a3c
	if (ctx.cr6.lt) goto loc_83333A3C;
	// addi r28,r31,236
	ctx.r28.s64 = ctx.r31.s64 + 236;
loc_833339F4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83332ab0
	ctx.lr = 0x83333A08;
	sub_83332AB0(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// or r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 | ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83333a2c
	if (ctx.cr6.eq) goto loc_83333A2C;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8333cef8
	ctx.lr = 0x83333A28;
	sub_8333CEF8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_83333A2C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x833339f4
	if (!ctx.cr6.gt) goto loc_833339F4;
loc_83333A3C:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83333ac0
	if (ctx.cr0.eq) goto loc_83333AC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833151e0
	ctx.lr = 0x83333A50;
	sub_833151E0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x833322f8
	ctx.lr = 0x83333A60;
	sub_833322F8(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x83332370
	ctx.lr = 0x83333A70;
	sub_83332370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x833323f8
	ctx.lr = 0x83333A7C;
	sub_833323F8(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x83333a9c
	if (ctx.cr6.eq) goto loc_83333A9C;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,843
	ctx.r7.s64 = 843;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83333A9C;
	sub_8320CF10(ctx, base);
loc_83333A9C:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// or r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 | ctx.r31.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83333ac0
	if (ctx.cr6.eq) goto loc_83333AC0;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8333cef8
	ctx.lr = 0x83333ABC;
	sub_8333CEF8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_83333AC0:
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x833339ac
	if (!ctx.cr6.eq) goto loc_833339AC;
	// lwz r8,136(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// b 0x83333b4c
	goto loc_83333B4C;
loc_83333AD4:
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// b 0x83333b3c
	goto loc_83333B3C;
loc_83333ADC:
	// lwz r11,228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83333b38
	if (ctx.cr0.eq) goto loc_83333B38;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,128(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
loc_83333AFC:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x83333b18
	if (!ctx.cr6.eq) goto loc_83333B18;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// b 0x83333b1c
	goto loc_83333B1C;
loc_83333B18:
	// li r9,1
	ctx.r9.s64 = 1;
loc_83333B1C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stbx r9,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83333afc
	if (ctx.cr6.lt) goto loc_83333AFC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r11.u32);
loc_83333B38:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_83333B3C:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83333adc
	if (!ctx.cr6.eq) goto loc_83333ADC;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
loc_83333B4C:
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83333ad4
	if (!ctx.cr6.eq) goto loc_83333AD4;
	// lwz r26,136(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83333cdc
	if (ctx.cr6.eq) goto loc_83333CDC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r27,r11,-25672
	ctx.r27.s64 = ctx.r11.s64 + -25672;
loc_83333B70:
	// lwz r31,28(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// b 0x83333cc0
	goto loc_83333CC0;
loc_83333B78:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83333cbc
	if (ctx.cr0.eq) goto loc_83333CBC;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83333cb4
	if (ctx.cr6.eq) goto loc_83333CB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83333BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x83333c4c
	if (ctx.cr6.lt) goto loc_83333C4C;
	// addi r30,r31,132
	ctx.r30.s64 = ctx.r31.s64 + 132;
loc_83333BB8:
	// lwz r5,104(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r3,128(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 128);
	// bl 0x833322f8
	ctx.lr = 0x83333BC4;
	sub_833322F8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_83333BD4:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// or r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 | ctx.r29.u64;
	// blt cr6,0x83333bd4
	if (ctx.cr6.lt) goto loc_83333BD4;
loc_83333BF4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83333c04
	if (ctx.cr6.eq) goto loc_83333C04;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83333c1c
	if (!ctx.cr6.eq) goto loc_83333C1C;
loc_83333C04:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x833151e0
	ctx.lr = 0x83333C0C;
	sub_833151E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,128(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 128);
	// bl 0x833322f8
	ctx.lr = 0x83333C18;
	sub_833322F8(ctx, base);
	// b 0x83333bf4
	goto loc_83333BF4;
loc_83333C1C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83315378
	ctx.lr = 0x83333C28;
	sub_83315378(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83333C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x83333bb8
	if (!ctx.cr6.gt) goto loc_83333BB8;
loc_83333C4C:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83333cb4
	if (ctx.cr0.eq) goto loc_83333CB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833151e0
	ctx.lr = 0x83333C60;
	sub_833151E0(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x833322f8
	ctx.lr = 0x83333C68;
	sub_833322F8(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x83332370
	ctx.lr = 0x83333C78;
	sub_83332370(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x833323f8
	ctx.lr = 0x83333C84;
	sub_833323F8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x83333ca4
	if (ctx.cr6.eq) goto loc_83333CA4;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,897
	ctx.r7.s64 = 897;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83333CA4;
	sub_8320CF10(ctx, base);
loc_83333CA4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83333cb4
	if (!ctx.cr6.eq) goto loc_83333CB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83315248
	ctx.lr = 0x83333CB4;
	sub_83315248(ctx, base);
loc_83333CB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83333CBC:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83333CC0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83333b78
	if (!ctx.cr6.eq) goto loc_83333B78;
	// lwz r26,8(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83333b70
	if (!ctx.cr6.eq) goto loc_83333B70;
loc_83333CDC:
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x832e7378
	ctx.lr = 0x83333CE8;
	sub_832E7378(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83333CF0"))) PPC_WEAK_FUNC(sub_83333CF0);
PPC_FUNC_IMPL(__imp__sub_83333CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,2136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83333d20
	if (ctx.cr0.eq) goto loc_83333D20;
	// bl 0x83332fc0
	ctx.lr = 0x83333D20;
	sub_83332FC0(ctx, base);
loc_83333D20:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,2136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	// rlwinm. r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83333d3c
	if (ctx.cr0.eq) goto loc_83333D3C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833331b8
	ctx.lr = 0x83333D3C;
	sub_833331B8(ctx, base);
loc_83333D3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83333D54"))) PPC_WEAK_FUNC(sub_83333D54);
PPC_FUNC_IMPL(__imp__sub_83333D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83333D58"))) PPC_WEAK_FUNC(sub_83333D58);
PPC_FUNC_IMPL(__imp__sub_83333D58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83333D68"))) PPC_WEAK_FUNC(sub_83333D68);
PPC_FUNC_IMPL(__imp__sub_83333D68) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83333d88
	if (!ctx.cr6.lt) goto loc_83333D88;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_83333D88:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83333D90"))) PPC_WEAK_FUNC(sub_83333D90);
PPC_FUNC_IMPL(__imp__sub_83333D90) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83333db0
	if (!ctx.cr6.lt) goto loc_83333DB0;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_83333DB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83333DB8"))) PPC_WEAK_FUNC(sub_83333DB8);
PPC_FUNC_IMPL(__imp__sub_83333DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x83333DC0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,2148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2148);
	// lwz r10,2152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2152);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,2148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2148, ctx.r11.u32);
	// stw r10,2152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2152, ctx.r10.u32);
	// lwz r4,1456(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1456);
	// bl 0x83314848
	ctx.lr = 0x83333DF0;
	sub_83314848(ctx, base);
	// lwz r29,136(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// b 0x83333e7c
	goto loc_83333E7C;
loc_83333DF8:
	// lwz r31,28(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// b 0x83333e6c
	goto loc_83333E6C;
loc_83333E00:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83333e68
	if (ctx.cr0.eq) goto loc_83333E68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83333E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83333e44
	if (!ctx.cr0.eq) goto loc_83333E44;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83333E3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83333e68
	if (ctx.cr0.eq) goto loc_83333E68;
loc_83333E44:
	// lwz r11,2148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2148);
	// lwz r10,956(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// lwz r11,2152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2152);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ble cr6,0x83333e64
	if (!ctx.cr6.gt) goto loc_83333E64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
loc_83333E64:
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
loc_83333E68:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83333E6C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83333e00
	if (!ctx.cr6.eq) goto loc_83333E00;
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_83333E7C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83333df8
	if (!ctx.cr6.eq) goto loc_83333DF8;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
loc_83333E94:
	// lwz r11,2068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2068);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83333eac
	if (!ctx.cr6.gt) goto loc_83333EAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83333eb8
	goto loc_83333EB8;
loc_83333EAC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r26,r10,r25
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
loc_83333EB8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83333fbc
	if (ctx.cr0.eq) goto loc_83333FBC;
	// lwz r11,228(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83333fb0
	if (ctx.cr0.eq) goto loc_83333FB0;
	// lwz r11,2148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2148);
	// lwz r10,956(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 956);
	// stw r11,892(r26)
	PPC_STORE_U32(ctx.r26.u32 + 892, ctx.r11.u32);
	// lwz r11,2152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2152);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ble cr6,0x83333eec
	if (!ctx.cr6.gt) goto loc_83333EEC;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
loc_83333EEC:
	// stw r11,956(r26)
	PPC_STORE_U32(ctx.r26.u32 + 956, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8333cef8
	ctx.lr = 0x83333EFC;
	sub_8333CEF8(ctx, base);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
loc_83333F00:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8331eef0
	ctx.lr = 0x83333F08;
	sub_8331EEF0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x83333fa4
	if (ctx.cr6.lt) goto loc_83333FA4;
	// addi r29,r28,236
	ctx.r29.s64 = ctx.r28.s64 + 236;
loc_83333F20:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83333f90
	if (ctx.cr6.eq) goto loc_83333F90;
loc_83333F2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83340f00
	ctx.lr = 0x83333F34;
	sub_83340F00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83333f48
	if (ctx.cr0.eq) goto loc_83333F48;
	// lwz r31,236(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83333f2c
	if (!ctx.cr6.eq) goto loc_83333F2C;
loc_83333F48:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83333f90
	if (ctx.cr6.eq) goto loc_83333F90;
	// lwz r11,2152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2152);
	// lwz r10,956(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ble cr6,0x83333f68
	if (!ctx.cr6.gt) goto loc_83333F68;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
loc_83333F68:
	// lwz r10,892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// lwz r11,2148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2148);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83333f90
	if (ctx.cr6.eq) goto loc_83333F90;
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8333cef8
	ctx.lr = 0x83333F8C;
	sub_8333CEF8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_83333F90:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x83333f20
	if (!ctx.cr6.gt) goto loc_83333F20;
loc_83333FA4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83333f00
	if (!ctx.cr6.eq) goto loc_83333F00;
loc_83333FB0:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// b 0x83333e94
	goto loc_83333E94;
loc_83333FBC:
	// lwz r29,136(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x8333406c
	goto loc_8333406C;
loc_83333FCC:
	// lwz r31,28(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// b 0x8333405c
	goto loc_8333405C;
loc_83333FD4:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83334058
	if (ctx.cr0.eq) goto loc_83334058;
	// lwz r11,892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	// lwz r10,2148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2148);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x83334058
	if (ctx.cr6.eq) goto loc_83334058;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83334004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8333402c
	if (ctx.cr0.eq) goto loc_8333402C;
	// lbz r11,2116(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2116);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8333402c
	if (!ctx.cr0.eq) goto loc_8333402C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r30,184
	ctx.r3.s64 = ctx.r30.s64 + 184;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x83334ee0
	ctx.lr = 0x8333402C;
	sub_83334EE0(ctx, base);
loc_8333402C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83334040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,137
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 137, ctx.xer);
	// bne cr6,0x83334054
	if (!ctx.cr6.eq) goto loc_83334054;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x83334058
	goto loc_83334058;
loc_83334054:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_83334058:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8333405C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83333fd4
	if (!ctx.cr6.eq) goto loc_83333FD4;
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_8333406C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83333fcc
	if (!ctx.cr6.eq) goto loc_83333FCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83315ee8
	ctx.lr = 0x83334080;
	sub_83315EE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x833340ac
	if (!ctx.cr0.eq) goto loc_833340AC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-25248
	ctx.r6.s64 = ctx.r11.s64 + -25248;
	// addi r5,r10,-27704
	ctx.r5.s64 = ctx.r10.s64 + -27704;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,154
	ctx.r7.s64 = 154;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833340AC;
	sub_8320CF10(ctx, base);
loc_833340AC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x833340c8
	if (ctx.cr6.eq) goto loc_833340C8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-24928
	ctx.r4.s64 = ctx.r11.s64 + -24928;
	// bl 0x832e7968
	ctx.lr = 0x833340C8;
	sub_832E7968(ctx, base);
loc_833340C8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x833340e4
	if (ctx.cr6.eq) goto loc_833340E4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-24992
	ctx.r4.s64 = ctx.r11.s64 + -24992;
	// bl 0x832e7968
	ctx.lr = 0x833340E4;
	sub_832E7968(ctx, base);
loc_833340E4:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x832e7378
	ctx.lr = 0x833340F0;
	sub_832E7378(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833340F8"))) PPC_WEAK_FUNC(sub_833340F8);
PPC_FUNC_IMPL(__imp__sub_833340F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83334100;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,-24860
	ctx.r4.s64 = ctx.r11.s64 + -24860;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x832e7968
	ctx.lr = 0x83334118;
	sub_832E7968(ctx, base);
	// lwz r11,2148(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2148);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2148, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x83314848
	ctx.lr = 0x83334134;
	sub_83314848(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x83314848
	ctx.lr = 0x83334144;
	sub_83314848(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_83334154:
	// lwz r11,2068(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2068);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8333416c
	if (!ctx.cr6.gt) goto loc_8333416C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x83334178
	goto loc_83334178;
loc_8333416C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r31,r10,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
loc_83334178:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833342d4
	if (ctx.cr0.eq) goto loc_833342D4;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833342c8
	if (ctx.cr0.eq) goto loc_833342C8;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
loc_83334194:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83334198:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8333420c
	if (ctx.cr0.eq) goto loc_8333420C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x833341d4
	if (ctx.cr6.eq) goto loc_833341D4;
	// lwz r11,2148(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2148);
	// lwz r10,892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x833341d4
	if (ctx.cr6.eq) goto loc_833341D4;
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833341dc
	if (!ctx.cr6.eq) goto loc_833341DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83333cf0
	ctx.lr = 0x833341D4;
	sub_83333CF0(ctx, base);
loc_833341D4:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// b 0x83334198
	goto loc_83334198;
loc_833341DC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8333cef8
	ctx.lr = 0x833341E8;
	sub_8333CEF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8333cef8
	ctx.lr = 0x833341FC;
	sub_8333CEF8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r31,236(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// b 0x83334198
	goto loc_83334198;
loc_8333420C:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833342c8
	if (ctx.cr6.eq) goto loc_833342C8;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83334238
	if (!ctx.cr6.lt) goto loc_83334238;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8333423c
	goto loc_8333423C;
loc_83334238:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8333423C:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x833342a8
	if (ctx.cr6.eq) goto loc_833342A8;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83334268
	if (!ctx.cr6.lt) goto loc_83334268;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8333426c
	goto loc_8333426C;
loc_83334268:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8333426C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x833342a8
	if (ctx.cr6.eq) goto loc_833342A8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83322598
	ctx.lr = 0x83334284;
	sub_83322598(ctx, base);
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8333cef8
	ctx.lr = 0x83334294;
	sub_8333CEF8(ctx, base);
	// addi r11,r30,58
	ctx.r11.s64 = ctx.r30.s64 + 58;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// b 0x83334194
	goto loc_83334194;
loc_833342A8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83333cf0
	ctx.lr = 0x833342B4;
	sub_83333CF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8331eef0
	ctx.lr = 0x833342BC;
	sub_8331EEF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83322598
	ctx.lr = 0x833342C4;
	sub_83322598(ctx, base);
	// b 0x83334198
	goto loc_83334198;
loc_833342C8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x83334154
	goto loc_83334154;
loc_833342D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833338f0
	ctx.lr = 0x833342DC;
	sub_833338F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83333db8
	ctx.lr = 0x833342E4;
	sub_83333DB8(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x832e7378
	ctx.lr = 0x833342F0;
	sub_832E7378(ctx, base);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x832e7378
	ctx.lr = 0x833342FC;
	sub_832E7378(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83334304"))) PPC_WEAK_FUNC(sub_83334304);
PPC_FUNC_IMPL(__imp__sub_83334304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83334308"))) PPC_WEAK_FUNC(sub_83334308);
PPC_FUNC_IMPL(__imp__sub_83334308) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,1876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1876, ctx.r4.u32);
	// addi r9,r3,1104
	ctx.r9.s64 = ctx.r3.s64 + 1104;
	// stb r11,1872(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1872, ctx.r11.u8);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stb r11,1873(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1873, ctx.r11.u8);
	// addi r10,r3,976
	ctx.r10.s64 = ctx.r3.s64 + 976;
	// addi r6,r3,896
	ctx.r6.s64 = ctx.r3.s64 + 896;
	// li r5,19
	ctx.r5.s64 = 19;
loc_8333432C:
	// stw r11,-64(r10)
	PPC_STORE_U32(ctx.r10.u32 + -64, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stbx r11,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r11.u8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r8,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r8.u32);
	// stw r11,-976(r10)
	PPC_STORE_U32(ctx.r10.u32 + -976, ctx.r11.u32);
	// stw r8,-912(r10)
	PPC_STORE_U32(ctx.r10.u32 + -912, ctx.r8.u32);
loc_83334348:
	// stw r11,-976(r9)
	PPC_STORE_U32(ctx.r9.u32 + -976, ctx.r11.u32);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r5,-720(r9)
	PPC_STORE_U32(ctx.r9.u32 + -720, ctx.r5.u32);
	// stw r5,256(r9)
	PPC_STORE_U32(ctx.r9.u32 + 256, ctx.r5.u32);
	// stw r11,-464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -464, ctx.r11.u32);
	// stw r11,512(r9)
	PPC_STORE_U32(ctx.r9.u32 + 512, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x83334348
	if (!ctx.cr0.eq) goto loc_83334348;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x8333432c
	if (ctx.cr6.lt) goto loc_8333432C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83334380"))) PPC_WEAK_FUNC(sub_83334380);
PPC_FUNC_IMPL(__imp__sub_83334380) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83334388;
	__savegprlr_26(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,1876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1876, ctx.r5.u32);
	// addi r31,r3,1104
	ctx.r31.s64 = ctx.r3.s64 + 1104;
	// stb r10,1872(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1872, ctx.r10.u8);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r10,1873(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1873, ctx.r10.u8);
	// addi r11,r3,976
	ctx.r11.s64 = ctx.r3.s64 + 976;
	// lbz r9,1872(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1872);
	// addi r30,r4,640
	ctx.r30.s64 = ctx.r4.s64 + 640;
	// stb r9,1872(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1872, ctx.r9.u8);
	// subf r29,r3,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r3.s64;
	// addi r27,r3,896
	ctx.r27.s64 = ctx.r3.s64 + 896;
	// li r28,19
	ctx.r28.s64 = 19;
loc_833343BC:
	// stw r10,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r10.u32);
	// stbx r10,r27,r8
	PPC_STORE_U8(ctx.r27.u32 + ctx.r8.u32, ctx.r10.u8);
	// lbz r9,1872(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1872);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x83334430
	if (ctx.cr0.eq) goto loc_83334430;
	// lwz r26,0(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r5,r11,-912
	ctx.r5.s64 = ctx.r11.s64 + -912;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r9,r31,-976
	ctx.r9.s64 = ctx.r31.s64 + -976;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r26,-976(r11)
	PPC_STORE_U32(ctx.r11.u32 + -976, ctx.r26.u32);
	// lwzx r5,r29,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	// stw r5,-912(r11)
	PPC_STORE_U32(ctx.r11.u32 + -912, ctx.r5.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
loc_833343F8:
	// lwzx r5,r29,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r10,976(r9)
	PPC_STORE_U32(ctx.r9.u32 + 976, ctx.r10.u32);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// lwz r5,-256(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + -256);
	// stw r5,256(r9)
	PPC_STORE_U32(ctx.r9.u32 + 256, ctx.r5.u32);
	// stw r28,1232(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1232, ctx.r28.u32);
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r5,512(r9)
	PPC_STORE_U32(ctx.r9.u32 + 512, ctx.r5.u32);
	// stw r10,1488(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1488, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x833343f8
	if (!ctx.cr0.eq) goto loc_833343F8;
	// b 0x8333446c
	goto loc_8333446C;
loc_83334430:
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r8,-912(r11)
	PPC_STORE_U32(ctx.r11.u32 + -912, ctx.r8.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,-976(r11)
	PPC_STORE_U32(ctx.r11.u32 + -976, ctx.r10.u32);
loc_83334448:
	// stw r10,-976(r9)
	PPC_STORE_U32(ctx.r9.u32 + -976, ctx.r10.u32);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r28,-720(r9)
	PPC_STORE_U32(ctx.r9.u32 + -720, ctx.r28.u32);
	// stw r28,256(r9)
	PPC_STORE_U32(ctx.r9.u32 + 256, ctx.r28.u32);
	// stw r10,-464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -464, ctx.r10.u32);
	// stw r10,512(r9)
	PPC_STORE_U32(ctx.r9.u32 + 512, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x83334448
	if (!ctx.cr0.eq) goto loc_83334448;
loc_8333446C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x833343bc
	if (ctx.cr6.lt) goto loc_833343BC;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8333448C"))) PPC_WEAK_FUNC(sub_8333448C);
PPC_FUNC_IMPL(__imp__sub_8333448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83334490"))) PPC_WEAK_FUNC(sub_83334490);
PPC_FUNC_IMPL(__imp__sub_83334490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83334498;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// beq cr6,0x83334558
	if (ctx.cr6.eq) goto loc_83334558;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// beq cr6,0x83334558
	if (ctx.cr6.eq) goto loc_83334558;
	// addi r11,r30,244
	ctx.r11.s64 = ctx.r30.s64 + 244;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bne cr6,0x83334518
	if (!ctx.cr6.eq) goto loc_83334518;
	// addi r11,r30,69
	ctx.r11.s64 = ctx.r30.s64 + 69;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83334518
	if (ctx.cr6.eq) goto loc_83334518;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-24552
	ctx.r6.s64 = ctx.r11.s64 + -24552;
	// addi r5,r10,-24688
	ctx.r5.s64 = ctx.r10.s64 + -24688;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,138
	ctx.r7.s64 = 138;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83334518;
	sub_8320CF10(ctx, base);
loc_83334518:
	// addi r11,r30,69
	ctx.r11.s64 = ctx.r30.s64 + 69;
	// addi r10,r30,85
	ctx.r10.s64 = ctx.r30.s64 + 85;
	// addi r9,r30,101
	ctx.r9.s64 = ctx.r30.s64 + 101;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r27.u32);
	// stwx r28,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r28.u32);
	// stwx r26,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r26.u32);
	// b 0x8333460c
	goto loc_8333460C;
loc_83334558:
	// addi r11,r30,228
	ctx.r11.s64 = ctx.r30.s64 + 228;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r27,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8333460c
	if (ctx.cr6.eq) goto loc_8333460C;
	// addi r11,r30,244
	ctx.r11.s64 = ctx.r30.s64 + 244;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bne cr6,0x8333459c
	if (!ctx.cr6.eq) goto loc_8333459C;
	// addi r11,r30,69
	ctx.r11.s64 = ctx.r30.s64 + 69;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x833345c0
	if (ctx.cr6.eq) goto loc_833345C0;
loc_8333459C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-24552
	ctx.r6.s64 = ctx.r11.s64 + -24552;
	// addi r5,r10,-24824
	ctx.r5.s64 = ctx.r10.s64 + -24824;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,122
	ctx.r7.s64 = 122;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833345C0;
	sub_8320CF10(ctx, base);
loc_833345C0:
	// addi r11,r30,260
	ctx.r11.s64 = ctx.r30.s64 + 260;
	// add r8,r30,r31
	ctx.r8.u64 = ctx.r30.u64 + ctx.r31.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r30,85
	ctx.r10.s64 = ctx.r30.s64 + 85;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r11,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r11,896(r8)
	PPC_STORE_U8(ctx.r8.u32 + 896, ctx.r11.u8);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stwx r11,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u32);
	// stwx r30,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r30.u32);
loc_833345F0:
	// li r8,19
	ctx.r8.s64 = 19;
	// stw r11,-256(r10)
	PPC_STORE_U32(ctx.r10.u32 + -256, ctx.r11.u32);
	// stw r11,256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 256, ctx.r11.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x833345f0
	if (!ctx.cr0.eq) goto loc_833345F0;
loc_8333460C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83334614"))) PPC_WEAK_FUNC(sub_83334614);
PPC_FUNC_IMPL(__imp__sub_83334614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83334618"))) PPC_WEAK_FUNC(sub_83334618);
PPC_FUNC_IMPL(__imp__sub_83334618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83334620;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,-24424
	ctx.r4.s64 = ctx.r11.s64 + -24424;
	// lwz r3,1876(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1876);
	// bl 0x832e7968
	ctx.lr = 0x83334638;
	sub_832E7968(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,1040
	ctx.r31.s64 = ctx.r29.s64 + 1040;
	// addi r28,r10,-24464
	ctx.r28.s64 = ctx.r10.s64 + -24464;
	// addi r27,r11,6768
	ctx.r27.s64 = ctx.r11.s64 + 6768;
loc_83334650:
	// lwz r11,-128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8333467c
	if (ctx.cr6.eq) goto loc_8333467C;
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwz r3,1876(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1876);
	// lwzx r6,r11,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x832e7968
	ctx.lr = 0x8333467C;
	sub_832E7968(ctx, base);
loc_8333467C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// blt cr6,0x83334650
	if (ctx.cr6.lt) goto loc_83334650;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83334694"))) PPC_WEAK_FUNC(sub_83334694);
PPC_FUNC_IMPL(__imp__sub_83334694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83334698"))) PPC_WEAK_FUNC(sub_83334698);
PPC_FUNC_IMPL(__imp__sub_83334698) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,244
	ctx.r11.s64 = ctx.r4.s64 + 244;
	// addi r10,r5,244
	ctx.r10.s64 = ctx.r5.s64 + 244;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x833346c0
	if (!ctx.cr6.lt) goto loc_833346C0;
loc_833346B8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_833346C0:
	// ble cr6,0x833346cc
	if (!ctx.cr6.gt) goto loc_833346CC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_833346CC:
	// addi r11,r4,260
	ctx.r11.s64 = ctx.r4.s64 + 260;
	// addi r10,r5,260
	ctx.r10.s64 = ctx.r5.s64 + 260;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x833346b8
	if (ctx.cr6.gt) goto loc_833346B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833346FC"))) PPC_WEAK_FUNC(sub_833346FC);
PPC_FUNC_IMPL(__imp__sub_833346FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83334700"))) PPC_WEAK_FUNC(sub_83334700);
PPC_FUNC_IMPL(__imp__sub_83334700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83334708;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lbz r9,1873(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1873);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r28,r10,-24552
	ctx.r28.s64 = ctx.r10.s64 + -24552;
	// beq 0x83334754
	if (ctx.cr0.eq) goto loc_83334754;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-24388
	ctx.r5.s64 = ctx.r11.s64 + -24388;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,482
	ctx.r7.s64 = 482;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83334754;
	sub_8320CF10(ctx, base);
loc_83334754:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r31,912
	ctx.r11.s64 = ctx.r31.s64 + 912;
loc_8333475C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x833347a0
	if (ctx.cr6.eq) goto loc_833347A0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// blt cr6,0x8333475c
	if (ctx.cr6.lt) goto loc_8333475C;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12392
	ctx.r5.s64 = ctx.r11.s64 + -12392;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,499
	ctx.r7.s64 = 499;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83334794;
	sub_8320CF10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83334798:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_833347A0:
	// addi r11,r3,244
	ctx.r11.s64 = ctx.r3.s64 + 244;
	// addi r10,r3,260
	ctx.r10.s64 = ctx.r3.s64 + 260;
	// addi r9,r3,228
	ctx.r9.s64 = ctx.r3.s64 + 228;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r30,33
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 33, ctx.xer);
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// stwx r27,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r27.u32);
	// stwx r26,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r26.u32);
	// beq cr6,0x83334798
	if (ctx.cr6.eq) goto loc_83334798;
	// addi r11,r3,69
	ctx.r11.s64 = ctx.r3.s64 + 69;
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x83334798
	goto loc_83334798;
}

__attribute__((alias("__imp__sub_833347F0"))) PPC_WEAK_FUNC(sub_833347F0);
PPC_FUNC_IMPL(__imp__sub_833347F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x833347F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r9,r30,r31
	ctx.r9.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stb r8,896(r9)
	PPC_STORE_U8(ctx.r9.u32 + 896, ctx.r8.u8);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lbz r9,1872(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1872);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,-24552
	ctx.r27.s64 = ctx.r10.s64 + -24552;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x83334854
	if (ctx.cr0.eq) goto loc_83334854;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-24332
	ctx.r5.s64 = ctx.r11.s64 + -24332;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,512
	ctx.r7.s64 = 512;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83334854;
	sub_8320CF10(ctx, base);
loc_83334854:
	// lbz r11,1873(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1873);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8333487c
	if (!ctx.cr0.eq) goto loc_8333487C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-24352
	ctx.r5.s64 = ctx.r11.s64 + -24352;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,514
	ctx.r7.s64 = 514;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8333487C;
	sub_8320CF10(ctx, base);
loc_8333487C:
	// addi r11,r30,228
	ctx.r11.s64 = ctx.r30.s64 + 228;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r26,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833348ac
	if (ctx.cr6.eq) goto loc_833348AC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-24368
	ctx.r5.s64 = ctx.r11.s64 + -24368;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,515
	ctx.r7.s64 = 515;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833348AC;
	sub_8320CF10(ctx, base);
loc_833348AC:
	// addi r11,r30,244
	ctx.r11.s64 = ctx.r30.s64 + 244;
	// stwx r24,r26,r31
	PPC_STORE_U32(ctx.r26.u32 + ctx.r31.u32, ctx.r24.u32);
	// addi r10,r30,260
	ctx.r10.s64 = ctx.r30.s64 + 260;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r29,33
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 33, ctx.xer);
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
	// stwx r25,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r25.u32);
	// beq cr6,0x833348f0
	if (ctx.cr6.eq) goto loc_833348F0;
	// addi r11,r30,69
	ctx.r11.s64 = ctx.r30.s64 + 69;
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_833348F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833348FC"))) PPC_WEAK_FUNC(sub_833348FC);
PPC_FUNC_IMPL(__imp__sub_833348FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83334900"))) PPC_WEAK_FUNC(sub_83334900);
PPC_FUNC_IMPL(__imp__sub_83334900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83334908;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,-24304
	ctx.r4.s64 = ctx.r11.s64 + -24304;
	// lwz r3,1876(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1876);
	// bl 0x832e7968
	ctx.lr = 0x83334920;
	sub_832E7968(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r28,912
	ctx.r30.s64 = ctx.r28.s64 + 912;
	// addi r31,r28,1616
	ctx.r31.s64 = ctx.r28.s64 + 1616;
loc_8333492C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83334964
	if (ctx.cr6.eq) goto loc_83334964;
	// lwz r5,64(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r5,18
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 18, ctx.xer);
	// beq cr6,0x83334964
	if (ctx.cr6.eq) goto loc_83334964;
	// addi r10,r31,-512
	ctx.r10.s64 = ctx.r31.s64 + -512;
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r6,128(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r8,r31,-256
	ctx.r8.s64 = ctx.r31.s64 + -256;
	// lwz r3,1876(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1876);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832e70c0
	ctx.lr = 0x83334964;
	sub_832E70C0(ctx, base);
loc_83334964:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// blt cr6,0x8333492c
	if (ctx.cr6.lt) goto loc_8333492C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83334980"))) PPC_WEAK_FUNC(sub_83334980);
PPC_FUNC_IMPL(__imp__sub_83334980) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r9,r3,1360
	ctx.r9.s64 = ctx.r3.s64 + 1360;
	// addi r8,r4,384
	ctx.r8.s64 = ctx.r4.s64 + 384;
	// addi r11,r3,976
	ctx.r11.s64 = ctx.r3.s64 + 976;
	// li r7,16
	ctx.r7.s64 = 16;
loc_83334994:
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r5,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r5.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
loc_833349A8:
	// lwz r5,-256(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -256);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r5,-256(r8)
	PPC_STORE_U32(ctx.r8.u32 + -256, ctx.r5.u32);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// lwz r5,256(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 256);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r5,256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 256, ctx.r5.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x833349a8
	if (!ctx.cr0.eq) goto loc_833349A8;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x83334994
	if (!ctx.cr0.eq) goto loc_83334994;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1872(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1872, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833349EC"))) PPC_WEAK_FUNC(sub_833349EC);
PPC_FUNC_IMPL(__imp__sub_833349EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833349F0"))) PPC_WEAK_FUNC(sub_833349F0);
PPC_FUNC_IMPL(__imp__sub_833349F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lbz r11,1872(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1872);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83334a3c
	if (!ctx.cr0.eq) goto loc_83334A3C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-24248
	ctx.r6.s64 = ctx.r11.s64 + -24248;
	// addi r5,r10,-24276
	ctx.r5.s64 = ctx.r10.s64 + -24276;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,107
	ctx.r7.s64 = 107;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83334A3C;
	sub_8320CF10(ctx, base);
loc_83334A3C:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83334a80
	if (!ctx.cr6.eq) goto loc_83334A80;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83334a80
	if (!ctx.cr6.eq) goto loc_83334A80;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83334a80
	if (!ctx.cr6.eq) goto loc_83334A80;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x83334a84
	if (ctx.cr6.eq) goto loc_83334A84;
loc_83334A80:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83334A84:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83334AA0"))) PPC_WEAK_FUNC(sub_83334AA0);
PPC_FUNC_IMPL(__imp__sub_83334AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,172(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83334AA8"))) PPC_WEAK_FUNC(sub_83334AA8);
PPC_FUNC_IMPL(__imp__sub_83334AA8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r4,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r4.u32);
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83334AD0"))) PPC_WEAK_FUNC(sub_83334AD0);
PPC_FUNC_IMPL(__imp__sub_83334AD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83334AD8"))) PPC_WEAK_FUNC(sub_83334AD8);
PPC_FUNC_IMPL(__imp__sub_83334AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83334AE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r28,r11,-700
	ctx.xer.ca = ctx.r11.u32 <= 4294966596;
	ctx.r28.s64 = -700 - ctx.r11.s64;
	// subfic r30,r11,-636
	ctx.xer.ca = ctx.r11.u32 <= 4294966660;
	ctx.r30.s64 = -636 - ctx.r11.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r11,976
	ctx.r9.s64 = ctx.r11.s64 + 976;
	// lwzx r27,r10,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// subfic r29,r11,-572
	ctx.xer.ca = ctx.r11.u32 <= 4294966724;
	ctx.r29.s64 = -572 - ctx.r11.s64;
loc_83334B04:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x83334bec
	if (!ctx.cr6.eq) goto loc_83334BEC;
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// beq cr6,0x83334b34
	if (ctx.cr6.eq) goto loc_83334B34;
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x83334c00
	if (ctx.cr6.eq) goto loc_83334C00;
	// b 0x83334bec
	goto loc_83334BEC;
loc_83334B34:
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_83334B4C:
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x83334bd4
	if (ctx.cr6.eq) goto loc_83334BD4;
	// add r8,r28,r9
	ctx.r8.u64 = ctx.r28.u64 + ctx.r9.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x83334bd4
	if (ctx.cr6.eq) goto loc_83334BD4;
	// addi r8,r4,24
	ctx.r8.s64 = ctx.r4.s64 + 24;
	// add r7,r30,r9
	ctx.r7.u64 = ctx.r30.u64 + ctx.r9.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x83334bd0
	if (!ctx.cr6.eq) goto loc_83334BD0;
	// addi r8,r4,40
	ctx.r8.s64 = ctx.r4.s64 + 40;
	// add r7,r29,r9
	ctx.r7.u64 = ctx.r29.u64 + ctx.r9.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x83334bd0
	if (!ctx.cr6.eq) goto loc_83334BD0;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// b 0x83334bd4
	goto loc_83334BD4;
loc_83334BD0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_83334BD4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x83334b4c
	if (ctx.cr6.lt) goto loc_83334B4C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x83334c08
	if (ctx.cr6.gt) goto loc_83334C08;
loc_83334BEC:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// blt cr6,0x83334b04
	if (ctx.cr6.lt) goto loc_83334B04;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83334C00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_83334C08:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x83334c00
	if (!ctx.cr6.gt) goto loc_83334C00;
	// lwz r11,1876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1876);
	// li r10,24
	ctx.r10.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,1364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1364, ctx.r10.u32);
	// bl 0x82ff1e60
	ctx.lr = 0x83334C28;
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
}

__attribute__((alias("__imp__sub_83334C28"))) PPC_WEAK_FUNC(sub_83334C28);
PPC_FUNC_IMPL(__imp__sub_83334C28) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83334C30;
	__savegprlr_29(ctx, base);
	// add r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lbz r11,896(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 896);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83334de8
	if (!ctx.cr0.eq) goto loc_83334DE8;
	// add r11,r6,r3
	ctx.r11.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lbz r11,896(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 896);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83334de8
	if (!ctx.cr0.eq) goto loc_83334DE8;
	// addi r11,r5,244
	ctx.r11.s64 = ctx.r5.s64 + 244;
	// addi r10,r6,244
	ctx.r10.s64 = ctx.r6.s64 + 244;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r6,260
	ctx.r9.s64 = ctx.r6.s64 + 260;
	// addi r8,r5,260
	ctx.r8.s64 = ctx.r5.s64 + 260;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r30,r5,69
	ctx.r30.s64 = ctx.r5.s64 + 69;
	// addi r29,r6,69
	ctx.r29.s64 = ctx.r6.s64 + 69;
	// stwx r7,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u32);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwzx r31,r8,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r31,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r31.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stwx r7,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r7.u32);
loc_83334CAC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x83334cac
	if (!ctx.cr0.eq) goto loc_83334CAC;
	// addi r11,r5,85
	ctx.r11.s64 = ctx.r5.s64 + 85;
	// addi r9,r6,85
	ctx.r9.s64 = ctx.r6.s64 + 85;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_83334CE8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x83334ce8
	if (!ctx.cr0.eq) goto loc_83334CE8;
	// addi r11,r5,101
	ctx.r11.s64 = ctx.r5.s64 + 101;
	// addi r9,r6,101
	ctx.r9.s64 = ctx.r6.s64 + 101;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_83334D24:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x83334d24
	if (!ctx.cr0.eq) goto loc_83334D24;
	// addi r11,r5,228
	ctx.r11.s64 = ctx.r5.s64 + 228;
	// addi r10,r6,228
	ctx.r10.s64 = ctx.r6.s64 + 228;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// stwx r11,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u32);
	// beq cr6,0x83334d88
	if (ctx.cr6.eq) goto loc_83334D88;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83334d88
	if (ctx.cr6.eq) goto loc_83334D88;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r5,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r5.u32);
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
loc_83334D88:
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83334db0
	if (ctx.cr6.eq) goto loc_83334DB0;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stw r6,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83334db0
	if (ctx.cr6.eq) goto loc_83334DB0;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r6,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
loc_83334DB0:
	// lwzx r11,r8,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83334dcc
	if (ctx.cr6.eq) goto loc_83334DCC;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x83334dcc
	if (!ctx.cr6.eq) goto loc_83334DCC;
	// stw r5,2076(r4)
	PPC_STORE_U32(ctx.r4.u32 + 2076, ctx.r5.u32);
loc_83334DCC:
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83334de8
	if (ctx.cr6.eq) goto loc_83334DE8;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x83334de8
	if (!ctx.cr6.eq) goto loc_83334DE8;
	// stw r6,2076(r4)
	PPC_STORE_U32(ctx.r4.u32 + 2076, ctx.r6.u32);
loc_83334DE8:
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83334DEC"))) PPC_WEAK_FUNC(sub_83334DEC);
PPC_FUNC_IMPL(__imp__sub_83334DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83334DF0"))) PPC_WEAK_FUNC(sub_83334DF0);
PPC_FUNC_IMPL(__imp__sub_83334DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83334DF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmpwi cr6,r28,33
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 33, ctx.xer);
	// bne cr6,0x83334e38
	if (!ctx.cr6.eq) goto loc_83334E38;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-24552
	ctx.r6.s64 = ctx.r11.s64 + -24552;
	// addi r5,r10,-24160
	ctx.r5.s64 = ctx.r10.s64 + -24160;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,537
	ctx.r7.s64 = 537;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83334E38;
	sub_8320CF10(ctx, base);
loc_83334E38:
	// lbz r11,1872(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1872);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83334ea0
	if (ctx.cr0.eq) goto loc_83334EA0;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_83334E4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833349f0
	ctx.lr = 0x83334E58;
	sub_833349F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83334e78
	if (ctx.cr0.eq) goto loc_83334E78;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x83334e78
	if (!ctx.cr6.eq) goto loc_83334E78;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x83334e94
	if (ctx.cr6.eq) goto loc_83334E94;
loc_83334E78:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x83334e4c
	if (ctx.cr6.lt) goto loc_83334E4C;
loc_83334E88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83334E8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_83334E94:
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_83334E98:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83334e8c
	goto loc_83334E8C;
loc_83334EA0:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r29,1040
	ctx.r11.s64 = ctx.r29.s64 + 1040;
loc_83334EA8:
	// lwz r9,-64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x83334ec0
	if (!ctx.cr6.eq) goto loc_83334EC0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x83334ed4
	if (ctx.cr6.eq) goto loc_83334ED4;
loc_83334EC0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x83334ea8
	if (ctx.cr6.lt) goto loc_83334EA8;
	// b 0x83334e88
	goto loc_83334E88;
loc_83334ED4:
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x83334e98
	goto loc_83334E98;
}

__attribute__((alias("__imp__sub_83334EDC"))) PPC_WEAK_FUNC(sub_83334EDC);
PPC_FUNC_IMPL(__imp__sub_83334EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83334EE0"))) PPC_WEAK_FUNC(sub_83334EE0);
PPC_FUNC_IMPL(__imp__sub_83334EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83334EE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lbz r11,896(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 896);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x833350dc
	if (!ctx.cr0.eq) goto loc_833350DC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,1876(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1876);
	// mulli r10,r28,12
	ctx.r10.s64 = ctx.r28.s64 * 12;
	// addi r11,r11,6768
	ctx.r11.s64 = ctx.r11.s64 + 6768;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r9,-24100
	ctx.r4.s64 = ctx.r9.s64 + -24100;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x832e7968
	ctx.lr = 0x83334F30;
	sub_832E7968(ctx, base);
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// bge cr6,0x83334fa4
	if (!ctx.cr6.lt) goto loc_83334FA4;
	// addi r11,r29,69
	ctx.r11.s64 = ctx.r29.s64 + 69;
	// addi r10,r29,228
	ctx.r10.s64 = ctx.r29.s64 + 228;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subfic r8,r29,15
	ctx.xer.ca = ctx.r29.u32 <= 15;
	ctx.r8.s64 = 15 - ctx.r29.s64;
loc_83334F54:
	// lwz r6,68(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r5,132(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r6.u32);
	// stw r5,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r5.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
loc_83334F74:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r6,272(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// lwz r5,528(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 528);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r6,256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 256, ctx.r6.u32);
	// stw r5,512(r10)
	PPC_STORE_U32(ctx.r10.u32 + 512, ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x83334f74
	if (!ctx.cr0.eq) goto loc_83334F74;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bne 0x83334f54
	if (!ctx.cr0.eq) goto loc_83334F54;
loc_83334FA4:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r10,972(r30)
	PPC_STORE_U32(ctx.r30.u32 + 972, ctx.r10.u32);
	// addi r11,r30,1600
	ctx.r11.s64 = ctx.r30.s64 + 1600;
	// stw r10,1036(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1036, ctx.r10.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r8,1100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1100, ctx.r8.u32);
loc_83334FC0:
	// li r8,19
	ctx.r8.s64 = 19;
	// stw r10,-256(r11)
	PPC_STORE_U32(ctx.r11.u32 + -256, ctx.r10.u32);
	// stw r10,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r10.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x83334fc0
	if (!ctx.cr0.eq) goto loc_83334FC0;
	// lbz r11,2072(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2072);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83335014
	if (ctx.cr0.eq) goto loc_83335014;
	// cmpwi cr6,r28,18
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 18, ctx.xer);
	// beq cr6,0x83335014
	if (ctx.cr6.eq) goto loc_83335014;
	// lwz r4,2084(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2084);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// stw r11,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r11.u32);
	// bl 0x833291f8
	ctx.lr = 0x83335004;
	sub_833291F8(ctx, base);
	// lwz r11,2076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2076);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r11.u32);
	// b 0x8333504c
	goto loc_8333504C;
loc_83335014:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83335038
	if (ctx.cr6.eq) goto loc_83335038;
	// cmpwi cr6,r28,18
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 18, ctx.xer);
	// bne cr6,0x83335038
	if (!ctx.cr6.eq) goto loc_83335038;
	// lwz r4,2084(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2084);
	// stb r10,2072(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2072, ctx.r10.u8);
	// stb r10,2073(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2073, ctx.r10.u8);
	// stw r10,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r10.u32);
	// b 0x83335044
	goto loc_83335044;
loc_83335038:
	// lwz r11,2084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2084);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r4.u32);
loc_83335044:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833291f8
	ctx.lr = 0x8333504C;
	sub_833291F8(ctx, base);
loc_8333504C:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x833350b8
	goto loc_833350B8;
loc_83335058:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833350b4
	if (ctx.cr0.eq) goto loc_833350B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83335078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x833350b4
	if (ctx.cr0.eq) goto loc_833350B4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x833350b4
	if (ctx.cr6.eq) goto loc_833350B4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833350b4
	if (!ctx.cr6.eq) goto loc_833350B4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x833350b4
	if (!ctx.cr6.gt) goto loc_833350B4;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_833350B4:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_833350B8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83335058
	if (!ctx.cr6.eq) goto loc_83335058;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,1876(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1876);
	// addi r4,r11,-24132
	ctx.r4.s64 = ctx.r11.s64 + -24132;
	// bl 0x832e7968
	ctx.lr = 0x833350D4;
	sub_832E7968(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83334618
	ctx.lr = 0x833350DC;
	sub_83334618(ctx, base);
loc_833350DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833350E4"))) PPC_WEAK_FUNC(sub_833350E4);
PPC_FUNC_IMPL(__imp__sub_833350E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833350E8"))) PPC_WEAK_FUNC(sub_833350E8);
PPC_FUNC_IMPL(__imp__sub_833350E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x833350F0;
	__savegprlr_15(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// li r16,0
	ctx.r16.s64 = 0;
	// lbz r11,1872(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1872);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83335550
	if (ctx.cr0.eq) goto loc_83335550;
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r9,r26,1040
	ctx.r9.s64 = ctx.r26.s64 + 1040;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,16
	ctx.r11.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83335124:
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x83335124
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83335124;
	// li r10,16
	ctx.r10.s64 = 16;
loc_83335134:
	// lwz r11,-64(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -64);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bne cr6,0x83335154
	if (!ctx.cr6.eq) goto loc_83335154;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x83335154
	if (!ctx.cr6.gt) goto loc_83335154;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
loc_83335154:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x83335134
	if (!ctx.cr0.eq) goto loc_83335134;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-23780
	ctx.r29.s64 = ctx.r11.s64 + -23780;
	// addi r20,r10,-21168
	ctx.r20.s64 = ctx.r10.s64 + -21168;
	// addi r28,r9,-23800
	ctx.r28.s64 = ctx.r9.s64 + -23800;
	// addi r19,r8,-24552
	ctx.r19.s64 = ctx.r8.s64 + -24552;
loc_83335184:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x833349f0
	ctx.lr = 0x83335190;
	sub_833349F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8333523c
	if (ctx.cr0.eq) goto loc_8333523C;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r30,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x833351c0
	if (ctx.cr0.eq) goto loc_833351C0;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,210
	ctx.r7.s64 = 210;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833351C0;
	sub_8320CF10(ctx, base);
loc_833351C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83334ad8
	ctx.lr = 0x833351CC;
	sub_83334AD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8333523c
	if (ctx.cr0.lt) goto loc_8333523C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83335338
	if (!ctx.cr0.eq) goto loc_83335338;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x83335234
	if (ctx.cr6.eq) goto loc_83335234;
	// addi r11,r26,896
	ctx.r11.s64 = ctx.r26.s64 + 896;
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83335208
	if (!ctx.cr0.eq) goto loc_83335208;
	// lbzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83335220
	if (ctx.cr0.eq) goto loc_83335220;
loc_83335208:
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,217
	ctx.r7.s64 = 217;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83335220;
	sub_8320CF10(ctx, base);
loc_83335220:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83334c28
	ctx.lr = 0x83335234;
	sub_83334C28(ctx, base);
loc_83335234:
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r30,r27
	PPC_STORE_U8(ctx.r30.u32 + ctx.r27.u32, ctx.r11.u8);
loc_8333523C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// blt cr6,0x83335184
	if (ctx.cr6.lt) goto loc_83335184;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r26,912
	ctx.r30.s64 = ctx.r26.s64 + 912;
	// addi r25,r26,128
	ctx.r25.s64 = ctx.r26.s64 + 128;
	// subfic r27,r26,-880
	ctx.xer.ca = ctx.r26.u32 <= 4294966416;
	ctx.r27.s64 = -880 - ctx.r26.s64;
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r24,r11,-23812
	ctx.r24.s64 = ctx.r11.s64 + -23812;
	// addi r23,r10,-23828
	ctx.r23.s64 = ctx.r10.s64 + -23828;
	// addi r22,r9,-23904
	ctx.r22.s64 = ctx.r9.s64 + -23904;
	// addi r21,r8,-23984
	ctx.r21.s64 = ctx.r8.s64 + -23984;
loc_8333527C:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x833352bc
	if (!ctx.cr0.eq) goto loc_833352BC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x833352bc
	if (ctx.cr6.eq) goto loc_833352BC;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x833352b4
	if (ctx.cr6.eq) goto loc_833352B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833352B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_833352B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_833352BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x833349f0
	ctx.lr = 0x833352C8;
	sub_833349F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83335538
	if (ctx.cr0.eq) goto loc_83335538;
	// lwz r4,-912(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -912);
	// cmpwi cr6,r4,18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 18, ctx.xer);
	// beq cr6,0x833352e0
	if (ctx.cr6.eq) goto loc_833352E0;
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
loc_833352E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83335468
	if (!ctx.cr6.eq) goto loc_83335468;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
loc_833352F4:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x83335350
	if (!ctx.cr6.eq) goto loc_83335350;
	// li r10,1
	ctx.r10.s64 = 1;
loc_83335304:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stbx r28,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u8);
loc_8333530C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x833352f4
	if (ctx.cr6.lt) goto loc_833352F4;
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83335538
	if (ctx.cr0.eq) goto loc_83335538;
	// cmpwi cr6,r4,33
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 33, ctx.xer);
	// bne cr6,0x8333536c
	if (!ctx.cr6.eq) goto loc_8333536C;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// b 0x83335370
	goto loc_83335370;
loc_83335338:
	// lwz r11,1876(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1876);
	// li r10,24
	ctx.r10.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,1364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1364, ctx.r10.u32);
	// bl 0x82ff1e60
	ctx.lr = 0x83335350;
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
loc_83335350:
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x83335304
	if (!ctx.cr6.eq) goto loc_83335304;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r7,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u8);
	// b 0x8333530c
	goto loc_8333530C;
loc_8333536C:
	// lwz r31,-848(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -848);
loc_83335370:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,172(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 172);
	// bl 0x833262a0
	ctx.lr = 0x8333537C;
	sub_833262A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8333539c
	if (ctx.cr0.eq) goto loc_8333539C;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,282
	ctx.r7.s64 = 282;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8333539C;
	sub_8320CF10(ctx, base);
loc_8333539C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,172(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 172);
	// lwz r4,-912(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -912);
	// bl 0x833262c0
	ctx.lr = 0x833353AC;
	sub_833262C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x83335408
	if (ctx.cr6.eq) goto loc_83335408;
	// add r10,r29,r26
	ctx.r10.u64 = ctx.r29.u64 + ctx.r26.u64;
	// lbz r10,896(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 896);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x833353dc
	if (!ctx.cr0.eq) goto loc_833353DC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbz r11,896(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 896);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x833353f4
	if (ctx.cr0.eq) goto loc_833353F4;
loc_833353DC:
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,288
	ctx.r7.s64 = 288;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833353F4;
	sub_8320CF10(ctx, base);
loc_833353F4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83334c28
	ctx.lr = 0x83335408;
	sub_83334C28(ctx, base);
loc_83335408:
	// lwz r11,1876(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1876);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r15,1452(r11)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x832e7248
	ctx.lr = 0x8333541C;
	sub_832E7248(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r15,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r15.u32);
	// beq 0x83335444
	if (ctx.cr0.eq) goto loc_83335444;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,1876(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1876);
	// bl 0x83341d10
	ctx.lr = 0x8333543C;
	sub_83341D10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83335448
	goto loc_83335448;
loc_83335444:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83335448:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,168(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 168);
	// bl 0x83345260
	ctx.lr = 0x83335454;
	sub_83345260(ctx, base);
	// lwz r3,96(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 96);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x83335460;
	sub_8333CEF8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// b 0x83335538
	goto loc_83335538;
loc_83335468:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8333548c
	if (!ctx.cr6.eq) goto loc_8333548C;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,297
	ctx.r7.s64 = 297;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8333548C;
	sub_8320CF10(ctx, base);
loc_8333548C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,56(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x833354b4
	if (!ctx.cr6.eq) goto loc_833354B4;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,301
	ctx.r7.s64 = 301;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833354B4;
	sub_8320CF10(ctx, base);
loc_833354B4:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_833354C0:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x83335500
	if (!ctx.cr6.eq) goto loc_83335500;
	// add r10,r27,r30
	ctx.r10.u64 = ctx.r27.u64 + ctx.r30.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x83335520
	if (ctx.cr6.eq) goto loc_83335520;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// b 0x83335524
	goto loc_83335524;
loc_83335500:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83335524
	if (!ctx.cr6.eq) goto loc_83335524;
	// add r10,r27,r30
	ctx.r10.u64 = ctx.r27.u64 + ctx.r30.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83335524
	if (!ctx.cr6.eq) goto loc_83335524;
loc_83335520:
	// stbx r28,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u8);
loc_83335524:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x833354c0
	if (ctx.cr6.lt) goto loc_833354C0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_83335538:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// blt cr6,0x8333527c
	if (ctx.cr6.lt) goto loc_8333527C;
	// b 0x8333568c
	goto loc_8333568C;
loc_83335550:
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x83335614
	if (!ctx.cr6.lt) goto loc_83335614;
	// cmpwi cr6,r5,19
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 19, ctx.xer);
	// beq cr6,0x83335568
	if (ctx.cr6.eq) goto loc_83335568;
	// cmpwi cr6,r5,33
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 33, ctx.xer);
	// bne cr6,0x83335614
	if (!ctx.cr6.eq) goto loc_83335614;
loc_83335568:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r26,1040
	ctx.r11.s64 = ctx.r26.s64 + 1040;
loc_83335570:
	// lwz r10,-64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x83335590
	if (!ctx.cr6.eq) goto loc_83335590;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x83335590
	if (ctx.cr6.lt) goto loc_83335590;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x833355a4
	if (ctx.cr6.lt) goto loc_833355A4;
loc_83335590:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x83335570
	if (ctx.cr6.lt) goto loc_83335570;
	// b 0x83335614
	goto loc_83335614;
loc_833355A4:
	// addi r11,r31,260
	ctx.r11.s64 = ctx.r31.s64 + 260;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// subf r30,r6,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r6.s64;
	// add r29,r30,r26
	ctx.r29.u64 = ctx.r30.u64 + ctx.r26.u64;
	// lbz r11,896(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 896);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x833355d4
	if (!ctx.cr0.eq) goto loc_833355D4;
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// lbz r11,896(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 896);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x833355f8
	if (ctx.cr0.eq) goto loc_833355F8;
loc_833355D4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-24552
	ctx.r6.s64 = ctx.r11.s64 + -24552;
	// addi r5,r10,-24044
	ctx.r5.s64 = ctx.r10.s64 + -24044;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,336
	ctx.r7.s64 = 336;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833355F8;
	sub_8320CF10(ctx, base);
loc_833355F8:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83334c28
	ctx.lr = 0x8333560C;
	sub_83334C28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,896(r29)
	PPC_STORE_U8(ctx.r29.u32 + 896, ctx.r11.u8);
loc_83335614:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r26,976
	ctx.r29.s64 = ctx.r26.s64 + 976;
loc_8333561C:
	// addi r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// bge cr6,0x83335660
	if (!ctx.cr6.lt) goto loc_83335660;
loc_8333562C:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83334698
	ctx.lr = 0x8333563C;
	sub_83334698(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x83335654
	if (!ctx.cr0.lt) goto loc_83335654;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83334c28
	ctx.lr = 0x83335654;
	sub_83334C28(ctx, base);
loc_83335654:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// blt cr6,0x8333562c
	if (ctx.cr6.lt) goto loc_8333562C;
loc_83335660:
	// lwz r11,-64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8333567c
	if (ctx.cr6.eq) goto loc_8333567C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x8333567c
	if (ctx.cr6.eq) goto loc_8333567C;
	// mr r16,r31
	ctx.r16.u64 = ctx.r31.u64;
loc_8333567C:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 15, ctx.xer);
	// blt cr6,0x8333561c
	if (ctx.cr6.lt) goto loc_8333561C;
loc_8333568C:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83335698"))) PPC_WEAK_FUNC(sub_83335698);
PPC_FUNC_IMPL(__imp__sub_83335698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23720
	ctx.r3.s64 = ctx.r11.s64 + -23720;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833356A4"))) PPC_WEAK_FUNC(sub_833356A4);
PPC_FUNC_IMPL(__imp__sub_833356A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833356A8"))) PPC_WEAK_FUNC(sub_833356A8);
PPC_FUNC_IMPL(__imp__sub_833356A8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bgt cr6,0x8333575c
	if (ctx.cr6.gt) goto loc_8333575C;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-23664
	ctx.r12.s64 = ctx.r12.s64 + -23664;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-31949
	ctx.r12.s64 = -2093809664;
	// addi r12,r12,22236
	ctx.r12.s64 = ctx.r12.s64 + 22236;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_833356DC;
	case 1:
		goto loc_833356E4;
	case 2:
		goto loc_833356EC;
	case 3:
		goto loc_833356F4;
	case 4:
		goto loc_83335714;
	case 5:
		goto loc_8333571C;
	case 6:
		goto loc_833356DC;
	case 7:
		goto loc_833356DC;
	case 8:
		goto loc_833356FC;
	case 9:
		goto loc_8333575C;
	case 10:
		goto loc_8333575C;
	case 11:
		goto loc_8333575C;
	case 12:
		goto loc_83335714;
	case 13:
		goto loc_83335704;
	case 14:
		goto loc_83335724;
	case 15:
		goto loc_8333572C;
	case 16:
		goto loc_8333575C;
	case 17:
		goto loc_8333575C;
	case 18:
		goto loc_8333575C;
	case 19:
		goto loc_8333575C;
	case 20:
		goto loc_8333575C;
	case 21:
		goto loc_8333575C;
	case 22:
		goto loc_8333570C;
	case 23:
		goto loc_83335734;
	case 24:
		goto loc_83335744;
	case 25:
		goto loc_8333575C;
	case 26:
		goto loc_8333575C;
	case 27:
		goto loc_8333575C;
	case 28:
		goto loc_8333570C;
	case 29:
		goto loc_83335734;
	case 30:
		goto loc_83335744;
	case 31:
		goto loc_8333575C;
	case 32:
		goto loc_8333575C;
	case 33:
		goto loc_8333575C;
	case 34:
		goto loc_8333573C;
	case 35:
		goto loc_8333574C;
	case 36:
		goto loc_83335754;
	default:
		__builtin_unreachable();
	}
loc_833356DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_833356E4:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_833356EC:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_833356F4:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_833356FC:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83335704:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_8333570C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83335714:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_8333571C:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_83335724:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_8333572C:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_83335734:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_8333573C:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_83335744:
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_8333574C:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_83335754:
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
loc_8333575C:
	// li r3,63
	ctx.r3.s64 = 63;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83335764"))) PPC_WEAK_FUNC(sub_83335764);
PPC_FUNC_IMPL(__imp__sub_83335764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83335768"))) PPC_WEAK_FUNC(sub_83335768);
PPC_FUNC_IMPL(__imp__sub_83335768) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,15
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 15, ctx.xer);
	// bgt cr6,0x83335818
	if (ctx.cr6.gt) goto loc_83335818;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-23624
	ctx.r12.s64 = ctx.r12.s64 + -23624;
	// lbzx r0,r12,r3
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r3.u32);
	// lis r12,-31949
	ctx.r12.s64 = -2093809664;
	// addi r12,r12,22424
	ctx.r12.s64 = ctx.r12.s64 + 22424;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_83335798;
	case 1:
		goto loc_833357C8;
	case 2:
		goto loc_833357B8;
	case 3:
		goto loc_833357A8;
	case 4:
		goto loc_833357B0;
	case 5:
		goto loc_833357C0;
	case 6:
		goto loc_833357A0;
	case 7:
		goto loc_833357F8;
	case 8:
		goto loc_833357F0;
	case 9:
		goto loc_833357E0;
	case 10:
		goto loc_833357E8;
	case 11:
		goto loc_833357D0;
	case 12:
		goto loc_833357D8;
	case 13:
		goto loc_83335808;
	case 14:
		goto loc_83335800;
	case 15:
		goto loc_83335810;
	default:
		__builtin_unreachable();
	}
loc_83335798:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_833357A0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_833357A8:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_833357B0:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_833357B8:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_833357C0:
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
loc_833357C8:
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
loc_833357D0:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_833357D8:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_833357E0:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_833357E8:
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
loc_833357F0:
	// li r3,25
	ctx.r3.s64 = 25;
	// blr 
	return;
loc_833357F8:
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_83335800:
	// li r3,26
	ctx.r3.s64 = 26;
	// blr 
	return;
loc_83335808:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_83335810:
	// li r3,38
	ctx.r3.s64 = 38;
	// blr 
	return;
loc_83335818:
	// li r3,63
	ctx.r3.s64 = 63;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83335820"))) PPC_WEAK_FUNC(sub_83335820);
PPC_FUNC_IMPL(__imp__sub_83335820) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,15
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 15, ctx.xer);
	// bgt cr6,0x83335898
	if (ctx.cr6.gt) goto loc_83335898;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-23608
	ctx.r12.s64 = ctx.r12.s64 + -23608;
	// lbzx r0,r12,r3
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r3.u32);
	// lis r12,-31949
	ctx.r12.s64 = -2093809664;
	// addi r12,r12,22608
	ctx.r12.s64 = ctx.r12.s64 + 22608;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_83335850;
	case 1:
		goto loc_83335850;
	case 2:
		goto loc_83335858;
	case 3:
		goto loc_83335860;
	case 4:
		goto loc_83335868;
	case 5:
		goto loc_83335880;
	case 6:
		goto loc_83335870;
	case 7:
		goto loc_83335888;
	case 8:
		goto loc_83335898;
	case 9:
		goto loc_83335898;
	case 10:
		goto loc_83335898;
	case 11:
		goto loc_83335898;
	case 12:
		goto loc_83335898;
	case 13:
		goto loc_83335898;
	case 14:
		goto loc_83335878;
	case 15:
		goto loc_83335890;
	default:
		__builtin_unreachable();
	}
loc_83335850:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_83335858:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_83335860:
	// li r3,54
	ctx.r3.s64 = 54;
	// blr 
	return;
loc_83335868:
	// li r3,25
	ctx.r3.s64 = 25;
	// blr 
	return;
loc_83335870:
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_83335878:
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_83335880:
	// li r3,26
	ctx.r3.s64 = 26;
	// blr 
	return;
loc_83335888:
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
loc_83335890:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_83335898:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833358A0"))) PPC_WEAK_FUNC(sub_833358A0);
PPC_FUNC_IMPL(__imp__sub_833358A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,15
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 15, ctx.xer);
	// bgt cr6,0x833358f0
	if (ctx.cr6.gt) goto loc_833358F0;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-23592
	ctx.r12.s64 = ctx.r12.s64 + -23592;
	// lbzx r0,r12,r3
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r3.u32);
	// lis r12,-31949
	ctx.r12.s64 = -2093809664;
	// addi r12,r12,22736
	ctx.r12.s64 = ctx.r12.s64 + 22736;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_833358D0;
	case 1:
		goto loc_833358E0;
	case 2:
		goto loc_833358D0;
	case 3:
		goto loc_833358E8;
	case 4:
		goto loc_833358D8;
	case 5:
		goto loc_833358D8;
	case 6:
		goto loc_833358E8;
	case 7:
		goto loc_833358E8;
	case 8:
		goto loc_833358F0;
	case 9:
		goto loc_833358F0;
	case 10:
		goto loc_833358F0;
	case 11:
		goto loc_833358F0;
	case 12:
		goto loc_833358F0;
	case 13:
		goto loc_833358F0;
	case 14:
		goto loc_833358E8;
	case 15:
		goto loc_833358E8;
	default:
		__builtin_unreachable();
	}
loc_833358D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_833358D8:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_833358E0:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_833358E8:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_833358F0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x83335914
	if (ctx.cr6.lt) goto loc_83335914;
	// beq cr6,0x8333590c
	if (ctx.cr6.eq) goto loc_8333590C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8333590C:
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
loc_83335914:
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8333591C"))) PPC_WEAK_FUNC(sub_8333591C);
PPC_FUNC_IMPL(__imp__sub_8333591C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83335920"))) PPC_WEAK_FUNC(sub_83335920);
PPC_FUNC_IMPL(__imp__sub_83335920) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8333593c
	if (ctx.cr6.lt) goto loc_8333593C;
	// beq cr6,0x83335934
	if (ctx.cr6.eq) goto loc_83335934;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83335934:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_8333593C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83335944"))) PPC_WEAK_FUNC(sub_83335944);
PPC_FUNC_IMPL(__imp__sub_83335944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83335948"))) PPC_WEAK_FUNC(sub_83335948);
PPC_FUNC_IMPL(__imp__sub_83335948) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,61
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 61, ctx.xer);
	// bgt cr6,0x833359a8
	if (ctx.cr6.gt) goto loc_833359A8;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-23576
	ctx.r12.s64 = ctx.r12.s64 + -23576;
	// lbzx r0,r12,r3
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r3.u32);
	// lis r12,-31949
	ctx.r12.s64 = -2093809664;
	// addi r12,r12,22904
	ctx.r12.s64 = ctx.r12.s64 + 22904;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_83335988;
	case 1:
		goto loc_83335988;
	case 2:
		goto loc_83335978;
	case 3:
		goto loc_83335980;
	case 4:
		goto loc_83335980;
	case 5:
		goto loc_83335980;
	case 6:
		goto loc_83335988;
	case 7:
		goto loc_83335988;
	case 8:
		goto loc_83335978;
	case 9:
		goto loc_83335978;
	case 10:
		goto loc_83335980;
	case 11:
		goto loc_83335988;
	case 12:
		goto loc_83335988;
	case 13:
		goto loc_833359A8;
	case 14:
		goto loc_83335988;
	case 15:
		goto loc_83335980;
	case 16:
		goto loc_83335988;
	case 17:
		goto loc_83335988;
	case 18:
		goto loc_83335990;
	case 19:
		goto loc_83335998;
	case 20:
		goto loc_83335998;
	case 21:
		goto loc_833359A8;
	case 22:
		goto loc_83335988;
	case 23:
		goto loc_83335988;
	case 24:
		goto loc_83335980;
	case 25:
		goto loc_83335988;
	case 26:
		goto loc_83335990;
	case 27:
		goto loc_83335980;
	case 28:
		goto loc_83335988;
	case 29:
		goto loc_83335990;
	case 30:
		goto loc_83335980;
	case 31:
		goto loc_83335988;
	case 32:
		goto loc_83335990;
	case 33:
		goto loc_83335988;
	case 34:
		goto loc_83335990;
	case 35:
		goto loc_83335998;
	case 36:
		goto loc_83335988;
	case 37:
		goto loc_83335990;
	case 38:
		goto loc_83335998;
	case 39:
		goto loc_83335988;
	case 40:
		goto loc_83335988;
	case 41:
		goto loc_83335980;
	case 42:
		goto loc_83335988;
	case 43:
		goto loc_83335978;
	case 44:
		goto loc_83335988;
	case 45:
		goto loc_83335988;
	case 46:
		goto loc_83335980;
	case 47:
		goto loc_83335980;
	case 48:
		goto loc_83335988;
	case 49:
		goto loc_83335998;
	case 50:
		goto loc_83335988;
	case 51:
		goto loc_83335990;
	case 52:
		goto loc_83335998;
	case 53:
		goto loc_83335998;
	case 54:
		goto loc_83335988;
	case 55:
		goto loc_83335988;
	case 56:
		goto loc_83335988;
	case 57:
		goto loc_833359A0;
	case 58:
		goto loc_83335990;
	case 59:
		goto loc_83335990;
	case 60:
		goto loc_83335990;
	case 61:
		goto loc_83335990;
	default:
		__builtin_unreachable();
	}
loc_83335978:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83335980:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83335988:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83335990:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_83335998:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_833359A0:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_833359A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833359B0"))) PPC_WEAK_FUNC(sub_833359B0);
PPC_FUNC_IMPL(__imp__sub_833359B0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bgt cr6,0x83335a0c
	if (ctx.cr6.gt) goto loc_83335A0C;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-23512
	ctx.r12.s64 = ctx.r12.s64 + -23512;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-31949
	ctx.r12.s64 = -2093809664;
	// addi r12,r12,23012
	ctx.r12.s64 = ctx.r12.s64 + 23012;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_833359E4;
	case 1:
		goto loc_833359EC;
	case 2:
		goto loc_833359EC;
	case 3:
		goto loc_833359EC;
	case 4:
		goto loc_833359F4;
	case 5:
		goto loc_833359F4;
	case 6:
		goto loc_833359E4;
	case 7:
		goto loc_833359E4;
	case 8:
		goto loc_833359EC;
	case 9:
		goto loc_83335A0C;
	case 10:
		goto loc_83335A0C;
	case 11:
		goto loc_83335A0C;
	case 12:
		goto loc_833359F4;
	case 13:
		goto loc_833359EC;
	case 14:
		goto loc_833359F4;
	case 15:
		goto loc_833359F4;
	case 16:
		goto loc_83335A0C;
	case 17:
		goto loc_83335A0C;
	case 18:
		goto loc_83335A0C;
	case 19:
		goto loc_83335A0C;
	case 20:
		goto loc_83335A0C;
	case 21:
		goto loc_83335A0C;
	case 22:
		goto loc_833359EC;
	case 23:
		goto loc_833359F4;
	case 24:
		goto loc_833359FC;
	case 25:
		goto loc_83335A0C;
	case 26:
		goto loc_83335A0C;
	case 27:
		goto loc_83335A0C;
	case 28:
		goto loc_833359EC;
	case 29:
		goto loc_833359F4;
	case 30:
		goto loc_833359FC;
	case 31:
		goto loc_83335A0C;
	case 32:
		goto loc_83335A0C;
	case 33:
		goto loc_83335A0C;
	case 34:
		goto loc_833359F4;
	case 35:
		goto loc_833359FC;
	case 36:
		goto loc_83335A04;
	default:
		__builtin_unreachable();
	}
loc_833359E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_833359EC:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_833359F4:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_833359FC:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_83335A04:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_83335A0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83335A14"))) PPC_WEAK_FUNC(sub_83335A14);
PPC_FUNC_IMPL(__imp__sub_83335A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83335A18"))) PPC_WEAK_FUNC(sub_83335A18);
PPC_FUNC_IMPL(__imp__sub_83335A18) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// blt cr6,0x83335a40
	if (ctx.cr6.lt) goto loc_83335A40;
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// ble cr6,0x83335a38
	if (!ctx.cr6.gt) goto loc_83335A38;
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// bne cr6,0x83335a40
	if (!ctx.cr6.eq) goto loc_83335A40;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83335A38:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83335A40:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83335A48"))) PPC_WEAK_FUNC(sub_83335A48);
PPC_FUNC_IMPL(__imp__sub_83335A48) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// blt cr6,0x83335a80
	if (ctx.cr6.lt) goto loc_83335A80;
	// beq cr6,0x83335a78
	if (ctx.cr6.eq) goto loc_83335A78;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// blt cr6,0x83335a80
	if (ctx.cr6.lt) goto loc_83335A80;
	// beq cr6,0x83335a78
	if (ctx.cr6.eq) goto loc_83335A78;
	// cmplwi cr6,r3,14
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 14, ctx.xer);
	// beq cr6,0x83335a80
	if (ctx.cr6.eq) goto loc_83335A80;
	// cmplwi cr6,r3,15
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 15, ctx.xer);
	// beq cr6,0x83335a78
	if (ctx.cr6.eq) goto loc_83335A78;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83335A78:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_83335A80:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83335A88"))) PPC_WEAK_FUNC(sub_83335A88);
PPC_FUNC_IMPL(__imp__sub_83335A88) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83335A9C"))) PPC_WEAK_FUNC(sub_83335A9C);
PPC_FUNC_IMPL(__imp__sub_83335A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83335AA0"))) PPC_WEAK_FUNC(sub_83335AA0);
PPC_FUNC_IMPL(__imp__sub_83335AA0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,49
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 49, ctx.xer);
	// bgt cr6,0x83335ae4
	if (ctx.cr6.gt) goto loc_83335AE4;
	// beq cr6,0x83335b04
	if (ctx.cr6.eq) goto loc_83335B04;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x83335adc
	if (ctx.cr6.lt) goto loc_83335ADC;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x83335b04
	if (!ctx.cr6.gt) goto loc_83335B04;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// ble cr6,0x83335adc
	if (!ctx.cr6.gt) goto loc_83335ADC;
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// ble cr6,0x83335b04
	if (!ctx.cr6.gt) goto loc_83335B04;
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// ble cr6,0x83335adc
	if (!ctx.cr6.gt) goto loc_83335ADC;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// ble cr6,0x83335b04
	if (!ctx.cr6.gt) goto loc_83335B04;
loc_83335ADC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83335AE4:
	// cmpwi cr6,r3,51
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 51, ctx.xer);
	// blt cr6,0x83335adc
	if (ctx.cr6.lt) goto loc_83335ADC;
	// cmpwi cr6,r3,53
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 53, ctx.xer);
	// ble cr6,0x83335b04
	if (!ctx.cr6.gt) goto loc_83335B04;
	// cmpwi cr6,r3,57
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 57, ctx.xer);
	// ble cr6,0x83335adc
	if (!ctx.cr6.gt) goto loc_83335ADC;
	// cmpwi cr6,r3,61
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 61, ctx.xer);
	// bgt cr6,0x83335adc
	if (ctx.cr6.gt) goto loc_83335ADC;
loc_83335B04:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83335B0C"))) PPC_WEAK_FUNC(sub_83335B0C);
PPC_FUNC_IMPL(__imp__sub_83335B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83335B10"))) PPC_WEAK_FUNC(sub_83335B10);
PPC_FUNC_IMPL(__imp__sub_83335B10) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// beq cr6,0x83335b48
	if (ctx.cr6.eq) goto loc_83335B48;
	// cmpwi cr6,r3,29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 29, ctx.xer);
	// ble cr6,0x83335b40
	if (!ctx.cr6.gt) goto loc_83335B40;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// ble cr6,0x83335b48
	if (!ctx.cr6.gt) goto loc_83335B48;
	// cmpwi cr6,r3,35
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 35, ctx.xer);
	// ble cr6,0x83335b40
	if (!ctx.cr6.gt) goto loc_83335B40;
	// cmpwi cr6,r3,38
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 38, ctx.xer);
	// ble cr6,0x83335b48
	if (!ctx.cr6.gt) goto loc_83335B48;
	// cmpwi cr6,r3,57
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 57, ctx.xer);
	// beq cr6,0x83335b48
	if (ctx.cr6.eq) goto loc_83335B48;
loc_83335B40:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83335B48:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83335B50"))) PPC_WEAK_FUNC(sub_83335B50);
PPC_FUNC_IMPL(__imp__sub_83335B50) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 30, ctx.xer);
	// blt cr6,0x83335b78
	if (ctx.cr6.lt) goto loc_83335B78;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// ble cr6,0x83335b70
	if (!ctx.cr6.gt) goto loc_83335B70;
	// cmpwi cr6,r3,35
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 35, ctx.xer);
	// ble cr6,0x83335b78
	if (!ctx.cr6.gt) goto loc_83335B78;
	// cmpwi cr6,r3,38
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 38, ctx.xer);
	// bgt cr6,0x83335b78
	if (ctx.cr6.gt) goto loc_83335B78;
loc_83335B70:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83335B78:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83335B80"))) PPC_WEAK_FUNC(sub_83335B80);
PPC_FUNC_IMPL(__imp__sub_83335B80) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// blt cr6,0x83335bb8
	if (ctx.cr6.lt) goto loc_83335BB8;
	// cmpwi cr6,r3,26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 26, ctx.xer);
	// ble cr6,0x83335ba8
	if (!ctx.cr6.gt) goto loc_83335BA8;
	// cmpwi cr6,r3,35
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 35, ctx.xer);
	// ble cr6,0x83335bb8
	if (!ctx.cr6.gt) goto loc_83335BB8;
	// cmpwi cr6,r3,38
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 38, ctx.xer);
	// bgt cr6,0x83335bb8
	if (ctx.cr6.gt) goto loc_83335BB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83335BA8:
	// addi r11,r4,-7
	ctx.r11.s64 = ctx.r4.s64 + -7;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_83335BB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83335BC0"))) PPC_WEAK_FUNC(sub_83335BC0);
PPC_FUNC_IMPL(__imp__sub_83335BC0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x83335bf0
	if (ctx.cr6.eq) goto loc_83335BF0;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// ble cr6,0x83335be8
	if (!ctx.cr6.gt) goto loc_83335BE8;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// ble cr6,0x83335bf0
	if (!ctx.cr6.gt) goto loc_83335BF0;
	// cmpwi cr6,r3,13
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 13, ctx.xer);
	// ble cr6,0x83335be8
	if (!ctx.cr6.gt) goto loc_83335BE8;
	// cmpwi cr6,r3,15
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 15, ctx.xer);
	// ble cr6,0x83335bf0
	if (!ctx.cr6.gt) goto loc_83335BF0;
loc_83335BE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83335BF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83335BF8"))) PPC_WEAK_FUNC(sub_83335BF8);
PPC_FUNC_IMPL(__imp__sub_83335BF8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x83335c20
	if (ctx.cr6.lt) goto loc_83335C20;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x83335c18
	if (!ctx.cr6.gt) goto loc_83335C18;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// ble cr6,0x83335c20
	if (!ctx.cr6.gt) goto loc_83335C20;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bgt cr6,0x83335c20
	if (ctx.cr6.gt) goto loc_83335C20;
loc_83335C18:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83335C20:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83335C28"))) PPC_WEAK_FUNC(sub_83335C28);
PPC_FUNC_IMPL(__imp__sub_83335C28) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83335C3C"))) PPC_WEAK_FUNC(sub_83335C3C);
PPC_FUNC_IMPL(__imp__sub_83335C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83335C40"))) PPC_WEAK_FUNC(sub_83335C40);
PPC_FUNC_IMPL(__imp__sub_83335C40) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,61
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 61, ctx.xer);
	// bgt cr6,0x83335c90
	if (ctx.cr6.gt) goto loc_83335C90;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-23472
	ctx.r12.s64 = ctx.r12.s64 + -23472;
	// lbzx r0,r12,r3
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r3.u32);
	// lis r12,-31949
	ctx.r12.s64 = -2093809664;
	// addi r12,r12,23664
	ctx.r12.s64 = ctx.r12.s64 + 23664;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_83335C88;
	case 1:
		goto loc_83335C88;
	case 2:
		goto loc_83335C88;
	case 3:
		goto loc_83335C70;
	case 4:
		goto loc_83335C78;
	case 5:
		goto loc_83335C78;
	case 6:
		goto loc_83335C70;
	case 7:
		goto loc_83335C70;
	case 8:
		goto loc_83335C88;
	case 9:
		goto loc_83335C88;
	case 10:
		goto loc_83335C80;
	case 11:
		goto loc_83335C70;
	case 12:
		goto loc_83335C70;
	case 13:
		goto loc_83335C90;
	case 14:
		goto loc_83335C70;
	case 15:
		goto loc_83335C70;
	case 16:
		goto loc_83335C78;
	case 17:
		goto loc_83335C78;
	case 18:
		goto loc_83335C80;
	case 19:
		goto loc_83335C70;
	case 20:
		goto loc_83335C70;
	case 21:
		goto loc_83335C90;
	case 22:
		goto loc_83335C80;
	case 23:
		goto loc_83335C80;
	case 24:
		goto loc_83335C88;
	case 25:
		goto loc_83335C80;
	case 26:
		goto loc_83335C70;
	case 27:
		goto loc_83335C88;
	case 28:
		goto loc_83335C80;
	case 29:
		goto loc_83335C70;
	case 30:
		goto loc_83335C88;
	case 31:
		goto loc_83335C80;
	case 32:
		goto loc_83335C70;
	case 33:
		goto loc_83335C88;
	case 34:
		goto loc_83335C80;
	case 35:
		goto loc_83335C70;
	case 36:
		goto loc_83335C88;
	case 37:
		goto loc_83335C80;
	case 38:
		goto loc_83335C70;
	case 39:
		goto loc_83335C70;
	case 40:
		goto loc_83335C70;
	case 41:
		goto loc_83335C88;
	case 42:
		goto loc_83335C80;
	case 43:
		goto loc_83335C88;
	case 44:
		goto loc_83335C70;
	case 45:
		goto loc_83335C70;
	case 46:
		goto loc_83335C88;
	case 47:
		goto loc_83335C88;
	case 48:
		goto loc_83335C80;
	case 49:
		goto loc_83335C70;
	case 50:
		goto loc_83335C70;
	case 51:
		goto loc_83335C80;
	case 52:
		goto loc_83335C70;
	case 53:
		goto loc_83335C70;
	case 54:
		goto loc_83335C70;
	case 55:
		goto loc_83335C78;
	case 56:
		goto loc_83335C78;
	case 57:
		goto loc_83335C78;
	case 58:
		goto loc_83335C80;
	case 59:
		goto loc_83335C80;
	case 60:
		goto loc_83335C80;
	case 61:
		goto loc_83335C80;
	default:
		__builtin_unreachable();
	}
loc_83335C70:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83335C78:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_83335C80:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83335C88:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83335C90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83335C98"))) PPC_WEAK_FUNC(sub_83335C98);
PPC_FUNC_IMPL(__imp__sub_83335C98) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bgt cr6,0x83335cec
	if (ctx.cr6.gt) goto loc_83335CEC;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-23408
	ctx.r12.s64 = ctx.r12.s64 + -23408;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-31949
	ctx.r12.s64 = -2093809664;
	// addi r12,r12,23756
	ctx.r12.s64 = ctx.r12.s64 + 23756;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_83335CE4;
	case 1:
		goto loc_83335CCC;
	case 2:
		goto loc_83335CD4;
	case 3:
		goto loc_83335CD4;
	case 4:
		goto loc_83335CCC;
	case 5:
		goto loc_83335CCC;
	case 6:
		goto loc_83335CE4;
	case 7:
		goto loc_83335CE4;
	case 8:
		goto loc_83335CDC;
	case 9:
		goto loc_83335CEC;
	case 10:
		goto loc_83335CEC;
	case 11:
		goto loc_83335CEC;
	case 12:
		goto loc_83335CCC;
	case 13:
		goto loc_83335CCC;
	case 14:
		goto loc_83335CD4;
	case 15:
		goto loc_83335CD4;
	case 16:
		goto loc_83335CEC;
	case 17:
		goto loc_83335CEC;
	case 18:
		goto loc_83335CEC;
	case 19:
		goto loc_83335CEC;
	case 20:
		goto loc_83335CEC;
	case 21:
		goto loc_83335CEC;
	case 22:
		goto loc_83335CE4;
	case 23:
		goto loc_83335CDC;
	case 24:
		goto loc_83335CCC;
	case 25:
		goto loc_83335CEC;
	case 26:
		goto loc_83335CEC;
	case 27:
		goto loc_83335CEC;
	case 28:
		goto loc_83335CE4;
	case 29:
		goto loc_83335CDC;
	case 30:
		goto loc_83335CCC;
	case 31:
		goto loc_83335CEC;
	case 32:
		goto loc_83335CEC;
	case 33:
		goto loc_83335CEC;
	case 34:
		goto loc_83335CE4;
	case 35:
		goto loc_83335CDC;
	case 36:
		goto loc_83335CCC;
	default:
		__builtin_unreachable();
	}
loc_83335CCC:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83335CD4:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_83335CDC:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83335CE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83335CEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83335CF4"))) PPC_WEAK_FUNC(sub_83335CF4);
PPC_FUNC_IMPL(__imp__sub_83335CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83335CF8"))) PPC_WEAK_FUNC(sub_83335CF8);
PPC_FUNC_IMPL(__imp__sub_83335CF8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// blt cr6,0x83335d20
	if (ctx.cr6.lt) goto loc_83335D20;
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// ble cr6,0x83335d18
	if (!ctx.cr6.gt) goto loc_83335D18;
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// bne cr6,0x83335d20
	if (!ctx.cr6.eq) goto loc_83335D20;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83335D18:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83335D20:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83335D28"))) PPC_WEAK_FUNC(sub_83335D28);
PPC_FUNC_IMPL(__imp__sub_83335D28) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,61
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 61, ctx.xer);
	// bgt cr6,0x83335ea4
	if (ctx.cr6.gt) goto loc_83335EA4;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-23368
	ctx.r12.s64 = ctx.r12.s64 + -23368;
	// lbzx r0,r12,r4
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r4.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31949
	ctx.r12.s64 = -2093809664;
	// addi r12,r12,23900
	ctx.r12.s64 = ctx.r12.s64 + 23900;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_83335E54;
	case 1:
		goto loc_83335E54;
	case 2:
		goto loc_83335D5C;
	case 3:
		goto loc_83335D70;
	case 4:
		goto loc_83335D88;
	case 5:
		goto loc_83335DA8;
	case 6:
		goto loc_83335DFC;
	case 7:
		goto loc_83335E18;
	case 8:
		goto loc_83335D5C;
	case 9:
		goto loc_83335D5C;
	case 10:
		goto loc_83335DCC;
	case 11:
		goto loc_83335DFC;
	case 12:
		goto loc_83335DFC;
	case 13:
		goto loc_83335EA4;
	case 14:
		goto loc_83335DFC;
	case 15:
		goto loc_83335DE8;
	case 16:
		goto loc_83335E24;
	case 17:
		goto loc_83335E30;
	case 18:
		goto loc_83335E74;
	case 19:
		goto loc_83335E7C;
	case 20:
		goto loc_83335E7C;
	case 21:
		goto loc_83335EA4;
	case 22:
		goto loc_83335E5C;
	case 23:
		goto loc_83335E5C;
	case 24:
		goto loc_83335DF4;
	case 25:
		goto loc_83335E4C;
	case 26:
		goto loc_83335E6C;
	case 27:
		goto loc_83335DF4;
	case 28:
		goto loc_83335E4C;
	case 29:
		goto loc_83335E6C;
	case 30:
		goto loc_83335DF4;
	case 31:
		goto loc_83335E4C;
	case 32:
		goto loc_83335E6C;
	case 33:
		goto loc_83335E54;
	case 34:
		goto loc_83335E74;
	case 35:
		goto loc_83335E7C;
	case 36:
		goto loc_83335E54;
	case 37:
		goto loc_83335E74;
	case 38:
		goto loc_83335E7C;
	case 39:
		goto loc_83335DFC;
	case 40:
		goto loc_83335DFC;
	case 41:
		goto loc_83335DF4;
	case 42:
		goto loc_83335E4C;
	case 43:
		goto loc_83335D5C;
	case 44:
		goto loc_83335DFC;
	case 45:
		goto loc_83335DFC;
	case 46:
		goto loc_83335DF4;
	case 47:
		goto loc_83335DF4;
	case 48:
		goto loc_83335E4C;
	case 49:
		goto loc_83335E7C;
	case 50:
		goto loc_83335DFC;
	case 51:
		goto loc_83335E74;
	case 52:
		goto loc_83335E7C;
	case 53:
		goto loc_83335E7C;
	case 54:
		goto loc_83335E18;
	case 55:
		goto loc_83335E24;
	case 56:
		goto loc_83335E30;
	case 57:
		goto loc_83335E84;
	case 58:
		goto loc_83335E74;
	case 59:
		goto loc_83335E74;
	case 60:
		goto loc_83335E74;
	case 61:
		goto loc_83335E74;
	default:
		__builtin_unreachable();
	}
loc_83335D5C:
	// li r9,8
	ctx.r9.s64 = 8;
loc_83335D60:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83335eb0
	goto loc_83335EB0;
loc_83335D70:
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,1
	ctx.r9.s64 = 1;
loc_83335D78:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// b 0x83335eb4
	goto loc_83335EB4;
loc_83335D88:
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// b 0x83335eb8
	goto loc_83335EB8;
loc_83335DA8:
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,6
	ctx.r9.s64 = 6;
loc_83335DB0:
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// blr 
	return;
loc_83335DCC:
	// li r9,8
	ctx.r9.s64 = 8;
loc_83335DD0:
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_83335DD4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x83335eb8
	goto loc_83335EB8;
loc_83335DE8:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x83335eac
	goto loc_83335EAC;
loc_83335DF4:
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x83335d60
	goto loc_83335D60;
loc_83335DFC:
	// li r9,8
	ctx.r9.s64 = 8;
loc_83335E00:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
loc_83335E18:
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x83335d78
	goto loc_83335D78;
loc_83335E24:
	// li r10,11
	ctx.r10.s64 = 11;
	// li r9,10
	ctx.r9.s64 = 10;
	// b 0x83335db0
	goto loc_83335DB0;
loc_83335E30:
	// li r9,10
	ctx.r9.s64 = 10;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// b 0x83335eb4
	goto loc_83335EB4;
loc_83335E4C:
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x83335dd0
	goto loc_83335DD0;
loc_83335E54:
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x83335d60
	goto loc_83335D60;
loc_83335E5C:
	// li r8,24
	ctx.r8.s64 = 24;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// b 0x83335dd4
	goto loc_83335DD4;
loc_83335E6C:
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x83335e00
	goto loc_83335E00;
loc_83335E74:
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x83335dd0
	goto loc_83335DD0;
loc_83335E7C:
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x83335e00
	goto loc_83335E00;
loc_83335E84:
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
loc_83335EA4:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83335EAC:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83335EB0:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_83335EB4:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83335EB8:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83335EC0"))) PPC_WEAK_FUNC(sub_83335EC0);
PPC_FUNC_IMPL(__imp__sub_83335EC0) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,36
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 36, ctx.xer);
	// bgt cr6,0x83336010
	if (ctx.cr6.gt) goto loc_83336010;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-23304
	ctx.r12.s64 = ctx.r12.s64 + -23304;
	// lbzx r0,r12,r10
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31949
	ctx.r12.s64 = -2093809664;
	// addi r12,r12,24312
	ctx.r12.s64 = ctx.r12.s64 + 24312;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_83335EF8;
	case 1:
		goto loc_83335F0C;
	case 2:
		goto loc_83335F24;
	case 3:
		goto loc_83335F44;
	case 4:
		goto loc_83335F98;
	case 5:
		goto loc_83335FB4;
	case 6:
		goto loc_83335EF8;
	case 7:
		goto loc_83335EF8;
	case 8:
		goto loc_83335F68;
	case 9:
		goto loc_83336010;
	case 10:
		goto loc_83336010;
	case 11:
		goto loc_83336010;
	case 12:
		goto loc_83335F98;
	case 13:
		goto loc_83335F84;
	case 14:
		goto loc_83335FC0;
	case 15:
		goto loc_83335FCC;
	case 16:
		goto loc_83336010;
	case 17:
		goto loc_83336010;
	case 18:
		goto loc_83336010;
	case 19:
		goto loc_83336010;
	case 20:
		goto loc_83336010;
	case 21:
		goto loc_83336010;
	case 22:
		goto loc_83335F90;
	case 23:
		goto loc_83335FE8;
	case 24:
		goto loc_83335FF8;
	case 25:
		goto loc_83336010;
	case 26:
		goto loc_83336010;
	case 27:
		goto loc_83336010;
	case 28:
		goto loc_83335F90;
	case 29:
		goto loc_83335FE8;
	case 30:
		goto loc_83335FF8;
	case 31:
		goto loc_83336010;
	case 32:
		goto loc_83336010;
	case 33:
		goto loc_83336010;
	case 34:
		goto loc_83335FF0;
	case 35:
		goto loc_83336000;
	case 36:
		goto loc_83336008;
	default:
		__builtin_unreachable();
	}
loc_83335EF8:
	// li r9,8
	ctx.r9.s64 = 8;
loc_83335EFC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8333601c
	goto loc_8333601C;
loc_83335F0C:
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,1
	ctx.r9.s64 = 1;
loc_83335F14:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// b 0x83336020
	goto loc_83336020;
loc_83335F24:
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// b 0x83336024
	goto loc_83336024;
loc_83335F44:
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,6
	ctx.r9.s64 = 6;
loc_83335F4C:
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// blr 
	return;
loc_83335F68:
	// li r9,8
	ctx.r9.s64 = 8;
loc_83335F6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x83336024
	goto loc_83336024;
loc_83335F84:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x83336018
	goto loc_83336018;
loc_83335F90:
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x83335efc
	goto loc_83335EFC;
loc_83335F98:
	// li r9,8
	ctx.r9.s64 = 8;
loc_83335F9C:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
loc_83335FB4:
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x83335f14
	goto loc_83335F14;
loc_83335FC0:
	// li r10,11
	ctx.r10.s64 = 11;
	// li r9,10
	ctx.r9.s64 = 10;
	// b 0x83335f4c
	goto loc_83335F4C;
loc_83335FCC:
	// li r9,10
	ctx.r9.s64 = 10;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// b 0x83336020
	goto loc_83336020;
loc_83335FE8:
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x83335f6c
	goto loc_83335F6C;
loc_83335FF0:
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x83335efc
	goto loc_83335EFC;
loc_83335FF8:
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x83335f9c
	goto loc_83335F9C;
loc_83336000:
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x83335f6c
	goto loc_83335F6C;
loc_83336008:
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x83335f9c
	goto loc_83335F9C;
loc_83336010:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83336018:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8333601C:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_83336020:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83336024:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8333602C"))) PPC_WEAK_FUNC(sub_8333602C);
PPC_FUNC_IMPL(__imp__sub_8333602C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83336030"))) PPC_WEAK_FUNC(sub_83336030);
PPC_FUNC_IMPL(__imp__sub_83336030) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 22, ctx.xer);
	// blt cr6,0x8333607c
	if (ctx.cr6.lt) goto loc_8333607C;
	// cmpwi cr6,r4,23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 23, ctx.xer);
	// ble cr6,0x83336060
	if (!ctx.cr6.gt) goto loc_83336060;
	// cmpwi cr6,r4,24
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 24, ctx.xer);
	// bne cr6,0x8333607c
	if (!ctx.cr6.eq) goto loc_8333607C;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83336088
	goto loc_83336088;
loc_83336060:
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// b 0x8333608c
	goto loc_8333608C;
loc_8333607C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83336088:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8333608C:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83336098"))) PPC_WEAK_FUNC(sub_83336098);
PPC_FUNC_IMPL(__imp__sub_83336098) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 15, ctx.xer);
	// bgt cr6,0x83336144
	if (ctx.cr6.gt) goto loc_83336144;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-23264
	ctx.r12.s64 = ctx.r12.s64 + -23264;
	// lbzx r0,r12,r4
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r4.u32);
	// lis r12,-31949
	ctx.r12.s64 = -2093809664;
	// addi r12,r12,24780
	ctx.r12.s64 = ctx.r12.s64 + 24780;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_833360CC;
	case 1:
		goto loc_833360CC;
	case 2:
		goto loc_833360D8;
	case 3:
		goto loc_833360D8;
	case 4:
		goto loc_833360EC;
	case 5:
		goto loc_83336120;
	case 6:
		goto loc_833360EC;
	case 7:
		goto loc_83336120;
	case 8:
		goto loc_83336144;
	case 9:
		goto loc_83336144;
	case 10:
		goto loc_83336144;
	case 11:
		goto loc_83336144;
	case 12:
		goto loc_83336144;
	case 13:
		goto loc_83336144;
	case 14:
		goto loc_83336108;
	case 15:
		goto loc_8333613C;
	default:
		__builtin_unreachable();
	}
loc_833360CC:
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8333614c
	goto loc_8333614C;
loc_833360D8:
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// b 0x83336150
	goto loc_83336150;
loc_833360EC:
	// li r9,16
	ctx.r9.s64 = 16;
loc_833360F0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x83336158
	goto loc_83336158;
loc_83336108:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83336154
	goto loc_83336154;
loc_83336120:
	// li r9,16
	ctx.r9.s64 = 16;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
loc_8333613C:
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x833360f0
	goto loc_833360F0;
loc_83336144:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8333614C:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_83336150:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83336154:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83336158:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blt cr6,0x83336188
	if (ctx.cr6.lt) goto loc_83336188;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_83336188:
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,24
	ctx.r8.s64 = 24;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833361A0"))) PPC_WEAK_FUNC(sub_833361A0);
PPC_FUNC_IMPL(__imp__sub_833361A0) {
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
	// bl 0x83335948
	ctx.lr = 0x833361B0;
	sub_83335948(ctx, base);
	// rlwinm r3,r3,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833361C4"))) PPC_WEAK_FUNC(sub_833361C4);
PPC_FUNC_IMPL(__imp__sub_833361C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833361C8"))) PPC_WEAK_FUNC(sub_833361C8);
PPC_FUNC_IMPL(__imp__sub_833361C8) {
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
	// bl 0x833359b0
	ctx.lr = 0x833361D8;
	sub_833359B0(ctx, base);
	// rlwinm r3,r3,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833361EC"))) PPC_WEAK_FUNC(sub_833361EC);
PPC_FUNC_IMPL(__imp__sub_833361EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833361F0"))) PPC_WEAK_FUNC(sub_833361F0);
PPC_FUNC_IMPL(__imp__sub_833361F0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// blt cr6,0x83336218
	if (ctx.cr6.lt) goto loc_83336218;
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// ble cr6,0x83336210
	if (!ctx.cr6.gt) goto loc_83336210;
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// bne cr6,0x83336218
	if (!ctx.cr6.eq) goto loc_83336218;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8333621c
	goto loc_8333621C;
loc_83336210:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8333621c
	goto loc_8333621C;
loc_83336218:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8333621C:
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83336224"))) PPC_WEAK_FUNC(sub_83336224);
PPC_FUNC_IMPL(__imp__sub_83336224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83336228"))) PPC_WEAK_FUNC(sub_83336228);
PPC_FUNC_IMPL(__imp__sub_83336228) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83336230"))) PPC_WEAK_FUNC(sub_83336230);
PPC_FUNC_IMPL(__imp__sub_83336230) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8333625c
	if (ctx.cr6.gt) goto loc_8333625C;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-17304
	ctx.r10.s64 = ctx.r10.s64 + -17304;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// slw r3,r9,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// blr 
	return;
loc_8333625C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83336264"))) PPC_WEAK_FUNC(sub_83336264);
PPC_FUNC_IMPL(__imp__sub_83336264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83336268"))) PPC_WEAK_FUNC(sub_83336268);
PPC_FUNC_IMPL(__imp__sub_83336268) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8333628c
	if (!ctx.cr6.gt) goto loc_8333628C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bgt cr6,0x83336280
	if (ctx.cr6.gt) goto loc_83336280;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// blr 
	return;
loc_83336280:
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// li r3,4
	ctx.r3.s64 = 4;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_8333628C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83336294"))) PPC_WEAK_FUNC(sub_83336294);
PPC_FUNC_IMPL(__imp__sub_83336294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83336298"))) PPC_WEAK_FUNC(sub_83336298);
PPC_FUNC_IMPL(__imp__sub_83336298) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x833362a8
	if (ctx.cr6.gt) goto loc_833362A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_833362A8:
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bgt cr6,0x833362c0
	if (ctx.cr6.gt) goto loc_833362C0;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r3,r10,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x833362c4
	goto loc_833362C4;
loc_833362C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_833362C4:
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmpwi cr6,r4,24
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 24, ctx.xer);
	// li r3,8
	ctx.r3.s64 = 8;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833362E8"))) PPC_WEAK_FUNC(sub_833362E8);
PPC_FUNC_IMPL(__imp__sub_833362E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 7, ctx.xer);
	// bgt cr6,0x83336378
	if (ctx.cr6.gt) goto loc_83336378;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x83336354
	if (ctx.cr6.lt) goto loc_83336354;
	// beq cr6,0x83336330
	if (ctx.cr6.eq) goto loc_83336330;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x8333631c
	if (ctx.cr6.lt) goto loc_8333631C;
	// bne cr6,0x83336378
	if (!ctx.cr6.eq) goto loc_83336378;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r5,24
	ctx.r3.s64 = ctx.r5.s64 + 24;
	// blr 
	return;
loc_8333631C:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r3,r11,22
	ctx.r3.s64 = ctx.r11.s64 + 22;
	// blr 
	return;
loc_83336330:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x83336340
	if (!ctx.cr6.eq) goto loc_83336340;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83336340:
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// li r3,4
	ctx.r3.s64 = 4;
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_83336354:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x83336364
	if (!ctx.cr6.eq) goto loc_83336364;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83336364:
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// li r3,5
	ctx.r3.s64 = 5;
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_83336378:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83336380"))) PPC_WEAK_FUNC(sub_83336380);
PPC_FUNC_IMPL(__imp__sub_83336380) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 7, ctx.xer);
	// bgt cr6,0x833363f0
	if (ctx.cr6.gt) goto loc_833363F0;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x833363d4
	if (ctx.cr6.lt) goto loc_833363D4;
	// beq cr6,0x833363b0
	if (ctx.cr6.eq) goto loc_833363B0;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bne cr6,0x833363f0
	if (!ctx.cr6.eq) goto loc_833363F0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r5,24
	ctx.r3.s64 = ctx.r5.s64 + 24;
	// blr 
	return;
loc_833363B0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x833363c0
	if (!ctx.cr6.eq) goto loc_833363C0;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_833363C0:
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// li r3,8
	ctx.r3.s64 = 8;
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_833363D4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x833363f0
	if (ctx.cr6.eq) goto loc_833363F0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// li r3,9
	ctx.r3.s64 = 9;
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_833363F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833363F8"))) PPC_WEAK_FUNC(sub_833363F8);
PPC_FUNC_IMPL(__imp__sub_833363F8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 7, ctx.xer);
	// bgt cr6,0x8333643c
	if (ctx.cr6.gt) goto loc_8333643C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8333643c
	if (ctx.cr6.eq) goto loc_8333643C;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x83336428
	if (ctx.cr6.lt) goto loc_83336428;
	// bne cr6,0x8333643c
	if (!ctx.cr6.eq) goto loc_8333643C;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// li r3,12
	ctx.r3.s64 = 12;
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
loc_83336428:
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// li r3,13
	ctx.r3.s64 = 13;
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_8333643C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83336444"))) PPC_WEAK_FUNC(sub_83336444);
PPC_FUNC_IMPL(__imp__sub_83336444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83336448"))) PPC_WEAK_FUNC(sub_83336448);
PPC_FUNC_IMPL(__imp__sub_83336448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,56(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// cmpwi cr6,r9,11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 11, ctx.xer);
	// bgt cr6,0x833364b8
	if (ctx.cr6.gt) goto loc_833364B8;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bge cr6,0x8333649c
	if (!ctx.cr6.lt) goto loc_8333649C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x83336484
	if (ctx.cr6.eq) goto loc_83336484;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x833364d8
	if (ctx.cr6.eq) goto loc_833364D8;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x8333647c
	if (!ctx.cr6.gt) goto loc_8333647C;
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// ble cr6,0x833364d8
	if (!ctx.cr6.gt) goto loc_833364D8;
loc_8333647C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83336484:
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// b 0x83336510
	goto loc_83336510;
loc_8333649C:
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwa r8,60(r4)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 60));
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x833364f8
	goto loc_833364F8;
loc_833364B8:
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// blt cr6,0x8333647c
	if (ctx.cr6.lt) goto loc_8333647C;
	// cmpwi cr6,r9,15
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 15, ctx.xer);
	// ble cr6,0x833364f0
	if (!ctx.cr6.gt) goto loc_833364F0;
	// cmpwi cr6,r9,21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 21, ctx.xer);
	// ble cr6,0x833364d8
	if (!ctx.cr6.gt) goto loc_833364D8;
	// cmpwi cr6,r9,31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 31, ctx.xer);
	// bgt cr6,0x8333647c
	if (ctx.cr6.gt) goto loc_8333647C;
loc_833364D8:
	// lwa r11,60(r4)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 60));
	// lwa r10,48(r4)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 48));
	// lwa r8,20(r4)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 20));
	// mulld r11,r11,r10
	ctx.r11.s64 = ctx.r11.s64 * ctx.r10.s64;
	// mulld r11,r11,r8
	ctx.r11.s64 = ctx.r11.s64 * ctx.r8.s64;
	// b 0x833364fc
	goto loc_833364FC;
loc_833364F0:
	// lwa r11,60(r4)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 60));
	// lwa r10,20(r4)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 20));
loc_833364F8:
	// mulld r11,r11,r10
	ctx.r11.s64 = ctx.r11.s64 * ctx.r10.s64;
loc_833364FC:
	// sradi r10,r11,5
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s64 >> 5;
	// rldicl r10,r10,6,58
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 6) & 0x3F;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sradi r11,r11,6
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s64 >> 6;
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
loc_83336510:
	// cmpwi cr6,r9,20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 20, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r9,21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 21, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r3,4095
	ctx.r11.s64 = ctx.r3.s64 + 4095;
	// rlwinm r3,r11,0,0,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8333652C"))) PPC_WEAK_FUNC(sub_8333652C);
PPC_FUNC_IMPL(__imp__sub_8333652C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83336530"))) PPC_WEAK_FUNC(sub_83336530);
PPC_FUNC_IMPL(__imp__sub_83336530) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// bl 0x833359b0
	ctx.lr = 0x8333654C;
	sub_833359B0(ctx, base);
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8333658c
	if (ctx.cr6.eq) goto loc_8333658C;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bge cr6,0x8333658c
	if (!ctx.cr6.lt) goto loc_8333658C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x83336570
	if (!ctx.cr6.eq) goto loc_83336570;
	// addi r11,r10,2047
	ctx.r11.s64 = ctx.r10.s64 + 2047;
	// rlwinm r3,r11,0,0,20
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// b 0x83336590
	goto loc_83336590;
loc_83336570:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83336584
	if (!ctx.cr6.eq) goto loc_83336584;
	// addi r11,r10,4095
	ctx.r11.s64 = ctx.r10.s64 + 4095;
	// rlwinm r3,r11,0,0,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// b 0x83336590
	goto loc_83336590;
loc_83336584:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83336590
	goto loc_83336590;
loc_8333658C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_83336590:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833365A0"))) PPC_WEAK_FUNC(sub_833365A0);
PPC_FUNC_IMPL(__imp__sub_833365A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x833365CC;
	sub_82CB1160(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r10,r11,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x833365f4
	if (ctx.cr6.eq) goto loc_833365F4;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_833365F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8333660C"))) PPC_WEAK_FUNC(sub_8333660C);
PPC_FUNC_IMPL(__imp__sub_8333660C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83336610"))) PPC_WEAK_FUNC(sub_83336610);
PPC_FUNC_IMPL(__imp__sub_83336610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-17240
	ctx.r11.s64 = ctx.r11.s64 + -17240;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83336624"))) PPC_WEAK_FUNC(sub_83336624);
PPC_FUNC_IMPL(__imp__sub_83336624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83336628"))) PPC_WEAK_FUNC(sub_83336628);
PPC_FUNC_IMPL(__imp__sub_83336628) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// bl 0x83335948
	ctx.lr = 0x8333664C;
	sub_83335948(ctx, base);
	// mr. r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8333665c
	if (!ctx.cr0.eq) goto loc_8333665C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x833367a4
	goto loc_833367A4;
loc_8333665C:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,-17240
	ctx.r8.s64 = ctx.r11.s64 + -17240;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// ble cr6,0x83336694
	if (!ctx.cr6.gt) goto loc_83336694;
loc_83336678:
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lbzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// stbx r8,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x83336678
	if (ctx.cr6.lt) goto loc_83336678;
loc_83336694:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83335d28
	ctx.lr = 0x833366A0;
	sub_83335D28(ctx, base);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// ble cr6,0x83336718
	if (!ctx.cr6.gt) goto loc_83336718;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x833367a4
	if (!ctx.cr6.gt) goto loc_833367A4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// subf r31,r31,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_833366C4:
	// lwzx r10,r31,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// srawi. r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x83336700
	if (!ctx.cr0.gt) goto loc_83336700;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
loc_833366E4:
	// lbzx r30,r6,r11
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r10.u8 & 0x3F));
	// or r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 | ctx.r7.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x833366e4
	if (ctx.cr6.lt) goto loc_833366E4;
loc_83336700:
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x833366c4
	if (!ctx.cr0.eq) goto loc_833366C4;
	// b 0x833367a4
	goto loc_833367A4;
loc_83336718:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8333674c
	if (!ctx.cr6.gt) goto loc_8333674C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8333672C:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// or r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 | ctx.r6.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8333672c
	if (ctx.cr6.lt) goto loc_8333672C;
loc_8333674C:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x833367a4
	if (!ctx.cr6.gt) goto loc_833367A4;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r5,r31,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r31.s64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_83336768:
	// lwzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bge cr6,0x83336784
	if (!ctx.cr6.lt) goto loc_83336784;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x83336788
	goto loc_83336788;
loc_83336784:
	// li r8,-1
	ctx.r8.s64 = -1;
loc_83336788:
	// sraw r4,r6,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r4.s64 = ctx.r6.s32 >> temp.u32;
	// and r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 & ctx.r8.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x83336768
	if (!ctx.cr0.eq) goto loc_83336768;
loc_833367A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833367BC"))) PPC_WEAK_FUNC(sub_833367BC);
PPC_FUNC_IMPL(__imp__sub_833367BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833367C0"))) PPC_WEAK_FUNC(sub_833367C0);
PPC_FUNC_IMPL(__imp__sub_833367C0) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x833359b0
	ctx.lr = 0x833367D8;
	sub_833359B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x833367e8
	if (ctx.cr0.eq) goto loc_833367E8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83336628
	ctx.lr = 0x833367E8;
	sub_83336628(ctx, base);
loc_833367E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833367F8"))) PPC_WEAK_FUNC(sub_833367F8);
PPC_FUNC_IMPL(__imp__sub_833367F8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,22
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 22, ctx.xer);
	// blt cr6,0x83336810
	if (ctx.cr6.lt) goto loc_83336810;
	// cmpwi cr6,r5,23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 23, ctx.xer);
	// ble cr6,0x83336818
	if (!ctx.cr6.gt) goto loc_83336818;
	// cmpwi cr6,r5,24
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 24, ctx.xer);
	// beq cr6,0x83336818
	if (ctx.cr6.eq) goto loc_83336818;
loc_83336810:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83336818:
	// b 0x83336628
	sub_83336628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8333681C"))) PPC_WEAK_FUNC(sub_8333681C);
PPC_FUNC_IMPL(__imp__sub_8333681C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83336820"))) PPC_WEAK_FUNC(sub_83336820);
PPC_FUNC_IMPL(__imp__sub_83336820) {
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
	// cmplwi cr6,r5,5
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5, ctx.xer);
	// blt cr6,0x83336860
	if (ctx.cr6.lt) goto loc_83336860;
	// beq cr6,0x83336860
	if (ctx.cr6.eq) goto loc_83336860;
	// cmplwi cr6,r5,7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 7, ctx.xer);
	// blt cr6,0x83336860
	if (ctx.cr6.lt) goto loc_83336860;
	// beq cr6,0x83336860
	if (ctx.cr6.eq) goto loc_83336860;
	// cmplwi cr6,r5,14
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 14, ctx.xer);
	// beq cr6,0x83336860
	if (ctx.cr6.eq) goto loc_83336860;
	// cmplwi cr6,r5,15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 15, ctx.xer);
	// beq cr6,0x83336860
	if (ctx.cr6.eq) goto loc_83336860;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83336878
	goto loc_83336878;
loc_83336860:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x83335820
	ctx.lr = 0x83336868;
	sub_83335820(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83336628
	ctx.lr = 0x83336878;
	sub_83336628(ctx, base);
loc_83336878:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83336888"))) PPC_WEAK_FUNC(sub_83336888);
PPC_FUNC_IMPL(__imp__sub_83336888) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// blt cr6,0x83336898
	if (ctx.cr6.lt) goto loc_83336898;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83336898:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x833368b4
	if (ctx.cr6.lt) goto loc_833368B4;
	// beq cr6,0x833368ac
	if (ctx.cr6.eq) goto loc_833368AC;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x833368b8
	goto loc_833368B8;
loc_833368AC:
	// li r5,23
	ctx.r5.s64 = 23;
	// b 0x833368b8
	goto loc_833368B8;
loc_833368B4:
	// li r5,22
	ctx.r5.s64 = 22;
loc_833368B8:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x83336628
	sub_83336628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833368C0"))) PPC_WEAK_FUNC(sub_833368C0);
PPC_FUNC_IMPL(__imp__sub_833368C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x833368C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x83335948
	ctx.lr = 0x833368DC;
	sub_83335948(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x833368ec
	if (!ctx.cr0.eq) goto loc_833368EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83336a2c
	goto loc_83336A2C;
loc_833368EC:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83335d28
	ctx.lr = 0x833368F8;
	sub_83335D28(ctx, base);
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// ble cr6,0x83336968
	if (!ctx.cr6.gt) goto loc_83336968;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x833369f4
	if (!ctx.cr6.gt) goto loc_833369F4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// subf r30,r7,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r7.s64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8333691C:
	// lwzx r10,r30,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// srawi. r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x83336954
	if (!ctx.cr0.gt) goto loc_83336954;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
loc_8333693C:
	// sraw r27,r5,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r27.s64 = ctx.r5.s32 >> temp.u32;
	// stbx r27,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r27.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8333693c
	if (ctx.cr6.lt) goto loc_8333693C;
loc_83336954:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x8333691c
	if (!ctx.cr0.eq) goto loc_8333691C;
	// b 0x833369f4
	goto loc_833369F4;
loc_83336968:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x833369c8
	if (!ctx.cr6.gt) goto loc_833369C8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// subf r4,r7,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r7.s64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_83336988:
	// lwzx r9,r11,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bge cr6,0x833369a4
	if (!ctx.cr6.lt) goto loc_833369A4;
	// li r7,1
	ctx.r7.s64 = 1;
	// slw r7,r7,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x833369a8
	goto loc_833369A8;
loc_833369A4:
	// li r7,-1
	ctx.r7.s64 = -1;
loc_833369A8:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// and r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 & ctx.r7.u64;
	// slw r7,r7,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// or r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 | ctx.r5.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bne 0x83336988
	if (!ctx.cr0.eq) goto loc_83336988;
loc_833369C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x833369f4
	if (!ctx.cr6.gt) goto loc_833369F4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_833369D8:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// sraw r9,r5,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r9.s64 = ctx.r5.s32 >> temp.u32;
	// stbx r9,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x833369d8
	if (ctx.cr6.lt) goto loc_833369D8;
loc_833369F4:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-17240
	ctx.r9.s64 = ctx.r11.s64 + -17240;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// ble cr6,0x83336a2c
	if (!ctx.cr6.gt) goto loc_83336A2C;
loc_83336A10:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// stbx r9,r8,r28
	PPC_STORE_U8(ctx.r8.u32 + ctx.r28.u32, ctx.r9.u8);
	// blt cr6,0x83336a10
	if (ctx.cr6.lt) goto loc_83336A10;
loc_83336A2C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83336A34"))) PPC_WEAK_FUNC(sub_83336A34);
PPC_FUNC_IMPL(__imp__sub_83336A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83336A38"))) PPC_WEAK_FUNC(sub_83336A38);
PPC_FUNC_IMPL(__imp__sub_83336A38) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x833359b0
	ctx.lr = 0x83336A50;
	sub_833359B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83336a60
	if (ctx.cr0.eq) goto loc_83336A60;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x833368c0
	ctx.lr = 0x83336A60;
	sub_833368C0(ctx, base);
loc_83336A60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83336A70"))) PPC_WEAK_FUNC(sub_83336A70);
PPC_FUNC_IMPL(__imp__sub_83336A70) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,22
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 22, ctx.xer);
	// blt cr6,0x83336a88
	if (ctx.cr6.lt) goto loc_83336A88;
	// cmpwi cr6,r5,23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 23, ctx.xer);
	// ble cr6,0x83336a90
	if (!ctx.cr6.gt) goto loc_83336A90;
	// cmpwi cr6,r5,24
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 24, ctx.xer);
	// beq cr6,0x83336a90
	if (ctx.cr6.eq) goto loc_83336A90;
loc_83336A88:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83336A90:
	// b 0x833368c0
	sub_833368C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83336A94"))) PPC_WEAK_FUNC(sub_83336A94);
PPC_FUNC_IMPL(__imp__sub_83336A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83336A98"))) PPC_WEAK_FUNC(sub_83336A98);
PPC_FUNC_IMPL(__imp__sub_83336A98) {
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
	// cmplwi cr6,r5,5
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5, ctx.xer);
	// blt cr6,0x83336ad8
	if (ctx.cr6.lt) goto loc_83336AD8;
	// beq cr6,0x83336ad8
	if (ctx.cr6.eq) goto loc_83336AD8;
	// cmplwi cr6,r5,7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 7, ctx.xer);
	// blt cr6,0x83336ad8
	if (ctx.cr6.lt) goto loc_83336AD8;
	// beq cr6,0x83336ad8
	if (ctx.cr6.eq) goto loc_83336AD8;
	// cmplwi cr6,r5,14
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 14, ctx.xer);
	// beq cr6,0x83336ad8
	if (ctx.cr6.eq) goto loc_83336AD8;
	// cmplwi cr6,r5,15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 15, ctx.xer);
	// beq cr6,0x83336ad8
	if (ctx.cr6.eq) goto loc_83336AD8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83336af0
	goto loc_83336AF0;
loc_83336AD8:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x83335820
	ctx.lr = 0x83336AE0;
	sub_83335820(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x833368c0
	ctx.lr = 0x83336AF0;
	sub_833368C0(ctx, base);
loc_83336AF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83336B00"))) PPC_WEAK_FUNC(sub_83336B00);
PPC_FUNC_IMPL(__imp__sub_83336B00) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// blt cr6,0x83336b10
	if (ctx.cr6.lt) goto loc_83336B10;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83336B10:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x83336b2c
	if (ctx.cr6.lt) goto loc_83336B2C;
	// beq cr6,0x83336b24
	if (ctx.cr6.eq) goto loc_83336B24;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x83336b30
	goto loc_83336B30;
loc_83336B24:
	// li r5,23
	ctx.r5.s64 = 23;
	// b 0x83336b30
	goto loc_83336B30;
loc_83336B2C:
	// li r5,22
	ctx.r5.s64 = 22;
loc_83336B30:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x833368c0
	sub_833368C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83336B38"))) PPC_WEAK_FUNC(sub_83336B38);
PPC_FUNC_IMPL(__imp__sub_83336B38) {
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
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x83336b90
	if (!ctx.cr6.eq) goto loc_83336B90;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83335c98
	ctx.lr = 0x83336B58;
	sub_83335C98(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x83336b74
	if (ctx.cr6.lt) goto loc_83336B74;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x83336b90
	goto loc_83336B90;
loc_83336B74:
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
loc_83336B90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83336BA0"))) PPC_WEAK_FUNC(sub_83336BA0);
PPC_FUNC_IMPL(__imp__sub_83336BA0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,24
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 24, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83336BBC"))) PPC_WEAK_FUNC(sub_83336BBC);
PPC_FUNC_IMPL(__imp__sub_83336BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83336BC0"))) PPC_WEAK_FUNC(sub_83336BC0);
PPC_FUNC_IMPL(__imp__sub_83336BC0) {
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
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x83336c18
	if (!ctx.cr6.eq) goto loc_83336C18;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83335c98
	ctx.lr = 0x83336BE0;
	sub_83335C98(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x83336bfc
	if (ctx.cr6.lt) goto loc_83336BFC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x83336c18
	goto loc_83336C18;
loc_83336BFC:
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
loc_83336C18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83336C28"))) PPC_WEAK_FUNC(sub_83336C28);
PPC_FUNC_IMPL(__imp__sub_83336C28) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,24
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 24, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83336C44"))) PPC_WEAK_FUNC(sub_83336C44);
PPC_FUNC_IMPL(__imp__sub_83336C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83336C48"))) PPC_WEAK_FUNC(sub_83336C48);
PPC_FUNC_IMPL(__imp__sub_83336C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lis r10,20096
	ctx.r10.s64 = 1317011456;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x83336c94
	if (!ctx.cr6.gt) goto loc_83336C94;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83336c88
	if (ctx.cr0.eq) goto loc_83336C88;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// blr 
	return;
loc_83336C88:
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_83336C94:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83336CA4"))) PPC_WEAK_FUNC(sub_83336CA4);
PPC_FUNC_IMPL(__imp__sub_83336CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83336CA8"))) PPC_WEAK_FUNC(sub_83336CA8);
PPC_FUNC_IMPL(__imp__sub_83336CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x83336cd0
	if (!ctx.cr6.eq) goto loc_83336CD0;
	// lis r10,127
	ctx.r10.s64 = 8323072;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwimi r11,r10,0,8,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFF000000);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
loc_83336CD0:
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83336CD8"))) PPC_WEAK_FUNC(sub_83336CD8);
PPC_FUNC_IMPL(__imp__sub_83336CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// srawi r11,r10,23
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 23;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83336cfc
	if (!ctx.cr0.eq) goto loc_83336CFC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x83336d28
	if (ctx.cr6.eq) goto loc_83336D28;
loc_83336CF4:
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// b 0x83336d24
	goto loc_83336D24;
loc_83336CFC:
	// add. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x83336cf4
	if (!ctx.cr0.gt) goto loc_83336CF4;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x83336d18
	if (ctx.cr6.lt) goto loc_83336D18;
	// rlwinm r11,r10,0,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF800000;
	// oris r11,r11,32640
	ctx.r11.u64 = ctx.r11.u64 | 2139095040;
	// b 0x83336d24
	goto loc_83336D24;
loc_83336D18:
	// rlwinm r10,r10,0,9,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF807FFFFF;
	// rlwinm r11,r11,23,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFF800000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_83336D24:
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
loc_83336D28:
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83336D30"))) PPC_WEAK_FUNC(sub_83336D30);
PPC_FUNC_IMPL(__imp__sub_83336D30) {
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
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bgt cr6,0x83336d5c
	if (ctx.cr6.gt) goto loc_83336D5C;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83336D50:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
loc_83336D54:
	// frsp f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x83336f3c
	goto loc_83336F3C;
loc_83336D5C:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x83336f04
	if (ctx.cr6.lt) goto loc_83336F04;
	// beq cr6,0x83336ecc
	if (ctx.cr6.eq) goto loc_83336ECC;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x83336ebc
	if (ctx.cr6.lt) goto loc_83336EBC;
	// beq cr6,0x83336ea0
	if (ctx.cr6.eq) goto loc_83336EA0;
	// cmplwi cr6,r5,5
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5, ctx.xer);
	// blt cr6,0x83336e0c
	if (ctx.cr6.lt) goto loc_83336E0C;
	// cmplwi cr6,r5,7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 7, ctx.xer);
	// bne cr6,0x83336da0
	if (!ctx.cr6.eq) goto loc_83336DA0;
	// cmpwi cr6,r4,32
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32, ctx.xer);
	// bne cr6,0x83336d98
	if (!ctx.cr6.eq) goto loc_83336D98;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_83336D90:
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83336f3c
	goto loc_83336F3C;
loc_83336D98:
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// beq cr6,0x83336dac
	if (ctx.cr6.eq) goto loc_83336DAC;
loc_83336DA0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83336f3c
	goto loc_83336F3C;
loc_83336DAC:
	// rlwinm. r9,r3,0,17,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x7C00;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83336dec
	if (!ctx.cr0.eq) goto loc_83336DEC;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// rlwinm r11,r3,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-23144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_83336DE4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x83336d90
	goto loc_83336D90;
loc_83336DEC:
	// rlwinm r11,r3,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF8000;
	// clrlwi r10,r3,22
	ctx.r10.u64 = ctx.r3.u32 & 0x3FF;
	// addi r11,r11,14336
	ctx.r11.s64 = ctx.r11.s64 + 14336;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,13,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// b 0x83336de4
	goto loc_83336DE4;
loc_83336E0C:
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// li r11,1
	ctx.r11.s64 = 1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfd f13,-23152(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -23152);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83336e64
	if (ctx.cr6.gt) goto loc_83336E64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfd f13,-23160(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -23160);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// b 0x83336d54
	goto loc_83336D54;
loc_83336E64:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfd f2,-23176(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -23176);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,-23168(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -23168);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// lfd f13,-23184(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -23184);
	// fmul f1,f0,f13
	ctx.f1.f64 = ctx.f0.f64 * ctx.f13.f64;
	// bl 0x82cb59b0
	ctx.lr = 0x83336E98;
	sub_82CB59B0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x83336f3c
	goto loc_83336F3C;
loc_83336EA0:
	// subfic r11,r4,32
	ctx.xer.ca = ctx.r4.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r4.s64;
	// slw r10,r3,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// sraw r11,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x83336d50
	goto loc_83336D50;
loc_83336EBC:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x83336d50
	goto loc_83336D50;
loc_83336ECC:
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// subfic r11,r4,32
	ctx.xer.ca = ctx.r4.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r4.s64;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// slw r9,r3,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sraw r11,r9,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r11.s64 = ctx.r9.s32 >> temp.u32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x83336f28
	goto loc_83336F28;
loc_83336F04:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// slw r11,r10,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_83336F28:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_83336F3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83336F4C"))) PPC_WEAK_FUNC(sub_83336F4C);
PPC_FUNC_IMPL(__imp__sub_83336F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83336F50"))) PPC_WEAK_FUNC(sub_83336F50);
PPC_FUNC_IMPL(__imp__sub_83336F50) {
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
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bgt cr6,0x83336f7c
	if (ctx.cr6.gt) goto loc_83336F7C;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83336F70:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
loc_83336F74:
	// frsp f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x83337178
	goto loc_83337178;
loc_83336F7C:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x83337140
	if (ctx.cr6.lt) goto loc_83337140;
	// beq cr6,0x833370f4
	if (ctx.cr6.eq) goto loc_833370F4;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x833370e4
	if (ctx.cr6.lt) goto loc_833370E4;
	// beq cr6,0x833370c8
	if (ctx.cr6.eq) goto loc_833370C8;
	// cmplwi cr6,r5,5
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5, ctx.xer);
	// blt cr6,0x8333702c
	if (ctx.cr6.lt) goto loc_8333702C;
	// cmplwi cr6,r5,7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 7, ctx.xer);
	// bne cr6,0x83336fc0
	if (!ctx.cr6.eq) goto loc_83336FC0;
	// cmpwi cr6,r4,32
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32, ctx.xer);
	// bne cr6,0x83336fb8
	if (!ctx.cr6.eq) goto loc_83336FB8;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_83336FB0:
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83337178
	goto loc_83337178;
loc_83336FB8:
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// beq cr6,0x83336fcc
	if (ctx.cr6.eq) goto loc_83336FCC;
loc_83336FC0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83337178
	goto loc_83337178;
loc_83336FCC:
	// rlwinm. r9,r3,0,17,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x7C00;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8333700c
	if (!ctx.cr0.eq) goto loc_8333700C;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// rlwinm r11,r3,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-23144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_83337004:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x83336fb0
	goto loc_83336FB0;
loc_8333700C:
	// rlwinm r11,r3,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF8000;
	// clrlwi r10,r3,22
	ctx.r10.u64 = ctx.r3.u32 & 0x3FF;
	// addi r11,r11,14336
	ctx.r11.s64 = ctx.r11.s64 + 14336;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,13,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// b 0x83337004
	goto loc_83337004;
loc_8333702C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x83337140
	if (!ctx.cr6.eq) goto loc_83337140;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfd f13,-23152(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -23152);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8333708c
	if (ctx.cr6.gt) goto loc_8333708C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfd f13,-23160(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -23160);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// b 0x83336f74
	goto loc_83336F74;
loc_8333708C:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfd f2,-23176(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -23176);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,-23168(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -23168);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// lfd f13,-23184(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -23184);
	// fmul f1,f0,f13
	ctx.f1.f64 = ctx.f0.f64 * ctx.f13.f64;
	// bl 0x82cb59b0
	ctx.lr = 0x833370C0;
	sub_82CB59B0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x83337178
	goto loc_83337178;
loc_833370C8:
	// subfic r11,r4,32
	ctx.xer.ca = ctx.r4.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r4.s64;
	// slw r10,r3,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// sraw r11,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x83336f70
	goto loc_83336F70;
loc_833370E4:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x83336f70
	goto loc_83336F70;
loc_833370F4:
	// subfic r11,r4,32
	ctx.xer.ca = ctx.r4.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r4.s64;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// slw r8,r3,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// sraw r11,r8,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// li r9,1
	ctx.r9.s64 = 1;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// b 0x83337178
	goto loc_83337178;
loc_83337140:
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// li r11,1
	ctx.r11.s64 = 1;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_83337178:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337188"))) PPC_WEAK_FUNC(sub_83337188);
PPC_FUNC_IMPL(__imp__sub_83337188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bgt cr6,0x833371c4
	if (ctx.cr6.gt) goto loc_833371C4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x833371ac
	if (!ctx.cr6.eq) goto loc_833371AC;
loc_833371A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83337530
	goto loc_83337530;
loc_833371AC:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83336c48
	ctx.lr = 0x833371B4;
	sub_83336C48(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bge cr6,0x83337530
	if (!ctx.cr6.lt) goto loc_83337530;
	// b 0x833371a4
	goto loc_833371A4;
loc_833371C4:
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x833371f4
	if (!ctx.cr6.eq) goto loc_833371F4;
	// lis r10,127
	ctx.r10.s64 = 8323072;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwimi r11,r10,0,8,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFF000000);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
loc_833371F4:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x833374b8
	if (ctx.cr6.lt) goto loc_833374B8;
	// beq cr6,0x83337404
	if (ctx.cr6.eq) goto loc_83337404;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// blt cr6,0x83337384
	if (ctx.cr6.lt) goto loc_83337384;
	// beq cr6,0x833372ac
	if (ctx.cr6.eq) goto loc_833372AC;
	// cmplwi cr6,r6,5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 5, ctx.xer);
	// blt cr6,0x83337298
	if (ctx.cr6.lt) goto loc_83337298;
	// cmplwi cr6,r6,7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 7, ctx.xer);
	// bne cr6,0x833371a4
	if (!ctx.cr6.eq) goto loc_833371A4;
	// cmpwi cr6,r5,32
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32, ctx.xer);
	// bne cr6,0x83337234
	if (!ctx.cr6.eq) goto loc_83337234;
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x83337530
	goto loc_83337530;
loc_83337234:
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// bne cr6,0x833371a4
	if (!ctx.cr6.eq) goto loc_833371A4;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// rlwinm r11,r4,5,19,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0x1F80;
	// lfd f13,-23136(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -23136);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm. r10,r11,0,1,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83337280
	if (ctx.cr0.eq) goto loc_83337280;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x83337278
	if (!ctx.cr6.lt) goto loc_83337278;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x83337530
	goto loc_83337530;
loc_83337278:
	// li r3,32767
	ctx.r3.s64 = 32767;
	// b 0x83337530
	goto loc_83337530;
loc_83337280:
	// srawi. r11,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 13;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x83337290
	if (!ctx.cr0.lt) goto loc_83337290;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
loc_83337290:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83337530
	goto loc_83337530;
loc_83337298:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x833374b8
	if (!ctx.cr6.eq) goto loc_833374B8;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x83339df0
	ctx.lr = 0x833372A8;
	sub_83339DF0(ctx, base);
	// b 0x83337530
	goto loc_83337530;
loc_833372AC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r5,-1
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// bge cr6,0x8333731c
	if (!ctx.cr6.lt) goto loc_8333731C;
	// neg r3,r10
	ctx.r3.s64 = -ctx.r10.s64;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83337530
	if (!ctx.cr6.gt) goto loc_83337530;
	// subfic r10,r5,22
	ctx.xer.ca = ctx.r5.u32 <= 22;
	ctx.r10.s64 = 22 - ctx.r5.s64;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// b 0x83337368
	goto loc_83337368;
loc_8333731C:
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x83337530
	if (!ctx.cr6.lt) goto loc_83337530;
	// subfic r10,r5,22
	ctx.xer.ca = ctx.r5.u32 <= 22;
	ctx.r10.s64 = 22 - ctx.r5.s64;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83337368:
	// subfic r10,r5,16
	ctx.xer.ca = ctx.r5.u32 <= 16;
	ctx.r10.s64 = 16 - ctx.r5.s64;
	// subfic r9,r5,24
	ctx.xer.ca = ctx.r5.u32 <= 24;
	ctx.r9.s64 = 24 - ctx.r5.s64;
loc_83337370:
	// slw r10,r4,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldicr r11,r11,2,61
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// b 0x83337524
	goto loc_83337524;
loc_83337384:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r10,r11,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r5.u8 & 0x3F));
	// lfs f13,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x833371a4
	if (!ctx.cr6.gt) goto loc_833371A4;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x83337530
	if (!ctx.cr6.lt) goto loc_83337530;
	// subfic r10,r5,22
	ctx.xer.ca = ctx.r5.u32 <= 22;
	ctx.r10.s64 = 22 - ctx.r5.s64;
	// subfic r9,r5,16
	ctx.xer.ca = ctx.r5.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r5.s64;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// subfic r10,r5,24
	ctx.xer.ca = ctx.r5.u32 <= 24;
	ctx.r10.s64 = 24 - ctx.r5.s64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// slw r11,r4,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r10,r10,2,61
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// b 0x83337524
	goto loc_83337524;
loc_83337404:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x83337464
	if (!ctx.cr6.lt) goto loc_83337464;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-18324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83337434
	if (ctx.cr6.gt) goto loc_83337434;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// subfic r3,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r3.s64 = 1 - ctx.r11.s64;
	// b 0x83337530
	goto loc_83337530;
loc_83337434:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfs f13,27296(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27296);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// srad r10,r11,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r11.s64 < 0) & (((ctx.r11.s64 >> temp.u64) << temp.u64) != ctx.r11.s64);
	ctx.r10.s64 = ctx.r11.s64 >> temp.u64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x833374ac
	goto loc_833374AC;
loc_83337464:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83337484
	if (ctx.cr6.lt) goto loc_83337484;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x833374e0
	goto loc_833374E0;
loc_83337484:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfs f13,27296(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27296);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// srad r10,r11,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r11.s64 < 0) & (((ctx.r11.s64 >> temp.u64) << temp.u64) != ctx.r11.s64);
	ctx.r10.s64 = ctx.r11.s64 >> temp.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_833374AC:
	// subfic r10,r5,17
	ctx.xer.ca = ctx.r5.u32 <= 17;
	ctx.r10.s64 = 17 - ctx.r5.s64;
	// subfic r9,r5,25
	ctx.xer.ca = ctx.r5.u32 <= 25;
	ctx.r9.s64 = 25 - ctx.r5.s64;
	// b 0x83337370
	goto loc_83337370;
loc_833374B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x833371a4
	if (!ctx.cr6.gt) goto loc_833371A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x833374e8
	if (ctx.cr6.lt) goto loc_833374E8;
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r5.u8 & 0x3F));
loc_833374E0:
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// b 0x83337530
	goto loc_83337530;
loc_833374E8:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// lfs f13,27296(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27296);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// srad r10,r11,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r11.s64 < 0) & (((ctx.r11.s64 >> temp.u64) << temp.u64) != ctx.r11.s64);
	ctx.r10.s64 = ctx.r11.s64 >> temp.u64;
	// subfic r9,r5,16
	ctx.xer.ca = ctx.r5.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r5.s64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// slw r9,r4,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// subfic r8,r5,24
	ctx.xer.ca = ctx.r5.u32 <= 24;
	ctx.r8.s64 = 24 - ctx.r5.s64;
	// rldicr r10,r11,2,61
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
loc_83337524:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srad r11,r11,r9
	temp.u64 = ctx.r9.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r11.s64 < 0) & (((ctx.r11.s64 >> temp.u64) << temp.u64) != ctx.r11.s64);
	ctx.r11.s64 = ctx.r11.s64 >> temp.u64;
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
loc_83337530:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337540"))) PPC_WEAK_FUNC(sub_83337540);
PPC_FUNC_IMPL(__imp__sub_83337540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r9,r9,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// li r10,0
	ctx.r10.s64 = 0;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83337580
	if (ctx.cr0.eq) goto loc_83337580;
	// b 0x8333758c
	goto loc_8333758C;
loc_83337578:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_83337580:
	// rlwinm. r9,r11,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83337578
	if (ctx.cr0.eq) goto loc_83337578;
	// subfic r10,r10,127
	ctx.xer.ca = ctx.r10.u32 <= 127;
	ctx.r10.s64 = 127 - ctx.r10.s64;
loc_8333758C:
	// rlwimi r11,r10,23,0,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 23) & 0xFF800000) | (ctx.r11.u64 & 0xFFFFFFFF007FFFFF);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8333759C"))) PPC_WEAK_FUNC(sub_8333759C);
PPC_FUNC_IMPL(__imp__sub_8333759C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833375A0"))) PPC_WEAK_FUNC(sub_833375A0);
PPC_FUNC_IMPL(__imp__sub_833375A0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 22, ctx.xer);
	// beq cr6,0x833375b8
	if (ctx.cr6.eq) goto loc_833375B8;
	// cmpwi cr6,r4,23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 23, ctx.xer);
	// beq cr6,0x833375b8
	if (ctx.cr6.eq) goto loc_833375B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_833375B8:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833375C0"))) PPC_WEAK_FUNC(sub_833375C0);
PPC_FUNC_IMPL(__imp__sub_833375C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833375C8"))) PPC_WEAK_FUNC(sub_833375C8);
PPC_FUNC_IMPL(__imp__sub_833375C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 22, ctx.xer);
	// beq cr6,0x83337670
	if (ctx.cr6.eq) goto loc_83337670;
	// cmpwi cr6,r4,23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 23, ctx.xer);
	// beq cr6,0x83337608
	if (ctx.cr6.eq) goto loc_83337608;
	// cmpwi cr6,r4,24
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 24, ctx.xer);
	// beq cr6,0x833375ec
	if (ctx.cr6.eq) goto loc_833375EC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_833375EC:
	// lwa r11,0(r3)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 0));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,-30352(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -30352);
	// b 0x83337688
	goto loc_83337688;
loc_83337608:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r10,r11,0,8,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83337638
	if (!ctx.cr0.eq) goto loc_83337638;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-23128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
loc_83337638:
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// lis r8,240
	ctx.r8.s64 = 15728640;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x83337654
	if (!ctx.cr6.eq) goto loc_83337654;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_83337654:
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r11,r11,1792
	ctx.r11.s64 = ctx.r11.s64 + 117440512;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_83337670:
	// lwa r11,4(r3)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 4));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f0,27312(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 27312);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
loc_83337688:
	// fmul f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337694"))) PPC_WEAK_FUNC(sub_83337694);
PPC_FUNC_IMPL(__imp__sub_83337694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83337698"))) PPC_WEAK_FUNC(sub_83337698);
PPC_FUNC_IMPL(__imp__sub_83337698) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,22
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 22, ctx.xer);
	// beq cr6,0x833376a8
	if (ctx.cr6.eq) goto loc_833376A8;
	// cmpwi cr6,r5,23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 23, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_833376A8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833376B4"))) PPC_WEAK_FUNC(sub_833376B4);
PPC_FUNC_IMPL(__imp__sub_833376B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833376B8"))) PPC_WEAK_FUNC(sub_833376B8);
PPC_FUNC_IMPL(__imp__sub_833376B8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833376C4"))) PPC_WEAK_FUNC(sub_833376C4);
PPC_FUNC_IMPL(__imp__sub_833376C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833376C8"))) PPC_WEAK_FUNC(sub_833376C8);
PPC_FUNC_IMPL(__imp__sub_833376C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r5,22
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 22, ctx.xer);
	// beq cr6,0x833377b0
	if (ctx.cr6.eq) goto loc_833377B0;
	// cmpwi cr6,r5,23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 23, ctx.xer);
	// beq cr6,0x8333773c
	if (ctx.cr6.eq) goto loc_8333773C;
	// cmpwi cr6,r5,24
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 24, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x833376f8
	if (ctx.cr6.gt) goto loc_833376F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83337710
	goto loc_83337710;
loc_833376F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x83337718
	if (ctx.cr6.lt) goto loc_83337718;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_83337710:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_83337718:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,2064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2064);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfd f0,-18360(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18360);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f0.u32);
	// blr 
	return;
loc_8333773C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x833377c0
	if (!ctx.cr6.gt) goto loc_833377C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x83337768
	if (ctx.cr6.lt) goto loc_83337768;
	// lis r11,240
	ctx.r11.s64 = 15728640;
	// b 0x833377e0
	goto loc_833377E0;
loc_83337768:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lis r10,14336
	ctx.r10.s64 = 939524096;
	// rlwinm r9,r11,0,0,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF800000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8333778c
	if (!ctx.cr6.gt) goto loc_8333778C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// b 0x833377e0
	goto loc_833377E0;
loc_8333778C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-23124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// b 0x833377e0
	goto loc_833377E0;
loc_833377B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x833377c8
	if (ctx.cr6.gt) goto loc_833377C8;
loc_833377C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x833377e0
	goto loc_833377E0;
loc_833377C8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x833377e8
	if (ctx.cr6.lt) goto loc_833377E8;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_833377E0:
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_833377E8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f0,27492(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27492);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfd f0,-18360(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18360);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337810"))) PPC_WEAK_FUNC(sub_83337810);
PPC_FUNC_IMPL(__imp__sub_83337810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x83337888
	if (ctx.cr6.lt) goto loc_83337888;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x83337898
	if (!ctx.cr6.gt) goto loc_83337898;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x833378b0
	if (!ctx.cr6.lt) goto loc_833378B0;
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lis r10,14336
	ctx.r10.s64 = 939524096;
	// rlwinm r9,r11,0,0,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF800000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x83337864
	if (!ctx.cr6.gt) goto loc_83337864;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// b 0x833378b8
	goto loc_833378B8;
loc_83337864:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-23124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// b 0x833378b8
	goto loc_833378B8;
loc_83337888:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x833378a0
	if (ctx.cr6.gt) goto loc_833378A0;
loc_83337898:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x833378b8
	goto loc_833378B8;
loc_833378A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x833378c0
	if (ctx.cr6.lt) goto loc_833378C0;
loc_833378B0:
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_833378B8:
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_833378C0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,4
	ctx.r10.s64 = 4;
	// lfs f0,-23120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833378DC"))) PPC_WEAK_FUNC(sub_833378DC);
PPC_FUNC_IMPL(__imp__sub_833378DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833378E0"))) PPC_WEAK_FUNC(sub_833378E0);
PPC_FUNC_IMPL(__imp__sub_833378E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 22, ctx.xer);
	// beq cr6,0x833379d0
	if (ctx.cr6.eq) goto loc_833379D0;
	// cmpwi cr6,r4,23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 23, ctx.xer);
	// beq cr6,0x8333795c
	if (ctx.cr6.eq) goto loc_8333795C;
	// cmpwi cr6,r4,24
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 24, ctx.xer);
	// beq cr6,0x83337900
	if (ctx.cr6.eq) goto loc_83337900;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83337900:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x83337918
	if (ctx.cr6.gt) goto loc_83337918;
loc_83337910:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83337918:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x83337934
	if (ctx.cr6.lt) goto loc_83337934;
	// lis r3,0
	ctx.r3.s64 = 0;
loc_8333792C:
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_83337934:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,2064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2064);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfd f0,-18360(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18360);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
loc_8333795C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x83337910
	if (!ctx.cr6.gt) goto loc_83337910;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x83337988
	if (ctx.cr6.lt) goto loc_83337988;
	// lis r3,240
	ctx.r3.s64 = 15728640;
	// blr 
	return;
loc_83337988:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lis r10,14336
	ctx.r10.s64 = 939524096;
	// rlwinm r9,r11,0,0,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF800000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x833379ac
	if (!ctx.cr6.gt) goto loc_833379AC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// clrlwi r3,r11,8
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFFFF;
	// blr 
	return;
loc_833379AC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-23124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r3,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 3;
	// blr 
	return;
loc_833379D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x83337910
	if (!ctx.cr6.gt) goto loc_83337910;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x833379f8
	if (ctx.cr6.lt) goto loc_833379F8;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// b 0x8333792c
	goto loc_8333792C;
loc_833379F8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,27492(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27492);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfd f0,-18360(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18360);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337A20"))) PPC_WEAK_FUNC(sub_83337A20);
PPC_FUNC_IMPL(__imp__sub_83337A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bge cr6,0x83337a64
	if (!ctx.cr6.lt) goto loc_83337A64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x83337a50
	if (ctx.cr6.lt) goto loc_83337A50;
	// beq cr6,0x83337a48
	if (ctx.cr6.eq) goto loc_83337A48;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x83337a54
	goto loc_83337A54;
loc_83337A48:
	// li r5,23
	ctx.r5.s64 = 23;
	// b 0x83337a54
	goto loc_83337A54;
loc_83337A50:
	// li r5,22
	ctx.r5.s64 = 22;
loc_83337A54:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83336628
	ctx.lr = 0x83337A64;
	sub_83336628(ctx, base);
loc_83337A64:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337A78"))) PPC_WEAK_FUNC(sub_83337A78);
PPC_FUNC_IMPL(__imp__sub_83337A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,22
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 22, ctx.xer);
	// beq cr6,0x83337aa8
	if (ctx.cr6.eq) goto loc_83337AA8;
	// cmpwi cr6,r5,23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 23, ctx.xer);
	// bne cr6,0x83337ab0
	if (!ctx.cr6.eq) goto loc_83337AB0;
loc_83337AA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_83337AB0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833376c8
	ctx.lr = 0x83337ABC;
	sub_833376C8(ctx, base);
	// cmpwi cr6,r5,22
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 22, ctx.xer);
	// blt cr6,0x83337ae0
	if (ctx.cr6.lt) goto loc_83337AE0;
	// cmpwi cr6,r5,23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 23, ctx.xer);
	// ble cr6,0x83337ad4
	if (!ctx.cr6.gt) goto loc_83337AD4;
	// cmpwi cr6,r5,24
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 24, ctx.xer);
	// bne cr6,0x83337ae0
	if (!ctx.cr6.eq) goto loc_83337AE0;
loc_83337AD4:
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833368c0
	ctx.lr = 0x83337AE0;
	sub_833368C0(ctx, base);
loc_83337AE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337AF0"))) PPC_WEAK_FUNC(sub_83337AF0);
PPC_FUNC_IMPL(__imp__sub_83337AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83337810
	ctx.lr = 0x83337B24;
	sub_83337810(ctx, base);
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bge cr6,0x83337b5c
	if (!ctx.cr6.lt) goto loc_83337B5C;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x83337b48
	if (ctx.cr6.lt) goto loc_83337B48;
	// beq cr6,0x83337b40
	if (ctx.cr6.eq) goto loc_83337B40;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x83337b4c
	goto loc_83337B4C;
loc_83337B40:
	// li r5,23
	ctx.r5.s64 = 23;
	// b 0x83337b4c
	goto loc_83337B4C;
loc_83337B48:
	// li r5,22
	ctx.r5.s64 = 22;
loc_83337B4C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833368c0
	ctx.lr = 0x83337B5C;
	sub_833368C0(ctx, base);
loc_83337B5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337B6C"))) PPC_WEAK_FUNC(sub_83337B6C);
PPC_FUNC_IMPL(__imp__sub_83337B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83337B70"))) PPC_WEAK_FUNC(sub_83337B70);
PPC_FUNC_IMPL(__imp__sub_83337B70) {
	PPC_FUNC_PROLOGUE();
	// rldicr r11,r4,34,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 34) & 0xFFFFFFFC00000000;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// rldicr r10,r5,34,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u64, 34) & 0xFFFFFFFC00000000;
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// rldicr r9,r7,37,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u64, 37) & 0xFFFFFFE000000000;
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// sradi r11,r11,34
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3FFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s64 >> 34;
	// sradi r10,r10,34
	ctx.xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x3FFFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s64 >> 34;
	// sradi r9,r9,37
	ctx.xer.ca = (ctx.r9.s64 < 0) & ((ctx.r9.u64 & 0x1FFFFFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s64 >> 37;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// std r9,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337BA4"))) PPC_WEAK_FUNC(sub_83337BA4);
PPC_FUNC_IMPL(__imp__sub_83337BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83337BA8"))) PPC_WEAK_FUNC(sub_83337BA8);
PPC_FUNC_IMPL(__imp__sub_83337BA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337BDC"))) PPC_WEAK_FUNC(sub_83337BDC);
PPC_FUNC_IMPL(__imp__sub_83337BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83337BE0"))) PPC_WEAK_FUNC(sub_83337BE0);
PPC_FUNC_IMPL(__imp__sub_83337BE0) {
	PPC_FUNC_PROLOGUE();
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// beq cr6,0x83337bf8
	if (ctx.cr6.eq) goto loc_83337BF8;
loc_83337BF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83337BF8:
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// ld r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// bne cr6,0x83337bf0
	if (!ctx.cr6.eq) goto loc_83337BF0;
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ld r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// bne cr6,0x83337bf0
	if (!ctx.cr6.eq) goto loc_83337BF0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x83337bf0
	if (!ctx.cr6.eq) goto loc_83337BF0;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x83337bf0
	if (!ctx.cr6.eq) goto loc_83337BF0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337C50"))) PPC_WEAK_FUNC(sub_83337C50);
PPC_FUNC_IMPL(__imp__sub_83337C50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r10,r5,-64
	ctx.r10.s64 = ctx.r5.s64 + -64;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r8,r4,-64
	ctx.r8.s64 = ctx.r4.s64 + -64;
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.s64 = 16 - ctx.r11.s64;
	// ld r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// subfic r9,r9,19
	ctx.xer.ca = ctx.r9.u32 <= 19;
	ctx.r9.s64 = 19 - ctx.r9.s64;
	// ld r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// sld r9,r7,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// sld r10,r6,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r11.u8 & 0x7F));
	// mulld r11,r9,r7
	ctx.r11.s64 = ctx.r9.s64 * ctx.r7.s64;
	// sld r9,r4,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r4.u64 << (ctx.r5.u8 & 0x7F));
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulld r10,r9,r8
	ctx.r10.s64 = ctx.r9.s64 * ctx.r8.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rldicr r11,r11,18,45
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 18) & 0xFFFFFFFFFFFC0000;
	// sradi r3,r11,12
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0xFFF) != 0);
	ctx.r3.s64 = ctx.r11.s64 >> 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337CAC"))) PPC_WEAK_FUNC(sub_83337CAC);
PPC_FUNC_IMPL(__imp__sub_83337CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83337CB0"))) PPC_WEAK_FUNC(sub_83337CB0);
PPC_FUNC_IMPL(__imp__sub_83337CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bgt cr6,0x83337cc8
	if (ctx.cr6.gt) goto loc_83337CC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_83337CC8:
	// li r11,1
	ctx.r11.s64 = 1;
	// rldicr r11,r11,48,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 48) & 0xFFFFFFFFFFFFFFFF;
	// cmpd cr6,r3,r11
	ctx.cr6.compare<int64_t>(ctx.r3.s64, ctx.r11.s64, ctx.xer);
	// blt cr6,0x83337ce4
	if (ctx.cr6.lt) goto loc_83337CE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_83337CE4:
	// lfd f0,16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 16);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,-23112(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -23112);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337D00"))) PPC_WEAK_FUNC(sub_83337D00);
PPC_FUNC_IMPL(__imp__sub_83337D00) {
	PPC_FUNC_PROLOGUE();
	// sradi r10,r3,7
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r3.s64 >> 7;
	// rldicr r11,r10,0,34
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFE0000000;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x83337d1c
	if (ctx.cr6.eq) goto loc_83337D1C;
	// li r6,1
	ctx.r6.s64 = 1;
	// sradi r11,r10,8
	ctx.xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r10.s64 >> 8;
	// b 0x83337d24
	goto loc_83337D24;
loc_83337D1C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83337D24:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x83337d4c
	if (ctx.cr6.eq) goto loc_83337D4C;
	// rldicr r11,r10,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFE00000000;
loc_83337D34:
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x83337d54
	if (ctx.cr6.eq) goto loc_83337D54;
	// li r7,1
	ctx.r7.s64 = 1;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// rlwinm r10,r9,0,0,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF8000000;
	// b 0x83337d60
	goto loc_83337D60;
loc_83337D4C:
	// rldicr r11,r10,0,38
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFE000000;
	// b 0x83337d34
	goto loc_83337D34;
loc_83337D54:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rlwinm r10,r9,0,0,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF800000;
loc_83337D60:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x83337d80
	if (!ctx.cr6.eq) goto loc_83337D80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// beq cr6,0x83337d88
	if (ctx.cr6.eq) goto loc_83337D88;
loc_83337D80:
	// rlwinm r11,r11,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// b 0x83337d8c
	goto loc_83337D8C;
loc_83337D88:
	// rlwinm r11,r11,0,0,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFC00000;
loc_83337D8C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x83337da4
	if (ctx.cr6.eq) goto loc_83337DA4;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
loc_83337DA4:
	// rlwinm. r11,r10,0,0,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFE00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83337dd4
	if (ctx.cr0.eq) goto loc_83337DD4;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r10,11
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFF;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,21,0,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0xFFE00000;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83337DD4:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337DE0"))) PPC_WEAK_FUNC(sub_83337DE0);
PPC_FUNC_IMPL(__imp__sub_83337DE0) {
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
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bgt cr6,0x83337e00
	if (ctx.cr6.gt) goto loc_83337E00;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83337f08
	goto loc_83337F08;
loc_83337E00:
	// cmpwi cr6,r4,22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 22, ctx.xer);
	// beq cr6,0x83337edc
	if (ctx.cr6.eq) goto loc_83337EDC;
	// cmpwi cr6,r4,23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 23, ctx.xer);
	// beq cr6,0x83337e3c
	if (ctx.cr6.eq) goto loc_83337E3C;
	// cmpwi cr6,r4,24
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 24, ctx.xer);
	// bne cr6,0x83337eac
	if (!ctx.cr6.eq) goto loc_83337EAC;
	// sradi r11,r3,28
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s64 >> 28;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x83337e34
	if (ctx.cr6.lt) goto loc_83337E34;
	// lis r3,0
	ctx.r3.s64 = 0;
loc_83337E2C:
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x83337f08
	goto loc_83337F08;
loc_83337E34:
	// sradi r10,r11,16
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s64 >> 16;
	// b 0x83337ef8
	goto loc_83337EF8;
loc_83337E3C:
	// li r11,1
	ctx.r11.s64 = 1;
	// sradi r31,r3,6
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0x3F) != 0);
	ctx.r31.s64 = ctx.r3.s64 >> 6;
	// rldicr r11,r11,42,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// std r31,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r31.u64);
	// cmpd cr6,r31,r11
	ctx.cr6.compare<int64_t>(ctx.r31.s64, ctx.r11.s64, ctx.xer);
	// blt cr6,0x83337e5c
	if (ctx.cr6.lt) goto loc_83337E5C;
	// lis r3,240
	ctx.r3.s64 = 15728640;
	// b 0x83337f08
	goto loc_83337F08;
loc_83337E5C:
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,-23104(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -23104);
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * ctx.f0.f64;
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// sradi r10,r11,52
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0xFFFFFFFFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s64 >> 52;
	// cmpdi cr6,r10,1008
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 1008, ctx.xer);
	// ble cr6,0x83337ebc
	if (!ctx.cr6.gt) goto loc_83337EBC;
	// lis r10,32255
	ctx.r10.s64 = 2113863680;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rldicr r10,r10,31,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 31) & 0xFFFFFFFF80000000;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_83337E94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sradi r5,r11,32
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0xFFFFFFFF) != 0);
	ctx.r5.s64 = ctx.r11.s64 >> 32;
	// bl 0x83337d00
	ctx.lr = 0x83337EA0;
	sub_83337D00(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// beq cr6,0x83337eb4
	if (ctx.cr6.eq) goto loc_83337EB4;
loc_83337EAC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83337f08
	goto loc_83337F08;
loc_83337EB4:
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// b 0x83337f08
	goto loc_83337F08;
loc_83337EBC:
	// li r4,-1008
	ctx.r4.s64 = -1008;
	// bl 0x82cb5328
	ctx.lr = 0x83337EC4;
	sub_82CB5328(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x83337e94
	goto loc_83337E94;
loc_83337EDC:
	// sradi r11,r3,20
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s64 >> 20;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x83337ef4
	if (ctx.cr6.lt) goto loc_83337EF4;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// b 0x83337e2c
	goto loc_83337E2C;
loc_83337EF4:
	// sradi r10,r11,24
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0xFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s64 >> 24;
loc_83337EF8:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// sradi r11,r11,4
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s64 >> 4;
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
loc_83337F08:
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

__attribute__((alias("__imp__sub_83337F1C"))) PPC_WEAK_FUNC(sub_83337F1C);
PPC_FUNC_IMPL(__imp__sub_83337F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83337F20"))) PPC_WEAK_FUNC(sub_83337F20);
PPC_FUNC_IMPL(__imp__sub_83337F20) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,28
	ctx.r3.u64 = ctx.r3.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337F28"))) PPC_WEAK_FUNC(sub_83337F28);
PPC_FUNC_IMPL(__imp__sub_83337F28) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337F30"))) PPC_WEAK_FUNC(sub_83337F30);
PPC_FUNC_IMPL(__imp__sub_83337F30) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337F38"))) PPC_WEAK_FUNC(sub_83337F38);
PPC_FUNC_IMPL(__imp__sub_83337F38) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,20,12,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0xFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337F40"))) PPC_WEAK_FUNC(sub_83337F40);
PPC_FUNC_IMPL(__imp__sub_83337F40) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337F4C"))) PPC_WEAK_FUNC(sub_83337F4C);
PPC_FUNC_IMPL(__imp__sub_83337F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83337F50"))) PPC_WEAK_FUNC(sub_83337F50);
PPC_FUNC_IMPL(__imp__sub_83337F50) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337F5C"))) PPC_WEAK_FUNC(sub_83337F5C);
PPC_FUNC_IMPL(__imp__sub_83337F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83337F60"))) PPC_WEAK_FUNC(sub_83337F60);
PPC_FUNC_IMPL(__imp__sub_83337F60) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337F6C"))) PPC_WEAK_FUNC(sub_83337F6C);
PPC_FUNC_IMPL(__imp__sub_83337F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83337F70"))) PPC_WEAK_FUNC(sub_83337F70);
PPC_FUNC_IMPL(__imp__sub_83337F70) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337F94"))) PPC_WEAK_FUNC(sub_83337F94);
PPC_FUNC_IMPL(__imp__sub_83337F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83337F98"))) PPC_WEAK_FUNC(sub_83337F98);
PPC_FUNC_IMPL(__imp__sub_83337F98) {
	PPC_FUNC_PROLOGUE();
	// rlwimi r3,r4,0,28,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xF) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFF0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337FA0"))) PPC_WEAK_FUNC(sub_83337FA0);
PPC_FUNC_IMPL(__imp__sub_83337FA0) {
	PPC_FUNC_PROLOGUE();
	// rlwimi r3,r4,4,24,27
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0xF0) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFF0F);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337FA8"))) PPC_WEAK_FUNC(sub_83337FA8);
PPC_FUNC_IMPL(__imp__sub_83337FA8) {
	PPC_FUNC_PROLOGUE();
	// rlwimi r3,r4,8,20,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xF00) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF0FF);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337FB0"))) PPC_WEAK_FUNC(sub_83337FB0);
PPC_FUNC_IMPL(__imp__sub_83337FB0) {
	PPC_FUNC_PROLOGUE();
	// rlwimi r3,r4,12,0,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 12) & 0xFFFFF000) | (ctx.r3.u64 & 0xFFFFFFFF00000FFF);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337FB8"))) PPC_WEAK_FUNC(sub_83337FB8);
PPC_FUNC_IMPL(__imp__sub_83337FB8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// rlwimi r11,r4,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337FC8"))) PPC_WEAK_FUNC(sub_83337FC8);
PPC_FUNC_IMPL(__imp__sub_83337FC8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// rlwimi r11,r4,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337FD8"))) PPC_WEAK_FUNC(sub_83337FD8);
PPC_FUNC_IMPL(__imp__sub_83337FD8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rlwimi r11,r4,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83337FE8"))) PPC_WEAK_FUNC(sub_83337FE8);
PPC_FUNC_IMPL(__imp__sub_83337FE8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// srawi r10,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 4;
	// srawi r9,r4,12
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 12;
	// rlwimi r11,r4,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// stb r10,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
	// stb r9,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r9.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83338008"))) PPC_WEAK_FUNC(sub_83338008);
PPC_FUNC_IMPL(__imp__sub_83338008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x83338020
	if (ctx.cr6.lt) goto loc_83338020;
	// li r3,16383
	ctx.r3.s64 = 16383;
	// blr 
	return;
loc_83338020:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x83338038
	if (ctx.cr6.gt) goto loc_83338038;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83338038:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-17808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17808);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83338054"))) PPC_WEAK_FUNC(sub_83338054);
PPC_FUNC_IMPL(__imp__sub_83338054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83338058"))) PPC_WEAK_FUNC(sub_83338058);
PPC_FUNC_IMPL(__imp__sub_83338058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 22, ctx.xer);
	// beq cr6,0x833380ac
	if (ctx.cr6.eq) goto loc_833380AC;
	// cmpwi cr6,r4,23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 23, ctx.xer);
	// beq cr6,0x83338080
	if (ctx.cr6.eq) goto loc_83338080;
	// cmpwi cr6,r4,24
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 24, ctx.xer);
	// beq cr6,0x83338078
	if (ctx.cr6.eq) goto loc_83338078;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83338078:
	// srawi r3,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 2;
	// blr 
	return;
loc_83338080:
	// srawi r11,r3,20
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 20;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x83338098
	if (!ctx.cr6.eq) goto loc_83338098;
	// li r3,16383
	ctx.r3.s64 = 16383;
	// blr 
	return;
loc_83338098:
	// clrlwi r10,r3,12
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFFF;
	// subfic r11,r11,21
	ctx.xer.ca = ctx.r11.u32 <= 21;
	ctx.r11.s64 = 21 - ctx.r11.s64;
	// addis r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 1048576;
	// sraw r3,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r3.s64 = ctx.r10.s32 >> temp.u32;
	// blr 
	return;
loc_833380AC:
	// srawi r3,r3,10
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833380B4"))) PPC_WEAK_FUNC(sub_833380B4);
PPC_FUNC_IMPL(__imp__sub_833380B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833380B8"))) PPC_WEAK_FUNC(sub_833380B8);
PPC_FUNC_IMPL(__imp__sub_833380B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xF;
	// rlwinm r10,r3,4,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFE0;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// sraw. r3,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r3.s64 = ctx.r10.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x833380d4
	if (ctx.cr0.gt) goto loc_833380D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_833380D4:
	// cmpwi cr6,r3,16384
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16384, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,16383
	ctx.r3.s64 = 16383;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833380E4"))) PPC_WEAK_FUNC(sub_833380E4);
PPC_FUNC_IMPL(__imp__sub_833380E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833380E8"))) PPC_WEAK_FUNC(sub_833380E8);
PPC_FUNC_IMPL(__imp__sub_833380E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xF;
	// rldicr r10,r3,36,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 36) & 0xFFFFFFE000000000;
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// srad r11,r10,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r10.s64 < 0) & (((ctx.r10.s64 >> temp.u64) << temp.u64) != ctx.r10.s64);
	ctx.r11.s64 = ctx.r10.s64 >> temp.u64;
	// rldicr r3,r11,6,57
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0xFFFFFFFFFFFFFFC0;
	// b 0x83337de0
	sub_83337DE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83338104"))) PPC_WEAK_FUNC(sub_83338104);
PPC_FUNC_IMPL(__imp__sub_83338104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83338108"))) PPC_WEAK_FUNC(sub_83338108);
PPC_FUNC_IMPL(__imp__sub_83338108) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83338110"))) PPC_WEAK_FUNC(sub_83338110);
PPC_FUNC_IMPL(__imp__sub_83338110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xF;
	// rldicr r10,r3,36,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 36) & 0xFFFFFFE000000000;
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// srad r11,r10,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r10.s64 < 0) & (((ctx.r10.s64 >> temp.u64) << temp.u64) != ctx.r10.s64);
	ctx.r11.s64 = ctx.r10.s64 >> temp.u64;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-23096(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23096);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83338144"))) PPC_WEAK_FUNC(sub_83338144);
PPC_FUNC_IMPL(__imp__sub_83338144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83338148"))) PPC_WEAK_FUNC(sub_83338148);
PPC_FUNC_IMPL(__imp__sub_83338148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xF;
	// rldicr r10,r3,36,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 36) & 0xFFFFFFE000000000;
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// srad r11,r10,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r10.s64 < 0) & (((ctx.r10.s64 >> temp.u64) << temp.u64) != ctx.r10.s64);
	ctx.r11.s64 = ctx.r10.s64 >> temp.u64;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,-23104(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -23104);
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83338178"))) PPC_WEAK_FUNC(sub_83338178);
PPC_FUNC_IMPL(__imp__sub_83338178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,17708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17708);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x83338194
	if (ctx.cr6.lt) goto loc_83338194;
	// lis r3,2047
	ctx.r3.s64 = 134152192;
	// ori r3,r3,65534
	ctx.r3.u64 = ctx.r3.u64 | 65534;
	// blr 
	return;
loc_83338194:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-16048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x833381ac
	if (ctx.cr6.gt) goto loc_833381AC;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// blr 
	return;
loc_833381AC:
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// srawi r11,r11,23
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 23;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r11,r11,129
	ctx.xer.ca = ctx.r11.u32 <= 129;
	ctx.r11.s64 = 129 - ctx.r11.s64;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// ble cr6,0x833381cc
	if (!ctx.cr6.gt) goto loc_833381CC;
	// li r11,15
	ctx.r11.s64 = 15;
loc_833381CC:
	// addi r10,r11,25
	ctx.r10.s64 = ctx.r11.s64 + 25;
	// li r9,1
	ctx.r9.s64 = 1;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// rlwinm r10,r11,28,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF0000000;
	// sld r11,r9,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// clrlwi r11,r11,4
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83338214"))) PPC_WEAK_FUNC(sub_83338214);
PPC_FUNC_IMPL(__imp__sub_83338214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83338218"))) PPC_WEAK_FUNC(sub_83338218);
PPC_FUNC_IMPL(__imp__sub_83338218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f0,-15776(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -15776);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x83338234
	if (ctx.cr6.lt) goto loc_83338234;
	// lis r3,2047
	ctx.r3.s64 = 134152192;
	// ori r3,r3,65534
	ctx.r3.u64 = ctx.r3.u64 | 65534;
	// blr 
	return;
loc_83338234:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lfd f0,-104(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -104);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8333824c
	if (ctx.cr6.gt) goto loc_8333824C;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// blr 
	return;
loc_8333824C:
	// stfd f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// sradi r11,r11,52
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0xFFFFFFFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s64 >> 52;
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// subfic r11,r11,1025
	ctx.xer.ca = ctx.r11.u32 <= 1025;
	ctx.r11.s64 = 1025 - ctx.r11.s64;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// ble cr6,0x8333826c
	if (!ctx.cr6.gt) goto loc_8333826C;
	// li r11,15
	ctx.r11.s64 = 15;
loc_8333826C:
	// addi r10,r11,25
	ctx.r10.s64 = ctx.r11.s64 + 25;
	// li r9,1
	ctx.r9.s64 = 1;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// rlwinm r10,r11,28,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF0000000;
	// sld r11,r9,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fmul f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 * ctx.f1.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// clrlwi r11,r11,4
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833382B0"))) PPC_WEAK_FUNC(sub_833382B0);
PPC_FUNC_IMPL(__imp__sub_833382B0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,26,6,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833382B8"))) PPC_WEAK_FUNC(sub_833382B8);
PPC_FUNC_IMPL(__imp__sub_833382B8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r3,30,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0xF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bgt cr6,0x8333836c
	if (ctx.cr6.gt) goto loc_8333836C;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-23248
	ctx.r12.s64 = ctx.r12.s64 + -23248;
	// lbzx r0,r12,r10
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// lis r12,-31948
	ctx.r12.s64 = -2093744128;
	// addi r12,r12,-32016
	ctx.r12.s64 = ctx.r12.s64 + -32016;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_833382F0;
	case 1:
		goto loc_833382F0;
	case 2:
		goto loc_833382F0;
	case 3:
		goto loc_833382F0;
	case 4:
		goto loc_833382F8;
	case 5:
		goto loc_833382F8;
	case 6:
		goto loc_83338304;
	case 7:
		goto loc_83338304;
	case 8:
		goto loc_83338310;
	case 9:
		goto loc_8333831C;
	case 10:
		goto loc_83338328;
	case 11:
		goto loc_83338334;
	case 12:
		goto loc_83338340;
	case 13:
		goto loc_8333834C;
	case 14:
		goto loc_83338358;
	case 15:
		goto loc_83338364;
	default:
		__builtin_unreachable();
	}
loc_833382F0:
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// b 0x8333836c
	goto loc_8333836C;
loc_833382F8:
	// rlwinm r11,r3,1,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xE;
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// b 0x8333836c
	goto loc_8333836C;
loc_83338304:
	// rlwinm r11,r3,2,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x1C;
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
	// b 0x8333836c
	goto loc_8333836C;
loc_83338310:
	// rlwinm r11,r3,4,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0x30;
	// addi r11,r11,79
	ctx.r11.s64 = ctx.r11.s64 + 79;
	// b 0x8333836c
	goto loc_8333836C;
loc_8333831C:
	// rlwinm r11,r3,5,25,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0x60;
	// addi r11,r11,159
	ctx.r11.s64 = ctx.r11.s64 + 159;
	// b 0x8333836c
	goto loc_8333836C;
loc_83338328:
	// rlwinm r11,r3,6,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xC0;
	// addi r11,r11,319
	ctx.r11.s64 = ctx.r11.s64 + 319;
	// b 0x8333836c
	goto loc_8333836C;
loc_83338334:
	// rlwinm r11,r3,7,23,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0x180;
	// addi r11,r11,639
	ctx.r11.s64 = ctx.r11.s64 + 639;
	// b 0x8333836c
	goto loc_8333836C;
loc_83338340:
	// rlwinm r11,r3,8,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0x300;
	// addi r11,r11,1279
	ctx.r11.s64 = ctx.r11.s64 + 1279;
	// b 0x8333836c
	goto loc_8333836C;
loc_8333834C:
	// rlwinm r11,r3,9,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 9) & 0x600;
	// addi r11,r11,2559
	ctx.r11.s64 = ctx.r11.s64 + 2559;
	// b 0x8333836c
	goto loc_8333836C;
loc_83338358:
	// rlwinm r11,r3,10,20,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0xC00;
	// addi r11,r11,5119
	ctx.r11.s64 = ctx.r11.s64 + 5119;
	// b 0x8333836c
	goto loc_8333836C;
loc_83338364:
	// rlwinm r11,r3,11,19,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0x1800;
	// addi r11,r11,10239
	ctx.r11.s64 = ctx.r11.s64 + 10239;
loc_8333836C:
	// rlwinm r10,r3,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FFFFFF;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
	// rlwinm r11,r3,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FFFFFF;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,-23088(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -23088);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833383BC"))) PPC_WEAK_FUNC(sub_833383BC);
PPC_FUNC_IMPL(__imp__sub_833383BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833383C0"))) PPC_WEAK_FUNC(sub_833383C0);
PPC_FUNC_IMPL(__imp__sub_833383C0) {
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
	// bl 0x833382b8
	ctx.lr = 0x833383D0;
	sub_833382B8(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,-23088(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -23088);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83338404"))) PPC_WEAK_FUNC(sub_83338404);
PPC_FUNC_IMPL(__imp__sub_83338404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83338408"))) PPC_WEAK_FUNC(sub_83338408);
PPC_FUNC_IMPL(__imp__sub_83338408) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// blt cr6,0x833384f4
	if (ctx.cr6.lt) goto loc_833384F4;
	// cmpwi cr6,r4,32
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32, ctx.xer);
	// bge cr6,0x83338428
	if (!ctx.cr6.lt) goto loc_83338428;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r4,r11,5,31,27
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0xFFFFFFFFFFFFFFF1) | (ctx.r4.u64 & 0xE);
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// b 0x833384f4
	goto loc_833384F4;
loc_83338428:
	// cmpwi cr6,r4,64
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 64, ctx.xer);
	// bge cr6,0x83338440
	if (!ctx.cr6.lt) goto loc_83338440;
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwimi r4,r11,5,30,26
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0xFFFFFFFFFFFFFFE3) | (ctx.r4.u64 & 0x1C);
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// b 0x833384f4
	goto loc_833384F4;
loc_83338440:
	// cmpwi cr6,r4,128
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 128, ctx.xer);
	// bge cr6,0x83338458
	if (!ctx.cr6.lt) goto loc_83338458;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r4,r11,9,28,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 9) & 0xFFFFFFFFFFFFFFCF) | (ctx.r4.u64 & 0x30);
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// b 0x833384f4
	goto loc_833384F4;
loc_83338458:
	// cmpwi cr6,r4,256
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 256, ctx.xer);
	// bge cr6,0x83338470
	if (!ctx.cr6.lt) goto loc_83338470;
	// li r11,9
	ctx.r11.s64 = 9;
	// rlwimi r4,r11,7,27,24
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 7) & 0xFFFFFFFFFFFFFF9F) | (ctx.r4.u64 & 0x60);
	// srawi r4,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 5;
	// b 0x833384f4
	goto loc_833384F4;
loc_83338470:
	// cmpwi cr6,r4,512
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 512, ctx.xer);
	// bge cr6,0x83338488
	if (!ctx.cr6.lt) goto loc_83338488;
	// li r11,5
	ctx.r11.s64 = 5;
	// rlwimi r4,r11,9,26,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 9) & 0xFFFFFFFFFFFFFF3F) | (ctx.r4.u64 & 0xC0);
	// srawi r4,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 6;
	// b 0x833384f4
	goto loc_833384F4;
loc_83338488:
	// cmpwi cr6,r4,1024
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1024, ctx.xer);
	// bge cr6,0x833384a0
	if (!ctx.cr6.lt) goto loc_833384A0;
	// li r11,11
	ctx.r11.s64 = 11;
	// rlwimi r4,r11,9,25,22
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 9) & 0xFFFFFFFFFFFFFE7F) | (ctx.r4.u64 & 0x180);
	// srawi r4,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 7;
	// b 0x833384f4
	goto loc_833384F4;
loc_833384A0:
	// cmpwi cr6,r4,2048
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2048, ctx.xer);
	// bge cr6,0x833384b8
	if (!ctx.cr6.lt) goto loc_833384B8;
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwimi r4,r11,12,24,21
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0xFFFFFFFFFFFFFCFF) | (ctx.r4.u64 & 0x300);
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// b 0x833384f4
	goto loc_833384F4;
loc_833384B8:
	// cmpwi cr6,r4,4096
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4096, ctx.xer);
	// bge cr6,0x833384d0
	if (!ctx.cr6.lt) goto loc_833384D0;
	// li r11,13
	ctx.r11.s64 = 13;
	// rlwimi r4,r11,11,23,20
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 11) & 0xFFFFFFFFFFFFF9FF) | (ctx.r4.u64 & 0x600);
	// srawi r4,r4,9
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1FF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 9;
	// b 0x833384f4
	goto loc_833384F4;
loc_833384D0:
	// cmpwi cr6,r4,8192
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8192, ctx.xer);
	// bge cr6,0x833384e8
	if (!ctx.cr6.lt) goto loc_833384E8;
	// rlwinm r11,r4,0,20,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC00;
	// ori r11,r11,57344
	ctx.r11.u64 = ctx.r11.u64 | 57344;
	// srawi r4,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 10;
	// b 0x833384f4
	goto loc_833384F4;
loc_833384E8:
	// li r11,15
	ctx.r11.s64 = 15;
	// rlwimi r4,r11,13,21,18
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 13) & 0xFFFFFFFFFFFFE7FF) | (ctx.r4.u64 & 0x1800);
	// srawi r4,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 11;
loc_833384F4:
	// rlwinm r11,r3,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83338500"))) PPC_WEAK_FUNC(sub_83338500);
PPC_FUNC_IMPL(__imp__sub_83338500) {
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x83338058
	ctx.lr = 0x83338518;
	sub_83338058(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83338058
	ctx.lr = 0x83338524;
	sub_83338058(ctx, base);
	// subf r4,r8,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r8.s64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x83338408
	ctx.lr = 0x83338530;
	sub_83338408(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83338540"))) PPC_WEAK_FUNC(sub_83338540);
PPC_FUNC_IMPL(__imp__sub_83338540) {
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
	// bl 0x83338058
	ctx.lr = 0x83338550;
	sub_83338058(ctx, base);
	// rlwinm r3,r3,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83338564"))) PPC_WEAK_FUNC(sub_83338564);
PPC_FUNC_IMPL(__imp__sub_83338564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83338568"))) PPC_WEAK_FUNC(sub_83338568);
PPC_FUNC_IMPL(__imp__sub_83338568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xF;
	// rlwinm r10,r3,4,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFE0;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// sraw. r11,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x83338584
	if (ctx.cr0.gt) goto loc_83338584;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83338590
	goto loc_83338590;
loc_83338584:
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// blt cr6,0x83338590
	if (ctx.cr6.lt) goto loc_83338590;
	// li r11,16383
	ctx.r11.s64 = 16383;
loc_83338590:
	// rlwinm r10,r4,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xF;
	// rlwinm r9,r4,4,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFE0;
	// addi r10,r10,14
	ctx.r10.s64 = ctx.r10.s64 + 14;
	// sraw. r10,r9,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r10.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x833385ac
	if (ctx.cr0.gt) goto loc_833385AC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x833385b8
	goto loc_833385B8;
loc_833385AC:
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// blt cr6,0x833385b8
	if (ctx.cr6.lt) goto loc_833385B8;
	// li r10,16383
	ctx.r10.s64 = 16383;
loc_833385B8:
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83338408
	sub_83338408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833385C4"))) PPC_WEAK_FUNC(sub_833385C4);
PPC_FUNC_IMPL(__imp__sub_833385C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833385C8"))) PPC_WEAK_FUNC(sub_833385C8);
PPC_FUNC_IMPL(__imp__sub_833385C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xF;
	// rlwinm r10,r3,4,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFE0;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// sraw. r11,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x833385e4
	if (ctx.cr0.gt) goto loc_833385E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x833385f0
	goto loc_833385F0;
loc_833385E4:
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// blt cr6,0x833385f0
	if (ctx.cr6.lt) goto loc_833385F0;
	// li r11,16383
	ctx.r11.s64 = 16383;
loc_833385F0:
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833385F8"))) PPC_WEAK_FUNC(sub_833385F8);
PPC_FUNC_IMPL(__imp__sub_833385F8) {
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
	// bl 0x83338008
	ctx.lr = 0x83338608;
	sub_83338008(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// fmr f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x83338008
	ctx.lr = 0x83338614;
	sub_83338008(ctx, base);
	// subf r4,r10,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r10.s64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83338408
	ctx.lr = 0x83338620;
	sub_83338408(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

