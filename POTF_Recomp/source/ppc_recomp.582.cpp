#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832E7A08"))) PPC_WEAK_FUNC(sub_832E7A08);
PPC_FUNC_IMPL(__imp__sub_832E7A08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2036(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2036);
	// addi r11,r11,511
	ctx.r11.s64 = ctx.r11.s64 + 511;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7A1C"))) PPC_WEAK_FUNC(sub_832E7A1C);
PPC_FUNC_IMPL(__imp__sub_832E7A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E7A20"))) PPC_WEAK_FUNC(sub_832E7A20);
PPC_FUNC_IMPL(__imp__sub_832E7A20) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,511
	ctx.r11.s64 = ctx.r4.s64 + 511;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7A30"))) PPC_WEAK_FUNC(sub_832E7A30);
PPC_FUNC_IMPL(__imp__sub_832E7A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r3,1444(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1444);
	// lwz r11,1440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1440);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832E7A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r31,405
	ctx.r11.s64 = ctx.r31.s64 + 405;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7A80"))) PPC_WEAK_FUNC(sub_832E7A80);
PPC_FUNC_IMPL(__imp__sub_832E7A80) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,405
	ctx.r10.s64 = ctx.r4.s64 + 405;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,1444(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// lwz r11,1436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1436);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832E7AA8"))) PPC_WEAK_FUNC(sub_832E7AA8);
PPC_FUNC_IMPL(__imp__sub_832E7AA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7AAC"))) PPC_WEAK_FUNC(sub_832E7AAC);
PPC_FUNC_IMPL(__imp__sub_832E7AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E7AB0"))) PPC_WEAK_FUNC(sub_832E7AB0);
PPC_FUNC_IMPL(__imp__sub_832E7AB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7AB8"))) PPC_WEAK_FUNC(sub_832E7AB8);
PPC_FUNC_IMPL(__imp__sub_832E7AB8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// lwz r3,-4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// b 0x832e7378
	sub_832E7378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832E7ACC"))) PPC_WEAK_FUNC(sub_832E7ACC);
PPC_FUNC_IMPL(__imp__sub_832E7ACC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7AD0"))) PPC_WEAK_FUNC(sub_832E7AD0);
PPC_FUNC_IMPL(__imp__sub_832E7AD0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bge cr6,0x832e7ae8
	if (!ctx.cr6.lt) goto loc_832E7AE8;
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_832E7AE8:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7AF8"))) PPC_WEAK_FUNC(sub_832E7AF8);
PPC_FUNC_IMPL(__imp__sub_832E7AF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7B10"))) PPC_WEAK_FUNC(sub_832E7B10);
PPC_FUNC_IMPL(__imp__sub_832E7B10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7B1C"))) PPC_WEAK_FUNC(sub_832E7B1C);
PPC_FUNC_IMPL(__imp__sub_832E7B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E7B20"))) PPC_WEAK_FUNC(sub_832E7B20);
PPC_FUNC_IMPL(__imp__sub_832E7B20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7B28"))) PPC_WEAK_FUNC(sub_832E7B28);
PPC_FUNC_IMPL(__imp__sub_832E7B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,14368
	ctx.r11.s64 = ctx.r11.s64 + 14368;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7B38"))) PPC_WEAK_FUNC(sub_832E7B38);
PPC_FUNC_IMPL(__imp__sub_832E7B38) {
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
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832e7248
	ctx.lr = 0x832E7B58;
	sub_832E7248(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_832E7B78"))) PPC_WEAK_FUNC(sub_832E7B78);
PPC_FUNC_IMPL(__imp__sub_832E7B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,14376
	ctx.r11.s64 = ctx.r11.s64 + 14376;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7B88"))) PPC_WEAK_FUNC(sub_832E7B88);
PPC_FUNC_IMPL(__imp__sub_832E7B88) {
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
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832e7248
	ctx.lr = 0x832E7BA8;
	sub_832E7248(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_832E7BC8"))) PPC_WEAK_FUNC(sub_832E7BC8);
PPC_FUNC_IMPL(__imp__sub_832E7BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,14380
	ctx.r11.s64 = ctx.r11.s64 + 14380;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7BD8"))) PPC_WEAK_FUNC(sub_832E7BD8);
PPC_FUNC_IMPL(__imp__sub_832E7BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r11,r11,14412
	ctx.r11.s64 = ctx.r11.s64 + 14412;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7BF4"))) PPC_WEAK_FUNC(sub_832E7BF4);
PPC_FUNC_IMPL(__imp__sub_832E7BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E7BF8"))) PPC_WEAK_FUNC(sub_832E7BF8);
PPC_FUNC_IMPL(__imp__sub_832E7BF8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1508, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7C04"))) PPC_WEAK_FUNC(sub_832E7C04);
PPC_FUNC_IMPL(__imp__sub_832E7C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E7C08"))) PPC_WEAK_FUNC(sub_832E7C08);
PPC_FUNC_IMPL(__imp__sub_832E7C08) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1512, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7C14"))) PPC_WEAK_FUNC(sub_832E7C14);
PPC_FUNC_IMPL(__imp__sub_832E7C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E7C18"))) PPC_WEAK_FUNC(sub_832E7C18);
PPC_FUNC_IMPL(__imp__sub_832E7C18) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1516, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7C24"))) PPC_WEAK_FUNC(sub_832E7C24);
PPC_FUNC_IMPL(__imp__sub_832E7C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E7C28"))) PPC_WEAK_FUNC(sub_832E7C28);
PPC_FUNC_IMPL(__imp__sub_832E7C28) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1520, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7C34"))) PPC_WEAK_FUNC(sub_832E7C34);
PPC_FUNC_IMPL(__imp__sub_832E7C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E7C38"))) PPC_WEAK_FUNC(sub_832E7C38);
PPC_FUNC_IMPL(__imp__sub_832E7C38) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,1524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1524, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7C44"))) PPC_WEAK_FUNC(sub_832E7C44);
PPC_FUNC_IMPL(__imp__sub_832E7C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E7C48"))) PPC_WEAK_FUNC(sub_832E7C48);
PPC_FUNC_IMPL(__imp__sub_832E7C48) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,1444(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// lwz r11,1436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1436);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832E7C5C"))) PPC_WEAK_FUNC(sub_832E7C5C);
PPC_FUNC_IMPL(__imp__sub_832E7C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E7C60"))) PPC_WEAK_FUNC(sub_832E7C60);
PPC_FUNC_IMPL(__imp__sub_832E7C60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1448(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1448);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7C68"))) PPC_WEAK_FUNC(sub_832E7C68);
PPC_FUNC_IMPL(__imp__sub_832E7C68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1452(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1452);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7C70"))) PPC_WEAK_FUNC(sub_832E7C70);
PPC_FUNC_IMPL(__imp__sub_832E7C70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1456(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1456);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7C78"))) PPC_WEAK_FUNC(sub_832E7C78);
PPC_FUNC_IMPL(__imp__sub_832E7C78) {
	PPC_FUNC_PROLOGUE();
	// stw r4,2036(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2036, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7C80"))) PPC_WEAK_FUNC(sub_832E7C80);
PPC_FUNC_IMPL(__imp__sub_832E7C80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1536(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1536);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7C88"))) PPC_WEAK_FUNC(sub_832E7C88);
PPC_FUNC_IMPL(__imp__sub_832E7C88) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,2136(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2136);
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,2136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7CA0"))) PPC_WEAK_FUNC(sub_832E7CA0);
PPC_FUNC_IMPL(__imp__sub_832E7CA0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,2136(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2136);
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// stw r11,2136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7CB8"))) PPC_WEAK_FUNC(sub_832E7CB8);
PPC_FUNC_IMPL(__imp__sub_832E7CB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,2136(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2136);
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7CD8"))) PPC_WEAK_FUNC(sub_832E7CD8);
PPC_FUNC_IMPL(__imp__sub_832E7CD8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1364, ctx.r4.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82ff1e60
	sub_82FF1E60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832E7CE8"))) PPC_WEAK_FUNC(sub_832E7CE8);
PPC_FUNC_IMPL(__imp__sub_832E7CE8) {
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
	// lwz r3,1444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// lwz r11,1440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832E7D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832e7d28
	if (!ctx.cr0.eq) goto loc_832E7D28;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r11.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82ff1e60
	ctx.lr = 0x832E7D28;
	sub_82FF1E60(ctx, base);
loc_832E7D28:
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

__attribute__((alias("__imp__sub_832E7D3C"))) PPC_WEAK_FUNC(sub_832E7D3C);
PPC_FUNC_IMPL(__imp__sub_832E7D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E7D40"))) PPC_WEAK_FUNC(sub_832E7D40);
PPC_FUNC_IMPL(__imp__sub_832E7D40) {
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
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832e7248
	ctx.lr = 0x832E7D60;
	sub_832E7248(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_832E7D80"))) PPC_WEAK_FUNC(sub_832E7D80);
PPC_FUNC_IMPL(__imp__sub_832E7D80) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// lwz r3,-4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// b 0x832e7378
	sub_832E7378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832E7D94"))) PPC_WEAK_FUNC(sub_832E7D94);
PPC_FUNC_IMPL(__imp__sub_832E7D94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7D98"))) PPC_WEAK_FUNC(sub_832E7D98);
PPC_FUNC_IMPL(__imp__sub_832E7D98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2080(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2080);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7DA0"))) PPC_WEAK_FUNC(sub_832E7DA0);
PPC_FUNC_IMPL(__imp__sub_832E7DA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2080(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2080);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7DAC"))) PPC_WEAK_FUNC(sub_832E7DAC);
PPC_FUNC_IMPL(__imp__sub_832E7DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E7DB0"))) PPC_WEAK_FUNC(sub_832E7DB0);
PPC_FUNC_IMPL(__imp__sub_832E7DB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2084(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2084);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7DB8"))) PPC_WEAK_FUNC(sub_832E7DB8);
PPC_FUNC_IMPL(__imp__sub_832E7DB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2092(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2092);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7DC0"))) PPC_WEAK_FUNC(sub_832E7DC0);
PPC_FUNC_IMPL(__imp__sub_832E7DC0) {
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
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832e7248
	ctx.lr = 0x832E7DE0;
	sub_832E7248(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_832E7E00"))) PPC_WEAK_FUNC(sub_832E7E00);
PPC_FUNC_IMPL(__imp__sub_832E7E00) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// lwz r3,-4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// b 0x832e7378
	sub_832E7378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832E7E14"))) PPC_WEAK_FUNC(sub_832E7E14);
PPC_FUNC_IMPL(__imp__sub_832E7E14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7E18"))) PPC_WEAK_FUNC(sub_832E7E18);
PPC_FUNC_IMPL(__imp__sub_832E7E18) {
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
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x832E7E38;
	sub_82CB16F0(ctx, base);
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

__attribute__((alias("__imp__sub_832E7E50"))) PPC_WEAK_FUNC(sub_832E7E50);
PPC_FUNC_IMPL(__imp__sub_832E7E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,362
	ctx.r11.s64 = ctx.r4.s64 + 362;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832e7ed8
	if (!ctx.cr6.eq) goto loc_832E7ED8;
	// lwz r3,1444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r11,1440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832E7E90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832e7ed0
	if (ctx.cr0.eq) goto loc_832E7ED0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// b 0x832e7ed4
	goto loc_832E7ED4;
loc_832E7ED0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_832E7ED4:
	// stwx r10,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
loc_832E7ED8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7EF0"))) PPC_WEAK_FUNC(sub_832E7EF0);
PPC_FUNC_IMPL(__imp__sub_832E7EF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2136);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// li r9,16
	ctx.r9.s64 = 16;
	// rlwinm r8,r11,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// ori r11,r10,65535
	ctx.r11.u64 = ctx.r10.u64 | 65535;
	// stw r9,2728(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2728, ctx.r9.u32);
	// rlwinm r8,r8,0,26,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r11,2712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2712, ctx.r11.u32);
	// ori r10,r8,61370
	ctx.r10.u64 = ctx.r8.u64 | 61370;
	// stw r11,2716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2716, ctx.r11.u32);
	// stw r11,2720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2720, ctx.r11.u32);
	// stw r10,2136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2136, ctx.r10.u32);
	// stw r11,2724(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2724, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E7F28"))) PPC_WEAK_FUNC(sub_832E7F28);
PPC_FUNC_IMPL(__imp__sub_832E7F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832E7F30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832e7f54
	if (ctx.cr0.eq) goto loc_832E7F54;
	// lwz r4,1360(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1360);
	// lwz r3,1444(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1444);
	// lwz r11,1436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1436);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832E7F54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832E7F54:
	// addi r31,r30,1448
	ctx.r31.s64 = ctx.r30.s64 + 1448;
	// li r29,3
	ctx.r29.s64 = 3;
loc_832E7F5C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832e7f88
	if (ctx.cr6.eq) goto loc_832E7F88;
	// bl 0x8331c1e8
	ctx.lr = 0x832E7F6C;
	sub_8331C1E8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,1444(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1444);
	// lwz r11,1436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1436);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832E7F80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832E7F88:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x832e7f5c
	if (!ctx.cr0.eq) goto loc_832E7F5C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832E7F9C"))) PPC_WEAK_FUNC(sub_832E7F9C);
PPC_FUNC_IMPL(__imp__sub_832E7F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E7FA0"))) PPC_WEAK_FUNC(sub_832E7FA0);
PPC_FUNC_IMPL(__imp__sub_832E7FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832E7FA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r6,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r6.u64);
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r3,1488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x832e7fe4
	if (!ctx.cr6.eq) goto loc_832E7FE4;
	// lfs f1,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832E7FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x832e802c
	goto loc_832E802C;
loc_832E7FE4:
	// lha r28,222(r1)
	ctx.r28.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 222));
	// lha r27,220(r1)
	ctx.r27.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 220));
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832E8000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-19104
	ctx.r11.s64 = ctx.r11.s64 + -19104;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r4,r9,14444
	ctx.r4.s64 = ctx.r9.s64 + 14444;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832e7968
	ctx.lr = 0x832E802C;
	sub_832E7968(ctx, base);
loc_832E802C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832E8034"))) PPC_WEAK_FUNC(sub_832E8034);
PPC_FUNC_IMPL(__imp__sub_832E8034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E8038"))) PPC_WEAK_FUNC(sub_832E8038);
PPC_FUNC_IMPL(__imp__sub_832E8038) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r10,1380(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1380);
	// lwz r4,1536(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1536);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x832e8060
	if (ctx.cr0.eq) goto loc_832E8060;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x832e8064
	goto loc_832E8064;
loc_832E8060:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_832E8064:
	// bl 0x83215cf0
	ctx.lr = 0x832E8068;
	sub_83215CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x832e8094
	if (ctx.cr6.eq) goto loc_832E8094;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,14240
	ctx.r6.s64 = ctx.r11.s64 + 14240;
	// addi r5,r10,11372
	ctx.r5.s64 = ctx.r10.s64 + 11372;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,561
	ctx.r7.s64 = 561;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832E8094;
	sub_8320CF10(ctx, base);
loc_832E8094:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E80A4"))) PPC_WEAK_FUNC(sub_832E80A4);
PPC_FUNC_IMPL(__imp__sub_832E80A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E80A8"))) PPC_WEAK_FUNC(sub_832E80A8);
PPC_FUNC_IMPL(__imp__sub_832E80A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832E80B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r4,r11,14504
	ctx.r4.s64 = ctx.r11.s64 + 14504;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x832e7968
	ctx.lr = 0x832E80E0;
	sub_832E7968(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x832e7ce8
	ctx.lr = 0x832E80E8;
	sub_832E7CE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// lbz r11,1380(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1380);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832e8134
	if (ctx.cr0.eq) goto loc_832E8134;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x832e8138
	goto loc_832E8138;
loc_832E8134:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_832E8138:
	// bl 0x83216420
	ctx.lr = 0x832E813C;
	sub_83216420(ctx, base);
	// lwz r3,1444(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1444);
	// lwz r11,1436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1436);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832E8150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832E8158"))) PPC_WEAK_FUNC(sub_832E8158);
PPC_FUNC_IMPL(__imp__sub_832E8158) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,1536(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1536);
	// bl 0x83215cf0
	ctx.lr = 0x832E8174;
	sub_83215CF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832e81a0
	if (ctx.cr0.eq) goto loc_832E81A0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,14240
	ctx.r6.s64 = ctx.r11.s64 + 14240;
	// addi r5,r10,11372
	ctx.r5.s64 = ctx.r10.s64 + 11372;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,739
	ctx.r7.s64 = 739;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832E81A0;
	sub_8320CF10(ctx, base);
loc_832E81A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E81B0"))) PPC_WEAK_FUNC(sub_832E81B0);
PPC_FUNC_IMPL(__imp__sub_832E81B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8331c420
	ctx.lr = 0x832E81D0;
	sub_8331C420(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832e81ec
	if (ctx.cr0.eq) goto loc_832E81EC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832e81ec
	if (ctx.cr6.eq) goto loc_832E81EC;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x832e7378
	ctx.lr = 0x832E81EC;
	sub_832E7378(ctx, base);
loc_832E81EC:
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

__attribute__((alias("__imp__sub_832E8208"))) PPC_WEAK_FUNC(sub_832E8208);
PPC_FUNC_IMPL(__imp__sub_832E8208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,14376
	ctx.r11.s64 = ctx.r11.s64 + 14376;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E8218"))) PPC_WEAK_FUNC(sub_832E8218);
PPC_FUNC_IMPL(__imp__sub_832E8218) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,1448
	ctx.r11.s64 = ctx.r3.s64 + 1448;
	// li r10,3
	ctx.r10.s64 = 3;
loc_832E8220:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,2136(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2136);
	// rlwinm r9,r9,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x1;
	// stb r9,40(r8)
	PPC_STORE_U8(ctx.r8.u32 + 40, ctx.r9.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,2136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2136);
	// rlwinm r8,r8,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x1;
	// stb r8,40(r9)
	PPC_STORE_U8(ctx.r9.u32 + 40, ctx.r8.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,2136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2136);
	// rlwinm r8,r8,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x1;
	// stb r8,40(r9)
	PPC_STORE_U8(ctx.r9.u32 + 40, ctx.r8.u8);
	// bne 0x832e8220
	if (!ctx.cr0.eq) goto loc_832E8220;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E8260"))) PPC_WEAK_FUNC(sub_832E8260);
PPC_FUNC_IMPL(__imp__sub_832E8260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8331d418
	ctx.lr = 0x832E8280;
	sub_8331D418(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832e829c
	if (ctx.cr0.eq) goto loc_832E829C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832e829c
	if (ctx.cr6.eq) goto loc_832E829C;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x832e7378
	ctx.lr = 0x832E829C;
	sub_832E7378(ctx, base);
loc_832E829C:
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

__attribute__((alias("__imp__sub_832E82B8"))) PPC_WEAK_FUNC(sub_832E82B8);
PPC_FUNC_IMPL(__imp__sub_832E82B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x83318eb8
	ctx.lr = 0x832E82D8;
	sub_83318EB8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832e82f4
	if (ctx.cr0.eq) goto loc_832E82F4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832e82f4
	if (ctx.cr6.eq) goto loc_832E82F4;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x832e7378
	ctx.lr = 0x832E82F4;
	sub_832E7378(ctx, base);
loc_832E82F4:
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

__attribute__((alias("__imp__sub_832E8310"))) PPC_WEAK_FUNC(sub_832E8310);
PPC_FUNC_IMPL(__imp__sub_832E8310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832e78b0
	ctx.lr = 0x832E8348;
	sub_832E78B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E8358"))) PPC_WEAK_FUNC(sub_832E8358);
PPC_FUNC_IMPL(__imp__sub_832E8358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832E8360;
	__savegprlr_27(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x832e83c4
	if (!ctx.cr6.gt) goto loc_832E83C4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r29,1496(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r28,r11,-18112
	ctx.r28.s64 = ctx.r11.s64 + -18112;
loc_832E8394:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832E83A4;
	sub_82CB1160(ctx, base);
	// stb r27,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r27.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832e7968
	ctx.lr = 0x832E83B8;
	sub_832E7968(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,128
	ctx.r29.s64 = ctx.r29.s64 + 128;
	// bne 0x832e8394
	if (!ctx.cr0.eq) goto loc_832E8394;
loc_832E83C4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23280
	ctx.r4.s64 = ctx.r11.s64 + 23280;
	// bl 0x832e7968
	ctx.lr = 0x832E83D4;
	sub_832E7968(ctx, base);
	// stw r27,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r27.u32);
	// stw r27,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r27.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832E83E4"))) PPC_WEAK_FUNC(sub_832E83E4);
PPC_FUNC_IMPL(__imp__sub_832E83E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E83E8"))) PPC_WEAK_FUNC(sub_832E83E8);
PPC_FUNC_IMPL(__imp__sub_832E83E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832E83F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-9648
	ctx.r31.s64 = ctx.r11.s64 + -9648;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832e8464
	if (ctx.cr6.eq) goto loc_832E8464;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb2578
	ctx.lr = 0x832E8420;
	sub_82CB2578(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r29,0
	ctx.r29.s64 = 0;
	// stbx r29,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r29.u8);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832e8464
	if (ctx.cr0.eq) goto loc_832E8464;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832e8464
	if (!ctx.cr6.eq) goto loc_832E8464;
	// lbz r11,1368(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1368);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832e8464
	if (ctx.cr0.eq) goto loc_832E8464;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,14356
	ctx.r3.s64 = ctx.r11.s64 + 14356;
	// bl 0x8320d2e0
	ctx.lr = 0x832E845C;
	sub_8320D2E0(ctx, base);
	// stw r3,1372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1372, ctx.r3.u32);
	// stb r29,1368(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1368, ctx.r29.u8);
loc_832E8464:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832E846C"))) PPC_WEAK_FUNC(sub_832E846C);
PPC_FUNC_IMPL(__imp__sub_832E846C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E8470"))) PPC_WEAK_FUNC(sub_832E8470);
PPC_FUNC_IMPL(__imp__sub_832E8470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832e83e8
	ctx.lr = 0x832E84B0;
	sub_832E83E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832e7978
	ctx.lr = 0x832E84B8;
	sub_832E7978(ctx, base);
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

__attribute__((alias("__imp__sub_832E84CC"))) PPC_WEAK_FUNC(sub_832E84CC);
PPC_FUNC_IMPL(__imp__sub_832E84CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E84D0"))) PPC_WEAK_FUNC(sub_832E84D0);
PPC_FUNC_IMPL(__imp__sub_832E84D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832E84D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r30,1620
	ctx.r11.s64 = ctx.r30.s64 + 1620;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r31,2732(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2732, ctx.r31.u32);
	// stw r31,1364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1364, ctx.r31.u32);
	// stw r9,2036(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2036, ctx.r9.u32);
	// stw r31,2032(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2032, ctx.r31.u32);
	// stb r31,2029(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2029, ctx.r31.u8);
	// stb r31,2025(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2025, ctx.r31.u8);
	// stb r31,2026(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2026, ctx.r31.u8);
	// stb r31,2028(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2028, ctx.r31.u8);
	// stb r31,2027(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2027, ctx.r31.u8);
	// stb r31,2030(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2030, ctx.r31.u8);
	// stb r31,2024(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2024, ctx.r31.u8);
	// stw r31,2124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2124, ctx.r31.u32);
	// stw r31,2040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2040, ctx.r31.u32);
loc_832E8524:
	// stw r31,-80(r11)
	PPC_STORE_U32(ctx.r11.u32 + -80, ctx.r31.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r31.u32);
	// stw r31,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r31.u32);
	// stw r31,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r31.u32);
	// stw r31,424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 424, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x832e8524
	if (!ctx.cr0.eq) goto loc_832E8524;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_832E854C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832e7e50
	ctx.lr = 0x832E8558;
	sub_832E7E50(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// blt cr6,0x832e854c
	if (ctx.cr6.lt) goto loc_832E854C;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// lwz r3,1448(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1448);
	// bl 0x832e7248
	ctx.lr = 0x832E8570;
	sub_832E7248(ctx, base);
	// stw r3,1496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1496, ctx.r3.u32);
	// stw r31,1500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1500, ctx.r31.u32);
	// stw r31,1504(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1504, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832E8584"))) PPC_WEAK_FUNC(sub_832E8584);
PPC_FUNC_IMPL(__imp__sub_832E8584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E8588"))) PPC_WEAK_FUNC(sub_832E8588);
PPC_FUNC_IMPL(__imp__sub_832E8588) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,1376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1376, ctx.r11.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r11,1380(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1380, ctx.r11.u8);
	// stw r11,1388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1388, ctx.r11.u32);
	// stb r11,1393(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1393, ctx.r11.u8);
	// stb r11,1392(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1392, ctx.r11.u8);
	// stb r11,1394(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1394, ctx.r11.u8);
	// stw r11,1400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1400, ctx.r11.u32);
	// stb r10,1395(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1395, ctx.r10.u8);
	// stb r11,1396(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1396, ctx.r11.u8);
	// stw r11,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r11.u32);
	// stw r11,1408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1408, ctx.r11.u32);
	// stw r10,1412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1412, ctx.r10.u32);
	// stw r11,1416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1416, ctx.r11.u32);
	// stw r11,1420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1420, ctx.r11.u32);
	// stw r11,1424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1424, ctx.r11.u32);
	// stw r11,1428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1428, ctx.r11.u32);
	// stw r11,1432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1432, ctx.r11.u32);
	// stw r11,1508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1508, ctx.r11.u32);
	// stw r11,1512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1512, ctx.r11.u32);
	// stw r11,1516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1516, ctx.r11.u32);
	// stw r11,1520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1520, ctx.r11.u32);
	// stw r9,1524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1524, ctx.r9.u32);
	// stw r8,1528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1528, ctx.r8.u32);
	// stw r11,1492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1492, ctx.r11.u32);
	// stw r11,2708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2708, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E8600"))) PPC_WEAK_FUNC(sub_832E8600);
PPC_FUNC_IMPL(__imp__sub_832E8600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832E8608;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r28,1448(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832e7248
	ctx.lr = 0x832E8628;
	sub_832E7248(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x832e8654
	if (ctx.cr0.eq) goto loc_832E8654;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r10,r10,14412
	ctx.r10.s64 = ctx.r10.s64 + 14412;
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x832e8658
	goto loc_832E8658;
loc_832E8654:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832E8658:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832E8660"))) PPC_WEAK_FUNC(sub_832E8660);
PPC_FUNC_IMPL(__imp__sub_832E8660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832E8668;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,14504
	ctx.r4.s64 = ctx.r11.s64 + 14504;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x832e7968
	ctx.lr = 0x832E8698;
	sub_832E7968(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x832e7ce8
	ctx.lr = 0x832E86A0;
	sub_832E7CE8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r30,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r30.u32);
	// stw r29,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r29.u32);
	// stw r27,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r27.u32);
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// stw r10,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r10.u32);
	// stw r9,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r9.u32);
	// stw r8,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r8.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83216420
	ctx.lr = 0x832E86E0;
	sub_83216420(ctx, base);
	// lwz r3,1444(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1444);
	// lwz r11,1436(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1436);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832E86F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832E86FC"))) PPC_WEAK_FUNC(sub_832E86FC);
PPC_FUNC_IMPL(__imp__sub_832E86FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E8700"))) PPC_WEAK_FUNC(sub_832E8700);
PPC_FUNC_IMPL(__imp__sub_832E8700) {
	PPC_FUNC_PROLOGUE();
	// li r9,4095
	ctx.r9.s64 = 4095;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addi r7,r7,14548
	ctx.r7.s64 = ctx.r7.s64 + 14548;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E8750"))) PPC_WEAK_FUNC(sub_832E8750);
PPC_FUNC_IMPL(__imp__sub_832E8750) {
	PPC_FUNC_PROLOGUE();
	// li r11,256
	ctx.r11.s64 = 256;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,31
	ctx.r9.s64 = 31;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E876C"))) PPC_WEAK_FUNC(sub_832E876C);
PPC_FUNC_IMPL(__imp__sub_832E876C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E8770"))) PPC_WEAK_FUNC(sub_832E8770);
PPC_FUNC_IMPL(__imp__sub_832E8770) {
	PPC_FUNC_PROLOGUE();
	// li r11,256
	ctx.r11.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E878C"))) PPC_WEAK_FUNC(sub_832E878C);
PPC_FUNC_IMPL(__imp__sub_832E878C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E8790"))) PPC_WEAK_FUNC(sub_832E8790);
PPC_FUNC_IMPL(__imp__sub_832E8790) {
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
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,14376
	ctx.r11.s64 = ctx.r11.s64 + 14376;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x832E87C0;
	sub_82CB16F0(ctx, base);
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

__attribute__((alias("__imp__sub_832E87D8"))) PPC_WEAK_FUNC(sub_832E87D8);
PPC_FUNC_IMPL(__imp__sub_832E87D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// addi r11,r11,14556
	ctx.r11.s64 = ctx.r11.s64 + 14556;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E87F0"))) PPC_WEAK_FUNC(sub_832E87F0);
PPC_FUNC_IMPL(__imp__sub_832E87F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x832E881C;
	sub_82CB16F0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8208, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,14588
	ctx.r11.s64 = ctx.r11.s64 + 14588;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E8848"))) PPC_WEAK_FUNC(sub_832E8848);
PPC_FUNC_IMPL(__imp__sub_832E8848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E884C"))) PPC_WEAK_FUNC(sub_832E884C);
PPC_FUNC_IMPL(__imp__sub_832E884C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E8850"))) PPC_WEAK_FUNC(sub_832E8850);
PPC_FUNC_IMPL(__imp__sub_832E8850) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x832e7f28
	sub_832E7F28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832E8858"))) PPC_WEAK_FUNC(sub_832E8858);
PPC_FUNC_IMPL(__imp__sub_832E8858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832E8860;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r8.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// ori r8,r4,61370
	ctx.r8.u64 = ctx.r4.u64 | 61370;
	// stw r9,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r9.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r6,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r6.u32);
	// li r30,16
	ctx.r30.s64 = 16;
	// stw r5,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r5.u32);
	// stw r11,2712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2712, ctx.r11.u32);
	// li r4,52
	ctx.r4.s64 = 52;
	// stb r10,1368(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1368, ctx.r10.u8);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stb r10,2128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2128, ctx.r10.u8);
	// stb r10,2129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2129, ctx.r10.u8);
	// stw r29,2736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2736, ctx.r29.u32);
	// stw r8,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r8.u32);
	// stw r11,2716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2716, ctx.r11.u32);
	// stw r11,2720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2720, ctx.r11.u32);
	// stw r11,2724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2724, ctx.r11.u32);
	// stw r30,2728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2728, ctx.r30.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x832E88D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832e892c
	if (ctx.cr0.eq) goto loc_832E892C;
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r9,4095
	ctx.r9.s64 = 4095;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// addi r11,r8,14548
	ctx.r11.s64 = ctx.r8.s64 + 14548;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// b 0x832e8930
	goto loc_832E8930;
loc_832E892C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_832E8930:
	// stw r11,1360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1360, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r29.u32);
	// stw r29,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r29.u32);
	// stw r29,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r29.u32);
	// bl 0x832e84d0
	ctx.lr = 0x832E8948;
	sub_832E84D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832e8588
	ctx.lr = 0x832E8950;
	sub_832E8588(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832E8958"))) PPC_WEAK_FUNC(sub_832E8958);
PPC_FUNC_IMPL(__imp__sub_832E8958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832E8960;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,14664
	ctx.r6.s64 = ctx.r11.s64 + 14664;
	// addi r5,r10,14656
	ctx.r5.s64 = ctx.r10.s64 + 14656;
	// addi r4,r9,14620
	ctx.r4.s64 = ctx.r9.s64 + 14620;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x832e8470
	ctx.lr = 0x832E8984;
	sub_832E8470(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r29,2152
	ctx.r31.s64 = ctx.r29.s64 + 2152;
	// li r30,16
	ctx.r30.s64 = 16;
	// addi r28,r11,14592
	ctx.r28.s64 = ctx.r11.s64 + 14592;
loc_832E8994:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r7,-8(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82cb61f0
	ctx.lr = 0x832E89AC;
	sub_82CB61F0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832e8470
	ctx.lr = 0x832E89B8;
	sub_832E8470(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// bne 0x832e8994
	if (!ctx.cr0.eq) goto loc_832E8994;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832E89CC"))) PPC_WEAK_FUNC(sub_832E89CC);
PPC_FUNC_IMPL(__imp__sub_832E89CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E89D0"))) PPC_WEAK_FUNC(sub_832E89D0);
PPC_FUNC_IMPL(__imp__sub_832E89D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x832E89D8;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// bl 0x832e8218
	ctx.lr = 0x832E89E8;
	sub_832E8218(ctx, base);
	// addi r11,r31,2144
	ctx.r11.s64 = ctx.r31.s64 + 2144;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r21,0
	ctx.r21.s64 = 0;
loc_832E89F4:
	// stw r21,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r21.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r21,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r21.u64);
	// stb r21,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r21.u8);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bne 0x832e89f4
	if (!ctx.cr0.eq) goto loc_832E89F4;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lwz r30,1448(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// addi r10,r10,14880
	ctx.r10.s64 = ctx.r10.s64 + 14880;
	// lis r3,-32247
	ctx.r3.s64 = -2113339392;
	// lis r28,-32247
	ctx.r28.s64 = -2113339392;
	// stw r10,2180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2180, ctx.r10.u32);
	// lis r27,-32247
	ctx.r27.s64 = -2113339392;
	// lis r26,-32247
	ctx.r26.s64 = -2113339392;
	// addi r20,r4,14868
	ctx.r20.s64 = ctx.r4.s64 + 14868;
	// addi r19,r3,14852
	ctx.r19.s64 = ctx.r3.s64 + 14852;
	// addi r4,r28,14836
	ctx.r4.s64 = ctx.r28.s64 + 14836;
	// stw r20,2372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2372, ctx.r20.u32);
	// addi r3,r27,14824
	ctx.r3.s64 = ctx.r27.s64 + 14824;
	// stw r19,2396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2396, ctx.r19.u32);
	// addi r10,r26,14812
	ctx.r10.s64 = ctx.r26.s64 + 14812;
	// stw r4,2444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2444, ctx.r4.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r3,2468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2468, ctx.r3.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r10,2492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2492, ctx.r10.u32);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// stw r20,2648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2648, ctx.r20.u32);
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// stw r19,2668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2668, ctx.r19.u32);
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lis r29,-32247
	ctx.r29.s64 = -2113339392;
	// lis r25,-32247
	ctx.r25.s64 = -2113339392;
	// lis r24,-32247
	ctx.r24.s64 = -2113339392;
	// lis r23,-32247
	ctx.r23.s64 = -2113339392;
	// addi r11,r11,14796
	ctx.r11.s64 = ctx.r11.s64 + 14796;
	// addi r9,r9,14784
	ctx.r9.s64 = ctx.r9.s64 + 14784;
	// addi r8,r8,14772
	ctx.r8.s64 = ctx.r8.s64 + 14772;
	// stw r11,2156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2156, ctx.r11.u32);
	// addi r7,r7,14764
	ctx.r7.s64 = ctx.r7.s64 + 14764;
	// stw r9,2252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2252, ctx.r9.u32);
	// addi r6,r6,14756
	ctx.r6.s64 = ctx.r6.s64 + 14756;
	// stw r8,2276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2276, ctx.r8.u32);
	// addi r5,r5,14748
	ctx.r5.s64 = ctx.r5.s64 + 14748;
	// stw r7,2300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2300, ctx.r7.u32);
	// addi r29,r29,14736
	ctx.r29.s64 = ctx.r29.s64 + 14736;
	// stw r6,2324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2324, ctx.r6.u32);
	// addi r4,r25,14720
	ctx.r4.s64 = ctx.r25.s64 + 14720;
	// stw r5,2348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2348, ctx.r5.u32);
	// addi r3,r24,14712
	ctx.r3.s64 = ctx.r24.s64 + 14712;
	// stw r29,2420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2420, ctx.r29.u32);
	// addi r10,r23,14704
	ctx.r10.s64 = ctx.r23.s64 + 14704;
	// stw r4,2516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2516, ctx.r4.u32);
	// stw r3,2228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2228, ctx.r3.u32);
	// li r4,1884
	ctx.r4.s64 = 1884;
	// stw r10,2204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2204, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,2528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2528, ctx.r11.u32);
	// stw r9,2548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2548, ctx.r9.u32);
	// stw r8,2568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2568, ctx.r8.u32);
	// stw r7,2588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2588, ctx.r7.u32);
	// stw r6,2608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2608, ctx.r6.u32);
	// stw r5,2628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2628, ctx.r5.u32);
	// stw r29,2688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2688, ctx.r29.u32);
	// bl 0x832e7248
	ctx.lr = 0x832E8B00;
	sub_832E7248(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x832e8b1c
	if (ctx.cr0.eq) goto loc_832E8B1C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83334308
	ctx.lr = 0x832E8B18;
	sub_83334308(ctx, base);
	// b 0x832e8b20
	goto loc_832E8B20;
loc_832E8B1C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_832E8B20:
	// stw r3,2020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2020, ctx.r3.u32);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// addic. r26,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r26.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x832e8fa4
	if (ctx.cr0.lt) goto loc_832E8FA4;
	// addi r11,r26,425
	ctx.r11.s64 = ctx.r26.s64 + 425;
	// addi r10,r26,3
	ctx.r10.s64 = ctx.r26.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// add r25,r10,r22
	ctx.r25.u64 = ctx.r10.u64 + ctx.r22.u64;
	// subfic r23,r31,-1700
	ctx.xer.ca = ctx.r31.u32 <= 4294965596;
	ctx.r23.s64 = -1700 - ctx.r31.s64;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r24,r11,14672
	ctx.r24.s64 = ctx.r11.s64 + 14672;
loc_832E8B58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r26.u32);
	// bl 0x832e8588
	ctx.lr = 0x832E8B64;
	sub_832E8588(ctx, base);
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bge cr6,0x832e8b74
	if (!ctx.cr6.lt) goto loc_832E8B74;
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x832e8b80
	goto loc_832E8B80;
loc_832E8B74:
	// lwz r11,20(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwzx r30,r11,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
loc_832E8B80:
	// lwz r29,1456(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832e7248
	ctx.lr = 0x832E8B90;
	sub_832E7248(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x832e8bb4
	if (ctx.cr0.eq) goto loc_832E8BB4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8331cfe8
	ctx.lr = 0x832E8BAC;
	sub_8331CFE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x832e8bb8
	goto loc_832E8BB8;
loc_832E8BB4:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_832E8BB8:
	// lwz r30,1452(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// li r4,2180
	ctx.r4.s64 = 2180;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832e7248
	ctx.lr = 0x832E8BC8;
	sub_832E7248(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x832e8bf0
	if (ctx.cr0.eq) goto loc_832E8BF0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,1536(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// lwz r4,2020(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2020);
	// bl 0x83318bb8
	ctx.lr = 0x832E8BE8;
	sub_83318BB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x832e8bf4
	goto loc_832E8BF4;
loc_832E8BF0:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_832E8BF4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331c0a8
	ctx.lr = 0x832E8C00;
	sub_8331C0A8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832e8c1c
	if (ctx.cr6.eq) goto loc_832E8C1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8331d418
	ctx.lr = 0x832E8C10;
	sub_8331D418(ctx, base);
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// lwz r3,-4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x832e7378
	ctx.lr = 0x832E8C1C;
	sub_832E7378(ctx, base);
loc_832E8C1C:
	// stb r27,2544(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2544, ctx.r27.u8);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// bl 0x8331c260
	ctx.lr = 0x832E8C28;
	sub_8331C260(ctx, base);
	// stw r3,2532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2532, ctx.r3.u32);
	// lwz r3,1452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// bl 0x8331c260
	ctx.lr = 0x832E8C34;
	sub_8331C260(ctx, base);
	// stw r3,2536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2536, ctx.r3.u32);
	// lwz r3,1448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// bl 0x8331c260
	ctx.lr = 0x832E8C40;
	sub_8331C260(ctx, base);
	// stw r3,2540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2540, ctx.r3.u32);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// bl 0x8331c1e8
	ctx.lr = 0x832E8C4C;
	sub_8331C1E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8332c8f8
	ctx.lr = 0x832E8C54;
	sub_8332C8F8(ctx, base);
	// stb r27,2564(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2564, ctx.r27.u8);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// bl 0x8331c260
	ctx.lr = 0x832E8C60;
	sub_8331C260(ctx, base);
	// stw r3,2552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2552, ctx.r3.u32);
	// lwz r3,1452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// bl 0x8331c260
	ctx.lr = 0x832E8C6C;
	sub_8331C260(ctx, base);
	// stw r3,2556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2556, ctx.r3.u32);
	// lwz r3,1448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// bl 0x8331c260
	ctx.lr = 0x832E8C78;
	sub_8331C260(ctx, base);
	// stw r3,2560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2560, ctx.r3.u32);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// bl 0x8331c1e8
	ctx.lr = 0x832E8C84;
	sub_8331C1E8(ctx, base);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// rlwinm. r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832e8c98
	if (ctx.cr0.eq) goto loc_832E8C98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83333db8
	ctx.lr = 0x832E8C98;
	sub_83333DB8(ctx, base);
loc_832E8C98:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832e8cac
	if (ctx.cr0.eq) goto loc_832E8CAC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833340f8
	ctx.lr = 0x832E8CAC;
	sub_833340F8(ctx, base);
loc_832E8CAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331bfa0
	ctx.lr = 0x832E8CB4;
	sub_8331BFA0(ctx, base);
	// stb r27,2584(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2584, ctx.r27.u8);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// bl 0x8331c260
	ctx.lr = 0x832E8CC0;
	sub_8331C260(ctx, base);
	// stw r3,2572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2572, ctx.r3.u32);
	// lwz r3,1452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// bl 0x8331c260
	ctx.lr = 0x832E8CCC;
	sub_8331C260(ctx, base);
	// stw r3,2576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2576, ctx.r3.u32);
	// lwz r3,1448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// bl 0x8331c260
	ctx.lr = 0x832E8CD8;
	sub_8331C260(ctx, base);
	// stw r3,2580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2580, ctx.r3.u32);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// bl 0x8331c1e8
	ctx.lr = 0x832E8CE4;
	sub_8331C1E8(ctx, base);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// rlwinm. r11,r11,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832e8cf8
	if (ctx.cr0.eq) goto loc_832E8CF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833327f8
	ctx.lr = 0x832E8CF8;
	sub_833327F8(ctx, base);
loc_832E8CF8:
	// stb r27,2604(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2604, ctx.r27.u8);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// bl 0x8331c260
	ctx.lr = 0x832E8D04;
	sub_8331C260(ctx, base);
	// stw r3,2592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2592, ctx.r3.u32);
	// lwz r3,1452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// bl 0x8331c260
	ctx.lr = 0x832E8D10;
	sub_8331C260(ctx, base);
	// stw r3,2596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2596, ctx.r3.u32);
	// lwz r3,1448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// bl 0x8331c260
	ctx.lr = 0x832E8D1C;
	sub_8331C260(ctx, base);
	// stw r3,2600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2600, ctx.r3.u32);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// bl 0x8331c1e8
	ctx.lr = 0x832E8D28;
	sub_8331C1E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,2020(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2020);
	// bl 0x83314930
	ctx.lr = 0x832E8D34;
	sub_83314930(ctx, base);
	// stb r27,2624(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2624, ctx.r27.u8);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// bl 0x8331c260
	ctx.lr = 0x832E8D40;
	sub_8331C260(ctx, base);
	// stw r3,2612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2612, ctx.r3.u32);
	// lwz r3,1452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// bl 0x8331c260
	ctx.lr = 0x832E8D4C;
	sub_8331C260(ctx, base);
	// stw r3,2616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2616, ctx.r3.u32);
	// lwz r3,1448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// bl 0x8331c260
	ctx.lr = 0x832E8D58;
	sub_8331C260(ctx, base);
	// stw r3,2620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2620, ctx.r3.u32);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// bl 0x8331c1e8
	ctx.lr = 0x832E8D64;
	sub_8331C1E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83332238
	ctx.lr = 0x832E8D6C;
	sub_83332238(ctx, base);
	// stb r27,2644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2644, ctx.r27.u8);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// bl 0x8331c260
	ctx.lr = 0x832E8D78;
	sub_8331C260(ctx, base);
	// stw r3,2632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2632, ctx.r3.u32);
	// lwz r3,1452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// bl 0x8331c260
	ctx.lr = 0x832E8D84;
	sub_8331C260(ctx, base);
	// stw r3,2636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2636, ctx.r3.u32);
	// lwz r3,1448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// bl 0x8331c260
	ctx.lr = 0x832E8D90;
	sub_8331C260(ctx, base);
	// stw r3,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r3.u32);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// bl 0x8331c1e8
	ctx.lr = 0x832E8D9C;
	sub_8331C1E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8332b9d8
	ctx.lr = 0x832E8DA4;
	sub_8332B9D8(ctx, base);
	// stb r27,2664(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2664, ctx.r27.u8);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// bl 0x8331c260
	ctx.lr = 0x832E8DB0;
	sub_8331C260(ctx, base);
	// stw r3,2652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2652, ctx.r3.u32);
	// lwz r3,1452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// bl 0x8331c260
	ctx.lr = 0x832E8DBC;
	sub_8331C260(ctx, base);
	// stw r3,2656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2656, ctx.r3.u32);
	// lwz r3,1448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// bl 0x8331c260
	ctx.lr = 0x832E8DC8;
	sub_8331C260(ctx, base);
	// stw r3,2660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2660, ctx.r3.u32);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// bl 0x8331c1e8
	ctx.lr = 0x832E8DD4;
	sub_8331C1E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83329908
	ctx.lr = 0x832E8DDC;
	sub_83329908(ctx, base);
	// stb r27,2684(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2684, ctx.r27.u8);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// bl 0x8331c260
	ctx.lr = 0x832E8DE8;
	sub_8331C260(ctx, base);
	// stw r3,2672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2672, ctx.r3.u32);
	// lwz r3,1452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// bl 0x8331c260
	ctx.lr = 0x832E8DF4;
	sub_8331C260(ctx, base);
	// stw r3,2676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2676, ctx.r3.u32);
	// lwz r3,1448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// bl 0x8331c260
	ctx.lr = 0x832E8E00;
	sub_8331C260(ctx, base);
	// stw r3,2680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2680, ctx.r3.u32);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// bl 0x8331c1e8
	ctx.lr = 0x832E8E0C;
	sub_8331C1E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833289c8
	ctx.lr = 0x832E8E14;
	sub_833289C8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r28,-160
	ctx.r4.s64 = ctx.r28.s64 + -160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833257e0
	ctx.lr = 0x832E8E24;
	sub_833257E0(ctx, base);
	// stb r27,2704(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2704, ctx.r27.u8);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// bl 0x8331c260
	ctx.lr = 0x832E8E30;
	sub_8331C260(ctx, base);
	// stw r3,2692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2692, ctx.r3.u32);
	// lwz r3,1452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// bl 0x8331c260
	ctx.lr = 0x832E8E3C;
	sub_8331C260(ctx, base);
	// stw r3,2696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2696, ctx.r3.u32);
	// lwz r3,1448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// bl 0x8331c260
	ctx.lr = 0x832E8E48;
	sub_8331C260(ctx, base);
	// stw r3,2700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2700, ctx.r3.u32);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// bl 0x8331c1e8
	ctx.lr = 0x832E8E54;
	sub_8331C1E8(ctx, base);
	// lwz r11,2080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2080);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x832e7968
	ctx.lr = 0x832E8E68;
	sub_832E7968(ctx, base);
	// lwz r11,2080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2080);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x832e8e78
	if (!ctx.cr6.lt) goto loc_832E8E78;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_832E8E78:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,2084(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2084);
	// stw r11,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r11.u32);
	// bl 0x83314978
	ctx.lr = 0x832E8E8C;
	sub_83314978(ctx, base);
	// lbz r11,2029(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2029);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,2029(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2029, ctx.r11.u8);
	// bl 0x83314988
	ctx.lr = 0x832E8EA4;
	sub_83314988(ctx, base);
	// lbz r11,2030(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2030);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,2030(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2030, ctx.r11.u8);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832e8ed0
	if (ctx.cr6.eq) goto loc_832E8ED0;
	// lbz r11,126(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 126);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bne 0x832e8ed4
	if (!ctx.cr0.eq) goto loc_832E8ED4;
loc_832E8ED0:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_832E8ED4:
	// lbz r10,2025(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2025);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,2025(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2025, ctx.r11.u8);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832e8efc
	if (ctx.cr6.eq) goto loc_832E8EFC;
	// lbz r11,125(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 125);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bne 0x832e8f00
	if (!ctx.cr0.eq) goto loc_832E8F00;
loc_832E8EFC:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_832E8F00:
	// lbz r10,2026(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2026);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r9,2024(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2024);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lbz r10,2027(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2027);
	// stb r11,2026(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2026, ctx.r11.u8);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stb r11,2024(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2024, ctx.r11.u8);
	// lbz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 124);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r11,2027(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2027, ctx.r11.u8);
	// bl 0x83314978
	ctx.lr = 0x832E8F40;
	sub_83314978(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832e8f54
	if (ctx.cr0.eq) goto loc_832E8F54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83314980
	ctx.lr = 0x832E8F50;
	sub_83314980(ctx, base);
	// stw r3,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r3.u32);
loc_832E8F54:
	// lwz r11,2092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2092);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,240(r28)
	PPC_STORE_U32(ctx.r28.u32 + 240, ctx.r11.u32);
	// lwz r11,2096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2096);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,160(r28)
	PPC_STORE_U32(ctx.r28.u32 + 160, ctx.r11.u32);
	// bl 0x832e8958
	ctx.lr = 0x832E8F70;
	sub_832E8958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83318eb8
	ctx.lr = 0x832E8F78;
	sub_83318EB8(ctx, base);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x832e7378
	ctx.lr = 0x832E8F84;
	sub_832E7378(ctx, base);
	// lwz r3,1452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// bl 0x8331c1e8
	ctx.lr = 0x832E8F8C;
	sub_8331C1E8(ctx, base);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// bl 0x8331c1e8
	ctx.lr = 0x832E8F94;
	sub_8331C1E8(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r25,r25,-4
	ctx.r25.s64 = ctx.r25.s64 + -4;
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// bge 0x832e8b58
	if (!ctx.cr0.lt) goto loc_832E8B58;
loc_832E8FA4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832E8FAC"))) PPC_WEAK_FUNC(sub_832E8FAC);
PPC_FUNC_IMPL(__imp__sub_832E8FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E8FB0"))) PPC_WEAK_FUNC(sub_832E8FB0);
PPC_FUNC_IMPL(__imp__sub_832E8FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832E8FB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r29,1448(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832e7248
	ctx.lr = 0x832E8FD4;
	sub_832E7248(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// beq 0x832e8ffc
	if (ctx.cr0.eq) goto loc_832E8FFC;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// addi r10,r10,14556
	ctx.r10.s64 = ctx.r10.s64 + 14556;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x832e9000
	goto loc_832E9000;
loc_832E8FFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832E9000:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832E9008"))) PPC_WEAK_FUNC(sub_832E9008);
PPC_FUNC_IMPL(__imp__sub_832E9008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832E9010;
	__savegprlr_22(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-16672(r1)
	ea = -16672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,16716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16716, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r7,16724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16724, ctx.r7.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r31,16692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16692, ctx.r31.u32);
	// stw r30,16700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16700, ctx.r30.u32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r29,16708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16708, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// bl 0x832e84d0
	ctx.lr = 0x832E9050;
	sub_832E84D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832e8588
	ctx.lr = 0x832E9058;
	sub_832E8588(ctx, base);
	// stw r28,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r28.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832e8600
	ctx.lr = 0x832E906C;
	sub_832E8600(ctx, base);
	// stw r3,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r3.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82ff2180
	ctx.lr = 0x832E9078;
	sub_82FF2180(ctx, base);
	// lwz r31,16692(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16692);
	// lwz r26,16708(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16708);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r27,16700(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16700);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r23,128(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bne 0x832e9254
	if (!ctx.cr0.eq) goto loc_832E9254;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,1384(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1384);
	// bl 0x832ceb20
	ctx.lr = 0x832E90A0;
	sub_832CEB20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x832e90b8
	if (ctx.cr0.eq) goto loc_832E90B8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,14976
	ctx.r4.s64 = ctx.r11.s64 + 14976;
	// b 0x832e90c0
	goto loc_832E90C0;
loc_832E90B8:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,14928
	ctx.r4.s64 = ctx.r11.s64 + 14928;
loc_832E90C0:
	// bl 0x832e7968
	ctx.lr = 0x832E90C4;
	sub_832E7968(ctx, base);
	// lwz r3,16716(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16716);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832e95c0
	if (ctx.cr6.eq) goto loc_832E95C0;
	// lwz r4,16724(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16724);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832e95c0
	if (ctx.cr6.eq) goto loc_832E95C0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x8331c4c0
	ctx.lr = 0x832E90E4;
	sub_8331C4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832e89d0
	ctx.lr = 0x832E90F4;
	sub_832E89D0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832e9110
	if (ctx.cr6.eq) goto loc_832E9110;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331c420
	ctx.lr = 0x832E9104;
	sub_8331C420(ctx, base);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x832e7378
	ctx.lr = 0x832E9110;
	sub_832E7378(ctx, base);
loc_832E9110:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,1620(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// lwz r4,1540(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// bl 0x83214dd0
	ctx.lr = 0x832E9120;
	sub_83214DD0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,8256
	ctx.r29.s64 = ctx.r10.s64 + 8256;
	// addi r28,r9,14240
	ctx.r28.s64 = ctx.r9.s64 + 14240;
	// beq 0x832e9158
	if (ctx.cr0.eq) goto loc_832E9158;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,838
	ctx.r7.s64 = 838;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832E9158;
	sub_8320CF10(ctx, base);
loc_832E9158:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,1624(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// lwz r4,1544(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// bl 0x83214dd0
	ctx.lr = 0x832E9168;
	sub_83214DD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832e9188
	if (ctx.cr0.eq) goto loc_832E9188;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,842
	ctx.r7.s64 = 842;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832E9188;
	sub_8320CF10(ctx, base);
loc_832E9188:
	// lwz r30,1540(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,14376
	ctx.r29.s64 = ctx.r11.s64 + 14376;
	// addi r28,r10,14588
	ctx.r28.s64 = ctx.r10.s64 + 14588;
	// beq cr6,0x832e91f4
	if (ctx.cr6.eq) goto loc_832E91F4;
	// lbz r11,2129(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2129);
	// stw r24,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r24.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832e91f4
	if (ctx.cr0.eq) goto loc_832E91F4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14908
	ctx.r4.s64 = ctx.r11.s64 + 14908;
	// bl 0x832e7968
	ctx.lr = 0x832E91C4;
	sub_832E7968(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82cb16f0
	ctx.lr = 0x832E91D4;
	sub_82CB16F0(ctx, base);
	// stw r31,8352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8352, ctx.r31.u32);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,1620(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8320fbb0
	ctx.lr = 0x832E91F0;
	sub_8320FBB0(ctx, base);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
loc_832E91F4:
	// lwz r30,1544(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832e9254
	if (ctx.cr6.eq) goto loc_832E9254;
	// lbz r11,2129(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2129);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r10.u32);
	// beq 0x832e9254
	if (ctx.cr0.eq) goto loc_832E9254;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14888
	ctx.r4.s64 = ctx.r11.s64 + 14888;
	// bl 0x832e7968
	ctx.lr = 0x832E9224;
	sub_832E7968(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,8384
	ctx.r3.s64 = ctx.r1.s64 + 8384;
	// bl 0x82cb16f0
	ctx.lr = 0x832E9234;
	sub_82CB16F0(ctx, base);
	// stw r31,16576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16576, ctx.r31.u32);
	// stw r28,8368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8368, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,1624(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// addi r3,r1,8368
	ctx.r3.s64 = ctx.r1.s64 + 8368;
	// bl 0x8320fbb0
	ctx.lr = 0x832E9250;
	sub_8320FBB0(ctx, base);
	// stw r29,8368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8368, ctx.r29.u32);
loc_832E9254:
	// lwz r4,1620(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832e9270
	if (ctx.cr6.eq) goto loc_832E9270;
	// lwz r3,1444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832E9270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832E9270:
	// stw r24,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r24.u32);
	// stw r24,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r24.u32);
	// lwz r4,1624(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832e9294
	if (ctx.cr6.eq) goto loc_832E9294;
	// lwz r3,1444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832E9294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832E9294:
	// stw r24,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r24.u32);
	// stw r24,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r24.u32);
	// lwz r25,1364(r23)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1364);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x832e95a8
	if (!ctx.cr6.eq) goto loc_832E95A8;
	// lbz r11,2025(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2025);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832e92e0
	if (ctx.cr0.eq) goto loc_832E92E0;
	// lbz r10,2026(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832e92e0
	if (!ctx.cr0.eq) goto loc_832E92E0;
	// lbz r10,2027(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832e92e0
	if (!ctx.cr0.eq) goto loc_832E92E0;
	// lbz r10,2028(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832e92e0
	if (!ctx.cr0.eq) goto loc_832E92E0;
	// li r28,2
	ctx.r28.s64 = 2;
loc_832E92E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832e9348
	if (!ctx.cr6.eq) goto loc_832E9348;
	// lbz r10,2026(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832e9310
	if (!ctx.cr0.eq) goto loc_832E9310;
	// lbz r10,2027(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x832e9310
	if (ctx.cr0.eq) goto loc_832E9310;
	// lbz r10,2028(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832e9310
	if (!ctx.cr0.eq) goto loc_832E9310;
	// li r28,3
	ctx.r28.s64 = 3;
loc_832E9310:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832e9348
	if (!ctx.cr6.eq) goto loc_832E9348;
	// lbz r10,2026(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x832e9340
	if (ctx.cr0.eq) goto loc_832E9340;
	// lbz r10,2027(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832e9340
	if (!ctx.cr0.eq) goto loc_832E9340;
	// lbz r10,2028(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832e9340
	if (!ctx.cr0.eq) goto loc_832E9340;
	// li r28,4
	ctx.r28.s64 = 4;
loc_832E9340:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832e9378
	if (ctx.cr6.eq) goto loc_832E9378;
loc_832E9348:
	// lbz r10,2026(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x832e9370
	if (ctx.cr0.eq) goto loc_832E9370;
	// lbz r10,2027(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832e9370
	if (!ctx.cr0.eq) goto loc_832E9370;
	// lbz r10,2028(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832e9370
	if (!ctx.cr0.eq) goto loc_832E9370;
	// li r28,5
	ctx.r28.s64 = 5;
loc_832E9370:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832e93d0
	if (!ctx.cr6.eq) goto loc_832E93D0;
loc_832E9378:
	// lbz r10,2026(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x832e93a0
	if (ctx.cr0.eq) goto loc_832E93A0;
	// lbz r10,2027(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x832e93a0
	if (ctx.cr0.eq) goto loc_832E93A0;
	// lbz r10,2028(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832e93a0
	if (!ctx.cr0.eq) goto loc_832E93A0;
	// li r28,6
	ctx.r28.s64 = 6;
loc_832E93A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832e93d0
	if (!ctx.cr6.eq) goto loc_832E93D0;
	// lbz r11,2026(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2026);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832e93d0
	if (!ctx.cr0.eq) goto loc_832E93D0;
	// lbz r11,2027(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2027);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832e93d0
	if (!ctx.cr0.eq) goto loc_832E93D0;
	// lbz r11,2028(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2028);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832e93d0
	if (ctx.cr0.eq) goto loc_832E93D0;
	// li r28,7
	ctx.r28.s64 = 7;
loc_832E93D0:
	// lwz r11,1864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	// lbz r10,2024(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2024);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x832e93e8
	if (ctx.cr0.eq) goto loc_832E93E8;
	// ori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 | 1;
loc_832E93E8:
	// lwz r11,1780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	// lwz r10,1784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1784);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x832e9400
	if (ctx.cr6.gt) goto loc_832E9400;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
loc_832E9400:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x832e940c
	if (!ctx.cr6.lt) goto loc_832E940C;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_832E940C:
	// li r4,1978
	ctx.r4.s64 = 1978;
	// lwz r24,1940(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r22,1944(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// lwz r5,1700(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1700);
	// bl 0x83215458
	ctx.lr = 0x832E9424;
	sub_83215458(ctx, base);
	// li r4,1978
	ctx.r4.s64 = 1978;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,1700(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1700);
	// bl 0x83215458
	ctx.lr = 0x832E9434;
	sub_83215458(ctx, base);
	// li r4,1979
	ctx.r4.s64 = 1979;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,1704(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1704);
	// bl 0x83215458
	ctx.lr = 0x832E9444;
	sub_83215458(ctx, base);
	// li r4,1979
	ctx.r4.s64 = 1979;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,1704(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1704);
	// bl 0x83215458
	ctx.lr = 0x832E9454;
	sub_83215458(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,1980
	ctx.r4.s64 = 1980;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83215458
	ctx.lr = 0x832E9464;
	sub_83215458(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,1980
	ctx.r4.s64 = 1980;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83215458
	ctx.lr = 0x832E9474;
	sub_83215458(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,1981
	ctx.r4.s64 = 1981;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83215458
	ctx.lr = 0x832E9484;
	sub_83215458(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,1981
	ctx.r4.s64 = 1981;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83215458
	ctx.lr = 0x832E9494;
	sub_83215458(ctx, base);
	// li r4,1982
	ctx.r4.s64 = 1982;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r5,2029(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2029);
	// bl 0x83215458
	ctx.lr = 0x832E94A4;
	sub_83215458(ctx, base);
	// li r4,1982
	ctx.r4.s64 = 1982;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r5,2029(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2029);
	// bl 0x83215458
	ctx.lr = 0x832E94B4;
	sub_83215458(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1983
	ctx.r4.s64 = 1983;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83215458
	ctx.lr = 0x832E94C4;
	sub_83215458(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1983
	ctx.r4.s64 = 1983;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83215458
	ctx.lr = 0x832E94D4;
	sub_83215458(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1984
	ctx.r4.s64 = 1984;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83215458
	ctx.lr = 0x832E94E4;
	sub_83215458(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1984
	ctx.r4.s64 = 1984;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83215458
	ctx.lr = 0x832E94F4;
	sub_83215458(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1985
	ctx.r4.s64 = 1985;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83215458
	ctx.lr = 0x832E9504;
	sub_83215458(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1985
	ctx.r4.s64 = 1985;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83215458
	ctx.lr = 0x832E9514;
	sub_83215458(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1986
	ctx.r4.s64 = 1986;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83215458
	ctx.lr = 0x832E9524;
	sub_83215458(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1986
	ctx.r4.s64 = 1986;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83215458
	ctx.lr = 0x832E9534;
	sub_83215458(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1987
	ctx.r4.s64 = 1987;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83215458
	ctx.lr = 0x832E9544;
	sub_83215458(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1987
	ctx.r4.s64 = 1987;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83215458
	ctx.lr = 0x832E9554;
	sub_83215458(ctx, base);
	// li r4,1991
	ctx.r4.s64 = 1991;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,2032(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// bl 0x83215458
	ctx.lr = 0x832E9564;
	sub_83215458(ctx, base);
	// li r4,1991
	ctx.r4.s64 = 1991;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,2032(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// bl 0x83215458
	ctx.lr = 0x832E9574;
	sub_83215458(ctx, base);
	// li r4,1989
	ctx.r4.s64 = 1989;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r5,2030(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2030);
	// bl 0x83215458
	ctx.lr = 0x832E9584;
	sub_83215458(ctx, base);
	// li r4,1989
	ctx.r4.s64 = 1989;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r5,2030(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2030);
	// bl 0x83215458
	ctx.lr = 0x832E9594;
	sub_83215458(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23280
	ctx.r4.s64 = ctx.r11.s64 + 23280;
	// bl 0x832e7968
	ctx.lr = 0x832E95A4;
	sub_832E7968(ctx, base);
	// bl 0x832e8358
	ctx.lr = 0x832E95A8;
	sub_832E8358(ctx, base);
loc_832E95A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832e7f28
	ctx.lr = 0x832E95B4;
	sub_832E7F28(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,16672
	ctx.r1.s64 = ctx.r1.s64 + 16672;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_832E95C0:
	// li r11,21
	ctx.r11.s64 = 21;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r11.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82ff1e60
	ctx.lr = 0x832E95D4;
	sub_82FF1E60(ctx, base);
}

__attribute__((alias("__imp__sub_832E95D4"))) PPC_WEAK_FUNC(sub_832E95D4);
PPC_FUNC_IMPL(__imp__sub_832E95D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E95D8"))) PPC_WEAK_FUNC(sub_832E95D8);
PPC_FUNC_IMPL(__imp__sub_832E95D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832E95E0;
	__savegprlr_23(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-16656(r1)
	ea = -16656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,16692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16692, ctx.r5.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r31,16676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16676, ctx.r31.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r30,16684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16684, ctx.r30.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x832e84d0
	ctx.lr = 0x832E9614;
	sub_832E84D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832e8588
	ctx.lr = 0x832E961C;
	sub_832E8588(ctx, base);
	// stw r29,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832e8fb0
	ctx.lr = 0x832E962C;
	sub_832E8FB0(ctx, base);
	// stw r3,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r3.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// bl 0x82ff2180
	ctx.lr = 0x832E9640;
	sub_82FF2180(ctx, base);
	// lwz r31,16676(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16676);
	// lwz r26,16684(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16684);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r23,116(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832e97b0
	if (!ctx.cr0.eq) goto loc_832E97B0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,16692(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16692);
	// bl 0x8331c440
	ctx.lr = 0x832E9664;
	sub_8331C440(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832e9684
	if (ctx.cr0.eq) goto loc_832E9684;
	// stb r24,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r24.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x832e9688
	goto loc_832E9688;
loc_832E9684:
	// li r4,0
	ctx.r4.s64 = 0;
loc_832E9688:
	// bl 0x83214b08
	ctx.lr = 0x832E968C;
	sub_83214B08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832e89d0
	ctx.lr = 0x832E9698;
	sub_832E89D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331c420
	ctx.lr = 0x832E96A0;
	sub_8331C420(ctx, base);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x832e7378
	ctx.lr = 0x832E96AC;
	sub_832E7378(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,1620(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// lwz r4,1540(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// bl 0x83214dd0
	ctx.lr = 0x832E96BC;
	sub_83214DD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832e96e8
	if (ctx.cr0.eq) goto loc_832E96E8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,14240
	ctx.r6.s64 = ctx.r11.s64 + 14240;
	// addi r5,r10,8256
	ctx.r5.s64 = ctx.r10.s64 + 8256;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1094
	ctx.r7.s64 = 1094;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832E96E8;
	sub_8320CF10(ctx, base);
loc_832E96E8:
	// lwz r30,1540(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,14376
	ctx.r29.s64 = ctx.r11.s64 + 14376;
	// addi r28,r10,14588
	ctx.r28.s64 = ctx.r10.s64 + 14588;
	// beq cr6,0x832e9754
	if (ctx.cr6.eq) goto loc_832E9754;
	// lbz r11,2129(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2129);
	// stw r24,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r24.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832e9754
	if (ctx.cr0.eq) goto loc_832E9754;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14908
	ctx.r4.s64 = ctx.r11.s64 + 14908;
	// bl 0x832e7968
	ctx.lr = 0x832E9724;
	sub_832E7968(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82cb16f0
	ctx.lr = 0x832E9734;
	sub_82CB16F0(ctx, base);
	// stw r31,8336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8336, ctx.r31.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,1620(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8320fbb0
	ctx.lr = 0x832E9750;
	sub_8320FBB0(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
loc_832E9754:
	// lwz r30,1544(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832e97b0
	if (ctx.cr6.eq) goto loc_832E97B0;
	// lbz r11,2129(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2129);
	// stw r27,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r27.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832e97b0
	if (ctx.cr0.eq) goto loc_832E97B0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14888
	ctx.r4.s64 = ctx.r11.s64 + 14888;
	// bl 0x832e7968
	ctx.lr = 0x832E9780;
	sub_832E7968(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,8368
	ctx.r3.s64 = ctx.r1.s64 + 8368;
	// bl 0x82cb16f0
	ctx.lr = 0x832E9790;
	sub_82CB16F0(ctx, base);
	// stw r31,16560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16560, ctx.r31.u32);
	// stw r28,8352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8352, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,1624(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// addi r3,r1,8352
	ctx.r3.s64 = ctx.r1.s64 + 8352;
	// bl 0x8320fbb0
	ctx.lr = 0x832E97AC;
	sub_8320FBB0(ctx, base);
	// stw r29,8352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8352, ctx.r29.u32);
loc_832E97B0:
	// lwz r4,1620(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832e97cc
	if (ctx.cr6.eq) goto loc_832E97CC;
	// lwz r3,1444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832E97CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832E97CC:
	// stw r24,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r24.u32);
	// stw r24,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r24.u32);
	// lwz r4,1624(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832e97f0
	if (ctx.cr6.eq) goto loc_832E97F0;
	// lwz r3,1444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832E97F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832E97F0:
	// stw r24,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r24.u32);
	// stw r24,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r24.u32);
	// lwz r25,1364(r23)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1364);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x832e9a40
	if (!ctx.cr6.eq) goto loc_832E9A40;
	// lbz r11,2025(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2025);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832e983c
	if (ctx.cr0.eq) goto loc_832E983C;
	// lbz r10,2026(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832e983c
	if (!ctx.cr0.eq) goto loc_832E983C;
	// lbz r10,2027(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832e983c
	if (!ctx.cr0.eq) goto loc_832E983C;
	// lbz r10,2028(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832e983c
	if (!ctx.cr0.eq) goto loc_832E983C;
	// li r27,2
	ctx.r27.s64 = 2;
loc_832E983C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832e98a4
	if (!ctx.cr6.eq) goto loc_832E98A4;
	// lbz r10,2026(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832e986c
	if (!ctx.cr0.eq) goto loc_832E986C;
	// lbz r10,2027(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x832e986c
	if (ctx.cr0.eq) goto loc_832E986C;
	// lbz r10,2028(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832e986c
	if (!ctx.cr0.eq) goto loc_832E986C;
	// li r27,3
	ctx.r27.s64 = 3;
loc_832E986C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832e98a4
	if (!ctx.cr6.eq) goto loc_832E98A4;
	// lbz r10,2026(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x832e989c
	if (ctx.cr0.eq) goto loc_832E989C;
	// lbz r10,2027(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832e989c
	if (!ctx.cr0.eq) goto loc_832E989C;
	// lbz r10,2028(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832e989c
	if (!ctx.cr0.eq) goto loc_832E989C;
	// li r27,4
	ctx.r27.s64 = 4;
loc_832E989C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832e98d4
	if (ctx.cr6.eq) goto loc_832E98D4;
loc_832E98A4:
	// lbz r10,2026(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x832e98cc
	if (ctx.cr0.eq) goto loc_832E98CC;
	// lbz r10,2027(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832e98cc
	if (!ctx.cr0.eq) goto loc_832E98CC;
	// lbz r10,2028(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832e98cc
	if (!ctx.cr0.eq) goto loc_832E98CC;
	// li r27,5
	ctx.r27.s64 = 5;
loc_832E98CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832e992c
	if (!ctx.cr6.eq) goto loc_832E992C;
loc_832E98D4:
	// lbz r10,2026(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x832e98fc
	if (ctx.cr0.eq) goto loc_832E98FC;
	// lbz r10,2027(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x832e98fc
	if (ctx.cr0.eq) goto loc_832E98FC;
	// lbz r10,2028(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832e98fc
	if (!ctx.cr0.eq) goto loc_832E98FC;
	// li r27,6
	ctx.r27.s64 = 6;
loc_832E98FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832e992c
	if (!ctx.cr6.eq) goto loc_832E992C;
	// lbz r11,2026(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2026);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832e992c
	if (!ctx.cr0.eq) goto loc_832E992C;
	// lbz r11,2027(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2027);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x832e992c
	if (!ctx.cr0.eq) goto loc_832E992C;
	// lbz r11,2028(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2028);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832e992c
	if (ctx.cr0.eq) goto loc_832E992C;
	// li r27,7
	ctx.r27.s64 = 7;
loc_832E992C:
	// lwz r11,1780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	// lwz r10,1784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1784);
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x832e9944
	if (ctx.cr6.gt) goto loc_832E9944;
	// addi r28,r10,-1
	ctx.r28.s64 = ctx.r10.s64 + -1;
loc_832E9944:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x832e9950
	if (!ctx.cr6.lt) goto loc_832E9950;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_832E9950:
	// lwz r11,1860(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1860);
	// lbz r10,2024(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2024);
	// lwz r30,1940(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x832e996c
	if (ctx.cr0.eq) goto loc_832E996C;
	// ori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 | 1;
loc_832E996C:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,1700(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1700);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832e99c4
	if (ctx.cr0.eq) goto loc_832E99C4;
	// li r4,1978
	ctx.r4.s64 = 1978;
	// bl 0x83215458
	ctx.lr = 0x832E9988;
	sub_83215458(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1980
	ctx.r4.s64 = 1980;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83215458
	ctx.lr = 0x832E9998;
	sub_83215458(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1984
	ctx.r4.s64 = 1984;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83215458
	ctx.lr = 0x832E99A8;
	sub_83215458(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1985
	ctx.r4.s64 = 1985;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83215458
	ctx.lr = 0x832E99B8;
	sub_83215458(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1987
	ctx.r4.s64 = 1987;
	// b 0x832e9a24
	goto loc_832E9A24;
loc_832E99C4:
	// li r4,1979
	ctx.r4.s64 = 1979;
	// bl 0x83215458
	ctx.lr = 0x832E99CC;
	sub_83215458(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1981
	ctx.r4.s64 = 1981;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83215458
	ctx.lr = 0x832E99DC;
	sub_83215458(ctx, base);
	// li r4,1982
	ctx.r4.s64 = 1982;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r5,2029(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2029);
	// bl 0x83215458
	ctx.lr = 0x832E99EC;
	sub_83215458(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1983
	ctx.r4.s64 = 1983;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83215458
	ctx.lr = 0x832E99FC;
	sub_83215458(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1986
	ctx.r4.s64 = 1986;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83215458
	ctx.lr = 0x832E9A0C;
	sub_83215458(ctx, base);
	// li r4,1991
	ctx.r4.s64 = 1991;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,2032(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// bl 0x83215458
	ctx.lr = 0x832E9A1C;
	sub_83215458(ctx, base);
	// lbz r5,2030(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2030);
	// li r4,1989
	ctx.r4.s64 = 1989;
loc_832E9A24:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83215458
	ctx.lr = 0x832E9A2C;
	sub_83215458(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23280
	ctx.r4.s64 = ctx.r11.s64 + 23280;
	// bl 0x832e7968
	ctx.lr = 0x832E9A3C;
	sub_832E7968(ctx, base);
	// bl 0x832e8358
	ctx.lr = 0x832E9A40;
	sub_832E8358(ctx, base);
loc_832E9A40:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832e7f28
	ctx.lr = 0x832E9A4C;
	sub_832E7F28(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,16656
	ctx.r1.s64 = ctx.r1.s64 + 16656;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832E9A58"))) PPC_WEAK_FUNC(sub_832E9A58);
PPC_FUNC_IMPL(__imp__sub_832E9A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x832E9A60;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r22,16
	ctx.r22.s64 = 16;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// addi r25,r9,-21168
	ctx.r25.s64 = ctx.r9.s64 + -21168;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r24,r8,15600
	ctx.r24.s64 = ctx.r8.s64 + 15600;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r27,28(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r29,32(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r28,r10,8
	ctx.r28.s64 = ctx.r10.s64 + 8;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x832e9ac8
	if (ctx.cr6.lt) goto loc_832E9AC8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,15552
	ctx.r5.s64 = ctx.r11.s64 + 15552;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,490
	ctx.r7.s64 = 490;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832E9AC8;
	sub_8320CF10(ctx, base);
loc_832E9AC8:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r8,8192
	ctx.r8.s64 = 536870912;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r23,32
	ctx.r23.s64 = 32;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r8,r8,8192
	ctx.r8.u64 = ctx.r8.u64 | 8192;
	// rlwinm r11,r11,29,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xF;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r21,16(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r20,12(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwimi r11,r10,17,20,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// rlwimi r21,r5,17,20,31
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r5.u32, 17) & 0xFFF) | (ctx.r21.u64 & 0xFFFFFFFFFFFFF000);
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// rlwimi r9,r7,17,20,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 17) & 0xFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF000);
	// stw r26,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r26.u32);
	// rlwimi r20,r6,17,20,31
	ctx.r20.u64 = (__builtin_rotateleft32(ctx.r6.u32, 17) & 0xFFF) | (ctx.r20.u64 & 0xFFFFFFFFFFFFF000);
	// stw r8,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r8.u32);
	// rlwinm r3,r3,0,0,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// rlwimi r11,r10,17,6,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0x3FF0000) | (ctx.r11.u64 & 0xFFFFFFFFFC00FFFF);
	// rlwinm r3,r3,0,16,14
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// rlwimi r20,r6,17,6,15
	ctx.r20.u64 = (__builtin_rotateleft32(ctx.r6.u32, 17) & 0x3FF0000) | (ctx.r20.u64 & 0xFFFFFFFFFC00FFFF);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// rlwimi r9,r7,17,6,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 17) & 0x3FF0000) | (ctx.r9.u64 & 0xFFFFFFFFFC00FFFF);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// rlwimi r21,r5,17,6,15
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r5.u32, 17) & 0x3FF0000) | (ctx.r21.u64 & 0xFFFFFFFFFC00FFFF);
	// stw r20,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r20.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r21,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r21.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x832e9b94
	if (ctx.cr6.lt) goto loc_832E9B94;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,15508
	ctx.r5.s64 = ctx.r11.s64 + 15508;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,516
	ctx.r7.s64 = 516;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832E9B94;
	sub_8320CF10(ctx, base);
loc_832E9B94:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r11,4097
	ctx.r11.s64 = 268500992;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,260
	ctx.r8.u64 = ctx.r11.u64 | 260;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// li r7,12
	ctx.r7.s64 = 12;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,29,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xF;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r8,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r8.u32);
	// stw r9,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r9.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x832e9bfc
	if (ctx.cr6.lt) goto loc_832E9BFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,15464
	ctx.r5.s64 = ctx.r11.s64 + 15464;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,534
	ctx.r7.s64 = 534;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832E9BFC;
	sub_8320CF10(ctx, base);
loc_832E9BFC:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// li r8,4
	ctx.r8.s64 = 4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// li r6,7
	ctx.r6.s64 = 7;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,29,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0xF;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r10,0,9,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFE7FFFFF;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// stw r26,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r26.u32);
	// stw r8,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r8.u32);
	// stw r7,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r7.u32);
	// stw r6,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r6.u32);
	// stw r10,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r10.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x832e9c90
	if (ctx.cr6.lt) goto loc_832E9C90;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,15420
	ctx.r5.s64 = ctx.r11.s64 + 15420;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,562
	ctx.r7.s64 = 562;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832E9C90;
	sub_8320CF10(ctx, base);
loc_832E9C90:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r9,38
	ctx.r9.s64 = 38;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,29,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xF;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x832e9ce0
	if (ctx.cr6.lt) goto loc_832E9CE0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,15376
	ctx.r5.s64 = ctx.r11.s64 + 15376;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,570
	ctx.r7.s64 = 570;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832E9CE0;
	sub_8320CF10(ctx, base);
loc_832E9CE0:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,4081
	ctx.r8.s64 = 4081;
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,14
	ctx.r6.s64 = 14;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,29,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xF;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r9,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r9.u32);
	// stw r22,92(r28)
	PPC_STORE_U32(ctx.r28.u32 + 92, ctx.r22.u32);
	// stw r6,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r6.u32);
	// stw r23,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r23.u32);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// rlwimi r11,r7,12,23,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 12) & 0x1FF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE00);
	// rlwimi r10,r8,8,23,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0x1FF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFE00);
	// rlwimi r11,r7,12,11,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 12) & 0x1FF000) | (ctx.r11.u64 & 0xFFFFFFFFFFE00FFF);
	// rlwimi r10,r8,8,11,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0x1FF000) | (ctx.r10.u64 & 0xFFFFFFFFFFE00FFF);
	// stw r11,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r11.u32);
	// stw r10,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r10.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x832e9d6c
	if (ctx.cr6.lt) goto loc_832E9D6C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,15332
	ctx.r5.s64 = ctx.r11.s64 + 15332;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,605
	ctx.r7.s64 = 605;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832E9D6C;
	sub_8320CF10(ctx, base);
loc_832E9D6C:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,29,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xF;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832E9D88"))) PPC_WEAK_FUNC(sub_832E9D88);
PPC_FUNC_IMPL(__imp__sub_832E9D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832E9D90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r27,r11,-21168
	ctx.r27.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,2584
	ctx.r26.s64 = ctx.r10.s64 + 2584;
	// bne cr6,0x832e9dd8
	if (!ctx.cr6.eq) goto loc_832E9DD8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,15692
	ctx.r5.s64 = ctx.r11.s64 + 15692;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,163
	ctx.r7.s64 = 163;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832E9DD8;
	sub_8320CF10(ctx, base);
loc_832E9DD8:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832e9e00
	if (ctx.cr6.lt) goto loc_832E9E00;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-20672
	ctx.r5.s64 = ctx.r11.s64 + -20672;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,164
	ctx.r7.s64 = 164;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832E9E00;
	sub_8320CF10(ctx, base);
loc_832E9E00:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mulli r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 * 12;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832e9e34
	if (ctx.cr6.lt) goto loc_832E9E34;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-20744
	ctx.r5.s64 = ctx.r11.s64 + -20744;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,165
	ctx.r7.s64 = 165;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832E9E34;
	sub_8320CF10(ctx, base);
loc_832E9E34:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r8,r29
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832E9E64"))) PPC_WEAK_FUNC(sub_832E9E64);
PPC_FUNC_IMPL(__imp__sub_832E9E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E9E68"))) PPC_WEAK_FUNC(sub_832E9E68);
PPC_FUNC_IMPL(__imp__sub_832E9E68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,0,16,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFCFFFF;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,96(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	// rlwinm r11,r11,0,28,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// stw r11,96(r5)
	PPC_STORE_U32(ctx.r5.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832E9E84"))) PPC_WEAK_FUNC(sub_832E9E84);
PPC_FUNC_IMPL(__imp__sub_832E9E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832E9E88"))) PPC_WEAK_FUNC(sub_832E9E88);
PPC_FUNC_IMPL(__imp__sub_832E9E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832E9E90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832E9EAC;
	sub_83214BF0(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// beq 0x832e9ff4
	if (ctx.cr0.eq) goto loc_832E9FF4;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x832ceb20
	ctx.lr = 0x832E9ECC;
	sub_832CEB20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832e9f3c
	if (ctx.cr0.eq) goto loc_832E9F3C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832E9ED8:
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bge cr6,0x832e9f34
	if (!ctx.cr6.lt) goto loc_832E9F34;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214f50
	ctx.lr = 0x832E9EF0;
	sub_83214F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832e9f24
	if (ctx.cr0.eq) goto loc_832E9F24;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// blt cr6,0x832e9f24
	if (ctx.cr6.lt) goto loc_832E9F24;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// ble cr6,0x832e9f20
	if (!ctx.cr6.gt) goto loc_832E9F20;
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x832e9f24
	if (ctx.cr6.gt) goto loc_832E9F24;
loc_832E9F20:
	// li r27,0
	ctx.r27.s64 = 0;
loc_832E9F24:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832e9ed8
	if (!ctx.cr6.eq) goto loc_832E9ED8;
loc_832E9F34:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x832e9ff4
	if (!ctx.cr6.eq) goto loc_832E9FF4;
loc_832E9F3C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214f50
	ctx.lr = 0x832E9F4C;
	sub_83214F50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r11,r3,0,27,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214f50
	ctx.lr = 0x832E9F68;
	sub_83214F50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r11,r3,8,19,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0x1F00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE0FF);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214f50
	ctx.lr = 0x832E9F84;
	sub_83214F50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r11,r3,5,24,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 5) & 0xE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF1F);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214f50
	ctx.lr = 0x832E9FA0;
	sub_83214F50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r11,r3,16,11,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0x1F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFE0FFFF);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214f50
	ctx.lr = 0x832E9FBC;
	sub_83214F50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r11,r3,24,3,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 24) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214f50
	ctx.lr = 0x832E9FD8;
	sub_83214F50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r3,21,8,10
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 21) & 0xE00000) | (ctx.r11.u64 & 0xFFFFFFFFFF1FFFFF);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x832ea00c
	goto loc_832EA00C;
loc_832E9FF4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// rlwimi r10,r11,0,19,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE000);
	// rlwimi r10,r11,0,3,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1FFF0000) | (ctx.r10.u64 & 0xFFFFFFFFE000FFFF);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_832EA00C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EA014"))) PPC_WEAK_FUNC(sub_832EA014);
PPC_FUNC_IMPL(__imp__sub_832EA014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EA018"))) PPC_WEAK_FUNC(sub_832EA018);
PPC_FUNC_IMPL(__imp__sub_832EA018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832EA020;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832EA030;
	sub_83214BF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832EA040;
	sub_83214BF0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,31
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 31, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,15600
	ctx.r29.s64 = ctx.r10.s64 + 15600;
	// beq cr6,0x832ea080
	if (ctx.cr6.eq) goto loc_832EA080;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// beq cr6,0x832ea080
	if (ctx.cr6.eq) goto loc_832EA080;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,15808
	ctx.r5.s64 = ctx.r11.s64 + 15808;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EA080;
	sub_8320CF10(ctx, base);
loc_832EA080:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x832ea0ac
	if (ctx.cr6.eq) goto loc_832EA0AC;
	// cmplwi cr6,r28,64
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 64, ctx.xer);
	// beq cr6,0x832ea0ac
	if (ctx.cr6.eq) goto loc_832EA0AC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,15720
	ctx.r5.s64 = ctx.r11.s64 + 15720;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,388
	ctx.r7.s64 = 388;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EA0AC;
	sub_8320CF10(ctx, base);
loc_832EA0AC:
	// cmplwi cr6,r31,31
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 31, ctx.xer);
	// blt cr6,0x832ea0cc
	if (ctx.cr6.lt) goto loc_832EA0CC;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bgt cr6,0x832ea0cc
	if (ctx.cr6.gt) goto loc_832EA0CC;
	// addi r11,r28,-64
	ctx.r11.s64 = ctx.r28.s64 + -64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x832ea0d0
	goto loc_832EA0D0;
loc_832EA0CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832EA0D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EA0D8"))) PPC_WEAK_FUNC(sub_832EA0D8);
PPC_FUNC_IMPL(__imp__sub_832EA0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x832EA0E0;
	__savegprlr_17(ctx, base);
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r9,r10,-21000
	ctx.r9.s64 = ctx.r10.s64 + -21000;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// lwz r27,8(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r18,r11,-21168
	ctx.r18.s64 = ctx.r11.s64 + -21168;
	// addi r17,r10,15600
	ctx.r17.s64 = ctx.r10.s64 + 15600;
	// bne cr6,0x832ea130
	if (!ctx.cr6.eq) goto loc_832EA130;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r7,655
	ctx.r7.s64 = 655;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EA130;
	sub_8320CF10(ctx, base);
loc_832EA130:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832ea154
	if (!ctx.cr6.eq) goto loc_832EA154;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// addi r5,r11,-5864
	ctx.r5.s64 = ctx.r11.s64 + -5864;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r7,656
	ctx.r7.s64 = 656;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EA154;
	sub_8320CF10(ctx, base);
loc_832EA154:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r29,67
	ctx.r29.s64 = 67;
	// addi r26,r11,15016
	ctx.r26.s64 = ctx.r11.s64 + 15016;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_832EA164:
	// lwz r25,0(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r11,r25,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x832eb2f0
	ctx.lr = 0x832EA17C;
	sub_832EB2F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832eb2f0
	ctx.lr = 0x832EA1A8;
	sub_832EB2F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r3,r11
	ctx.r25.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832EA1C4;
	sub_83214BF0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// slw r11,r3,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// bne 0x832ea164
	if (!ctx.cr0.eq) goto loc_832EA164;
	// addi r11,r26,268
	ctx.r11.s64 = ctx.r26.s64 + 268;
	// li r26,6
	ctx.r26.s64 = 6;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// li r21,0
	ctx.r21.s64 = 0;
loc_832EA1FC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832ea2a4
	if (!ctx.cr6.gt) goto loc_832EA2A4;
loc_832EA20C:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,-4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832e9d88
	ctx.lr = 0x832EA220;
	sub_832E9D88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x832eb2f0
	ctx.lr = 0x832EA238;
	sub_832EB2F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832eb2f0
	ctx.lr = 0x832EA264;
	sub_832EB2F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832ea20c
	if (ctx.cr6.lt) goto loc_832EA20C;
loc_832EA2A4:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// bne 0x832ea1fc
	if (!ctx.cr0.eq) goto loc_832EA1FC;
	// lwz r11,24(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// addi r19,r11,8
	ctx.r19.s64 = ctx.r11.s64 + 8;
	// addi r11,r19,4
	ctx.r11.s64 = ctx.r19.s64 + 4;
	// addi r10,r19,12
	ctx.r10.s64 = ctx.r19.s64 + 12;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r19,20
	ctx.r11.s64 = ctx.r19.s64 + 20;
	// addi r9,r19,16
	ctx.r9.s64 = ctx.r19.s64 + 16;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r26,r11,16152
	ctx.r26.s64 = ctx.r11.s64 + 16152;
loc_832EA2E8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x832EA2F8;
	sub_83214F50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x832EA30C;
	sub_83214F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832ea364
	if (ctx.cr0.eq) goto loc_832EA364;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83313a60
	ctx.lr = 0x832EA324;
	sub_83313A60(ctx, base);
	// lwz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r11,r28,0,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFF800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r21,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r21.u32);
	// beq 0x832ea34c
	if (ctx.cr0.eq) goto loc_832EA34C;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r7,718
	ctx.r7.s64 = 718;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EA34C;
	sub_8320CF10(ctx, base);
loc_832EA34C:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_832EA364:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x832ea2e8
	if (ctx.cr6.lt) goto loc_832EA2E8;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832EA380;
	sub_83214BF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832ea018
	ctx.lr = 0x832EA38C;
	sub_832EA018(ctx, base);
	// rlwinm. r11,r31,0,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFF800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// beq 0x832ea3b0
	if (ctx.cr0.eq) goto loc_832EA3B0;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r7,739
	ctx.r7.s64 = 739;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EA3B0;
	sub_8320CF10(ctx, base);
loc_832EA3B0:
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// li r4,652
	ctx.r4.s64 = 652;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwimi r11,r29,16,15,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// rlwimi r11,r31,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,8(r19)
	PPC_STORE_U32(ctx.r19.u32 + 8, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EA3CC;
	sub_83214BF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,957
	ctx.r4.s64 = 957;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832EA3DC;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x832ea3fc
	if (!ctx.cr6.eq) goto loc_832EA3FC;
	// clrlwi. r11,r31,28
	ctx.r11.u64 = ctx.r31.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ea420
	if (ctx.cr0.eq) goto loc_832EA420;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r7,755
	ctx.r7.s64 = 755;
	// addi r5,r11,16132
	ctx.r5.s64 = ctx.r11.s64 + 16132;
	// b 0x832ea410
	goto loc_832EA410;
loc_832EA3FC:
	// clrlwi. r11,r31,27
	ctx.r11.u64 = ctx.r31.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ea420
	if (ctx.cr0.eq) goto loc_832EA420;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r7,759
	ctx.r7.s64 = 759;
	// addi r5,r11,16112
	ctx.r5.s64 = ctx.r11.s64 + 16112;
loc_832EA410:
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EA420;
	sub_8320CF10(ctx, base);
loc_832EA420:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r4,654
	ctx.r4.s64 = 654;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwimi r11,r31,0,18,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0x3FFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC000);
	// rlwinm r11,r11,0,16,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFCFFFF;
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// bl 0x83214bf0
	ctx.lr = 0x832EA444;
	sub_83214BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832ea454
	if (!ctx.cr0.eq) goto loc_832EA454;
	// sth r21,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r21.u16);
	// b 0x832ea490
	goto loc_832EA490;
loc_832EA454:
	// li r4,654
	ctx.r4.s64 = 654;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832EA460;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x832ea484
	if (ctx.cr6.eq) goto loc_832EA484;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// addi r5,r11,16064
	ctx.r5.s64 = ctx.r11.s64 + 16064;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r7,786
	ctx.r7.s64 = 786;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EA484;
	sub_8320CF10(ctx, base);
loc_832EA484:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832EA490:
	// li r4,572
	ctx.r4.s64 = 572;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832EA49C;
	sub_83214BF0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r21,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r21.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r21,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r21.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// sth r21,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r21.u16);
	// rlwinm r25,r10,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// li r22,1
	ctx.r22.s64 = 1;
	// addi r26,r11,15992
	ctx.r26.s64 = ctx.r11.s64 + 15992;
loc_832EA4D4:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,52(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 52);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83215270
	ctx.lr = 0x832EA4E4;
	sub_83215270(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ea5f4
	if (ctx.cr6.eq) goto loc_832EA5F4;
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ea518
	if (ctx.cr6.eq) goto loc_832EA518;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832ea5d8
	if (ctx.cr6.eq) goto loc_832EA5D8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// slw r10,r22,r27
	ctx.r10.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r27.u8 & 0x3F));
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// sth r11,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r11.u16);
	// b 0x832ea5d8
	goto loc_832EA5D8;
loc_832EA518:
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ea5d8
	if (ctx.cr6.eq) goto loc_832EA5D8;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_832EA528:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x83214f50
	ctx.lr = 0x832EA540;
	sub_83214F50(ctx, base);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x832ea58c
	if (ctx.cr6.lt) goto loc_832EA58C;
	// beq cr6,0x832ea584
	if (ctx.cr6.eq) goto loc_832EA584;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// blt cr6,0x832ea57c
	if (ctx.cr6.lt) goto loc_832EA57C;
	// beq cr6,0x832ea574
	if (ctx.cr6.eq) goto loc_832EA574;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r7,877
	ctx.r7.s64 = 877;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EA570;
	sub_8320CF10(ctx, base);
	// b 0x832ea5cc
	goto loc_832EA5CC;
loc_832EA574:
	// rlwinm r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// b 0x832ea590
	goto loc_832EA590;
loc_832EA57C:
	// rlwinm r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// b 0x832ea590
	goto loc_832EA590;
loc_832EA584:
	// rlwinm r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// b 0x832ea590
	goto loc_832EA590;
loc_832EA58C:
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
loc_832EA590:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ea5cc
	if (ctx.cr6.eq) goto loc_832EA5CC;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32, ctx.xer);
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// bge cr6,0x832ea5b8
	if (!ctx.cr6.lt) goto loc_832EA5B8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// slw r11,r22,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x832ea5cc
	goto loc_832EA5CC;
loc_832EA5B8:
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// slw r11,r22,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_832EA5CC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x832ea528
	if (ctx.cr6.lt) goto loc_832EA528;
loc_832EA5D8:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832ea5f4
	if (!ctx.cr6.eq) goto loc_832EA5F4;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// slw r10,r22,r27
	ctx.r10.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r27.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
loc_832EA5F4:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r28,64
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 64, ctx.xer);
	// blt cr6,0x832ea4d4
	if (ctx.cr6.lt) goto loc_832EA4D4;
	// li r4,95
	ctx.r4.s64 = 95;
	// lwz r31,32(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832EA614;
	sub_83214BF0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwimi r10,r11,16,15,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x10000) | (ctx.r10.u64 & 0xFFFFFFFFFFFEFFFF);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x832e9e88
	ctx.lr = 0x832EA638;
	sub_832E9E88(ctx, base);
	// li r4,571
	ctx.r4.s64 = 571;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832EA648;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x832ea668
	if (!ctx.cr6.eq) goto loc_832EA668;
	// li r4,570
	ctx.r4.s64 = 570;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832EA65C;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x832ea668
	if (!ctx.cr6.eq) goto loc_832EA668;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_832EA668:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,154
	ctx.r4.s64 = 154;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwimi r11,r29,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EA680;
	sub_83214BF0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,28
	ctx.r4.s64 = 28;
	// rlwimi r11,r3,0,26,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EA698;
	sub_83214BF0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,27
	ctx.r4.s64 = 27;
	// rlwimi r11,r3,0,29,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EA6B0;
	sub_83214BF0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,29
	ctx.r4.s64 = 29;
	// rlwimi r11,r3,3,28,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 3) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EA6C8;
	sub_83214BF0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,671
	ctx.r4.s64 = 671;
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EA6E4;
	sub_83214BF0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,128
	ctx.r4.s64 = 128;
	// rlwimi r3,r11,0,0,28
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF8) | (ctx.r3.u64 & 0xFFFFFFFF00000007);
	// rlwinm r11,r10,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,36(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 36);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// bl 0x832d6f28
	ctx.lr = 0x832EA710;
	sub_832D6F28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// lfs f31,6380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x83312f88
	ctx.lr = 0x832EA728;
	sub_83312F88(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r4,129
	ctx.r4.s64 = 129;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// bl 0x832d6f28
	ctx.lr = 0x832EA740;
	sub_832D6F28(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x83312f88
	ctx.lr = 0x832EA750;
	sub_83312F88(ctx, base);
	// sth r3,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r3.u16);
	// li r4,130
	ctx.r4.s64 = 130;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d6f28
	ctx.lr = 0x832EA760;
	sub_832D6F28(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x83312f88
	ctx.lr = 0x832EA770;
	sub_83312F88(ctx, base);
	// sth r3,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r3.u16);
	// li r4,573
	ctx.r4.s64 = 573;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d6f28
	ctx.lr = 0x832EA780;
	sub_832D6F28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,971
	ctx.r4.s64 = 971;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,9080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9080);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r11,31,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFFF;
	// sth r11,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r11.u16);
	// bl 0x83214bf0
	ctx.lr = 0x832EA7AC;
	sub_83214BF0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x832eaa9c
	if (!ctx.cr6.eq) goto loc_832EAA9C;
	// li r4,974
	ctx.r4.s64 = 974;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832EA7C0;
	sub_83214BF0(ctx, base);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// beq cr6,0x832ea7d8
	if (ctx.cr6.eq) goto loc_832EA7D8;
	// stw r22,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r22.u32);
	// b 0x832ea7dc
	goto loc_832EA7DC;
loc_832EA7D8:
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_832EA7DC:
	// li r4,973
	ctx.r4.s64 = 973;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d6f28
	ctx.lr = 0x832EA7E8;
	sub_832D6F28(ctx, base);
	// stfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// li r4,972
	ctx.r4.s64 = 972;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d6f28
	ctx.lr = 0x832EA7F8;
	sub_832D6F28(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// li r4,567
	ctx.r4.s64 = 567;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832EA810;
	sub_83214BF0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,568
	ctx.r4.s64 = 568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832EA820;
	sub_83214BF0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r4,569
	ctx.r4.s64 = 569;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832EA830;
	sub_83214BF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r23,4
	ctx.r23.s64 = 4;
	// addi r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// addi r26,r11,18988
	ctx.r26.s64 = ctx.r11.s64 + 18988;
	// blt cr6,0x832ea87c
	if (ctx.cr6.lt) goto loc_832EA87C;
	// beq cr6,0x832ea880
	if (ctx.cr6.eq) goto loc_832EA880;
	// cmplwi cr6,r25,3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 3, ctx.xer);
	// blt cr6,0x832ea8c8
	if (ctx.cr6.lt) goto loc_832EA8C8;
	// beq cr6,0x832ea8c8
	if (ctx.cr6.eq) goto loc_832EA8C8;
	// cmplwi cr6,r25,5
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 5, ctx.xer);
	// blt cr6,0x832ea8c0
	if (ctx.cr6.lt) goto loc_832EA8C0;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r7,1138
	ctx.r7.s64 = 1138;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EA87C;
	sub_8320CF10(ctx, base);
loc_832EA87C:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_832EA880:
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// blt cr6,0x832ea8e4
	if (ctx.cr6.lt) goto loc_832EA8E4;
	// beq cr6,0x832ea8d0
	if (ctx.cr6.eq) goto loc_832EA8D0;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// blt cr6,0x832ea8b8
	if (ctx.cr6.lt) goto loc_832EA8B8;
	// beq cr6,0x832ea8b8
	if (ctx.cr6.eq) goto loc_832EA8B8;
	// cmplwi cr6,r24,5
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 5, ctx.xer);
	// blt cr6,0x832ea8b8
	if (ctx.cr6.lt) goto loc_832EA8B8;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r7,1168
	ctx.r7.s64 = 1168;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EA8B8;
	sub_8320CF10(ctx, base);
loc_832EA8B8:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// b 0x832ea8e8
	goto loc_832EA8E8;
loc_832EA8C0:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// b 0x832ea880
	goto loc_832EA880;
loc_832EA8C8:
	// li r27,3
	ctx.r27.s64 = 3;
	// b 0x832ea880
	goto loc_832EA880;
loc_832EA8D0:
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// b 0x832ea8e8
	goto loc_832EA8E8;
loc_832EA8E4:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_832EA8E8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwimi r11,r24,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// rlwimi r11,r25,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r25.u32, 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// rlwinm r11,r11,0,18,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF3FFF;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bne cr6,0x832ea9a8
	if (!ctx.cr6.eq) goto loc_832EA9A8;
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r7,r29,16,12,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xF0000;
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r5,r29,24,4,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xF000000;
	// stw r22,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r22.u32);
	// or r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r22,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r22.u32);
	// lis r12,3855
	ctx.r12.s64 = 252641280;
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rlwimi r9,r28,4,24,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r28.u32, 4) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// rlwinm r9,r9,8,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00;
	// and r7,r7,r12
	ctx.r7.u64 = ctx.r7.u64 & ctx.r12.u64;
	// lis r5,24647
	ctx.r5.s64 = 1615265792;
	// li r4,7
	ctx.r4.s64 = 7;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// mullw r3,r27,r28
	ctx.r3.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r28.s32);
	// rlwinm r7,r28,21,8,10
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 21) & 0xE00000;
	// ori r5,r5,9991
	ctx.r5.u64 = ctx.r5.u64 | 9991;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwimi r8,r4,0,28,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xF) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF0);
	// rlwimi r6,r22,0,28,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r22.u32, 0) & 0xF) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF0);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// stb r4,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r4.u8);
	// stb r21,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r21.u8);
	// stb r4,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r4.u8);
	// stb r10,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r10.u8);
	// rlwinm r11,r11,0,16,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwimi r5,r29,24,4,7
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r29.u32, 24) & 0xF000000) | (ctx.r5.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// b 0x832eaa9c
	goto loc_832EAA9C;
loc_832EA9A8:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x832eaa10
	if (!ctx.cr6.eq) goto loc_832EAA10;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r8,13
	ctx.r8.s64 = 13;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r7,24897
	ctx.r7.s64 = 1631649792;
	// rlwimi r9,r22,0,28,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r22.u32, 0) & 0xF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r23,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r23.u32);
	// lis r6,24902
	ctx.r6.s64 = 1631977472;
	// stw r23,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r23.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// ori r5,r10,15
	ctx.r5.u64 = ctx.r10.u64 | 15;
	// rlwimi r11,r8,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stb r21,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r21.u8);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// ori r9,r7,8455
	ctx.r9.u64 = ctx.r7.u64 | 8455;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// ori r8,r6,9734
	ctx.r8.u64 = ctx.r6.u64 | 9734;
	// stb r10,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r10.u8);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// stb r10,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r10.u8);
	// stb r10,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r10.u8);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// b 0x832eaa9c
	goto loc_832EAA9C;
loc_832EAA10:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r7,7
	ctx.r7.s64 = 7;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mullw r5,r27,r28
	ctx.r5.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r28.s32);
	// stw r21,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r21.u32);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwimi r8,r7,0,28,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xF) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF0);
	// rlwimi r11,r29,8,20,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0xF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF0FF);
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stb r5,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r5.u8);
	// stb r10,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r10.u8);
	// rlwinm r11,r6,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwimi r9,r29,16,12,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xF0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// rlwimi r11,r29,24,4,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 24) & 0xF000000) | (ctx.r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// stb r21,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r21.u8);
	// stb r21,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r21.u8);
	// rlwinm r11,r11,0,28,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwimi r11,r28,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwimi r11,r28,21,8,10
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 21) & 0xE00000) | (ctx.r11.u64 & 0xFFFFFFFFFF1FFFFF);
	// clrlwi r11,r11,4
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// rlwinm r11,r11,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_832EAA9C:
	// lwz r11,40(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 40);
	// li r4,624
	ctx.r4.s64 = 624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// bl 0x832d6f28
	ctx.lr = 0x832EAAB0;
	sub_832D6F28(ctx, base);
	// stfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r4,625
	ctx.r4.s64 = 625;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d6f28
	ctx.lr = 0x832EAAC0;
	sub_832D6F28(ctx, base);
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r4,626
	ctx.r4.s64 = 626;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d6f28
	ctx.lr = 0x832EAAD0;
	sub_832D6F28(ctx, base);
	// stfs f1,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r4,627
	ctx.r4.s64 = 627;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d6f28
	ctx.lr = 0x832EAAE0;
	sub_832D6F28(ctx, base);
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214f50
	ctx.lr = 0x832EAAF4;
	sub_83214F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832eab0c
	if (ctx.cr0.eq) goto loc_832EAB0C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833135e0
	ctx.lr = 0x832EAB0C;
	sub_833135E0(ctx, base);
loc_832EAB0C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 ^ 1;
	// bl 0x83313290
	ctx.lr = 0x832EAB34;
	sub_83313290(ctx, base);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bgt cr6,0x832eaba8
	if (ctx.cr6.gt) goto loc_832EABA8;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x832eab68
	if (ctx.cr6.eq) goto loc_832EAB68;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// addi r5,r11,15956
	ctx.r5.s64 = ctx.r11.s64 + 15956;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r7,1366
	ctx.r7.s64 = 1366;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EAB68;
	sub_8320CF10(ctx, base);
loc_832EAB68:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x832eab94
	if (ctx.cr6.eq) goto loc_832EAB94;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// addi r5,r11,15924
	ctx.r5.s64 = ctx.r11.s64 + 15924;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r7,1367
	ctx.r7.s64 = 1367;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EAB94;
	sub_8320CF10(ctx, base);
loc_832EAB94:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// b 0x832eabb0
	goto loc_832EABB0;
loc_832EABA8:
	// stw r21,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r21.u32);
	// stw r21,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r21.u32);
loc_832EABB0:
	// li r4,53
	ctx.r4.s64 = 53;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d6f28
	ctx.lr = 0x832EABBC;
	sub_832D6F28(ctx, base);
	// bl 0x83338178
	ctx.lr = 0x832EABC0;
	sub_83338178(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// li r4,672
	ctx.r4.s64 = 672;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832EABD0;
	sub_83214BF0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r4,673
	ctx.r4.s64 = 673;
	// rlwimi r11,r3,0,29,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EABE8;
	sub_83214BF0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r4,618
	ctx.r4.s64 = 618;
	// rlwimi r11,r3,4,25,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 4) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EAC00;
	sub_83214BF0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r4,55
	ctx.r4.s64 = 55;
	// rlwimi r11,r3,8,23,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EAC18;
	sub_83214BF0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r4,674
	ctx.r4.s64 = 674;
	// rlwimi r11,r3,9,22,22
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 9) & 0x200) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFDFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EAC30;
	sub_83214BF0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r4,675
	ctx.r4.s64 = 675;
	// rlwimi r11,r3,20,10,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 20) & 0x300000) | (ctx.r11.u64 & 0xFFFFFFFFFFCFFFFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EAC48;
	sub_83214BF0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// li r4,680
	ctx.r4.s64 = 680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832EAC58;
	sub_83214BF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi. r11,r29,27
	ctx.r11.u64 = ctx.r29.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832eac80
	if (ctx.cr0.eq) goto loc_832EAC80;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// addi r5,r11,15900
	ctx.r5.s64 = ctx.r11.s64 + 15900;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r7,1417
	ctx.r7.s64 = 1417;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EAC80;
	sub_8320CF10(ctx, base);
loc_832EAC80:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r4,681
	ctx.r4.s64 = 681;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwimi r11,r29,0,18,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0x3FFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC000);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EAC98;
	sub_83214BF0(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r4,676
	ctx.r4.s64 = 676;
	// rlwimi r11,r3,16,2,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0x3FFF0000) | (ctx.r11.u64 & 0xFFFFFFFFC000FFFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EACB0;
	sub_83214BF0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r4,622
	ctx.r4.s64 = 622;
	// rlwimi r11,r3,0,29,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EACC8;
	sub_83214BF0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r4,621
	ctx.r4.s64 = 621;
	// rlwimi r11,r3,3,28,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 3) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EACE0;
	sub_83214BF0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r4,670
	ctx.r4.s64 = 670;
	// rlwimi r11,r3,4,25,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 4) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EACF8;
	sub_83214BF0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r4,677
	ctx.r4.s64 = 677;
	// rlwimi r11,r3,7,19,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 7) & 0x1F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE07F);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EAD10;
	sub_83214BF0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r4,678
	ctx.r4.s64 = 678;
	// rlwimi r11,r3,13,16,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 13) & 0xE000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EAD28;
	sub_83214BF0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r4,679
	ctx.r4.s64 = 679;
	// rlwimi r11,r3,16,10,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EAD40;
	sub_83214BF0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r4,682
	ctx.r4.s64 = 682;
	// rlwimi r11,r3,24,7,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 24) & 0x1000000) | (ctx.r11.u64 & 0xFFFFFFFFFEFFFFFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EAD58;
	sub_83214BF0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r4,684
	ctx.r4.s64 = 684;
	// rlwimi r10,r11,0,0,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFFF00000007);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EAD74;
	sub_83214BF0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r4,683
	ctx.r4.s64 = 683;
	// rlwimi r11,r3,4,25,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 4) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EAD8C;
	sub_83214BF0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r4,685
	ctx.r4.s64 = 685;
	// rlwimi r11,r3,8,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x83214bf0
	ctx.lr = 0x832EADA4;
	sub_83214BF0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r21,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r21.u32);
	// rlwimi r11,r3,12,17,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 12) & 0x7000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF8FFF);
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm r11,r11,0,16,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFCFFFF;
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r11,r11,0,28,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r22,64(r20)
	PPC_STORE_U32(ctx.r20.u32 + 64, ctx.r22.u32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EADE4"))) PPC_WEAK_FUNC(sub_832EADE4);
PPC_FUNC_IMPL(__imp__sub_832EADE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EADE8"))) PPC_WEAK_FUNC(sub_832EADE8);
PPC_FUNC_IMPL(__imp__sub_832EADE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EADF0"))) PPC_WEAK_FUNC(sub_832EADF0);
PPC_FUNC_IMPL(__imp__sub_832EADF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832EADF8;
	__savegprlr_28(ctx, base);
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,16208
	ctx.r29.s64 = ctx.r10.s64 + 16208;
	// bne cr6,0x832eae34
	if (!ctx.cr6.eq) goto loc_832EAE34;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,203
	ctx.r7.s64 = 203;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EAE34;
	sub_8320CF10(ctx, base);
loc_832EAE34:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x832eae5c
	if (ctx.cr6.gt) goto loc_832EAE5C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,16184
	ctx.r5.s64 = ctx.r11.s64 + 16184;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,204
	ctx.r7.s64 = 204;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EAE5C;
	sub_8320CF10(ctx, base);
loc_832EAE5C:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bne 0x832eaf0c
	if (!ctx.cr0.eq) goto loc_832EAF0C;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832eae8c
	if (ctx.cr6.eq) goto loc_832EAE8C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EAE8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832EAE8C:
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832eaea8
	if (ctx.cr6.eq) goto loc_832EAEA8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EAEA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832EAEA8:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832eaeb8
	if (ctx.cr6.eq) goto loc_832EAEB8;
	// bl 0x832148b0
	ctx.lr = 0x832EAEB8;
	sub_832148B0(ctx, base);
loc_832EAEB8:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832eaec8
	if (ctx.cr6.eq) goto loc_832EAEC8;
	// bl 0x832148b0
	ctx.lr = 0x832EAEC8;
	sub_832148B0(ctx, base);
loc_832EAEC8:
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// li r29,6
	ctx.r29.s64 = 6;
loc_832EAED0:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832eaeec
	if (ctx.cr6.eq) goto loc_832EAEEC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EAEEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832EAEEC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x832eaed0
	if (!ctx.cr0.eq) goto loc_832EAED0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EAF0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832EAF0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EAF18"))) PPC_WEAK_FUNC(sub_832EAF18);
PPC_FUNC_IMPL(__imp__sub_832EAF18) {
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
	// bne cr6,0x832eaf54
	if (!ctx.cr6.eq) goto loc_832EAF54;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,16208
	ctx.r6.s64 = ctx.r11.s64 + 16208;
	// addi r5,r10,7984
	ctx.r5.s64 = ctx.r10.s64 + 7984;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,273
	ctx.r7.s64 = 273;
	// bl 0x8320cf10
	ctx.lr = 0x832EAF54;
	sub_8320CF10(ctx, base);
loc_832EAF54:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832EAF74"))) PPC_WEAK_FUNC(sub_832EAF74);
PPC_FUNC_IMPL(__imp__sub_832EAF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EAF78"))) PPC_WEAK_FUNC(sub_832EAF78);
PPC_FUNC_IMPL(__imp__sub_832EAF78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EAF80"))) PPC_WEAK_FUNC(sub_832EAF80);
PPC_FUNC_IMPL(__imp__sub_832EAF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832EAF88;
	__savegprlr_28(ctx, base);
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,16208
	ctx.r28.s64 = ctx.r10.s64 + 16208;
	// bne cr6,0x832eafc4
	if (!ctx.cr6.eq) goto loc_832EAFC4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3580
	ctx.r5.s64 = ctx.r11.s64 + 3580;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,325
	ctx.r7.s64 = 325;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EAFC4;
	sub_8320CF10(ctx, base);
loc_832EAFC4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832eafec
	if (!ctx.cr6.eq) goto loc_832EAFEC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,16364
	ctx.r5.s64 = ctx.r11.s64 + 16364;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,326
	ctx.r7.s64 = 326;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EAFEC;
	sub_8320CF10(ctx, base);
loc_832EAFEC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,1668
	ctx.r4.s64 = 1668;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EB000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x832eb030
	if (ctx.cr0.eq) goto loc_832EB030;
	// li r5,1668
	ctx.r5.s64 = 1668;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x832EB018;
	sub_82CB16F0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x832eb050
	goto loc_832EB050;
loc_832EB030:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,16304
	ctx.r5.s64 = ctx.r11.s64 + 16304;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,348
	ctx.r7.s64 = 348;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EB04C;
	sub_8320CF10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832EB050:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EB058"))) PPC_WEAK_FUNC(sub_832EB058);
PPC_FUNC_IMPL(__imp__sub_832EB058) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832eb084
	if (ctx.cr6.eq) goto loc_832EB084;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EB080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x832eb0a8
	goto loc_832EB0A8;
loc_832EB084:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,16208
	ctx.r6.s64 = ctx.r11.s64 + 16208;
	// addi r5,r10,16392
	ctx.r5.s64 = ctx.r10.s64 + 16392;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,384
	ctx.r7.s64 = 384;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EB0A8;
	sub_8320CF10(ctx, base);
loc_832EB0A8:
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

__attribute__((alias("__imp__sub_832EB0BC"))) PPC_WEAK_FUNC(sub_832EB0BC);
PPC_FUNC_IMPL(__imp__sub_832EB0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EB0C0"))) PPC_WEAK_FUNC(sub_832EB0C0);
PPC_FUNC_IMPL(__imp__sub_832EB0C0) {
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
	// bne cr6,0x832eb0fc
	if (!ctx.cr6.eq) goto loc_832EB0FC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,16208
	ctx.r6.s64 = ctx.r11.s64 + 16208;
	// addi r5,r10,7984
	ctx.r5.s64 = ctx.r10.s64 + 7984;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,413
	ctx.r7.s64 = 413;
	// bl 0x8320cf10
	ctx.lr = 0x832EB0FC;
	sub_8320CF10(ctx, base);
loc_832EB0FC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832EB118"))) PPC_WEAK_FUNC(sub_832EB118);
PPC_FUNC_IMPL(__imp__sub_832EB118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832EB120;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,16208
	ctx.r29.s64 = ctx.r10.s64 + 16208;
	// bne cr6,0x832eb15c
	if (!ctx.cr6.eq) goto loc_832EB15C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,443
	ctx.r7.s64 = 443;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EB15C;
	sub_8320CF10(ctx, base);
loc_832EB15C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832eb19c
	if (!ctx.cr6.eq) goto loc_832EB19C;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832eb17c
	if (ctx.cr6.eq) goto loc_832EB17C;
	// bl 0x83214ef8
	ctx.lr = 0x832EB178;
	sub_83214EF8(ctx, base);
	// b 0x832eb19c
	goto loc_832EB19C;
loc_832EB17C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,16412
	ctx.r5.s64 = ctx.r11.s64 + 16412;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,457
	ctx.r7.s64 = 457;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EB198;
	sub_8320CF10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832EB19C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EB1A4"))) PPC_WEAK_FUNC(sub_832EB1A4);
PPC_FUNC_IMPL(__imp__sub_832EB1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EB1A8"))) PPC_WEAK_FUNC(sub_832EB1A8);
PPC_FUNC_IMPL(__imp__sub_832EB1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832EB1B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,16208
	ctx.r29.s64 = ctx.r10.s64 + 16208;
	// bne cr6,0x832eb1ec
	if (!ctx.cr6.eq) goto loc_832EB1EC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,489
	ctx.r7.s64 = 489;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EB1EC;
	sub_8320CF10(ctx, base);
loc_832EB1EC:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832eb238
	if (!ctx.cr6.eq) goto loc_832EB238;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832eb20c
	if (ctx.cr6.eq) goto loc_832EB20C;
	// bl 0x83214ef8
	ctx.lr = 0x832EB208;
	sub_83214EF8(ctx, base);
	// b 0x832eb238
	goto loc_832EB238;
loc_832EB20C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x832eb234
	if (ctx.cr6.eq) goto loc_832EB234;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,16424
	ctx.r5.s64 = ctx.r11.s64 + 16424;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,503
	ctx.r7.s64 = 503;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EB234;
	sub_8320CF10(ctx, base);
loc_832EB234:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832EB238:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EB240"))) PPC_WEAK_FUNC(sub_832EB240);
PPC_FUNC_IMPL(__imp__sub_832EB240) {
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
	// bne cr6,0x832eb27c
	if (!ctx.cr6.eq) goto loc_832EB27C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,16208
	ctx.r6.s64 = ctx.r11.s64 + 16208;
	// addi r5,r10,7984
	ctx.r5.s64 = ctx.r10.s64 + 7984;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,539
	ctx.r7.s64 = 539;
	// bl 0x8320cf10
	ctx.lr = 0x832EB27C;
	sub_8320CF10(ctx, base);
loc_832EB27C:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
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

__attribute__((alias("__imp__sub_832EB294"))) PPC_WEAK_FUNC(sub_832EB294);
PPC_FUNC_IMPL(__imp__sub_832EB294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EB298"))) PPC_WEAK_FUNC(sub_832EB298);
PPC_FUNC_IMPL(__imp__sub_832EB298) {
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
	// bne cr6,0x832eb2d4
	if (!ctx.cr6.eq) goto loc_832EB2D4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,16208
	ctx.r6.s64 = ctx.r11.s64 + 16208;
	// addi r5,r10,7984
	ctx.r5.s64 = ctx.r10.s64 + 7984;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,574
	ctx.r7.s64 = 574;
	// bl 0x8320cf10
	ctx.lr = 0x832EB2D4;
	sub_8320CF10(ctx, base);
loc_832EB2D4:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
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

__attribute__((alias("__imp__sub_832EB2EC"))) PPC_WEAK_FUNC(sub_832EB2EC);
PPC_FUNC_IMPL(__imp__sub_832EB2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EB2F0"))) PPC_WEAK_FUNC(sub_832EB2F0);
PPC_FUNC_IMPL(__imp__sub_832EB2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832EB2F8;
	__savegprlr_28(ctx, base);
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
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,16208
	ctx.r29.s64 = ctx.r10.s64 + 16208;
	// bne cr6,0x832eb338
	if (!ctx.cr6.eq) goto loc_832EB338;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,604
	ctx.r7.s64 = 604;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EB338;
	sub_8320CF10(ctx, base);
loc_832EB338:
	// cmplwi cr6,r28,6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 6, ctx.xer);
	// blt cr6,0x832eb35c
	if (ctx.cr6.lt) goto loc_832EB35C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,16456
	ctx.r5.s64 = ctx.r11.s64 + 16456;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,606
	ctx.r7.s64 = 606;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EB35C;
	sub_8320CF10(ctx, base);
loc_832EB35C:
	// addi r11,r28,6
	ctx.r11.s64 = ctx.r28.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EB370"))) PPC_WEAK_FUNC(sub_832EB370);
PPC_FUNC_IMPL(__imp__sub_832EB370) {
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
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x832eb40c
	if (ctx.cr6.eq) goto loc_832EB40C;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// beq cr6,0x832eb404
	if (ctx.cr6.eq) goto loc_832EB404;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x832eb3fc
	if (ctx.cr6.eq) goto loc_832EB3FC;
	// cmpwi cr6,r11,119
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 119, ctx.xer);
	// beq cr6,0x832eb3f4
	if (ctx.cr6.eq) goto loc_832EB3F4;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x832eb3dc
	if (ctx.cr6.eq) goto loc_832EB3DC;
	// cmpwi cr6,r11,121
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 121, ctx.xer);
	// beq cr6,0x832eb3ec
	if (ctx.cr6.eq) goto loc_832EB3EC;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// beq cr6,0x832eb3e4
	if (ctx.cr6.eq) goto loc_832EB3E4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,16208
	ctx.r6.s64 = ctx.r11.s64 + 16208;
	// addi r5,r10,16492
	ctx.r5.s64 = ctx.r10.s64 + 16492;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,703
	ctx.r7.s64 = 703;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EB3DC;
	sub_8320CF10(ctx, base);
loc_832EB3DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832eb410
	goto loc_832EB410;
loc_832EB3E4:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x832eb410
	goto loc_832EB410;
loc_832EB3EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832eb410
	goto loc_832EB410;
loc_832EB3F4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x832eb410
	goto loc_832EB410;
loc_832EB3FC:
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x832eb410
	goto loc_832EB410;
loc_832EB404:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x832eb410
	goto loc_832EB410;
loc_832EB40C:
	// li r3,4
	ctx.r3.s64 = 4;
loc_832EB410:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EB420"))) PPC_WEAK_FUNC(sub_832EB420);
PPC_FUNC_IMPL(__imp__sub_832EB420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832EB428;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83310030
	ctx.lr = 0x832EB464;
	sub_83310030(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8330fd90
	ctx.lr = 0x832EB480;
	sub_8330FD90(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwimi r10,r11,12,19,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x1000) | (ctx.r10.u64 & 0xFFFFFFFFFFFFEFFF);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwimi r9,r11,19,12,12
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 19) & 0x80000) | (ctx.r9.u64 & 0xFFFFFFFFFFF7FFFF);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwimi r11,r10,18,13,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0x40000) | (ctx.r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwimi r10,r11,17,14,14
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0x20000) | (ctx.r10.u64 & 0xFFFFFFFFFFFDFFFF);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r11,r10,16,15,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwimi r10,r11,10,16,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 10) & 0xFC00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF03FF);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r11,r10,2,24,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF03);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwimi r9,r11,1,8,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0xFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFFFF000001);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x832eb370
	ctx.lr = 0x832EB538;
	sub_832EB370(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwimi r11,r3,29,0,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 29) & 0xE0000000) | (ctx.r11.u64 & 0xFFFFFFFF1FFFFFFF);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// bl 0x832eb370
	ctx.lr = 0x832EB550;
	sub_832EB370(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwimi r11,r3,26,3,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 26) & 0x1C000000) | (ctx.r11.u64 & 0xFFFFFFFFE3FFFFFF);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// bl 0x832eb370
	ctx.lr = 0x832EB568;
	sub_832EB370(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwimi r11,r3,23,6,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 23) & 0x3800000) | (ctx.r11.u64 & 0xFFFFFFFFFC7FFFFF);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// bl 0x832eb370
	ctx.lr = 0x832EB580;
	sub_832EB370(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwimi r11,r3,20,9,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 20) & 0x700000) | (ctx.r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EB594"))) PPC_WEAK_FUNC(sub_832EB594);
PPC_FUNC_IMPL(__imp__sub_832EB594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EB598"))) PPC_WEAK_FUNC(sub_832EB598);
PPC_FUNC_IMPL(__imp__sub_832EB598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832EB5A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x83215328
	ctx.lr = 0x832EB5B8;
	sub_83215328(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x83213648
	ctx.lr = 0x832EB5C0;
	sub_83213648(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832eb688
	if (ctx.cr0.eq) goto loc_832EB688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214ef8
	ctx.lr = 0x832EB5D0;
	sub_83214EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832EB5F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832EB604;
	sub_82CB1160(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832139f8
	ctx.lr = 0x832EB60C;
	sub_832139F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x832eb680
	if (ctx.cr0.eq) goto loc_832EB680;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r28,r9,-21168
	ctx.r28.s64 = ctx.r9.s64 + -21168;
	// addi r27,r10,16536
	ctx.r27.s64 = ctx.r10.s64 + 16536;
	// addi r26,r11,16208
	ctx.r26.s64 = ctx.r11.s64 + 16208;
loc_832EB62C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214130
	ctx.lr = 0x832EB634;
	sub_83214130(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832eb65c
	if (ctx.cr6.eq) goto loc_832EB65C;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,842
	ctx.r7.s64 = 842;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EB658;
	sub_8320CF10(ctx, base);
	// b 0x832eb66c
	goto loc_832EB66C;
loc_832EB65C:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832eb420
	ctx.lr = 0x832EB66C;
	sub_832EB420(ctx, base);
loc_832EB66C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83214088
	ctx.lr = 0x832EB678;
	sub_83214088(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832eb62c
	if (!ctx.cr0.eq) goto loc_832EB62C;
loc_832EB680:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x832eb68c
	goto loc_832EB68C;
loc_832EB688:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832EB68C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EB694"))) PPC_WEAK_FUNC(sub_832EB694);
PPC_FUNC_IMPL(__imp__sub_832EB694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EB698"))) PPC_WEAK_FUNC(sub_832EB698);
PPC_FUNC_IMPL(__imp__sub_832EB698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832EB6A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r26,r11,-21168
	ctx.r26.s64 = ctx.r11.s64 + -21168;
	// addi r25,r10,16208
	ctx.r25.s64 = ctx.r10.s64 + 16208;
	// bne cr6,0x832eb6f0
	if (!ctx.cr6.eq) goto loc_832EB6F0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1091
	ctx.r7.s64 = 1091;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EB6F0;
	sub_8320CF10(ctx, base);
loc_832EB6F0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x832eb700
	if (!ctx.cr6.eq) goto loc_832EB700;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x832eb728
	goto loc_832EB728;
loc_832EB700:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// beq cr6,0x832eb724
	if (ctx.cr6.eq) goto loc_832EB724;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,-4684
	ctx.r5.s64 = ctx.r11.s64 + -4684;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1101
	ctx.r7.s64 = 1101;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EB724;
	sub_8320CF10(ctx, base);
loc_832EB724:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_832EB728:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83215b88
	ctx.lr = 0x832EB73C;
	sub_83215B88(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EB744"))) PPC_WEAK_FUNC(sub_832EB744);
PPC_FUNC_IMPL(__imp__sub_832EB744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EB748"))) PPC_WEAK_FUNC(sub_832EB748);
PPC_FUNC_IMPL(__imp__sub_832EB748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832EB750;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,16208
	ctx.r27.s64 = ctx.r10.s64 + 16208;
	// bne cr6,0x832eb7a0
	if (!ctx.cr6.eq) goto loc_832EB7A0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1154
	ctx.r7.s64 = 1154;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EB7A0;
	sub_8320CF10(ctx, base);
loc_832EB7A0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x832eb7b0
	if (!ctx.cr6.eq) goto loc_832EB7B0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x832eb7d8
	goto loc_832EB7D8;
loc_832EB7B0:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// beq cr6,0x832eb7d4
	if (ctx.cr6.eq) goto loc_832EB7D4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-4684
	ctx.r5.s64 = ctx.r11.s64 + -4684;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1164
	ctx.r7.s64 = 1164;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EB7D4;
	sub_8320CF10(ctx, base);
loc_832EB7D4:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_832EB7D8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83215e60
	ctx.lr = 0x832EB7E8;
	sub_83215E60(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EB7F4"))) PPC_WEAK_FUNC(sub_832EB7F4);
PPC_FUNC_IMPL(__imp__sub_832EB7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EB7F8"))) PPC_WEAK_FUNC(sub_832EB7F8);
PPC_FUNC_IMPL(__imp__sub_832EB7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832EB800;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r26,r11,-21168
	ctx.r26.s64 = ctx.r11.s64 + -21168;
	// addi r25,r10,16208
	ctx.r25.s64 = ctx.r10.s64 + 16208;
	// bne cr6,0x832eb850
	if (!ctx.cr6.eq) goto loc_832EB850;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1223
	ctx.r7.s64 = 1223;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EB850;
	sub_8320CF10(ctx, base);
loc_832EB850:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x832eb860
	if (!ctx.cr6.eq) goto loc_832EB860;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x832eb888
	goto loc_832EB888;
loc_832EB860:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// beq cr6,0x832eb884
	if (ctx.cr6.eq) goto loc_832EB884;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,-4684
	ctx.r5.s64 = ctx.r11.s64 + -4684;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1233
	ctx.r7.s64 = 1233;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EB884;
	sub_8320CF10(ctx, base);
loc_832EB884:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_832EB888:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83215ec8
	ctx.lr = 0x832EB89C;
	sub_83215EC8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EB8A4"))) PPC_WEAK_FUNC(sub_832EB8A4);
PPC_FUNC_IMPL(__imp__sub_832EB8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EB8A8"))) PPC_WEAK_FUNC(sub_832EB8A8);
PPC_FUNC_IMPL(__imp__sub_832EB8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832EB8B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,16208
	ctx.r27.s64 = ctx.r10.s64 + 16208;
	// bne cr6,0x832eb8f8
	if (!ctx.cr6.eq) goto loc_832EB8F8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1284
	ctx.r7.s64 = 1284;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EB8F8;
	sub_8320CF10(ctx, base);
loc_832EB8F8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x832eb908
	if (!ctx.cr6.eq) goto loc_832EB908;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x832eb930
	goto loc_832EB930;
loc_832EB908:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// beq cr6,0x832eb92c
	if (ctx.cr6.eq) goto loc_832EB92C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-4684
	ctx.r5.s64 = ctx.r11.s64 + -4684;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1293
	ctx.r7.s64 = 1293;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EB92C;
	sub_8320CF10(ctx, base);
loc_832EB92C:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_832EB930:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83215f30
	ctx.lr = 0x832EB93C;
	sub_83215F30(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EB944"))) PPC_WEAK_FUNC(sub_832EB944);
PPC_FUNC_IMPL(__imp__sub_832EB944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EB948"))) PPC_WEAK_FUNC(sub_832EB948);
PPC_FUNC_IMPL(__imp__sub_832EB948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x832EB950;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,-21168
	ctx.r27.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,16208
	ctx.r26.s64 = ctx.r10.s64 + 16208;
	// bne cr6,0x832eb99c
	if (!ctx.cr6.eq) goto loc_832EB99C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1348
	ctx.r7.s64 = 1348;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EB99C;
	sub_8320CF10(ctx, base);
loc_832EB99C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x832eb9ac
	if (!ctx.cr6.eq) goto loc_832EB9AC;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x832eb9d4
	goto loc_832EB9D4;
loc_832EB9AC:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// beq cr6,0x832eb9d0
	if (ctx.cr6.eq) goto loc_832EB9D0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-4684
	ctx.r5.s64 = ctx.r11.s64 + -4684;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1357
	ctx.r7.s64 = 1357;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EB9D0;
	sub_8320CF10(ctx, base);
loc_832EB9D0:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_832EB9D4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83215f88
	ctx.lr = 0x832EB9E4;
	sub_83215F88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EB9EC"))) PPC_WEAK_FUNC(sub_832EB9EC);
PPC_FUNC_IMPL(__imp__sub_832EB9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EB9F0"))) PPC_WEAK_FUNC(sub_832EB9F0);
PPC_FUNC_IMPL(__imp__sub_832EB9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832EB9F8;
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832eba30
	if (!ctx.cr6.eq) goto loc_832EBA30;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,16208
	ctx.r6.s64 = ctx.r11.s64 + 16208;
	// addi r5,r10,7984
	ctx.r5.s64 = ctx.r10.s64 + 7984;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1401
	ctx.r7.s64 = 1401;
	// bl 0x8320cf10
	ctx.lr = 0x832EBA30;
	sub_8320CF10(ctx, base);
loc_832EBA30:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83214dd0
	ctx.lr = 0x832EBA40;
	sub_83214DD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EBA4C"))) PPC_WEAK_FUNC(sub_832EBA4C);
PPC_FUNC_IMPL(__imp__sub_832EBA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EBA50"))) PPC_WEAK_FUNC(sub_832EBA50);
PPC_FUNC_IMPL(__imp__sub_832EBA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832EBA58;
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832eba90
	if (!ctx.cr6.eq) goto loc_832EBA90;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,16208
	ctx.r6.s64 = ctx.r11.s64 + 16208;
	// addi r5,r10,7984
	ctx.r5.s64 = ctx.r10.s64 + 7984;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1444
	ctx.r7.s64 = 1444;
	// bl 0x8320cf10
	ctx.lr = 0x832EBA90;
	sub_8320CF10(ctx, base);
loc_832EBA90:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83214dd0
	ctx.lr = 0x832EBAA0;
	sub_83214DD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EBAAC"))) PPC_WEAK_FUNC(sub_832EBAAC);
PPC_FUNC_IMPL(__imp__sub_832EBAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EBAB0"))) PPC_WEAK_FUNC(sub_832EBAB0);
PPC_FUNC_IMPL(__imp__sub_832EBAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832EBAB8;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r24,r11,-21168
	ctx.r24.s64 = ctx.r11.s64 + -21168;
	// addi r23,r10,16208
	ctx.r23.s64 = ctx.r10.s64 + 16208;
	// bne cr6,0x832ebb10
	if (!ctx.cr6.eq) goto loc_832EBB10;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1509
	ctx.r7.s64 = 1509;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EBB10;
	sub_8320CF10(ctx, base);
loc_832EBB10:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x832ebb50
	if (!ctx.cr6.eq) goto loc_832EBB50;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r25,284(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x83216138
	ctx.lr = 0x832EBB4C;
	sub_83216138(ctx, base);
	// b 0x832ebba8
	goto loc_832EBBA8;
loc_832EBB50:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// beq cr6,0x832ebb74
	if (ctx.cr6.eq) goto loc_832EBB74;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,-4684
	ctx.r5.s64 = ctx.r11.s64 + -4684;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1519
	ctx.r7.s64 = 1519;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EBB74;
	sub_8320CF10(ctx, base);
loc_832EBB74:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r25,284(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x83216138
	ctx.lr = 0x832EBBA8;
	sub_83216138(ctx, base);
loc_832EBBA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EBBB4"))) PPC_WEAK_FUNC(sub_832EBBB4);
PPC_FUNC_IMPL(__imp__sub_832EBBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EBBB8"))) PPC_WEAK_FUNC(sub_832EBBB8);
PPC_FUNC_IMPL(__imp__sub_832EBBB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83313198
	sub_83313198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EBBBC"))) PPC_WEAK_FUNC(sub_832EBBBC);
PPC_FUNC_IMPL(__imp__sub_832EBBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EBBC0"))) PPC_WEAK_FUNC(sub_832EBBC0);
PPC_FUNC_IMPL(__imp__sub_832EBBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x832EBBC8;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r23,r11,-21168
	ctx.r23.s64 = ctx.r11.s64 + -21168;
	// addi r22,r10,16208
	ctx.r22.s64 = ctx.r10.s64 + 16208;
	// bne cr6,0x832ebc20
	if (!ctx.cr6.eq) goto loc_832EBC20;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r11,-5464
	ctx.r5.s64 = ctx.r11.s64 + -5464;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,78
	ctx.r7.s64 = 78;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EBC20;
	sub_8320CF10(ctx, base);
loc_832EBC20:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832ebc44
	if (!ctx.cr6.eq) goto loc_832EBC44;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r11,-5476
	ctx.r5.s64 = ctx.r11.s64 + -5476;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,79
	ctx.r7.s64 = 79;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EBC44;
	sub_8320CF10(ctx, base);
loc_832EBC44:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832ebc68
	if (!ctx.cr6.eq) goto loc_832EBC68;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r11,-4812
	ctx.r5.s64 = ctx.r11.s64 + -4812;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EBC68;
	sub_8320CF10(ctx, base);
loc_832EBC68:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x832ebc8c
	if (!ctx.cr6.eq) goto loc_832EBC8C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r11,-4828
	ctx.r5.s64 = ctx.r11.s64 + -4828;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,81
	ctx.r7.s64 = 81;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EBC8C;
	sub_8320CF10(ctx, base);
loc_832EBC8C:
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x832EBC9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832ebcc8
	if (!ctx.cr0.eq) goto loc_832EBCC8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,87
	ctx.r7.s64 = 87;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EBCC0;
	sub_8320CF10(ctx, base);
loc_832EBCC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832ebde0
	goto loc_832EBDE0;
loc_832EBCC8:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r24,292(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// li r19,0
	ctx.r19.s64 = 0;
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r26,r31,24
	ctx.r26.s64 = ctx.r31.s64 + 24;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r21,r11,16568
	ctx.r21.s64 = ctx.r11.s64 + 16568;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r24,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r24.u32);
	// stw r19,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r19.u32);
	// stw r19,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r19.u32);
loc_832EBD08:
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x832EBD18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832ebd38
	if (!ctx.cr0.eq) goto loc_832EBD38;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,119
	ctx.r7.s64 = 119;
	// bl 0x8320cf10
	ctx.lr = 0x832EBD38;
	sub_8320CF10(ctx, base);
loc_832EBD38:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ebde8
	if (ctx.cr6.eq) goto loc_832EBDE8;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r25,6
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 6, ctx.xer);
	// blt cr6,0x832ebd08
	if (ctx.cr6.lt) goto loc_832EBD08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832e9a58
	ctx.lr = 0x832EBD5C;
	sub_832E9A58(ctx, base);
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x832ebd9c
	if (ctx.cr6.eq) goto loc_832EBD9C;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832146d8
	ctx.lr = 0x832EBD88;
	sub_832146D8(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832ebde8
	if (ctx.cr0.eq) goto loc_832EBDE8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83214b08
	ctx.lr = 0x832EBD9C;
	sub_83214B08(ctx, base);
loc_832EBD9C:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832146d8
	ctx.lr = 0x832EBDC0;
	sub_832146D8(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832ebde8
	if (ctx.cr0.eq) goto loc_832EBDE8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83214b08
	ctx.lr = 0x832EBDD4;
	sub_83214B08(ctx, base);
	// stw r19,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r19.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r19,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r19.u32);
loc_832EBDE0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
loc_832EBDE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832eadf0
	ctx.lr = 0x832EBDF0;
	sub_832EADF0(ctx, base);
	// b 0x832ebcc0
	goto loc_832EBCC0;
}

__attribute__((alias("__imp__sub_832EBDF4"))) PPC_WEAK_FUNC(sub_832EBDF4);
PPC_FUNC_IMPL(__imp__sub_832EBDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EBDF8"))) PPC_WEAK_FUNC(sub_832EBDF8);
PPC_FUNC_IMPL(__imp__sub_832EBDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832EBE00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r11,-21168
	ctx.r31.s64 = ctx.r11.s64 + -21168;
	// addi r30,r10,16208
	ctx.r30.s64 = ctx.r10.s64 + 16208;
	// bne cr6,0x832ebe40
	if (!ctx.cr6.eq) goto loc_832EBE40;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,642
	ctx.r7.s64 = 642;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EBE40;
	sub_8320CF10(ctx, base);
loc_832EBE40:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832ebe64
	if (!ctx.cr6.eq) goto loc_832EBE64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,16580
	ctx.r5.s64 = ctx.r11.s64 + 16580;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,643
	ctx.r7.s64 = 643;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EBE64;
	sub_8320CF10(ctx, base);
loc_832EBE64:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832139f8
	ctx.lr = 0x832EBE6C;
	sub_832139F8(ctx, base);
	// b 0x832ebe98
	goto loc_832EBE98;
loc_832EBE70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214130
	ctx.lr = 0x832EBE78;
	sub_83214130(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83313198
	ctx.lr = 0x832EBE8C;
	sub_83313198(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83214088
	ctx.lr = 0x832EBE98;
	sub_83214088(ctx, base);
loc_832EBE98:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832ebe70
	if (!ctx.cr0.eq) goto loc_832EBE70;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EBEA8"))) PPC_WEAK_FUNC(sub_832EBEA8);
PPC_FUNC_IMPL(__imp__sub_832EBEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832EBEB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,16208
	ctx.r29.s64 = ctx.r10.s64 + 16208;
	// bne cr6,0x832ebefc
	if (!ctx.cr6.eq) goto loc_832EBEFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,890
	ctx.r7.s64 = 890;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EBEFC;
	sub_8320CF10(ctx, base);
loc_832EBEFC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832ebf20
	if (!ctx.cr6.eq) goto loc_832EBF20;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,7392
	ctx.r5.s64 = ctx.r11.s64 + 7392;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,891
	ctx.r7.s64 = 891;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EBF20;
	sub_8320CF10(ctx, base);
loc_832EBF20:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83214bc8
	ctx.lr = 0x832EBF2C;
	sub_83214BC8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832ebf54
	if (ctx.cr6.eq) goto loc_832EBF54;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-4684
	ctx.r5.s64 = ctx.r11.s64 + -4684;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,896
	ctx.r7.s64 = 896;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EBF54;
	sub_8320CF10(ctx, base);
loc_832EBF54:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x832148b0
	ctx.lr = 0x832EBF5C;
	sub_832148B0(ctx, base);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832ebf7c
	if (ctx.cr6.eq) goto loc_832EBF7C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EBF7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832EBF7C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83215548
	ctx.lr = 0x832EBF84;
	sub_83215548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ebdf8
	ctx.lr = 0x832EBF90;
	sub_832EBDF8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832eb598
	ctx.lr = 0x832EBFA0;
	sub_832EB598(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EBFAC"))) PPC_WEAK_FUNC(sub_832EBFAC);
PPC_FUNC_IMPL(__imp__sub_832EBFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EBFB0"))) PPC_WEAK_FUNC(sub_832EBFB0);
PPC_FUNC_IMPL(__imp__sub_832EBFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832EBFB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,16208
	ctx.r29.s64 = ctx.r10.s64 + 16208;
	// bne cr6,0x832ec004
	if (!ctx.cr6.eq) goto loc_832EC004;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,950
	ctx.r7.s64 = 950;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EC004;
	sub_8320CF10(ctx, base);
loc_832EC004:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832ec028
	if (!ctx.cr6.eq) goto loc_832EC028;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,7384
	ctx.r5.s64 = ctx.r11.s64 + 7384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,951
	ctx.r7.s64 = 951;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EC028;
	sub_8320CF10(ctx, base);
loc_832EC028:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83214bc8
	ctx.lr = 0x832EC034;
	sub_83214BC8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832ec05c
	if (ctx.cr6.eq) goto loc_832EC05C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,16592
	ctx.r5.s64 = ctx.r11.s64 + 16592;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,956
	ctx.r7.s64 = 956;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EC05C;
	sub_8320CF10(ctx, base);
loc_832EC05C:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x832148b0
	ctx.lr = 0x832EC064;
	sub_832148B0(ctx, base);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832ec084
	if (ctx.cr6.eq) goto loc_832EC084;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832EC084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832EC084:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83215548
	ctx.lr = 0x832EC08C;
	sub_83215548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ebdf8
	ctx.lr = 0x832EC098;
	sub_832EBDF8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832eb598
	ctx.lr = 0x832EC0A8;
	sub_832EB598(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EC0B4"))) PPC_WEAK_FUNC(sub_832EC0B4);
PPC_FUNC_IMPL(__imp__sub_832EC0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EC0B8"))) PPC_WEAK_FUNC(sub_832EC0B8);
PPC_FUNC_IMPL(__imp__sub_832EC0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832EC0C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,16208
	ctx.r29.s64 = ctx.r10.s64 + 16208;
	// bne cr6,0x832ec0fc
	if (!ctx.cr6.eq) goto loc_832EC0FC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1002
	ctx.r7.s64 = 1002;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EC0FC;
	sub_8320CF10(ctx, base);
loc_832EC0FC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832ec124
	if (!ctx.cr6.eq) goto loc_832EC124;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,16412
	ctx.r5.s64 = ctx.r11.s64 + 16412;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1003
	ctx.r7.s64 = 1003;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EC124;
	sub_8320CF10(ctx, base);
loc_832EC124:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x83215548
	ctx.lr = 0x832EC12C;
	sub_83215548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ebdf8
	ctx.lr = 0x832EC138;
	sub_832EBDF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EC140"))) PPC_WEAK_FUNC(sub_832EC140);
PPC_FUNC_IMPL(__imp__sub_832EC140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832EC148;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,16208
	ctx.r29.s64 = ctx.r10.s64 + 16208;
	// bne cr6,0x832ec184
	if (!ctx.cr6.eq) goto loc_832EC184;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1032
	ctx.r7.s64 = 1032;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EC184;
	sub_8320CF10(ctx, base);
loc_832EC184:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832ec1ac
	if (!ctx.cr6.eq) goto loc_832EC1AC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,16624
	ctx.r5.s64 = ctx.r11.s64 + 16624;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1033
	ctx.r7.s64 = 1033;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832EC1AC;
	sub_8320CF10(ctx, base);
loc_832EC1AC:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x83215548
	ctx.lr = 0x832EC1B4;
	sub_83215548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ebdf8
	ctx.lr = 0x832EC1C0;
	sub_832EBDF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EC1C8"))) PPC_WEAK_FUNC(sub_832EC1C8);
PPC_FUNC_IMPL(__imp__sub_832EC1C8) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// subfic r3,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r3.s64 = 31 - ctx.r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EC1D4"))) PPC_WEAK_FUNC(sub_832EC1D4);
PPC_FUNC_IMPL(__imp__sub_832EC1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EC1D8"))) PPC_WEAK_FUNC(sub_832EC1D8);
PPC_FUNC_IMPL(__imp__sub_832EC1D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// blt cr6,0x832ec1f4
	if (ctx.cr6.lt) goto loc_832EC1F4;
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x832ec1f8
	if (!ctx.cr6.gt) goto loc_832EC1F8;
loc_832EC1F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832EC1F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ec208
	if (ctx.cr0.eq) goto loc_832EC208;
loc_832EC200:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_832EC208:
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x832ec224
	if (ctx.cr6.lt) goto loc_832EC224;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// ble cr6,0x832ec200
	if (!ctx.cr6.gt) goto loc_832EC200;
	// addi r11,r10,-20
	ctx.r11.s64 = ctx.r10.s64 + -20;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x832ec200
	if (!ctx.cr6.gt) goto loc_832EC200;
loc_832EC224:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EC22C"))) PPC_WEAK_FUNC(sub_832EC22C);
PPC_FUNC_IMPL(__imp__sub_832EC22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EC230"))) PPC_WEAK_FUNC(sub_832EC230);
PPC_FUNC_IMPL(__imp__sub_832EC230) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EC240"))) PPC_WEAK_FUNC(sub_832EC240);
PPC_FUNC_IMPL(__imp__sub_832EC240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-64
	ctx.r11.s64 = -4194304;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EC250"))) PPC_WEAK_FUNC(sub_832EC250);
PPC_FUNC_IMPL(__imp__sub_832EC250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82cb4228
	ctx.lr = 0x832EC268;
	sub_82CB4228(ctx, base);
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// bgt cr6,0x832ec2c0
	if (ctx.cr6.gt) goto loc_832EC2C0;
	// beq cr6,0x832ec294
	if (ctx.cr6.eq) goto loc_832EC294;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x832ec2d8
	if (!ctx.cr6.gt) goto loc_832EC2D8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x832ec2b0
	if (!ctx.cr6.gt) goto loc_832EC2B0;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x832ec294
	if (ctx.cr6.eq) goto loc_832EC294;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bne cr6,0x832ec2d8
	if (!ctx.cr6.eq) goto loc_832EC2D8;
loc_832EC294:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
loc_832EC29C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_832EC2B0:
	// lis r11,-64
	ctx.r11.s64 = -4194304;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832ec29c
	goto loc_832EC29C;
loc_832EC2C0:
	// cmpwi cr6,r3,64
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 64, ctx.xer);
	// beq cr6,0x832ec294
	if (ctx.cr6.eq) goto loc_832EC294;
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// beq cr6,0x832ec294
	if (ctx.cr6.eq) goto loc_832EC294;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// beq cr6,0x832ec304
	if (ctx.cr6.eq) goto loc_832EC304;
loc_832EC2D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x832ec2f8
	if (ctx.cr6.lt) goto loc_832EC2F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x832ec2fc
	if (!ctx.cr6.gt) goto loc_832EC2FC;
loc_832EC2F8:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
loc_832EC2FC:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x832ec29c
	goto loc_832EC29C;
loc_832EC304:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832ec29c
	goto loc_832EC29C;
}

__attribute__((alias("__imp__sub_832EC310"))) PPC_WEAK_FUNC(sub_832EC310);
PPC_FUNC_IMPL(__imp__sub_832EC310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f2,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// b 0x82cb3db0
	sub_82CB3DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EC31C"))) PPC_WEAK_FUNC(sub_832EC31C);
PPC_FUNC_IMPL(__imp__sub_832EC31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EC320"))) PPC_WEAK_FUNC(sub_832EC320);
PPC_FUNC_IMPL(__imp__sub_832EC320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// xoris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 ^ 2147483648;
	// stw r11,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r11.u32);
	// lfs f1,20(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EC338"))) PPC_WEAK_FUNC(sub_832EC338);
PPC_FUNC_IMPL(__imp__sub_832EC338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-8768(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8768);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x832ec36c
	if (ctx.cr6.lt) goto loc_832EC36C;
loc_832EC35C:
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832ec3ac
	goto loc_832EC3AC;
loc_832EC36C:
	// fabs f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x832ec3a4
	if (!ctx.cr6.lt) goto loc_832EC3A4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb4228
	ctx.lr = 0x832EC380;
	sub_82CB4228(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x832ec3a4
	if (ctx.cr6.eq) goto loc_832EC3A4;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// beq cr6,0x832ec35c
	if (ctx.cr6.eq) goto loc_832EC35C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lfd f1,-18376(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18376);
	// bl 0x82cb59b0
	ctx.lr = 0x832EC3A0;
	sub_82CB59B0(ctx, base);
	// b 0x832ec3ac
	goto loc_832EC3AC;
loc_832EC3A4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f1,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
loc_832EC3AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EC3C0"))) PPC_WEAK_FUNC(sub_832EC3C0);
PPC_FUNC_IMPL(__imp__sub_832EC3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f0,-18344(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x832ec3ec
	if (!ctx.cr6.eq) goto loc_832EC3EC;
	// lis r11,-128
	ctx.r11.s64 = -8388608;
	// b 0x832ec438
	goto loc_832EC438;
loc_832EC3EC:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x832ec434
	if (ctx.cr6.lt) goto loc_832EC434;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb4228
	ctx.lr = 0x832EC3FC;
	sub_82CB4228(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x832ec434
	if (ctx.cr6.eq) goto loc_832EC434;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// beq cr6,0x832ec42c
	if (ctx.cr6.eq) goto loc_832EC42C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb4db8
	ctx.lr = 0x832EC414;
	sub_82CB4DB8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfd f1,-18376(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18376);
	// bl 0x82cb4db8
	ctx.lr = 0x832EC424;
	sub_82CB4DB8(ctx, base);
	// fdiv f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64 / ctx.f1.f64;
	// b 0x832ec440
	goto loc_832EC440;
loc_832EC42C:
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// b 0x832ec438
	goto loc_832EC438;
loc_832EC434:
	// lis r11,-64
	ctx.r11.s64 = -4194304;
loc_832EC438:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
loc_832EC440:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EC454"))) PPC_WEAK_FUNC(sub_832EC454);
PPC_FUNC_IMPL(__imp__sub_832EC454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EC458"))) PPC_WEAK_FUNC(sub_832EC458);
PPC_FUNC_IMPL(__imp__sub_832EC458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82cb4228
	ctx.lr = 0x832EC470;
	sub_82CB4228(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x832ec4a0
	if (!ctx.cr0.gt) goto loc_832EC4A0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x832ec490
	if (!ctx.cr6.gt) goto loc_832EC490;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x832ec490
	if (ctx.cr6.eq) goto loc_832EC490;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// bne cr6,0x832ec4a0
	if (!ctx.cr6.eq) goto loc_832EC4A0;
loc_832EC490:
	// lis r11,-64
	ctx.r11.s64 = -4194304;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832ec4a8
	goto loc_832EC4A8;
loc_832EC4A0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb4860
	ctx.lr = 0x832EC4A8;
	sub_82CB4860(ctx, base);
loc_832EC4A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EC4BC"))) PPC_WEAK_FUNC(sub_832EC4BC);
PPC_FUNC_IMPL(__imp__sub_832EC4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EC4C0"))) PPC_WEAK_FUNC(sub_832EC4C0);
PPC_FUNC_IMPL(__imp__sub_832EC4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82cb4228
	ctx.lr = 0x832EC4D8;
	sub_82CB4228(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x832ec508
	if (!ctx.cr0.gt) goto loc_832EC508;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x832ec4f8
	if (!ctx.cr6.gt) goto loc_832EC4F8;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x832ec4f8
	if (ctx.cr6.eq) goto loc_832EC4F8;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// bne cr6,0x832ec508
	if (!ctx.cr6.eq) goto loc_832EC508;
loc_832EC4F8:
	// lis r11,-64
	ctx.r11.s64 = -4194304;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832ec510
	goto loc_832EC510;
loc_832EC508:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb4940
	ctx.lr = 0x832EC510;
	sub_82CB4940(ctx, base);
loc_832EC510:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EC524"))) PPC_WEAK_FUNC(sub_832EC524);
PPC_FUNC_IMPL(__imp__sub_832EC524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EC528"))) PPC_WEAK_FUNC(sub_832EC528);
PPC_FUNC_IMPL(__imp__sub_832EC528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f1,-18352(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// fcmpu cr6,f31,f1
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// beq cr6,0x832ec5a4
	if (ctx.cr6.eq) goto loc_832EC5A4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f0,-18344(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x832ec56c
	if (!ctx.cr6.lt) goto loc_832EC56C;
loc_832EC55C:
	// lis r11,-64
	ctx.r11.s64 = -4194304;
loc_832EC560:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832ec5a4
	goto loc_832EC5A4;
loc_832EC56C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb4228
	ctx.lr = 0x832EC574;
	sub_82CB4228(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x832ec59c
	if (!ctx.cr0.gt) goto loc_832EC59C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x832ec55c
	if (!ctx.cr6.gt) goto loc_832EC55C;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x832ec55c
	if (ctx.cr6.eq) goto loc_832EC55C;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// bne cr6,0x832ec59c
	if (!ctx.cr6.eq) goto loc_832EC59C;
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// b 0x832ec560
	goto loc_832EC560;
loc_832EC59C:
	// fsqrt f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = sqrt(ctx.f31.f64);
	// bl 0x8327cb48
	ctx.lr = 0x832EC5A4;
	sub_8327CB48(ctx, base);
loc_832EC5A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EC5B8"))) PPC_WEAK_FUNC(sub_832EC5B8);
PPC_FUNC_IMPL(__imp__sub_832EC5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f29,-18352(r11)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bne cr6,0x832ec5ec
	if (!ctx.cr6.eq) goto loc_832EC5EC;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// b 0x832ec668
	goto loc_832EC668;
loc_832EC5EC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f30,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x832ec60c
	if (!ctx.cr6.lt) goto loc_832EC60C;
loc_832EC5FC:
	// lis r11,-64
	ctx.r11.s64 = -4194304;
loc_832EC600:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832ec668
	goto loc_832EC668;
loc_832EC60C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb4228
	ctx.lr = 0x832EC614;
	sub_82CB4228(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x832ec65c
	if (!ctx.cr0.gt) goto loc_832EC65C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x832ec5fc
	if (!ctx.cr6.gt) goto loc_832EC5FC;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x832ec5fc
	if (ctx.cr6.eq) goto loc_832EC5FC;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// beq cr6,0x832ec654
	if (ctx.cr6.eq) goto loc_832EC654;
	// cmpwi cr6,r3,64
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 64, ctx.xer);
	// beq cr6,0x832ec64c
	if (ctx.cr6.eq) goto loc_832EC64C;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// bne cr6,0x832ec65c
	if (!ctx.cr6.eq) goto loc_832EC65C;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// b 0x832ec668
	goto loc_832EC668;
loc_832EC64C:
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// b 0x832ec600
	goto loc_832EC600;
loc_832EC654:
	// lis r11,-128
	ctx.r11.s64 = -8388608;
	// b 0x832ec600
	goto loc_832EC600;
loc_832EC65C:
	// fsqrt f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = sqrt(ctx.f31.f64);
	// fdiv f1,f29,f0
	ctx.f1.f64 = ctx.f29.f64 / ctx.f0.f64;
	// bl 0x8327cb48
	ctx.lr = 0x832EC668;
	sub_8327CB48(ctx, base);
loc_832EC668:
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

__attribute__((alias("__imp__sub_832EC684"))) PPC_WEAK_FUNC(sub_832EC684);
PPC_FUNC_IMPL(__imp__sub_832EC684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EC688"))) PPC_WEAK_FUNC(sub_832EC688);
PPC_FUNC_IMPL(__imp__sub_832EC688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f30,-18352(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bne cr6,0x832ec6b8
	if (!ctx.cr6.eq) goto loc_832EC6B8;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// b 0x832ec72c
	goto loc_832EC72C;
loc_832EC6B8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb4228
	ctx.lr = 0x832EC6C0;
	sub_82CB4228(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x832ec724
	if (!ctx.cr0.gt) goto loc_832EC724;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x832ec714
	if (!ctx.cr6.gt) goto loc_832EC714;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x832ec70c
	if (ctx.cr6.eq) goto loc_832EC70C;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// beq cr6,0x832ec704
	if (ctx.cr6.eq) goto loc_832EC704;
	// cmpwi cr6,r3,64
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 64, ctx.xer);
	// beq cr6,0x832ec6fc
	if (ctx.cr6.eq) goto loc_832EC6FC;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// bne cr6,0x832ec724
	if (!ctx.cr6.eq) goto loc_832EC724;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f1,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// b 0x832ec72c
	goto loc_832EC72C;
loc_832EC6FC:
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// b 0x832ec718
	goto loc_832EC718;
loc_832EC704:
	// lis r11,-128
	ctx.r11.s64 = -8388608;
	// b 0x832ec718
	goto loc_832EC718;
loc_832EC70C:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// b 0x832ec718
	goto loc_832EC718;
loc_832EC714:
	// lis r11,-64
	ctx.r11.s64 = -4194304;
loc_832EC718:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832ec72c
	goto loc_832EC72C;
loc_832EC724:
	// fdiv f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64 / ctx.f31.f64;
	// bl 0x8327cb48
	ctx.lr = 0x832EC72C;
	sub_8327CB48(ctx, base);
loc_832EC72C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EC744"))) PPC_WEAK_FUNC(sub_832EC744);
PPC_FUNC_IMPL(__imp__sub_832EC744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EC748"))) PPC_WEAK_FUNC(sub_832EC748);
PPC_FUNC_IMPL(__imp__sub_832EC748) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r4,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EC750"))) PPC_WEAK_FUNC(sub_832EC750);
PPC_FUNC_IMPL(__imp__sub_832EC750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EC760"))) PPC_WEAK_FUNC(sub_832EC760);
PPC_FUNC_IMPL(__imp__sub_832EC760) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8327d6e0
	ctx.lr = 0x832EC778;
	sub_8327D6E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8327d770
	ctx.lr = 0x832EC780;
	sub_8327D770(ctx, base);
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

__attribute__((alias("__imp__sub_832EC794"))) PPC_WEAK_FUNC(sub_832EC794);
PPC_FUNC_IMPL(__imp__sub_832EC794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EC798"))) PPC_WEAK_FUNC(sub_832EC798);
PPC_FUNC_IMPL(__imp__sub_832EC798) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8327d770
	ctx.lr = 0x832EC7B0;
	sub_8327D770(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8327d770
	ctx.lr = 0x832EC7B8;
	sub_8327D770(ctx, base);
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

__attribute__((alias("__imp__sub_832EC7CC"))) PPC_WEAK_FUNC(sub_832EC7CC);
PPC_FUNC_IMPL(__imp__sub_832EC7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EC7D0"))) PPC_WEAK_FUNC(sub_832EC7D0);
PPC_FUNC_IMPL(__imp__sub_832EC7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// b 0x832ec820
	goto loc_832EC820;
loc_832EC7F0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ec814
	if (ctx.cr6.eq) goto loc_832EC814;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x832ec82c
	if (!ctx.cr6.lt) goto loc_832EC82C;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// b 0x832ec820
	goto loc_832EC820;
loc_832EC814:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b8378
	ctx.lr = 0x832EC81C;
	sub_832B8378(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_832EC820:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832ec7f0
	if (!ctx.cr6.eq) goto loc_832EC7F0;
	// b 0x832ec838
	goto loc_832EC838;
loc_832EC82C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_832EC838:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EC850"))) PPC_WEAK_FUNC(sub_832EC850);
PPC_FUNC_IMPL(__imp__sub_832EC850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x832EC858;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x832a9508
	ctx.lr = 0x832EC870;
	sub_832A9508(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82cb2ea0
	ctx.lr = 0x832EC884;
	sub_82CB2EA0(ctx, base);
	// add r26,r31,r28
	ctx.r26.u64 = ctx.r31.u64 + ctx.r28.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r27,-1(r26)
	PPC_STORE_U8(ctx.r26.u32 + -1, ctx.r27.u8);
	// bl 0x82cd1c10
	ctx.lr = 0x832EC89C;
	sub_82CD1C10(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x832ec8d8
	if (ctx.cr0.eq) goto loc_832EC8D8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-18076
	ctx.r4.s64 = ctx.r11.s64 + -18076;
	// bl 0x82cb1690
	ctx.lr = 0x832EC8B4;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832ec8d4
	if (ctx.cr0.eq) goto loc_832EC8D4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1092
	ctx.r4.s64 = ctx.r11.s64 + 1092;
	// bl 0x82cb1690
	ctx.lr = 0x832EC8CC;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832ec8d8
	if (!ctx.cr0.eq) goto loc_832EC8D8;
loc_832EC8D4:
	// stb r27,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r27.u8);
loc_832EC8D8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_832EC8DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832ec8dc
	if (!ctx.cr6.eq) goto loc_832EC8DC;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x832ec928
	if (!ctx.cr6.gt) goto loc_832EC928;
loc_832EC904:
	// lbz r11,-1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -1);
	// addi r29,r30,-1
	ctx.r29.s64 = ctx.r30.s64 + -1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbdd38
	ctx.lr = 0x832EC914;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832ec928
	if (ctx.cr0.eq) goto loc_832EC928;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x832ec904
	if (ctx.cr6.gt) goto loc_832EC904;
loc_832EC928:
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc3000
	ctx.lr = 0x832EC938;
	sub_82CC3000(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r6,r3,r25
	ctx.r6.u64 = ctx.r3.u64 + ctx.r25.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832ec970
	if (!ctx.cr6.eq) goto loc_832EC970;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x832ec970
	if (ctx.cr6.eq) goto loc_832EC970;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r5,r10,-3440
	ctx.r5.s64 = ctx.r10.s64 + -3440;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb7580
	ctx.lr = 0x832EC96C;
	sub_82CB7580(ctx, base);
	// stb r27,-1(r26)
	PPC_STORE_U8(ctx.r26.u32 + -1, ctx.r27.u8);
loc_832EC970:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EC978"))) PPC_WEAK_FUNC(sub_832EC978);
PPC_FUNC_IMPL(__imp__sub_832EC978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832ec850
	ctx.lr = 0x832EC9A8;
	sub_832EC850(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204d78
	ctx.lr = 0x832EC9B8;
	sub_83204D78(ctx, base);
}

__attribute__((alias("__imp__sub_832EC9B8"))) PPC_WEAK_FUNC(sub_832EC9B8);
PPC_FUNC_IMPL(__imp__sub_832EC9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x832ec9ec
	if (!ctx.cr6.eq) goto loc_832EC9EC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ec9ec
	if (ctx.cr6.eq) goto loc_832EC9EC;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
loc_832EC9EC:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832eca1c
	if (ctx.cr0.eq) goto loc_832ECA1C;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ec850
	ctx.lr = 0x832ECA0C;
	sub_832EC850(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3628
	ctx.r4.s64 = 3628;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204d78
	ctx.lr = 0x832ECA1C;
	sub_83204D78(ctx, base);
loc_832ECA1C:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r11,r5,14,16,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 14) & 0xC000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF3FFF);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ECA40"))) PPC_WEAK_FUNC(sub_832ECA40);
PPC_FUNC_IMPL(__imp__sub_832ECA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832ECA48;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r11,r4,40
	ctx.r11.s64 = ctx.r4.s64 * 40;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// rlwinm r29,r9,29,18,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x3FFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832eca88
	if (!ctx.cr6.eq) goto loc_832ECA88;
	// bl 0x8324a2e0
	ctx.lr = 0x832ECA88;
	sub_8324A2E0(ctx, base);
loc_832ECA88:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// rlwinm. r7,r10,0,1,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r4,r9,28,18,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x3FFF;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// beq 0x832ecaf4
	if (ctx.cr0.eq) goto loc_832ECAF4;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832ecb6c
	if (ctx.cr6.eq) goto loc_832ECB6C;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_832ECAC8:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r3,r11,28,18,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x832ecae4
	if (!ctx.cr6.eq) goto loc_832ECAE4;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// or r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 | ctx.r9.u64;
loc_832ECAE4:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// bne 0x832ecac8
	if (!ctx.cr0.eq) goto loc_832ECAC8;
	// b 0x832ecb6c
	goto loc_832ECB6C;
loc_832ECAF4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832ecb2c
	if (ctx.cr6.eq) goto loc_832ECB2C;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_832ECB08:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r10,28,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3FFF;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x832ecb2c
	if (!ctx.cr6.eq) goto loc_832ECB2C;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// bne 0x832ecb08
	if (!ctx.cr0.eq) goto loc_832ECB08;
loc_832ECB2C:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x832ecb68
	if (!ctx.cr6.lt) goto loc_832ECB68;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_832ECB40:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r10,28,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3FFF;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x832ecb68
	if (!ctx.cr6.eq) goto loc_832ECB68;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x832ecb40
	if (ctx.cr6.lt) goto loc_832ECB40;
loc_832ECB68:
	// subf r10,r5,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r5.s64;
loc_832ECB6C:
	// stw r4,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r4.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// stw r5,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r5.u32);
	// stw r8,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ECB88"))) PPC_WEAK_FUNC(sub_832ECB88);
PPC_FUNC_IMPL(__imp__sub_832ECB88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832ecc00
	if (ctx.cr0.eq) goto loc_832ECC00;
	// rlwinm. r11,r11,0,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFF8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
loc_832ECBA4:
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r9,r11,28,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x832ecbe4
	if (!ctx.cr6.eq) goto loc_832ECBE4;
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cntlzw r9,r6
	ctx.r9.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// subfic r9,r9,31
	ctx.xer.ca = ctx.r9.u32 <= 31;
	ctx.r9.s64 = 31 - ctx.r9.s64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rlwimi r6,r9,2,16,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFC) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0003);
	// rlwimi r6,r3,0,30,14
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFFFFFFFFFE0003) | (ctx.r6.u64 & 0x1FFFC);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
loc_832ECBE4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r11,r11,29,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3FFF;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832ecba4
	if (ctx.cr6.lt) goto loc_832ECBA4;
	// blr 
	return;
loc_832ECC00:
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r10,r6,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r6.s64;
loc_832ECC14:
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// li r7,1
	ctx.r7.s64 = 1;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rlwimi r6,r5,0,16,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0003);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// rlwimi r6,r7,0,30,14
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFFFFFFFFE0003) | (ctx.r6.u64 & 0x1FFFC);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// bne 0x832ecc14
	if (!ctx.cr0.eq) goto loc_832ECC14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ECC48"))) PPC_WEAK_FUNC(sub_832ECC48);
PPC_FUNC_IMPL(__imp__sub_832ECC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x832ECC70;
	sub_82CB16F0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// rlwinm r10,r10,0,25,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFC07F;
	// rlwimi r11,r30,7,18,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 7) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ECCA4"))) PPC_WEAK_FUNC(sub_832ECCA4);
PPC_FUNC_IMPL(__imp__sub_832ECCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ECCA8"))) PPC_WEAK_FUNC(sub_832ECCA8);
PPC_FUNC_IMPL(__imp__sub_832ECCA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ECCAC"))) PPC_WEAK_FUNC(sub_832ECCAC);
PPC_FUNC_IMPL(__imp__sub_832ECCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ECCB0"))) PPC_WEAK_FUNC(sub_832ECCB0);
PPC_FUNC_IMPL(__imp__sub_832ECCB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832eccd0
	if (ctx.cr0.eq) goto loc_832ECCD0;
	// bl 0x832ec250
	ctx.lr = 0x832ECCD0;
	sub_832EC250(ctx, base);
loc_832ECCD0:
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ecce8
	if (ctx.cr0.eq) goto loc_832ECCE8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f2,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// bl 0x82cb3db0
	ctx.lr = 0x832ECCE4;
	sub_82CB3DB0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
loc_832ECCE8:
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ecd04
	if (ctx.cr0.eq) goto loc_832ECD04;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// xoris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 ^ 2147483648;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lfs f1,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
loc_832ECD04:
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

__attribute__((alias("__imp__sub_832ECD18"))) PPC_WEAK_FUNC(sub_832ECD18);
PPC_FUNC_IMPL(__imp__sub_832ECD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ecd44
	if (ctx.cr0.eq) goto loc_832ECD44;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x832ec250
	ctx.lr = 0x832ECD44;
	sub_832EC250(ctx, base);
loc_832ECD44:
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ecd58
	if (ctx.cr0.eq) goto loc_832ECD58;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f2,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// bl 0x82cb3db0
	ctx.lr = 0x832ECD58;
	sub_82CB3DB0(ctx, base);
loc_832ECD58:
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ecd7c
	if (ctx.cr0.eq) goto loc_832ECD7C;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x832ecd78
	if (!ctx.cr6.eq) goto loc_832ECD78;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f0,17648(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17648);
	// fsub f1,f0,f1
	ctx.f1.f64 = ctx.f0.f64 - ctx.f1.f64;
	// b 0x832ecd7c
	goto loc_832ECD7C;
loc_832ECD78:
	// bl 0x82cb3de8
	ctx.lr = 0x832ECD7C;
	sub_82CB3DE8(ctx, base);
loc_832ECD7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ECD94"))) PPC_WEAK_FUNC(sub_832ECD94);
PPC_FUNC_IMPL(__imp__sub_832ECD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ECD98"))) PPC_WEAK_FUNC(sub_832ECD98);
PPC_FUNC_IMPL(__imp__sub_832ECD98) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x832ecdb4
	if (ctx.cr6.lt) goto loc_832ECDB4;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x832ecdb8
	if (!ctx.cr6.gt) goto loc_832ECDB8;
loc_832ECDB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832ECDB8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832ece08
	if (!ctx.cr0.eq) goto loc_832ECE08;
	// rlwinm. r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ecdd0
	if (ctx.cr0.eq) goto loc_832ECDD0;
loc_832ECDC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832ECDD0:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x832ecdec
	if (ctx.cr6.eq) goto loc_832ECDEC;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x832ecdf0
	if (!ctx.cr6.eq) goto loc_832ECDF0;
loc_832ECDEC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832ECDF0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_832ECDF4:
	// bne 0x832ecdc8
	if (!ctx.cr0.eq) goto loc_832ECDC8;
loc_832ECDF8:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x832ecef0
	goto loc_832ECEF0;
loc_832ECE08:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x832ece24
	if (ctx.cr6.eq) goto loc_832ECE24;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x832ece28
	if (!ctx.cr6.eq) goto loc_832ECE28;
loc_832ECE24:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832ECE28:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ecee0
	if (ctx.cr0.eq) goto loc_832ECEE0;
	// rlwinm r11,r10,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x380000;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x832ecdf8
	if (!ctx.cr6.gt) goto loc_832ECDF8;
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x832ece68
	if (ctx.cr6.eq) goto loc_832ECE68;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x832ece6c
	if (!ctx.cr6.eq) goto loc_832ECE6C;
loc_832ECE68:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832ECE6C:
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x832ece90
	if (ctx.cr6.eq) goto loc_832ECE90;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x832ece94
	if (!ctx.cr6.eq) goto loc_832ECE94;
loc_832ECE90:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832ECE94:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x832eceb8
	if (ctx.cr0.eq) goto loc_832ECEB8;
	// clrlwi. r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832eceb8
	if (ctx.cr0.eq) goto loc_832ECEB8;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// xor r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// rlwinm. r9,r9,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x832ecdc8
	if (!ctx.cr0.eq) goto loc_832ECDC8;
loc_832ECEB8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832ecec8
	if (!ctx.cr6.eq) goto loc_832ECEC8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ecdf8
	if (ctx.cr0.eq) goto loc_832ECDF8;
loc_832ECEC8:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r7,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r11,31,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFF;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x832ecdf4
	goto loc_832ECDF4;
loc_832ECEE0:
	// rlwinm. r11,r7,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x832ecdf4
	goto loc_832ECDF4;
loc_832ECEE8:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_832ECEF0:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x832ecee8
	if (!ctx.cr6.eq) goto loc_832ECEE8;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r11,r6,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwimi r11,r7,0,27,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r5,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r5.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ECF28"))) PPC_WEAK_FUNC(sub_832ECF28);
PPC_FUNC_IMPL(__imp__sub_832ECF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832eccb0
	sub_832ECCB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ECF3C"))) PPC_WEAK_FUNC(sub_832ECF3C);
PPC_FUNC_IMPL(__imp__sub_832ECF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ECF40"))) PPC_WEAK_FUNC(sub_832ECF40);
PPC_FUNC_IMPL(__imp__sub_832ECF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832ecf7c
	if (!ctx.cr0.eq) goto loc_832ECF7C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832ecf90
	goto loc_832ECF90;
loc_832ECF7C:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,30,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r31,r11,30
	ctx.r31.u64 = ctx.r11.u32 & 0x3;
loc_832ECF90:
	// bl 0x8327ceb8
	ctx.lr = 0x832ECF94;
	sub_8327CEB8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832ecd18
	ctx.lr = 0x832ECFA0;
	sub_832ECD18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ECFB8"))) PPC_WEAK_FUNC(sub_832ECFB8);
PPC_FUNC_IMPL(__imp__sub_832ECFB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi. r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832ecfc8
	if (!ctx.cr0.eq) goto loc_832ECFC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832ECFC8:
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ed004
	if (ctx.cr0.eq) goto loc_832ED004;
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// beq 0x832ecfe8
	if (ctx.cr0.eq) goto loc_832ECFE8;
	// lfd f0,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// stfd f0,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.f0.u64);
	// b 0x832ecffc
	goto loc_832ECFFC;
loc_832ECFE8:
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfd f0,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.f0.u64);
	// lfd f0,-18344(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
loc_832ECFFC:
	// stfd f0,0(r5)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
	// b 0x832ed020
	goto loc_832ED020;
loc_832ED004:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfd f0,-18344(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18344);
	// stfd f0,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.f0.u64);
	// lfs f0,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfd f0,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
loc_832ED020:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ED028"))) PPC_WEAK_FUNC(sub_832ED028);
PPC_FUNC_IMPL(__imp__sub_832ED028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// clrlwi. r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f13,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// beq 0x832ed080
	if (ctx.cr0.eq) goto loc_832ED080;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f0,0(r3)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfd f12,-18352(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// bge cr6,0x832ed054
	if (!ctx.cr6.lt) goto loc_832ED054;
	// stfd f13,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.f13.u64);
	// b 0x832ed060
	goto loc_832ED060;
loc_832ED054:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x832ed060
	if (!ctx.cr6.gt) goto loc_832ED060;
	// stfd f12,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.f12.u64);
loc_832ED060:
	// lfd f0,0(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x832ed074
	if (!ctx.cr6.lt) goto loc_832ED074;
	// stfd f13,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.f13.u64);
	// b 0x832ed080
	goto loc_832ED080;
loc_832ED074:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x832ed080
	if (!ctx.cr6.gt) goto loc_832ED080;
	// stfd f12,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.f12.u64);
loc_832ED080:
	// rlwinm. r11,r5,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ed0c8
	if (ctx.cr0.eq) goto loc_832ED0C8;
	// lfd f12,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x832ed0c8
	if (!ctx.cr6.lt) goto loc_832ED0C8;
	// lfd f0,0(r4)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x832ed0b4
	if (!ctx.cr6.lt) goto loc_832ED0B4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfd f0,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.f0.u64);
	// fneg f0,f12
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfd f0,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.f0.u64);
	// b 0x832ed0c8
	goto loc_832ED0C8;
loc_832ED0B4:
	// fneg f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfd f13,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.f13.u64);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x832ed0c8
	if (!ctx.cr6.gt) goto loc_832ED0C8;
	// stfd f12,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.f12.u64);
loc_832ED0C8:
	// rlwinm. r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lfd f0,0(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// lfd f13,0(r3)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfd f0,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.f0.u64);
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfd f0,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.f0.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ED0EC"))) PPC_WEAK_FUNC(sub_832ED0EC);
PPC_FUNC_IMPL(__imp__sub_832ED0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ED0F0"))) PPC_WEAK_FUNC(sub_832ED0F0);
PPC_FUNC_IMPL(__imp__sub_832ED0F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,59
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 59, ctx.xer);
	// bgt cr6,0x832ed174
	if (ctx.cr6.gt) goto loc_832ED174;
	// beq cr6,0x832ed168
	if (ctx.cr6.eq) goto loc_832ED168;
	// cmplwi cr6,r10,21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21, ctx.xer);
	// beq cr6,0x832ed15c
	if (ctx.cr6.eq) goto loc_832ED15C;
	// cmplwi cr6,r10,22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 22, ctx.xer);
	// beq cr6,0x832ed154
	if (ctx.cr6.eq) goto loc_832ED154;
	// cmplwi cr6,r10,23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 23, ctx.xer);
	// beq cr6,0x832ed13c
	if (ctx.cr6.eq) goto loc_832ED13C;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// bne cr6,0x832ed18c
	if (!ctx.cr6.eq) goto loc_832ED18C;
	// li r10,23
	ctx.r10.s64 = 23;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwimi r11,r10,7,18,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x83232570
	sub_83232570(ctx, base);
	return;
loc_832ED13C:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwimi r11,r10,10,18,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x83232570
	sub_83232570(ctx, base);
	return;
loc_832ED154:
	// li r10,21
	ctx.r10.s64 = 21;
	// b 0x832ed1d4
	goto loc_832ED1D4;
loc_832ED15C:
	// li r10,11
	ctx.r10.s64 = 11;
	// rlwimi r11,r10,8,18,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// b 0x832ed1d8
	goto loc_832ED1D8;
loc_832ED168:
	// li r10,15
	ctx.r10.s64 = 15;
	// rlwimi r11,r10,9,18,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 9) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// b 0x832ed1d8
	goto loc_832ED1D8;
loc_832ED174:
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// beq cr6,0x832ed1d0
	if (ctx.cr6.eq) goto loc_832ED1D0;
	// cmplwi cr6,r10,61
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 61, ctx.xer);
	// beq cr6,0x832ed1b8
	if (ctx.cr6.eq) goto loc_832ED1B8;
	// cmplwi cr6,r10,62
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 62, ctx.xer);
	// beq cr6,0x832ed1a0
	if (ctx.cr6.eq) goto loc_832ED1A0;
loc_832ED18C:
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x83204d78
	sub_83204D78(ctx, base);
	return;
loc_832ED1A0:
	// li r10,61
	ctx.r10.s64 = 61;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwimi r11,r10,7,18,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// b 0x83232570
	sub_83232570(ctx, base);
	return;
loc_832ED1B8:
	// li r10,31
	ctx.r10.s64 = 31;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwimi r11,r10,8,18,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// b 0x83232570
	sub_83232570(ctx, base);
	return;
loc_832ED1D0:
	// li r10,59
	ctx.r10.s64 = 59;
loc_832ED1D4:
	// rlwimi r11,r10,7,18,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
loc_832ED1D8:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ED1E0"))) PPC_WEAK_FUNC(sub_832ED1E0);
PPC_FUNC_IMPL(__imp__sub_832ED1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832ED1E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x832ec1d8
	ctx.lr = 0x832ED1FC;
	sub_832EC1D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ed20c
	if (ctx.cr0.eq) goto loc_832ED20C;
loc_832ED204:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832ed2a4
	goto loc_832ED2A4;
loc_832ED20C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83229f50
	ctx.lr = 0x832ED214;
	sub_83229F50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832ed224
	if (!ctx.cr0.eq) goto loc_832ED224;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832ed2a4
	goto loc_832ED2A4;
loc_832ED224:
	// cmplwi cr6,r29,228
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 228, ctx.xer);
	// beq cr6,0x832ed204
	if (ctx.cr6.eq) goto loc_832ED204;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832ed260
	if (ctx.cr6.eq) goto loc_832ED260;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_832ED240:
	// srw r8,r29,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// li r7,1
	ctx.r7.s64 = 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x832ed240
	if (!ctx.cr0.eq) goto loc_832ED240;
loc_832ED260:
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r8,r8,36262
	ctx.r8.u64 = ctx.r8.u64 | 36262;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldimi r11,r8,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// rlwinm r10,r10,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subfic r11,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_832ED2A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ED2AC"))) PPC_WEAK_FUNC(sub_832ED2AC);
PPC_FUNC_IMPL(__imp__sub_832ED2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ED2B0"))) PPC_WEAK_FUNC(sub_832ED2B0);
PPC_FUNC_IMPL(__imp__sub_832ED2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832ED2B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x832ec1d8
	ctx.lr = 0x832ED2CC;
	sub_832EC1D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ed2e8
	if (ctx.cr0.eq) goto loc_832ED2E8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwimi r11,r31,14,15,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 14) & 0x1C000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_832ED2E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_832ED2E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832ed31c
	if (ctx.cr6.eq) goto loc_832ED31C;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_832ED2FC:
	// srw r8,r30,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// li r7,1
	ctx.r7.s64 = 1;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x832ed2fc
	if (!ctx.cr0.eq) goto loc_832ED2FC;
loc_832ED31C:
	// lis r10,-28311
	ctx.r10.s64 = -1855389696;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r10,r10,5192
	ctx.r10.u64 = ctx.r10.u64 | 5192;
	// ori r8,r8,36262
	ctx.r8.u64 = ctx.r8.u64 | 36262;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// rlwinm r6,r9,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// srd r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// srd r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// srd r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r8,r9,31,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xF;
	// subf r10,r10,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,3
	ctx.r4.s64 = 3;
loc_832ED364:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ed3a0
	if (ctx.cr6.eq) goto loc_832ED3A0;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// slw r5,r4,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// andc r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// andc r5,r30,r5
	ctx.r5.u64 = ctx.r30.u64 & ~ctx.r5.u64;
	// subfic r6,r6,31
	ctx.xer.ca = ctx.r6.u32 <= 31;
	ctx.r6.s64 = 31 - ctx.r6.s64;
	// andc r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// slw r6,r6,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// or r30,r5,r6
	ctx.r30.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// b 0x832ed364
	goto loc_832ED364;
loc_832ED3A0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_832ED3A4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x832ed414
	if (ctx.cr6.eq) goto loc_832ED414;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subfic r6,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r6.s64 = 31 - ctx.r10.s64;
	// beq cr6,0x832ed404
	if (ctx.cr6.eq) goto loc_832ED404;
	// li r10,0
	ctx.r10.s64 = 0;
loc_832ED3CC:
	// srw r3,r30,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r3,r3,30
	ctx.r3.u64 = ctx.r3.u32 & 0x3;
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x832ed3f0
	if (ctx.cr6.eq) goto loc_832ED3F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x832ed3cc
	if (ctx.cr6.lt) goto loc_832ED3CC;
	// b 0x832ed404
	goto loc_832ED404;
loc_832ED3F0:
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r6,r4,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// andc r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 & ~ctx.r6.u64;
	// or r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_832ED404:
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// b 0x832ed3a4
	goto loc_832ED3A4;
loc_832ED414:
	// rlwimi r9,r7,14,15,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 14) & 0x1C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// clrlwi r8,r7,29
	ctx.r8.u64 = ctx.r7.u32 & 0x7;
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// addi r10,r29,44
	ctx.r10.s64 = ctx.r29.s64 + 44;
loc_832ED424:
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r9,r9,13,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x7;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x832ed498
	if (!ctx.cr6.lt) goto loc_832ED498;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r8,25,0,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0xFE000000;
	// rlwinm r6,r30,27,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x6;
	// rlwinm r4,r30,29,29,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x6;
	// rlwinm r3,r30,31,29,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x6;
	// rlwinm r31,r30,1,29,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x6;
	// lwz r28,0(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r28,r28,0,7,3
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// or r7,r28,r7
	ctx.r7.u64 = ctx.r28.u64 | ctx.r7.u64;
	// rlwinm r28,r7,27,24,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0xFF;
	// rlwinm r7,r7,0,27,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// srw r6,r28,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r6.u8 & 0x3F));
	// srw r4,r28,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r4.u8 & 0x3F));
	// rlwimi r4,r6,2,28,29
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xC) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r6,r28,r3
	ctx.r6.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r3.u8 & 0x3F));
	// clrlwi r4,r4,28
	ctx.r4.u64 = ctx.r4.u32 & 0xF;
	// srw r3,r28,r31
	ctx.r3.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r31.u8 & 0x3F));
	// rlwimi r6,r4,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// rlwimi r3,r6,2,0,29
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xFFFFFFFC) | (ctx.r3.u64 & 0xFFFFFFFF00000003);
	// rlwinm r6,r3,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// b 0x832ed424
	goto loc_832ED424;
loc_832ED498:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_832ED49C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832ed2e0
	if (ctx.cr6.eq) goto loc_832ED2E0;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ed4fc
	if (ctx.cr6.eq) goto loc_832ED4FC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r11,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832ed4fc
	if (ctx.cr0.eq) goto loc_832ED4FC;
	// rlwinm r9,r11,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r8,r11,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r9,r5,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r5,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r11,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r9,r5,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r7,r11,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r8,r5,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_832ED4FC:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x832ed49c
	goto loc_832ED49C;
}

__attribute__((alias("__imp__sub_832ED504"))) PPC_WEAK_FUNC(sub_832ED504);
PPC_FUNC_IMPL(__imp__sub_832ED504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ED508"))) PPC_WEAK_FUNC(sub_832ED508);
PPC_FUNC_IMPL(__imp__sub_832ED508) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r11,r3,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ED51C"))) PPC_WEAK_FUNC(sub_832ED51C);
PPC_FUNC_IMPL(__imp__sub_832ED51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ED520"))) PPC_WEAK_FUNC(sub_832ED520);
PPC_FUNC_IMPL(__imp__sub_832ED520) {
	PPC_FUNC_PROLOGUE();
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// slw r3,r11,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ED534"))) PPC_WEAK_FUNC(sub_832ED534);
PPC_FUNC_IMPL(__imp__sub_832ED534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ED538"))) PPC_WEAK_FUNC(sub_832ED538);
PPC_FUNC_IMPL(__imp__sub_832ED538) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832ED544:
	// srw r8,r3,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x832ed544
	if (ctx.cr6.lt) goto loc_832ED544;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ED57C"))) PPC_WEAK_FUNC(sub_832ED57C);
PPC_FUNC_IMPL(__imp__sub_832ED57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ED580"))) PPC_WEAK_FUNC(sub_832ED580);
PPC_FUNC_IMPL(__imp__sub_832ED580) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r5,-2
	ctx.r11.s64 = ctx.r5.s64 + -2;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// rlwimi r10,r11,2,28,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r11,r9,6,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xC0;
	// rlwinm r10,r10,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// clrlwi r9,r3,30
	ctx.r9.u64 = ctx.r3.u32 & 0x3;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 | ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ED5A8"))) PPC_WEAK_FUNC(sub_832ED5A8);
PPC_FUNC_IMPL(__imp__sub_832ED5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x832ED5B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwzx r27,r11,r30
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ed5e4
	if (ctx.cr0.eq) goto loc_832ED5E4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_832ED5E4:
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r29,r28,7,29,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 7) & 0x7;
	// bl 0x83229fa8
	ctx.lr = 0x832ED5F8;
	sub_83229FA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ed6e8
	if (ctx.cr0.eq) goto loc_832ED6E8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r6,r11,31,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// beq 0x832ed760
	if (ctx.cr0.eq) goto loc_832ED760;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_832ED618:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x832ed65c
	if (!ctx.cr6.lt) goto loc_832ED65C;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r28,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 27) & 0xFF;
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// srw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subf. r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfic r9,r5,31
	ctx.xer.ca = ctx.r5.u32 <= 31;
	ctx.r9.s64 = 31 - ctx.r5.s64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subf r7,r9,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r9.s64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// or r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 | ctx.r31.u64;
	// bne 0x832ed618
	if (!ctx.cr0.eq) goto loc_832ED618;
loc_832ED65C:
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// not r10,r6
	ctx.r10.u64 = ~ctx.r6.u64;
	// subfic r7,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r7.s64 = 31 - ctx.r11.s64;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
loc_832ED66C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832ed760
	if (ctx.cr6.eq) goto loc_832ED760;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x832ed69c
	if (!ctx.cr6.gt) goto loc_832ED69C;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r10,r31,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r10.u8 & 0x3F));
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// b 0x832ed6c0
	goto loc_832ED6C0;
loc_832ED69C:
	// srw r10,r6,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r10.s64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r8,r31,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r8.u8 & 0x3F));
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_832ED6C0:
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// andc r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 | ctx.r31.u64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// b 0x832ed66c
	goto loc_832ED66C;
loc_832ED6E8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832ed720
	if (ctx.cr6.eq) goto loc_832ED720;
	// rlwinm r9,r28,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 27) & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832ED6FC:
	// srw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// or r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 | ctx.r31.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// blt cr6,0x832ed6fc
	if (ctx.cr6.lt) goto loc_832ED6FC;
loc_832ED720:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// bge cr6,0x832ed760
	if (!ctx.cr6.lt) goto loc_832ED760;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// rlwinm r9,r28,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 27) & 0xFF;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
loc_832ED740:
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 | ctx.r31.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x832ed740
	if (ctx.cr6.lt) goto loc_832ED740;
loc_832ED760:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwimi r11,r31,1,23,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 1) & 0x1FE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE01);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// beq cr6,0x832ed78c
	if (ctx.cr6.eq) goto loc_832ED78C;
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x832ed790
	if (!ctx.cr6.eq) goto loc_832ED790;
loc_832ED78C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_832ED790:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832ed7f8
	if (ctx.cr0.eq) goto loc_832ED7F8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ed7b0
	if (ctx.cr0.eq) goto loc_832ED7B0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_832ED7B0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ed7e0
	if (ctx.cr0.eq) goto loc_832ED7E0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ed7e0
	if (ctx.cr0.eq) goto loc_832ED7E0;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
loc_832ED7E0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwimi r10,r11,26,13,20
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 26) & 0x7F800) | (ctx.r10.u64 & 0xFFFFFFFFFFF807FF);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x832ed82c
	goto loc_832ED82C;
loc_832ED7F8:
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r8,r10,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r9,r10,15,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFF;
	// beq 0x832ed814
	if (ctx.cr0.eq) goto loc_832ED814;
	// ori r9,r9,128
	ctx.r9.u64 = ctx.r9.u64 | 128;
loc_832ED814:
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832ed820
	if (ctx.cr0.eq) goto loc_832ED820;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
loc_832ED820:
	// rlwimi r11,r9,11,13,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 11) & 0x7F800) | (ctx.r11.u64 & 0xFFFFFFFFFFF807FF);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_832ED82C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ED834"))) PPC_WEAK_FUNC(sub_832ED834);
PPC_FUNC_IMPL(__imp__sub_832ED834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ED838"))) PPC_WEAK_FUNC(sub_832ED838);
PPC_FUNC_IMPL(__imp__sub_832ED838) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x832ed8bc
	if (ctx.cr6.eq) goto loc_832ED8BC;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// cmplwi cr6,r8,17
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 17, ctx.xer);
	// bne cr6,0x832ed868
	if (!ctx.cr6.eq) goto loc_832ED868;
	// li r9,3558
	ctx.r9.s64 = 3558;
	// b 0x832ed874
	goto loc_832ED874;
loc_832ED868:
	// cmplwi cr6,r8,18
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 18, ctx.xer);
	// bne cr6,0x832ed874
	if (!ctx.cr6.eq) goto loc_832ED874;
	// li r9,3559
	ctx.r9.s64 = 3559;
loc_832ED874:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x832ed8bc
	if (ctx.cr6.eq) goto loc_832ED8BC;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ed8b0
	if (ctx.cr0.eq) goto loc_832ED8B0;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832ed8b0
	if (!ctx.cr0.eq) goto loc_832ED8B0;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832ed8a8
	if (ctx.cr0.eq) goto loc_832ED8A8;
	// li r9,3557
	ctx.r9.s64 = 3557;
	// b 0x832ed8b0
	goto loc_832ED8B0;
loc_832ED8A8:
	// rlwinm r11,r11,18,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3;
	// addi r9,r11,3630
	ctx.r9.s64 = ctx.r11.s64 + 3630;
loc_832ED8B0:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_832ED8BC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x832ed8d4
	if (ctx.cr6.eq) goto loc_832ED8D4;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ed8d4
	if (ctx.cr0.eq) goto loc_832ED8D4;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// b 0x83204d78
	sub_83204D78(ctx, base);
	return;
loc_832ED8D4:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ED8DC"))) PPC_WEAK_FUNC(sub_832ED8DC);
PPC_FUNC_IMPL(__imp__sub_832ED8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ED8E0"))) PPC_WEAK_FUNC(sub_832ED8E0);
PPC_FUNC_IMPL(__imp__sub_832ED8E0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ED910"))) PPC_WEAK_FUNC(sub_832ED910);
PPC_FUNC_IMPL(__imp__sub_832ED910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832ED918;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x8321cb38
	ctx.lr = 0x832ED92C;
	sub_8321CB38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ed93c
	if (ctx.cr0.eq) goto loc_832ED93C;
loc_832ED934:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832ed9f4
	goto loc_832ED9F4;
loc_832ED93C:
	// lwz r24,12(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r23,12(r25)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x832ed9f0
	if (!ctx.cr6.eq) goto loc_832ED9F0;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x832ed9f0
	if (!ctx.cr6.eq) goto loc_832ED9F0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r30,r11,7,29,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwinm r9,r10,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x832ed9f0
	if (!ctx.cr6.eq) goto loc_832ED9F0;
	// clrlwi r29,r11,27
	ctx.r29.u64 = ctx.r11.u32 & 0x1F;
	// clrlwi r28,r10,27
	ctx.r28.u64 = ctx.r10.u32 & 0x1F;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832ed934
	if (ctx.cr6.eq) goto loc_832ED934;
	// li r31,0
	ctx.r31.s64 = 0;
loc_832ED994:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r10,r10,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// srw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r31.u8 & 0x3F));
	// srw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r22,r10,30
	ctx.r22.u64 = ctx.r10.u32 & 0x3;
	// bl 0x832ecf40
	ctx.lr = 0x832ED9C0;
	sub_832ECF40(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832ecf40
	ctx.lr = 0x832ED9D4;
	sub_832ECF40(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bne cr6,0x832ed9f0
	if (!ctx.cr6.eq) goto loc_832ED9F0;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x832ed994
	if (ctx.cr6.lt) goto loc_832ED994;
	// b 0x832ed934
	goto loc_832ED934;
loc_832ED9F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832ED9F4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EDA00"))) PPC_WEAK_FUNC(sub_832EDA00);
PPC_FUNC_IMPL(__imp__sub_832EDA00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EDA04"))) PPC_WEAK_FUNC(sub_832EDA04);
PPC_FUNC_IMPL(__imp__sub_832EDA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EDA08"))) PPC_WEAK_FUNC(sub_832EDA08);
PPC_FUNC_IMPL(__imp__sub_832EDA08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832EDA10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832eda28
	if (!ctx.cr0.eq) goto loc_832EDA28;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_832EDA28:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x832eda10
	goto loc_832EDA10;
}

__attribute__((alias("__imp__sub_832EDA30"))) PPC_WEAK_FUNC(sub_832EDA30);
PPC_FUNC_IMPL(__imp__sub_832EDA30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EDA34"))) PPC_WEAK_FUNC(sub_832EDA34);
PPC_FUNC_IMPL(__imp__sub_832EDA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EDA38"))) PPC_WEAK_FUNC(sub_832EDA38);
PPC_FUNC_IMPL(__imp__sub_832EDA38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832EDA40:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832eda64
	if (ctx.cr6.eq) goto loc_832EDA64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832eda64
	if (!ctx.cr0.eq) goto loc_832EDA64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_832EDA64:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x832eda40
	goto loc_832EDA40;
}

__attribute__((alias("__imp__sub_832EDA6C"))) PPC_WEAK_FUNC(sub_832EDA6C);
PPC_FUNC_IMPL(__imp__sub_832EDA6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EDA70"))) PPC_WEAK_FUNC(sub_832EDA70);
PPC_FUNC_IMPL(__imp__sub_832EDA70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_832EDA74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832edacc
	if (ctx.cr6.eq) goto loc_832EDACC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832eda90
	if (ctx.cr0.eq) goto loc_832EDA90;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832eda98
	if (!ctx.cr0.eq) goto loc_832EDA98;
loc_832EDA90:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x832eda74
	goto loc_832EDA74;
loc_832EDA98:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15104
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15104, ctx.xer);
	// beq cr6,0x832edac0
	if (ctx.cr6.eq) goto loc_832EDAC0;
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x83204d78
	sub_83204D78(ctx, base);
	return;
loc_832EDAC0:
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
loc_832EDACC:
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x83204d78
	sub_83204D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EDAE0"))) PPC_WEAK_FUNC(sub_832EDAE0);
PPC_FUNC_IMPL(__imp__sub_832EDAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832EDAE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
loc_832EDAFC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832edb4c
	if (ctx.cr6.eq) goto loc_832EDB4C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832edb3c
	if (ctx.cr6.eq) goto loc_832EDB3C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832edb3c
	if (ctx.cr0.eq) goto loc_832EDB3C;
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x832edb3c
	if (!ctx.cr6.eq) goto loc_832EDB3C;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x832edb3c
	if (!ctx.cr6.eq) goto loc_832EDB3C;
	// rlwinm r10,r10,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x832edb44
	if (ctx.cr6.eq) goto loc_832EDB44;
loc_832EDB3C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x832edafc
	goto loc_832EDAFC;
loc_832EDB44:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x832edb7c
	goto loc_832EDB7C;
loc_832EDB4C:
	// bl 0x83232e10
	ctx.lr = 0x832EDB50;
	sub_83232E10(ctx, base);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// rlwinm r11,r31,20,9,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 20) & 0x700000;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,0,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFE000;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,0,7,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_832EDB7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EDB84"))) PPC_WEAK_FUNC(sub_832EDB84);
PPC_FUNC_IMPL(__imp__sub_832EDB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EDB88"))) PPC_WEAK_FUNC(sub_832EDB88);
PPC_FUNC_IMPL(__imp__sub_832EDB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x832EDB90;
	__savegprlr_21(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// bl 0x832a9508
	ctx.lr = 0x832EDBBC;
	sub_832A9508(ctx, base);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r22,24(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm. r11,r11,0,11,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832edc3c
	if (ctx.cr0.eq) goto loc_832EDC3C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_832EDBD4:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// andc r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 & ~ctx.r11.u64;
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x832edc14
	if (ctx.cr6.eq) goto loc_832EDC14;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x832edc0c
	if (ctx.cr6.eq) goto loc_832EDC0C;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x832edcc8
	if (!ctx.cr6.eq) goto loc_832EDCC8;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x832edc18
	goto loc_832EDC18;
loc_832EDC0C:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x832edc18
	goto loc_832EDC18;
loc_832EDC14:
	// li r5,0
	ctx.r5.s64 = 0;
loc_832EDC18:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ec9b8
	ctx.lr = 0x832EDC30;
	sub_832EC9B8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832edbd4
	if (!ctx.cr6.eq) goto loc_832EDBD4;
loc_832EDC3C:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x832edc78
	if (ctx.cr6.eq) goto loc_832EDC78;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_832EDC4C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r5,r11,4,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// bl 0x82cb84e0
	ctx.lr = 0x832EDC60;
	sub_82CB84E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832edd04
	if (ctx.cr0.eq) goto loc_832EDD04;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r25,r25,12
	ctx.r25.s64 = ctx.r25.s64 + 12;
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x832edc4c
	if (ctx.cr6.lt) goto loc_832EDC4C;
loc_832EDC78:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r5,100
	ctx.r5.s64 = 100;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r30,r11,3524
	ctx.r30.s64 = ctx.r11.s64 + 3524;
	// bl 0x832ec850
	ctx.lr = 0x832EDCB8;
	sub_832EC850(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204d78
	ctx.lr = 0x832EDCC8;
	sub_83204D78(ctx, base);
loc_832EDCC8:
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x832edce0
	if (ctx.cr6.eq) goto loc_832EDCE0;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x83204d78
	ctx.lr = 0x832EDCE0;
	sub_83204D78(ctx, base);
loc_832EDCE0:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x832ec850
	ctx.lr = 0x832EDCF4;
	sub_832EC850(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,3627
	ctx.r4.s64 = 3627;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204d78
	ctx.lr = 0x832EDD04;
	sub_83204D78(ctx, base);
loc_832EDD04:
	// mulli r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 * 12;
	// add r29,r11,r24
	ctx.r29.u64 = ctx.r11.u64 + ctx.r24.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// add r3,r11,r22
	ctx.r3.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bl 0x82cc3000
	ctx.lr = 0x832EDD24;
	sub_82CC3000(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r25,r3,r30
	ctx.r25.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r10,r11,14,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1F;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x832edc78
	if (!ctx.cr6.lt) goto loc_832EDC78;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832edda4
	if (ctx.cr6.eq) goto loc_832EDDA4;
	// rlwinm. r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832edc78
	if (!ctx.cr0.eq) goto loc_832EDC78;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-18076
	ctx.r4.s64 = ctx.r11.s64 + -18076;
	// bl 0x82cb1690
	ctx.lr = 0x832EDD5C;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832edd6c
	if (!ctx.cr0.eq) goto loc_832EDD6C;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x832edd88
	goto loc_832EDD88;
loc_832EDD6C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,1092
	ctx.r4.s64 = ctx.r11.s64 + 1092;
	// bl 0x82cb1690
	ctx.lr = 0x832EDD7C;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832edc78
	if (!ctx.cr0.eq) goto loc_832EDC78;
	// li r5,0
	ctx.r5.s64 = 0;
loc_832EDD88:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ec9b8
	ctx.lr = 0x832EDDA0;
	sub_832EC9B8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_832EDDA4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832eddc4
	if (ctx.cr0.eq) goto loc_832EDDC4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832eddc4
	if (ctx.cr6.eq) goto loc_832EDDC4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_832EDDC4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r10,r25,5,23,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 5) & 0x1E0;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,9,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1F;
	// rlwinm r9,r9,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFE00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwimi r10,r11,28,18,18
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0x2000) | (ctx.r10.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// beq cr6,0x832ede18
	if (ctx.cr6.eq) goto loc_832EDE18;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r11,49152
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49152, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x832ede1c
	if (!ctx.cr6.eq) goto loc_832EDE1C;
loc_832EDE18:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832EDE1C:
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r22,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r22.u32);
	// rlwimi r9,r11,16,15,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x10000) | (ctx.r9.u64 & 0xFFFFFFFFFFFEFFFF);
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// beq cr6,0x832ede48
	if (ctx.cr6.eq) goto loc_832EDE48;
	// stb r26,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r26.u8);
loc_832EDE48:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EDE50"))) PPC_WEAK_FUNC(sub_832EDE50);
PPC_FUNC_IMPL(__imp__sub_832EDE50) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r7,r11,-18928
	ctx.r7.s64 = ctx.r11.s64 + -18928;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r8,21
	ctx.r8.s64 = 21;
	// bl 0x832edb88
	ctx.lr = 0x832EDE7C;
	sub_832EDB88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EDE8C"))) PPC_WEAK_FUNC(sub_832EDE8C);
PPC_FUNC_IMPL(__imp__sub_832EDE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EDE90"))) PPC_WEAK_FUNC(sub_832EDE90);
PPC_FUNC_IMPL(__imp__sub_832EDE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r7,r11,-18672
	ctx.r7.s64 = ctx.r11.s64 + -18672;
	// li r8,20
	ctx.r8.s64 = 20;
	// bl 0x832edb88
	ctx.lr = 0x832EDEC4;
	sub_832EDB88(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x832edeec
	if (!ctx.cr6.eq) goto loc_832EDEEC;
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x832edeec
	if (!ctx.cr0.eq) goto loc_832EDEEC;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,14,16,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xC000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF3FFF);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832EDEEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832EDF00"))) PPC_WEAK_FUNC(sub_832EDF00);
PPC_FUNC_IMPL(__imp__sub_832EDF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832EDF08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_832EDF18:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832edf48
	if (ctx.cr6.eq) goto loc_832EDF48;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832edf3c
	if (ctx.cr6.eq) goto loc_832EDF3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321d608
	ctx.lr = 0x832EDF34;
	sub_8321D608(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832edf44
	if (!ctx.cr0.eq) goto loc_832EDF44;
loc_832EDF3C:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x832edf18
	goto loc_832EDF18;
loc_832EDF44:
	// li r26,-1
	ctx.r26.s64 = -1;
loc_832EDF48:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x832edf68
	if (!ctx.cr6.eq) goto loc_832EDF68;
	// li r26,0
	ctx.r26.s64 = 0;
loc_832EDF5C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_832EDF68:
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r27,r11,13,29,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_832EDF78:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x832edf5c
	if (!ctx.cr6.lt) goto loc_832EDF5C;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d608
	ctx.lr = 0x832EDF8C;
	sub_8321D608(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832edfec
	if (ctx.cr0.eq) goto loc_832EDFEC;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// beq cr6,0x832edfec
	if (ctx.cr6.eq) goto loc_832EDFEC;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_832EDFB0:
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x832edfdc
	if (!ctx.cr6.lt) goto loc_832EDFDC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x832edfe8
	if (ctx.cr6.eq) goto loc_832EDFE8;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x832edfe0
	if (ctx.cr6.eq) goto loc_832EDFE0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x832edfb0
	goto loc_832EDFB0;
loc_832EDFDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832EDFE0:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x832edfec
	if (!ctx.cr6.eq) goto loc_832EDFEC;
loc_832EDFE8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_832EDFEC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x832edf78
	goto loc_832EDF78;
}

__attribute__((alias("__imp__sub_832EDFF8"))) PPC_WEAK_FUNC(sub_832EDFF8);
PPC_FUNC_IMPL(__imp__sub_832EDFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x832EE000;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r29,r11,16688
	ctx.r29.s64 = ctx.r11.s64 + 16688;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwz r30,8(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r24,1
	ctx.r24.s64 = 1;
	// clrlwi r22,r21,28
	ctx.r22.u64 = ctx.r21.u32 & 0xF;
	// rlwinm r25,r30,31,28,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0xF;
	// rlwinm r27,r30,25,25,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 25) & 0x7F;
	// add r11,r25,r29
	ctx.r11.u64 = ctx.r25.u64 + ctx.r29.u64;
	// cmplwi cr6,r27,96
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 96, ctx.xer);
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// rlwinm r10,r11,27,5,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFE;
	// rlwinm r9,r11,29,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x6;
	// srw r10,r31,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r10.u8 & 0x3F));
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r9,r10,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r10,r11,31,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x6;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// srw r10,r31,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// srw r23,r31,r11
	ctx.r23.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwimi r23,r10,2,0,29
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFFFFFFFC) | (ctx.r23.u64 & 0xFFFFFFFF00000003);
	// blt cr6,0x832ee078
	if (ctx.cr6.lt) goto loc_832EE078;
	// cmplwi cr6,r27,102
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 102, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// ble cr6,0x832ee07c
	if (!ctx.cr6.gt) goto loc_832EE07C;
loc_832EE078:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832EE07C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ee2ec
	if (ctx.cr0.eq) goto loc_832EE2EC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,228
	ctx.r8.s64 = 228;
	// cmplwi cr6,r27,96
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 96, ctx.xer);
	// bne cr6,0x832ee0d0
	if (!ctx.cr6.eq) goto loc_832EE0D0;
	// rlwinm r11,r26,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r6,r30,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0x7;
	// rlwinm r5,r30,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0x7;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x8321ce60
	ctx.lr = 0x832EE0B4;
	sub_8321CE60(ctx, base);
	// addi r11,r26,-20
	ctx.r11.s64 = ctx.r26.s64 + -20;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r11,20,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// rlwinm r6,r11,24,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// rlwinm r8,r11,15,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// b 0x832ee12c
	goto loc_832EE12C;
loc_832EE0D0:
	// cmplwi cr6,r27,97
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 97, ctx.xer);
	// beq cr6,0x832ee0ec
	if (ctx.cr6.eq) goto loc_832EE0EC;
	// cmplwi cr6,r27,99
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 99, ctx.xer);
	// beq cr6,0x832ee0ec
	if (ctx.cr6.eq) goto loc_832EE0EC;
	// cmplwi cr6,r27,100
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 100, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x832ee0f0
	if (!ctx.cr6.eq) goto loc_832EE0F0;
loc_832EE0EC:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_832EE0F0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ee12c
	if (ctx.cr0.eq) goto loc_832EE12C;
	// rlwinm r11,r26,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r6,r30,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0x7;
	// rlwinm r5,r30,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0x7;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x8321ce60
	ctx.lr = 0x832EE114;
	sub_8321CE60(ctx, base);
	// addi r11,r26,-24
	ctx.r11.s64 = ctx.r26.s64 + -24;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r8,14(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// rlwinm r7,r10,28,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF;
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
loc_832EE12C:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_832EE13C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832ee1ac
	if (ctx.cr6.eq) goto loc_832EE1AC;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r5,3
	ctx.r5.s64 = 3;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r9,r24,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
	// srw r11,r23,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// srw r4,r8,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r4.u8 & 0x3F));
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// slw r5,r5,r3
	ctx.r5.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r3.u8 & 0x3F));
	// slw r4,r4,r3
	ctx.r4.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r3.u8 & 0x3F));
	// andc r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 & ~ctx.r5.u64;
	// and. r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// or r31,r4,r5
	ctx.r31.u64 = ctx.r4.u64 | ctx.r5.u64;
	// beq 0x832ee190
	if (ctx.cr0.eq) goto loc_832EE190;
	// slw r28,r24,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
loc_832EE190:
	// and. r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832ee19c
	if (ctx.cr0.eq) goto loc_832EE19C;
	// slw r29,r24,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
loc_832EE19C:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x832ee13c
	goto loc_832EE13C;
loc_832EE1AC:
	// cmplwi cr6,r27,96
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 96, ctx.xer);
	// bne cr6,0x832ee1fc
	if (!ctx.cr6.eq) goto loc_832EE1FC;
	// rlwinm r11,r26,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r6,r30,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0x7;
	// rlwinm r5,r30,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0x7;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x8321ce60
	ctx.lr = 0x832EE1D0;
	sub_8321CE60(ctx, base);
	// addi r11,r26,-20
	ctx.r11.s64 = ctx.r26.s64 + -20;
	// rlwimi r28,r31,5,19,26
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r31.u32, 5) & 0x1FE0) | (ctx.r28.u64 & 0xFFFFFFFFFFFFE01F);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// andi. r10,r28,8175
	ctx.r10.u64 = ctx.r28.u64 & 8175;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r29,r10,4,0,27
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xFFFFFFF0) | (ctx.r29.u64 & 0xFFFFFFFF0000000F);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,0,24,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r9,r29,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,0,15,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFE01FFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// b 0x832ee258
	goto loc_832EE258;
loc_832EE1FC:
	// cmplwi cr6,r27,97
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 97, ctx.xer);
	// beq cr6,0x832ee218
	if (ctx.cr6.eq) goto loc_832EE218;
	// cmplwi cr6,r27,99
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 99, ctx.xer);
	// beq cr6,0x832ee218
	if (ctx.cr6.eq) goto loc_832EE218;
	// cmplwi cr6,r27,100
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 100, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x832ee21c
	if (!ctx.cr6.eq) goto loc_832EE21C;
loc_832EE218:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_832EE21C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r26,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFF000;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// beq 0x832ee2dc
	if (ctx.cr0.eq) goto loc_832EE2DC;
	// rlwinm r6,r30,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0x7;
	// rlwinm r5,r30,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0x7;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8321ce60
	ctx.lr = 0x832EE240;
	sub_8321CE60(ctx, base);
	// addi r11,r26,-24
	ctx.r11.s64 = ctx.r26.s64 + -24;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stb r31,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r31.u8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r10,r28,4,24,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r28.u32, 4) & 0xF0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF0F);
	// rlwimi r10,r29,0,28,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
loc_832EE258:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_832EE25C:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_832EE260:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832ee468
	if (ctx.cr6.eq) goto loc_832EE468;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r11,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832ee2d4
	if (ctx.cr0.eq) goto loc_832EE2D4;
	// cmplwi cr6,r23,228
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 228, ctx.xer);
	// beq cr6,0x832ee2bc
	if (ctx.cr6.eq) goto loc_832EE2BC;
	// rlwinm r9,r11,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r8,r11,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r23,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r11,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r7,r11,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r8,r23,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_832EE2BC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// rlwimi r9,r21,13,7,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r21.u32, 13) & 0x1FFE000) | (ctx.r9.u64 & 0xFFFFFFFFFE001FFF);
	// rlwinm r11,r11,0,19,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE001FFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_832EE2D4:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x832ee260
	goto loc_832EE260;
loc_832EE2DC:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r10,17048
	ctx.r5.s64 = ctx.r10.s64 + 17048;
	// bl 0x83204d78
	ctx.lr = 0x832EE2EC;
	sub_83204D78(ctx, base);
loc_832EE2EC:
	// cmplwi cr6,r23,228
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 228, ctx.xer);
	// beq cr6,0x832ee25c
	if (ctx.cr6.eq) goto loc_832EE25C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83229fa8
	ctx.lr = 0x832EE2FC;
	sub_83229FA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ee25c
	if (ctx.cr0.eq) goto loc_832EE25C;
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r22,r29
	ctx.r9.u64 = ctx.r22.u64 + ctx.r29.u64;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// rlwinm r7,r31,29,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x6;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// lbz r10,-1(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// rlwinm r9,r31,27,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x6;
	// clrldi r8,r22,32
	ctx.r8.u64 = ctx.r22.u64 & 0xFFFFFFFF;
	// srw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// srd r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r6,r31,31,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x6;
	// srd r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// srw r6,r10,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// rlwinm r9,r31,1,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x6;
	// srd r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// srw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r6,r7,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// clrlwi. r7,r11,29
	ctx.r7.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwimi r9,r6,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x832ee3a0
	if (ctx.cr0.eq) goto loc_832EE3A0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_832EE374:
	// srw r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwinm r6,r6,1,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x6;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// slw r5,r5,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// slw r6,r10,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r6.u8 & 0x3F));
	// andc r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x832ee374
	if (ctx.cr6.lt) goto loc_832EE374;
loc_832EE3A0:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r9,r11,27,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x6;
	// addi r10,r10,-972
	ctx.r10.s64 = ctx.r10.s64 + -972;
	// rlwinm r5,r11,29,29,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x6;
	// add r10,r25,r10
	ctx.r10.u64 = ctx.r25.u64 + ctx.r10.u64;
	// rlwinm r4,r11,31,29,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x6;
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r26,44
	ctx.r8.s64 = ctx.r26.s64 + 44;
	// lbz r10,-1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// srw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r5,r10,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwimi r5,r9,2,28,29
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r9,r10,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r5,r5,28
	ctx.r5.u64 = ctx.r5.u32 & 0xF;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwimi r9,r5,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwimi r11,r9,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
loc_832EE3E8:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x832ee25c
	if (!ctx.cr6.lt) goto loc_832EE25C;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r5,r9,0,4,6
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x832ee45c
	if (ctx.cr0.eq) goto loc_832EE45C;
	// rlwinm r9,r9,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r4,r11,27,29,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x6;
	// rlwinm r3,r7,14,15,17
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0x1C000;
	// srw r4,r9,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// rlwinm r31,r11,29,29,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x6;
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// srw r3,r9,r31
	ctx.r3.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r31.u8 & 0x3F));
	// rlwinm r31,r11,31,29,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x6;
	// rlwimi r3,r4,2,0,29
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0xFFFFFFFC) | (ctx.r3.u64 & 0xFFFFFFFF00000003);
	// srw r4,r9,r31
	ctx.r4.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r31.u8 & 0x3F));
	// rlwinm r31,r11,1,29,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// rlwimi r4,r3,2,0,29
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 2) & 0xFFFFFFFC) | (ctx.r4.u64 & 0xFFFFFFFF00000003);
	// srw r9,r9,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r31.u8 & 0x3F));
	// rlwimi r9,r4,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r5,r5,0,27,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r5,r5,0,7,3
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_832EE45C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// b 0x832ee3e8
	goto loc_832EE3E8;
loc_832EE468:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwimi r11,r22,1,27,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r22.u32, 1) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EE47C"))) PPC_WEAK_FUNC(sub_832EE47C);
PPC_FUNC_IMPL(__imp__sub_832EE47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EE480"))) PPC_WEAK_FUNC(sub_832EE480);
PPC_FUNC_IMPL(__imp__sub_832EE480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832EE488;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// bne cr6,0x832ee4f0
	if (!ctx.cr6.eq) goto loc_832EE4F0;
	// bl 0x8327ceb8
	ctx.lr = 0x832EE4B4;
	sub_8327CEB8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82cb41c0
	ctx.lr = 0x832EE4BC;
	sub_82CB41C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832ee4d0
	if (ctx.cr0.eq) goto loc_832EE4D0;
	// stfd f31,0(r29)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f31.u64);
	// stfd f31,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.f31.u64);
	// b 0x832ee5e0
	goto loc_832EE5E0;
loc_832EE4D0:
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfd f13,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f13.u64);
	// b 0x832ee5dc
	goto loc_832EE5DC;
loc_832EE4F0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ee540
	if (ctx.cr6.eq) goto loc_832EE540;
loc_832EE4FC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x832ee514
	if (ctx.cr6.eq) goto loc_832EE514;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832ee4fc
	if (!ctx.cr6.eq) goto loc_832EE4FC;
loc_832EE514:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ee540
	if (ctx.cr6.eq) goto loc_832EE540;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// addi r9,r30,5
	ctx.r9.s64 = ctx.r30.s64 + 5;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// stfd f0,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f0.u64);
	// lfdx f0,r9,r11
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// stfd f0,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.f0.u64);
	// b 0x832ee5e0
	goto loc_832EE5E0;
loc_832EE540:
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// bne cr6,0x832ee59c
	if (!ctx.cr6.eq) goto loc_832EE59C;
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFF000;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r10,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// rlwinm r5,r10,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// rlwinm r4,r10,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x8321ce60
	ctx.lr = 0x832EE568;
	sub_8321CE60(ctx, base);
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r11,r11,0,1,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x832ee59c
	if (!ctx.cr6.eq) goto loc_832EE59C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfd f0,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// lfd f13,-18352(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18352);
	// stfd f0,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f0.u64);
	// stfd f13,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.f13.u64);
	// b 0x832ee5e0
	goto loc_832EE5E0;
loc_832EE59C:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rlwinm r10,r30,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832ecfb8
	ctx.lr = 0x832EE5B8;
	sub_832ECFB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832ee5e0
	if (!ctx.cr0.eq) goto loc_832EE5E0;
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfd f0,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f0.u64);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
loc_832EE5DC:
	// stfd f0,0(r28)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.f0.u64);
loc_832EE5E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EE5EC"))) PPC_WEAK_FUNC(sub_832EE5EC);
PPC_FUNC_IMPL(__imp__sub_832EE5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EE5F0"))) PPC_WEAK_FUNC(sub_832EE5F0);
PPC_FUNC_IMPL(__imp__sub_832EE5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832EE5F8;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82cb41c0
	ctx.lr = 0x832EE61C;
	sub_82CB41C0(ctx, base);
	// lis r29,-128
	ctx.r29.s64 = -8388608;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832ee630
	if (!ctx.cr0.eq) goto loc_832EE630;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
loc_832EE630:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82cb41c0
	ctx.lr = 0x832EE638;
	sub_82CB41C0(ctx, base);
	// lis r31,32640
	ctx.r31.s64 = 2139095040;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832ee64c
	if (!ctx.cr0.eq) goto loc_832EE64C;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
loc_832EE64C:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// b 0x832ee664
	goto loc_832EE664;
loc_832EE654:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x832ee66c
	if (ctx.cr6.eq) goto loc_832EE66C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_832EE664:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832ee654
	if (!ctx.cr6.eq) goto loc_832EE654;
loc_832EE66C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832ee6f0
	if (!ctx.cr6.eq) goto loc_832EE6F0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x832ee69c
	if (!ctx.cr6.eq) goto loc_832EE69C;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x832ee69c
	if (!ctx.cr6.eq) goto loc_832EE69C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832ee72c
	goto loc_832EE72C;
loc_832EE69C:
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83225ce0
	ctx.lr = 0x832EE6AC;
	sub_83225CE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_832EE6C8:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfd f0,-32(r10)
	PPC_STORE_U64(ctx.r10.u32 + -32, ctx.f0.u64);
	// stfd f13,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f13.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x832ee6c8
	if (!ctx.cr0.eq) goto loc_832EE6C8;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_832EE6F0:
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x832ee710
	if (ctx.cr6.eq) goto loc_832EE710;
	// stfdx f31,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.f31.u64);
	// li r3,1
	ctx.r3.s64 = 1;
loc_832EE710:
	// addi r10,r27,5
	ctx.r10.s64 = ctx.r27.s64 + 5;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x832ee72c
	if (ctx.cr6.eq) goto loc_832EE72C;
	// stfdx f30,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.f30.u64);
	// li r3,1
	ctx.r3.s64 = 1;
loc_832EE72C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EE73C"))) PPC_WEAK_FUNC(sub_832EE73C);
PPC_FUNC_IMPL(__imp__sub_832EE73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EE740"))) PPC_WEAK_FUNC(sub_832EE740);
PPC_FUNC_IMPL(__imp__sub_832EE740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832EE748;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// bl 0x832ee480
	ctx.lr = 0x832EE774;
	sub_832EE480(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x832ed028
	ctx.lr = 0x832EE788;
	sub_832ED028(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832EE790"))) PPC_WEAK_FUNC(sub_832EE790);
PPC_FUNC_IMPL(__imp__sub_832EE790) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x832EE7BC;
	sub_8321CE60(ctx, base);
	// addi r11,r31,-20
	ctx.r11.s64 = ctx.r31.s64 + -20;
	// li r10,57
	ctx.r10.s64 = 57;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r9,r10,19,7,14
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 19) & 0x1FE0000) | (ctx.r9.u64 & 0xFFFFFFFFFE01FFFF);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832EE7E8"))) PPC_WEAK_FUNC(sub_832EE7E8);
PPC_FUNC_IMPL(__imp__sub_832EE7E8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x832EE814;
	sub_8321CE60(ctx, base);
	// addi r11,r31,-24
	ctx.r11.s64 = ctx.r31.s64 + -24;
	// li r10,228
	ctx.r10.s64 = 228;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r10,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r10,r8,3871
	ctx.r10.u64 = ctx.r8.u64 | 253689856;
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// ori r10,r10,61440
	ctx.r10.u64 = ctx.r10.u64 | 61440;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_832EE854"))) PPC_WEAK_FUNC(sub_832EE854);
PPC_FUNC_IMPL(__imp__sub_832EE854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832EE858"))) PPC_WEAK_FUNC(sub_832EE858);
PPC_FUNC_IMPL(__imp__sub_832EE858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x832EE88C;
	sub_8321CE60(ctx, base);
	// addi r11,r30,-20
	ctx.r11.s64 = ctx.r30.s64 + -20;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_832EE8B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832eea70
	if (ctx.cr6.eq) goto loc_832EEA70;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832ee8d0
	if (ctx.cr6.eq) goto loc_832EE8D0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832ee8d8
	if (!ctx.cr0.eq) goto loc_832EE8D8;
loc_832EE8D0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x832ee8b0
	goto loc_832EE8B0;
loc_832EE8D8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r8,r10,27,14,19
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 27) & 0x3F000) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0FFF);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832ee900
	if (ctx.cr0.eq) goto loc_832EE900;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832EE900:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r10,r11,31,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// rlwinm r11,r8,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0xFF;
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// beq 0x832ee92c
	if (ctx.cr0.eq) goto loc_832EE92C;
	// clrlwi r7,r11,30
	ctx.r7.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r8,r8,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// b 0x832ee930
	goto loc_832EE930;
loc_832EE92C:
	// ori r8,r8,7
	ctx.r8.u64 = ctx.r8.u64 | 7;
loc_832EE930:
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// rlwinm. r8,r10,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// beq 0x832ee94c
	if (ctx.cr0.eq) goto loc_832EE94C;
	// rlwimi r8,r11,1,27,28
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x18) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE7);
	// rlwinm r8,r8,0,27,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// b 0x832ee950
	goto loc_832EE950;
loc_832EE94C:
	// ori r8,r8,56
	ctx.r8.u64 = ctx.r8.u64 | 56;
loc_832EE950:
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// rlwinm. r8,r10,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// beq 0x832ee96c
	if (ctx.cr0.eq) goto loc_832EE96C;
	// rlwimi r8,r11,2,24,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xC0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwinm r8,r8,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// b 0x832ee970
	goto loc_832EE970;
loc_832EE96C:
	// ori r8,r8,448
	ctx.r8.u64 = ctx.r8.u64 | 448;
loc_832EE970:
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832ee98c
	if (ctx.cr0.eq) goto loc_832EE98C;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwimi r10,r11,3,21,22
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 3) & 0x600) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF9FF);
	// rlwinm r11,r10,0,21,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// b 0x832ee994
	goto loc_832EE994;
loc_832EE98C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r11,r11,3584
	ctx.r11.u64 = ctx.r11.u64 | 3584;
loc_832EE994:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm. r11,r11,24,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832eea04
	if (ctx.cr0.eq) goto loc_832EEA04;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x832ee9f4
	if (ctx.cr6.lt) goto loc_832EE9F4;
	// beq cr6,0x832ee9e4
	if (ctx.cr6.eq) goto loc_832EE9E4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x832ee9d4
	if (ctx.cr6.lt) goto loc_832EE9D4;
	// bne cr6,0x832eea04
	if (!ctx.cr6.eq) goto loc_832EEA04;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,11,20,22
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0xE00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF1FF);
	// b 0x832eea00
	goto loc_832EEA00;
loc_832EE9D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,8,23,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x1C0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE3F);
	// b 0x832eea00
	goto loc_832EEA00;
loc_832EE9E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,5,26,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x38) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC7);
	// b 0x832eea00
	goto loc_832EEA00;
loc_832EE9F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,2,29,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
loc_832EEA00:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832EEA04:
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm. r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832eea7c
	if (ctx.cr0.eq) goto loc_832EEA7C;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x832eea60
	if (ctx.cr6.lt) goto loc_832EEA60;
	// beq cr6,0x832eea50
	if (ctx.cr6.eq) goto loc_832EEA50;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x832eea40
	if (ctx.cr6.lt) goto loc_832EEA40;
	// bne cr6,0x832eea7c
	if (!ctx.cr6.eq) goto loc_832EEA7C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r11,r10,9,20,22
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 9) & 0xE00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF1FF);
	// b 0x832eea78
	goto loc_832EEA78;
loc_832EEA40:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r11,r10,6,23,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x1C0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE3F);
	// b 0x832eea78
	goto loc_832EEA78;
loc_832EEA50:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r11,r10,3,26,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0x38) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC7);
	// b 0x832eea78
	goto loc_832EEA78;
loc_832EEA60:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r11,r10,0,29,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// b 0x832eea78
	goto loc_832EEA78;
loc_832EEA70:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r11,r11,4095
	ctx.r11.u64 = ctx.r11.u64 | 4095;
loc_832EEA78:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832EEA7C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832eeac4
	if (ctx.cr0.eq) goto loc_832EEAC4;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r9,20,21,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 20) & 0x7E0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF81F);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r9,r10,25,0,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0xC0000000) | (ctx.r9.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832eeac4
	if (ctx.cr0.eq) goto loc_832EEAC4;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832EEAC4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// rlwinm r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x832eeb10
	if (!ctx.cr6.gt) goto loc_832EEB10;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// subfic r11,r11,95
	ctx.xer.ca = ctx.r11.u32 <= 95;
	ctx.r11.s64 = 95 - ctx.r11.s64;
	// divwu r8,r11,r10
	ctx.r8.u32 = ctx.r11.u32 / ctx.r10.u32;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 * 3;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// rlwimi r10,r11,5,25,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0x60) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF9F);
	// rlwimi r9,r10,20,5,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x7F00000) | (ctx.r9.u64 & 0xFFFFFFFFF80FFFFF);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x832eeb20
	goto loc_832EEB20;
loc_832EEB10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,95
	ctx.r10.s64 = 95;
	// rlwimi r11,r10,20,5,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x7F00000) | (ctx.r11.u64 & 0xFFFFFFFFF80FFFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832EEB20:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832eeb58
	if (ctx.cr0.eq) goto loc_832EEB58;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm r11,r11,9,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFF;
	// rlwimi r10,r11,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x832eeb74
	goto loc_832EEB74;
loc_832EEB58:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r10,r11,13,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 13) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwimi r9,r11,14,0,0
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 14) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_832EEB74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

