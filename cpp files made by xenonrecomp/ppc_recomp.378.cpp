#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82BEAF34"))) PPC_WEAK_FUNC(sub_82BEAF34);
PPC_FUNC_IMPL(__imp__sub_82BEAF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEAF38"))) PPC_WEAK_FUNC(sub_82BEAF38);
PPC_FUNC_IMPL(__imp__sub_82BEAF38) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82BEAF3C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82beaf3c
	if (!ctx.cr6.eq) goto loc_82BEAF3C;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEAF5C"))) PPC_WEAK_FUNC(sub_82BEAF5C);
PPC_FUNC_IMPL(__imp__sub_82BEAF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEAF60"))) PPC_WEAK_FUNC(sub_82BEAF60);
PPC_FUNC_IMPL(__imp__sub_82BEAF60) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// rlwinm. r11,r5,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// beq 0x82beafa4
	if (ctx.cr0.eq) goto loc_82BEAFA4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82beafa4
	if (ctx.cr6.eq) goto loc_82BEAFA4;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
loc_82BEAF8C:
	// bl 0x82beb948
	ctx.lr = 0x82BEAF90;
	sub_82BEB948(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEAF94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BEAFA4:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x833b78b4
	ctx.lr = 0x82BEAFB4;
	__imp__NtFreeVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82beaf8c
	if (ctx.cr0.lt) goto loc_82BEAF8C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82beaf94
	goto loc_82BEAF94;
}

__attribute__((alias("__imp__sub_82BEAFC4"))) PPC_WEAK_FUNC(sub_82BEAFC4);
PPC_FUNC_IMPL(__imp__sub_82BEAFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEAFC8"))) PPC_WEAK_FUNC(sub_82BEAFC8);
PPC_FUNC_IMPL(__imp__sub_82BEAFC8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x833b78c4
	ctx.lr = 0x82BEAFEC;
	__imp__NtProtectVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82beaffc
	if (ctx.cr0.lt) goto loc_82BEAFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82beb004
	goto loc_82BEB004;
loc_82BEAFFC:
	// bl 0x82becee0
	ctx.lr = 0x82BEB000;
	sub_82BECEE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEB004:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEB014"))) PPC_WEAK_FUNC(sub_82BEB014);
PPC_FUNC_IMPL(__imp__sub_82BEB014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB018"))) PPC_WEAK_FUNC(sub_82BEB018);
PPC_FUNC_IMPL(__imp__sub_82BEB018) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x833b78d4
	ctx.lr = 0x82BEB02C;
	__imp__NtQueryVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82beb03c
	if (ctx.cr0.lt) goto loc_82BEB03C;
	// li r3,28
	ctx.r3.s64 = 28;
	// b 0x82beb044
	goto loc_82BEB044;
loc_82BEB03C:
	// bl 0x82becee0
	ctx.lr = 0x82BEB040;
	sub_82BECEE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEB044:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEB054"))) PPC_WEAK_FUNC(sub_82BEB054);
PPC_FUNC_IMPL(__imp__sub_82BEB054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB058"))) PPC_WEAK_FUNC(sub_82BEB058);
PPC_FUNC_IMPL(__imp__sub_82BEB058) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// b 0x82bea0e0
	sub_82BEA0E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEB06C"))) PPC_WEAK_FUNC(sub_82BEB06C);
PPC_FUNC_IMPL(__imp__sub_82BEB06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB070"))) PPC_WEAK_FUNC(sub_82BEB070);
PPC_FUNC_IMPL(__imp__sub_82BEB070) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x82beaf60
	sub_82BEAF60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEB080"))) PPC_WEAK_FUNC(sub_82BEB080);
PPC_FUNC_IMPL(__imp__sub_82BEB080) {
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
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x833b78c4
	ctx.lr = 0x82BEB0B0;
	__imp__NtProtectVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82beb0c0
	if (ctx.cr0.lt) goto loc_82BEB0C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82beb0c8
	goto loc_82BEB0C8;
loc_82BEB0C0:
	// bl 0x82becee0
	ctx.lr = 0x82BEB0C4;
	sub_82BECEE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEB0C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEB0D8"))) PPC_WEAK_FUNC(sub_82BEB0D8);
PPC_FUNC_IMPL(__imp__sub_82BEB0D8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x833b78d4
	ctx.lr = 0x82BEB0F4;
	__imp__NtQueryVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82beb104
	if (ctx.cr0.lt) goto loc_82BEB104;
	// li r3,28
	ctx.r3.s64 = 28;
	// b 0x82beb10c
	goto loc_82BEB10C;
loc_82BEB104:
	// bl 0x82becee0
	ctx.lr = 0x82BEB108;
	sub_82BECEE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEB10C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEB11C"))) PPC_WEAK_FUNC(sub_82BEB11C);
PPC_FUNC_IMPL(__imp__sub_82BEB11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB120"))) PPC_WEAK_FUNC(sub_82BEB120);
PPC_FUNC_IMPL(__imp__sub_82BEB120) {
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
	// li r11,104
	ctx.r11.s64 = 104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833b78e4
	ctx.lr = 0x82BEB144;
	__imp__MmQueryStatistics(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r8,r8,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r8.s64;
	// rlwinm r10,r10,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82BEB19C"))) PPC_WEAK_FUNC(sub_82BEB19C);
PPC_FUNC_IMPL(__imp__sub_82BEB19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB1A0"))) PPC_WEAK_FUNC(sub_82BEB1A0);
PPC_FUNC_IMPL(__imp__sub_82BEB1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82BEB1A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm. r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82beb218
	if (ctx.cr0.eq) goto loc_82BEB218;
	// rlwinm. r11,r31,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82beb1cc
	if (!ctx.cr0.eq) goto loc_82BEB1CC;
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwimi r31,r11,26,4,7
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 26) & 0xF000000) | (ctx.r31.u64 & 0xFFFFFFFFF0FFFFFF);
loc_82BEB1CC:
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// rlwinm r10,r31,6,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xC;
	// addi r11,r11,7108
	ctx.r11.s64 = ctx.r11.s64 + 7108;
	// rlwinm r9,r31,8,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xF;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// slw r5,r8,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82bea130
	ctx.lr = 0x82BEB1F4;
	sub_82BEA130(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82beb228
	if (ctx.cr0.eq) goto loc_82BEB228;
	// rlwinm. r11,r31,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82beb228
	if (ctx.cr0.eq) goto loc_82BEB228;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82BEB214;
	sub_82CB16F0(ctx, base);
	// b 0x82beb228
	goto loc_82BEB228;
loc_82BEB218:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r3,r31,8,25,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0x40;
	// bl 0x82becee8
	ctx.lr = 0x82BEB224;
	sub_82BECEE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BEB228:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEB234"))) PPC_WEAK_FUNC(sub_82BEB234);
PPC_FUNC_IMPL(__imp__sub_82BEB234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB238"))) PPC_WEAK_FUNC(sub_82BEB238);
PPC_FUNC_IMPL(__imp__sub_82BEB238) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82beb24c
	if (ctx.cr0.eq) goto loc_82BEB24C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82bea240
	sub_82BEA240(ctx, base);
	return;
loc_82BEB24C:
	// b 0x82becf30
	sub_82BECF30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEB250"))) PPC_WEAK_FUNC(sub_82BEB250);
PPC_FUNC_IMPL(__imp__sub_82BEB250) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEB254"))) PPC_WEAK_FUNC(sub_82BEB254);
PPC_FUNC_IMPL(__imp__sub_82BEB254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB258"))) PPC_WEAK_FUNC(sub_82BEB258);
PPC_FUNC_IMPL(__imp__sub_82BEB258) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82beb264
	if (ctx.cr0.eq) goto loc_82BEB264;
	// b 0x82bea228
	sub_82BEA228(ctx, base);
	return;
loc_82BEB264:
	// b 0x82bed038
	sub_82BED038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEB268"))) PPC_WEAK_FUNC(sub_82BEB268);
PPC_FUNC_IMPL(__imp__sub_82BEB268) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x833b78f4
	ctx.lr = 0x82BEB284;
	__imp__NtDuplicateObject(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82beb294
	if (ctx.cr0.lt) goto loc_82BEB294;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82beb29c
	goto loc_82BEB29C;
loc_82BEB294:
	// bl 0x82beb948
	ctx.lr = 0x82BEB298;
	sub_82BEB948(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEB29C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEB2AC"))) PPC_WEAK_FUNC(sub_82BEB2AC);
PPC_FUNC_IMPL(__imp__sub_82BEB2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB2B0"))) PPC_WEAK_FUNC(sub_82BEB2B0);
PPC_FUNC_IMPL(__imp__sub_82BEB2B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x833b7754
	__imp__XamInputGetCapabilities(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEB2B4"))) PPC_WEAK_FUNC(sub_82BEB2B4);
PPC_FUNC_IMPL(__imp__sub_82BEB2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB2B8"))) PPC_WEAK_FUNC(sub_82BEB2B8);
PPC_FUNC_IMPL(__imp__sub_82BEB2B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x833b7764
	__imp__XamInputGetState(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEB2BC"))) PPC_WEAK_FUNC(sub_82BEB2BC);
PPC_FUNC_IMPL(__imp__sub_82BEB2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB2C0"))) PPC_WEAK_FUNC(sub_82BEB2C0);
PPC_FUNC_IMPL(__imp__sub_82BEB2C0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x833b7764
	__imp__XamInputGetState(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEB2CC"))) PPC_WEAK_FUNC(sub_82BEB2CC);
PPC_FUNC_IMPL(__imp__sub_82BEB2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB2D0"))) PPC_WEAK_FUNC(sub_82BEB2D0);
PPC_FUNC_IMPL(__imp__sub_82BEB2D0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2708(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2708);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82beb364
	if (!ctx.cr6.eq) goto loc_82BEB364;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82beb364
	if (!ctx.cr0.eq) goto loc_82BEB364;
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,5611
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5611, ctx.xer);
	// bge cr6,0x82beb364
	if (!ctx.cr6.lt) goto loc_82BEB364;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833b7754
	ctx.lr = 0x82BEB32C;
	__imp__XamInputGetCapabilities(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82beb364
	if (!ctx.cr0.eq) goto loc_82BEB364;
	// lbz r11,97(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82beb364
	if (!ctx.cr6.eq) goto loc_82BEB364;
	// lhz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82beb364
	if (ctx.cr0.eq) goto loc_82BEB364;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82beb364
	if (ctx.cr0.eq) goto loc_82BEB364;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
loc_82BEB364:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b7774
	ctx.lr = 0x82BEB380;
	__imp__XamInputSetState(ctx, base);
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

__attribute__((alias("__imp__sub_82BEB398"))) PPC_WEAK_FUNC(sub_82BEB398);
PPC_FUNC_IMPL(__imp__sub_82BEB398) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x833b7774
	__imp__XamInputSetState(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEB3B0"))) PPC_WEAK_FUNC(sub_82BEB3B0);
PPC_FUNC_IMPL(__imp__sub_82BEB3B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82beb3c8
	if (!ctx.cr6.eq) goto loc_82BEB3C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// oris r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 1073741824;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82BEB3C8:
	// b 0x833b7784
	__imp__XamInputGetKeystrokeEx(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEB3CC"))) PPC_WEAK_FUNC(sub_82BEB3CC);
PPC_FUNC_IMPL(__imp__sub_82BEB3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB3D0"))) PPC_WEAK_FUNC(sub_82BEB3D0);
PPC_FUNC_IMPL(__imp__sub_82BEB3D0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// bne cr6,0x82beb3f4
	if (!ctx.cr6.eq) goto loc_82BEB3F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// oris r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 1073741824;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_82BEB3F4:
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x833b7784
	ctx.lr = 0x82BEB3FC;
	__imp__XamInputGetKeystrokeEx(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEB40C"))) PPC_WEAK_FUNC(sub_82BEB40C);
PPC_FUNC_IMPL(__imp__sub_82BEB40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB410"))) PPC_WEAK_FUNC(sub_82BEB410);
PPC_FUNC_IMPL(__imp__sub_82BEB410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,2704(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2704);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEB41C"))) PPC_WEAK_FUNC(sub_82BEB41C);
PPC_FUNC_IMPL(__imp__sub_82BEB41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB420"))) PPC_WEAK_FUNC(sub_82BEB420);
PPC_FUNC_IMPL(__imp__sub_82BEB420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82BEB428;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82cb16f0
	ctx.lr = 0x82BEB450;
	sub_82CB16F0(ctx, base);
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bl 0x833b7914
	ctx.lr = 0x82BEB470;
	__imp__NtCreateEvent(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82beb4d0
	if (ctx.cr0.lt) goto loc_82BEB4D0;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,204
	ctx.r7.s64 = ctx.r1.s64 + 204;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x833b7794
	ctx.lr = 0x82BEB4AC;
	__imp__XamShowMessageBoxUIEx(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x82beb4c8
	if (!ctx.cr6.eq) goto loc_82BEB4C8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82bed110
	ctx.lr = 0x82BEB4C8;
	sub_82BED110(ctx, base);
loc_82BEB4C8:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x833b7904
	ctx.lr = 0x82BEB4D0;
	__imp__NtClose(ctx, base);
loc_82BEB4D0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEB4D8"))) PPC_WEAK_FUNC(sub_82BEB4D8);
PPC_FUNC_IMPL(__imp__sub_82BEB4D8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,2912
	ctx.r11.s64 = ctx.r11.s64 + 2912;
loc_82BEB4E8:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82beb540
	if (!ctx.cr6.eq) goto loc_82BEB540;
	// clrlwi. r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x82beb530
	if (ctx.cr0.eq) goto loc_82BEB530;
	// addi r7,r5,-1
	ctx.r7.s64 = ctx.r5.s64 + -1;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_82BEB50C:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82beb530
	if (!ctx.cr6.lt) goto loc_82BEB530;
	// lhz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// sth r31,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r31.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// blt cr6,0x82beb50c
	if (ctx.cr6.lt) goto loc_82BEB50C;
loc_82BEB530:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// sthx r9,r10,r4
	PPC_STORE_U16(ctx.r10.u32 + ctx.r4.u32, ctx.r9.u16);
	// b 0x82beb548
	goto loc_82BEB548;
loc_82BEB540:
	// rlwinm r10,r10,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82BEB548:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82beb4e8
	if (!ctx.cr6.gt) goto loc_82BEB4E8;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEB55C"))) PPC_WEAK_FUNC(sub_82BEB55C);
PPC_FUNC_IMPL(__imp__sub_82BEB55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB560"))) PPC_WEAK_FUNC(sub_82BEB560);
PPC_FUNC_IMPL(__imp__sub_82BEB560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bl 0x833b7934
	ctx.lr = 0x82BEB584;
	__imp__XexCheckExecutablePrivilege(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82beb724
	if (ctx.cr0.eq) goto loc_82BEB724;
	// bl 0x833b77b4
	ctx.lr = 0x82BEB590;
	__imp__XGetAVPack(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x82beb724
	if (ctx.cr6.eq) goto loc_82BEB724;
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// beq cr6,0x82beb724
	if (ctx.cr6.eq) goto loc_82BEB724;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// beq cr6,0x82beb724
	if (ctx.cr6.eq) goto loc_82BEB724;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x82beb724
	if (ctx.cr6.eq) goto loc_82BEB724;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x833b7924
	ctx.lr = 0x82BEB5C8;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82beb724
	if (!ctx.cr0.eq) goto loc_82BEB724;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// bne cr6,0x82beb724
	if (!ctx.cr6.eq) goto loc_82BEB724;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,10
	ctx.r4.s64 = 10;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x833b7924
	ctx.lr = 0x82BEB5F8;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82beb724
	if (!ctx.cr0.eq) goto loc_82BEB724;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82beb614
	if (!ctx.cr0.eq) goto loc_82BEB614;
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82beb724
	if (!ctx.cr0.eq) goto loc_82BEB724;
loc_82BEB614:
	// bl 0x833b77a4
	ctx.lr = 0x82BEB618;
	__imp__XGetLanguage(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// sth r30,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,258
	ctx.r3.s64 = ctx.r1.s64 + 258;
	// bl 0x82cb16f0
	ctx.lr = 0x82BEB630;
	sub_82CB16F0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r30,192(r1)
	PPC_STORE_U16(ctx.r1.u32 + 192, ctx.r30.u16);
	// addi r3,r1,194
	ctx.r3.s64 = ctx.r1.s64 + 194;
	// bl 0x82cb16f0
	ctx.lr = 0x82BEB644;
	sub_82CB16F0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,17
	ctx.r8.s64 = 17;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// cmplwi cr6,r31,10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 10, ctx.xer);
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// blt cr6,0x82beb6e4
	if (ctx.cr6.lt) goto loc_82BEB6E4;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82BEB6E4:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82beb4d8
	ctx.lr = 0x82BEB6FC;
	sub_82BEB4D8(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82beb4d8
	ctx.lr = 0x82BEB710;
	sub_82BEB4D8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82beb420
	ctx.lr = 0x82BEB720;
	sub_82BEB420(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
loc_82BEB724:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEB740"))) PPC_WEAK_FUNC(sub_82BEB740);
PPC_FUNC_IMPL(__imp__sub_82BEB740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,31060(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 31060);
	// lwz r17,-15568(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -15568);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82BEB750;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-496
	ctx.r31.s64 = ctx.r1.s64 + -496;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r9,-31881
	ctx.r9.s64 = -2089353216;
	// lis r8,-31881
	ctx.r8.s64 = -2089353216;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,6532(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6532, ctx.r11.u32);
	// stw r10,6536(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6536, ctx.r10.u32);
	// bl 0x82bedbe8
	ctx.lr = 0x82BEB780;
	sub_82BEDBE8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82bed9f0
	ctx.lr = 0x82BEB788;
	sub_82BED9F0(ctx, base);
	// bl 0x82beb560
	ctx.lr = 0x82BEB78C;
	sub_82BEB560(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82beb79c
	if (ctx.cr0.eq) goto loc_82BEB79C;
	// bl 0x833b77c4
	ctx.lr = 0x82BEB798;
	__imp__XamLoaderTerminateTitle(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82BEB79C:
	// bl 0x82cb1ea8
	ctx.lr = 0x82BEB7A0;
	sub_82CB1EA8(ctx, base);
	// bl 0x82bed978
	ctx.lr = 0x82BEB7A4;
	sub_82BED978(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82bed898
	ctx.lr = 0x82BEB7AC;
	sub_82BED898(ctx, base);
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lwz r11,-13944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13944);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82beb8d4
	if (ctx.cr6.eq) goto loc_82BEB8D4;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,112
	ctx.r30.s64 = ctx.r31.s64 + 112;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// bl 0x82beb410
	ctx.lr = 0x82BEB7D4;
	sub_82BEB410(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82beb8b8
	if (ctx.cr0.eq) goto loc_82BEB8B8;
	// addi r10,r31,192
	ctx.r10.s64 = ctx.r31.s64 + 192;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
loc_82BEB7E8:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
loc_82BEB7F0:
	// extsb. r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82beb82c
	if (ctx.cr0.eq) goto loc_82BEB82C;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// beq cr6,0x82beb808
	if (ctx.cr6.eq) goto loc_82BEB808;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bne cr6,0x82beb82c
	if (!ctx.cr6.eq) goto loc_82BEB82C;
loc_82BEB808:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82beb7f0
	goto loc_82BEB7F0;
loc_82BEB82C:
	// extsb. r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82beb8a4
	if (ctx.cr0.eq) goto loc_82BEB8A4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
loc_82BEB850:
	// cmpwi cr6,r9,34
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 34, ctx.xer);
	// beq cr6,0x82beb868
	if (ctx.cr6.eq) goto loc_82BEB868;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// b 0x82beb874
	goto loc_82BEB874;
loc_82BEB868:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
loc_82BEB874:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// beq 0x82beb8a4
	if (ctx.cr0.eq) goto loc_82BEB8A4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82beb850
	if (!ctx.cr6.eq) goto loc_82BEB850;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// beq cr6,0x82beb8a4
	if (ctx.cr6.eq) goto loc_82BEB8A4;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bne cr6,0x82beb850
	if (!ctx.cr6.eq) goto loc_82BEB850;
loc_82BEB8A4:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82beb8b4
	if (ctx.cr0.eq) goto loc_82BEB8B4;
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// ble cr6,0x82beb7e8
	if (!ctx.cr6.gt) goto loc_82BEB7E8;
loc_82BEB8B4:
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
loc_82BEB8B8:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// b 0x82beb8dc
	goto loc_82BEB8DC;
loc_82BEB8D4:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEB8DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822992e0
	ctx.lr = 0x82BEB8E4;
	sub_822992E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82cb1a48
	ctx.lr = 0x82BEB8EC;
	sub_82CB1A48(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,5584
	ctx.r3.s64 = ctx.r11.s64 + 5584;
	// bl 0x833b7944
	ctx.lr = 0x82BEB8FC;
	__imp__DbgPrint(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x833b77c4
	ctx.lr = 0x82BEB90C;
	__imp__XamLoaderTerminateTitle(ctx, base);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bed740
	ctx.lr = 0x82BEB91C;
	sub_82BED740(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp___xstart"))) PPC_WEAK_FUNC(_xstart);
PPC_FUNC_IMPL(__imp___xstart) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82BEB750;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-496
	ctx.r31.s64 = ctx.r1.s64 + -496;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r9,-31881
	ctx.r9.s64 = -2089353216;
	// lis r8,-31881
	ctx.r8.s64 = -2089353216;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,6532(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6532, ctx.r11.u32);
	// stw r10,6536(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6536, ctx.r10.u32);
	// bl 0x82bedbe8
	ctx.lr = 0x82BEB780;
	sub_82BEDBE8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82bed9f0
	ctx.lr = 0x82BEB788;
	sub_82BED9F0(ctx, base);
	// bl 0x82beb560
	ctx.lr = 0x82BEB78C;
	sub_82BEB560(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82beb79c
	if (ctx.cr0.eq) goto loc_82BEB79C;
	// bl 0x833b77c4
	ctx.lr = 0x82BEB798;
	__imp__XamLoaderTerminateTitle(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82BEB79C:
	// bl 0x82cb1ea8
	ctx.lr = 0x82BEB7A0;
	sub_82CB1EA8(ctx, base);
	// bl 0x82bed978
	ctx.lr = 0x82BEB7A4;
	sub_82BED978(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82bed898
	ctx.lr = 0x82BEB7AC;
	sub_82BED898(ctx, base);
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lwz r11,-13944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13944);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82beb8d4
	if (ctx.cr6.eq) goto loc_82BEB8D4;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,112
	ctx.r30.s64 = ctx.r31.s64 + 112;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// bl 0x82beb410
	ctx.lr = 0x82BEB7D4;
	sub_82BEB410(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82beb8b8
	if (ctx.cr0.eq) goto loc_82BEB8B8;
	// addi r10,r31,192
	ctx.r10.s64 = ctx.r31.s64 + 192;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
loc_82BEB7E8:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
loc_82BEB7F0:
	// extsb. r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82beb82c
	if (ctx.cr0.eq) goto loc_82BEB82C;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// beq cr6,0x82beb808
	if (ctx.cr6.eq) goto loc_82BEB808;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bne cr6,0x82beb82c
	if (!ctx.cr6.eq) goto loc_82BEB82C;
loc_82BEB808:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82beb7f0
	goto loc_82BEB7F0;
loc_82BEB82C:
	// extsb. r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82beb8a4
	if (ctx.cr0.eq) goto loc_82BEB8A4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
loc_82BEB850:
	// cmpwi cr6,r9,34
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 34, ctx.xer);
	// beq cr6,0x82beb868
	if (ctx.cr6.eq) goto loc_82BEB868;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// b 0x82beb874
	goto loc_82BEB874;
loc_82BEB868:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
loc_82BEB874:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// beq 0x82beb8a4
	if (ctx.cr0.eq) goto loc_82BEB8A4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82beb850
	if (!ctx.cr6.eq) goto loc_82BEB850;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// beq cr6,0x82beb8a4
	if (ctx.cr6.eq) goto loc_82BEB8A4;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bne cr6,0x82beb850
	if (!ctx.cr6.eq) goto loc_82BEB850;
loc_82BEB8A4:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82beb8b4
	if (ctx.cr0.eq) goto loc_82BEB8B4;
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// ble cr6,0x82beb7e8
	if (!ctx.cr6.gt) goto loc_82BEB7E8;
loc_82BEB8B4:
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
loc_82BEB8B8:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// b 0x82beb8dc
	goto loc_82BEB8DC;
loc_82BEB8D4:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEB8DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822992e0
	ctx.lr = 0x82BEB8E4;
	sub_822992E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82cb1a48
	ctx.lr = 0x82BEB8EC;
	sub_82CB1A48(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,5584
	ctx.r3.s64 = ctx.r11.s64 + 5584;
	// bl 0x833b7944
	ctx.lr = 0x82BEB8FC;
	__imp__DbgPrint(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x833b77c4
	ctx.lr = 0x82BEB90C;
	__imp__XamLoaderTerminateTitle(ctx, base);
}

__attribute__((alias("__imp__sub_82BEB90C"))) PPC_WEAK_FUNC(sub_82BEB90C);
PPC_FUNC_IMPL(__imp__sub_82BEB90C) {
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
	// bl 0x82bed740
	ctx.lr = 0x82BEB91C;
	sub_82BED740(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEB930"))) PPC_WEAK_FUNC(sub_82BEB930);
PPC_FUNC_IMPL(__imp__sub_82BEB930) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,336(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,256(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// stw r3,352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 352, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEB948"))) PPC_WEAK_FUNC(sub_82BEB948);
PPC_FUNC_IMPL(__imp__sub_82BEB948) {
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
	// bl 0x833b7894
	ctx.lr = 0x82BEB958;
	__imp__RtlNtStatusToDosError(ctx, base);
	// lwz r11,336(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82beb96c
	if (!ctx.cr6.eq) goto loc_82BEB96C;
	// lwz r11,256(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// stw r3,352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 352, ctx.r3.u32);
loc_82BEB96C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEB97C"))) PPC_WEAK_FUNC(sub_82BEB97C);
PPC_FUNC_IMPL(__imp__sub_82BEB97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB980"))) PPC_WEAK_FUNC(sub_82BEB980);
PPC_FUNC_IMPL(__imp__sub_82BEB980) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,336(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82beb998
	if (!ctx.cr6.eq) goto loc_82BEB998;
	// lwz r11,256(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r3,352(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// blr 
	return;
loc_82BEB998:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEB9A0"))) PPC_WEAK_FUNC(sub_82BEB9A0);
PPC_FUNC_IMPL(__imp__sub_82BEB9A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82beb930
	sub_82BEB930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEB9A4"))) PPC_WEAK_FUNC(sub_82BEB9A4);
PPC_FUNC_IMPL(__imp__sub_82BEB9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB9A8"))) PPC_WEAK_FUNC(sub_82BEB9A8);
PPC_FUNC_IMPL(__imp__sub_82BEB9A8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB9AC"))) PPC_WEAK_FUNC(sub_82BEB9AC);
PPC_FUNC_IMPL(__imp__sub_82BEB9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEB9B0"))) PPC_WEAK_FUNC(sub_82BEB9B0);
PPC_FUNC_IMPL(__imp__sub_82BEB9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	ctx.r11.s64 = 96;
	// li r12,112
	ctx.r12.s64 = 112;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr6,0x82bebc78
	if (ctx.cr6.lt) goto loc_82BEBC78;
loc_82BEB9D4:
	// addi r0,r5,-1024
	ctx.r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	ctx.cr6.compare<uint32_t>(ctx.r0.u32, 1024, ctx.xer);
	// blt cr6,0x82beb9e4
	if (ctx.cr6.lt) goto loc_82BEB9E4;
	// li r0,1024
	ctx.r0.s64 = 1024;
loc_82BEB9E4:
	// lvx128 v1,r0,r4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r6,r4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r7,r4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r8,r4
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v14,r10,r4
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v15,r11,r4
	_mm_store_si128((__m128i*)ctx.v15.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v16,r12,r4
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v18,r6,r4
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v19,r7,r4
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v20,r8,r4
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v21,r9,r4
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v22,r10,r4
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v23,r11,r4
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v24,r12,r4
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v26,r6,r4
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v27,r7,r4
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v28,r8,r4
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v29,r9,r4
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v30,r10,r4
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v31,r11,r4
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v32,r12,r4
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v33,r0,r4
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v34,r6,r4
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v35,r7,r4
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v36,r8,r4
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v37,r9,r4
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v38,r10,r4
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v39,r11,r4
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v40,r12,r4
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v42,r6,r4
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v43,r7,r4
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v44,r8,r4
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v45,r9,r4
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v46,r10,r4
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v47,r11,r4
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v48,r12,r4
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v50,r6,r4
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v51,r7,r4
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v52,r8,r4
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v53,r9,r4
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v54,r10,r4
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r4
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v56,r12,r4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r6,r4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r7,r4
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r8,r4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r12,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v9,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v14.u8[15 - i]);
	// stvlx128 v15,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v15.u8[15 - i]);
	// stvlx128 v16,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v16.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v17,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v17.u8[15 - i]);
	// stvlx128 v18,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v18.u8[15 - i]);
	// stvlx128 v19,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v19.u8[15 - i]);
	// stvlx128 v20,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v20.u8[15 - i]);
	// stvlx128 v21,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v21.u8[15 - i]);
	// stvlx128 v22,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v22.u8[15 - i]);
	// stvlx128 v23,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v23.u8[15 - i]);
	// stvlx128 v24,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v24.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v25,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v25.u8[15 - i]);
	// stvlx128 v26,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v26.u8[15 - i]);
	// stvlx128 v27,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v27.u8[15 - i]);
	// stvlx128 v28,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v28.u8[15 - i]);
	// stvlx128 v29,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v29.u8[15 - i]);
	// stvlx128 v30,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v30.u8[15 - i]);
	// stvlx128 v31,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v31.u8[15 - i]);
	// stvlx128 v32,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v33,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// stvlx128 v34,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvlx128 v35,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v36,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v37,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v38,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvlx128 v39,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// stvlx128 v40,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v41,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvlx128 v42,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvlx128 v43,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvlx128 v44,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvlx128 v45,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v46,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v47,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// stvlx128 v48,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v49,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v50,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvlx128 v51,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvlx128 v52,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v53,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvlx128 v54,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvlx128 v55,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvlx128 v56,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v57,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvlx128 v58,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvlx128 v59,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v60,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v61,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v62,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvlx128 v63,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvlx128 v0,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bge cr6,0x82beb9d4
	if (!ctx.cr6.lt) goto loc_82BEB9D4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82BEBC78:
	// lvx128 v1,r0,r4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bgt cr6,0x82bebc78
	if (ctx.cr6.gt) goto loc_82BEBC78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEBCD4"))) PPC_WEAK_FUNC(sub_82BEBCD4);
PPC_FUNC_IMPL(__imp__sub_82BEBCD4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r7,-48
	ctx.r7.s64 = -48;
	// stvlx128 v64,r1,r6
	ea = ctx.r1.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v64.u8[15 - i]);
	// stvlx128 v65,r1,r7
	ea = ctx.r1.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v65.u8[15 - i]);
	// li r0,0
	ctx.r0.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	ctx.r11.s64 = 96;
	// li r12,112
	ctx.r12.s64 = 112;
	// dcbt r4,r0
	// lvx128 v65,r0,r4
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr6,0x82bec108
	if (ctx.cr6.lt) goto loc_82BEC108;
	// li r0,128
	ctx.r0.s64 = 128;
	// dcbt r4,r0
	// li r0,256
	ctx.r0.s64 = 256;
	// dcbt r4,r0
	// li r0,384
	ctx.r0.s64 = 384;
	// dcbt r4,r0
	// li r0,512
	ctx.r0.s64 = 512;
	// dcbt r4,r0
	// li r0,640
	ctx.r0.s64 = 640;
	// dcbt r4,r0
	// li r0,768
	ctx.r0.s64 = 768;
	// dcbt r4,r0
	// li r0,896
	ctx.r0.s64 = 896;
	// dcbt r4,r0
loc_82BEBD5C:
	// addi r0,r5,-1024
	ctx.r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	ctx.cr6.compare<uint32_t>(ctx.r0.u32, 1024, ctx.xer);
	// blt cr6,0x82bebd6c
	if (ctx.cr6.lt) goto loc_82BEBD6C;
	// li r0,1024
	ctx.r0.s64 = 1024;
loc_82BEBD6C:
	// lvx128 v1,r0,r4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r6,r4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r7,r4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r8,r4
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v14,r10,r4
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v15,r11,r4
	_mm_store_si128((__m128i*)ctx.v15.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v16,r12,r4
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v18,r6,r4
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v19,r7,r4
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v20,r8,r4
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v21,r9,r4
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v22,r10,r4
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v23,r11,r4
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v24,r12,r4
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v26,r6,r4
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v27,r7,r4
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v28,r8,r4
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v29,r9,r4
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v30,r10,r4
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v31,r11,r4
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v32,r12,r4
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v33,r0,r4
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v34,r6,r4
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v35,r7,r4
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v36,r8,r4
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v37,r9,r4
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v38,r10,r4
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v39,r11,r4
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v40,r12,r4
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v42,r6,r4
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v43,r7,r4
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v44,r8,r4
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v45,r9,r4
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v46,r10,r4
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v47,r11,r4
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v48,r12,r4
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v50,r6,r4
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v51,r7,r4
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v52,r8,r4
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v53,r9,r4
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v54,r10,r4
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r4
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v56,r12,r4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r6,r4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r7,r4
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r8,r4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v64,r12,r4
	_mm_store_si128((__m128i*)ctx.v64.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// vperm128 v65,v65,v1,v0
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v65.u8), _mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v1,v1,v2,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v2,v2,v3,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v3,v3,v4,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v4,v4,v5,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v5,v5,v6,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v6,v6,v7,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v7,v7,v8,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v65,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v65.u8[15 - i]);
	// stvlx128 v1,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v8,v8,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v9,v9,v10,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v10,v10,v11,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v11,v11,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v12,v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v13,v13,v14,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v14.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v14,v14,v15,v0
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v14.u8), _mm_load_si128((__m128i*)ctx.v15.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v15,v15,v16,v0
	_mm_store_si128((__m128i*)ctx.v15.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v15.u8), _mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v8,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvlx128 v9,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v14.u8[15 - i]);
	// stvlx128 v15,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v15.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v16,v16,v17,v0
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v17,v17,v18,v0
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)ctx.v18.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v18,v18,v19,v0
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v18.u8), _mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v19,v19,v20,v0
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v20,v20,v21,v0
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)ctx.v21.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v21,v21,v22,v0
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v21.u8), _mm_load_si128((__m128i*)ctx.v22.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v22,v22,v23,v0
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v22.u8), _mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v23,v23,v24,v0
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v16,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v16.u8[15 - i]);
	// stvlx128 v17,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v17.u8[15 - i]);
	// stvlx128 v18,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v18.u8[15 - i]);
	// stvlx128 v19,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v19.u8[15 - i]);
	// stvlx128 v20,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v20.u8[15 - i]);
	// stvlx128 v21,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v21.u8[15 - i]);
	// stvlx128 v22,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v22.u8[15 - i]);
	// stvlx128 v23,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v23.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v24,v24,v25,v0
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v25,v25,v26,v0
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v26,v26,v27,v0
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v27,v27,v28,v0
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v28,v28,v29,v0
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v29,v29,v30,v0
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v30,v30,v31,v0
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v31,v31,v32,v0
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v24,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v24.u8[15 - i]);
	// stvlx128 v25,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v25.u8[15 - i]);
	// stvlx128 v26,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v26.u8[15 - i]);
	// stvlx128 v27,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v27.u8[15 - i]);
	// stvlx128 v28,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v28.u8[15 - i]);
	// stvlx128 v29,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v29.u8[15 - i]);
	// stvlx128 v30,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v30.u8[15 - i]);
	// stvlx128 v31,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v31.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v32,v32,v33,v0
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v33,v33,v34,v0
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v34,v34,v35,v0
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v35,v35,v36,v0
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v36,v36,v37,v0
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v37,v37,v38,v0
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v38,v38,v39,v0
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v39,v39,v40,v0
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v32,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// stvlx128 v33,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// stvlx128 v34,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvlx128 v35,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v36,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v37,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v38,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvlx128 v39,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v40,v40,v41,v0
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v41,v41,v42,v0
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v42,v42,v43,v0
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v43,v43,v44,v0
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v44,v44,v45,v0
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v45,v45,v46,v0
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v46,v46,v47,v0
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v47,v47,v48,v0
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v40,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// stvlx128 v41,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvlx128 v42,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvlx128 v43,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvlx128 v44,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvlx128 v45,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v46,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v47,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v48,v48,v49,v0
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v49,v49,v50,v0
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v50,v50,v51,v0
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v51,v51,v52,v0
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v52,v52,v53,v0
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v53,v53,v54,v0
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v54,v54,v55,v0
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v55,v55,v56,v0
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v48,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvlx128 v49,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v50,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvlx128 v51,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvlx128 v52,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v53,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvlx128 v54,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvlx128 v55,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v56,v56,v57,v0
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v57,v57,v58,v0
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v58,v58,v59,v0
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v59,v59,v60,v0
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v60,v60,v61,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v61,v61,v62,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v62,v62,v63,v0
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v63,v63,v64,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v64.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v56,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// stvlx128 v57,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvlx128 v58,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvlx128 v59,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v60,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v61,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v62,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvlx128 v63,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// vor128 v65,v64,v64
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_load_si128((__m128i*)ctx.v64.u8));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bge cr6,0x82bebd5c
	if (!ctx.cr6.lt) goto loc_82BEBD5C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82bec108
	if (!ctx.cr6.eq) goto loc_82BEC108;
	// b 0x82bec184
	goto loc_82BEC184;
loc_82BEC108:
	// lvx128 v1,r0,r4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// vperm128 v65,v65,v1,v0
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v65.u8), _mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v1,v1,v2,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v2,v2,v3,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v3,v3,v4,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v4,v4,v5,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v5,v5,v6,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v6,v6,v7,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v7,v7,v8,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v65,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v65.u8[15 - i]);
	// stvlx128 v1,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// vor128 v65,v8,v8
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bgt cr6,0x82bec108
	if (ctx.cr6.gt) goto loc_82BEC108;
loc_82BEC184:
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r7,-48
	ctx.r7.s64 = -48;
	// lvx128 v64,r1,r6
	_mm_store_si128((__m128i*)ctx.v64.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v65,r1,r7
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEC1A0"))) PPC_WEAK_FUNC(sub_82BEC1A0);
PPC_FUNC_IMPL(__imp__sub_82BEC1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	ctx.r11.s64 = 96;
	// li r12,112
	ctx.r12.s64 = 112;
	// li r31,512
	ctx.r31.s64 = 512;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr6,0x82bec4c8
	if (ctx.cr6.lt) goto loc_82BEC4C8;
loc_82BEC1D0:
	// addi r0,r5,-1024
	ctx.r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	ctx.cr6.compare<uint32_t>(ctx.r0.u32, 1024, ctx.xer);
	// blt cr6,0x82bec1e0
	if (ctx.cr6.lt) goto loc_82BEC1E0;
	// li r0,1024
	ctx.r0.s64 = 1024;
loc_82BEC1E0:
	// lvx128 v1,r0,r4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r6,r4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r7,r4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r8,r4
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v14,r10,r4
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v15,r11,r4
	_mm_store_si128((__m128i*)ctx.v15.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v16,r12,r4
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v18,r6,r4
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v19,r7,r4
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v20,r8,r4
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v21,r9,r4
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v22,r10,r4
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v23,r11,r4
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v24,r12,r4
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v26,r6,r4
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v27,r7,r4
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v28,r8,r4
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v29,r9,r4
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v30,r10,r4
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v31,r11,r4
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v32,r12,r4
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// xor r30,r30,r30
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r30.u64;
	// lvx128 v33,r0,r4
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v34,r6,r4
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v35,r7,r4
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v36,r8,r4
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v37,r9,r4
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v38,r10,r4
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v39,r11,r4
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v40,r12,r4
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + ctx.r30.u32) & ~127), 0, 128);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v42,r6,r4
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v43,r7,r4
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v44,r8,r4
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v45,r9,r4
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v46,r10,r4
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v47,r11,r4
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v48,r12,r4
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + ctx.r30.u32) & ~127), 0, 128);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v50,r6,r4
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v51,r7,r4
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v52,r8,r4
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v53,r9,r4
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v54,r10,r4
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r4
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v56,r12,r4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + ctx.r30.u32) & ~127), 0, 128);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r6,r4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r7,r4
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r8,r4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r12,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + ctx.r30.u32) & ~127), 0, 128);
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + ctx.r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v9,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v14.u8[15 - i]);
	// stvlx128 v15,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v15.u8[15 - i]);
	// stvlx128 v16,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v16.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + ctx.r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v17,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v17.u8[15 - i]);
	// stvlx128 v18,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v18.u8[15 - i]);
	// stvlx128 v19,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v19.u8[15 - i]);
	// stvlx128 v20,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v20.u8[15 - i]);
	// stvlx128 v21,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v21.u8[15 - i]);
	// stvlx128 v22,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v22.u8[15 - i]);
	// stvlx128 v23,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v23.u8[15 - i]);
	// stvlx128 v24,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v24.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + ctx.r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v25,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v25.u8[15 - i]);
	// stvlx128 v26,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v26.u8[15 - i]);
	// stvlx128 v27,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v27.u8[15 - i]);
	// stvlx128 v28,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v28.u8[15 - i]);
	// stvlx128 v29,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v29.u8[15 - i]);
	// stvlx128 v30,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v30.u8[15 - i]);
	// stvlx128 v31,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v31.u8[15 - i]);
	// stvlx128 v32,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + ctx.r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v33,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// stvlx128 v34,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvlx128 v35,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v36,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v37,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v38,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvlx128 v39,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// stvlx128 v40,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v41,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvlx128 v42,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvlx128 v43,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvlx128 v44,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvlx128 v45,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v46,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v47,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// stvlx128 v48,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v49,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v50,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvlx128 v51,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvlx128 v52,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v53,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvlx128 v54,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvlx128 v55,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvlx128 v56,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v57,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvlx128 v58,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvlx128 v59,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v60,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v61,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v62,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvlx128 v63,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvlx128 v0,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bge cr6,0x82bec1d0
	if (!ctx.cr6.lt) goto loc_82BEC1D0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82bec4c8
	if (!ctx.cr6.eq) goto loc_82BEC4C8;
	// b 0x82bec524
	goto loc_82BEC524;
loc_82BEC4C8:
	// lvx128 v1,r0,r4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bgt cr6,0x82bec4c8
	if (ctx.cr6.gt) goto loc_82BEC4C8;
loc_82BEC524:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEC530"))) PPC_WEAK_FUNC(sub_82BEC530);
PPC_FUNC_IMPL(__imp__sub_82BEC530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r7,-48
	ctx.r7.s64 = -48;
	// stvlx128 v64,r1,r6
	ea = ctx.r1.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v64.u8[15 - i]);
	// stvlx128 v65,r1,r7
	ea = ctx.r1.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v65.u8[15 - i]);
	// li r0,0
	ctx.r0.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	ctx.r11.s64 = 96;
	// li r12,112
	ctx.r12.s64 = 112;
	// li r31,512
	ctx.r31.s64 = 512;
	// dcbt r4,r0
	// lvx128 v65,r0,r4
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr6,0x82bec9b4
	if (ctx.cr6.lt) goto loc_82BEC9B4;
	// li r0,128
	ctx.r0.s64 = 128;
	// dcbt r4,r0
	// li r0,256
	ctx.r0.s64 = 256;
	// dcbt r4,r0
	// li r0,384
	ctx.r0.s64 = 384;
	// dcbt r4,r0
	// li r0,512
	ctx.r0.s64 = 512;
	// dcbt r4,r0
	// li r0,640
	ctx.r0.s64 = 640;
	// dcbt r4,r0
	// li r0,768
	ctx.r0.s64 = 768;
	// dcbt r4,r0
	// li r0,896
	ctx.r0.s64 = 896;
	// dcbt r4,r0
loc_82BEC5BC:
	// addi r0,r5,-1024
	ctx.r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	ctx.cr6.compare<uint32_t>(ctx.r0.u32, 1024, ctx.xer);
	// blt cr6,0x82bec5cc
	if (ctx.cr6.lt) goto loc_82BEC5CC;
	// li r0,1024
	ctx.r0.s64 = 1024;
loc_82BEC5CC:
	// lvx128 v1,r0,r4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r6,r4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r7,r4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r8,r4
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v14,r10,r4
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v15,r11,r4
	_mm_store_si128((__m128i*)ctx.v15.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v16,r12,r4
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v18,r6,r4
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v19,r7,r4
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v20,r8,r4
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v21,r9,r4
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v22,r10,r4
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v23,r11,r4
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v24,r12,r4
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v26,r6,r4
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v27,r7,r4
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v28,r8,r4
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v29,r9,r4
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v30,r10,r4
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v31,r11,r4
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v32,r12,r4
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// xor r30,r30,r30
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r30.u64;
	// lvx128 v33,r0,r4
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v34,r6,r4
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v35,r7,r4
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v36,r8,r4
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v37,r9,r4
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v38,r10,r4
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v39,r11,r4
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v40,r12,r4
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + ctx.r30.u32) & ~127), 0, 128);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v42,r6,r4
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v43,r7,r4
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v44,r8,r4
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v45,r9,r4
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v46,r10,r4
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v47,r11,r4
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v48,r12,r4
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + ctx.r30.u32) & ~127), 0, 128);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v50,r6,r4
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v51,r7,r4
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v52,r8,r4
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v53,r9,r4
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v54,r10,r4
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r4
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v56,r12,r4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + ctx.r30.u32) & ~127), 0, 128);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r6,r4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r7,r4
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r8,r4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v64,r12,r4
	_mm_store_si128((__m128i*)ctx.v64.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + ctx.r30.u32) & ~127), 0, 128);
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// vperm128 v65,v65,v1,v0
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v65.u8), _mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v1,v1,v2,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v2,v2,v3,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v3,v3,v4,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v4,v4,v5,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v5,v5,v6,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v6,v6,v7,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v7,v7,v8,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v65,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v65.u8[15 - i]);
	// stvlx128 v1,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + ctx.r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v8,v8,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v9,v9,v10,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v10,v10,v11,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v11,v11,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v12,v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v13,v13,v14,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v14.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v14,v14,v15,v0
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v14.u8), _mm_load_si128((__m128i*)ctx.v15.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v15,v15,v16,v0
	_mm_store_si128((__m128i*)ctx.v15.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v15.u8), _mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v8,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvlx128 v9,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v14.u8[15 - i]);
	// stvlx128 v15,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v15.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + ctx.r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v16,v16,v17,v0
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v17,v17,v18,v0
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)ctx.v18.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v18,v18,v19,v0
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v18.u8), _mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v19,v19,v20,v0
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v20,v20,v21,v0
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)ctx.v21.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v21,v21,v22,v0
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v21.u8), _mm_load_si128((__m128i*)ctx.v22.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v22,v22,v23,v0
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v22.u8), _mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v23,v23,v24,v0
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v16,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v16.u8[15 - i]);
	// stvlx128 v17,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v17.u8[15 - i]);
	// stvlx128 v18,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v18.u8[15 - i]);
	// stvlx128 v19,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v19.u8[15 - i]);
	// stvlx128 v20,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v20.u8[15 - i]);
	// stvlx128 v21,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v21.u8[15 - i]);
	// stvlx128 v22,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v22.u8[15 - i]);
	// stvlx128 v23,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v23.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + ctx.r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v24,v24,v25,v0
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v25,v25,v26,v0
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v26,v26,v27,v0
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v27,v27,v28,v0
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v28,v28,v29,v0
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v29,v29,v30,v0
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v30,v30,v31,v0
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v31,v31,v32,v0
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v24,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v24.u8[15 - i]);
	// stvlx128 v25,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v25.u8[15 - i]);
	// stvlx128 v26,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v26.u8[15 - i]);
	// stvlx128 v27,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v27.u8[15 - i]);
	// stvlx128 v28,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v28.u8[15 - i]);
	// stvlx128 v29,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v29.u8[15 - i]);
	// stvlx128 v30,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v30.u8[15 - i]);
	// stvlx128 v31,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v31.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + ctx.r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v32,v32,v33,v0
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v33,v33,v34,v0
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v34,v34,v35,v0
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v35,v35,v36,v0
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v36,v36,v37,v0
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v37,v37,v38,v0
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v38,v38,v39,v0
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v39,v39,v40,v0
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v32,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// stvlx128 v33,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// stvlx128 v34,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvlx128 v35,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v36,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v37,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v38,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvlx128 v39,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v40,v40,v41,v0
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v41,v41,v42,v0
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v42,v42,v43,v0
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v43,v43,v44,v0
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v44,v44,v45,v0
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v45,v45,v46,v0
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v46,v46,v47,v0
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v47,v47,v48,v0
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v40,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// stvlx128 v41,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvlx128 v42,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvlx128 v43,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvlx128 v44,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvlx128 v45,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v46,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v47,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v48,v48,v49,v0
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v49,v49,v50,v0
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v50,v50,v51,v0
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v51,v51,v52,v0
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v52,v52,v53,v0
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v53,v53,v54,v0
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v54,v54,v55,v0
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v55,v55,v56,v0
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v48,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvlx128 v49,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v50,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvlx128 v51,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvlx128 v52,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v53,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvlx128 v54,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvlx128 v55,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v56,v56,v57,v0
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v57,v57,v58,v0
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v58,v58,v59,v0
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v59,v59,v60,v0
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v60,v60,v61,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v61,v61,v62,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v62,v62,v63,v0
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v63,v63,v64,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v64.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v56,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// stvlx128 v57,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvlx128 v58,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvlx128 v59,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v60,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v61,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v62,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvlx128 v63,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// vor128 v65,v64,v64
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_load_si128((__m128i*)ctx.v64.u8));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bge cr6,0x82bec5bc
	if (!ctx.cr6.lt) goto loc_82BEC5BC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82bec9b4
	if (!ctx.cr6.eq) goto loc_82BEC9B4;
	// b 0x82beca34
	goto loc_82BECA34;
loc_82BEC9B4:
	// lvx128 v1,r0,r4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// vperm128 v65,v65,v1,v0
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v65.u8), _mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v1,v1,v2,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v2,v2,v3,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v3,v3,v4,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v4,v4,v5,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v5,v5,v6,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v6,v6,v7,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v7,v7,v8,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v65,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v65.u8[15 - i]);
	// stvlx128 v1,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// vor128 v65,v8,v8
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bgt cr6,0x82bec9b4
	if (ctx.cr6.gt) goto loc_82BEC9B4;
loc_82BECA34:
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r7,-48
	ctx.r7.s64 = -48;
	// lvx128 v64,r1,r6
	_mm_store_si128((__m128i*)ctx.v64.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v65,r1,r7
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BECA50"))) PPC_WEAK_FUNC(sub_82BECA50);
PPC_FUNC_IMPL(__imp__sub_82BECA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,63
	ctx.r9.s64 = 63;
	// li r10,1024
	ctx.r10.s64 = 1024;
	// li r12,128
	ctx.r12.s64 = 128;
	// cmplwi r5,128
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// bltlr 
	if (ctx.cr0.lt) return;
loc_82BECA74:
	// cmplwi cr7,r5,256
	ctx.cr7.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// cmplwi r5,1024
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr7,0x82beca8c
	if (ctx.cr7.lt) goto loc_82BECA8C;
	// ble 0x82beca88
	if (!ctx.cr0.gt) goto loc_82BECA88;
	// dcbt r10,r4
loc_82BECA88:
	// dcbzl r12,r3
	memset(base + ((ctx.r12.u32 + ctx.r3.u32) & ~127), 0, 128);
loc_82BECA8C:
	// lvx v1,r0,r4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// lvx v2,r6,r4
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx v3,r7,r4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v1,v1,v2,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx v4,r8,r4
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v2,v2,v3,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx v5,r0,r11
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v3,v3,v4,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx v6,r6,r11
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v4,v4,v5,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx v7,r7,r11
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v5,v5,v6,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx v8,r8,r11
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v6,v6,v7,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx v9,r9,r11
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v7,v7,v8,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx v1,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v8,v8,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx v2,r6,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stvx v3,r7,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvx v4,r8,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvx v5,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// stvx v6,r6,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplwi r5,128
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// stvx v7,r7,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v8,r8,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bge 0x82beca74
	if (!ctx.cr0.lt) goto loc_82BECA74;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BECB10"))) PPC_WEAK_FUNC(sub_82BECB10);
PPC_FUNC_IMPL(__imp__sub_82BECB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x82BECB18;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82becb54
	if (!ctx.cr6.eq) goto loc_82BECB54;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BECB34:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82becb34
	if (!ctx.cr6.eq) goto loc_82BECB34;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82BECB54:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82becce4
	if (!ctx.cr6.gt) goto loc_82BECCE4;
	// lis r9,-31909
	ctx.r9.s64 = -2091188224;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r26,-31909
	ctx.r26.s64 = -2091188224;
	// lis r25,-31909
	ctx.r25.s64 = -2091188224;
	// lis r27,-31909
	ctx.r27.s64 = -2091188224;
	// lis r28,-31909
	ctx.r28.s64 = -2091188224;
	// lis r24,-31909
	ctx.r24.s64 = -2091188224;
	// lis r21,-31909
	ctx.r21.s64 = -2091188224;
	// lis r20,-31909
	ctx.r20.s64 = -2091188224;
	// lis r22,-31909
	ctx.r22.s64 = -2091188224;
	// addi r23,r9,8328
	ctx.r23.s64 = ctx.r9.s64 + 8328;
	// addi r30,r11,8352
	ctx.r30.s64 = ctx.r11.s64 + 8352;
loc_82BECB90:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbzx r9,r8,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// subf r7,r29,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r29.s64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x82becce4
	if (ctx.cr6.gt) goto loc_82BECCE4;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x82becc34
	if (ctx.cr6.lt) goto loc_82BECC34;
	// beq cr6,0x82becc20
	if (ctx.cr6.eq) goto loc_82BECC20;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x82becc0c
	if (ctx.cr6.lt) goto loc_82BECC0C;
	// beq cr6,0x82becbf8
	if (ctx.cr6.eq) goto loc_82BECBF8;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// blt cr6,0x82becbe4
	if (ctx.cr6.lt) goto loc_82BECBE4;
	// bne cr6,0x82becc44
	if (!ctx.cr6.eq) goto loc_82BECC44;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
loc_82BECBE4:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_82BECBF8:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_82BECC0C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_82BECC20:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_82BECC34:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_82BECC44:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,8300(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8300);
	// lwzx r9,r9,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r23.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82becc6c
	if (ctx.cr6.gt) goto loc_82BECC6C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82beccdc
	if (ctx.cr6.gt) goto loc_82BECCDC;
	// b 0x82beccd4
	goto loc_82BECCD4;
loc_82BECC6C:
	// lwz r9,8304(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8304);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82becc8c
	if (!ctx.cr6.gt) goto loc_82BECC8C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82beccdc
	if (ctx.cr6.gt) goto loc_82BECCDC;
	// lwz r11,8296(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8296);
	// b 0x82beccd4
	goto loc_82BECCD4;
loc_82BECC8C:
	// lwz r9,8312(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8312);
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82beccb8
	if (ctx.cr6.gt) goto loc_82BECCB8;
	// lwz r9,8308(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8308);
	// lwz r8,8320(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8320);
	// srw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r9,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r9.u16);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
loc_82BECCB8:
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82beccdc
	if (ctx.cr6.gt) goto loc_82BECCDC;
	// lwz r9,8316(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8316);
	// lwz r8,8324(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8324);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82BECCD4:
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
loc_82BECCDC:
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82becb90
	if (ctx.cr6.lt) goto loc_82BECB90;
loc_82BECCE4:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82becd00
	if (ctx.cr6.eq) goto loc_82BECD00;
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82becd00
	if (!ctx.cr6.lt) goto loc_82BECD00;
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x82beb9a0
	ctx.lr = 0x82BECCFC;
	sub_82BEB9A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BECD00:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BECD08"))) PPC_WEAK_FUNC(sub_82BECD08);
PPC_FUNC_IMPL(__imp__sub_82BECD08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82BECD10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r29,r11,31
	ctx.r29.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r30,r10,20,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// rlwinm r28,r11,0,29,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82becec8
	if (ctx.cr6.eq) goto loc_82BECEC8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82becec8
	if (ctx.cr6.eq) goto loc_82BECEC8;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// blt cr6,0x82becec8
	if (ctx.cr6.lt) goto loc_82BECEC8;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// blt cr6,0x82becec8
	if (ctx.cr6.lt) goto loc_82BECEC8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82beceac
	if (ctx.cr6.eq) goto loc_82BECEAC;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r31,r11,7184
	ctx.r31.s64 = ctx.r11.s64 + 7184;
loc_82BECD5C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82becea4
	if (ctx.cr6.eq) goto loc_82BECEA4;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb. r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82becd7c
	if (!ctx.cr0.eq) goto loc_82BECD7C;
	// lbz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bece80
	if (ctx.cr6.eq) goto loc_82BECE80;
loc_82BECD7C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bece94
	if (ctx.cr6.eq) goto loc_82BECE94;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bece9c
	if (ctx.cr0.eq) goto loc_82BECE9C;
	// rlwinm r9,r10,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// rlwinm r27,r11,2,22,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r9,r27,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// beq cr6,0x82bece0c
	if (ctx.cr6.eq) goto loc_82BECE0C;
	// rlwinm. r27,r8,0,15,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82becdf0
	if (ctx.cr0.eq) goto loc_82BECDF0;
	// rlwinm. r11,r9,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82becddc
	if (ctx.cr0.eq) goto loc_82BECDDC;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82becdd0
	if (!ctx.cr6.lt) goto loc_82BECDD0;
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x82bece64
	goto loc_82BECE64;
loc_82BECDD0:
	// ble cr6,0x82bece64
	if (!ctx.cr6.gt) goto loc_82BECE64;
	// li r3,11
	ctx.r3.s64 = 11;
	// b 0x82bece64
	goto loc_82BECE64;
loc_82BECDDC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becde8
	if (!ctx.cr6.eq) goto loc_82BECDE8;
	// li r3,4
	ctx.r3.s64 = 4;
loc_82BECDE8:
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x82bece6c
	goto loc_82BECE6C;
loc_82BECDF0:
	// rlwinm. r27,r9,0,15,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82bece0c
	if (ctx.cr0.eq) goto loc_82BECE0C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bece04
	if (!ctx.cr6.eq) goto loc_82BECE04;
	// li r3,8
	ctx.r3.s64 = 8;
loc_82BECE04:
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x82bece24
	goto loc_82BECE24;
loc_82BECE0C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82bece30
	if (ctx.cr6.eq) goto loc_82BECE30;
	// rlwinm. r27,r8,0,14,14
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x82bece6c
	if (!ctx.cr0.eq) goto loc_82BECE6C;
	// rlwinm. r27,r9,0,14,14
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82bece30
	if (ctx.cr0.eq) goto loc_82BECE30;
loc_82BECE24:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x82bece74
	goto loc_82BECE74;
loc_82BECE30:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82bece58
	if (ctx.cr6.eq) goto loc_82BECE58;
	// rlwinm. r27,r8,0,11,11
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82bece48
	if (ctx.cr0.eq) goto loc_82BECE48;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// oris r8,r10,8
	ctx.r8.u64 = ctx.r10.u64 | 524288;
loc_82BECE48:
	// rlwinm. r10,r9,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bece58
	if (ctx.cr0.eq) goto loc_82BECE58;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// oris r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 524288;
loc_82BECE58:
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bece94
	if (ctx.cr6.lt) goto loc_82BECE94;
	// bgt cr6,0x82bece9c
	if (ctx.cr6.gt) goto loc_82BECE9C;
loc_82BECE64:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_82BECE6C:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82BECE74:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82becd5c
	if (!ctx.cr6.eq) goto loc_82BECD5C;
	// b 0x82beceac
	goto loc_82BECEAC;
loc_82BECE80:
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,8208
	ctx.r11.s64 = ctx.r11.s64 + 8208;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82beced4
	goto loc_82BECED4;
loc_82BECE94:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82beced4
	goto loc_82BECED4;
loc_82BECE9C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82beced4
	goto loc_82BECED4;
loc_82BECEA4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82beceb4
	if (!ctx.cr6.eq) goto loc_82BECEB4;
loc_82BECEAC:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82bece80
	if (ctx.cr6.eq) goto loc_82BECE80;
loc_82BECEB4:
	// subfic r11,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r5.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// b 0x82beced4
	goto loc_82BECED4;
loc_82BECEC8:
	// li r3,87
	ctx.r3.s64 = 87;
	// bl 0x82beb9a0
	ctx.lr = 0x82BECED0;
	sub_82BEB9A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BECED4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BECEDC"))) PPC_WEAK_FUNC(sub_82BECEDC);
PPC_FUNC_IMPL(__imp__sub_82BECEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BECEE0"))) PPC_WEAK_FUNC(sub_82BECEE0);
PPC_FUNC_IMPL(__imp__sub_82BECEE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82beb948
	sub_82BEB948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BECEE4"))) PPC_WEAK_FUNC(sub_82BECEE4);
PPC_FUNC_IMPL(__imp__sub_82BECEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BECEE8"))) PPC_WEAK_FUNC(sub_82BECEE8);
PPC_FUNC_IMPL(__imp__sub_82BECEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82bf2178
	ctx.lr = 0x82BECF08;
	sub_82BF2178(ctx, base);
	// rlwinm r4,r31,29,28,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82befff0
	ctx.lr = 0x82BECF14;
	sub_82BEFFF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BECF2C"))) PPC_WEAK_FUNC(sub_82BECF2C);
PPC_FUNC_IMPL(__imp__sub_82BECF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BECF30"))) PPC_WEAK_FUNC(sub_82BECF30);
PPC_FUNC_IMPL(__imp__sub_82BECF30) {
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
	// bl 0x82bf2178
	ctx.lr = 0x82BECF48;
	sub_82BF2178(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82bf12d8
	ctx.lr = 0x82BECF54;
	sub_82BF12D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x82becf64
	if (!ctx.cr0.eq) goto loc_82BECF64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BECF64:
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

__attribute__((alias("__imp__sub_82BECF78"))) PPC_WEAK_FUNC(sub_82BECF78);
PPC_FUNC_IMPL(__imp__sub_82BECF78) {
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
	// andi. r11,r3,5
	ctx.r11.u64 = ctx.r3.u64 & 5;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// ori r3,r11,4096
	ctx.r3.u64 = ctx.r11.u64 | 4096;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82becfb4
	if (!ctx.cr6.lt) goto loc_82BECFB4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82becfb0
	if (!ctx.cr6.eq) goto loc_82BECFB0;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x82becfc0
	goto loc_82BECFC0;
loc_82BECFB0:
	// lis r5,1
	ctx.r5.s64 = 65536;
loc_82BECFB4:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82becfc0
	if (!ctx.cr6.gt) goto loc_82BECFC0;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_82BECFC0:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82befa48
	ctx.lr = 0x82BECFD0;
	sub_82BEFA48(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82becfe0
	if (!ctx.cr0.eq) goto loc_82BECFE0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82beb9a0
	ctx.lr = 0x82BECFE0;
	sub_82BEB9A0(ctx, base);
loc_82BECFE0:
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

__attribute__((alias("__imp__sub_82BECFF8"))) PPC_WEAK_FUNC(sub_82BECFF8);
PPC_FUNC_IMPL(__imp__sub_82BECFF8) {
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
	// bl 0x82beead0
	ctx.lr = 0x82BED008;
	sub_82BEEAD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82bed018
	if (!ctx.cr0.eq) goto loc_82BED018;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bed024
	goto loc_82BED024;
loc_82BED018:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82beb9a0
	ctx.lr = 0x82BED020;
	sub_82BEB9A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BED024:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BED034"))) PPC_WEAK_FUNC(sub_82BED034);
PPC_FUNC_IMPL(__imp__sub_82BED034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED038"))) PPC_WEAK_FUNC(sub_82BED038);
PPC_FUNC_IMPL(__imp__sub_82BED038) {
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
	// bl 0x82bf2178
	ctx.lr = 0x82BED050;
	sub_82BF2178(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82bef170
	ctx.lr = 0x82BED05C;
	sub_82BEF170(ctx, base);
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

__attribute__((alias("__imp__sub_82BED070"))) PPC_WEAK_FUNC(sub_82BED070);
PPC_FUNC_IMPL(__imp__sub_82BED070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82bf2178
	ctx.lr = 0x82BED090;
	sub_82BF2178(ctx, base);
	// rlwinm r4,r31,29,28,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82befff0
	ctx.lr = 0x82BED09C;
	sub_82BEFFF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BED0B4"))) PPC_WEAK_FUNC(sub_82BED0B4);
PPC_FUNC_IMPL(__imp__sub_82BED0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED0B8"))) PPC_WEAK_FUNC(sub_82BED0B8);
PPC_FUNC_IMPL(__imp__sub_82BED0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82BED0C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm. r11,r5,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bed0dc
	if (ctx.cr0.eq) goto loc_82BED0DC;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82bed0e4
	goto loc_82BED0E4;
loc_82BED0DC:
	// not r11,r5
	ctx.r11.u64 = ~ctx.r5.u64;
	// rlwinm r31,r11,3,27,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x10;
loc_82BED0E4:
	// bl 0x82bf2178
	ctx.lr = 0x82BED0E8;
	sub_82BF2178(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82bf1890
	ctx.lr = 0x82BED0F8;
	sub_82BF1890(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BED100"))) PPC_WEAK_FUNC(sub_82BED100);
PPC_FUNC_IMPL(__imp__sub_82BED100) {
	PPC_FUNC_PROLOGUE();
	// b 0x82beea50
	sub_82BEEA50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BED104"))) PPC_WEAK_FUNC(sub_82BED104);
PPC_FUNC_IMPL(__imp__sub_82BED104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED108"))) PPC_WEAK_FUNC(sub_82BED108);
PPC_FUNC_IMPL(__imp__sub_82BED108) {
	PPC_FUNC_PROLOGUE();
	// b 0x82beea58
	sub_82BEEA58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BED10C"))) PPC_WEAK_FUNC(sub_82BED10C);
PPC_FUNC_IMPL(__imp__sub_82BED10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED110"))) PPC_WEAK_FUNC(sub_82BED110);
PPC_FUNC_IMPL(__imp__sub_82BED110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x82bed17c
	if (!ctx.cr6.eq) goto loc_82BED17C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82bed158
	if (ctx.cr6.eq) goto loc_82BED158;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bed158
	if (ctx.cr6.eq) goto loc_82BED158;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82bf2190
	ctx.lr = 0x82BED154;
	sub_82BF2190(ctx, base);
	// b 0x82bed15c
	goto loc_82BED15C;
loc_82BED158:
	// li r3,258
	ctx.r3.s64 = 258;
loc_82BED15C:
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// bne cr6,0x82bed16c
	if (!ctx.cr6.eq) goto loc_82BED16C;
	// li r3,996
	ctx.r3.s64 = 996;
	// b 0x82bed190
	goto loc_82BED190;
loc_82BED16C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bed17c
	if (ctx.cr6.eq) goto loc_82BED17C;
	// bl 0x82bf2188
	ctx.lr = 0x82BED178;
	sub_82BF2188(ctx, base);
	// b 0x82bed190
	goto loc_82BED190;
loc_82BED17C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bed18c
	if (ctx.cr6.eq) goto loc_82BED18C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82BED18C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82BED190:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BED1A8"))) PPC_WEAK_FUNC(sub_82BED1A8);
PPC_FUNC_IMPL(__imp__sub_82BED1A8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x833b7a04
	ctx.lr = 0x82BED1C4;
	__imp__ObLookupThreadByThreadId(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82bed1f4
	if (ctx.cr0.lt) goto loc_82BED1F4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b79f4
	ctx.lr = 0x82BED1D8;
	__imp__ObOpenObjectByPointer(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b79e4
	ctx.lr = 0x82BED1E4;
	__imp__ObDereferenceObject(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82bed1f4
	if (ctx.cr6.lt) goto loc_82BED1F4;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82bed200
	goto loc_82BED200;
loc_82BED1F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82becee0
	ctx.lr = 0x82BED1FC;
	sub_82BECEE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BED200:
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

__attribute__((alias("__imp__sub_82BED214"))) PPC_WEAK_FUNC(sub_82BED214);
PPC_FUNC_IMPL(__imp__sub_82BED214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED218"))) PPC_WEAK_FUNC(sub_82BED218);
PPC_FUNC_IMPL(__imp__sub_82BED218) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,2624(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2624);
	// bl 0x833b7a24
	ctx.lr = 0x82BED23C;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bed27c
	if (ctx.cr0.lt) goto loc_82BED27C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 15, ctx.xer);
	// bne cr6,0x82bed258
	if (!ctx.cr6.eq) goto loc_82BED258;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x82bed264
	goto loc_82BED264;
loc_82BED258:
	// cmpwi cr6,r31,-15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -15, ctx.xer);
	// bne cr6,0x82bed264
	if (!ctx.cr6.eq) goto loc_82BED264;
	// li r4,-16
	ctx.r4.s64 = -16;
loc_82BED264:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b7a14
	ctx.lr = 0x82BED26C;
	__imp__KeSetBasePriorityThread(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b79e4
	ctx.lr = 0x82BED274;
	__imp__ObDereferenceObject(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bed284
	goto loc_82BED284;
loc_82BED27C:
	// bl 0x82becee0
	ctx.lr = 0x82BED280;
	sub_82BECEE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BED284:
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

__attribute__((alias("__imp__sub_82BED298"))) PPC_WEAK_FUNC(sub_82BED298);
PPC_FUNC_IMPL(__imp__sub_82BED298) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,2624(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2624);
	// bl 0x833b7a24
	ctx.lr = 0x82BED2B8;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bed2f8
	if (ctx.cr0.lt) goto loc_82BED2F8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b7a34
	ctx.lr = 0x82BED2C8;
	__imp__KeQueryBasePriorityThread(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// bne cr6,0x82bed2dc
	if (!ctx.cr6.eq) goto loc_82BED2DC;
	// li r31,15
	ctx.r31.s64 = 15;
	// b 0x82bed2e8
	goto loc_82BED2E8;
loc_82BED2DC:
	// cmpwi cr6,r31,-16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -16, ctx.xer);
	// bne cr6,0x82bed2e8
	if (!ctx.cr6.eq) goto loc_82BED2E8;
	// li r31,-15
	ctx.r31.s64 = -15;
loc_82BED2E8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b79e4
	ctx.lr = 0x82BED2F0;
	__imp__ObDereferenceObject(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82bed304
	goto loc_82BED304;
loc_82BED2F8:
	// bl 0x82becee0
	ctx.lr = 0x82BED2FC;
	sub_82BECEE0(ctx, base);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_82BED304:
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

__attribute__((alias("__imp__sub_82BED318"))) PPC_WEAK_FUNC(sub_82BED318);
PPC_FUNC_IMPL(__imp__sub_82BED318) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,2624(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2624);
	// bl 0x833b7a24
	ctx.lr = 0x82BED33C;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bed368
	if (ctx.cr0.lt) goto loc_82BED368;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// bl 0x833b7a44
	ctx.lr = 0x82BED358;
	__imp__KeSetDisableBoostThread(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b79e4
	ctx.lr = 0x82BED360;
	__imp__ObDereferenceObject(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bed370
	goto loc_82BED370;
loc_82BED368:
	// bl 0x82becee0
	ctx.lr = 0x82BED36C;
	sub_82BECEE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BED370:
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

__attribute__((alias("__imp__sub_82BED384"))) PPC_WEAK_FUNC(sub_82BED384);
PPC_FUNC_IMPL(__imp__sub_82BED384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED388"))) PPC_WEAK_FUNC(sub_82BED388);
PPC_FUNC_IMPL(__imp__sub_82BED388) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,2624(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2624);
	// bl 0x833b7a24
	ctx.lr = 0x82BED3AC;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bed3d8
	if (ctx.cr0.lt) goto loc_82BED3D8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,187(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 187);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x833b79e4
	ctx.lr = 0x82BED3D0;
	__imp__ObDereferenceObject(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bed3e0
	goto loc_82BED3E0;
loc_82BED3D8:
	// bl 0x82becee0
	ctx.lr = 0x82BED3DC;
	sub_82BECEE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BED3E0:
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

__attribute__((alias("__imp__sub_82BED3F4"))) PPC_WEAK_FUNC(sub_82BED3F4);
PPC_FUNC_IMPL(__imp__sub_82BED3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED3F8"))) PPC_WEAK_FUNC(sub_82BED3F8);
PPC_FUNC_IMPL(__imp__sub_82BED3F8) {
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
	// bl 0x833b7a54
	ctx.lr = 0x82BED40C;
	__imp__NtSuspendThread(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82bed420
	if (!ctx.cr0.lt) goto loc_82BED420;
	// bl 0x82becee0
	ctx.lr = 0x82BED418;
	sub_82BECEE0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82bed424
	goto loc_82BED424;
loc_82BED420:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BED424:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BED434"))) PPC_WEAK_FUNC(sub_82BED434);
PPC_FUNC_IMPL(__imp__sub_82BED434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED438"))) PPC_WEAK_FUNC(sub_82BED438);
PPC_FUNC_IMPL(__imp__sub_82BED438) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BED448"))) PPC_WEAK_FUNC(sub_82BED448);
PPC_FUNC_IMPL(__imp__sub_82BED448) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32065
	ctx.r10.s64 = -2101411840;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r10,-11208
	ctx.r4.s64 = ctx.r10.s64 + -11208;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x833b7a64
	ctx.lr = 0x82BED474;
	__imp__NtQueueApcThread(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BED494"))) PPC_WEAK_FUNC(sub_82BED494);
PPC_FUNC_IMPL(__imp__sub_82BED494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED498"))) PPC_WEAK_FUNC(sub_82BED498);
PPC_FUNC_IMPL(__imp__sub_82BED498) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,2624(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2624);
	// bl 0x833b7a24
	ctx.lr = 0x82BED4BC;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bed4f0
	if (ctx.cr0.lt) goto loc_82BED4F0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bed4dc
	if (ctx.cr0.eq) goto loc_82BED4DC;
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// b 0x82bed4e0
	goto loc_82BED4E0;
loc_82BED4DC:
	// li r11,259
	ctx.r11.s64 = 259;
loc_82BED4E0:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x833b79e4
	ctx.lr = 0x82BED4E8;
	__imp__ObDereferenceObject(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bed4f8
	goto loc_82BED4F8;
loc_82BED4F0:
	// bl 0x82becee0
	ctx.lr = 0x82BED4F4;
	sub_82BECEE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BED4F8:
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

__attribute__((alias("__imp__sub_82BED50C"))) PPC_WEAK_FUNC(sub_82BED50C);
PPC_FUNC_IMPL(__imp__sub_82BED50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED510"))) PPC_WEAK_FUNC(sub_82BED510);
PPC_FUNC_IMPL(__imp__sub_82BED510) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,6096(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6096);
	// stw r11,6096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6096, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BED524"))) PPC_WEAK_FUNC(sub_82BED524);
PPC_FUNC_IMPL(__imp__sub_82BED524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED528"))) PPC_WEAK_FUNC(sub_82BED528);
PPC_FUNC_IMPL(__imp__sub_82BED528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82BED530;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r4,2624(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2624);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x833b7a24
	ctx.lr = 0x82BED554;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bed5a4
	if (ctx.cr0.lt) goto loc_82BED5A4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// ld r10,304(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 304);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bed584
	if (ctx.cr0.eq) goto loc_82BED584;
	// ld r10,312(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 312);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// b 0x82bed588
	goto loc_82BED588;
loc_82BED584:
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_82BED588:
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mulli r10,r10,10000
	ctx.r10.s64 = ctx.r10.s64 * 10000;
	// std r10,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
	// bl 0x833b79e4
	ctx.lr = 0x82BED59C;
	__imp__ObDereferenceObject(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bed5ac
	goto loc_82BED5AC;
loc_82BED5A4:
	// bl 0x82becee0
	ctx.lr = 0x82BED5A8;
	sub_82BECEE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BED5AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BED5B4"))) PPC_WEAK_FUNC(sub_82BED5B4);
PPC_FUNC_IMPL(__imp__sub_82BED5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED5B8"))) PPC_WEAK_FUNC(sub_82BED5B8);
PPC_FUNC_IMPL(__imp__sub_82BED5B8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,2624(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2624);
	// bl 0x833b7a24
	ctx.lr = 0x82BED5DC;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bed610
	if (ctx.cr0.lt) goto loc_82BED610;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r3,340
	ctx.r11.s64 = ctx.r3.s64 + 340;
	// lwz r10,340(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x833b79e4
	ctx.lr = 0x82BED608;
	__imp__ObDereferenceObject(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bed618
	goto loc_82BED618;
loc_82BED610:
	// bl 0x82becee0
	ctx.lr = 0x82BED614;
	sub_82BECEE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BED618:
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

__attribute__((alias("__imp__sub_82BED62C"))) PPC_WEAK_FUNC(sub_82BED62C);
PPC_FUNC_IMPL(__imp__sub_82BED62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED630"))) PPC_WEAK_FUNC(sub_82BED630);
PPC_FUNC_IMPL(__imp__sub_82BED630) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,256(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// mulli r10,r3,3
	ctx.r10.s64 = ctx.r3.s64 * 3;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BED644"))) PPC_WEAK_FUNC(sub_82BED644);
PPC_FUNC_IMPL(__imp__sub_82BED644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED648"))) PPC_WEAK_FUNC(sub_82BED648);
PPC_FUNC_IMPL(__imp__sub_82BED648) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,256(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// divw r3,r11,r10
	ctx.r3.s32 = ctx.r11.s32 / ctx.r10.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BED660"))) PPC_WEAK_FUNC(sub_82BED660);
PPC_FUNC_IMPL(__imp__sub_82BED660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// bge cr6,0x82bed6bc
	if (!ctx.cr6.lt) goto loc_82BED6BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,2624(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2624);
	// bl 0x833b7a24
	ctx.lr = 0x82BED690;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82bed6ec
	if (ctx.cr0.lt) goto loc_82BED6EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// slw r4,r11,r30
	ctx.r4.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// bl 0x833b7a74
	ctx.lr = 0x82BED6AC;
	__imp__KeSetAffinityThread(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833b79e4
	ctx.lr = 0x82BED6B8;
	__imp__ObDereferenceObject(ctx, base);
	// b 0x82bed6c4
	goto loc_82BED6C4;
loc_82BED6BC:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,13
	ctx.r31.u64 = ctx.r31.u64 | 13;
loc_82BED6C4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82bed6ec
	if (ctx.cr6.lt) goto loc_82BED6EC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bed6e4
	if (ctx.cr6.eq) goto loc_82BED6E4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r3,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r3.s64 = 31 - ctx.r11.s64;
	// b 0x82bed6f8
	goto loc_82BED6F8;
loc_82BED6E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bed6f8
	goto loc_82BED6F8;
loc_82BED6EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82becee0
	ctx.lr = 0x82BED6F4;
	sub_82BECEE0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BED6F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BED710"))) PPC_WEAK_FUNC(sub_82BED710);
PPC_FUNC_IMPL(__imp__sub_82BED710) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,268(r13)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BED718"))) PPC_WEAK_FUNC(sub_82BED718);
PPC_FUNC_IMPL(__imp__sub_82BED718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2600);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bed738
	if (ctx.cr6.eq) goto loc_82BED738;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82BED738:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BED740"))) PPC_WEAK_FUNC(sub_82BED740);
PPC_FUNC_IMPL(__imp__sub_82BED740) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,2600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2600);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bed780
	if (ctx.cr6.eq) goto loc_82BED780;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BED77C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bed784
	goto loc_82BED784;
loc_82BED780:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BED784:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bed7b8
	if (!ctx.cr6.eq) goto loc_82BED7B8;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// lwz r10,6096(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6096);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bed7b8
	if (ctx.cr6.eq) goto loc_82BED7B8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BED7AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x82bed7bc
	if (ctx.cr6.eq) goto loc_82BED7BC;
loc_82BED7B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BED7BC:
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

__attribute__((alias("__imp__sub_82BED7D0"))) PPC_WEAK_FUNC(sub_82BED7D0);
PPC_FUNC_IMPL(__imp__sub_82BED7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// b 0x82bed810
	goto loc_82BED810;
loc_82BED7F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bed80c
	if (ctx.cr6.eq) goto loc_82BED80C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82bed80c
	if (ctx.cr6.eq) goto loc_82BED80C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BED80C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BED80C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82BED810:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82bed7f0
	if (ctx.cr6.lt) goto loc_82BED7F0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BED830"))) PPC_WEAK_FUNC(sub_82BED830);
PPC_FUNC_IMPL(__imp__sub_82BED830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bed874
	goto loc_82BED874;
loc_82BED854:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed87c
	if (!ctx.cr6.eq) goto loc_82BED87C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bed870
	if (ctx.cr6.eq) goto loc_82BED870;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BED870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BED870:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82BED874:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82bed854
	if (ctx.cr6.lt) goto loc_82BED854;
loc_82BED87C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BED894"))) PPC_WEAK_FUNC(sub_82BED894);
PPC_FUNC_IMPL(__imp__sub_82BED894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED898"))) PPC_WEAK_FUNC(sub_82BED898);
PPC_FUNC_IMPL(__imp__sub_82BED898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,22544(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22544);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bed8c8
	if (ctx.cr6.eq) goto loc_82BED8C8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BED8C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BED8C8:
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r10,r10,7032
	ctx.r10.s64 = ctx.r10.s64 + 7032;
	// addi r30,r11,7044
	ctx.r30.s64 = ctx.r11.s64 + 7044;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82bed918
	if (!ctx.cr6.lt) goto loc_82BED918;
loc_82BED8E8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed960
	if (!ctx.cr6.eq) goto loc_82BED960;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bed904
	if (ctx.cr6.eq) goto loc_82BED904;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BED904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BED904:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82bed8e8
	if (ctx.cr6.lt) goto loc_82BED8E8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed960
	if (!ctx.cr6.eq) goto loc_82BED960;
loc_82BED918:
	// lis r10,-31939
	ctx.r10.s64 = -2093154304;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r30,r11,7028
	ctx.r30.s64 = ctx.r11.s64 + 7028;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82bed95c
	if (!ctx.cr6.lt) goto loc_82BED95C;
loc_82BED934:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bed950
	if (ctx.cr6.eq) goto loc_82BED950;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82bed950
	if (ctx.cr6.eq) goto loc_82BED950;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BED950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BED950:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82bed934
	if (ctx.cr6.lt) goto loc_82BED934;
loc_82BED95C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BED960:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BED978"))) PPC_WEAK_FUNC(sub_82BED978);
PPC_FUNC_IMPL(__imp__sub_82BED978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31939
	ctx.r10.s64 = -2093154304;
	// lis r11,-31939
	ctx.r11.s64 = -2093154304;
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82bed9d4
	if (!ctx.cr6.lt) goto loc_82BED9D4;
loc_82BED9AC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed9d4
	if (!ctx.cr6.eq) goto loc_82BED9D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bed9c8
	if (ctx.cr6.eq) goto loc_82BED9C8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BED9C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BED9C8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82bed9ac
	if (ctx.cr6.lt) goto loc_82BED9AC;
loc_82BED9D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BED9EC"))) PPC_WEAK_FUNC(sub_82BED9EC);
PPC_FUNC_IMPL(__imp__sub_82BED9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED9F0"))) PPC_WEAK_FUNC(sub_82BED9F0);
PPC_FUNC_IMPL(__imp__sub_82BED9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82BED9F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,8256
	ctx.r29.s64 = ctx.r11.s64 + 8256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b77e4
	ctx.lr = 0x82BEDA10;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r31,r11,8284
	ctx.r31.s64 = ctx.r11.s64 + 8284;
	// lwz r11,8284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8284);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// beq cr6,0x82beda48
	if (ctx.cr6.eq) goto loc_82BEDA48;
loc_82BEDA28:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BEDA40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82beda28
	if (!ctx.cr6.eq) goto loc_82BEDA28;
loc_82BEDA48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b77f4
	ctx.lr = 0x82BEDA50;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEDA58"))) PPC_WEAK_FUNC(sub_82BEDA58);
PPC_FUNC_IMPL(__imp__sub_82BEDA58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEDA78"))) PPC_WEAK_FUNC(sub_82BEDA78);
PPC_FUNC_IMPL(__imp__sub_82BEDA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82BEDA80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,8256
	ctx.r30.s64 = ctx.r11.s64 + 8256;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b77e4
	ctx.lr = 0x82BEDA9C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82bedac4
	if (ctx.cr6.eq) goto loc_82BEDAC4;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r10,r11,8284
	ctx.r10.s64 = ctx.r11.s64 + 8284;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x82bedad4
	goto loc_82BEDAD4;
loc_82BEDAC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82BEDAD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b77f4
	ctx.lr = 0x82BEDADC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEDAE4"))) PPC_WEAK_FUNC(sub_82BEDAE4);
PPC_FUNC_IMPL(__imp__sub_82BEDAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEDAE8"))) PPC_WEAK_FUNC(sub_82BEDAE8);
PPC_FUNC_IMPL(__imp__sub_82BEDAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// lwz r11,2592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2592);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bedb40
	if (ctx.cr6.eq) goto loc_82BEDB40;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// ori r4,r4,1025
	ctx.r4.u64 = ctx.r4.u64 | 1025;
	// bl 0x833b7a84
	ctx.lr = 0x82BEDB24;
	__imp__RtlImageXexHeaderField(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bedb40
	if (ctx.cr0.eq) goto loc_82BEDB40;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bedb40
	if (!ctx.cr6.eq) goto loc_82BEDB40;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bedba4
	goto loc_82BEDBA4;
loc_82BEDB40:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82BEDB50:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82bedb50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BEDB50;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,6100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bedb94
	if (!ctx.cr6.eq) goto loc_82BEDB94;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82befa48
	ctx.lr = 0x82BEDB90;
	sub_82BEFA48(ctx, base);
	// stw r3,6100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6100, ctx.r3.u32);
loc_82BEDB94:
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_82BEDBA4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEDBBC"))) PPC_WEAK_FUNC(sub_82BEDBBC);
PPC_FUNC_IMPL(__imp__sub_82BEDBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEDBC0"))) PPC_WEAK_FUNC(sub_82BEDBC0);
PPC_FUNC_IMPL(__imp__sub_82BEDBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2600);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bedbe0
	if (ctx.cr6.eq) goto loc_82BEDBE0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82BEDBE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEDBE8"))) PPC_WEAK_FUNC(sub_82BEDBE8);
PPC_FUNC_IMPL(__imp__sub_82BEDBE8) {
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
	// bl 0x82bedae8
	ctx.lr = 0x82BEDBF8;
	sub_82BEDAE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82bedc30
	if (!ctx.cr0.eq) goto loc_82BEDC30;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2600);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bedc28
	if (ctx.cr6.eq) goto loc_82BEDC28;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BEDC28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BEDC28:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x833b7a94
	ctx.lr = 0x82BEDC30;
	__imp__HalReturnToFirmware(ctx, base);
loc_82BEDC30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEDC40"))) PPC_WEAK_FUNC(sub_82BEDC40);
PPC_FUNC_IMPL(__imp__sub_82BEDC40) {
	PPC_FUNC_PROLOGUE();
	// oris r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 536870912;
	// b 0x833b7804
	__imp__NtAllocateVirtualMemory(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEDC48"))) PPC_WEAK_FUNC(sub_82BEDC48);
PPC_FUNC_IMPL(__imp__sub_82BEDC48) {
	PPC_FUNC_PROLOGUE();
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEDC54"))) PPC_WEAK_FUNC(sub_82BEDC54);
PPC_FUNC_IMPL(__imp__sub_82BEDC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEDC58"))) PPC_WEAK_FUNC(sub_82BEDC58);
PPC_FUNC_IMPL(__imp__sub_82BEDC58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEDC78"))) PPC_WEAK_FUNC(sub_82BEDC78);
PPC_FUNC_IMPL(__imp__sub_82BEDC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,31060(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 31060);
	// lwz r17,-15544(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -15544);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82BEDC88;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// stw r26,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r26.u32);
	// beq 0x82bedcdc
	if (ctx.cr0.eq) goto loc_82BEDCDC;
	// bl 0x833b7ac4
	ctx.lr = 0x82BEDCB8;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82bedcdc
	if (ctx.cr6.eq) goto loc_82BEDCDC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5261
	ctx.r6.s64 = 5261;
	// lwz r5,152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x833b7ab4
	ctx.lr = 0x82BEDCDC;
	__imp__KeBugCheckEx(ctx, base);
loc_82BEDCDC:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bedd04
	if (!ctx.cr0.eq) goto loc_82BEDD04;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x833b77e4
	ctx.lr = 0x82BEDCFC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82BEDD04:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82BEDD10:
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// cmplwi cr6,r27,64
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 64, ctx.xer);
	// bge cr6,0x82beddd4
	if (!ctx.cr6.lt) goto loc_82BEDDD4;
	// addi r11,r27,24
	ctx.r11.s64 = ctx.r27.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r26
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82beddc8
	if (ctx.cr6.eq) goto loc_82BEDDC8;
	// lwz r29,56(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// lwz r30,40(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_82BEDD40:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82beddc8
	if (!ctx.cr6.lt) goto loc_82BEDDC8;
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// bne 0x82bedd70
	if (!ctx.cr0.eq) goto loc_82BEDD70;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x833b7aa4
	ctx.lr = 0x82BEDD70;
	__imp__RtlFillMemoryUlong(ctx, base);
loc_82BEDD70:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// beq 0x82beddb8
	if (ctx.cr0.eq) goto loc_82BEDDB8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bne cr6,0x82bedd9c
	if (!ctx.cr6.eq) goto loc_82BEDD9C;
	// lwz r30,44(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// b 0x82beddbc
	goto loc_82BEDDBC;
loc_82BEDD9C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// b 0x82beddc0
	goto loc_82BEDDC0;
loc_82BEDDB8:
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82BEDDBC:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_82BEDDC0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bedd40
	goto loc_82BEDD40;
loc_82BEDDC8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x82bedd10
	goto loc_82BEDD10;
loc_82BEDDD4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bedde8
	// ERROR 82BEDDE8
	return;
}

__attribute__((alias("__imp__sub_82BEDC80"))) PPC_WEAK_FUNC(sub_82BEDC80);
PPC_FUNC_IMPL(__imp__sub_82BEDC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82BEDC88;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// stw r26,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r26.u32);
	// beq 0x82bedcdc
	if (ctx.cr0.eq) goto loc_82BEDCDC;
	// bl 0x833b7ac4
	ctx.lr = 0x82BEDCB8;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82bedcdc
	if (ctx.cr6.eq) goto loc_82BEDCDC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5261
	ctx.r6.s64 = 5261;
	// lwz r5,152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x833b7ab4
	ctx.lr = 0x82BEDCDC;
	__imp__KeBugCheckEx(ctx, base);
loc_82BEDCDC:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bedd04
	if (!ctx.cr0.eq) goto loc_82BEDD04;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x833b77e4
	ctx.lr = 0x82BEDCFC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82BEDD04:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82BEDD10:
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// cmplwi cr6,r27,64
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 64, ctx.xer);
	// bge cr6,0x82beddd4
	if (!ctx.cr6.lt) goto loc_82BEDDD4;
	// addi r11,r27,24
	ctx.r11.s64 = ctx.r27.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r26
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82beddc8
	if (ctx.cr6.eq) goto loc_82BEDDC8;
	// lwz r29,56(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// lwz r30,40(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_82BEDD40:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82beddc8
	if (!ctx.cr6.lt) goto loc_82BEDDC8;
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// bne 0x82bedd70
	if (!ctx.cr0.eq) goto loc_82BEDD70;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x833b7aa4
	ctx.lr = 0x82BEDD70;
	__imp__RtlFillMemoryUlong(ctx, base);
loc_82BEDD70:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// beq 0x82beddb8
	if (ctx.cr0.eq) goto loc_82BEDDB8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bne cr6,0x82bedd9c
	if (!ctx.cr6.eq) goto loc_82BEDD9C;
	// lwz r30,44(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// b 0x82beddbc
	goto loc_82BEDDBC;
loc_82BEDD9C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// b 0x82beddc0
	goto loc_82BEDDC0;
loc_82BEDDB8:
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82BEDDBC:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_82BEDDC0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bedd40
	goto loc_82BEDD40;
loc_82BEDDC8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x82bedd10
	goto loc_82BEDD10;
loc_82BEDDD4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bedde8
	goto loc_82BEDDE8;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
loc_82BEDDE8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82bede00
	ctx.lr = 0x82BEDDF4;
	sub_82BEDE00(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEDDE4"))) PPC_WEAK_FUNC(sub_82BEDDE4);
PPC_FUNC_IMPL(__imp__sub_82BEDDE4) {
	PPC_FUNC_PROLOGUE();
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82bede00
	ctx.lr = 0x82BEDDF4;
	sub_82BEDE00(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEDE00"))) PPC_WEAK_FUNC(sub_82BEDE00);
PPC_FUNC_IMPL(__imp__sub_82BEDE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bede2c
	if (ctx.cr6.eq) goto loc_82BEDE2C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,1408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// bl 0x833b77f4
	ctx.lr = 0x82BEDE2C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82BEDE2C:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEDE40"))) PPC_WEAK_FUNC(sub_82BEDE40);
PPC_FUNC_IMPL(__imp__sub_82BEDE40) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEDE4C"))) PPC_WEAK_FUNC(sub_82BEDE4C);
PPC_FUNC_IMPL(__imp__sub_82BEDE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEDE50"))) PPC_WEAK_FUNC(sub_82BEDE50);
PPC_FUNC_IMPL(__imp__sub_82BEDE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r10,76
	ctx.r11.s64 = ctx.r10.s64 + 76;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bedfec
	if (!ctx.cr6.eq) goto loc_82BEDFEC;
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82bedef8
	if (ctx.cr6.eq) goto loc_82BEDEF8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bedef8
	if (ctx.cr6.eq) goto loc_82BEDEF8;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x833b7804
	ctx.lr = 0x82BEDED0;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bedf28
	if (ctx.cr0.lt) goto loc_82BEDF28;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82bedfb8
	goto loc_82BEDFB8;
loc_82BEDEF8:
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833b7804
	ctx.lr = 0x82BEDF20;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82bedf30
	if (!ctx.cr0.lt) goto loc_82BEDF30;
loc_82BEDF28:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bedff8
	goto loc_82BEDFF8;
loc_82BEDF30:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833b7804
	ctx.lr = 0x82BEDF54;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82bedf78
	if (!ctx.cr0.lt) goto loc_82BEDF78;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833b78b4
	ctx.lr = 0x82BEDF74;
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x82bedf28
	goto loc_82BEDF28;
loc_82BEDF78:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82BEDFB8:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r8,76
	ctx.r10.s64 = ctx.r8.s64 + 76;
	// b 0x82bedfd8
	goto loc_82BEDFD8;
loc_82BEDFCC:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82BEDFD8:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bedfcc
	if (ctx.cr6.lt) goto loc_82BEDFCC;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
loc_82BEDFEC:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82BEDFF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEE010"))) PPC_WEAK_FUNC(sub_82BEE010);
PPC_FUNC_IMPL(__imp__sub_82BEE010) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r4,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEE034"))) PPC_WEAK_FUNC(sub_82BEE034);
PPC_FUNC_IMPL(__imp__sub_82BEE034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEE038"))) PPC_WEAK_FUNC(sub_82BEE038);
PPC_FUNC_IMPL(__imp__sub_82BEE038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82BEE040;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r28,r31,56
	ctx.r28.s64 = ctx.r31.s64 + 56;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bee0dc
	if (ctx.cr6.eq) goto loc_82BEE0DC;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82BEE064:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82bee124
	if (ctx.cr6.gt) goto loc_82BEE124;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82bee0cc
	if (!ctx.cr6.eq) goto loc_82BEE0CC;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// ble cr6,0x82bee0d0
	if (!ctx.cr6.gt) goto loc_82BEE0D0;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// b 0x82bee0d0
	goto loc_82BEE0D0;
loc_82BEE0CC:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82BEE0D0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bee064
	if (!ctx.cr6.eq) goto loc_82BEE064;
loc_82BEE0DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bede50
	ctx.lr = 0x82BEE0E4;
	sub_82BEDE50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bee11c
	if (ctx.cr0.eq) goto loc_82BEE11C;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// blt cr6,0x82bee11c
	if (ctx.cr6.lt) goto loc_82BEE11C;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_82BEE11C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82BEE124:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r29,r30
	ctx.r9.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bee0dc
	if (!ctx.cr6.eq) goto loc_82BEE0DC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82bee11c
	if (!ctx.cr6.gt) goto loc_82BEE11C;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// b 0x82bee11c
	goto loc_82BEE11C;
}

__attribute__((alias("__imp__sub_82BEE158"))) PPC_WEAK_FUNC(sub_82BEE158);
PPC_FUNC_IMPL(__imp__sub_82BEE158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82BEE160;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r25,r30,56
	ctx.r25.s64 = ctx.r30.s64 + 56;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// lwz r31,56(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bee1c0
	if (ctx.cr6.eq) goto loc_82BEE1C0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82BEE18C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bee1ac
	if (ctx.cr6.lt) goto loc_82BEE1AC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82bee1cc
	if (ctx.cr6.eq) goto loc_82BEE1CC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82bee1cc
	if (ctx.cr6.eq) goto loc_82BEE1CC;
loc_82BEE1AC:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82bee18c
	if (!ctx.cr6.eq) goto loc_82BEE18C;
loc_82BEE1C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEE1C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82BEE1CC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82bee1f4
	if (ctx.cr6.eq) goto loc_82BEE1F4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BEE1F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bee210
	goto loc_82BEE210;
loc_82BEE1F4:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833b7804
	ctx.lr = 0x82BEE210;
	__imp__NtAllocateVirtualMemory(ctx, base);
loc_82BEE210:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82bee1c0
	if (ctx.cr6.lt) goto loc_82BEE1C0;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bee23c
	if (!ctx.cr6.eq) goto loc_82BEE23C;
	// stw r26,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r26.u32);
loc_82BEE23C:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bee26c
	if (ctx.cr0.eq) goto loc_82BEE26C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bee2d8
	if (ctx.cr6.eq) goto loc_82BEE2D8;
loc_82BEE26C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82bee27c
	if (!ctx.cr6.eq) goto loc_82BEE27C;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// b 0x82bee288
	goto loc_82BEE288;
loc_82BEE27C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82BEE288:
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82bee2d8
	if (!ctx.cr0.eq) goto loc_82BEE2D8;
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_82BEE298:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bee2cc
	if (!ctx.cr6.lt) goto loc_82BEE2CC;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82bee2cc
	if (ctx.cr0.eq) goto loc_82BEE2CC;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bee298
	if (ctx.cr0.eq) goto loc_82BEE298;
	// b 0x82bee2d8
	goto loc_82BEE2D8;
loc_82BEE2CC:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82bee1c0
	if (!ctx.cr6.eq) goto loc_82BEE1C0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82BEE2D8:
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// andi. r10,r10,239
	ctx.r10.u64 = ctx.r10.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf. r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bne 0x82bee368
	if (!ctx.cr0.eq) goto loc_82BEE368;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bee328
	if (!ctx.cr6.eq) goto loc_82BEE328;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// b 0x82bee334
	goto loc_82BEE334;
loc_82BEE328:
	// stb r26,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r26.u8);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r10,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r10.u32);
loc_82BEE334:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r31,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r31.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r10.u32);
	// b 0x82bee374
	goto loc_82BEE374;
loc_82BEE368:
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
loc_82BEE374:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,5(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r10,28,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFF;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// bne 0x82bee3ac
	if (!ctx.cr0.eq) goto loc_82BEE3AC;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
loc_82BEE3AC:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bee1c4
	if (!ctx.cr6.eq) goto loc_82BEE1C4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x82bee3d8
	goto loc_82BEE3D8;
loc_82BEE3C0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bee3d4
	if (ctx.cr6.lt) goto loc_82BEE3D4;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
loc_82BEE3D4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82BEE3D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bee3c0
	if (!ctx.cr6.eq) goto loc_82BEE3C0;
	// b 0x82bee1c4
	goto loc_82BEE1C4;
}

__attribute__((alias("__imp__sub_82BEE3E4"))) PPC_WEAK_FUNC(sub_82BEE3E4);
PPC_FUNC_IMPL(__imp__sub_82BEE3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEE3E8"))) PPC_WEAK_FUNC(sub_82BEE3E8);
PPC_FUNC_IMPL(__imp__sub_82BEE3E8) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bee42c
	if (!ctx.cr0.eq) goto loc_82BEE42C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x833b78b4
	ctx.lr = 0x82BEE428;
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x82bee430
	goto loc_82BEE430;
loc_82BEE42C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEE430:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEE440"))) PPC_WEAK_FUNC(sub_82BEE440);
PPC_FUNC_IMPL(__imp__sub_82BEE440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82BEE448;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-274
	ctx.r10.s64 = -17956864;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// li r26,1
	ctx.r26.s64 = 1;
	// ori r25,r10,65262
	ctx.r25.u64 = ctx.r10.u64 | 65262;
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// subf r31,r11,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bee664
	if (ctx.cr6.eq) goto loc_82BEE664;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bee664
	if (!ctx.cr0.eq) goto loc_82BEE664;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,61440
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61440, ctx.xer);
	// bgt cr6,0x82bee664
	if (ctx.cr6.gt) goto loc_82BEE664;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bee558
	if (ctx.cr6.eq) goto loc_82BEE558;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rldimi r6,r8,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r6,r9
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82bee50c
	if (!ctx.cr6.eq) goto loc_82BEE50C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82bee50c
	if (!ctx.cr6.eq) goto loc_82BEE50C;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82bee50c
	if (!ctx.cr6.lt) goto loc_82BEE50C;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r26,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
loc_82BEE50C:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bee544
	if (ctx.cr0.eq) goto loc_82BEE544;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x82bee538
	if (ctx.cr0.eq) goto loc_82BEE538;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x82bee538
	if (!ctx.cr6.gt) goto loc_82BEE538;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_82BEE538:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x833b7ad4
	ctx.lr = 0x82BEE544;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82BEE544:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
loc_82BEE558:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// rldimi r6,r8,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// cmpld cr6,r6,r9
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82bee5c0
	if (!ctx.cr6.eq) goto loc_82BEE5C0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82bee5c0
	if (!ctx.cr6.eq) goto loc_82BEE5C0;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82bee5c0
	if (!ctx.cr6.lt) goto loc_82BEE5C0;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r26,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
loc_82BEE5C0:
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bee5f8
	if (ctx.cr0.eq) goto loc_82BEE5F8;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x82bee5ec
	if (ctx.cr0.eq) goto loc_82BEE5EC;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x82bee5ec
	if (!ctx.cr6.gt) goto loc_82BEE5EC;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_82BEE5EC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x833b7ad4
	ctx.lr = 0x82BEE5F8;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82BEE5F8:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// beq 0x82bee61c
	if (ctx.cr0.eq) goto loc_82BEE61C;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r31,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
loc_82BEE61C:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// bne 0x82bee664
	if (!ctx.cr0.eq) goto loc_82BEE664;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
loc_82BEE664:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bee858
	if (!ctx.cr0.eq) goto loc_82BEE858;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82bee858
	if (!ctx.cr0.eq) goto loc_82BEE858;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,61440
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61440, ctx.xer);
	// bgt cr6,0x82bee858
	if (ctx.cr6.gt) goto loc_82BEE858;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bee750
	if (ctx.cr6.eq) goto loc_82BEE750;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rldimi r6,r8,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r6,r9
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82bee708
	if (!ctx.cr6.eq) goto loc_82BEE708;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82bee708
	if (!ctx.cr6.eq) goto loc_82BEE708;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82bee708
	if (!ctx.cr6.lt) goto loc_82BEE708;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r26,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
loc_82BEE708:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bee740
	if (ctx.cr0.eq) goto loc_82BEE740;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x82bee734
	if (ctx.cr0.eq) goto loc_82BEE734;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x82bee734
	if (!ctx.cr6.gt) goto loc_82BEE734;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_82BEE734:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x833b7ad4
	ctx.lr = 0x82BEE740;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82BEE740:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
loc_82BEE750:
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// beq 0x82bee774
	if (ctx.cr0.eq) goto loc_82BEE774;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r30,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r30.u32);
loc_82BEE774:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// rldimi r6,r8,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// cmpld cr6,r6,r9
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82bee7dc
	if (!ctx.cr6.eq) goto loc_82BEE7DC;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82bee7dc
	if (!ctx.cr6.eq) goto loc_82BEE7DC;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82bee7dc
	if (!ctx.cr6.lt) goto loc_82BEE7DC;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r26,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
loc_82BEE7DC:
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bee814
	if (ctx.cr0.eq) goto loc_82BEE814;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x82bee808
	if (ctx.cr0.eq) goto loc_82BEE808;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x82bee808
	if (!ctx.cr6.gt) goto loc_82BEE808;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_82BEE808:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x833b7ad4
	ctx.lr = 0x82BEE814;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82BEE814:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// bne 0x82bee858
	if (!ctx.cr0.eq) goto loc_82BEE858;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
loc_82BEE858:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEE864"))) PPC_WEAK_FUNC(sub_82BEE864);
PPC_FUNC_IMPL(__imp__sub_82BEE864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEE868"))) PPC_WEAK_FUNC(sub_82BEE868);
PPC_FUNC_IMPL(__imp__sub_82BEE868) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82BEE870;
	__savegprlr_28(ctx, base);
	// lbz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lhz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r29,5(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// b 0x82bee984
	goto loc_82BEE984;
loc_82BEE89C:
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// ble cr6,0x82bee8c0
	if (!ctx.cr6.gt) goto loc_82BEE8C0;
	// li r6,-4096
	ctx.r6.s64 = -4096;
	// cmplwi cr6,r5,61441
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61441, ctx.xer);
	// bne cr6,0x82bee8b4
	if (!ctx.cr6.eq) goto loc_82BEE8B4;
	// li r6,-4112
	ctx.r6.s64 = -4112;
loc_82BEE8B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// b 0x82bee8c8
	goto loc_82BEE8C8;
loc_82BEE8C0:
	// clrlwi r6,r5,16
	ctx.r6.u64 = ctx.r5.u32 & 0xFFFF;
	// stb r29,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r29.u8);
loc_82BEE8C8:
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r31,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r31.u8);
	// sth r6,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r6.u16);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// bge cr6,0x82bee92c
	if (!ctx.cr6.lt) goto loc_82BEE92C;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bee950
	if (!ctx.cr6.eq) goto loc_82BEE950;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u32);
	// b 0x82bee950
	goto loc_82BEE950;
loc_82BEE92C:
	// lwz r11,384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// addi r9,r3,384
	ctx.r9.s64 = ctx.r3.s64 + 384;
	// b 0x82bee948
	goto loc_82BEE948;
loc_82BEE938:
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bee950
	if (!ctx.cr6.gt) goto loc_82BEE950;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82BEE948:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bee938
	if (!ctx.cr6.eq) goto loc_82BEE938;
loc_82BEE950:
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
	// stw r28,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r28.u32);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82bee998
	if (!ctx.cr6.lt) goto loc_82BEE998;
loc_82BEE984:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82bee89c
	if (!ctx.cr6.eq) goto loc_82BEE89C;
	// rlwinm. r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bee998
	if (!ctx.cr0.eq) goto loc_82BEE998;
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
loc_82BEE998:
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEE99C"))) PPC_WEAK_FUNC(sub_82BEE99C);
PPC_FUNC_IMPL(__imp__sub_82BEE99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEE9A0"))) PPC_WEAK_FUNC(sub_82BEE9A0);
PPC_FUNC_IMPL(__imp__sub_82BEE9A0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bee9b4
	if (ctx.cr0.eq) goto loc_82BEE9B4;
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// blr 
	return;
loc_82BEE9B4:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEE9C8"))) PPC_WEAK_FUNC(sub_82BEE9C8);
PPC_FUNC_IMPL(__imp__sub_82BEE9C8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r10,-8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEE9DC"))) PPC_WEAK_FUNC(sub_82BEE9DC);
PPC_FUNC_IMPL(__imp__sub_82BEE9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEE9E0"))) PPC_WEAK_FUNC(sub_82BEE9E0);
PPC_FUNC_IMPL(__imp__sub_82BEE9E0) {
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
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82beea0c
	if (ctx.cr0.eq) goto loc_82BEEA0C;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r10,-8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// b 0x82beea1c
	goto loc_82BEEA1C;
loc_82BEEA0C:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lbz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82BEEA1C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r10,6080
	ctx.r4.s64 = ctx.r10.s64 + 6080;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x833b7ae4
	ctx.lr = 0x82BEEA34;
	__imp__RtlCompareMemory(ctx, base);
	// addi r11,r3,-16
	ctx.r11.s64 = ctx.r3.s64 + -16;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEEA50"))) PPC_WEAK_FUNC(sub_82BEEA50);
PPC_FUNC_IMPL(__imp__sub_82BEEA50) {
	PPC_FUNC_PROLOGUE();
	// stw r4,-8(r3)
	PPC_STORE_U32(ctx.r3.u32 + -8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEEA58"))) PPC_WEAK_FUNC(sub_82BEEA58);
PPC_FUNC_IMPL(__imp__sub_82BEEA58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEEA60"))) PPC_WEAK_FUNC(sub_82BEEA60);
PPC_FUNC_IMPL(__imp__sub_82BEEA60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEEA6C"))) PPC_WEAK_FUNC(sub_82BEEA6C);
PPC_FUNC_IMPL(__imp__sub_82BEEA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEEA70"))) PPC_WEAK_FUNC(sub_82BEEA70);
PPC_FUNC_IMPL(__imp__sub_82BEEA70) {
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
	// lis r11,-4353
	ctx.r11.s64 = -285278208;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r11,r11,61183
	ctx.r11.u64 = ctx.r11.u64 | 61183;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82beea98
	if (!ctx.cr6.eq) goto loc_82BEEA98;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82beeabc
	goto loc_82BEEABC;
loc_82BEEA98:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82beeaac
	if (ctx.cr6.eq) goto loc_82BEEAAC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,5968
	ctx.r3.s64 = ctx.r11.s64 + 5968;
	// bl 0x833b7944
	ctx.lr = 0x82BEEAAC;
	__imp__DbgPrint(ctx, base);
loc_82BEEAAC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,23280
	ctx.r3.s64 = ctx.r11.s64 + 23280;
	// bl 0x833b7944
	ctx.lr = 0x82BEEAB8;
	__imp__DbgPrint(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEEABC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEEACC"))) PPC_WEAK_FUNC(sub_82BEEACC);
PPC_FUNC_IMPL(__imp__sub_82BEEACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEEAD0"))) PPC_WEAK_FUNC(sub_82BEEAD0);
PPC_FUNC_IMPL(__imp__sub_82BEEAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82BEEAD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82beebd0
	if (ctx.cr6.eq) goto loc_82BEEBD0;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82beeb1c
	if (ctx.cr0.eq) goto loc_82BEEB1C;
	// bl 0x833b7ac4
	ctx.lr = 0x82BEEAF8;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82beeb1c
	if (ctx.cr6.eq) goto loc_82BEEB1C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r6,1264
	ctx.r6.s64 = 1264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x833b7ab4
	ctx.lr = 0x82BEEB1C;
	__imp__KeBugCheckEx(ctx, base);
loc_82BEEB1C:
	// lwz r31,88(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r30,r29,88
	ctx.r30.s64 = ctx.r29.s64 + 88;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82beeb50
	goto loc_82BEEB50;
loc_82BEEB2C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833b78b4
	ctx.lr = 0x82BEEB50;
	__imp__NtFreeVirtualMemory(ctx, base);
loc_82BEEB50:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82beeb2c
	if (!ctx.cr6.eq) goto loc_82BEEB2C;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82beeb68
	if (!ctx.cr0.eq) goto loc_82BEEB68;
	// stw r28,1408(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1408, ctx.r28.u32);
loc_82BEEB68:
	// lwz r31,72(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// stw r28,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r28.u32);
	// b 0x82beeb98
	goto loc_82BEEB98;
loc_82BEEB74:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833b78b4
	ctx.lr = 0x82BEEB98;
	__imp__NtFreeVirtualMemory(ctx, base);
loc_82BEEB98:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82beeb74
	if (!ctx.cr6.eq) goto loc_82BEEB74;
	// li r31,64
	ctx.r31.s64 = 64;
loc_82BEEBA4:
	// addi r11,r31,255
	ctx.r11.s64 = ctx.r31.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82beebc8
	if (ctx.cr6.eq) goto loc_82BEEBC8;
	// bl 0x82bee3e8
	ctx.lr = 0x82BEEBC8;
	sub_82BEE3E8(ctx, base);
loc_82BEEBC8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82beeba4
	if (!ctx.cr6.eq) goto loc_82BEEBA4;
loc_82BEEBD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEEBDC"))) PPC_WEAK_FUNC(sub_82BEEBDC);
PPC_FUNC_IMPL(__imp__sub_82BEEBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEEBE0"))) PPC_WEAK_FUNC(sub_82BEEBE0);
PPC_FUNC_IMPL(__imp__sub_82BEEBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82BEEBE8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82beec14
	if (!ctx.cr6.gt) goto loc_82BEEC14;
loc_82BEEC0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bef168
	goto loc_82BEF168;
loc_82BEEC14:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// li r25,1
	ctx.r25.s64 = 1;
	// lbz r9,5(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 5);
	// rotlwi r10,r11,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// rlwinm. r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// add r31,r10,r27
	ctx.r31.u64 = ctx.r10.u64 + ctx.r27.u64;
	// beq 0x82beeccc
	if (ctx.cr0.eq) goto loc_82BEECCC;
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// lbz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82bee158
	ctx.lr = 0x82BEEC6C;
	sub_82BEE158(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82beec0c
	if (ctx.cr0.eq) goto loc_82BEEC0C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82bee440
	ctx.lr = 0x82BEEC90;
	sub_82BEE440(ctx, base);
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// lbz r28,5(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// bge cr6,0x82beeda4
	if (!ctx.cr6.lt) goto loc_82BEEDA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bee868
	ctx.lr = 0x82BEECB4;
	sub_82BEE868(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// b 0x82bef168
	goto loc_82BEF168;
loc_82BEECCC:
	// lbz r28,5(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// clrlwi. r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82beec0c
	if (!ctx.cr0.eq) goto loc_82BEEC0C;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82beec0c
	if (ctx.cr6.lt) goto loc_82BEEC0C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82beed54
	if (!ctx.cr6.eq) goto loc_82BEED54;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82beed54
	if (!ctx.cr6.eq) goto loc_82BEED54;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82beed54
	if (!ctx.cr6.lt) goto loc_82BEED54;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r25,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
loc_82BEED54:
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82beed90
	if (ctx.cr0.eq) goto loc_82BEED90;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x82beed80
	if (ctx.cr0.eq) goto loc_82BEED80;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x82beed80
	if (!ctx.cr6.gt) goto loc_82BEED80;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_82BEED80:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// bl 0x833b7ad4
	ctx.lr = 0x82BEED90;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82BEED90:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
loc_82BEEDA4:
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lbz r9,6(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 6);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// subf r24,r9,r10
	ctx.r24.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bgt cr6,0x82beedd0
	if (ctx.cr6.gt) goto loc_82BEEDD0;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82BEEDD0:
	// rlwinm. r10,r26,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82beee08
	if (ctx.cr0.eq) goto loc_82BEEE08;
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r11,r10,r27
	ctx.r11.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r10,r9,-16
	ctx.r10.s64 = ctx.r9.s64 + -16;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// ld r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16);
	// std r10,-16(r9)
	PPC_STORE_U64(ctx.r9.u32 + -16, ctx.r10.u64);
	// ld r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// std r11,-8(r9)
	PPC_STORE_U64(ctx.r9.u32 + -8, ctx.r11.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BEEE08:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82beee60
	if (!ctx.cr6.eq) goto loc_82BEEE60;
	// lbz r11,5(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 5);
	// rlwinm. r10,r28,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// subf r9,r23,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r23.s64;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// stb r8,5(r27)
	PPC_STORE_U8(ctx.r27.u32 + 5, ctx.r8.u8);
	// stb r9,6(r27)
	PPC_STORE_U8(ctx.r27.u32 + 6, ctx.r9.u8);
	// sth r11,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r11.u16);
	// bne 0x82beee48
	if (!ctx.cr0.eq) goto loc_82BEEE48;
	// rlwinm r10,r11,4,12,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// b 0x82bef134
	goto loc_82BEF134;
loc_82BEEE48:
	// lbz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r27,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r27.u32);
	// b 0x82bef134
	goto loc_82BEF134;
loc_82BEEE60:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r10,r23,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r23.s64;
	// sth r9,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r9.u16);
	// rlwinm. r8,r28,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r10,6(r27)
	PPC_STORE_U8(ctx.r27.u32 + 6, ctx.r10.u8);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// lbz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 4);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// beq 0x82beeef0
	if (ctx.cr0.eq) goto loc_82BEEEF0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,24,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF8;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r31,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
	// stb r28,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r28.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// blt cr6,0x82beef44
	if (ctx.cr6.lt) goto loc_82BEEF44;
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// addi r9,r30,384
	ctx.r9.s64 = ctx.r30.s64 + 384;
	// b 0x82beeee4
	goto loc_82BEEEE4;
loc_82BEEED4:
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bef0fc
	if (!ctx.cr6.gt) goto loc_82BEF0FC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82BEEEE4:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82beeed4
	if (!ctx.cr6.eq) goto loc_82BEEED4;
	// b 0x82bef0fc
	goto loc_82BEF0FC;
loc_82BEEEF0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r28,5(r29)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82beef74
	if (ctx.cr0.eq) goto loc_82BEEF74;
	// andi. r11,r10,239
	ctx.r11.u64 = ctx.r10.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bge cr6,0x82beef4c
	if (!ctx.cr6.lt) goto loc_82BEEF4C;
loc_82BEEF44:
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// b 0x82bef09c
	goto loc_82BEF09C;
loc_82BEEF4C:
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// addi r9,r30,384
	ctx.r9.s64 = ctx.r30.s64 + 384;
	// b 0x82beef68
	goto loc_82BEEF68;
loc_82BEEF58:
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bef0fc
	if (!ctx.cr6.gt) goto loc_82BEF0FC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82BEEF68:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82beef58
	if (!ctx.cr6.eq) goto loc_82BEEF58;
	// b 0x82bef0fc
	goto loc_82BEF0FC;
loc_82BEEF74:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82beefdc
	if (!ctx.cr6.eq) goto loc_82BEEFDC;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82beefdc
	if (!ctx.cr6.eq) goto loc_82BEEFDC;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82beefdc
	if (!ctx.cr6.lt) goto loc_82BEEFDC;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r25,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
loc_82BEEFDC:
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bef018
	if (ctx.cr0.eq) goto loc_82BEF018;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x82bef008
	if (ctx.cr0.eq) goto loc_82BEF008;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x82bef008
	if (!ctx.cr6.gt) goto loc_82BEF008;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_82BEF008:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// bl 0x833b7ad4
	ctx.lr = 0x82BEF018;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82BEF018:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r28,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r28.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x82bef128
	if (ctx.cr6.gt) goto loc_82BEF128;
	// rlwinm. r10,r28,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r5,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r5.u16);
	// bne 0x82bef068
	if (!ctx.cr0.eq) goto loc_82BEF068;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// b 0x82bef07c
	goto loc_82BEF07C;
loc_82BEF068:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r31,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
loc_82BEF07C:
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// bge cr6,0x82bef0d8
	if (!ctx.cr6.lt) goto loc_82BEF0D8;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
loc_82BEF09C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bef0fc
	if (!ctx.cr6.eq) goto loc_82BEF0FC;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
	// b 0x82bef0fc
	goto loc_82BEF0FC;
loc_82BEF0D8:
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// b 0x82bef0f4
	goto loc_82BEF0F4;
loc_82BEF0E4:
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bef0fc
	if (!ctx.cr6.gt) goto loc_82BEF0FC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82BEF0F4:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bef0e4
	if (!ctx.cr6.eq) goto loc_82BEF0E4;
loc_82BEF0FC:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// b 0x82bef134
	goto loc_82BEF134;
loc_82BEF128:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bee868
	ctx.lr = 0x82BEF134;
	sub_82BEE868(ctx, base);
loc_82BEF134:
	// rlwinm. r11,r22,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bef158
	if (ctx.cr0.eq) goto loc_82BEF158;
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x82bef158
	if (!ctx.cr6.gt) goto loc_82BEF158;
	// add r11,r24,r27
	ctx.r11.u64 = ctx.r24.u64 + ctx.r27.u64;
	// subf r5,r24,r23
	ctx.r5.s64 = ctx.r23.s64 - ctx.r24.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82cb16f0
	ctx.lr = 0x82BEF158;
	sub_82CB16F0(ctx, base);
loc_82BEF158:
	// lbz r11,5(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 5);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r11,r22,28,24,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r22.u32, 28) & 0xE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF1F);
	// stb r11,5(r27)
	PPC_STORE_U8(ctx.r27.u32 + 5, ctx.r11.u8);
loc_82BEF168:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEF170"))) PPC_WEAK_FUNC(sub_82BEF170);
PPC_FUNC_IMPL(__imp__sub_82BEF170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bef1c0
	if (ctx.cr0.eq) goto loc_82BEF1C0;
	// bl 0x833b7ac4
	ctx.lr = 0x82BEF19C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82bef1c0
	if (ctx.cr6.eq) goto loc_82BEF1C0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,5140
	ctx.r6.s64 = 5140;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x833b7ab4
	ctx.lr = 0x82BEF1C0;
	__imp__KeBugCheckEx(ctx, base);
loc_82BEF1C0:
	// lbz r11,-11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -11);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82bef1d4
	if (!ctx.cr0.eq) goto loc_82BEF1D4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82bef200
	goto loc_82BEF200;
loc_82BEF1D4:
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bef1f0
	if (ctx.cr0.eq) goto loc_82BEF1F0;
	// lhz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + -16);
	// lwz r10,-24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// b 0x82bef200
	goto loc_82BEF200;
loc_82BEF1F0:
	// lhz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + -16);
	// lbz r10,-10(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -10);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82BEF200:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEF218"))) PPC_WEAK_FUNC(sub_82BEF218);
PPC_FUNC_IMPL(__imp__sub_82BEF218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82BEF220;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r8,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// subf r10,r29,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r29.s64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r31,87
	ctx.r11.s64 = ctx.r31.s64 + 87;
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// rlwinm r30,r11,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// addze r26,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r26.s64 = temp.s64;
	// bne cr6,0x82bef264
	if (!ctx.cr6.eq) goto loc_82BEF264;
	// lhz r22,0(r28)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// b 0x82bef268
	goto loc_82BEF268;
loc_82BEF264:
	// li r22,0
	ctx.r22.s64 = 0;
loc_82BEF268:
	// subf r10,r31,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// clrlwi r24,r10,16
	ctx.r24.u64 = ctx.r10.u32 & 0xFFFF;
	// blt cr6,0x82bef2d0
	if (ctx.cr6.lt) goto loc_82BEF2D0;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82bef290
	if (ctx.cr6.lt) goto loc_82BEF290;
loc_82BEF288:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bef378
	goto loc_82BEF378;
loc_82BEF290:
	// subf r11,r8,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r8.s64;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x833b7804
	ctx.lr = 0x82BEF2B8;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bef288
	if (ctx.cr0.lt) goto loc_82BEF288;
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
loc_82BEF2D0:
	// subf r11,r8,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r8.s64;
	// sth r22,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r22.u16);
	// rlwinm r10,r26,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// sth r24,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r24.u16);
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// stb r25,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r25.u8);
	// lis r9,-18
	ctx.r9.s64 = -1179648;
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// addze. r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// ori r9,r9,65518
	ctx.r9.u64 = ctx.r9.u64 | 65518;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stb r7,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r7.u8);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r26,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// beq 0x82bef338
	if (ctx.cr0.eq) goto loc_82BEF338;
	// rlwinm r5,r11,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee038
	ctx.lr = 0x82BEF334;
	sub_82BEE038(ctx, base);
	// lwz r8,236(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
loc_82BEF338:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// subf r9,r30,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r30.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r31,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r31.u32);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// stb r10,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stb r25,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r25.u8);
	// sth r11,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// bl 0x82bee868
	ctx.lr = 0x82BEF374;
	sub_82BEE868(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BEF378:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEF380"))) PPC_WEAK_FUNC(sub_82BEF380);
PPC_FUNC_IMPL(__imp__sub_82BEF380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82BEF388;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 65536;
	// li r27,64
	ctx.r27.s64 = 64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r29,r11,16,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_82BEF3B4:
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x82bef438
	if (ctx.cr6.eq) goto loc_82BEF438;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82bef448
	if (ctx.cr6.gt) goto loc_82BEF448;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82bef448
	if (ctx.cr6.gt) goto loc_82BEF448;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee158
	ctx.lr = 0x82BEF3F8;
	sub_82BEE158(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82bef448
	if (ctx.cr0.eq) goto loc_82BEF448;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82bee440
	ctx.lr = 0x82BEF41C;
	sub_82BEE440(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bee868
	ctx.lr = 0x82BEF430;
	sub_82BEE868(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82bef5b4
	goto loc_82BEF5B4;
loc_82BEF438:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x82bef448
	if (!ctx.cr6.eq) goto loc_82BEF448;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82BEF448:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x82bef3b4
	if (ctx.cr6.lt) goto loc_82BEF3B4;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x82bef5b0
	if (ctx.cr6.eq) goto loc_82BEF5B0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bef5b0
	if (ctx.cr0.eq) goto loc_82BEF5B0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addis r30,r28,1
	ctx.r30.s64 = ctx.r28.s64 + 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x82bef494
	if (ctx.cr6.gt) goto loc_82BEF494;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82BEF494:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x833b7804
	ctx.lr = 0x82BEF4B0;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82bef504
	if (!ctx.cr0.lt) goto loc_82BEF504;
loc_82BEF4B8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bef4fc
	if (ctx.cr6.eq) goto loc_82BEF4FC;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82bef4d8
	if (!ctx.cr6.lt) goto loc_82BEF4D8;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_82BEF4D8:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x833b7804
	ctx.lr = 0x82BEF4F4;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bef4b8
	if (ctx.cr0.lt) goto loc_82BEF4B8;
loc_82BEF4FC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82bef5b0
	if (ctx.cr6.lt) goto loc_82BEF5B0;
loc_82BEF504:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bgt cr6,0x82bef528
	if (ctx.cr6.gt) goto loc_82BEF528;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82BEF528:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x833b7804
	ctx.lr = 0x82BEF544;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82bef598
	if (ctx.cr0.lt) goto loc_82BEF598;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82bef218
	ctx.lr = 0x82BEF574;
	sub_82BEF218(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82bef584
	if (!ctx.cr0.eq) goto loc_82BEF584;
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,23
	ctx.r30.u64 = ctx.r30.u64 | 23;
loc_82BEF584:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82bef598
	if (ctx.cr6.lt) goto loc_82BEF598;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82bef5b4
	goto loc_82BEF5B4;
loc_82BEF598:
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x833b78b4
	ctx.lr = 0x82BEF5B0;
	__imp__NtFreeVirtualMemory(ctx, base);
loc_82BEF5B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEF5B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEF5BC"))) PPC_WEAK_FUNC(sub_82BEF5BC);
PPC_FUNC_IMPL(__imp__sub_82BEF5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEF5C0"))) PPC_WEAK_FUNC(sub_82BEF5C0);
PPC_FUNC_IMPL(__imp__sub_82BEF5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82BEF5C8;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r11,1412(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bef908
	if (!ctx.cr6.eq) goto loc_82BEF908;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r31,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r31.s64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// clrlwi r26,r10,16
	ctx.r26.u64 = ctx.r10.u32 & 0xFFFF;
	// lwzx r25,r11,r28
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// bne cr6,0x82bef634
	if (!ctx.cr6.eq) goto loc_82BEF634;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// li r26,4097
	ctx.r26.s64 = 4097;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x82bef650
	goto loc_82BEF650;
loc_82BEF634:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bef650
	if (ctx.cr0.eq) goto loc_82BEF650;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82bef650
	if (!ctx.cr6.eq) goto loc_82BEF650;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r23,r11,r31
	ctx.r23.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_82BEF650:
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r10,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// clrlwi r27,r8,16
	ctx.r27.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x82bef684
	if (!ctx.cr6.eq) goto loc_82BEF684;
	// li r27,4097
	ctx.r27.s64 = 4097;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// b 0x82bef69c
	goto loc_82BEF69C;
loc_82BEF684:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82bef69c
	if (!ctx.cr6.eq) goto loc_82BEF69C;
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm. r8,r8,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82bef69c
	if (!ctx.cr0.eq) goto loc_82BEF69C;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
loc_82BEF69C:
	// rlwinm r22,r27,4,12,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFF0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// clrlwi r21,r27,16
	ctx.r21.u64 = ctx.r27.u32 & 0xFFFF;
	// subf r29,r22,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r22.s64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// bgt cr6,0x82bef6b8
	if (ctx.cr6.gt) goto loc_82BEF6B8;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82BEF6B8:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bef908
	if (ctx.cr6.eq) goto loc_82BEF908;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bede50
	ctx.lr = 0x82BEF6CC;
	sub_82BEDE50(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82bef908
	if (ctx.cr0.eq) goto loc_82BEF908;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x833b78b4
	ctx.lr = 0x82BEF6E8;
	__imp__NtFreeVirtualMemory(ctx, base);
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// stw r30,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r30.u32);
	// stw r19,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r19.u32);
	// stw r19,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r19.u32);
	// blt 0x82bef908
	if (ctx.cr0.lt) goto loc_82BEF908;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82bee038
	ctx.lr = 0x82BEF71C;
	sub_82BEE038(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,48(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// clrlwi. r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r10.u32);
	// beq 0x82bef7f0
	if (ctx.cr0.eq) goto loc_82BEF7F0;
	// li r10,16
	ctx.r10.s64 = 16;
	// sth r26,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r26.u16);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r10.u32);
	// stw r31,64(r25)
	PPC_STORE_U32(ctx.r25.u32 + 64, ctx.r31.u32);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// bge cr6,0x82bef7ac
	if (!ctx.cr6.lt) goto loc_82BEF7AC;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bef7d4
	if (!ctx.cr6.eq) goto loc_82BEF7D4;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u32);
	// b 0x82bef7d4
	goto loc_82BEF7D4;
loc_82BEF7AC:
	// lwz r10,384(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// addi r9,r28,384
	ctx.r9.s64 = ctx.r28.s64 + 384;
	// b 0x82bef7c8
	goto loc_82BEF7C8;
loc_82BEF7B8:
	// lhz r7,-8(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + -8);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82bef7d0
	if (!ctx.cr6.gt) goto loc_82BEF7D0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82BEF7C8:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bef7b8
	if (!ctx.cr6.eq) goto loc_82BEF7B8;
loc_82BEF7D0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82BEF7D4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82bef834
	goto loc_82BEF834;
loc_82BEF7F0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82bef80c
	if (ctx.cr6.eq) goto loc_82BEF80C;
	// lbz r11,5(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 5);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,5(r23)
	PPC_STORE_U8(ctx.r23.u32 + 5, ctx.r11.u8);
	// stw r23,64(r25)
	PPC_STORE_U32(ctx.r25.u32 + 64, ctx.r23.u32);
	// b 0x82bef834
	goto loc_82BEF834;
loc_82BEF80C:
	// lwz r11,64(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bef834
	if (ctx.cr6.lt) goto loc_82BEF834;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bef834
	if (!ctx.cr6.lt) goto loc_82BEF834;
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// stw r11,64(r25)
	PPC_STORE_U32(ctx.r25.u32 + 64, ctx.r11.u32);
loc_82BEF834:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82bef8f8
	if (ctx.cr6.eq) goto loc_82BEF8F8;
	// add r11,r22,r29
	ctx.r11.u64 = ctx.r22.u64 + ctx.r29.u64;
	// sth r19,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r19.u16);
	// lbz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r21,128
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 128, ctx.xer);
	// stb r19,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r19.u8);
	// stb r10,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r10.u8);
	// sth r27,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r27.u16);
	// sth r27,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r27.u16);
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x82bef8ac
	if (!ctx.cr6.lt) goto loc_82BEF8AC;
	// addi r11,r21,48
	ctx.r11.s64 = ctx.r21.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bef8d0
	if (!ctx.cr6.eq) goto loc_82BEF8D0;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u32);
	// b 0x82bef8d0
	goto loc_82BEF8D0;
loc_82BEF8AC:
	// lwz r11,384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// addi r10,r28,384
	ctx.r10.s64 = ctx.r28.s64 + 384;
	// b 0x82bef8c8
	goto loc_82BEF8C8;
loc_82BEF8B8:
	// lhz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r21,r9
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82bef8d0
	if (!ctx.cr6.gt) goto loc_82BEF8D0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82BEF8C8:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bef8b8
	if (!ctx.cr6.eq) goto loc_82BEF8B8;
loc_82BEF8D0:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
	// b 0x82bef918
	goto loc_82BEF918;
loc_82BEF8F8:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82bef918
	if (ctx.cr6.eq) goto loc_82BEF918;
	// sth r19,2(r20)
	PPC_STORE_U16(ctx.r20.u32 + 2, ctx.r19.u16);
	// b 0x82bef918
	goto loc_82BEF918;
loc_82BEF908:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bee868
	ctx.lr = 0x82BEF918;
	sub_82BEE868(ctx, base);
loc_82BEF918:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEF920"))) PPC_WEAK_FUNC(sub_82BEF920);
PPC_FUNC_IMPL(__imp__sub_82BEF920) {
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bef968
	if (ctx.cr0.eq) goto loc_82BEF968;
	// bl 0x833b7ac4
	ctx.lr = 0x82BEF944;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82bef968
	if (ctx.cr6.eq) goto loc_82BEF968;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,7790
	ctx.r6.s64 = 7790;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x833b7ab4
	ctx.lr = 0x82BEF968;
	__imp__KeBugCheckEx(ctx, base);
loc_82BEF968:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5984
	ctx.r4.s64 = ctx.r11.s64 + 5984;
	// bl 0x82beea70
	ctx.lr = 0x82BEF978;
	sub_82BEEA70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bef998
	if (ctx.cr0.eq) goto loc_82BEF998;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bef994
	if (!ctx.cr0.eq) goto loc_82BEF994;
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// bl 0x833b77e4
	ctx.lr = 0x82BEF994;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82BEF994:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BEF998:
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

__attribute__((alias("__imp__sub_82BEF9AC"))) PPC_WEAK_FUNC(sub_82BEF9AC);
PPC_FUNC_IMPL(__imp__sub_82BEF9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEF9B0"))) PPC_WEAK_FUNC(sub_82BEF9B0);
PPC_FUNC_IMPL(__imp__sub_82BEF9B0) {
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bef9f8
	if (ctx.cr0.eq) goto loc_82BEF9F8;
	// bl 0x833b7ac4
	ctx.lr = 0x82BEF9D4;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82bef9f8
	if (ctx.cr6.eq) goto loc_82BEF9F8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,7872
	ctx.r6.s64 = 7872;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x833b7ab4
	ctx.lr = 0x82BEF9F8;
	__imp__KeBugCheckEx(ctx, base);
loc_82BEF9F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5996
	ctx.r4.s64 = ctx.r11.s64 + 5996;
	// bl 0x82beea70
	ctx.lr = 0x82BEFA08;
	sub_82BEEA70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82befa28
	if (ctx.cr0.eq) goto loc_82BEFA28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82befa24
	if (!ctx.cr0.eq) goto loc_82BEFA24;
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// bl 0x833b77f4
	ctx.lr = 0x82BEFA24;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82BEFA24:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BEFA28:
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

__attribute__((alias("__imp__sub_82BEFA3C"))) PPC_WEAK_FUNC(sub_82BEFA3C);
PPC_FUNC_IMPL(__imp__sub_82BEFA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFA40"))) PPC_WEAK_FUNC(sub_82BEFA40);
PPC_FUNC_IMPL(__imp__sub_82BEFA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,31060(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 31060);
	// lwz r17,-15504(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -15504);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82BEFA50;
	__savegprlr_21(ctx, base);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r24,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r24.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r22,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r22.u32);
	// stw r29,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r29.u32);
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// stw r5,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r5.u32);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r6,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r6.u32);
	// stw r21,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r21.u32);
	// addi r10,r31,128
	ctx.r10.s64 = ctx.r31.s64 + 128;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// li r11,6
	ctx.r11.s64 = 6;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82BEFA94:
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82befa94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BEFA94;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82befb0c
	if (ctx.cr6.eq) {
		// ERROR 82BEFB0C
		return;
	}
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82befad0
	if (!ctx.cr6.eq) goto loc_82BEFAD0;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82cb1fe0
	ctx.lr = 0x82BEFACC;
	sub_82CB1FE0(ctx, base);
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
loc_82BEFAD0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82befaf8
	// ERROR 82BEFAF8
	return;
}

__attribute__((alias("__imp__sub_82BEFA48"))) PPC_WEAK_FUNC(sub_82BEFA48);
PPC_FUNC_IMPL(__imp__sub_82BEFA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82BEFA50;
	__savegprlr_21(ctx, base);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r24,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r24.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r22,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r22.u32);
	// stw r29,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r29.u32);
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// stw r5,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r5.u32);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r6,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r6.u32);
	// stw r21,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r21.u32);
	// addi r10,r31,128
	ctx.r10.s64 = ctx.r31.s64 + 128;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// li r11,6
	ctx.r11.s64 = 6;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82BEFA94:
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82befa94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BEFA94;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82befb0c
	if (ctx.cr6.eq) goto loc_82BEFB0C;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82befad0
	if (!ctx.cr6.eq) goto loc_82BEFAD0;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82cb1fe0
	ctx.lr = 0x82BEFACC;
	sub_82CB1FE0(ctx, base);
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
loc_82BEFAD0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82befaf8
	goto loc_82BEFAF8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r21,324(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r29,300(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// lwz r24,292(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
loc_82BEFAF8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82befb08
	if (!ctx.cr6.lt) goto loc_82BEFB08;
loc_82BEFB00:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82beffd4
	goto loc_82BEFFD4;
loc_82BEFB08:
	// lwz r6,316(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
loc_82BEFB0C:
	// lis r23,-31881
	ctx.r23.s64 = -2089353216;
	// lwz r11,6072(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6072);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82befb20
	if (ctx.cr0.eq) goto loc_82BEFB20;
	// ori r24,r24,128
	ctx.r24.u64 = ctx.r24.u64 | 128;
loc_82BEFB20:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82befb38
	if (!ctx.cr6.eq) goto loc_82BEFB38;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,8608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8608);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_82BEFB38:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82befb50
	if (!ctx.cr6.eq) goto loc_82BEFB50;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,8612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8612);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82BEFB50:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82befb68
	if (!ctx.cr6.eq) goto loc_82BEFB68;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,8620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8620);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_82BEFB68:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82befb80
	if (!ctx.cr6.eq) goto loc_82BEFB80;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,8616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8616);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_82BEFB80:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82befb98
	if (!ctx.cr6.eq) goto loc_82BEFB98;
	// lis r11,32764
	ctx.r11.s64 = 2147221504;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_82BEFB98:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82befbb0
	if (ctx.cr6.eq) goto loc_82BEFBB0;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82befbb8
	if (!ctx.cr6.gt) goto loc_82BEFBB8;
loc_82BEFBB0:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
loc_82BEFBB8:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lis r30,1
	ctx.r30.s64 = 65536;
	// bne cr6,0x82befc10
	if (!ctx.cr6.eq) goto loc_82BEFC10;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// bne cr6,0x82befbe0
	if (!ctx.cr6.eq) goto loc_82BEFBE0;
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r27,r10,65535
	ctx.r27.u64 = ctx.r10.u64 | 65535;
	// b 0x82befbf0
	goto loc_82BEFBF0;
loc_82BEFBE0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
loc_82BEFBE8:
	// add r11,r5,r27
	ctx.r11.u64 = ctx.r5.u64 + ctx.r27.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
loc_82BEFBF0:
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// clrlwi. r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r25,1424
	ctx.r25.s64 = 1424;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne 0x82befc48
	if (!ctx.cr0.eq) goto loc_82BEFC48;
	// beq cr6,0x82befc3c
	if (ctx.cr6.eq) goto loc_82BEFC3C;
	// oris r24,r24,32768
	ctx.r24.u64 = ctx.r24.u64 | 2147483648;
	// b 0x82befc4c
	goto loc_82BEFC4C;
loc_82BEFC10:
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
	// add r11,r6,r27
	ctx.r11.u64 = ctx.r6.u64 + ctx.r27.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// bne cr6,0x82befbe8
	if (!ctx.cr6.eq) goto loc_82BEFBE8;
	// addis r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 1048576;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// b 0x82befbf0
	goto loc_82BEFBF0;
loc_82BEFC3C:
	// li r25,1452
	ctx.r25.s64 = 1452;
	// li r21,-1
	ctx.r21.s64 = -1;
	// b 0x82befc4c
	goto loc_82BEFC4C;
loc_82BEFC48:
	// bne cr6,0x82befb00
	if (!ctx.cr6.eq) goto loc_82BEFB00;
loc_82BEFC4C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// beq cr6,0x82befd54
	if (ctx.cr6.eq) goto loc_82BEFD54;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82befca8
	if (ctx.cr6.eq) goto loc_82BEFCA8;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82befb00
	if (ctx.cr6.eq) goto loc_82BEFB00;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82befb00
	if (ctx.cr6.eq) goto loc_82BEFB00;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82befb00
	if (ctx.cr6.gt) goto loc_82BEFB00;
	// rlwinm. r9,r24,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82befb00
	if (!ctx.cr0.eq) goto loc_82BEFB00;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r28,r10,r29
	ctx.r28.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82BEFCA4;
	sub_82CB16F0(ctx, base);
	// b 0x82befd44
	goto loc_82BEFD44;
loc_82BEFCA8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b78d4
	ctx.lr = 0x82BEFCB8;
	__imp__NtQueryVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82befb00
	if (ctx.cr0.lt) goto loc_82BEFB00;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82befb00
	if (!ctx.cr6.eq) goto loc_82BEFB00;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82befb00
	if (ctx.cr6.eq) goto loc_82BEFB00;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x82befd3c
	if (!ctx.cr6.eq) goto loc_82BEFD3C;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x82BEFCF0;
	sub_82CB16F0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833b78d4
	ctx.lr = 0x82BEFD10;
	__imp__NtQueryVirtualMemory(ctx, base);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// blt 0x82befd44
	if (ctx.cr0.lt) goto loc_82BEFD44;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// bne cr6,0x82befd44
	if (!ctx.cr6.eq) goto loc_82BEFD44;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// b 0x82befd44
	goto loc_82BEFD44;
loc_82BEFD3C:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
loc_82BEFD44:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// b 0x82befda0
	goto loc_82BEFDA0;
loc_82BEFD54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82befb00
	if (!ctx.cr6.eq) goto loc_82BEFB00;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r31,308
	ctx.r4.s64 = ctx.r31.s64 + 308;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x833b7804
	ctx.lr = 0x82BEFD78;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82befb00
	if (ctx.cr0.lt) goto loc_82BEFB00;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82befd94
	if (!ctx.cr6.eq) goto loc_82BEFD94;
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
loc_82BEFD94:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_82BEFDA0:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82befe00
	if (!ctx.cr6.eq) goto loc_82BEFE00;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,316
	ctx.r4.s64 = ctx.r31.s64 + 316;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x833b7804
	ctx.lr = 0x82BEFDC8;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82befdf4
	if (!ctx.cr0.lt) goto loc_82BEFDF4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82befb00
	if (!ctx.cr6.eq) goto loc_82BEFB00;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,308
	ctx.r4.s64 = ctx.r31.s64 + 308;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x833b78b4
	ctx.lr = 0x82BEFDF0;
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x82befb00
	goto loc_82BEFB00;
loc_82BEFDF4:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
loc_82BEFE00:
	// addi r11,r10,1431
	ctx.r11.s64 = ctx.r10.s64 + 1431;
	// li r8,8
	ctx.r8.s64 = 8;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r9,r25,128
	ctx.r9.s64 = ctx.r25.s64 + 128;
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
loc_82BEFE14:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82befe14
	if (!ctx.cr0.eq) goto loc_82BEFE14;
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r22.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r10,6072(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6072);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82befe5c
	if (ctx.cr0.eq) goto loc_82BEFE5C;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// addi r9,r9,1548
	ctx.r9.s64 = ctx.r9.s64 + 1548;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 380, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// addi r29,r11,1548
	ctx.r29.s64 = ctx.r11.s64 + 1548;
loc_82BEFE5C:
	// addi r11,r9,15
	ctx.r11.s64 = ctx.r9.s64 + 15;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r9,-4353
	ctx.r9.s64 = -285278208;
	// rlwinm r30,r11,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r8,r30,28,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFF;
	// ori r9,r9,61183
	ctx.r9.u64 = ctx.r9.u64 | 61183;
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// lis r12,24577
	ctx.r12.s64 = 1610678272;
	// ori r12,r12,125
	ctx.r12.u64 = ctx.r12.u64 | 125;
	// and r10,r24,r12
	ctx.r10.u64 = ctx.r24.u64 & ctx.r12.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stb r11,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r24,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r24.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// sth r27,368(r11)
	PPC_STORE_U16(ctx.r11.u32 + 368, ctx.r27.u16);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// sth r10,58(r11)
	PPC_STORE_U16(ctx.r11.u32 + 58, ctx.r10.u16);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r22,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r22.u32);
	// bl 0x833b7ac4
	ctx.lr = 0x82BEFEC8;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r10,128
	ctx.r10.s64 = 128;
	// stb r3,379(r11)
	PPC_STORE_U8(ctx.r11.u32 + 379, ctx.r3.u8);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
loc_82BEFEDC:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82befedc
	if (!ctx.cr0.eq) goto loc_82BEFEDC;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// addi r11,r10,88
	ctx.r11.s64 = ctx.r10.s64 + 88;
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// bne cr6,0x82beff14
	if (!ctx.cr6.eq) goto loc_82BEFF14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// bl 0x833b77d4
	ctx.lr = 0x82BEFF14;
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_82BEFF14:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,1408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1408, ctx.r21.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r4,r30,r3
	ctx.r4.u64 = ctx.r30.u64 + ctx.r3.u64;
	// bl 0x82bef218
	ctx.lr = 0x82BEFF40;
	sub_82BEF218(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82befb00
	if (ctx.cr0.eq) goto loc_82BEFB00;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm. r10,r24,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r22,56(r11)
	PPC_STORE_U16(ctx.r11.u32 + 56, ctx.r22.u16);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r10,1412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1412, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r10,31
	ctx.r10.s64 = 31;
	// li r9,-16
	ctx.r9.s64 = -16;
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82BEFFD4:
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFAE0"))) PPC_WEAK_FUNC(sub_82BEFAE0);
PPC_FUNC_IMPL(__imp__sub_82BEFAE0) {
	PPC_FUNC_PROLOGUE();
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r21,324(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r29,300(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// lwz r24,292(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82befb08
	if (!ctx.cr6.lt) goto loc_82BEFB08;
loc_82BEFB00:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82beffd4
	goto loc_82BEFFD4;
loc_82BEFB08:
	// lwz r6,316(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lis r23,-31881
	ctx.r23.s64 = -2089353216;
	// lwz r11,6072(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6072);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82befb20
	if (ctx.cr0.eq) goto loc_82BEFB20;
	// ori r24,r24,128
	ctx.r24.u64 = ctx.r24.u64 | 128;
loc_82BEFB20:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82befb38
	if (!ctx.cr6.eq) goto loc_82BEFB38;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,8608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8608);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_82BEFB38:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82befb50
	if (!ctx.cr6.eq) goto loc_82BEFB50;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,8612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8612);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82BEFB50:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82befb68
	if (!ctx.cr6.eq) goto loc_82BEFB68;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,8620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8620);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_82BEFB68:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82befb80
	if (!ctx.cr6.eq) goto loc_82BEFB80;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,8616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8616);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_82BEFB80:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82befb98
	if (!ctx.cr6.eq) goto loc_82BEFB98;
	// lis r11,32764
	ctx.r11.s64 = 2147221504;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_82BEFB98:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82befbb0
	if (ctx.cr6.eq) goto loc_82BEFBB0;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82befbb8
	if (!ctx.cr6.gt) goto loc_82BEFBB8;
loc_82BEFBB0:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
loc_82BEFBB8:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lis r30,1
	ctx.r30.s64 = 65536;
	// bne cr6,0x82befc10
	if (!ctx.cr6.eq) goto loc_82BEFC10;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// bne cr6,0x82befbe0
	if (!ctx.cr6.eq) goto loc_82BEFBE0;
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r27,r10,65535
	ctx.r27.u64 = ctx.r10.u64 | 65535;
	// b 0x82befbf0
	goto loc_82BEFBF0;
loc_82BEFBE0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
loc_82BEFBE8:
	// add r11,r5,r27
	ctx.r11.u64 = ctx.r5.u64 + ctx.r27.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
loc_82BEFBF0:
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// clrlwi. r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r25,1424
	ctx.r25.s64 = 1424;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne 0x82befc48
	if (!ctx.cr0.eq) goto loc_82BEFC48;
	// beq cr6,0x82befc3c
	if (ctx.cr6.eq) goto loc_82BEFC3C;
	// oris r24,r24,32768
	ctx.r24.u64 = ctx.r24.u64 | 2147483648;
	// b 0x82befc4c
	goto loc_82BEFC4C;
loc_82BEFC10:
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
	// add r11,r6,r27
	ctx.r11.u64 = ctx.r6.u64 + ctx.r27.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// bne cr6,0x82befbe8
	if (!ctx.cr6.eq) goto loc_82BEFBE8;
	// addis r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 1048576;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// b 0x82befbf0
	goto loc_82BEFBF0;
loc_82BEFC3C:
	// li r25,1452
	ctx.r25.s64 = 1452;
	// li r21,-1
	ctx.r21.s64 = -1;
	// b 0x82befc4c
	goto loc_82BEFC4C;
loc_82BEFC48:
	// bne cr6,0x82befb00
	if (!ctx.cr6.eq) goto loc_82BEFB00;
loc_82BEFC4C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// beq cr6,0x82befd54
	if (ctx.cr6.eq) goto loc_82BEFD54;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82befca8
	if (ctx.cr6.eq) goto loc_82BEFCA8;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82befb00
	if (ctx.cr6.eq) goto loc_82BEFB00;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82befb00
	if (ctx.cr6.eq) goto loc_82BEFB00;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82befb00
	if (ctx.cr6.gt) goto loc_82BEFB00;
	// rlwinm. r9,r24,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82befb00
	if (!ctx.cr0.eq) goto loc_82BEFB00;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r28,r10,r29
	ctx.r28.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82BEFCA4;
	sub_82CB16F0(ctx, base);
	// b 0x82befd44
	goto loc_82BEFD44;
loc_82BEFCA8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b78d4
	ctx.lr = 0x82BEFCB8;
	__imp__NtQueryVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82befb00
	if (ctx.cr0.lt) goto loc_82BEFB00;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82befb00
	if (!ctx.cr6.eq) goto loc_82BEFB00;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82befb00
	if (ctx.cr6.eq) goto loc_82BEFB00;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x82befd3c
	if (!ctx.cr6.eq) goto loc_82BEFD3C;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x82BEFCF0;
	sub_82CB16F0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833b78d4
	ctx.lr = 0x82BEFD10;
	__imp__NtQueryVirtualMemory(ctx, base);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// blt 0x82befd44
	if (ctx.cr0.lt) goto loc_82BEFD44;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// bne cr6,0x82befd44
	if (!ctx.cr6.eq) goto loc_82BEFD44;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// b 0x82befd44
	goto loc_82BEFD44;
loc_82BEFD3C:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
loc_82BEFD44:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// b 0x82befda0
	goto loc_82BEFDA0;
loc_82BEFD54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82befb00
	if (!ctx.cr6.eq) goto loc_82BEFB00;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r31,308
	ctx.r4.s64 = ctx.r31.s64 + 308;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x833b7804
	ctx.lr = 0x82BEFD78;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82befb00
	if (ctx.cr0.lt) goto loc_82BEFB00;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82befd94
	if (!ctx.cr6.eq) goto loc_82BEFD94;
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
loc_82BEFD94:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_82BEFDA0:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82befe00
	if (!ctx.cr6.eq) goto loc_82BEFE00;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,316
	ctx.r4.s64 = ctx.r31.s64 + 316;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x833b7804
	ctx.lr = 0x82BEFDC8;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82befdf4
	if (!ctx.cr0.lt) goto loc_82BEFDF4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82befb00
	if (!ctx.cr6.eq) goto loc_82BEFB00;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,308
	ctx.r4.s64 = ctx.r31.s64 + 308;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x833b78b4
	ctx.lr = 0x82BEFDF0;
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x82befb00
	goto loc_82BEFB00;
loc_82BEFDF4:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
loc_82BEFE00:
	// addi r11,r10,1431
	ctx.r11.s64 = ctx.r10.s64 + 1431;
	// li r8,8
	ctx.r8.s64 = 8;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r9,r25,128
	ctx.r9.s64 = ctx.r25.s64 + 128;
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
loc_82BEFE14:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82befe14
	if (!ctx.cr0.eq) goto loc_82BEFE14;
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r22.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r10,6072(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6072);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82befe5c
	if (ctx.cr0.eq) goto loc_82BEFE5C;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// addi r9,r9,1548
	ctx.r9.s64 = ctx.r9.s64 + 1548;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 380, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// addi r29,r11,1548
	ctx.r29.s64 = ctx.r11.s64 + 1548;
loc_82BEFE5C:
	// addi r11,r9,15
	ctx.r11.s64 = ctx.r9.s64 + 15;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r9,-4353
	ctx.r9.s64 = -285278208;
	// rlwinm r30,r11,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r8,r30,28,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFF;
	// ori r9,r9,61183
	ctx.r9.u64 = ctx.r9.u64 | 61183;
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// lis r12,24577
	ctx.r12.s64 = 1610678272;
	// ori r12,r12,125
	ctx.r12.u64 = ctx.r12.u64 | 125;
	// and r10,r24,r12
	ctx.r10.u64 = ctx.r24.u64 & ctx.r12.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stb r11,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r24,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r24.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// sth r27,368(r11)
	PPC_STORE_U16(ctx.r11.u32 + 368, ctx.r27.u16);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// sth r10,58(r11)
	PPC_STORE_U16(ctx.r11.u32 + 58, ctx.r10.u16);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r22,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r22.u32);
	// bl 0x833b7ac4
	ctx.lr = 0x82BEFEC8;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r10,128
	ctx.r10.s64 = 128;
	// stb r3,379(r11)
	PPC_STORE_U8(ctx.r11.u32 + 379, ctx.r3.u8);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
loc_82BEFEDC:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82befedc
	if (!ctx.cr0.eq) goto loc_82BEFEDC;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// addi r11,r10,88
	ctx.r11.s64 = ctx.r10.s64 + 88;
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// bne cr6,0x82beff14
	if (!ctx.cr6.eq) goto loc_82BEFF14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// bl 0x833b77d4
	ctx.lr = 0x82BEFF14;
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_82BEFF14:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,1408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1408, ctx.r21.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r4,r30,r3
	ctx.r4.u64 = ctx.r30.u64 + ctx.r3.u64;
	// bl 0x82bef218
	ctx.lr = 0x82BEFF40;
	sub_82BEF218(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82befb00
	if (ctx.cr0.eq) goto loc_82BEFB00;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm. r10,r24,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r22,56(r11)
	PPC_STORE_U16(ctx.r11.u32 + 56, ctx.r22.u16);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r10,1412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1412, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r10,31
	ctx.r10.s64 = 31;
	// li r9,-16
	ctx.r9.s64 = -16;
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82BEFFD4:
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFFDC"))) PPC_WEAK_FUNC(sub_82BEFFDC);
PPC_FUNC_IMPL(__imp__sub_82BEFFDC) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEFFE8"))) PPC_WEAK_FUNC(sub_82BEFFE8);
PPC_FUNC_IMPL(__imp__sub_82BEFFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,31060(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 31060);
	// lwz r17,-15480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -15480);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82BEFFF8;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-320
	ctx.r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// stw r24,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r24.u32);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// stw r22,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r22.u32);
	// beq 0x82bf0058
	if (ctx.cr0.eq) goto loc_82BF0058;
	// bl 0x833b7ac4
	ctx.lr = 0x82BF0034;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82bf0058
	if (ctx.cr6.eq) goto loc_82BF0058;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,1459
	ctx.r6.s64 = 1459;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x833b7ab4
	ctx.lr = 0x82BF0058;
	__imp__KeBugCheckEx(ctx, base);
loc_82BF0058:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// or r23,r11,r29
	ctx.r23.u64 = ctx.r11.u64 | ctx.r29.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bne cr6,0x82bf0074
	if (!ctx.cr6.eq) goto loc_82BF0074;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82BF0074:
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r4,r11,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// rlwinm r29,r4,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bf00a4
	if (!ctx.cr0.eq) goto loc_82BF00A4;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x833b77e4
	ctx.lr = 0x82BF0098;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// stw r22,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r22.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82BF00A4:
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 128, ctx.xer);
	// bge cr6,0x82bf02ac
	if (!ctx.cr6.lt) goto loc_82BF02AC;
	// addi r11,r29,48
	ctx.r11.s64 = ctx.r29.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf0168
	if (ctx.cr6.eq) goto loc_82BF0168;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r8,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r8.u8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rldicr r4,r6,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r7,r5,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// or r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 | ctx.r6.u64;
	// cmpld cr6,r6,r7
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r7.u64, ctx.xer);
	// bne cr6,0x82bf0138
	if (!ctx.cr6.eq) goto loc_82BF0138;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82bf0138
	if (!ctx.cr6.eq) goto loc_82BF0138;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// xor r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
loc_82BF0138:
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// rlwimi r8,r27,0,28,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r27.u32, 0) & 0xFFFFFFFFFFFFFFEF) | (ctx.r8.u64 & 0x10);
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// stw r26,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r26.u32);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r25.s64;
	// stb r10,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// stb r24,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r24.u8);
	// b 0x82bf0710
	goto loc_82BF0710;
loc_82BF0168:
	// clrlwi r10,r29,27
	ctx.r10.u64 = ctx.r29.u32 & 0x1F;
	// rlwinm r11,r29,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x7FFFFFF;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// addi r9,r11,88
	ctx.r9.s64 = ctx.r11.s64 + 88;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// andc r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// blt cr6,0x82bf01b8
	if (ctx.cr6.lt) goto loc_82BF01B8;
	// beq cr6,0x82bf01d8
	if (ctx.cr6.eq) goto loc_82BF01D8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82bf01f8
	if (ctx.cr6.lt) goto loc_82BF01F8;
	// beq cr6,0x82bf0218
	if (ctx.cr6.eq) goto loc_82BF0218;
	// b 0x82bf02b8
	goto loc_82BF02B8;
loc_82BF01B8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bf01c8
	if (ctx.cr6.eq) goto loc_82BF01C8;
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// b 0x82bf0224
	goto loc_82BF0224;
loc_82BF01C8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_82BF01D8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bf01e8
	if (ctx.cr6.eq) goto loc_82BF01E8;
	// addi r10,r30,640
	ctx.r10.s64 = ctx.r30.s64 + 640;
	// b 0x82bf0224
	goto loc_82BF0224;
loc_82BF01E8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_82BF01F8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bf0208
	if (ctx.cr6.eq) goto loc_82BF0208;
	// addi r10,r30,896
	ctx.r10.s64 = ctx.r30.s64 + 896;
	// b 0x82bf0224
	goto loc_82BF0224;
loc_82BF0208:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82BF0218:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bf02b8
	if (ctx.cr6.eq) goto loc_82BF02B8;
	// addi r10,r30,1152
	ctx.r10.s64 = ctx.r30.s64 + 1152;
loc_82BF0224:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82bf0360
	if (!ctx.cr6.eq) goto loc_82BF0360;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82bf0360
	if (!ctx.cr6.eq) goto loc_82BF0360;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// b 0x82bf0360
	goto loc_82BF0360;
loc_82BF02AC:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82bf074c
	if (ctx.cr6.gt) goto loc_82BF074C;
loc_82BF02B8:
	// lwz r11,388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// beq cr6,0x82bf0314
	if (ctx.cr6.eq) goto loc_82BF0314;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82bf0314
	if (ctx.cr6.lt) goto loc_82BF0314;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_82BF02E8:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf0314
	if (ctx.cr6.eq) goto loc_82BF0314;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82bf0328
	if (!ctx.cr6.lt) goto loc_82BF0328;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf02e8
	goto loc_82BF02E8;
loc_82BF0314:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bef380
	ctx.lr = 0x82BF031C;
	sub_82BEF380(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bf0818
	if (ctx.cr0.eq) goto loc_82BF0818;
loc_82BF0328:
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82bf035c
	if (!ctx.cr6.eq) goto loc_82BF035C;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82BF035C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82BF0360:
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// stb r10,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r10.u8);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r8,48(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r9,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r9.u32);
	// stw r26,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r26.u32);
	// stb r27,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r27.u8);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// subf. r7,r29,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf r9,r25,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r25.s64;
	// stb r9,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r9.u8);
	// stb r24,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r24.u8);
	// beq 0x82bf06fc
	if (ctx.cr0.eq) goto loc_82BF06FC;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82bf03cc
	if (!ctx.cr6.eq) goto loc_82BF03CC;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// b 0x82bf06fc
	goto loc_82BF06FC;
loc_82BF03CC:
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm. r8,r10,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r30,r9,r3
	ctx.r30.u64 = ctx.r9.u64 + ctx.r3.u64;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// stb r10,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// sth r11,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// sth r9,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// beq 0x82bf048c
	if (ctx.cr0.eq) goto loc_82BF048C;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// bge cr6,0x82bf0448
	if (!ctx.cr6.lt) goto loc_82BF0448;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stb r10,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bf04f8
	if (!ctx.cr6.eq) goto loc_82BF04F8;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x82bf04f4
	goto loc_82BF04F4;
loc_82BF0448:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// addi r10,r28,384
	ctx.r10.s64 = ctx.r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_82BF0460:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf04f8
	if (ctx.cr6.eq) goto loc_82BF04F8;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bf04f8
	if (!ctx.cr6.gt) goto loc_82BF04F8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf0460
	goto loc_82BF0460;
loc_82BF048C:
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82bf055c
	if (ctx.cr0.eq) goto loc_82BF055C;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// bge cr6,0x82bf051c
	if (!ctx.cr6.lt) goto loc_82BF051C;
	// addi r10,r8,48
	ctx.r10.s64 = ctx.r8.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r9.u8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bf04f8
	if (!ctx.cr6.eq) goto loc_82BF04F8;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_82BF04F4:
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u32);
loc_82BF04F8:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// b 0x82bf06c0
	goto loc_82BF06C0;
loc_82BF051C:
	// addi r10,r28,384
	ctx.r10.s64 = ctx.r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_82BF0530:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf04f8
	if (ctx.cr6.eq) goto loc_82BF04F8;
	// lhz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82bf04f8
	if (!ctx.cr6.gt) goto loc_82BF04F8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf0530
	goto loc_82BF0530;
loc_82BF055C:
	// stb r10,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rldimi r8,r6,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// rldicr r6,r5,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// cmpld cr6,r6,r8
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x82bf05c8
	if (!ctx.cr6.eq) goto loc_82BF05C8;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82bf05c8
	if (!ctx.cr6.eq) goto loc_82BF05C8;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bge cr6,0x82bf05c8
	if (!ctx.cr6.lt) goto loc_82BF05C8;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// slw r8,r27,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u32);
loc_82BF05C8:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r9,48(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r10.u32);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x82bf06c8
	if (ctx.cr6.gt) goto loc_82BF06C8;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82bf0608
	if (!ctx.cr0.eq) goto loc_82BF0608;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
loc_82BF0608:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// bge cr6,0x82bf0660
	if (!ctx.cr6.lt) goto loc_82BF0660;
	// addi r10,r9,48
	ctx.r10.s64 = ctx.r9.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r9.u8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bf06a0
	if (!ctx.cr6.eq) goto loc_82BF06A0;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u32);
	// b 0x82bf06a0
	goto loc_82BF06A0;
loc_82BF0660:
	// addi r10,r28,384
	ctx.r10.s64 = ctx.r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82BF0674:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf06a0
	if (ctx.cr6.eq) goto loc_82BF06A0;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bf06a0
	if (!ctx.cr6.gt) goto loc_82BF06A0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf0674
	goto loc_82BF0674;
loc_82BF06A0:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
loc_82BF06C0:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
	// b 0x82bf06d4
	goto loc_82BF06D4;
loc_82BF06C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bee868
	ctx.lr = 0x82BF06D4;
	sub_82BEE868(ctx, base);
loc_82BF06D4:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stb r10,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r10.u8);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf06fc
	if (ctx.cr0.eq) goto loc_82BF06FC;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// stw r30,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r30.u32);
loc_82BF06FC:
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf0710
	if (ctx.cr0.eq) goto loc_82BF0710;
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,5(r26)
	PPC_STORE_U8(ctx.r26.u32 + 5, ctx.r11.u8);
loc_82BF0710:
	// addi r30,r26,16
	ctx.r30.s64 = ctx.r26.s64 + 16;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// beq cr6,0x82bf0730
	if (ctx.cr6.eq) goto loc_82BF0730;
	// lwz r3,1408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1408);
	// bl 0x833b77f4
	ctx.lr = 0x82BF0728;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// stw r22,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r22.u32);
loc_82BF0730:
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf084c
	if (ctx.cr0.eq) goto loc_82BF084C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82BF0748;
	sub_82CB16F0(ctx, base);
	// b 0x82bf084c
	goto loc_82BF084C;
loc_82BF074C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf081c
	if (ctx.cr0.eq) goto loc_82BF081C;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r24,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r24.u32);
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bne 0x82bf0774
	if (!ctx.cr0.eq) goto loc_82BF0774;
	// lis r11,128
	ctx.r11.s64 = 8388608;
loc_82BF0774:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// oris r5,r11,24576
	ctx.r5.u64 = ctx.r11.u64 | 1610612736;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x833b7804
	ctx.lr = 0x82BF0790;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bf0818
	if (ctx.cr0.lt) goto loc_82BF0818;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x82BF07A8;
	sub_82CB16F0(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 + 88;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subf r9,r25,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r25.s64;
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// addi r9,r9,-48
	ctx.r9.s64 = ctx.r9.s64 + -48;
	// sth r9,32(r8)
	PPC_STORE_U16(ctx.r8.u32 + 32, ctx.r9.u16);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stb r10,37(r9)
	PPC_STORE_U8(ctx.r9.u32 + 37, ctx.r10.u8);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// b 0x82bf084c
	goto loc_82BF084C;
loc_82BF0818:
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82BF081C:
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf0848
	if (ctx.cr0.eq) goto loc_82BF0848;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r24,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r24.u32);
	// stw r27,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r27.u32);
	// stw r24,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r24.u32);
	// stw r4,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r4.u32);
	// bl 0x833b7af4
	ctx.lr = 0x82BF0848;
	__imp__RtlRaiseException(ctx, base);
loc_82BF0848:
	// stw r24,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r24.u32);
loc_82BF084C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	ctx.r12.s64 = ctx.r31.s64 + 320;
	// bl 0x82bf088c
	ctx.lr = 0x82BF0858;
	sub_82BF088C(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r1,r31,320
	ctx.r1.s64 = ctx.r31.s64 + 320;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFFF0"))) PPC_WEAK_FUNC(sub_82BEFFF0);
PPC_FUNC_IMPL(__imp__sub_82BEFFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82BEFFF8;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-320
	ctx.r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// stw r24,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r24.u32);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// stw r22,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r22.u32);
	// beq 0x82bf0058
	if (ctx.cr0.eq) goto loc_82BF0058;
	// bl 0x833b7ac4
	ctx.lr = 0x82BF0034;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82bf0058
	if (ctx.cr6.eq) goto loc_82BF0058;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,1459
	ctx.r6.s64 = 1459;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x833b7ab4
	ctx.lr = 0x82BF0058;
	__imp__KeBugCheckEx(ctx, base);
loc_82BF0058:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// or r23,r11,r29
	ctx.r23.u64 = ctx.r11.u64 | ctx.r29.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bne cr6,0x82bf0074
	if (!ctx.cr6.eq) goto loc_82BF0074;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82BF0074:
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r4,r11,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// rlwinm r29,r4,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bf00a4
	if (!ctx.cr0.eq) goto loc_82BF00A4;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x833b77e4
	ctx.lr = 0x82BF0098;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// stw r22,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r22.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82BF00A4:
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 128, ctx.xer);
	// bge cr6,0x82bf02ac
	if (!ctx.cr6.lt) goto loc_82BF02AC;
	// addi r11,r29,48
	ctx.r11.s64 = ctx.r29.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf0168
	if (ctx.cr6.eq) goto loc_82BF0168;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r8,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r8.u8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rldicr r4,r6,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r7,r5,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// or r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 | ctx.r6.u64;
	// cmpld cr6,r6,r7
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r7.u64, ctx.xer);
	// bne cr6,0x82bf0138
	if (!ctx.cr6.eq) goto loc_82BF0138;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82bf0138
	if (!ctx.cr6.eq) goto loc_82BF0138;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// xor r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
loc_82BF0138:
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// rlwimi r8,r27,0,28,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r27.u32, 0) & 0xFFFFFFFFFFFFFFEF) | (ctx.r8.u64 & 0x10);
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// stw r26,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r26.u32);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r25.s64;
	// stb r10,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// stb r24,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r24.u8);
	// b 0x82bf0710
	goto loc_82BF0710;
loc_82BF0168:
	// clrlwi r10,r29,27
	ctx.r10.u64 = ctx.r29.u32 & 0x1F;
	// rlwinm r11,r29,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x7FFFFFF;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// addi r9,r11,88
	ctx.r9.s64 = ctx.r11.s64 + 88;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// andc r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// blt cr6,0x82bf01b8
	if (ctx.cr6.lt) goto loc_82BF01B8;
	// beq cr6,0x82bf01d8
	if (ctx.cr6.eq) goto loc_82BF01D8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82bf01f8
	if (ctx.cr6.lt) goto loc_82BF01F8;
	// beq cr6,0x82bf0218
	if (ctx.cr6.eq) goto loc_82BF0218;
	// b 0x82bf02b8
	goto loc_82BF02B8;
loc_82BF01B8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bf01c8
	if (ctx.cr6.eq) goto loc_82BF01C8;
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// b 0x82bf0224
	goto loc_82BF0224;
loc_82BF01C8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_82BF01D8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bf01e8
	if (ctx.cr6.eq) goto loc_82BF01E8;
	// addi r10,r30,640
	ctx.r10.s64 = ctx.r30.s64 + 640;
	// b 0x82bf0224
	goto loc_82BF0224;
loc_82BF01E8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_82BF01F8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bf0208
	if (ctx.cr6.eq) goto loc_82BF0208;
	// addi r10,r30,896
	ctx.r10.s64 = ctx.r30.s64 + 896;
	// b 0x82bf0224
	goto loc_82BF0224;
loc_82BF0208:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82BF0218:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bf02b8
	if (ctx.cr6.eq) goto loc_82BF02B8;
	// addi r10,r30,1152
	ctx.r10.s64 = ctx.r30.s64 + 1152;
loc_82BF0224:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82bf0360
	if (!ctx.cr6.eq) goto loc_82BF0360;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82bf0360
	if (!ctx.cr6.eq) goto loc_82BF0360;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// b 0x82bf0360
	goto loc_82BF0360;
loc_82BF02AC:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82bf074c
	if (ctx.cr6.gt) goto loc_82BF074C;
loc_82BF02B8:
	// lwz r11,388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// beq cr6,0x82bf0314
	if (ctx.cr6.eq) goto loc_82BF0314;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82bf0314
	if (ctx.cr6.lt) goto loc_82BF0314;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_82BF02E8:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf0314
	if (ctx.cr6.eq) goto loc_82BF0314;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82bf0328
	if (!ctx.cr6.lt) goto loc_82BF0328;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf02e8
	goto loc_82BF02E8;
loc_82BF0314:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bef380
	ctx.lr = 0x82BF031C;
	sub_82BEF380(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82bf0818
	if (ctx.cr0.eq) goto loc_82BF0818;
loc_82BF0328:
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82bf035c
	if (!ctx.cr6.eq) goto loc_82BF035C;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82BF035C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82BF0360:
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// stb r10,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r10.u8);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r8,48(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r9,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r9.u32);
	// stw r26,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r26.u32);
	// stb r27,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r27.u8);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// subf. r7,r29,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf r9,r25,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r25.s64;
	// stb r9,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r9.u8);
	// stb r24,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r24.u8);
	// beq 0x82bf06fc
	if (ctx.cr0.eq) goto loc_82BF06FC;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82bf03cc
	if (!ctx.cr6.eq) goto loc_82BF03CC;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// b 0x82bf06fc
	goto loc_82BF06FC;
loc_82BF03CC:
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm. r8,r10,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r30,r9,r3
	ctx.r30.u64 = ctx.r9.u64 + ctx.r3.u64;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// stb r10,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// sth r11,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// sth r9,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// beq 0x82bf048c
	if (ctx.cr0.eq) goto loc_82BF048C;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// bge cr6,0x82bf0448
	if (!ctx.cr6.lt) goto loc_82BF0448;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stb r10,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bf04f8
	if (!ctx.cr6.eq) goto loc_82BF04F8;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x82bf04f4
	goto loc_82BF04F4;
loc_82BF0448:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// addi r10,r28,384
	ctx.r10.s64 = ctx.r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_82BF0460:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf04f8
	if (ctx.cr6.eq) goto loc_82BF04F8;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bf04f8
	if (!ctx.cr6.gt) goto loc_82BF04F8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf0460
	goto loc_82BF0460;
loc_82BF048C:
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82bf055c
	if (ctx.cr0.eq) goto loc_82BF055C;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// bge cr6,0x82bf051c
	if (!ctx.cr6.lt) goto loc_82BF051C;
	// addi r10,r8,48
	ctx.r10.s64 = ctx.r8.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r9.u8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bf04f8
	if (!ctx.cr6.eq) goto loc_82BF04F8;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_82BF04F4:
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u32);
loc_82BF04F8:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// b 0x82bf06c0
	goto loc_82BF06C0;
loc_82BF051C:
	// addi r10,r28,384
	ctx.r10.s64 = ctx.r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_82BF0530:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf04f8
	if (ctx.cr6.eq) goto loc_82BF04F8;
	// lhz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82bf04f8
	if (!ctx.cr6.gt) goto loc_82BF04F8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf0530
	goto loc_82BF0530;
loc_82BF055C:
	// stb r10,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rldimi r8,r6,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// rldicr r6,r5,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// cmpld cr6,r6,r8
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x82bf05c8
	if (!ctx.cr6.eq) goto loc_82BF05C8;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82bf05c8
	if (!ctx.cr6.eq) goto loc_82BF05C8;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bge cr6,0x82bf05c8
	if (!ctx.cr6.lt) goto loc_82BF05C8;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// slw r8,r27,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u32);
loc_82BF05C8:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r9,48(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r10.u32);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x82bf06c8
	if (ctx.cr6.gt) goto loc_82BF06C8;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82bf0608
	if (!ctx.cr0.eq) goto loc_82BF0608;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
loc_82BF0608:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// bge cr6,0x82bf0660
	if (!ctx.cr6.lt) goto loc_82BF0660;
	// addi r10,r9,48
	ctx.r10.s64 = ctx.r9.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r9.u8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bf06a0
	if (!ctx.cr6.eq) goto loc_82BF06A0;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u32);
	// b 0x82bf06a0
	goto loc_82BF06A0;
loc_82BF0660:
	// addi r10,r28,384
	ctx.r10.s64 = ctx.r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82BF0674:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf06a0
	if (ctx.cr6.eq) goto loc_82BF06A0;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bf06a0
	if (!ctx.cr6.gt) goto loc_82BF06A0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf0674
	goto loc_82BF0674;
loc_82BF06A0:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
loc_82BF06C0:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
	// b 0x82bf06d4
	goto loc_82BF06D4;
loc_82BF06C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bee868
	ctx.lr = 0x82BF06D4;
	sub_82BEE868(ctx, base);
loc_82BF06D4:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stb r10,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r10.u8);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf06fc
	if (ctx.cr0.eq) goto loc_82BF06FC;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// stw r30,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r30.u32);
loc_82BF06FC:
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf0710
	if (ctx.cr0.eq) goto loc_82BF0710;
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,5(r26)
	PPC_STORE_U8(ctx.r26.u32 + 5, ctx.r11.u8);
loc_82BF0710:
	// addi r30,r26,16
	ctx.r30.s64 = ctx.r26.s64 + 16;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// beq cr6,0x82bf0730
	if (ctx.cr6.eq) goto loc_82BF0730;
	// lwz r3,1408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1408);
	// bl 0x833b77f4
	ctx.lr = 0x82BF0728;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// stw r22,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r22.u32);
loc_82BF0730:
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf084c
	if (ctx.cr0.eq) goto loc_82BF084C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82BF0748;
	sub_82CB16F0(ctx, base);
	// b 0x82bf084c
	goto loc_82BF084C;
loc_82BF074C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf081c
	if (ctx.cr0.eq) goto loc_82BF081C;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r24,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r24.u32);
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bne 0x82bf0774
	if (!ctx.cr0.eq) goto loc_82BF0774;
	// lis r11,128
	ctx.r11.s64 = 8388608;
loc_82BF0774:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// oris r5,r11,24576
	ctx.r5.u64 = ctx.r11.u64 | 1610612736;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x833b7804
	ctx.lr = 0x82BF0790;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bf0818
	if (ctx.cr0.lt) goto loc_82BF0818;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x82BF07A8;
	sub_82CB16F0(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 + 88;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subf r9,r25,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r25.s64;
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// addi r9,r9,-48
	ctx.r9.s64 = ctx.r9.s64 + -48;
	// sth r9,32(r8)
	PPC_STORE_U16(ctx.r8.u32 + 32, ctx.r9.u16);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stb r10,37(r9)
	PPC_STORE_U8(ctx.r9.u32 + 37, ctx.r10.u8);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// b 0x82bf084c
	goto loc_82BF084C;
loc_82BF0818:
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82BF081C:
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf0848
	if (ctx.cr0.eq) goto loc_82BF0848;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r24,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r24.u32);
	// stw r27,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r27.u32);
	// stw r24,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r24.u32);
	// stw r4,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r4.u32);
	// bl 0x833b7af4
	ctx.lr = 0x82BF0848;
	__imp__RtlRaiseException(ctx, base);
loc_82BF0848:
	// stw r24,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r24.u32);
loc_82BF084C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	ctx.r12.s64 = ctx.r31.s64 + 320;
	// bl 0x82bf088c
	ctx.lr = 0x82BF0858;
	sub_82BF088C(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r1,r31,320
	ctx.r1.s64 = ctx.r31.s64 + 320;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0864"))) PPC_WEAK_FUNC(sub_82BF0864);
PPC_FUNC_IMPL(__imp__sub_82BF0864) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// std r22,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r22.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,124(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r22,104(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// b 0x82bf08a8
	goto loc_82BF08A8;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// std r22,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r22.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82BF08A8:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82bf08b8
	if (ctx.cr6.eq) goto loc_82BF08B8;
	// lwz r3,1408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1408);
	// bl 0x833b77f4
	ctx.lr = 0x82BF08B8;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82BF08B8:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r22,-24(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF088C"))) PPC_WEAK_FUNC(sub_82BF088C);
PPC_FUNC_IMPL(__imp__sub_82BF088C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// std r22,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r22.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82bf08b8
	if (ctx.cr6.eq) goto loc_82BF08B8;
	// lwz r3,1408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1408);
	// bl 0x833b77f4
	ctx.lr = 0x82BF08B8;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82BF08B8:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r22,-24(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF08D4"))) PPC_WEAK_FUNC(sub_82BF08D4);
PPC_FUNC_IMPL(__imp__sub_82BF08D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF08D8"))) PPC_WEAK_FUNC(sub_82BF08D8);
PPC_FUNC_IMPL(__imp__sub_82BF08D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,31060(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 31060);
	// lwz r17,-15456(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -15456);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82BF08E8;
	__savegprlr_19(ctx, base);
	// addi r31,r1,-352
	ctx.r31.s64 = ctx.r1.s64 + -352;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// stw r20,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r20.u32);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r20,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r20.u32);
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// stw r24,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r24.u32);
	// stw r19,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r19.u32);
	// beq 0x82bf094c
	if (ctx.cr0.eq) goto loc_82BF094C;
	// bl 0x833b7ac4
	ctx.lr = 0x82BF0928;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82bf094c
	if (ctx.cr6.eq) goto loc_82BF094C;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// li r6,2262
	ctx.r6.s64 = 2262;
	// lwz r5,344(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x833b7ab4
	ctx.lr = 0x82BF094C;
	__imp__KeBugCheckEx(ctx, base);
loc_82BF094C:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82bf0964
	if (!ctx.cr6.gt) goto loc_82BF0964;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bf123c
	// ERROR 82BF123C
	return;
loc_82BF0964:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// li r23,1
	ctx.r23.s64 = 1;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// bne cr6,0x82bf0978
	if (!ctx.cr6.eq) goto loc_82BF0978;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_82BF0978:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// rlwinm r9,r21,28,24,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xE0;
	// lwz r8,84(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// rlwinm r7,r21,0,2,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x3FFFFF00;
	// rlwinm. r7,r7,0,23,5
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFC0001FF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r27,r9,1
	ctx.r27.u64 = ctx.r9.u64 | 1;
	// and r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 & ctx.r8.u64;
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// bne 0x82bf09ac
	if (!ctx.cr0.eq) goto loc_82BF09AC;
	// lwz r11,380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf09bc
	if (ctx.cr6.eq) goto loc_82BF09BC;
loc_82BF09AC:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// ori r27,r11,2
	ctx.r27.u64 = ctx.r11.u64 | 2;
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
loc_82BF09BC:
	// rlwinm r26,r4,28,4,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r21,31
	ctx.r11.u64 = ctx.r21.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bf09dc
	if (!ctx.cr0.eq) goto loc_82BF09DC;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x833b77e4
	ctx.lr = 0x82BF09D4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r23,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r23.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82BF09DC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r26,128
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 128, ctx.xer);
	// bge cr6,0x82bf0c2c
	if (!ctx.cr6.lt) goto loc_82BF0C2C;
	// addi r11,r26,48
	ctx.r11.s64 = ctx.r26.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf0afc
	if (ctx.cr6.eq) goto loc_82BF0AFC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// lbz r28,-3(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// stb r28,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r28.u8);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82bf0a84
	if (!ctx.cr6.eq) goto loc_82BF0A84;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82bf0a84
	if (!ctx.cr6.eq) goto loc_82BF0A84;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82bf0a84
	if (!ctx.cr6.lt) goto loc_82BF0A84;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r23,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
loc_82BF0A84:
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bf0ac8
	if (ctx.cr0.eq) goto loc_82BF0AC8;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
	// beq 0x82bf0ab8
	if (ctx.cr0.eq) goto loc_82BF0AB8;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x82bf0ab8
	if (!ctx.cr6.gt) goto loc_82BF0AB8;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
loc_82BF0AB8:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x833b7ad4
	ctx.lr = 0x82BF0AC8;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82BF0AC8:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// rlwinm r9,r28,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// stw r25,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r25.u32);
	// stb r10,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r10.u8);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	// stb r11,6(r29)
	PPC_STORE_U8(ctx.r29.u32 + 6, ctx.r11.u8);
	// b 0x82bf10c8
	goto loc_82BF10C8;
loc_82BF0AFC:
	// cmplwi cr6,r26,32
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 32, ctx.xer);
	// bge cr6,0x82bf0b78
	if (!ctx.cr6.lt) goto loc_82BF0B78;
	// addi r9,r30,352
	ctx.r9.s64 = ctx.r30.s64 + 352;
	// lwz r7,352(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// clrlwi r10,r26,27
	ctx.r10.u64 = ctx.r26.u32 & 0x1F;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// srw. r9,r7,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82bf0b28
	if (ctx.cr0.eq) goto loc_82BF0B28;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// b 0x82bf0c0c
	goto loc_82BF0C0C;
loc_82BF0B28:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bf0b50
	if (ctx.cr6.eq) goto loc_82BF0B50;
	// subfic r10,r10,63
	ctx.xer.ca = ctx.r10.u32 <= 63;
	ctx.r10.s64 = 63 - ctx.r10.s64;
loc_82BF0B3C:
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// andc r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// b 0x82bf0c14
	goto loc_82BF0C14;
loc_82BF0B50:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bf0b64
	if (ctx.cr6.eq) goto loc_82BF0B64;
	// subfic r10,r10,95
	ctx.xer.ca = ctx.r10.u32 <= 95;
	ctx.r10.s64 = 95 - ctx.r10.s64;
	// b 0x82bf0b3c
	goto loc_82BF0B3C;
loc_82BF0B64:
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bf0c38
	if (ctx.cr6.eq) goto loc_82BF0C38;
	// subfic r10,r10,127
	ctx.xer.ca = ctx.r10.u32 <= 127;
	ctx.r10.s64 = 127 - ctx.r10.s64;
	// b 0x82bf0b3c
	goto loc_82BF0B3C;
loc_82BF0B78:
	// cmplwi cr6,r26,64
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 64, ctx.xer);
	// clrlwi r9,r26,27
	ctx.r9.u64 = ctx.r26.u32 & 0x1F;
	// bge cr6,0x82bf0bd0
	if (!ctx.cr6.lt) goto loc_82BF0BD0;
	// addi r10,r30,356
	ctx.r10.s64 = ctx.r30.s64 + 356;
	// lwz r7,356(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srw. r10,r7,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82bf0c04
	if (!ctx.cr0.eq) goto loc_82BF0C04;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf0bbc
	if (ctx.cr6.eq) goto loc_82BF0BBC;
loc_82BF0BA4:
	// subfic r9,r9,63
	ctx.xer.ca = ctx.r9.u32 <= 63;
	ctx.r9.s64 = 63 - ctx.r9.s64;
loc_82BF0BA8:
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// b 0x82bf0c14
	goto loc_82BF0C14;
loc_82BF0BBC:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf0c38
	if (ctx.cr6.eq) goto loc_82BF0C38;
	// subfic r9,r9,95
	ctx.xer.ca = ctx.r9.u32 <= 95;
	ctx.r9.s64 = 95 - ctx.r9.s64;
	// b 0x82bf0ba8
	goto loc_82BF0BA8;
loc_82BF0BD0:
	// cmplwi cr6,r26,96
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 96, ctx.xer);
	// bge cr6,0x82bf0bf8
	if (!ctx.cr6.lt) goto loc_82BF0BF8;
	// lwz r10,360(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// addi r8,r30,360
	ctx.r8.s64 = ctx.r30.s64 + 360;
	// srw. r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82bf0c04
	if (!ctx.cr0.eq) goto loc_82BF0C04;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf0c38
	if (ctx.cr6.eq) goto loc_82BF0C38;
	// b 0x82bf0ba4
	goto loc_82BF0BA4;
loc_82BF0BF8:
	// lwz r10,364(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// srw. r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bf0c38
	if (ctx.cr0.eq) goto loc_82BF0C38;
loc_82BF0C04:
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
loc_82BF0C0C:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r10.s64;
loc_82BF0C14:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// b 0x82bf0c84
	goto loc_82BF0C84;
loc_82BF0C2C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82bf1120
	if (ctx.cr6.gt) goto loc_82BF1120;
loc_82BF0C38:
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_82BF0C48:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf0c70
	if (ctx.cr6.eq) goto loc_82BF0C70;
	// lhz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82bf0c80
	if (!ctx.cr6.lt) goto loc_82BF0C80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf0c48
	goto loc_82BF0C48;
loc_82BF0C70:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82bef380
	ctx.lr = 0x82BF0C78;
	sub_82BEF380(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82bf11cc
	if (ctx.cr0.eq) goto loc_82BF11CC;
loc_82BF0C80:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82BF0C84:
	// lbz r28,5(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stb r28,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r28.u8);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82bf0cf4
	if (!ctx.cr6.eq) goto loc_82BF0CF4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82bf0cf4
	if (!ctx.cr6.eq) goto loc_82BF0CF4;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82bf0cf4
	if (!ctx.cr6.lt) goto loc_82BF0CF4;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r23,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u32);
loc_82BF0CF4:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bf0d38
	if (ctx.cr0.eq) goto loc_82BF0D38;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// stw r4,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r4.u32);
	// beq 0x82bf0d28
	if (ctx.cr0.eq) goto loc_82BF0D28;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x82bf0d28
	if (!ctx.cr6.gt) goto loc_82BF0D28;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r4,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r4.u32);
loc_82BF0D28:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x833b7ad4
	ctx.lr = 0x82BF0D38;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82BF0D38:
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// lwz r9,48(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,48(r24)
	PPC_STORE_U32(ctx.r24.u32 + 48, ctx.r10.u32);
	// stw r25,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r25.u32);
	// stb r27,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r27.u8);
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf r9,r22,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r22.s64;
	// subf. r27,r26,r10
	ctx.r27.s64 = ctx.r10.s64 - ctx.r26.s64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stb r9,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r9.u8);
	// beq 0x82bf10b4
	if (ctx.cr0.eq) goto loc_82BF10B4;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x82bf0d98
	if (!ctx.cr6.eq) goto loc_82BF0D98;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// lbz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stb r11,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r11.u8);
	// b 0x82bf10b4
	goto loc_82BF10B4;
loc_82BF0D98:
	// rlwinm r10,r26,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm. r9,r28,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r29,r10,r30
	ctx.r29.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stb r28,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r28.u8);
	// sth r11,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r11.u16);
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// lbz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// stb r9,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r9.u8);
	// sthx r11,r10,r30
	PPC_STORE_U16(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u16);
	// beq 0x82bf0e10
	if (ctx.cr0.eq) goto loc_82BF0E10;
	// lbz r9,5(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// blt cr6,0x82bf0e40
	if (ctx.cr6.lt) goto loc_82BF0E40;
	// lwz r11,384(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 384);
	// addi r9,r24,384
	ctx.r9.s64 = ctx.r24.s64 + 384;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_82BF0DE4:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf0e7c
	if (ctx.cr6.eq) goto loc_82BF0E7C;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bf0e7c
	if (!ctx.cr6.gt) goto loc_82BF0E7C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf0de4
	goto loc_82BF0DE4;
loc_82BF0E10:
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r10,r29
	ctx.r30.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82bf0ed8
	if (ctx.cr0.eq) goto loc_82BF0ED8;
	// sth r11,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bge cr6,0x82bf0ea0
	if (!ctx.cr6.lt) goto loc_82BF0EA0;
loc_82BF0E40:
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bf0e7c
	if (!ctx.cr6.eq) goto loc_82BF0E7C;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r24
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r24
	PPC_STORE_U32(ctx.r10.u32 + ctx.r24.u32, ctx.r9.u32);
loc_82BF0E7C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x82bf1078
	goto loc_82BF1078;
loc_82BF0EA0:
	// lwz r11,384(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 384);
	// addi r9,r24,384
	ctx.r9.s64 = ctx.r24.s64 + 384;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_82BF0EAC:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf0e7c
	if (ctx.cr6.eq) goto loc_82BF0E7C;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bf0e7c
	if (!ctx.cr6.gt) goto loc_82BF0E7C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf0eac
	goto loc_82BF0EAC;
loc_82BF0ED8:
	// stb r10,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r10.u8);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82bf0f44
	if (!ctx.cr6.eq) goto loc_82BF0F44;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82bf0f44
	if (!ctx.cr6.eq) goto loc_82BF0F44;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82bf0f44
	if (!ctx.cr6.lt) goto loc_82BF0F44;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r23,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stwx r10,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u32);
loc_82BF0F44:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bf0f88
	if (ctx.cr0.eq) goto loc_82BF0F88;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// stw r4,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r4.u32);
	// beq 0x82bf0f78
	if (ctx.cr0.eq) goto loc_82BF0F78;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x82bf0f78
	if (!ctx.cr6.gt) goto loc_82BF0F78;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r4,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r4.u32);
loc_82BF0F78:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x833b7ad4
	ctx.lr = 0x82BF0F88;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82BF0F88:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r10,48(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,48(r24)
	PPC_STORE_U32(ctx.r24.u32 + 48, ctx.r11.u32);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x82bf1080
	if (ctx.cr6.gt) goto loc_82BF1080;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lbz r10,5(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82bf0fc8
	if (!ctx.cr0.eq) goto loc_82BF0FC8;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
loc_82BF0FC8:
	// lbz r9,5(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x82bf1020
	if (!ctx.cr6.lt) goto loc_82BF1020;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bf1058
	if (!ctx.cr6.eq) goto loc_82BF1058;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r24
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r24
	PPC_STORE_U32(ctx.r10.u32 + ctx.r24.u32, ctx.r9.u32);
	// b 0x82bf1058
	goto loc_82BF1058;
loc_82BF1020:
	// lwz r11,384(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 384);
	// addi r9,r24,384
	ctx.r9.s64 = ctx.r24.s64 + 384;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_82BF102C:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf1058
	if (ctx.cr6.eq) goto loc_82BF1058;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bf1058
	if (!ctx.cr6.gt) goto loc_82BF1058;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf102c
	goto loc_82BF102C;
loc_82BF1058:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82BF1078:
	// stw r11,48(r24)
	PPC_STORE_U32(ctx.r24.u32 + 48, ctx.r11.u32);
	// b 0x82bf108c
	goto loc_82BF108C;
loc_82BF1080:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82bee868
	ctx.lr = 0x82BF108C;
	sub_82BEE868(ctx, base);
loc_82BF108C:
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// stb r28,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r28.u8);
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf10b4
	if (ctx.cr0.eq) goto loc_82BF10B4;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// stw r29,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r29.u32);
loc_82BF10B4:
	// rlwinm. r11,r28,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf10c8
	if (ctx.cr0.eq) goto loc_82BF10C8;
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r11.u8);
loc_82BF10C8:
	// rlwinm. r11,r21,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r25,16
	ctx.r10.s64 = ctx.r25.s64 + 16;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// beq 0x82bf10e0
	if (ctx.cr0.eq) goto loc_82BF10E0;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// stw r19,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r19.u32);
loc_82BF10E0:
	// stb r20,7(r25)
	PPC_STORE_U8(ctx.r25.u32 + 7, ctx.r20.u8);
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bf11fc
	if (ctx.cr0.eq) goto loc_82BF11FC;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf1104
	if (ctx.cr0.eq) goto loc_82BF1104;
	// addi r11,r25,-32
	ctx.r11.s64 = ctx.r25.s64 + -32;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82bf1114
	goto loc_82BF1114;
loc_82BF1104:
	// lhz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_82BF1114:
	// std r20,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r20.u64);
	// std r20,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r20.u64);
	// b 0x82bf11fc
	goto loc_82BF11FC;
loc_82BF1120:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf11d0
	if (ctx.cr0.eq) goto loc_82BF11D0;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// stw r20,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r20.u32);
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x833b7804
	ctx.lr = 0x82BF1154;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bf11cc
	if (ctx.cr0.lt) goto loc_82BF11CC;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 + 88;
	// subf r10,r22,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r22.s64;
	// ori r9,r27,10
	ctx.r9.u64 = ctx.r27.u64 | 10;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// sth r10,32(r8)
	PPC_STORE_U16(ctx.r8.u32 + 32, ctx.r10.u16);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stb r9,37(r10)
	PPC_STORE_U8(ctx.r10.u32 + 37, ctx.r9.u8);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// b 0x82bf11fc
	goto loc_82BF11FC;
loc_82BF11CC:
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82BF11D0:
	// rlwinm. r11,r21,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf11fc
	if (ctx.cr0.eq) goto loc_82BF11FC;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r20,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r20.u32);
	// stw r23,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r23.u32);
	// stw r20,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r20.u32);
	// stw r4,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r4.u32);
	// bl 0x833b7af4
	ctx.lr = 0x82BF11FC;
	__imp__RtlRaiseException(ctx, base);
loc_82BF11FC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf1214
	// ERROR 82BF1214
	return;
}

__attribute__((alias("__imp__sub_82BF08E0"))) PPC_WEAK_FUNC(sub_82BF08E0);
PPC_FUNC_IMPL(__imp__sub_82BF08E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82BF08E8;
	__savegprlr_19(ctx, base);
	// addi r31,r1,-352
	ctx.r31.s64 = ctx.r1.s64 + -352;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// stw r20,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r20.u32);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r20,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r20.u32);
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// stw r24,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r24.u32);
	// stw r19,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r19.u32);
	// beq 0x82bf094c
	if (ctx.cr0.eq) goto loc_82BF094C;
	// bl 0x833b7ac4
	ctx.lr = 0x82BF0928;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82bf094c
	if (ctx.cr6.eq) goto loc_82BF094C;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// li r6,2262
	ctx.r6.s64 = 2262;
	// lwz r5,344(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x833b7ab4
	ctx.lr = 0x82BF094C;
	__imp__KeBugCheckEx(ctx, base);
loc_82BF094C:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82bf0964
	if (!ctx.cr6.gt) goto loc_82BF0964;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bf123c
	goto loc_82BF123C;
loc_82BF0964:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// li r23,1
	ctx.r23.s64 = 1;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// bne cr6,0x82bf0978
	if (!ctx.cr6.eq) goto loc_82BF0978;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_82BF0978:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// rlwinm r9,r21,28,24,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xE0;
	// lwz r8,84(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// rlwinm r7,r21,0,2,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x3FFFFF00;
	// rlwinm. r7,r7,0,23,5
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFC0001FF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r27,r9,1
	ctx.r27.u64 = ctx.r9.u64 | 1;
	// and r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 & ctx.r8.u64;
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// bne 0x82bf09ac
	if (!ctx.cr0.eq) goto loc_82BF09AC;
	// lwz r11,380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf09bc
	if (ctx.cr6.eq) goto loc_82BF09BC;
loc_82BF09AC:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// ori r27,r11,2
	ctx.r27.u64 = ctx.r11.u64 | 2;
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
loc_82BF09BC:
	// rlwinm r26,r4,28,4,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r21,31
	ctx.r11.u64 = ctx.r21.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bf09dc
	if (!ctx.cr0.eq) goto loc_82BF09DC;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x833b77e4
	ctx.lr = 0x82BF09D4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r23,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r23.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82BF09DC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r26,128
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 128, ctx.xer);
	// bge cr6,0x82bf0c2c
	if (!ctx.cr6.lt) goto loc_82BF0C2C;
	// addi r11,r26,48
	ctx.r11.s64 = ctx.r26.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf0afc
	if (ctx.cr6.eq) goto loc_82BF0AFC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// lbz r28,-3(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// stb r28,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r28.u8);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82bf0a84
	if (!ctx.cr6.eq) goto loc_82BF0A84;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82bf0a84
	if (!ctx.cr6.eq) goto loc_82BF0A84;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82bf0a84
	if (!ctx.cr6.lt) goto loc_82BF0A84;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r23,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
loc_82BF0A84:
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bf0ac8
	if (ctx.cr0.eq) goto loc_82BF0AC8;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
	// beq 0x82bf0ab8
	if (ctx.cr0.eq) goto loc_82BF0AB8;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x82bf0ab8
	if (!ctx.cr6.gt) goto loc_82BF0AB8;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
loc_82BF0AB8:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x833b7ad4
	ctx.lr = 0x82BF0AC8;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82BF0AC8:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// rlwinm r9,r28,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// stw r25,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r25.u32);
	// stb r10,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r10.u8);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	// stb r11,6(r29)
	PPC_STORE_U8(ctx.r29.u32 + 6, ctx.r11.u8);
	// b 0x82bf10c8
	goto loc_82BF10C8;
loc_82BF0AFC:
	// cmplwi cr6,r26,32
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 32, ctx.xer);
	// bge cr6,0x82bf0b78
	if (!ctx.cr6.lt) goto loc_82BF0B78;
	// addi r9,r30,352
	ctx.r9.s64 = ctx.r30.s64 + 352;
	// lwz r7,352(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// clrlwi r10,r26,27
	ctx.r10.u64 = ctx.r26.u32 & 0x1F;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// srw. r9,r7,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82bf0b28
	if (ctx.cr0.eq) goto loc_82BF0B28;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// b 0x82bf0c0c
	goto loc_82BF0C0C;
loc_82BF0B28:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bf0b50
	if (ctx.cr6.eq) goto loc_82BF0B50;
	// subfic r10,r10,63
	ctx.xer.ca = ctx.r10.u32 <= 63;
	ctx.r10.s64 = 63 - ctx.r10.s64;
loc_82BF0B3C:
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// andc r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// b 0x82bf0c14
	goto loc_82BF0C14;
loc_82BF0B50:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bf0b64
	if (ctx.cr6.eq) goto loc_82BF0B64;
	// subfic r10,r10,95
	ctx.xer.ca = ctx.r10.u32 <= 95;
	ctx.r10.s64 = 95 - ctx.r10.s64;
	// b 0x82bf0b3c
	goto loc_82BF0B3C;
loc_82BF0B64:
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bf0c38
	if (ctx.cr6.eq) goto loc_82BF0C38;
	// subfic r10,r10,127
	ctx.xer.ca = ctx.r10.u32 <= 127;
	ctx.r10.s64 = 127 - ctx.r10.s64;
	// b 0x82bf0b3c
	goto loc_82BF0B3C;
loc_82BF0B78:
	// cmplwi cr6,r26,64
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 64, ctx.xer);
	// clrlwi r9,r26,27
	ctx.r9.u64 = ctx.r26.u32 & 0x1F;
	// bge cr6,0x82bf0bd0
	if (!ctx.cr6.lt) goto loc_82BF0BD0;
	// addi r10,r30,356
	ctx.r10.s64 = ctx.r30.s64 + 356;
	// lwz r7,356(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srw. r10,r7,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82bf0c04
	if (!ctx.cr0.eq) goto loc_82BF0C04;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf0bbc
	if (ctx.cr6.eq) goto loc_82BF0BBC;
loc_82BF0BA4:
	// subfic r9,r9,63
	ctx.xer.ca = ctx.r9.u32 <= 63;
	ctx.r9.s64 = 63 - ctx.r9.s64;
loc_82BF0BA8:
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// b 0x82bf0c14
	goto loc_82BF0C14;
loc_82BF0BBC:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf0c38
	if (ctx.cr6.eq) goto loc_82BF0C38;
	// subfic r9,r9,95
	ctx.xer.ca = ctx.r9.u32 <= 95;
	ctx.r9.s64 = 95 - ctx.r9.s64;
	// b 0x82bf0ba8
	goto loc_82BF0BA8;
loc_82BF0BD0:
	// cmplwi cr6,r26,96
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 96, ctx.xer);
	// bge cr6,0x82bf0bf8
	if (!ctx.cr6.lt) goto loc_82BF0BF8;
	// lwz r10,360(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// addi r8,r30,360
	ctx.r8.s64 = ctx.r30.s64 + 360;
	// srw. r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82bf0c04
	if (!ctx.cr0.eq) goto loc_82BF0C04;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf0c38
	if (ctx.cr6.eq) goto loc_82BF0C38;
	// b 0x82bf0ba4
	goto loc_82BF0BA4;
loc_82BF0BF8:
	// lwz r10,364(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// srw. r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bf0c38
	if (ctx.cr0.eq) goto loc_82BF0C38;
loc_82BF0C04:
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
loc_82BF0C0C:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r10.s64;
loc_82BF0C14:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// b 0x82bf0c84
	goto loc_82BF0C84;
loc_82BF0C2C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82bf1120
	if (ctx.cr6.gt) goto loc_82BF1120;
loc_82BF0C38:
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_82BF0C48:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf0c70
	if (ctx.cr6.eq) goto loc_82BF0C70;
	// lhz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82bf0c80
	if (!ctx.cr6.lt) goto loc_82BF0C80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf0c48
	goto loc_82BF0C48;
loc_82BF0C70:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82bef380
	ctx.lr = 0x82BF0C78;
	sub_82BEF380(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82bf11cc
	if (ctx.cr0.eq) goto loc_82BF11CC;
loc_82BF0C80:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82BF0C84:
	// lbz r28,5(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stb r28,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r28.u8);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82bf0cf4
	if (!ctx.cr6.eq) goto loc_82BF0CF4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82bf0cf4
	if (!ctx.cr6.eq) goto loc_82BF0CF4;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82bf0cf4
	if (!ctx.cr6.lt) goto loc_82BF0CF4;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r23,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u32);
loc_82BF0CF4:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bf0d38
	if (ctx.cr0.eq) goto loc_82BF0D38;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// stw r4,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r4.u32);
	// beq 0x82bf0d28
	if (ctx.cr0.eq) goto loc_82BF0D28;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x82bf0d28
	if (!ctx.cr6.gt) goto loc_82BF0D28;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r4,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r4.u32);
loc_82BF0D28:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x833b7ad4
	ctx.lr = 0x82BF0D38;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82BF0D38:
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// lwz r9,48(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,48(r24)
	PPC_STORE_U32(ctx.r24.u32 + 48, ctx.r10.u32);
	// stw r25,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r25.u32);
	// stb r27,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r27.u8);
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf r9,r22,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r22.s64;
	// subf. r27,r26,r10
	ctx.r27.s64 = ctx.r10.s64 - ctx.r26.s64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stb r9,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r9.u8);
	// beq 0x82bf10b4
	if (ctx.cr0.eq) goto loc_82BF10B4;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x82bf0d98
	if (!ctx.cr6.eq) goto loc_82BF0D98;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// lbz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stb r11,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r11.u8);
	// b 0x82bf10b4
	goto loc_82BF10B4;
loc_82BF0D98:
	// rlwinm r10,r26,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm. r9,r28,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r29,r10,r30
	ctx.r29.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stb r28,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r28.u8);
	// sth r11,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r11.u16);
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// lbz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// stb r9,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r9.u8);
	// sthx r11,r10,r30
	PPC_STORE_U16(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u16);
	// beq 0x82bf0e10
	if (ctx.cr0.eq) goto loc_82BF0E10;
	// lbz r9,5(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// blt cr6,0x82bf0e40
	if (ctx.cr6.lt) goto loc_82BF0E40;
	// lwz r11,384(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 384);
	// addi r9,r24,384
	ctx.r9.s64 = ctx.r24.s64 + 384;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_82BF0DE4:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf0e7c
	if (ctx.cr6.eq) goto loc_82BF0E7C;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bf0e7c
	if (!ctx.cr6.gt) goto loc_82BF0E7C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf0de4
	goto loc_82BF0DE4;
loc_82BF0E10:
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r10,r29
	ctx.r30.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82bf0ed8
	if (ctx.cr0.eq) goto loc_82BF0ED8;
	// sth r11,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bge cr6,0x82bf0ea0
	if (!ctx.cr6.lt) goto loc_82BF0EA0;
loc_82BF0E40:
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bf0e7c
	if (!ctx.cr6.eq) goto loc_82BF0E7C;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r24
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r24
	PPC_STORE_U32(ctx.r10.u32 + ctx.r24.u32, ctx.r9.u32);
loc_82BF0E7C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x82bf1078
	goto loc_82BF1078;
loc_82BF0EA0:
	// lwz r11,384(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 384);
	// addi r9,r24,384
	ctx.r9.s64 = ctx.r24.s64 + 384;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_82BF0EAC:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf0e7c
	if (ctx.cr6.eq) goto loc_82BF0E7C;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bf0e7c
	if (!ctx.cr6.gt) goto loc_82BF0E7C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf0eac
	goto loc_82BF0EAC;
loc_82BF0ED8:
	// stb r10,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r10.u8);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82bf0f44
	if (!ctx.cr6.eq) goto loc_82BF0F44;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82bf0f44
	if (!ctx.cr6.eq) goto loc_82BF0F44;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82bf0f44
	if (!ctx.cr6.lt) goto loc_82BF0F44;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r23,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stwx r10,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u32);
loc_82BF0F44:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bf0f88
	if (ctx.cr0.eq) goto loc_82BF0F88;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// stw r4,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r4.u32);
	// beq 0x82bf0f78
	if (ctx.cr0.eq) goto loc_82BF0F78;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x82bf0f78
	if (!ctx.cr6.gt) goto loc_82BF0F78;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r4,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r4.u32);
loc_82BF0F78:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x833b7ad4
	ctx.lr = 0x82BF0F88;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82BF0F88:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r10,48(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,48(r24)
	PPC_STORE_U32(ctx.r24.u32 + 48, ctx.r11.u32);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x82bf1080
	if (ctx.cr6.gt) goto loc_82BF1080;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lbz r10,5(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82bf0fc8
	if (!ctx.cr0.eq) goto loc_82BF0FC8;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
loc_82BF0FC8:
	// lbz r9,5(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x82bf1020
	if (!ctx.cr6.lt) goto loc_82BF1020;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bf1058
	if (!ctx.cr6.eq) goto loc_82BF1058;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r24
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r24
	PPC_STORE_U32(ctx.r10.u32 + ctx.r24.u32, ctx.r9.u32);
	// b 0x82bf1058
	goto loc_82BF1058;
loc_82BF1020:
	// lwz r11,384(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 384);
	// addi r9,r24,384
	ctx.r9.s64 = ctx.r24.s64 + 384;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_82BF102C:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf1058
	if (ctx.cr6.eq) goto loc_82BF1058;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bf1058
	if (!ctx.cr6.gt) goto loc_82BF1058;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf102c
	goto loc_82BF102C;
loc_82BF1058:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82BF1078:
	// stw r11,48(r24)
	PPC_STORE_U32(ctx.r24.u32 + 48, ctx.r11.u32);
	// b 0x82bf108c
	goto loc_82BF108C;
loc_82BF1080:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82bee868
	ctx.lr = 0x82BF108C;
	sub_82BEE868(ctx, base);
loc_82BF108C:
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// stb r28,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r28.u8);
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf10b4
	if (ctx.cr0.eq) goto loc_82BF10B4;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// stw r29,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r29.u32);
loc_82BF10B4:
	// rlwinm. r11,r28,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf10c8
	if (ctx.cr0.eq) goto loc_82BF10C8;
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r11.u8);
loc_82BF10C8:
	// rlwinm. r11,r21,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r25,16
	ctx.r10.s64 = ctx.r25.s64 + 16;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// beq 0x82bf10e0
	if (ctx.cr0.eq) goto loc_82BF10E0;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// stw r19,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r19.u32);
loc_82BF10E0:
	// stb r20,7(r25)
	PPC_STORE_U8(ctx.r25.u32 + 7, ctx.r20.u8);
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bf11fc
	if (ctx.cr0.eq) goto loc_82BF11FC;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf1104
	if (ctx.cr0.eq) goto loc_82BF1104;
	// addi r11,r25,-32
	ctx.r11.s64 = ctx.r25.s64 + -32;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82bf1114
	goto loc_82BF1114;
loc_82BF1104:
	// lhz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_82BF1114:
	// std r20,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r20.u64);
	// std r20,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r20.u64);
	// b 0x82bf11fc
	goto loc_82BF11FC;
loc_82BF1120:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf11d0
	if (ctx.cr0.eq) goto loc_82BF11D0;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// stw r20,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r20.u32);
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x833b7804
	ctx.lr = 0x82BF1154;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bf11cc
	if (ctx.cr0.lt) goto loc_82BF11CC;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 + 88;
	// subf r10,r22,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r22.s64;
	// ori r9,r27,10
	ctx.r9.u64 = ctx.r27.u64 | 10;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// sth r10,32(r8)
	PPC_STORE_U16(ctx.r8.u32 + 32, ctx.r10.u16);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stb r9,37(r10)
	PPC_STORE_U8(ctx.r10.u32 + 37, ctx.r9.u8);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// b 0x82bf11fc
	goto loc_82BF11FC;
loc_82BF11CC:
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82BF11D0:
	// rlwinm. r11,r21,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf11fc
	if (ctx.cr0.eq) goto loc_82BF11FC;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r20,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r20.u32);
	// stw r23,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r23.u32);
	// stw r20,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r20.u32);
	// stw r4,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r4.u32);
	// bl 0x833b7af4
	ctx.lr = 0x82BF11FC;
	__imp__RtlRaiseException(ctx, base);
loc_82BF11FC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf1214
	goto loc_82BF1214;
	// lwz r24,100(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r19,108(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
loc_82BF1214:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82bf122c
	if (ctx.cr6.eq) goto loc_82BF122C;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x82BF122C;
	sub_82CB16F0(ctx, base);
loc_82BF122C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,352
	ctx.r12.s64 = ctx.r31.s64 + 352;
	// bl 0x82bf1264
	ctx.lr = 0x82BF1238;
	sub_82BF1264(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
loc_82BF123C:
	// addi r1,r31,352
	ctx.r1.s64 = ctx.r31.s64 + 352;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF120C"))) PPC_WEAK_FUNC(sub_82BF120C);
PPC_FUNC_IMPL(__imp__sub_82BF120C) {
	PPC_FUNC_PROLOGUE();
	// lwz r24,100(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r19,108(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82bf122c
	if (ctx.cr6.eq) goto loc_82BF122C;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x82BF122C;
	sub_82CB16F0(ctx, base);
loc_82BF122C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,352
	ctx.r12.s64 = ctx.r31.s64 + 352;
	// bl 0x82bf1264
	ctx.lr = 0x82BF1238;
	sub_82BF1264(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r1,r31,352
	ctx.r1.s64 = ctx.r31.s64 + 352;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1244"))) PPC_WEAK_FUNC(sub_82BF1244);
PPC_FUNC_IMPL(__imp__sub_82BF1244) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-352
	ctx.r31.s64 = ctx.r12.s64 + -352;
	// std r24,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r24.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,100(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// b 0x82bf127c
	goto loc_82BF127C;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-352
	ctx.r31.s64 = ctx.r12.s64 + -352;
	// std r24,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r24.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82BF127C:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf1290
	if (ctx.cr6.eq) goto loc_82BF1290;
	// lwz r3,1408(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1408);
	// bl 0x833b77f4
	ctx.lr = 0x82BF1290;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82BF1290:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r24,-16(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1264"))) PPC_WEAK_FUNC(sub_82BF1264);
PPC_FUNC_IMPL(__imp__sub_82BF1264) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-352
	ctx.r31.s64 = ctx.r12.s64 + -352;
	// std r24,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r24.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf1290
	if (ctx.cr6.eq) goto loc_82BF1290;
	// lwz r3,1408(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1408);
	// bl 0x833b77f4
	ctx.lr = 0x82BF1290;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82BF1290:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r24,-16(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF12A8"))) PPC_WEAK_FUNC(sub_82BF12A8);
PPC_FUNC_IMPL(__imp__sub_82BF12A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF12D0"))) PPC_WEAK_FUNC(sub_82BF12D0);
PPC_FUNC_IMPL(__imp__sub_82BF12D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,31060(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 31060);
	// lwz r17,-15416(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -15416);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82BF12E0;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// beq 0x82bf1340
	if (ctx.cr0.eq) goto loc_82BF1340;
	// bl 0x833b7ac4
	ctx.lr = 0x82BF131C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82bf1340
	if (ctx.cr6.eq) goto loc_82BF1340;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,4390
	ctx.r6.s64 = 4390;
	// lwz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x833b7ab4
	ctx.lr = 0x82BF1340;
	__imp__KeBugCheckEx(ctx, base);
loc_82BF1340:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82bf1350
	if (!ctx.cr6.eq) goto loc_82BF1350;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bf1548
	goto loc_82BF1548;
loc_82BF1350:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -16;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bf1378
	if (!ctx.cr0.eq) goto loc_82BF1378;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x833b77e4
	ctx.lr = 0x82BF1370;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
loc_82BF1378:
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bf14e0
	if (!ctx.cr0.eq) goto loc_82BF14E0;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82bee440
	ctx.lr = 0x82BF13A0;
	sub_82BEE440(ctx, base);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// bge cr6,0x82bf1428
	if (!ctx.cr6.lt) goto loc_82BF1428;
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bf1400
	if (!ctx.cr6.eq) goto loc_82BF1400;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
loc_82BF1400:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82bf14cc
	goto loc_82BF14CC;
loc_82BF1428:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bf1454
	if (ctx.cr6.lt) goto loc_82BF1454;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bf1454
	if (ctx.cr6.lt) goto loc_82BF1454;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bef5c0
	ctx.lr = 0x82BF1450;
	sub_82BEF5C0(ctx, base);
	// b 0x82bf1538
	goto loc_82BF1538;
loc_82BF1454:
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x82bf14d4
	if (ctx.cr6.gt) goto loc_82BF14D4;
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_82BF1474:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf14a8
	if (ctx.cr6.eq) goto loc_82BF14A8;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// lhz r7,-8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82bf14a8
	if (!ctx.cr6.gt) goto loc_82BF14A8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf1474
	goto loc_82BF1474;
loc_82BF14A8:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82BF14CC:
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// b 0x82bf1538
	goto loc_82BF1538;
loc_82BF14D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bee868
	ctx.lr = 0x82BF14DC;
	sub_82BEE868(ctx, base);
	// b 0x82bf1538
	goto loc_82BF1538;
loc_82BF14E0:
	// addi r11,r29,-32
	ctx.r11.s64 = ctx.r29.s64 + -32;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r11,-32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32);
	// lwz r10,-28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82bf1510
	if (ctx.cr6.eq) goto loc_82BF1510;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x833b77f4
	ctx.lr = 0x82BF1508;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
loc_82BF1510:
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x833b78b4
	ctx.lr = 0x82BF152C;
	__imp__NtFreeVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82bf1538
	if (!ctx.cr0.lt) goto loc_82BF1538;
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
loc_82BF1538:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x82bf1578
	ctx.lr = 0x82BF1544;
	sub_82BF1578(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82BF1548:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF12D8"))) PPC_WEAK_FUNC(sub_82BF12D8);
PPC_FUNC_IMPL(__imp__sub_82BF12D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82BF12E0;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// beq 0x82bf1340
	if (ctx.cr0.eq) goto loc_82BF1340;
	// bl 0x833b7ac4
	ctx.lr = 0x82BF131C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82bf1340
	if (ctx.cr6.eq) goto loc_82BF1340;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,4390
	ctx.r6.s64 = 4390;
	// lwz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x833b7ab4
	ctx.lr = 0x82BF1340;
	__imp__KeBugCheckEx(ctx, base);
loc_82BF1340:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82bf1350
	if (!ctx.cr6.eq) goto loc_82BF1350;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bf1548
	goto loc_82BF1548;
loc_82BF1350:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -16;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bf1378
	if (!ctx.cr0.eq) goto loc_82BF1378;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x833b77e4
	ctx.lr = 0x82BF1370;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
loc_82BF1378:
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bf14e0
	if (!ctx.cr0.eq) goto loc_82BF14E0;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82bee440
	ctx.lr = 0x82BF13A0;
	sub_82BEE440(ctx, base);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// bge cr6,0x82bf1428
	if (!ctx.cr6.lt) goto loc_82BF1428;
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bf1400
	if (!ctx.cr6.eq) goto loc_82BF1400;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
loc_82BF1400:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82bf14cc
	goto loc_82BF14CC;
loc_82BF1428:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bf1454
	if (ctx.cr6.lt) goto loc_82BF1454;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bf1454
	if (ctx.cr6.lt) goto loc_82BF1454;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bef5c0
	ctx.lr = 0x82BF1450;
	sub_82BEF5C0(ctx, base);
	// b 0x82bf1538
	goto loc_82BF1538;
loc_82BF1454:
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x82bf14d4
	if (ctx.cr6.gt) goto loc_82BF14D4;
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_82BF1474:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf14a8
	if (ctx.cr6.eq) goto loc_82BF14A8;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// lhz r7,-8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82bf14a8
	if (!ctx.cr6.gt) goto loc_82BF14A8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf1474
	goto loc_82BF1474;
loc_82BF14A8:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82BF14CC:
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// b 0x82bf1538
	goto loc_82BF1538;
loc_82BF14D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bee868
	ctx.lr = 0x82BF14DC;
	sub_82BEE868(ctx, base);
	// b 0x82bf1538
	goto loc_82BF1538;
loc_82BF14E0:
	// addi r11,r29,-32
	ctx.r11.s64 = ctx.r29.s64 + -32;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r11,-32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32);
	// lwz r10,-28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82bf1510
	if (ctx.cr6.eq) goto loc_82BF1510;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x833b77f4
	ctx.lr = 0x82BF1508;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
loc_82BF1510:
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x833b78b4
	ctx.lr = 0x82BF152C;
	__imp__NtFreeVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82bf1538
	if (!ctx.cr0.lt) goto loc_82BF1538;
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
loc_82BF1538:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x82bf1578
	ctx.lr = 0x82BF1544;
	sub_82BF1578(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82BF1548:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1550"))) PPC_WEAK_FUNC(sub_82BF1550);
PPC_FUNC_IMPL(__imp__sub_82BF1550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r25,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r25.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r25,84(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x82bf1594
	goto loc_82BF1594;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r25,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r25.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82BF1594:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82bf15a4
	if (ctx.cr6.eq) goto loc_82BF15A4;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x833b77f4
	ctx.lr = 0x82BF15A4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82BF15A4:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r25,-24(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1578"))) PPC_WEAK_FUNC(sub_82BF1578);
PPC_FUNC_IMPL(__imp__sub_82BF1578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r25,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r25.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82bf15a4
	if (ctx.cr6.eq) goto loc_82BF15A4;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x833b77f4
	ctx.lr = 0x82BF15A4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82BF15A4:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r25,-24(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF15C0"))) PPC_WEAK_FUNC(sub_82BF15C0);
PPC_FUNC_IMPL(__imp__sub_82BF15C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,31060(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 31060);
	// lwz r17,-15392(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -15392);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82BF15D0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// beq 0x82bf1624
	if (ctx.cr0.eq) goto loc_82BF1624;
	// bl 0x833b7ac4
	ctx.lr = 0x82BF1600;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82bf1624
	if (ctx.cr6.eq) goto loc_82BF1624;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4755
	ctx.r6.s64 = 4755;
	// lwz r5,152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x833b7ab4
	ctx.lr = 0x82BF1624;
	__imp__KeBugCheckEx(ctx, base);
loc_82BF1624:
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bf1648
	if (!ctx.cr0.eq) goto loc_82BF1648;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x833b77e4
	ctx.lr = 0x82BF163C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// b 0x82bf164c
	goto loc_82BF164C;
loc_82BF1648:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82BF164C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbz r10,-11(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + -11);
	// addi r11,r28,-16
	ctx.r11.s64 = ctx.r28.s64 + -16;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82bf17e4
	if (ctx.cr0.eq) goto loc_82BF17E4;
	// clrlwi. r9,r28,29
	ctx.r9.u64 = ctx.r28.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82bf17e4
	if (!ctx.cr0.eq) goto loc_82BF17E4;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,64
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 64, ctx.xer);
	// bge cr6,0x82bf17e4
	if (!ctx.cr6.lt) goto loc_82BF17E4;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq 0x82bf16c4
	if (ctx.cr0.eq) goto loc_82BF16C4;
	// addi r10,r11,-32
	ctx.r10.s64 = ctx.r11.s64 + -32;
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r10,-32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// lwz r11,-28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// bl 0x833b78b4
	ctx.lr = 0x82BF16B8;
	__imp__NtFreeVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bf17e4
	if (ctx.cr0.lt) goto loc_82BF17E4;
	// b 0x82bf17e0
	goto loc_82BF17E0;
loc_82BF16C4:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x82bee440
	ctx.lr = 0x82BF16DC;
	sub_82BEE440(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bf1710
	if (ctx.cr6.lt) goto loc_82BF1710;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bf1710
	if (ctx.cr6.lt) goto loc_82BF1710;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bef5c0
	ctx.lr = 0x82BF170C;
	sub_82BEF5C0(ctx, base);
	// b 0x82bf17e0
	goto loc_82BF17E0;
loc_82BF1710:
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x82bf17d8
	if (ctx.cr6.gt) goto loc_82BF17D8;
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// bge cr6,0x82bf1774
	if (!ctx.cr6.lt) goto loc_82BF1774;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bf17ac
	if (!ctx.cr6.eq) goto loc_82BF17AC;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
	// b 0x82bf17ac
	goto loc_82BF17AC;
loc_82BF1774:
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_82BF1780:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf17ac
	if (ctx.cr6.eq) goto loc_82BF17AC;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bf17ac
	if (!ctx.cr6.gt) goto loc_82BF17AC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf1780
	goto loc_82BF1780;
loc_82BF17AC:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// b 0x82bf17e0
	goto loc_82BF17E0;
loc_82BF17D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bee868
	ctx.lr = 0x82BF17E0;
	sub_82BEE868(ctx, base);
loc_82BF17E0:
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
loc_82BF17E4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf1800
	// ERROR 82BF1800
	return;
}

__attribute__((alias("__imp__sub_82BF15C8"))) PPC_WEAK_FUNC(sub_82BF15C8);
PPC_FUNC_IMPL(__imp__sub_82BF15C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82BF15D0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// beq 0x82bf1624
	if (ctx.cr0.eq) goto loc_82BF1624;
	// bl 0x833b7ac4
	ctx.lr = 0x82BF1600;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82bf1624
	if (ctx.cr6.eq) goto loc_82BF1624;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4755
	ctx.r6.s64 = 4755;
	// lwz r5,152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x833b7ab4
	ctx.lr = 0x82BF1624;
	__imp__KeBugCheckEx(ctx, base);
loc_82BF1624:
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bf1648
	if (!ctx.cr0.eq) goto loc_82BF1648;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x833b77e4
	ctx.lr = 0x82BF163C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// b 0x82bf164c
	goto loc_82BF164C;
loc_82BF1648:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82BF164C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbz r10,-11(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + -11);
	// addi r11,r28,-16
	ctx.r11.s64 = ctx.r28.s64 + -16;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82bf17e4
	if (ctx.cr0.eq) goto loc_82BF17E4;
	// clrlwi. r9,r28,29
	ctx.r9.u64 = ctx.r28.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82bf17e4
	if (!ctx.cr0.eq) goto loc_82BF17E4;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,64
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 64, ctx.xer);
	// bge cr6,0x82bf17e4
	if (!ctx.cr6.lt) goto loc_82BF17E4;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq 0x82bf16c4
	if (ctx.cr0.eq) goto loc_82BF16C4;
	// addi r10,r11,-32
	ctx.r10.s64 = ctx.r11.s64 + -32;
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r10,-32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// lwz r11,-28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// bl 0x833b78b4
	ctx.lr = 0x82BF16B8;
	__imp__NtFreeVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bf17e4
	if (ctx.cr0.lt) goto loc_82BF17E4;
	// b 0x82bf17e0
	goto loc_82BF17E0;
loc_82BF16C4:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x82bee440
	ctx.lr = 0x82BF16DC;
	sub_82BEE440(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bf1710
	if (ctx.cr6.lt) goto loc_82BF1710;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bf1710
	if (ctx.cr6.lt) goto loc_82BF1710;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bef5c0
	ctx.lr = 0x82BF170C;
	sub_82BEF5C0(ctx, base);
	// b 0x82bf17e0
	goto loc_82BF17E0;
loc_82BF1710:
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x82bf17d8
	if (ctx.cr6.gt) goto loc_82BF17D8;
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// bge cr6,0x82bf1774
	if (!ctx.cr6.lt) goto loc_82BF1774;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bf17ac
	if (!ctx.cr6.eq) goto loc_82BF17AC;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
	// b 0x82bf17ac
	goto loc_82BF17AC;
loc_82BF1774:
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_82BF1780:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf17ac
	if (ctx.cr6.eq) goto loc_82BF17AC;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bf17ac
	if (!ctx.cr6.gt) goto loc_82BF17AC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf1780
	goto loc_82BF1780;
loc_82BF17AC:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// b 0x82bf17e0
	goto loc_82BF17E0;
loc_82BF17D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bee868
	ctx.lr = 0x82BF17E0;
	sub_82BEE868(ctx, base);
loc_82BF17E0:
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
loc_82BF17E4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf1800
	goto loc_82BF1800;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82BF1800:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82bf1838
	ctx.lr = 0x82BF180C;
	sub_82BF1838(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF17F4"))) PPC_WEAK_FUNC(sub_82BF17F4);
PPC_FUNC_IMPL(__imp__sub_82BF17F4) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82bf1838
	ctx.lr = 0x82BF180C;
	sub_82BF1838(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1818"))) PPC_WEAK_FUNC(sub_82BF1818);
PPC_FUNC_IMPL(__imp__sub_82BF1818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// b 0x82bf1850
	goto loc_82BF1850;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82BF1850:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf1864
	if (ctx.cr6.eq) goto loc_82BF1864;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x833b77f4
	ctx.lr = 0x82BF1864;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82BF1864:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1838"))) PPC_WEAK_FUNC(sub_82BF1838);
PPC_FUNC_IMPL(__imp__sub_82BF1838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf1864
	if (ctx.cr6.eq) goto loc_82BF1864;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x833b77f4
	ctx.lr = 0x82BF1864;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82BF1864:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF187C"))) PPC_WEAK_FUNC(sub_82BF187C);
PPC_FUNC_IMPL(__imp__sub_82BF187C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1888"))) PPC_WEAK_FUNC(sub_82BF1888);
PPC_FUNC_IMPL(__imp__sub_82BF1888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r25,31060(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 31060);
	// lwz r17,-15352(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -15352);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82BF1898;
	__savegprlr_19(ctx, base);
	// addi r31,r1,-320
	ctx.r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r27,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r27.u32);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r19,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r19.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r20,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r20.u32);
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// stw r26,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r26.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r21,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r21.u32);
	// beq 0x82bf1900
	if (ctx.cr0.eq) goto loc_82BF1900;
	// bl 0x833b7ac4
	ctx.lr = 0x82BF18DC;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82bf1900
	if (ctx.cr6.eq) goto loc_82BF1900;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// li r6,3144
	ctx.r6.s64 = 3144;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x833b7ab4
	ctx.lr = 0x82BF1900;
	__imp__KeBugCheckEx(ctx, base);
loc_82BF1900:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82bf1910
	if (!ctx.cr6.eq) goto loc_82BF1910;
loc_82BF1908:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bf20d8
	// ERROR 82BF20D8
	return;
loc_82BF1910:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// or r23,r10,r30
	ctx.r23.u64 = ctx.r10.u64 | ctx.r30.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82bf1908
	if (ctx.cr6.gt) goto loc_82BF1908;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// li r22,1
	ctx.r22.s64 = 1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x82bf193c
	if (!ctx.cr6.eq) goto loc_82BF193C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82BF193C:
	// lwz r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// rlwinm r9,r23,0,2,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x3FFFFF00;
	// rlwinm. r9,r9,0,23,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC0001FF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r8,84(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r24,r11,r8
	ctx.r24.u64 = ctx.r11.u64 & ctx.r8.u64;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// bne 0x82bf1974
	if (!ctx.cr0.eq) goto loc_82BF1974;
	// lwz r11,380(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf1974
	if (!ctx.cr6.eq) goto loc_82BF1974;
	// lbz r11,-11(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + -11);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf197c
	if (ctx.cr0.eq) goto loc_82BF197C;
loc_82BF1974:
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
loc_82BF197C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bf19a0
	if (!ctx.cr0.eq) goto loc_82BF19A0;
	// lwz r3,1408(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1408);
	// bl 0x833b77e4
	ctx.lr = 0x82BF1994;
	__imp__RtlEnterCriticalSection(ctx, base);
	// xori r23,r23,1
	ctx.r23.u64 = ctx.r23.u64 ^ 1;
	// stw r22,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r22.u32);
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_82BF19A0:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r20,-16
	ctx.r30.s64 = ctx.r20.s64 + -16;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// lbz r7,5(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi. r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf20ac
	if (ctx.cr0.eq) {
		// ERROR 82BF20AC
		return;
	}
	// rlwinm. r6,r7,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// beq 0x82bf1a08
	if (ctx.cr0.eq) goto loc_82BF1A08;
	// addi r9,r24,32
	ctx.r9.s64 = ctx.r24.s64 + 32;
	// lwz r8,-8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// addi r10,r30,-32
	ctx.r10.s64 = ctx.r30.s64 + -32;
	// addis r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// rlwinm r24,r5,0,0,15
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// addi r25,r8,-48
	ctx.r25.s64 = ctx.r8.s64 + -48;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// rlwinm r29,r4,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x82bf1a18
	goto loc_82BF1A18;
loc_82BF1A08:
	// lbz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// subf r25,r10,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82BF1A18:
	// stw r25,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
	// rlwinm r28,r24,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82bf1e7c
	if (ctx.cr6.gt) goto loc_82BF1E7C;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82bf1a48
	if (!ctx.cr6.eq) goto loc_82BF1A48;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
loc_82BF1A48:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82bf1a64
	if (ctx.cr6.eq) goto loc_82BF1A64;
	// subf r11,r26,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r26.s64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// b 0x82bf1aa4
	goto loc_82BF1AA4;
loc_82BF1A64:
	// rlwinm. r10,r7,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bf1a9c
	if (ctx.cr0.eq) goto loc_82BF1A9C;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r28,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r9,r26,r24
	ctx.r9.s64 = ctx.r24.s64 - ctx.r26.s64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// ld r8,-16(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r10,-8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// stb r9,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r9.u8);
	// b 0x82bf1aa4
	goto loc_82BF1AA4;
loc_82BF1A9C:
	// subf r11,r26,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r26.s64;
	// stb r11,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r11.u8);
loc_82BF1AA4:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82bf1ac4
	if (!ctx.cr6.gt) goto loc_82BF1AC4;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf1ac4
	if (ctx.cr0.eq) goto loc_82BF1AC4;
	// subf r5,r25,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r25.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r25,r20
	ctx.r3.u64 = ctx.r25.u64 + ctx.r20.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82BF1AC4;
	sub_82CB16F0(ctx, base);
loc_82BF1AC4:
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bf2078
	if (ctx.cr6.eq) {
		// ERROR 82BF2078
		return;
	}
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bf1b28
	if (ctx.cr0.eq) goto loc_82BF1B28;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x833b78b4
	ctx.lr = 0x82BF1B0C;
	__imp__NtFreeVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bf2078
	if (ctx.cr0.lt) {
		// ERROR 82BF2078
		return;
	}
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// b 0x82bf2078
	// ERROR 82BF2078
	return;
loc_82BF1B28:
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r28,16
	ctx.r9.u64 = ctx.r28.u32 & 0xFFFF;
	// add r29,r10,r30
	ctx.r29.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// sth r9,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r9.u16);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// stb r11,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r11.u8);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// subf r28,r28,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r28.s64;
	// sth r9,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// beq 0x82bf1bdc
	if (ctx.cr0.eq) goto loc_82BF1BDC;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// lwzx r9,r9,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// stw r29,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r29.u32);
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x82bf1ba4
	if (!ctx.cr6.lt) goto loc_82BF1BA4;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// b 0x82bf1c18
	goto loc_82BF1C18;
loc_82BF1BA4:
	// lwz r11,384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = ctx.r27.s64 + 384;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_82BF1BB0:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf1c50
	if (ctx.cr6.eq) goto loc_82BF1C50;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bf1c50
	if (!ctx.cr6.gt) goto loc_82BF1C50;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf1bb0
	goto loc_82BF1BB0;
loc_82BF1BDC:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bf1cac
	if (ctx.cr0.eq) goto loc_82BF1CAC;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// sth r11,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x82bf1c74
	if (!ctx.cr6.lt) goto loc_82BF1C74;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
loc_82BF1C18:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bf1c50
	if (!ctx.cr6.eq) goto loc_82BF1C50;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u32);
loc_82BF1C50:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x82bf1e64
	goto loc_82BF1E64;
loc_82BF1C74:
	// lwz r11,384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// addi r10,r27,384
	ctx.r10.s64 = ctx.r27.s64 + 384;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_82BF1C80:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf1c50
	if (ctx.cr6.eq) goto loc_82BF1C50;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bf1c50
	if (!ctx.cr6.gt) goto loc_82BF1C50;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf1c80
	goto loc_82BF1C80;
loc_82BF1CAC:
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82bf1d18
	if (!ctx.cr6.eq) goto loc_82BF1D18;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82bf1d18
	if (!ctx.cr6.eq) goto loc_82BF1D18;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82bf1d18
	if (!ctx.cr6.lt) goto loc_82BF1D18;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u32);
loc_82BF1D18:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bf1d5c
	if (ctx.cr0.eq) goto loc_82BF1D5C;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
	// beq 0x82bf1d4c
	if (ctx.cr0.eq) goto loc_82BF1D4C;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x82bf1d4c
	if (!ctx.cr6.gt) goto loc_82BF1D4C;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
loc_82BF1D4C:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x833b7ad4
	ctx.lr = 0x82BF1D5C;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82BF1D5C:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,48(r27)
	PPC_STORE_U32(ctx.r27.u32 + 48, ctx.r11.u32);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x82bf1e6c
	if (ctx.cr6.gt) goto loc_82BF1E6C;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lbz r10,5(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82bf1da0
	if (!ctx.cr0.eq) goto loc_82BF1DA0;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// b 0x82bf1db4
	goto loc_82BF1DB4;
loc_82BF1DA0:
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r29,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r29.u32);
loc_82BF1DB4:
	// lbz r9,5(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x82bf1e0c
	if (!ctx.cr6.lt) goto loc_82BF1E0C;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bf1e44
	if (!ctx.cr6.eq) goto loc_82BF1E44;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u32);
	// b 0x82bf1e44
	goto loc_82BF1E44;
loc_82BF1E0C:
	// lwz r11,384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = ctx.r27.s64 + 384;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_82BF1E18:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf1e44
	if (ctx.cr6.eq) goto loc_82BF1E44;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bf1e44
	if (!ctx.cr6.gt) goto loc_82BF1E44;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf1e18
	goto loc_82BF1E18;
loc_82BF1E44:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82BF1E64:
	// stw r11,48(r21)
	PPC_STORE_U32(ctx.r21.u32 + 48, ctx.r11.u32);
	// b 0x82bf2078
	// ERROR 82BF2078
	return;
loc_82BF1E6C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bee868
	ctx.lr = 0x82BF1E78;
	sub_82BEE868(ctx, base);
	// b 0x82bf2078
	// ERROR 82BF2078
	return;
loc_82BF1E7C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82bf1ea4
	if (!ctx.cr6.eq) goto loc_82BF1EA4;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82beebe0
	ctx.lr = 0x82BF1E9C;
	sub_82BEEBE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82bf2078
	if (!ctx.cr0.eq) {
		// ERROR 82BF2078
		return;
	}
loc_82BF1EA4:
	// rlwinm. r11,r23,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf1eb4
	if (ctx.cr0.eq) goto loc_82BF1EB4;
	// stw r19,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r19.u32);
	// b 0x82bf2080
	// ERROR 82BF2080
	return;
loc_82BF1EB4:
	// rlwinm r23,r23,0,14,1
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFC003FFFF;
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf1f7c
	if (ctx.cr0.eq) {
		sub_82BF1F7C(ctx, base);
		return;
	}
	// rlwinm r11,r23,0,23,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFF1FF;
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// lbz r9,5(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwimi r10,r9,4,20,22
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0xE00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF1FF);
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// or r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
	// beq 0x82bf1ef8
	if (ctx.cr0.eq) goto loc_82BF1EF8;
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82bf1f08
	goto loc_82BF1F08;
loc_82BF1EF8:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_82BF1F08:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bf1f34
	if (ctx.cr0.eq) goto loc_82BF1F34;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82bf1f34
	if (!ctx.cr0.eq) goto loc_82BF1F34;
	// rlwinm r11,r11,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 | ctx.r23.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_82BF1F34:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf1f94
	// ERROR 82BF1F94
	return;
}

__attribute__((alias("__imp__sub_82BF1890"))) PPC_WEAK_FUNC(sub_82BF1890);
PPC_FUNC_IMPL(__imp__sub_82BF1890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82BF1898;
	__savegprlr_19(ctx, base);
	// addi r31,r1,-320
	ctx.r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r27,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r27.u32);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r19,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r19.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r20,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r20.u32);
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// stw r26,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r26.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r21,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r21.u32);
	// beq 0x82bf1900
	if (ctx.cr0.eq) goto loc_82BF1900;
	// bl 0x833b7ac4
	ctx.lr = 0x82BF18DC;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82bf1900
	if (ctx.cr6.eq) goto loc_82BF1900;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// li r6,3144
	ctx.r6.s64 = 3144;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x833b7ab4
	ctx.lr = 0x82BF1900;
	__imp__KeBugCheckEx(ctx, base);
loc_82BF1900:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82bf1910
	if (!ctx.cr6.eq) goto loc_82BF1910;
loc_82BF1908:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bf20d8
	goto loc_82BF20D8;
loc_82BF1910:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// or r23,r10,r30
	ctx.r23.u64 = ctx.r10.u64 | ctx.r30.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82bf1908
	if (ctx.cr6.gt) goto loc_82BF1908;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// li r22,1
	ctx.r22.s64 = 1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x82bf193c
	if (!ctx.cr6.eq) goto loc_82BF193C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82BF193C:
	// lwz r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// rlwinm r9,r23,0,2,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x3FFFFF00;
	// rlwinm. r9,r9,0,23,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC0001FF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r8,84(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r24,r11,r8
	ctx.r24.u64 = ctx.r11.u64 & ctx.r8.u64;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// bne 0x82bf1974
	if (!ctx.cr0.eq) goto loc_82BF1974;
	// lwz r11,380(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf1974
	if (!ctx.cr6.eq) goto loc_82BF1974;
	// lbz r11,-11(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + -11);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf197c
	if (ctx.cr0.eq) goto loc_82BF197C;
loc_82BF1974:
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
loc_82BF197C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bf19a0
	if (!ctx.cr0.eq) goto loc_82BF19A0;
	// lwz r3,1408(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1408);
	// bl 0x833b77e4
	ctx.lr = 0x82BF1994;
	__imp__RtlEnterCriticalSection(ctx, base);
	// xori r23,r23,1
	ctx.r23.u64 = ctx.r23.u64 ^ 1;
	// stw r22,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r22.u32);
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_82BF19A0:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r20,-16
	ctx.r30.s64 = ctx.r20.s64 + -16;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// lbz r7,5(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi. r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf20ac
	if (ctx.cr0.eq) goto loc_82BF20AC;
	// rlwinm. r6,r7,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// beq 0x82bf1a08
	if (ctx.cr0.eq) goto loc_82BF1A08;
	// addi r9,r24,32
	ctx.r9.s64 = ctx.r24.s64 + 32;
	// lwz r8,-8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// addi r10,r30,-32
	ctx.r10.s64 = ctx.r30.s64 + -32;
	// addis r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// rlwinm r24,r5,0,0,15
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// addi r25,r8,-48
	ctx.r25.s64 = ctx.r8.s64 + -48;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// rlwinm r29,r4,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x82bf1a18
	goto loc_82BF1A18;
loc_82BF1A08:
	// lbz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// subf r25,r10,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82BF1A18:
	// stw r25,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
	// rlwinm r28,r24,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82bf1e7c
	if (ctx.cr6.gt) goto loc_82BF1E7C;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82bf1a48
	if (!ctx.cr6.eq) goto loc_82BF1A48;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
loc_82BF1A48:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82bf1a64
	if (ctx.cr6.eq) goto loc_82BF1A64;
	// subf r11,r26,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r26.s64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// b 0x82bf1aa4
	goto loc_82BF1AA4;
loc_82BF1A64:
	// rlwinm. r10,r7,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bf1a9c
	if (ctx.cr0.eq) goto loc_82BF1A9C;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r28,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r9,r26,r24
	ctx.r9.s64 = ctx.r24.s64 - ctx.r26.s64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// ld r8,-16(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r10,-8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// stb r9,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r9.u8);
	// b 0x82bf1aa4
	goto loc_82BF1AA4;
loc_82BF1A9C:
	// subf r11,r26,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r26.s64;
	// stb r11,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r11.u8);
loc_82BF1AA4:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82bf1ac4
	if (!ctx.cr6.gt) goto loc_82BF1AC4;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf1ac4
	if (ctx.cr0.eq) goto loc_82BF1AC4;
	// subf r5,r25,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r25.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r25,r20
	ctx.r3.u64 = ctx.r25.u64 + ctx.r20.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82BF1AC4;
	sub_82CB16F0(ctx, base);
loc_82BF1AC4:
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bf2078
	if (ctx.cr6.eq) goto loc_82BF2078;
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bf1b28
	if (ctx.cr0.eq) goto loc_82BF1B28;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x833b78b4
	ctx.lr = 0x82BF1B0C;
	__imp__NtFreeVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bf2078
	if (ctx.cr0.lt) goto loc_82BF2078;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// b 0x82bf2078
	goto loc_82BF2078;
loc_82BF1B28:
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r28,16
	ctx.r9.u64 = ctx.r28.u32 & 0xFFFF;
	// add r29,r10,r30
	ctx.r29.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// sth r9,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r9.u16);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// stb r11,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r11.u8);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// subf r28,r28,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r28.s64;
	// sth r9,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// beq 0x82bf1bdc
	if (ctx.cr0.eq) goto loc_82BF1BDC;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// lwzx r9,r9,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// stw r29,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r29.u32);
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x82bf1ba4
	if (!ctx.cr6.lt) goto loc_82BF1BA4;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// b 0x82bf1c18
	goto loc_82BF1C18;
loc_82BF1BA4:
	// lwz r11,384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = ctx.r27.s64 + 384;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_82BF1BB0:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf1c50
	if (ctx.cr6.eq) goto loc_82BF1C50;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bf1c50
	if (!ctx.cr6.gt) goto loc_82BF1C50;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf1bb0
	goto loc_82BF1BB0;
loc_82BF1BDC:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bf1cac
	if (ctx.cr0.eq) goto loc_82BF1CAC;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// sth r11,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x82bf1c74
	if (!ctx.cr6.lt) goto loc_82BF1C74;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
loc_82BF1C18:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bf1c50
	if (!ctx.cr6.eq) goto loc_82BF1C50;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u32);
loc_82BF1C50:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x82bf1e64
	goto loc_82BF1E64;
loc_82BF1C74:
	// lwz r11,384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// addi r10,r27,384
	ctx.r10.s64 = ctx.r27.s64 + 384;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_82BF1C80:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf1c50
	if (ctx.cr6.eq) goto loc_82BF1C50;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bf1c50
	if (!ctx.cr6.gt) goto loc_82BF1C50;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf1c80
	goto loc_82BF1C80;
loc_82BF1CAC:
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82bf1d18
	if (!ctx.cr6.eq) goto loc_82BF1D18;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82bf1d18
	if (!ctx.cr6.eq) goto loc_82BF1D18;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82bf1d18
	if (!ctx.cr6.lt) goto loc_82BF1D18;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u32);
loc_82BF1D18:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bf1d5c
	if (ctx.cr0.eq) goto loc_82BF1D5C;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
	// beq 0x82bf1d4c
	if (ctx.cr0.eq) goto loc_82BF1D4C;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x82bf1d4c
	if (!ctx.cr6.gt) goto loc_82BF1D4C;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
loc_82BF1D4C:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x833b7ad4
	ctx.lr = 0x82BF1D5C;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82BF1D5C:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,48(r27)
	PPC_STORE_U32(ctx.r27.u32 + 48, ctx.r11.u32);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x82bf1e6c
	if (ctx.cr6.gt) goto loc_82BF1E6C;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lbz r10,5(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82bf1da0
	if (!ctx.cr0.eq) goto loc_82BF1DA0;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// b 0x82bf1db4
	goto loc_82BF1DB4;
loc_82BF1DA0:
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r29,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r29.u32);
loc_82BF1DB4:
	// lbz r9,5(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x82bf1e0c
	if (!ctx.cr6.lt) goto loc_82BF1E0C;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bf1e44
	if (!ctx.cr6.eq) goto loc_82BF1E44;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u32);
	// b 0x82bf1e44
	goto loc_82BF1E44;
loc_82BF1E0C:
	// lwz r11,384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = ctx.r27.s64 + 384;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_82BF1E18:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf1e44
	if (ctx.cr6.eq) goto loc_82BF1E44;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82bf1e44
	if (!ctx.cr6.gt) goto loc_82BF1E44;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf1e18
	goto loc_82BF1E18;
loc_82BF1E44:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82BF1E64:
	// stw r11,48(r21)
	PPC_STORE_U32(ctx.r21.u32 + 48, ctx.r11.u32);
	// b 0x82bf2078
	goto loc_82BF2078;
loc_82BF1E6C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bee868
	ctx.lr = 0x82BF1E78;
	sub_82BEE868(ctx, base);
	// b 0x82bf2078
	goto loc_82BF2078;
loc_82BF1E7C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82bf1ea4
	if (!ctx.cr6.eq) goto loc_82BF1EA4;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82beebe0
	ctx.lr = 0x82BF1E9C;
	sub_82BEEBE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82bf2078
	if (!ctx.cr0.eq) goto loc_82BF2078;
loc_82BF1EA4:
	// rlwinm. r11,r23,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf1eb4
	if (ctx.cr0.eq) goto loc_82BF1EB4;
	// stw r19,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r19.u32);
	// b 0x82bf2080
	goto loc_82BF2080;
loc_82BF1EB4:
	// rlwinm r23,r23,0,14,1
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFC003FFFF;
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf1f7c
	if (ctx.cr0.eq) goto loc_82BF1F7C;
	// rlwinm r11,r23,0,23,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFF1FF;
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// lbz r9,5(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwimi r10,r9,4,20,22
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0xE00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF1FF);
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// or r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
	// beq 0x82bf1ef8
	if (ctx.cr0.eq) goto loc_82BF1EF8;
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82bf1f08
	goto loc_82BF1F08;
loc_82BF1EF8:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_82BF1F08:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bf1f34
	if (ctx.cr0.eq) goto loc_82BF1F34;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82bf1f34
	if (!ctx.cr0.eq) goto loc_82BF1F34;
	// rlwinm r11,r11,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 | ctx.r23.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_82BF1F34:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf1f94
	goto loc_82BF1F94;
	// lwz r30,124(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// andi. r11,r11,253
	ctx.r11.u64 = ctx.r11.u64 & 253;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r26,364(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r20,356(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r23,348(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r27,340(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r21,84(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r24,80(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r25,92(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// b 0x82bf1f94
	goto loc_82BF1F94;
loc_82BF1F7C:
	// lbz r11,7(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bf1f94
	if (ctx.cr0.eq) goto loc_82BF1F94;
	// rlwinm r11,r11,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 | ctx.r23.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_82BF1F94:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r4,r23,0,29,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82befff0
	ctx.lr = 0x82BF1FA4;
	sub_82BEFFF0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82bf2070
	if (ctx.cr0.eq) goto loc_82BF2070;
	// lbz r10,-11(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + -11);
	// addi r11,r29,-16
	ctx.r11.s64 = ctx.r29.s64 + -16;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82bf2024
	if (ctx.cr0.eq) goto loc_82BF2024;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bf1fd0
	if (ctx.cr0.eq) goto loc_82BF1FD0;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// b 0x82bf1fe0
	goto loc_82BF1FE0;
loc_82BF1FD0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
loc_82BF1FE0:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82bf201c
	if (ctx.cr0.eq) goto loc_82BF201C;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf2000
	if (ctx.cr0.eq) goto loc_82BF2000;
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82bf2010
	goto loc_82BF2010;
loc_82BF2000:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_82BF2010:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82bf2024
	goto loc_82BF2024;
loc_82BF201C:
	// std r19,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r19.u64);
	// std r19,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r19.u64);
loc_82BF2024:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// blt cr6,0x82bf2034
	if (ctx.cr6.lt) goto loc_82BF2034;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82BF2034:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb1fe0
	ctx.lr = 0x82BF2040;
	sub_82CB1FE0(ctx, base);
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82bf2060
	if (!ctx.cr6.gt) goto loc_82BF2060;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf2060
	if (ctx.cr0.eq) goto loc_82BF2060;
	// subf r5,r25,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r25.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r25
	ctx.r3.u64 = ctx.r29.u64 + ctx.r25.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82BF2060;
	sub_82CB16F0(ctx, base);
loc_82BF2060:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bf12d8
	ctx.lr = 0x82BF2070;
	sub_82BF12D8(ctx, base);
loc_82BF2070:
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// stw r20,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r20.u32);
loc_82BF2078:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82bf20ac
	if (!ctx.cr6.eq) goto loc_82BF20AC;
loc_82BF2080:
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf20ac
	if (ctx.cr0.eq) goto loc_82BF20AC;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r19,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r19.u32);
	// stw r22,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r22.u32);
	// stw r19,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r19.u32);
	// stw r24,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r24.u32);
	// bl 0x833b7af4
	ctx.lr = 0x82BF20AC;
	__imp__RtlRaiseException(ctx, base);
loc_82BF20AC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf20c8
	goto loc_82BF20C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// lwz r21,84(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
loc_82BF20C8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	ctx.r12.s64 = ctx.r31.s64 + 320;
	// bl 0x82bf2100
	ctx.lr = 0x82BF20D4;
	sub_82BF2100(ctx, base);
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
loc_82BF20D8:
	// addi r1,r31,320
	ctx.r1.s64 = ctx.r31.s64 + 320;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1F44"))) PPC_WEAK_FUNC(sub_82BF1F44);
PPC_FUNC_IMPL(__imp__sub_82BF1F44) {
	PPC_FUNC_PROLOGUE();
	// lwz r30,124(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// andi. r11,r11,253
	ctx.r11.u64 = ctx.r11.u64 & 253;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r26,364(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r20,356(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r23,348(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r27,340(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r21,84(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r24,80(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r25,92(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// b 0x82bf1f94
	// ERROR 82BF1F94
	return;
}

__attribute__((alias("__imp__sub_82BF1F7C"))) PPC_WEAK_FUNC(sub_82BF1F7C);
PPC_FUNC_IMPL(__imp__sub_82BF1F7C) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,7(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82bf1f94
	if (ctx.cr0.eq) goto loc_82BF1F94;
	// rlwinm r11,r11,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 | ctx.r23.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_82BF1F94:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r4,r23,0,29,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82befff0
	ctx.lr = 0x82BF1FA4;
	sub_82BEFFF0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82bf2070
	if (ctx.cr0.eq) goto loc_82BF2070;
	// lbz r10,-11(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + -11);
	// addi r11,r29,-16
	ctx.r11.s64 = ctx.r29.s64 + -16;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82bf2024
	if (ctx.cr0.eq) goto loc_82BF2024;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82bf1fd0
	if (ctx.cr0.eq) goto loc_82BF1FD0;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// b 0x82bf1fe0
	goto loc_82BF1FE0;
loc_82BF1FD0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
loc_82BF1FE0:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82bf201c
	if (ctx.cr0.eq) goto loc_82BF201C;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf2000
	if (ctx.cr0.eq) goto loc_82BF2000;
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82bf2010
	goto loc_82BF2010;
loc_82BF2000:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_82BF2010:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82bf2024
	goto loc_82BF2024;
loc_82BF201C:
	// std r19,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r19.u64);
	// std r19,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r19.u64);
loc_82BF2024:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// blt cr6,0x82bf2034
	if (ctx.cr6.lt) goto loc_82BF2034;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82BF2034:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb1fe0
	ctx.lr = 0x82BF2040;
	sub_82CB1FE0(ctx, base);
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82bf2060
	if (!ctx.cr6.gt) goto loc_82BF2060;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf2060
	if (ctx.cr0.eq) goto loc_82BF2060;
	// subf r5,r25,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r25.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r25
	ctx.r3.u64 = ctx.r29.u64 + ctx.r25.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82BF2060;
	sub_82CB16F0(ctx, base);
loc_82BF2060:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bf12d8
	ctx.lr = 0x82BF2070;
	sub_82BF12D8(ctx, base);
loc_82BF2070:
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// stw r20,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r20.u32);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82bf20ac
	if (!ctx.cr6.eq) goto loc_82BF20AC;
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bf20ac
	if (ctx.cr0.eq) goto loc_82BF20AC;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r19,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r19.u32);
	// stw r22,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r22.u32);
	// stw r19,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r19.u32);
	// stw r24,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r24.u32);
	// bl 0x833b7af4
	ctx.lr = 0x82BF20AC;
	__imp__RtlRaiseException(ctx, base);
loc_82BF20AC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bf20c8
	// ERROR 82BF20C8
	return;
}

__attribute__((alias("__imp__sub_82BF20BC"))) PPC_WEAK_FUNC(sub_82BF20BC);
PPC_FUNC_IMPL(__imp__sub_82BF20BC) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// lwz r21,84(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	ctx.r12.s64 = ctx.r31.s64 + 320;
	// bl 0x82bf2100
	ctx.lr = 0x82BF20D4;
	sub_82BF2100(ctx, base);
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r1,r31,320
	ctx.r1.s64 = ctx.r31.s64 + 320;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF20E0"))) PPC_WEAK_FUNC(sub_82BF20E0);
PPC_FUNC_IMPL(__imp__sub_82BF20E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r21,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r21.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r21,84(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x82bf2118
	goto loc_82BF2118;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r21,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r21.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82BF2118:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf212c
	if (ctx.cr6.eq) goto loc_82BF212C;
	// lwz r3,1408(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1408);
	// bl 0x833b77f4
	ctx.lr = 0x82BF212C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82BF212C:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r21,-16(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2100"))) PPC_WEAK_FUNC(sub_82BF2100);
PPC_FUNC_IMPL(__imp__sub_82BF2100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r21,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r21.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf212c
	if (ctx.cr6.eq) goto loc_82BF212C;
	// lwz r3,1408(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1408);
	// bl 0x833b77f4
	ctx.lr = 0x82BF212C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82BF212C:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r21,-16(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2144"))) PPC_WEAK_FUNC(sub_82BF2144);
PPC_FUNC_IMPL(__imp__sub_82BF2144) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF216C"))) PPC_WEAK_FUNC(sub_82BF216C);
PPC_FUNC_IMPL(__imp__sub_82BF216C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2178"))) PPC_WEAK_FUNC(sub_82BF2178);
PPC_FUNC_IMPL(__imp__sub_82BF2178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// lwz r3,6100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6100);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2184"))) PPC_WEAK_FUNC(sub_82BF2184);
PPC_FUNC_IMPL(__imp__sub_82BF2184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF2188"))) PPC_WEAK_FUNC(sub_82BF2188);
PPC_FUNC_IMPL(__imp__sub_82BF2188) {
	PPC_FUNC_PROLOGUE();
	// b 0x82beb980
	sub_82BEB980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF218C"))) PPC_WEAK_FUNC(sub_82BF218C);
PPC_FUNC_IMPL(__imp__sub_82BF218C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF2190"))) PPC_WEAK_FUNC(sub_82BF2190);
PPC_FUNC_IMPL(__imp__sub_82BF2190) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82bf2198
	sub_82BF2198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF2198"))) PPC_WEAK_FUNC(sub_82BF2198);
PPC_FUNC_IMPL(__imp__sub_82BF2198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82BF21A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82bf2200
	ctx.lr = 0x82BF21B4;
	sub_82BF2200(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r29,r28,24
	ctx.r29.u64 = ctx.r28.u32 & 0xFF;
loc_82BF21BC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b7b04
	ctx.lr = 0x82BF21D0;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bf21ec
	if (ctx.cr0.lt) goto loc_82BF21EC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82bf21f4
	if (ctx.cr6.eq) goto loc_82BF21F4;
	// cmpwi cr6,r3,257
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 257, ctx.xer);
	// beq cr6,0x82bf21bc
	if (ctx.cr6.eq) goto loc_82BF21BC;
	// b 0x82bf21f4
	goto loc_82BF21F4;
loc_82BF21EC:
	// bl 0x82beb948
	ctx.lr = 0x82BF21F0;
	sub_82BEB948(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BF21F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF21FC"))) PPC_WEAK_FUNC(sub_82BF21FC);
PPC_FUNC_IMPL(__imp__sub_82BF21FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF2200"))) PPC_WEAK_FUNC(sub_82BF2200);
PPC_FUNC_IMPL(__imp__sub_82BF2200) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82bf2210
	if (!ctx.cr6.eq) goto loc_82BF2210;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BF2210:
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// mulli r11,r11,-10000
	ctx.r11.s64 = ctx.r11.s64 * -10000;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2220"))) PPC_WEAK_FUNC(sub_82BF2220);
PPC_FUNC_IMPL(__imp__sub_82BF2220) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82bf2240
	if (!ctx.cr6.eq) goto loc_82BF2240;
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x82bf2244
	goto loc_82BF2244;
loc_82BF2240:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
loc_82BF2244:
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF224C"))) PPC_WEAK_FUNC(sub_82BF224C);
PPC_FUNC_IMPL(__imp__sub_82BF224C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF2250"))) PPC_WEAK_FUNC(sub_82BF2250);
PPC_FUNC_IMPL(__imp__sub_82BF2250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r11,r11,8896
	ctx.r11.s64 = ctx.r11.s64 + 8896;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BF2264"))) PPC_WEAK_FUNC(sub_82BF2264);
PPC_FUNC_IMPL(__imp__sub_82BF2264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF2268"))) PPC_WEAK_FUNC(sub_82BF2268);
PPC_FUNC_IMPL(__imp__sub_82BF2268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r11,r11,8896
	ctx.r11.s64 = ctx.r11.s64 + 8896;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BF227C"))) PPC_WEAK_FUNC(sub_82BF227C);
PPC_FUNC_IMPL(__imp__sub_82BF227C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF2280"))) PPC_WEAK_FUNC(sub_82BF2280);
PPC_FUNC_IMPL(__imp__sub_82BF2280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,6016
	ctx.r11.s64 = ctx.r11.s64 + 6016;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2290"))) PPC_WEAK_FUNC(sub_82BF2290);
PPC_FUNC_IMPL(__imp__sub_82BF2290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF22A0"))) PPC_WEAK_FUNC(sub_82BF22A0);
PPC_FUNC_IMPL(__imp__sub_82BF22A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF22A8"))) PPC_WEAK_FUNC(sub_82BF22A8);
PPC_FUNC_IMPL(__imp__sub_82BF22A8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF22B0"))) PPC_WEAK_FUNC(sub_82BF22B0);
PPC_FUNC_IMPL(__imp__sub_82BF22B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF22B4"))) PPC_WEAK_FUNC(sub_82BF22B4);
PPC_FUNC_IMPL(__imp__sub_82BF22B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF22B8"))) PPC_WEAK_FUNC(sub_82BF22B8);
PPC_FUNC_IMPL(__imp__sub_82BF22B8) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82bf22f0
	if (ctx.cr0.eq) goto loc_82BF22F0;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BF22F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BF22F0:
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

__attribute__((alias("__imp__sub_82BF2308"))) PPC_WEAK_FUNC(sub_82BF2308);
PPC_FUNC_IMPL(__imp__sub_82BF2308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82c0e348
	ctx.lr = 0x82BF2328;
	sub_82C0E348(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bf2338
	if (!ctx.cr0.eq) goto loc_82BF2338;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bf2348
	goto loc_82BF2348;
loc_82BF2338:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c0e648
	ctx.lr = 0x82BF2344;
	sub_82C0E648(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BF2348:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2360"))) PPC_WEAK_FUNC(sub_82BF2360);
PPC_FUNC_IMPL(__imp__sub_82BF2360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6052
	ctx.r11.s64 = ctx.r11.s64 + 6052;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2384"))) PPC_WEAK_FUNC(sub_82BF2384);
PPC_FUNC_IMPL(__imp__sub_82BF2384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF2388"))) PPC_WEAK_FUNC(sub_82BF2388);
PPC_FUNC_IMPL(__imp__sub_82BF2388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2398"))) PPC_WEAK_FUNC(sub_82BF2398);
PPC_FUNC_IMPL(__imp__sub_82BF2398) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF23A0"))) PPC_WEAK_FUNC(sub_82BF23A0);
PPC_FUNC_IMPL(__imp__sub_82BF23A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF23A8"))) PPC_WEAK_FUNC(sub_82BF23A8);
PPC_FUNC_IMPL(__imp__sub_82BF23A8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF23B0"))) PPC_WEAK_FUNC(sub_82BF23B0);
PPC_FUNC_IMPL(__imp__sub_82BF23B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF23B8"))) PPC_WEAK_FUNC(sub_82BF23B8);
PPC_FUNC_IMPL(__imp__sub_82BF23B8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF23C0"))) PPC_WEAK_FUNC(sub_82BF23C0);
PPC_FUNC_IMPL(__imp__sub_82BF23C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF23C8"))) PPC_WEAK_FUNC(sub_82BF23C8);
PPC_FUNC_IMPL(__imp__sub_82BF23C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF23D0"))) PPC_WEAK_FUNC(sub_82BF23D0);
PPC_FUNC_IMPL(__imp__sub_82BF23D0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF23D8"))) PPC_WEAK_FUNC(sub_82BF23D8);
PPC_FUNC_IMPL(__imp__sub_82BF23D8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF23E0"))) PPC_WEAK_FUNC(sub_82BF23E0);
PPC_FUNC_IMPL(__imp__sub_82BF23E0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF23E8"))) PPC_WEAK_FUNC(sub_82BF23E8);
PPC_FUNC_IMPL(__imp__sub_82BF23E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF23F0"))) PPC_WEAK_FUNC(sub_82BF23F0);
PPC_FUNC_IMPL(__imp__sub_82BF23F0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF23F8"))) PPC_WEAK_FUNC(sub_82BF23F8);
PPC_FUNC_IMPL(__imp__sub_82BF23F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2400"))) PPC_WEAK_FUNC(sub_82BF2400);
PPC_FUNC_IMPL(__imp__sub_82BF2400) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,9(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2408"))) PPC_WEAK_FUNC(sub_82BF2408);
PPC_FUNC_IMPL(__imp__sub_82BF2408) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2410"))) PPC_WEAK_FUNC(sub_82BF2410);
PPC_FUNC_IMPL(__imp__sub_82BF2410) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2418"))) PPC_WEAK_FUNC(sub_82BF2418);
PPC_FUNC_IMPL(__imp__sub_82BF2418) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2420"))) PPC_WEAK_FUNC(sub_82BF2420);
PPC_FUNC_IMPL(__imp__sub_82BF2420) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2428"))) PPC_WEAK_FUNC(sub_82BF2428);
PPC_FUNC_IMPL(__imp__sub_82BF2428) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2430"))) PPC_WEAK_FUNC(sub_82BF2430);
PPC_FUNC_IMPL(__imp__sub_82BF2430) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2438"))) PPC_WEAK_FUNC(sub_82BF2438);
PPC_FUNC_IMPL(__imp__sub_82BF2438) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2440"))) PPC_WEAK_FUNC(sub_82BF2440);
PPC_FUNC_IMPL(__imp__sub_82BF2440) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b6e518
	sub_82B6E518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF2444"))) PPC_WEAK_FUNC(sub_82BF2444);
PPC_FUNC_IMPL(__imp__sub_82BF2444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF2448"))) PPC_WEAK_FUNC(sub_82BF2448);
PPC_FUNC_IMPL(__imp__sub_82BF2448) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2450"))) PPC_WEAK_FUNC(sub_82BF2450);
PPC_FUNC_IMPL(__imp__sub_82BF2450) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b6e518
	sub_82B6E518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF2454"))) PPC_WEAK_FUNC(sub_82BF2454);
PPC_FUNC_IMPL(__imp__sub_82BF2454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF2458"))) PPC_WEAK_FUNC(sub_82BF2458);
PPC_FUNC_IMPL(__imp__sub_82BF2458) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2460"))) PPC_WEAK_FUNC(sub_82BF2460);
PPC_FUNC_IMPL(__imp__sub_82BF2460) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b6e518
	sub_82B6E518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF2464"))) PPC_WEAK_FUNC(sub_82BF2464);
PPC_FUNC_IMPL(__imp__sub_82BF2464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF2468"))) PPC_WEAK_FUNC(sub_82BF2468);
PPC_FUNC_IMPL(__imp__sub_82BF2468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,8884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BF2478"))) PPC_WEAK_FUNC(sub_82BF2478);
PPC_FUNC_IMPL(__imp__sub_82BF2478) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2480"))) PPC_WEAK_FUNC(sub_82BF2480);
PPC_FUNC_IMPL(__imp__sub_82BF2480) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF2488"))) PPC_WEAK_FUNC(sub_82BF2488);
PPC_FUNC_IMPL(__imp__sub_82BF2488) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// blr 
	return;
}

