#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8321DE48"))) PPC_WEAK_FUNC(sub_8321DE48);
PPC_FUNC_IMPL(__imp__sub_8321DE48) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8321de88
	if (ctx.cr0.eq) goto loc_8321DE88;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8321DE88:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8321DE98"))) PPC_WEAK_FUNC(sub_8321DE98);
PPC_FUNC_IMPL(__imp__sub_8321DE98) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8321DEB0"))) PPC_WEAK_FUNC(sub_8321DEB0);
PPC_FUNC_IMPL(__imp__sub_8321DEB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8321DEC4"))) PPC_WEAK_FUNC(sub_8321DEC4);
PPC_FUNC_IMPL(__imp__sub_8321DEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8321DEC8"))) PPC_WEAK_FUNC(sub_8321DEC8);
PPC_FUNC_IMPL(__imp__sub_8321DEC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321dedc
	if (ctx.cr0.eq) goto loc_8321DEDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8321DEDC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8321DEEC"))) PPC_WEAK_FUNC(sub_8321DEEC);
PPC_FUNC_IMPL(__imp__sub_8321DEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8321DEF0"))) PPC_WEAK_FUNC(sub_8321DEF0);
PPC_FUNC_IMPL(__imp__sub_8321DEF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8321DF04"))) PPC_WEAK_FUNC(sub_8321DF04);
PPC_FUNC_IMPL(__imp__sub_8321DF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8321DF08"))) PPC_WEAK_FUNC(sub_8321DF08);
PPC_FUNC_IMPL(__imp__sub_8321DF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r4,12
	ctx.r30.s64 = ctx.r4.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82299698
	ctx.lr = 0x8321DF30;
	sub_82299698(ctx, base);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r10,r31,152
	ctx.r10.s64 = ctx.r31.s64 + 152;
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8321DF7C"))) PPC_WEAK_FUNC(sub_8321DF7C);
PPC_FUNC_IMPL(__imp__sub_8321DF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8321DF80"))) PPC_WEAK_FUNC(sub_8321DF80);
PPC_FUNC_IMPL(__imp__sub_8321DF80) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,132
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 132, ctx.xer);
	// ble cr6,0x8321dfa4
	if (!ctx.cr6.gt) goto loc_8321DFA4;
	// bl 0x8321df08
	ctx.lr = 0x8321DFA0;
	sub_8321DF08(ctx, base);
	// b 0x8321e00c
	goto loc_8321E00C;
loc_8321DFA4:
	// lwz r9,140(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8321dfcc
	if (ctx.cr6.lt) goto loc_8321DFCC;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r9,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
	// b 0x8321e00c
	goto loc_8321E00C;
loc_8321DFCC:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8321e004
	if (ctx.cr6.eq) goto loc_8321E004;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x8321DFFC;
	sub_82CB16F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8321e00c
	goto loc_8321E00C;
loc_8321E004:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8321d298
	ctx.lr = 0x8321E00C;
	sub_8321D298(ctx, base);
loc_8321E00C:
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

__attribute__((alias("__imp__sub_8321E020"))) PPC_WEAK_FUNC(sub_8321E020);
PPC_FUNC_IMPL(__imp__sub_8321E020) {
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
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r4,132
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 132, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ble cr6,0x8321e04c
	if (!ctx.cr6.gt) goto loc_8321E04C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8321df08
	ctx.lr = 0x8321E048;
	sub_8321DF08(ctx, base);
	// b 0x8321e0b8
	goto loc_8321E0B8;
loc_8321E04C:
	// lwz r9,140(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8321e070
	if (ctx.cr6.lt) goto loc_8321E070;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r9,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
	// b 0x8321e0b4
	goto loc_8321E0B4;
loc_8321E070:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8321e0a8
	if (ctx.cr6.eq) goto loc_8321E0A8;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x8321E0A0;
	sub_82CB16F0(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8321e0b4
	goto loc_8321E0B4;
loc_8321E0A8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8321d298
	ctx.lr = 0x8321E0B0;
	sub_8321D298(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8321E0B4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8321E0B8:
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

__attribute__((alias("__imp__sub_8321E0CC"))) PPC_WEAK_FUNC(sub_8321E0CC);
PPC_FUNC_IMPL(__imp__sub_8321E0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8321E0D0"))) PPC_WEAK_FUNC(sub_8321E0D0);
PPC_FUNC_IMPL(__imp__sub_8321E0D0) {
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
	// addi r11,r3,948
	ctx.r11.s64 = ctx.r3.s64 + 948;
	// cmplwi cr6,r4,132
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 132, ctx.xer);
	// ble cr6,0x8321e0f8
	if (!ctx.cr6.gt) goto loc_8321E0F8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8321df08
	ctx.lr = 0x8321E0F4;
	sub_8321DF08(ctx, base);
	// b 0x8321e164
	goto loc_8321E164;
loc_8321E0F8:
	// lwz r9,140(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8321e11c
	if (ctx.cr6.lt) goto loc_8321E11C;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r9,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
	// b 0x8321e160
	goto loc_8321E160;
loc_8321E11C:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8321e154
	if (ctx.cr6.eq) goto loc_8321E154;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x8321E14C;
	sub_82CB16F0(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8321e160
	goto loc_8321E160;
loc_8321E154:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8321d298
	ctx.lr = 0x8321E15C;
	sub_8321D298(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8321E160:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8321E164:
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

__attribute__((alias("__imp__sub_8321E178"))) PPC_WEAK_FUNC(sub_8321E178);
PPC_FUNC_IMPL(__imp__sub_8321E178) {
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
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// addi r11,r3,948
	ctx.r11.s64 = ctx.r3.s64 + 948;
	// rlwinm r4,r10,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r4,132
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 132, ctx.xer);
	// ble cr6,0x8321e1a8
	if (!ctx.cr6.gt) goto loc_8321E1A8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8321df08
	ctx.lr = 0x8321E1A4;
	sub_8321DF08(ctx, base);
	// b 0x8321e214
	goto loc_8321E214;
loc_8321E1A8:
	// lwz r9,140(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8321e1cc
	if (ctx.cr6.lt) goto loc_8321E1CC;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r9,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
	// b 0x8321e210
	goto loc_8321E210;
loc_8321E1CC:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8321e204
	if (ctx.cr6.eq) goto loc_8321E204;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x8321E1FC;
	sub_82CB16F0(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8321e210
	goto loc_8321E210;
loc_8321E204:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8321d298
	ctx.lr = 0x8321E20C;
	sub_8321D298(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8321E210:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8321E214:
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

__attribute__((alias("__imp__sub_8321E228"))) PPC_WEAK_FUNC(sub_8321E228);
PPC_FUNC_IMPL(__imp__sub_8321E228) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8321E23C"))) PPC_WEAK_FUNC(sub_8321E23C);
PPC_FUNC_IMPL(__imp__sub_8321E23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8321E240"))) PPC_WEAK_FUNC(sub_8321E240);
PPC_FUNC_IMPL(__imp__sub_8321E240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x8321E248;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r20,1
	ctx.r20.s64 = 1;
loc_8321E258:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8321e26c
	if (!ctx.cr0.eq) goto loc_8321E26C;
loc_8321E268:
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_8321E26C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8321e620
	if (ctx.cr6.eq) goto loc_8321E620;
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8321e5ec
	if (!ctx.cr0.eq) goto loc_8321E5EC;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8321e5ec
	if (ctx.cr0.eq) goto loc_8321E5EC;
loc_8321E28C:
	// lwz r5,8(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r5,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,13312
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13312, ctx.xer);
	// bne cr6,0x8321e5d0
	if (!ctx.cr6.eq) goto loc_8321E5D0;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8321e604
	if (ctx.cr6.eq) goto loc_8321E604;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_8321E2B0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8321e30c
	if (ctx.cr6.eq) goto loc_8321E30C;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8321e304
	if (ctx.cr6.eq) goto loc_8321E304;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm. r11,r10,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321e304
	if (ctx.cr0.eq) goto loc_8321E304;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8321e300
	if (ctx.cr6.eq) goto loc_8321E300;
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_8321E2E4:
	// srw r4,r9,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r4,r20,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r4.u8 & 0x3F));
	// or r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 | ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x8321e2e4
	if (!ctx.cr0.eq) goto loc_8321E2E4;
loc_8321E300:
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
loc_8321E304:
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// b 0x8321e2b0
	goto loc_8321E2B0;
loc_8321E30C:
	// rlwinm r10,r5,31,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0xF;
	// lwz r11,44(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8321e330
	if (!ctx.cr6.eq) goto loc_8321E330;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,21,11,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1FFFFF;
	// xor r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r5.u64;
	// rlwinm. r10,r10,0,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8321e5d0
	if (ctx.cr0.eq) goto loc_8321E5D0;
loc_8321E330:
	// lwz r26,12(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// b 0x8321e410
	goto loc_8321E410;
loc_8321E340:
	// lwz r29,44(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// lwz r4,48(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8321cb38
	ctx.lr = 0x8321E350;
	sub_8321CB38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321e420
	if (ctx.cr0.eq) goto loc_8321E420;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_8321E35C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8321e388
	if (ctx.cr6.eq) goto loc_8321E388;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8321e378
	if (ctx.cr6.eq) goto loc_8321E378;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8321e380
	if (!ctx.cr6.eq) goto loc_8321E380;
loc_8321E378:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8321e35c
	goto loc_8321E35C;
loc_8321E380:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x8321e38c
	goto loc_8321E38C;
loc_8321E388:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8321E38C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8321e420
	if (!ctx.cr0.eq) goto loc_8321E420;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// rlwinm r5,r8,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	// rlwinm r11,r31,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0xF;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
loc_8321E3AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8321e404
	if (ctx.cr6.eq) goto loc_8321E404;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// andc r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// subfic r6,r6,31
	ctx.xer.ca = ctx.r6.u32 <= 31;
	ctx.r6.s64 = 31 - ctx.r6.s64;
	// slw r6,r20,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r6.u8 & 0x3F));
	// and. r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 & ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8321e3e4
	if (ctx.cr0.eq) goto loc_8321E3E4;
	// rlwinm r6,r8,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// srw r6,r6,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// slw r6,r20,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
loc_8321E3E4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8321e404
	if (!ctx.cr6.lt) goto loc_8321E404;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// andc r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// b 0x8321e3ac
	goto loc_8321E3AC;
loc_8321E404:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r26,12(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_8321E410:
	// lwz r31,8(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r31,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 384, ctx.xer);
	// beq cr6,0x8321e340
	if (ctx.cr6.eq) goto loc_8321E340;
loc_8321E420:
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r9,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x8321e5d0
	if (!ctx.cr6.eq) goto loc_8321E5D0;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_8321E434:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8321e460
	if (ctx.cr6.eq) goto loc_8321E460;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8321e450
	if (ctx.cr6.eq) goto loc_8321E450;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8321e458
	if (!ctx.cr6.eq) goto loc_8321E458;
loc_8321E450:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8321e434
	goto loc_8321E434;
loc_8321E458:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x8321e464
	goto loc_8321E464;
loc_8321E460:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8321E464:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8321e5d0
	if (!ctx.cr0.eq) goto loc_8321E5D0;
	// rlwinm r11,r9,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xF;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8321e5d0
	if (ctx.cr6.eq) goto loc_8321E5D0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// addi r28,r26,44
	ctx.r28.s64 = ctx.r26.s64 + 44;
	// std r21,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r21.u64);
	// std r21,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r21.u64);
loc_8321E490:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8321e558
	if (!ctx.cr6.lt) goto loc_8321E558;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// slw r30,r20,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r30,r25
	ctx.r11.u64 = ctx.r30.u64 & ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8321e548
	if (!ctx.cr0.eq) goto loc_8321E548;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15360
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15360, ctx.xer);
	// beq cr6,0x8321e548
	if (ctx.cr6.eq) goto loc_8321E548;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// addi r5,r23,16
	ctx.r5.s64 = ctx.r23.s64 + 16;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832f02e0
	ctx.lr = 0x8321E4EC;
	sub_832F02E0(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// rlwinm r10,r10,0,31,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE1;
	// rlwimi r11,r30,1,27,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 1) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8321e51c
	goto loc_8321E51C;
loc_8321E514:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_8321E51C:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8321e514
	if (!ctx.cr6.eq) goto loc_8321E514;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8321E548:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x8321e490
	goto loc_8321E490;
loc_8321E558:
	// lwz r11,40(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// rlwinm r27,r11,20,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// stw r10,40(r22)
	PPC_STORE_U32(ctx.r22.u32 + 40, ctx.r10.u32);
	// li r28,4
	ctx.r28.s64 = 4;
loc_8321E574:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8321e5b0
	if (ctx.cr6.eq) goto loc_8321E5B0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x8321e5b0
	if (ctx.cr6.eq) goto loc_8321E5B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d798
	ctx.lr = 0x8321E598;
	sub_8321D798(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321e5b0
	if (ctx.cr0.eq) goto loc_8321E5B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832f6f50
	ctx.lr = 0x8321E5AC;
	sub_832F6F50(ctx, base);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_8321E5B0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8321e574
	if (!ctx.cr0.eq) goto loc_8321E574;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8321daf0
	ctx.lr = 0x8321E5C8;
	sub_8321DAF0(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8321e258
	if (!ctx.cr0.eq) goto loc_8321E258;
loc_8321E5D0:
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8321e5ec
	if (!ctx.cr0.eq) goto loc_8321E5EC;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8321e28c
	if (!ctx.cr6.eq) goto loc_8321E28C;
loc_8321E5EC:
	// rlwinm r11,r23,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8321e268
	if (ctx.cr0.eq) goto loc_8321E268;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// b 0x8321e26c
	goto loc_8321E26C;
loc_8321E604:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r11.u32);
	// bl 0x832f6f50
	ctx.lr = 0x8321E61C;
	sub_832F6F50(ctx, base);
	// b 0x8321e258
	goto loc_8321E258;
loc_8321E620:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8321E628"))) PPC_WEAK_FUNC(sub_8321E628);
PPC_FUNC_IMPL(__imp__sub_8321E628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8321E630;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8321e71c
	if (ctx.cr6.eq) goto loc_8321E71C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832050d8
	ctx.lr = 0x8321E65C;
	sub_832050D8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8321e71c
	if (ctx.cr0.eq) goto loc_8321E71C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321d038
	ctx.lr = 0x8321E674;
	sub_8321D038(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321e71c
	if (ctx.cr0.eq) goto loc_8321E71C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi. r4,r11,13
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8321e694
	if (!ctx.cr0.eq) goto loc_8321E694;
	// li r29,-1
	ctx.r29.s64 = -1;
	// b 0x8321e6a0
	goto loc_8321E6A0;
loc_8321E694:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321d0b8
	ctx.lr = 0x8321E69C;
	sub_8321D0B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8321E6A0:
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8321e6fc
	if (!ctx.cr0.eq) goto loc_8321E6FC;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r10,-40
	ctx.xer.ca = ctx.r10.u32 > 39;
	ctx.r31.s64 = ctx.r10.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8321e6fc
	if (ctx.cr0.eq) goto loc_8321E6FC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14976
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14976, ctx.xer);
	// bne cr6,0x8321e6fc
	if (!ctx.cr6.eq) goto loc_8321E6FC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321ce60
	ctx.lr = 0x8321E6E4;
	sub_8321CE60(ctx, base);
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8321E6FC:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831fc518
	ctx.lr = 0x8321E71C;
	sub_831FC518(ctx, base);
loc_8321E71C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8321E724"))) PPC_WEAK_FUNC(sub_8321E724);
PPC_FUNC_IMPL(__imp__sub_8321E724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8321E728"))) PPC_WEAK_FUNC(sub_8321E728);
PPC_FUNC_IMPL(__imp__sub_8321E728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8321E730;
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
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// bl 0x82e73878
	ctx.lr = 0x8321E748;
	sub_82E73878(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321e628
	ctx.lr = 0x8321E764;
	sub_8321E628(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8321E770"))) PPC_WEAK_FUNC(sub_8321E770);
PPC_FUNC_IMPL(__imp__sub_8321E770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8321E778;
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
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// bl 0x82e735e0
	ctx.lr = 0x8321E790;
	sub_82E735E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321e628
	ctx.lr = 0x8321E7AC;
	sub_8321E628(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8321E7B8"))) PPC_WEAK_FUNC(sub_8321E7B8);
PPC_FUNC_IMPL(__imp__sub_8321E7B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8321E7C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// bl 0x82e735b0
	ctx.lr = 0x8321E7D8;
	sub_82E735B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321e628
	ctx.lr = 0x8321E7F4;
	sub_8321E628(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8321E800"))) PPC_WEAK_FUNC(sub_8321E800);
PPC_FUNC_IMPL(__imp__sub_8321E800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8321E808;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// bl 0x82e735c8
	ctx.lr = 0x8321E820;
	sub_82E735C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321e628
	ctx.lr = 0x8321E83C;
	sub_8321E628(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8321E848"))) PPC_WEAK_FUNC(sub_8321E848);
PPC_FUNC_IMPL(__imp__sub_8321E848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8321E850;
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
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// bl 0x82e73598
	ctx.lr = 0x8321E868;
	sub_82E73598(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321e628
	ctx.lr = 0x8321E884;
	sub_8321E628(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8321E890"))) PPC_WEAK_FUNC(sub_8321E890);
PPC_FUNC_IMPL(__imp__sub_8321E890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8321E898;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8321e930
	if (!ctx.cr6.lt) goto loc_8321E930;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15744
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15744, ctx.xer);
	// beq cr6,0x8321e8d0
	if (ctx.cr6.eq) goto loc_8321E8D0;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x83204d78
	ctx.lr = 0x8321E8D0;
	sub_83204D78(ctx, base);
loc_8321E8D0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 756);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwimi r11,r28,25,3,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 25) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r10,r10,51200
	ctx.r10.u64 = ctx.r10.u64 | 3355443200;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82e735e0
	ctx.lr = 0x8321E90C;
	sub_82E735E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321e628
	ctx.lr = 0x8321E928;
	sub_8321E628(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_8321E930:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8321E93C"))) PPC_WEAK_FUNC(sub_8321E93C);
PPC_FUNC_IMPL(__imp__sub_8321E93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8321E940"))) PPC_WEAK_FUNC(sub_8321E940);
PPC_FUNC_IMPL(__imp__sub_8321E940) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8321e954
	if (ctx.cr0.eq) goto loc_8321E954;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8321E954:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8321E964"))) PPC_WEAK_FUNC(sub_8321E964);
PPC_FUNC_IMPL(__imp__sub_8321E964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8321E968"))) PPC_WEAK_FUNC(sub_8321E968);
PPC_FUNC_IMPL(__imp__sub_8321E968) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8321E980"))) PPC_WEAK_FUNC(sub_8321E980);
PPC_FUNC_IMPL(__imp__sub_8321E980) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8321e990
	if (ctx.cr0.eq) goto loc_8321E990;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8321E990:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8321E99C"))) PPC_WEAK_FUNC(sub_8321E99C);
PPC_FUNC_IMPL(__imp__sub_8321E99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8321E9A0"))) PPC_WEAK_FUNC(sub_8321E9A0);
PPC_FUNC_IMPL(__imp__sub_8321E9A0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321e9c4
	if (ctx.cr0.eq) goto loc_8321E9C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8321e9d0
	goto loc_8321E9D0;
loc_8321E9C4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_8321E9D0:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8321ea20
	if (!ctx.cr0.eq) goto loc_8321EA20;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83204d00
	ctx.lr = 0x8321EA20;
	sub_83204D00(ctx, base);
loc_8321EA20:
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

__attribute__((alias("__imp__sub_8321EA38"))) PPC_WEAK_FUNC(sub_8321EA38);
PPC_FUNC_IMPL(__imp__sub_8321EA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r4,10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bgt cr6,0x8321ea60
	if (ctx.cr6.gt) goto loc_8321EA60;
	// li r30,10
	ctx.r30.s64 = 10;
loc_8321EA60:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8321e020
	ctx.lr = 0x8321EA70;
	sub_8321E020(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// ori r8,r31,1
	ctx.r8.u64 = ctx.r31.u64 | 1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8321EABC"))) PPC_WEAK_FUNC(sub_8321EABC);
PPC_FUNC_IMPL(__imp__sub_8321EABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8321EAC0"))) PPC_WEAK_FUNC(sub_8321EAC0);
PPC_FUNC_IMPL(__imp__sub_8321EAC0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8321ead4
	if (ctx.cr0.eq) goto loc_8321EAD4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8321EAD4:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8321EAE4"))) PPC_WEAK_FUNC(sub_8321EAE4);
PPC_FUNC_IMPL(__imp__sub_8321EAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8321EAE8"))) PPC_WEAK_FUNC(sub_8321EAE8);
PPC_FUNC_IMPL(__imp__sub_8321EAE8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8321EB00"))) PPC_WEAK_FUNC(sub_8321EB00);
PPC_FUNC_IMPL(__imp__sub_8321EB00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8321eb10
	if (ctx.cr0.eq) goto loc_8321EB10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8321EB10:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8321EB1C"))) PPC_WEAK_FUNC(sub_8321EB1C);
PPC_FUNC_IMPL(__imp__sub_8321EB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8321EB20"))) PPC_WEAK_FUNC(sub_8321EB20);
PPC_FUNC_IMPL(__imp__sub_8321EB20) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321eb44
	if (ctx.cr0.eq) goto loc_8321EB44;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8321eb50
	goto loc_8321EB50;
loc_8321EB44:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_8321EB50:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8321eba0
	if (!ctx.cr0.eq) goto loc_8321EBA0;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83204d00
	ctx.lr = 0x8321EBA0;
	sub_83204D00(ctx, base);
loc_8321EBA0:
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

__attribute__((alias("__imp__sub_8321EBB8"))) PPC_WEAK_FUNC(sub_8321EBB8);
PPC_FUNC_IMPL(__imp__sub_8321EBB8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8321ebfc
	if (!ctx.cr0.eq) goto loc_8321EBFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321ebfc
	if (ctx.cr0.eq) goto loc_8321EBFC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8321ec08
	if (!ctx.cr6.gt) goto loc_8321EC08;
loc_8321EBFC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8321ea38
	ctx.lr = 0x8321EC04;
	sub_8321EA38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8321EC08:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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

__attribute__((alias("__imp__sub_8321EC34"))) PPC_WEAK_FUNC(sub_8321EC34);
PPC_FUNC_IMPL(__imp__sub_8321EC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8321EC38"))) PPC_WEAK_FUNC(sub_8321EC38);
PPC_FUNC_IMPL(__imp__sub_8321EC38) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8321ec7c
	if (!ctx.cr0.eq) goto loc_8321EC7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321ec7c
	if (ctx.cr0.eq) goto loc_8321EC7C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8321ec88
	if (!ctx.cr6.gt) goto loc_8321EC88;
loc_8321EC7C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8321ea38
	ctx.lr = 0x8321EC84;
	sub_8321EA38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8321EC88:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8321ECB4"))) PPC_WEAK_FUNC(sub_8321ECB4);
PPC_FUNC_IMPL(__imp__sub_8321ECB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8321ECB8"))) PPC_WEAK_FUNC(sub_8321ECB8);
PPC_FUNC_IMPL(__imp__sub_8321ECB8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8321ecfc
	if (!ctx.cr0.eq) goto loc_8321ECFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321ecfc
	if (ctx.cr0.eq) goto loc_8321ECFC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8321ed08
	if (!ctx.cr6.gt) goto loc_8321ED08;
loc_8321ECFC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8321ea38
	ctx.lr = 0x8321ED04;
	sub_8321EA38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8321ED08:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8321ED34"))) PPC_WEAK_FUNC(sub_8321ED34);
PPC_FUNC_IMPL(__imp__sub_8321ED34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8321ED38"))) PPC_WEAK_FUNC(sub_8321ED38);
PPC_FUNC_IMPL(__imp__sub_8321ED38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8321ED40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x8321ED58;
	sub_8321D6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// ori r11,r29,1
	ctx.r11.u64 = ctx.r29.u64 | 1;
	// ori r10,r28,1
	ctx.r10.u64 = ctx.r28.u64 | 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_8321ED70:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r9,r8,24
	ctx.r9.s64 = ctx.r8.s64 + 24;
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8321edf4
	if (!ctx.cr0.eq) goto loc_8321EDF4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8321edf4
	if (ctx.cr0.eq) goto loc_8321EDF4;
loc_8321ED90:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8321edac
	if (ctx.cr6.lt) goto loc_8321EDAC;
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8321edb0
	if (!ctx.cr6.gt) goto loc_8321EDB0;
loc_8321EDAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8321EDB0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8321efac
	if (!ctx.cr0.eq) goto loc_8321EFAC;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// blt cr6,0x8321edcc
	if (ctx.cr6.lt) goto loc_8321EDCC;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8321edd0
	if (!ctx.cr6.gt) goto loc_8321EDD0;
loc_8321EDCC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8321EDD0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8321efac
	if (!ctx.cr0.eq) goto loc_8321EFAC;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8321edf4
	if (!ctx.cr0.eq) goto loc_8321EDF4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8321ed90
	if (!ctx.cr6.eq) goto loc_8321ED90;
loc_8321EDF4:
	// lwz r30,12(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8321ee10
	if (ctx.cr6.eq) goto loc_8321EE10;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8321ee14
	if (ctx.cr6.eq) goto loc_8321EE14;
loc_8321EE10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8321EE14:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321ee2c
	if (ctx.cr0.eq) goto loc_8321EE2C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8321ef30
	if (ctx.cr6.eq) goto loc_8321EF30;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8321ef28
	goto loc_8321EF28;
loc_8321EE2C:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8321ef14
	if (!ctx.cr0.eq) goto loc_8321EF14;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8321ef14
	if (ctx.cr0.eq) goto loc_8321EF14;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,86
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 86, ctx.xer);
	// beq cr6,0x8321ee64
	if (ctx.cr6.eq) goto loc_8321EE64;
	// cmplwi cr6,r10,87
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 87, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8321ee68
	if (!ctx.cr6.eq) goto loc_8321EE68;
loc_8321EE64:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8321EE68:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321ef14
	if (ctx.cr0.eq) goto loc_8321EF14;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x8321EE88;
	sub_8321CE60(ctx, base);
	// addi r10,r31,-12
	ctx.r10.s64 = ctx.r31.s64 + -12;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r31,28(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
loc_8321EE9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8321eeb8
	if (ctx.cr6.eq) goto loc_8321EEB8;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8321eebc
	if (!ctx.cr6.eq) goto loc_8321EEBC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8321ee9c
	goto loc_8321EE9C;
loc_8321EEB8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8321EEBC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8321eeec
	if (!ctx.cr0.eq) goto loc_8321EEEC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8321eeec
	if (ctx.cr0.eq) goto loc_8321EEEC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8321eef8
	if (!ctx.cr6.gt) goto loc_8321EEF8;
loc_8321EEEC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8321ea38
	ctx.lr = 0x8321EEF8;
	sub_8321EA38(ctx, base);
loc_8321EEF8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r30,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r30.u32);
	// b 0x8321ef28
	goto loc_8321EF28;
loc_8321EF14:
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8321ef30
	if (!ctx.cr0.eq) goto loc_8321EF30;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8321EF28:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8321ed70
	if (!ctx.cr6.eq) goto loc_8321ED70;
loc_8321EF30:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8321efa8
	if (!ctx.cr0.eq) goto loc_8321EFA8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8321efa8
	if (ctx.cr0.eq) goto loc_8321EFA8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8321ed70
	if (!ctx.cr0.eq) goto loc_8321ED70;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83204d00
	ctx.lr = 0x8321EFA4;
	sub_83204D00(ctx, base);
	// b 0x8321ed70
	goto loc_8321ED70;
loc_8321EFA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8321EFAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8321EFB4"))) PPC_WEAK_FUNC(sub_8321EFB4);
PPC_FUNC_IMPL(__imp__sub_8321EFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8321EFB8"))) PPC_WEAK_FUNC(sub_8321EFB8);
PPC_FUNC_IMPL(__imp__sub_8321EFB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x8321EFC0;
	__savegprlr_14(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stw r23,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r23.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r25,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r25.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,44(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 44);
	// li r14,1
	ctx.r14.s64 = 1;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8321effc
	if (ctx.cr0.eq) goto loc_8321EFFC;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// beq 0x8321f000
	if (ctx.cr0.eq) goto loc_8321F000;
loc_8321EFFC:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8321F000:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321f034
	if (ctx.cr0.eq) goto loc_8321F034;
	// li r4,192
	ctx.r4.s64 = 192;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8321f018
	if (ctx.cr6.eq) goto loc_8321F018;
	// li r4,193
	ctx.r4.s64 = 193;
loc_8321F018:
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e6ac60
	ctx.lr = 0x8321F020;
	sub_82E6AC60(ctx, base);
	// lwz r3,16(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8321f034
	if (ctx.cr6.eq) goto loc_8321F034;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831f7218
	ctx.lr = 0x8321F034;
	sub_831F7218(ctx, base);
loc_8321F034:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8321f044
	if (ctx.cr0.eq) goto loc_8321F044;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8321F044:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8321f110
	if (!ctx.cr0.eq) goto loc_8321F110;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8321f110
	if (ctx.cr0.eq) goto loc_8321F110;
loc_8321F05C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16000, ctx.xer);
	// bne cr6,0x8321f0f4
	if (!ctx.cr6.eq) goto loc_8321F0F4;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8321f0f4
	if (ctx.cr6.eq) goto loc_8321F0F4;
	// rlwinm. r10,r11,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq 0x8321f0b4
	if (ctx.cr0.eq) goto loc_8321F0B4;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// addi r8,r31,44
	ctx.r8.s64 = ctx.r31.s64 + 44;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8321F094:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x8321f094
	if (!ctx.cr0.eq) goto loc_8321F094;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x8321f0e0
	if (!ctx.cr6.lt) goto loc_8321F0E0;
loc_8321F0B4:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// subfic r11,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r11.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8321f0e0
	if (ctx.cr6.eq) goto loc_8321F0E0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8321F0D4:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8321f0d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8321F0D4;
loc_8321F0E0:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// rlwinm r4,r11,15,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// bl 0x82e6e6a8
	ctx.lr = 0x8321F0F4;
	sub_82E6E6A8(ctx, base);
loc_8321F0F4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8321f110
	if (!ctx.cr0.eq) goto loc_8321F110;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8321f05c
	if (!ctx.cr6.eq) goto loc_8321F05C;
loc_8321F110:
	// lwz r11,48(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// lis r17,-1
	ctx.r17.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x8321f180
	if (ctx.cr6.eq) goto loc_8321F180;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8321f180
	if (!ctx.cr6.eq) goto loc_8321F180;
	// lwz r11,336(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 336);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8321f180
	if (!ctx.cr6.gt) goto loc_8321F180;
	// addi r31,r16,124
	ctx.r31.s64 = ctx.r16.s64 + 124;
loc_8321F140:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r4,r11,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// cmplwi cr6,r4,15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 15, ctx.xer);
	// bgt cr6,0x8321f16c
	if (ctx.cr6.gt) goto loc_8321F16C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r5,r11,28
	ctx.r5.u64 = ctx.r11.u32 & 0xF;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// rlwinm r11,r10,27,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xF;
	// rlwinm r10,r10,4,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF0;
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x82e72ca0
	ctx.lr = 0x8321F16C;
	sub_82E72CA0(ctx, base);
loc_8321F16C:
	// lwz r11,336(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 336);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8321f140
	if (ctx.cr6.lt) goto loc_8321F140;
loc_8321F180:
	// lwz r11,536(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 536);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8321f2c8
	if (!ctx.cr6.gt) goto loc_8321F2C8;
	// addi r30,r16,348
	ctx.r30.s64 = ctx.r16.s64 + 348;
loc_8321F19C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8321f1d0
	if (ctx.cr0.eq) goto loc_8321F1D0;
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321f2b4
	if (ctx.cr0.eq) goto loc_8321F2B4;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x8321f1c0
	if (!ctx.cr6.eq) goto loc_8321F1C0;
	// li r27,2
	ctx.r27.s64 = 2;
	// b 0x8321f2b4
	goto loc_8321F2B4;
loc_8321F1C0:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bge cr6,0x8321f2b4
	if (!ctx.cr6.lt) goto loc_8321F2B4;
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// b 0x8321f2b4
	goto loc_8321F2B4;
loc_8321F1D0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14720
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14720, ctx.xer);
	// beq cr6,0x8321f2b4
	if (ctx.cr6.eq) goto loc_8321F2B4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8321F1E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8321f2b4
	if (ctx.cr6.eq) goto loc_8321F2B4;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8321f208
	if (ctx.cr6.eq) goto loc_8321F208;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8321f210
	if (!ctx.cr0.eq) goto loc_8321F210;
loc_8321F208:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8321f1e8
	goto loc_8321F1E8;
loc_8321F210:
	// lwz r9,48(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// rlwinm r9,r9,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r9,r17
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x8321f264
	if (!ctx.cr6.eq) goto loc_8321F264;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r10,31,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// rlwinm r31,r11,15,24,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// rlwimi r10,r9,31,17,18
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 31) & 0x6000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF9FFF);
	// rlwinm r11,r9,4,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xF0;
	// rlwinm r10,r10,27,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3FF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r10,r10,0,28,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 | ctx.r11.u64;
	// bl 0x82e72ca0
	ctx.lr = 0x8321F254;
	sub_82E72CA0(ctx, base);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x8321f2b4
	if (!ctx.cr6.gt) goto loc_8321F2B4;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// b 0x8321f2b4
	goto loc_8321F2B4;
loc_8321F264:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// rlwimi r8,r9,28,11,18
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0x1FE000) | (ctx.r8.u64 & 0xFFFFFFFFFFE01FFF);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// rlwinm r10,r8,23,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0xFFF;
	// bne cr6,0x8321f288
	if (!ctx.cr6.eq) goto loc_8321F288;
	// li r11,9
	ctx.r11.s64 = 9;
loc_8321F288:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r4,r10,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwinm r11,r11,4,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0;
	// rlwimi r8,r9,31,17,18
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 31) & 0x6000) | (ctx.r8.u64 & 0xFFFFFFFFFFFF9FFF);
	// rlwinm r10,r8,27,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3FF;
	// rlwinm r10,r10,0,28,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 | ctx.r11.u64;
	// bl 0x82e72cb8
	ctx.lr = 0x8321F2B4;
	sub_82E72CB8(ctx, base);
loc_8321F2B4:
	// lwz r11,536(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 536);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8321f19c
	if (ctx.cr6.lt) goto loc_8321F19C;
loc_8321F2C8:
	// lwz r11,48(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x8321f2fc
	if (ctx.cr6.eq) goto loc_8321F2FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8321ed38
	ctx.lr = 0x8321F2E8;
	sub_8321ED38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r6,4(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8321d848
	ctx.lr = 0x8321F2FC;
	sub_8321D848(ctx, base);
loc_8321F2FC:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8321f30c
	if (ctx.cr0.eq) goto loc_8321F30C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8321F30C:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8321dd00
	ctx.lr = 0x8321F318;
	sub_8321DD00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8321f36c
	if (ctx.cr6.eq) goto loc_8321F36C;
loc_8321F328:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x8321f33c
	if (ctx.cr6.eq) goto loc_8321F33C;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8321f36c
	if (!ctx.cr0.eq) goto loc_8321F36C;
loc_8321F33C:
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8321dd00
	ctx.lr = 0x8321F348;
	sub_8321DD00(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x8321f354
	if (!ctx.cr6.gt) goto loc_8321F354;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8321F354:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8321f36c
	if (!ctx.cr0.eq) goto loc_8321F36C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8321f328
	if (!ctx.cr6.eq) goto loc_8321F328;
loc_8321F36C:
	// lwz r11,48(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x8321f390
	if (ctx.cr6.eq) goto loc_8321F390;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r30,0,26,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0x3F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8321f3b0
	goto loc_8321F3B0;
loc_8321F390:
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8321f3a0
	if (!ctx.cr6.gt) goto loc_8321F3A0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8321F3A0:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r9,r11,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8321F3B0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82e6ac80
	ctx.lr = 0x8321F3C8;
	sub_82E6AC80(ctx, base);
	// li r15,-1
	ctx.r15.s64 = -1;
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// lwz r20,8(r25)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r19,12(r25)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lwz r21,16(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// beq cr6,0x8322004c
	if (ctx.cr6.eq) goto loc_8322004C;
loc_8321F3FC:
	// cmplw cr6,r26,r23
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x8321f410
	if (ctx.cr6.eq) goto loc_8321F410;
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322004c
	if (!ctx.cr0.eq) goto loc_8322004C;
loc_8321F410:
	// lwz r31,20(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8321f468
	if (!ctx.cr0.eq) goto loc_8321F468;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8321f468
	if (ctx.cr0.eq) goto loc_8321F468;
loc_8321F424:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14848
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14848, ctx.xer);
	// bne cr6,0x8321f450
	if (!ctx.cr6.eq) goto loc_8321F450;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8321f450
	if (ctx.cr6.eq) goto loc_8321F450;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83220068
	if (ctx.cr0.eq) goto loc_83220068;
loc_8321F450:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8321f468
	if (!ctx.cr0.eq) goto loc_8321F468;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8321f424
	if (!ctx.cr6.eq) goto loc_8321F424;
loc_8321F468:
	// lwz r31,28(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83220030
	if (!ctx.cr0.eq) goto loc_83220030;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x83220030
	if (ctx.cr0.eq) goto loc_83220030;
loc_8321F47C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8321f4a8
	if (ctx.cr6.lt) goto loc_8321F4A8;
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// ble cr6,0x8321f4ac
	if (!ctx.cr6.gt) goto loc_8321F4AC;
loc_8321F4A8:
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_8321F4AC:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8321f824
	if (ctx.cr0.eq) goto loc_8321F824;
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321f524
	if (ctx.cr0.eq) goto loc_8321F524;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321c7e8
	ctx.lr = 0x8321F4C8;
	sub_8321C7E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321f524
	if (ctx.cr0.eq) goto loc_8321F524;
	// lwz r11,112(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8321f50c
	if (ctx.cr0.eq) goto loc_8321F50C;
	// b 0x8321f4f0
	goto loc_8321F4F0;
loc_8321F4E4:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8321f4fc
	if (ctx.cr0.eq) goto loc_8321F4FC;
loc_8321F4F0:
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8321f4e4
	if (!ctx.cr6.eq) goto loc_8321F4E4;
loc_8321F4FC:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8321f4f0
	if (!ctx.cr0.eq) goto loc_8321F4F0;
	// stw r11,112(r26)
	PPC_STORE_U32(ctx.r26.u32 + 112, ctx.r11.u32);
loc_8321F50C:
	// lwz r11,112(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321f524
	if (ctx.cr0.eq) goto loc_8321F524;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e73890
	ctx.lr = 0x8321F524;
	sub_82E73890(ctx, base);
loc_8321F524:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// stw r22,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r22.u32);
	// bl 0x832f4b78
	ctx.lr = 0x8321F540;
	sub_832F4B78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321db70
	ctx.lr = 0x8321F548;
	sub_8321DB70(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8321f564
	if (ctx.cr0.eq) goto loc_8321F564;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832f4b78
	ctx.lr = 0x8321F560;
	sub_832F4B78(ctx, base);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
loc_8321F564:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321f6ec
	if (ctx.cr0.eq) goto loc_8321F6EC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8321f584
	if (!ctx.cr0.eq) goto loc_8321F584;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x8321f5ac
	goto loc_8321F5AC;
loc_8321F584:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x8321f5a4
	if (ctx.cr6.eq) goto loc_8321F5A4;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// beq cr6,0x8321f5a4
	if (ctx.cr6.eq) goto loc_8321F5A4;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne cr6,0x8321f5a8
	if (!ctx.cr6.eq) goto loc_8321F5A8;
loc_8321F5A4:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8321F5A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8321F5AC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8321f600
	if (!ctx.cr0.eq) goto loc_8321F600;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8321f6ec
	if (ctx.cr6.eq) goto loc_8321F6EC;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8321f5d0
	if (!ctx.cr0.eq) goto loc_8321F5D0;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x8321f5f8
	goto loc_8321F5F8;
loc_8321F5D0:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x8321f5f0
	if (ctx.cr6.eq) goto loc_8321F5F0;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// beq cr6,0x8321f5f0
	if (ctx.cr6.eq) goto loc_8321F5F0;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne cr6,0x8321f5f4
	if (!ctx.cr6.eq) goto loc_8321F5F4;
loc_8321F5F0:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8321F5F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8321F5F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321f6ec
	if (ctx.cr0.eq) goto loc_8321F6EC;
loc_8321F600:
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e6e708
	ctx.lr = 0x8321F608;
	sub_82E6E708(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8321f6a0
	if (ctx.cr6.eq) goto loc_8321F6A0;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8321f6a0
	if (!ctx.cr0.eq) goto loc_8321F6A0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e6e720
	ctx.lr = 0x8321F628;
	sub_82E6E720(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x8321f694
	if (!ctx.cr6.eq) goto loc_8321F694;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r10,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x8321f694
	if (ctx.cr6.eq) goto loc_8321F694;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8321f694
	if (ctx.cr6.eq) goto loc_8321F694;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82e6e750
	ctx.lr = 0x8321F66C;
	sub_82E6E750(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8321f698
	if (ctx.cr6.eq) goto loc_8321F698;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,17,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7000;
	// cmplwi cr6,r11,20480
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20480, ctx.xer);
	// bne cr6,0x8321f6a0
	if (!ctx.cr6.eq) goto loc_8321F6A0;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e73890
	ctx.lr = 0x8321F690;
	sub_82E73890(ctx, base);
	// b 0x8321f6a0
	goto loc_8321F6A0;
loc_8321F694:
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
loc_8321F698:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x8321f6ec
	if (!ctx.cr6.eq) goto loc_8321F6EC;
loc_8321F6A0:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// stw r22,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r22.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwimi r11,r14,25,3,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r14.u32, 25) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r10,r10,51200
	ctx.r10.u64 = ctx.r10.u64 | 3355443200;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// bl 0x82e735e0
	ctx.lr = 0x8321F6D4;
	sub_82E735E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8321e628
	ctx.lr = 0x8321F6EC;
	sub_8321E628(ctx, base);
loc_8321F6EC:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e735e0
	ctx.lr = 0x8321F6F8;
	sub_82E735E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8321e628
	ctx.lr = 0x8321F714;
	sub_8321E628(ctx, base);
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// bl 0x82e6e768
	ctx.lr = 0x8321F720;
	sub_82E6E768(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// rlwinm r29,r10,12,17,19
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x7000;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e6e708
	ctx.lr = 0x8321F73C;
	sub_82E6E708(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// clrlwi r10,r3,20
	ctx.r10.u64 = ctx.r3.u32 & 0xFFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x8321f794
	if (ctx.cr6.eq) goto loc_8321F794;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r10,r10,0,8,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r10,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r10.u32);
	// rlwinm r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
loc_8321F794:
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321ff04
	if (ctx.cr0.eq) goto loc_8321FF04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321c7e8
	ctx.lr = 0x8321F7AC;
	sub_8321C7E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321ff04
	if (ctx.cr0.eq) goto loc_8321FF04;
	// lwz r11,112(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8321f7f0
	if (ctx.cr0.eq) goto loc_8321F7F0;
	// b 0x8321f7d4
	goto loc_8321F7D4;
loc_8321F7C8:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8321f7e0
	if (ctx.cr0.eq) goto loc_8321F7E0;
loc_8321F7D4:
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8321f7c8
	if (!ctx.cr6.eq) goto loc_8321F7C8;
loc_8321F7E0:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8321f7d4
	if (!ctx.cr0.eq) goto loc_8321F7D4;
	// stw r11,112(r26)
	PPC_STORE_U32(ctx.r26.u32 + 112, ctx.r11.u32);
loc_8321F7F0:
	// lwz r11,112(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321ff04
	if (ctx.cr0.eq) goto loc_8321FF04;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8321f814
	if (ctx.cr0.eq) goto loc_8321F814;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8321F814:
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321ff04
	if (ctx.cr0.eq) goto loc_8321FF04;
	// b 0x8321fed4
	goto loc_8321FED4;
loc_8321F824:
	// cmplwi cr6,r10,83
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 83, ctx.xer);
	// blt cr6,0x8321f838
	if (ctx.cr6.lt) goto loc_8321F838;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// ble cr6,0x8321f83c
	if (!ctx.cr6.gt) goto loc_8321F83C;
loc_8321F838:
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_8321F83C:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8321faa8
	if (ctx.cr0.eq) goto loc_8321FAA8;
	// cmplwi cr6,r10,83
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 83, ctx.xer);
	// bne cr6,0x8321f854
	if (!ctx.cr6.eq) goto loc_8321F854;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83220018
	if (ctx.cr0.eq) goto loc_83220018;
loc_8321F854:
	// cmplwi cr6,r10,84
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 84, ctx.xer);
	// bne cr6,0x8321f8b0
	if (!ctx.cr6.eq) goto loc_8321F8B0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8321ce60
	ctx.lr = 0x8321F870;
	sub_8321CE60(ctx, base);
	// addi r11,r31,-28
	ctx.r11.s64 = ctx.r31.s64 + -28;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8321f8b0
	if (ctx.cr6.eq) goto loc_8321F8B0;
	// stw r10,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r10.u32);
	// stw r22,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r22.u32);
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x82e70dd0
	ctx.lr = 0x8321F8B0;
	sub_82E70DD0(ctx, base);
loc_8321F8B0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10624
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10624, ctx.xer);
	// bne cr6,0x8321f8fc
	if (!ctx.cr6.eq) goto loc_8321F8FC;
	// lwz r11,48(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x8321f8f0
	if (ctx.cr6.eq) goto loc_8321F8F0;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// rlwimi r11,r14,13,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r14.u32, 13) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// b 0x8321f954
	goto loc_8321F954;
loc_8321F8F0:
	// bl 0x82e73890
	ctx.lr = 0x8321F8F4;
	sub_82E73890(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8321f974
	goto loc_8321F974;
loc_8321F8FC:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// bl 0x832efdb8
	ctx.lr = 0x8321F914;
	sub_832EFDB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321f94c
	if (ctx.cr0.eq) goto loc_8321F94C;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e73890
	ctx.lr = 0x8321F924;
	sub_82E73890(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x8321F940;
	sub_8321CE60(ctx, base);
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// mr r18,r14
	ctx.r18.u64 = ctx.r14.u64;
	// stwx r30,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r30.u32);
loc_8321F94C:
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_8321F954:
	// bl 0x82e73878
	ctx.lr = 0x8321F958;
	sub_82E73878(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8321e628
	ctx.lr = 0x8321F974;
	sub_8321E628(ctx, base);
loc_8321F974:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r10,r30,20
	ctx.r10.u64 = ctx.r30.u32 & 0xFFF;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r9,r9,0,8,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// rlwinm r8,r8,0,18,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// cmplwi cr6,r8,10624
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 10624, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x8321ff04
	if (!ctx.cr6.eq) goto loc_8321FF04;
	// lwz r11,48(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x8321ff04
	if (!ctx.cr6.eq) goto loc_8321FF04;
	// lbz r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 48);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x8321fa34
	goto loc_8321FA34;
loc_8321F9CC:
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x832200cc
	if (!ctx.cr0.eq) goto loc_832200CC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832200cc
	if (ctx.cr0.eq) goto loc_832200CC;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r8,0,18,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r8,16128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16128, ctx.xer);
	// bne cr6,0x832200cc
	if (!ctx.cr6.eq) goto loc_832200CC;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r8,r11,20
	ctx.r8.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8321fa40
	if (ctx.cr6.lt) goto loc_8321FA40;
	// rlwinm. r11,r11,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8321fa44
	if (!ctx.cr0.eq) goto loc_8321FA44;
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8321fa44
	if (!ctx.cr0.eq) goto loc_8321FA44;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8321fa44
	if (!ctx.cr0.eq) goto loc_8321FA44;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r10,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r10.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8321fa44
	if (ctx.cr0.eq) goto loc_8321FA44;
	// lbz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
loc_8321FA34:
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321f9cc
	if (ctx.cr0.eq) goto loc_8321F9CC;
	// b 0x8321fa44
	goto loc_8321FA44;
loc_8321FA40:
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_8321FA44:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321ff04
	if (ctx.cr0.eq) goto loc_8321FF04;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// stw r22,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r22.u32);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// clrlwi r11,r11,6
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFF;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// oris r11,r11,51200
	ctx.r11.u64 = ctx.r11.u64 | 3355443200;
	// rlwimi r10,r14,25,3,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r14.u32, 25) & 0x1F000000) | (ctx.r10.u64 & 0xFFFFFFFFE0FFFFFF);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// bl 0x82e735e0
	ctx.lr = 0x8321FA80;
	sub_82E735E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8321e628
	ctx.lr = 0x8321FA9C;
	sub_8321E628(ctx, base);
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// b 0x8321ff04
	goto loc_8321FF04;
loc_8321FAA8:
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// blt cr6,0x8321fabc
	if (ctx.cr6.lt) goto loc_8321FABC;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// ble cr6,0x8321fac0
	if (!ctx.cr6.gt) goto loc_8321FAC0;
loc_8321FABC:
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_8321FAC0:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8321fcc4
	if (ctx.cr0.eq) goto loc_8321FCC4;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8321fc44
	if (!ctx.cr6.eq) goto loc_8321FC44;
	// addi r11,r1,232
	ctx.r11.s64 = ctx.r1.s64 + 232;
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// stw r22,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r22.u32);
	// bl 0x832ee858
	ctx.lr = 0x8321FAEC;
	sub_832EE858(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// rlwinm r29,r11,13,29,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r30,r11,25,25,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8321ce60
	ctx.lr = 0x8321FB0C;
	sub_8321CE60(ctx, base);
	// addi r11,r31,-20
	ctx.r11.s64 = ctx.r31.s64 + -20;
	// add r28,r3,r11
	ctx.r28.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r11,15(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 15);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8321fb3c
	if (ctx.cr6.eq) goto loc_8321FB3C;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// rlwinm r6,r11,16,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82e735c8
	ctx.lr = 0x8321FB38;
	sub_82E735C8(ctx, base);
	// b 0x8321fc64
	goto loc_8321FC64;
loc_8321FB3C:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8321fc2c
	if (!ctx.cr0.eq) goto loc_8321FC2C;
	// cmplwi cr6,r30,96
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 96, ctx.xer);
	// bne cr6,0x8321fb58
	if (!ctx.cr6.eq) goto loc_8321FB58;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// bgt cr6,0x8321fb5c
	if (ctx.cr6.gt) goto loc_8321FB5C;
loc_8321FB58:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8321FB5C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321fc2c
	if (ctx.cr0.eq) goto loc_8321FC2C;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e6e708
	ctx.lr = 0x8321FB6C;
	sub_82E6E708(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8321fc24
	if (ctx.cr6.eq) goto loc_8321FC24;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8321fbe8
	if (!ctx.cr0.eq) goto loc_8321FBE8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8321fbe8
	if (ctx.cr6.eq) goto loc_8321FBE8;
loc_8321FB98:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r11,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,12288
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12288, ctx.xer);
	// bne cr6,0x8321fbb4
	if (!ctx.cr6.eq) goto loc_8321FBB4;
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// beq 0x8321fbb8
	if (ctx.cr0.eq) goto loc_8321FBB8;
loc_8321FBB4:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8321FBB8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321fbe0
	if (ctx.cr0.eq) goto loc_8321FBE0;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8321fbe0
	if (!ctx.cr0.eq) goto loc_8321FBE0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8321fb98
	if (!ctx.cr6.eq) goto loc_8321FB98;
loc_8321FBE0:
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// bgt cr6,0x832200d8
	if (ctx.cr6.gt) goto loc_832200D8;
loc_8321FBE8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e6e720
	ctx.lr = 0x8321FBF4;
	sub_82E6E720(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x8321fc18
	if (!ctx.cr6.eq) goto loc_8321FC18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// subfic r11,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r11.s64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8321fc1c
	if (!ctx.cr6.gt) goto loc_8321FC1C;
loc_8321FC18:
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
loc_8321FC1C:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x8321fc2c
	if (!ctx.cr6.eq) goto loc_8321FC2C;
loc_8321FC24:
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e70e50
	ctx.lr = 0x8321FC2C;
	sub_82E70E50(ctx, base);
loc_8321FC2C:
	// lhz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 12);
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82e735b0
	ctx.lr = 0x8321FC40;
	sub_82E735B0(ctx, base);
	// b 0x8321fc64
	goto loc_8321FC64;
loc_8321FC44:
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// stw r22,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r22.u32);
	// bl 0x832eeb90
	ctx.lr = 0x8321FC58;
	sub_832EEB90(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e73598
	ctx.lr = 0x8321FC64;
	sub_82E73598(ctx, base);
loc_8321FC64:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8321e628
	ctx.lr = 0x8321FC80;
	sub_8321E628(ctx, base);
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// bl 0x82e6e768
	ctx.lr = 0x8321FC90;
	sub_82E6E768(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r3,-1
	ctx.r29.s64 = ctx.r3.s64 + -1;
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e6e708
	ctx.lr = 0x8321FCA8;
	sub_82E6E708(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwimi r3,r29,12,17,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r29.u32, 12) & 0x7000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF8FFF);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// clrlwi r10,r3,17
	ctx.r10.u64 = ctx.r3.u32 & 0x7FFF;
loc_8321FCB8:
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x8321ff04
	goto loc_8321FF04;
loc_8321FCC4:
	// cmplwi cr6,r10,126
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 126, ctx.xer);
	// bne cr6,0x8321fd74
	if (!ctx.cr6.eq) goto loc_8321FD74;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321fce0
	if (ctx.cr0.eq) goto loc_8321FCE0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8321FCE0:
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8321fd08
	if (ctx.cr0.eq) goto loc_8321FD08;
	// bl 0x82e73890
	ctx.lr = 0x8321FCF4;
	sub_82E73890(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r10,r3,20
	ctx.r10.u64 = ctx.r3.u32 & 0xFFF;
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// rlwinm r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// b 0x8321fcb8
	goto loc_8321FCB8;
loc_8321FD08:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// bl 0x82e6e708
	ctx.lr = 0x8321FD10;
	sub_82E6E708(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8321fd60
	if (ctx.cr6.eq) goto loc_8321FD60;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e6e720
	ctx.lr = 0x8321FD28;
	sub_82E6E720(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x8321fd60
	if (!ctx.cr6.eq) goto loc_8321FD60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r28,r11,20,29,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// cmplwi cr6,r28,6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 6, ctx.xer);
	// bne cr6,0x8321fd60
	if (!ctx.cr6.eq) goto loc_8321FD60;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8321FD60:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwimi r29,r28,12,17,19
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x7000) | (ctx.r29.u64 & 0xFFFFFFFFFFFF8FFF);
	// rlwimi r29,r11,0,0,16
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFF8000) | (ctx.r29.u64 & 0xFFFFFFFF00007FFF);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// b 0x8321ff04
	goto loc_8321FF04;
loc_8321FD74:
	// cmplwi cr6,r10,106
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 106, ctx.xer);
	// bne cr6,0x8321fee4
	if (!ctx.cr6.eq) goto loc_8321FEE4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8321FD80:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8321fd9c
	if (ctx.cr6.eq) goto loc_8321FD9C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8321fd9c
	if (!ctx.cr0.eq) goto loc_8321FD9C;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8321fd80
	goto loc_8321FD80;
loc_8321FD9C:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// rlwimi r11,r10,20,19,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r30,r11,31,20,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFF;
	// std r22,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r22.u64);
	// stw r22,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r22.u32);
	// rlwinm r10,r30,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r29,r30,12,16,19
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xF000;
	// rlwinm r11,r30,28,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0x3F;
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r8,r8,6
	ctx.r8.u64 = ctx.r8.u32 & 0x3FFFFFF;
	// rlwimi r10,r14,25,3,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r14.u32, 25) & 0x1F000000) | (ctx.r10.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r8,r8,8192
	ctx.r8.u64 = ctx.r8.u64 | 536870912;
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// rlwinm r8,r8,0,24,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r8,r8,0,12,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// oris r9,r9,256
	ctx.r9.u64 = ctx.r9.u64 | 16777216;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x82e735e0
	ctx.lr = 0x8321FE14;
	sub_82E735E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8321e628
	ctx.lr = 0x8321FE2C;
	sub_8321E628(ctx, base);
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e73890
	ctx.lr = 0x8321FE34;
	sub_82E73890(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,25
	ctx.r5.s64 = 25;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x8321FE48;
	sub_8321D6D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// rlwinm r9,r30,28,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0x3F;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// or r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 | ctx.r29.u64;
	// stw r24,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// std r22,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r22.u64);
	// stw r22,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r22.u32);
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwimi r11,r14,25,3,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r14.u32, 25) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r10,r10,9216
	ctx.r10.u64 = ctx.r10.u64 | 603979776;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r10,r10,0,24,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// rlwinm r10,r10,0,12,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// bl 0x82e735e0
	ctx.lr = 0x8321FEB4;
	sub_82E735E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8321e628
	ctx.lr = 0x8321FED0;
	sub_8321E628(ctx, base);
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
loc_8321FED4:
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e73890
	ctx.lr = 0x8321FEDC;
	sub_82E73890(ctx, base);
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// b 0x8321ff04
	goto loc_8321FF04;
loc_8321FEE4:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8321fef8
	if (ctx.cr6.lt) goto loc_8321FEF8;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// ble cr6,0x8321fefc
	if (!ctx.cr6.gt) goto loc_8321FEFC;
loc_8321FEF8:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8321FEFC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832200e4
	if (!ctx.cr0.eq) goto loc_832200E4;
loc_8321FF04:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8321ff8c
	if (ctx.cr6.eq) goto loc_8321FF8C;
loc_8321FF0C:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8321ff20
	if (ctx.cr6.eq) goto loc_8321FF20;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8321ff8c
	if (!ctx.cr6.eq) goto loc_8321FF8C;
loc_8321FF20:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8321e890
	ctx.lr = 0x8321FF38;
	sub_8321E890(ctx, base);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8321ff50
	if (ctx.cr6.eq) goto loc_8321FF50;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8321ff0c
	if (!ctx.cr6.eq) goto loc_8321FF0C;
loc_8321FF50:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r30.u32);
	// rlwimi r11,r10,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r11.u32);
	// addi r20,r20,12
	ctx.r20.s64 = ctx.r20.s64 + 12;
	// lwz r10,728(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 728);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lwz r11,724(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 724);
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8321ff0c
	if (ctx.cr6.lt) goto loc_8321FF0C;
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
loc_8321FF8C:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x83220014
	if (ctx.cr6.eq) goto loc_83220014;
loc_8321FF94:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8321ffa8
	if (ctx.cr6.eq) goto loc_8321FFA8;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83220014
	if (!ctx.cr6.eq) goto loc_83220014;
loc_8321FFA8:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8321e890
	ctx.lr = 0x8321FFC0;
	sub_8321E890(ctx, base);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8321ffd8
	if (ctx.cr6.eq) goto loc_8321FFD8;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8321ff94
	if (!ctx.cr6.eq) goto loc_8321FF94;
loc_8321FFD8:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r30.u32);
	// rlwimi r11,r10,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r11.u32);
	// addi r19,r19,12
	ctx.r19.s64 = ctx.r19.s64 + 12;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// lwz r11,752(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 752);
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// lwz r11,748(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 748);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8321ff94
	if (ctx.cr6.lt) goto loc_8321FF94;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
loc_83220014:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_83220018:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83220030
	if (!ctx.cr0.eq) goto loc_83220030;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8321f47c
	if (!ctx.cr6.eq) goto loc_8321F47C;
loc_83220030:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83220060
	if (!ctx.cr0.eq) goto loc_83220060;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8321f3fc
	if (!ctx.cr6.eq) goto loc_8321F3FC;
loc_8322004C:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x832200f8
	if (ctx.cr6.eq) goto loc_832200F8;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x83220190
	goto loc_83220190;
loc_83220060:
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// b 0x8322004c
	goto loc_8322004C;
loc_83220068:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,116
	ctx.r4.s64 = 116;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8321ce60
	ctx.lr = 0x8322007C;
	sub_8321CE60(ctx, base);
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// lwz r11,12(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// clrlwi r4,r10,17
	ctx.r4.u64 = ctx.r10.u32 & 0x7FFF;
	// mulli r10,r4,40
	ctx.r10.s64 = ctx.r4.s64 * 40;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832200b8
	if (ctx.cr0.eq) goto loc_832200B8;
	// bl 0x832aa2d0
	ctx.lr = 0x832200A8;
	sub_832AA2D0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3507
	ctx.r4.s64 = 3507;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83204d78
	ctx.lr = 0x832200B8;
	sub_83204D78(ctx, base);
loc_832200B8:
	// bl 0x832aa2d0
	ctx.lr = 0x832200BC;
	sub_832AA2D0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3527
	ctx.r4.s64 = 3527;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83204d78
	ctx.lr = 0x832200CC;
	sub_83204D78(ctx, base);
loc_832200CC:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83204d78
	ctx.lr = 0x832200D8;
	sub_83204D78(ctx, base);
loc_832200D8:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83204d78
	ctx.lr = 0x832200E4;
	sub_83204D78(ctx, base);
loc_832200E4:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,-1280
	ctx.r5.s64 = ctx.r11.s64 + -1280;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83204d78
	ctx.lr = 0x832200F8;
	sub_83204D78(ctx, base);
loc_832200F8:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322019c
	if (!ctx.cr0.eq) goto loc_8322019C;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
loc_83220108:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_83220110:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// beq 0x832201c4
	if (ctx.cr0.eq) goto loc_832201C4;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83220184
	if (!ctx.cr0.eq) goto loc_83220184;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// b 0x83220178
	goto loc_83220178;
loc_83220130:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321c8d8
	ctx.lr = 0x83220138;
	sub_8321C8D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83220168
	if (ctx.cr0.eq) goto loc_83220168;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8322015c
	if (ctx.cr6.lt) goto loc_8322015C;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// ble cr6,0x83220160
	if (!ctx.cr6.gt) goto loc_83220160;
loc_8322015C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_83220160:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832201a4
	if (!ctx.cr0.eq) goto loc_832201A4;
loc_83220168:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83220184
	if (!ctx.cr0.eq) goto loc_83220184;
loc_83220178:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83220130
	if (!ctx.cr0.eq) goto loc_83220130;
loc_83220184:
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x8322019c
	if (ctx.cr6.eq) goto loc_8322019C;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
loc_83220190:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83220108
	if (ctx.cr0.eq) goto loc_83220108;
loc_8322019C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x83220110
	goto loc_83220110;
loc_832201A4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// clrlwi r4,r11,20
	ctx.r4.u64 = ctx.r11.u32 & 0xFFF;
	// bl 0x82e6e720
	ctx.lr = 0x832201B4;
	sub_82E6E720(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,20,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_832201C4:
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e73890
	ctx.lr = 0x832201CC;
	sub_82E73890(ctx, base);
	// lwz r6,784(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 784);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// beq cr6,0x832201e8
	if (ctx.cr6.eq) goto loc_832201E8;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x83220200
	goto loc_83220200;
loc_832201E8:
	// lwz r11,48(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r17,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r17.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,2046
	ctx.r11.s64 = ctx.r11.s64 + 2046;
loc_83220200:
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83220228
	if (!ctx.cr6.gt) goto loc_83220228;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// beq cr6,0x83220220
	if (ctx.cr6.eq) goto loc_83220220;
	// li r4,3617
	ctx.r4.s64 = 3617;
	// bl 0x83204d78
	ctx.lr = 0x83220220;
	sub_83204D78(ctx, base);
loc_83220220:
	// li r4,3641
	ctx.r4.s64 = 3641;
	// bl 0x83204d78
	ctx.lr = 0x83220228;
	sub_83204D78(ctx, base);
loc_83220228:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x83220270
	if (ctx.cr6.eq) goto loc_83220270;
loc_83220234:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e6e720
	ctx.lr = 0x83220240;
	sub_82E6E720(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,18,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF3FFF;
	// ori r11,r11,13312
	ctx.r11.u64 = ctx.r11.u64 | 13312;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r11,r10,17,22,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0x3FC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC03);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83220234
	if (!ctx.cr6.eq) goto loc_83220234;
loc_83220270:
	// clrlwi. r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83220378
	if (ctx.cr0.eq) goto loc_83220378;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x83220378
	if (ctx.cr6.eq) goto loc_83220378;
loc_83220284:
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x83220298
	if (ctx.cr6.eq) goto loc_83220298;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83220378
	if (!ctx.cr0.eq) goto loc_83220378;
loc_83220298:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322035c
	if (!ctx.cr0.eq) goto loc_8322035C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8322035c
	if (ctx.cr0.eq) goto loc_8322035C;
loc_832202B0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x832202e4
	if (ctx.cr6.eq) goto loc_832202E4;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x832202e4
	if (ctx.cr6.eq) goto loc_832202E4;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x832202e4
	if (ctx.cr6.eq) goto loc_832202E4;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x832202e4
	if (ctx.cr6.eq) goto loc_832202E4;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne cr6,0x832202e8
	if (!ctx.cr6.eq) goto loc_832202E8;
loc_832202E4:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_832202E8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83220340
	if (ctx.cr0.eq) goto loc_83220340;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x83220308;
	sub_8321CE60(ctx, base);
	// addi r11,r31,-12
	ctx.r11.s64 = ctx.r31.s64 + -12;
	// lwz r10,756(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// add r29,r3,r11
	ctx.r29.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82e6e720
	ctx.lr = 0x83220320;
	sub_82E6E720(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFE000;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_83220340:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322035c
	if (!ctx.cr0.eq) goto loc_8322035C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832202b0
	if (!ctx.cr6.eq) goto loc_832202B0;
loc_8322035C:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83220378
	if (!ctx.cr0.eq) goto loc_83220378;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83220284
	if (!ctx.cr6.eq) goto loc_83220284;
loc_83220378:
	// mr r14,r23
	ctx.r14.u64 = ctx.r23.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x83220cd0
	if (ctx.cr6.eq) goto loc_83220CD0;
	// li r15,3
	ctx.r15.s64 = 3;
loc_83220388:
	// cmplw cr6,r14,r23
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x8322039c
	if (ctx.cr6.eq) goto loc_8322039C;
	// lwz r11,76(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83220cd0
	if (!ctx.cr0.eq) goto loc_83220CD0;
loc_8322039C:
	// lwz r11,28(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322045c
	if (!ctx.cr0.eq) goto loc_8322045C;
	// lwz r11,24(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322045c
	if (ctx.cr0.eq) goto loc_8322045C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10624
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10624, ctx.xer);
	// bne cr6,0x8322045c
	if (!ctx.cr6.eq) goto loc_8322045C;
	// rlwinm r11,r14,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83220404
	if (!ctx.cr0.eq) goto loc_83220404;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83220404
	if (ctx.cr6.eq) goto loc_83220404;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832203f4
	if (ctx.cr0.eq) goto loc_832203F4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_832203F4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83220404
	if (ctx.cr6.eq) goto loc_83220404;
	// bl 0x8321dc68
	ctx.lr = 0x83220400;
	sub_8321DC68(ctx, base);
	// b 0x8322040c
	goto loc_8322040C;
loc_83220404:
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e73890
	ctx.lr = 0x8322040C;
	sub_82E73890(ctx, base);
loc_8322040C:
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e6e720
	ctx.lr = 0x83220418;
	sub_82E6E720(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8322045c
	if (ctx.cr6.eq) goto loc_8322045C;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bne cr6,0x83220440
	if (!ctx.cr6.eq) goto loc_83220440;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,12,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// rlwimi r11,r10,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_83220440:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,16,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// bne cr6,0x83220cf4
	if (!ctx.cr6.eq) goto loc_83220CF4;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,13,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_8322045C:
	// lwz r11,48(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 48);
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83220614
	if (ctx.cr0.eq) goto loc_83220614;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8321dc68
	ctx.lr = 0x83220470;
	sub_8321DC68(ctx, base);
	// rlwinm r11,r14,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83220478:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832204dc
	if (ctx.cr0.eq) goto loc_832204DC;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_83220488:
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e73890
	ctx.lr = 0x83220490;
	sub_82E73890(ctx, base);
loc_83220490:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x832205e0
	goto loc_832205E0;
loc_83220498:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83220d00
	if (!ctx.cr0.eq) goto loc_83220D00;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83220d00
	if (ctx.cr0.eq) goto loc_83220D00;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16128, ctx.xer);
	// bne cr6,0x83220d00
	if (!ctx.cr6.eq) goto loc_83220D00;
	// lhz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832204f0
	if (!ctx.cr0.eq) goto loc_832204F0;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832204ec
	if (!ctx.cr0.eq) goto loc_832204EC;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x83220478
	goto loc_83220478;
loc_832204DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bne cr6,0x83220498
	if (!ctx.cr6.eq) goto loc_83220498;
	// b 0x83220488
	goto loc_83220488;
loc_832204EC:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_832204F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83220488
	if (ctx.cr6.eq) goto loc_83220488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321dc68
	ctx.lr = 0x83220500;
	sub_8321DC68(ctx, base);
	// b 0x83220490
	goto loc_83220490;
loc_83220504:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e6e720
	ctx.lr = 0x83220510;
	sub_82E6E720(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x83220574
	if (!ctx.cr6.eq) goto loc_83220574;
	// lbz r10,76(r14)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r14.u32 + 76);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83220554
	if (ctx.cr0.eq) goto loc_83220554;
	// rlwimi r11,r15,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r15.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,76(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 76);
	// rlwinm r10,r10,7,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7F;
	// rlwimi r11,r10,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,72(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 72);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r11,r10,17,22,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0x3FC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC03);
	// b 0x832205d8
	goto loc_832205D8;
loc_83220554:
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r11,r10,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,76(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 76);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,9,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFF;
	// rlwimi r10,r11,10,21,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 10) & 0x400) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFBFF);
	// b 0x832205b8
	goto loc_832205B8;
loc_83220574:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x832205dc
	if (!ctx.cr6.eq) goto loc_832205DC;
	// lbz r11,76(r14)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r14.u32 + 76);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// beq 0x832205c0
	if (ctx.cr0.eq) goto loc_832205C0;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,14,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,76(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 76);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,7,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// rlwimi r10,r11,10,21,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 10) & 0x400) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r11,72(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 72);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r11,17,22,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0x3FC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC03);
loc_832205B8:
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x832205dc
	goto loc_832205DC;
loc_832205C0:
	// rlwimi r11,r15,13,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r15.u32, 13) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,76(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 76);
	// rlwinm r10,r10,9,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// rlwimi r11,r10,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
loc_832205D8:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_832205DC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_832205E0:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x83220504
	if (ctx.cr6.lt) goto loc_83220504;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83220cd0
	if (ctx.cr6.eq) goto loc_83220CD0;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83220608
	if (ctx.cr0.eq) goto loc_83220608;
	// mr r14,r22
	ctx.r14.u64 = ctx.r22.u64;
	// b 0x83220c98
	goto loc_83220C98;
loc_83220608:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r14,r11,-4
	ctx.r14.s64 = ctx.r11.s64 + -4;
	// b 0x83220c98
	goto loc_83220C98;
loc_83220614:
	// lbz r10,76(r14)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r14.u32 + 76);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83220c98
	if (!ctx.cr0.eq) goto loc_83220C98;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83220c98
	if (!ctx.cr0.eq) goto loc_83220C98;
	// rlwinm r11,r14,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r18,r14
	ctx.r18.u64 = ctx.r14.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832206dc
	if (!ctx.cr0.eq) goto loc_832206DC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832206dc
	if (ctx.cr6.eq) goto loc_832206DC;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832206dc
	if (!ctx.cr0.eq) goto loc_832206DC;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83220d28
	if (!ctx.cr0.eq) goto loc_83220D28;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83220d28
	if (ctx.cr0.eq) goto loc_83220D28;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16128, ctx.xer);
	// bne cr6,0x83220d28
	if (!ctx.cr6.eq) goto loc_83220D28;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r17,r11,20
	ctx.r17.u64 = ctx.r11.u32 & 0xFFF;
	// cmpwi cr6,r17,-1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, -1, ctx.xer);
	// beq cr6,0x83220c98
	if (ctx.cr6.eq) goto loc_83220C98;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e73890
	ctx.lr = 0x83220690;
	sub_82E73890(ctx, base);
	// cmplw cr6,r17,r3
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x832206e8
	if (!ctx.cr6.lt) goto loc_832206E8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83220d14
	if (!ctx.cr0.eq) goto loc_83220D14;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83220d14
	if (ctx.cr0.eq) goto loc_83220D14;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16128, ctx.xer);
	// bne cr6,0x83220d14
	if (!ctx.cr6.eq) goto loc_83220D14;
	// lhz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832206e8
	if (!ctx.cr0.eq) goto loc_832206E8;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832206e8
	if (!ctx.cr0.eq) goto loc_832206E8;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// b 0x832206e8
	goto loc_832206E8;
loc_832206DC:
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e73890
	ctx.lr = 0x832206E4;
	sub_82E73890(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
loc_832206E8:
	// lwz r11,28(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83220d50
	if (!ctx.cr0.eq) goto loc_83220D50;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83220d50
	if (ctx.cr0.eq) goto loc_83220D50;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16128, ctx.xer);
	// bne cr6,0x83220d50
	if (!ctx.cr6.eq) goto loc_83220D50;
	// lhz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// clrlwi r28,r11,31
	ctx.r28.u64 = ctx.r11.u32 & 0x1;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
loc_83220730:
	// lwz r11,28(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	// addi r21,r18,24
	ctx.r21.s64 = ctx.r18.s64 + 24;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83220ba4
	if (!ctx.cr0.eq) goto loc_83220BA4;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83220ba4
	if (ctx.cr0.eq) goto loc_83220BA4;
loc_8322074C:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x83220768
	if (ctx.cr6.lt) goto loc_83220768;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8322076c
	if (!ctx.cr6.gt) goto loc_8322076C;
loc_83220768:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322076C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83220b78
	if (ctx.cr0.eq) goto loc_83220B78;
	// cmplwi cr6,r10,83
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 83, ctx.xer);
	// blt cr6,0x83220788
	if (ctx.cr6.lt) goto loc_83220788;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8322078c
	if (!ctx.cr6.gt) goto loc_8322078C;
loc_83220788:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322078C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83220ab8
	if (!ctx.cr0.eq) goto loc_83220AB8;
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// rlwinm r10,r11,0,17,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7000;
	// cmplwi cr6,r10,28672
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28672, ctx.xer);
	// beq cr6,0x83220b9c
	if (ctx.cr6.eq) goto loc_83220B9C;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x83220954
	if (ctx.cr6.eq) goto loc_83220954;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83220954
	if (ctx.cr6.eq) goto loc_83220954;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832207f0
	if (ctx.cr0.eq) goto loc_832207F0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e6e720
	ctx.lr = 0x832207CC;
	sub_82E6E720(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,20480
	ctx.r11.s64 = 20480;
	// ori r12,r12,23551
	ctx.r12.u64 = ctx.r12.u64 | 23551;
	// rlwimi r11,r23,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r23.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x8322084c
	goto loc_8322084C;
loc_832207F0:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322084c
	if (ctx.cr0.eq) goto loc_8322084C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e6e720
	ctx.lr = 0x83220804;
	sub_82E6E720(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r12,-1365
	ctx.r12.s64 = -1365;
	// rlwinm r9,r11,16,20,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFE;
	// rlwinm r10,r11,16,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FF;
	// and. r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r12,-683
	ctx.r12.s64 = -683;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// bne 0x83220848
	if (!ctx.cr0.eq) goto loc_83220848;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322084c
	if (ctx.cr6.eq) goto loc_8322084C;
	// rlwinm r11,r11,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// li r9,1365
	ctx.r9.s64 = 1365;
	// subfic r11,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r11.s64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8322084c
	if (ctx.cr6.eq) goto loc_8322084C;
loc_83220848:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8322084C:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r24,1
	ctx.r24.s64 = 1;
	// bne 0x8322092c
	if (!ctx.cr0.eq) goto loc_8322092C;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83220928
	if (!ctx.cr0.eq) goto loc_83220928;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83220928
	if (ctx.cr0.eq) goto loc_83220928;
loc_83220878:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8321c8d8
	ctx.lr = 0x83220880;
	sub_8321C8D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322090c
	if (ctx.cr0.eq) goto loc_8322090C;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x83220928
	if (ctx.cr6.gt) goto loc_83220928;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_8322089C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322090c
	if (ctx.cr6.eq) goto loc_8322090C;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83220900
	if (ctx.cr6.eq) goto loc_83220900;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832208c8
	if (ctx.cr0.eq) goto loc_832208C8;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x832208cc
	if (ctx.cr0.eq) goto loc_832208CC;
loc_832208C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832208CC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83220900
	if (ctx.cr0.eq) goto loc_83220900;
	// rlwinm r11,r10,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x83220900
	if (ctx.cr6.gt) goto loc_83220900;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321c8d8
	ctx.lr = 0x832208E8;
	sub_8321C8D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83220900
	if (ctx.cr0.eq) goto loc_83220900;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x83220908
	if (ctx.cr6.gt) goto loc_83220908;
loc_83220900:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x8322089c
	goto loc_8322089C;
loc_83220908:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8322090C:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83220928
	if (!ctx.cr0.eq) goto loc_83220928;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83220878
	if (!ctx.cr6.eq) goto loc_83220878;
loc_83220928:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8322092C:
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// beq cr6,0x83220954
	if (ctx.cr6.eq) goto loc_83220954;
	// cmplw cr6,r27,r22
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x83220954
	if (!ctx.cr6.eq) goto loc_83220954;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8321d908
	ctx.lr = 0x8322094C;
	sub_8321D908(ctx, base);
	// li r20,-1
	ctx.r20.s64 = -1;
	// li r22,0
	ctx.r22.s64 = 0;
loc_83220954:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// clrlwi r27,r11,20
	ctx.r27.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r27,r17
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r17.u32, ctx.xer);
	// bge cr6,0x83220b98
	if (!ctx.cr6.lt) goto loc_83220B98;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e6e720
	ctx.lr = 0x83220970;
	sub_82E6E720(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x83220988
	if (ctx.cr6.eq) goto loc_83220988;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x83220b98
	if (!ctx.cr6.eq) goto loc_83220B98;
loc_83220988:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r19,r25
	ctx.r19.u64 = ctx.r25.u64;
	// bl 0x8321c570
	ctx.lr = 0x83220994;
	sub_8321C570(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832209a4
	if (ctx.cr0.eq) goto loc_832209A4;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832209A4:
	// lwz r31,8(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm. r11,r31,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832209e4
	if (ctx.cr0.eq) goto loc_832209E4;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832209dc
	if (ctx.cr0.eq) goto loc_832209DC;
	// rlwinm r11,r31,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x1;
loc_832209BC:
	// clrlwi r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x832209cc
	if (ctx.cr6.eq) goto loc_832209CC;
loc_832209C8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_832209CC:
	// rlwinm. r11,r31,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83220a1c
	if (!ctx.cr0.eq) goto loc_83220A1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83220a44
	goto loc_83220A44;
loc_832209DC:
	// rlwinm r23,r31,14,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x1;
	// b 0x83220a14
	goto loc_83220A14;
loc_832209E4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8321c7e8
	ctx.lr = 0x832209EC;
	sub_8321C7E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832209c8
	if (!ctx.cr0.eq) goto loc_832209C8;
	// lwz r11,76(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 76);
	// rlwinm. r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832209c8
	if (ctx.cr0.eq) goto loc_832209C8;
	// clrlwi. r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83220a10
	if (ctx.cr0.eq) goto loc_83220A10;
	// rlwinm r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// b 0x832209bc
	goto loc_832209BC;
loc_83220A10:
	// rlwinm r23,r11,9,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
loc_83220A14:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x832209cc
	goto loc_832209CC;
loc_83220A1C:
	// rlwinm r11,r31,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x83220a3c
	if (ctx.cr6.eq) goto loc_83220A3C;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// beq cr6,0x83220a3c
	if (ctx.cr6.eq) goto loc_83220A3C;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83220a40
	if (!ctx.cr6.eq) goto loc_83220A40;
loc_83220A3C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83220A40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83220A44:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83220b78
	if (ctx.cr0.eq) goto loc_83220B78;
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// bne cr6,0x83220a58
	if (!ctx.cr6.eq) goto loc_83220A58;
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
loc_83220A58:
	// lwz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_83220A5C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83220b78
	if (ctx.cr6.eq) goto loc_83220B78;
	// lwz r9,16(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83220ab0
	if (ctx.cr6.eq) goto loc_83220AB0;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83220a88
	if (ctx.cr0.eq) goto loc_83220A88;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x83220a8c
	if (ctx.cr0.eq) goto loc_83220A8C;
loc_83220A88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83220A8C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83220ab0
	if (ctx.cr0.eq) goto loc_83220AB0;
	// rlwinm. r11,r10,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83220ab0
	if (!ctx.cr0.eq) goto loc_83220AB0;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x83220ab0
	if (!ctx.cr6.gt) goto loc_83220AB0;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_83220AB0:
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x83220a5c
	goto loc_83220A5C;
loc_83220AB8:
	// cmplwi cr6,r10,91
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 91, ctx.xer);
	// blt cr6,0x83220acc
	if (ctx.cr6.lt) goto loc_83220ACC;
	// cmplwi cr6,r10,94
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 94, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83220ad0
	if (!ctx.cr6.gt) goto loc_83220AD0;
loc_83220ACC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83220AD0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83220ae0
	if (!ctx.cr0.eq) goto loc_83220AE0;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// bne cr6,0x83220b9c
	if (!ctx.cr6.eq) goto loc_83220B9C;
loc_83220AE0:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x83220b1c
	if (ctx.cr6.eq) goto loc_83220B1C;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83220b1c
	if (ctx.cr0.eq) goto loc_83220B1C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e6e720
	ctx.lr = 0x83220AFC;
	sub_82E6E720(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,20480
	ctx.r11.s64 = 20480;
	// ori r12,r12,23551
	ctx.r12.u64 = ctx.r12.u64 | 23551;
	// rlwimi r11,r23,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r23.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_83220B1C:
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// blt cr6,0x83220b48
	if (ctx.cr6.lt) goto loc_83220B48;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// ble cr6,0x83220b4c
	if (!ctx.cr6.gt) goto loc_83220B4C;
loc_83220B48:
	// li r9,0
	ctx.r9.s64 = 0;
loc_83220B4C:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83220b60
	if (!ctx.cr0.eq) goto loc_83220B60;
	// cmplwi cr6,r11,123
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 123, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83220b64
	if (!ctx.cr6.eq) goto loc_83220B64;
loc_83220B60:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83220B64:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83220b74
	if (!ctx.cr0.eq) goto loc_83220B74;
	// rlwinm. r11,r10,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83220b78
	if (ctx.cr0.eq) goto loc_83220B78;
loc_83220B74:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83220B78:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83220ba4
	if (!ctx.cr0.eq) goto loc_83220BA4;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322074c
	if (!ctx.cr6.eq) goto loc_8322074C;
	// b 0x83220ba4
	goto loc_83220BA4;
loc_83220B98:
	// li r27,-1
	ctx.r27.s64 = -1;
loc_83220B9C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x83220c14
	if (!ctx.cr6.eq) goto loc_83220C14;
loc_83220BA4:
	// rlwinm r11,r18,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83220c14
	if (!ctx.cr0.eq) goto loc_83220C14;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83220c14
	if (ctx.cr6.eq) goto loc_83220C14;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r10,r10,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83220c14
	if (!ctx.cr0.eq) goto loc_83220C14;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r10,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83220c14
	if (!ctx.cr0.eq) goto loc_83220C14;
	// rlwinm. r10,r10,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83220c14
	if (!ctx.cr0.eq) goto loc_83220C14;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83220d3c
	if (!ctx.cr0.eq) goto loc_83220D3C;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x83220d3c
	if (ctx.cr0.eq) goto loc_83220D3C;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,16128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16128, ctx.xer);
	// bne cr6,0x83220d3c
	if (!ctx.cr6.eq) goto loc_83220D3C;
	// lhz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83220c14
	if (!ctx.cr0.eq) goto loc_83220C14;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// b 0x83220730
	goto loc_83220730;
loc_83220C14:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x83220c6c
	if (ctx.cr6.eq) goto loc_83220C6C;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83220c6c
	if (ctx.cr0.eq) goto loc_83220C6C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e6e720
	ctx.lr = 0x83220C30;
	sub_82E6E720(ctx, base);
	// lwz r11,20(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20);
	// rlwinm r10,r11,20,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83220c6c
	if (!ctx.cr6.eq) goto loc_83220C6C;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,20480
	ctx.r10.s64 = 20480;
	// ori r12,r12,23551
	ctx.r12.u64 = ctx.r12.u64 | 23551;
	// rlwimi r10,r23,10,21,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r23.u32, 10) & 0x400) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFBFF);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_83220C6C:
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// beq cr6,0x83220c98
	if (ctx.cr6.eq) goto loc_83220C98;
	// lwz r11,20(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83220c88
	if (!ctx.cr6.gt) goto loc_83220C88;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_83220C88:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8321d908
	ctx.lr = 0x83220C98;
	sub_8321D908(ctx, base);
loc_83220C98:
	// rlwinm r11,r14,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r21,108(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r19,104(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r20,100(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83220ccc
	if (!ctx.cr0.eq) goto loc_83220CCC;
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83220cd0
	if (ctx.cr6.eq) goto loc_83220CD0;
	// lwz r23,492(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// b 0x83220388
	goto loc_83220388;
loc_83220CCC:
	// mr r14,r22
	ctx.r14.u64 = ctx.r22.u64;
loc_83220CD0:
	// lwz r25,508(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83220d64
	if (ctx.cr6.eq) goto loc_83220D64;
	// lwz r10,728(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 728);
	// lwz r11,724(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 724);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x83220d68
	goto loc_83220D68;
loc_83220CF4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83204d78
	ctx.lr = 0x83220D00;
	sub_83204D78(ctx, base);
loc_83220D00:
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x83204d78
	ctx.lr = 0x83220D14;
	sub_83204D78(ctx, base);
loc_83220D14:
	// rlwinm r11,r30,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x83204d78
	ctx.lr = 0x83220D28;
	sub_83204D78(ctx, base);
loc_83220D28:
	// rlwinm r11,r30,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x83204d78
	ctx.lr = 0x83220D3C;
	sub_83204D78(ctx, base);
loc_83220D3C:
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x83204d78
	ctx.lr = 0x83220D50;
	sub_83204D78(ctx, base);
loc_83220D50:
	// rlwinm r11,r14,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x83204d78
	ctx.lr = 0x83220D64;
	sub_83204D78(ctx, base);
loc_83220D64:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_83220D68:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83220d88
	if (ctx.cr6.eq) goto loc_83220D88;
	// lwz r10,752(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 752);
	// lwz r11,748(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 748);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x83220d8c
	goto loc_83220D8C;
loc_83220D88:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_83220D8C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x83221020
	if (ctx.cr6.eq) goto loc_83221020;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831f7238
	ctx.lr = 0x83220D9C;
	sub_831F7238(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e6aca0
	ctx.lr = 0x83220DA8;
	sub_82E6ACA0(ctx, base);
	// lwz r11,560(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 560);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x83220dc0
	goto loc_83220DC0;
loc_83220DB4:
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_83220DC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83220db4
	if (!ctx.cr6.eq) goto loc_83220DB4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831fbaf8
	ctx.lr = 0x83220DD0;
	sub_831FBAF8(ctx, base);
	// lwz r31,560(r16)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r16.u32 + 560);
	// b 0x83220dec
	goto loc_83220DEC;
loc_83220DD8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x831fc538
	ctx.lr = 0x83220DE8;
	sub_831FC538(ctx, base);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83220DEC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83220dd8
	if (!ctx.cr6.eq) goto loc_83220DD8;
	// lwz r11,744(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 744);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83220ea0
	if (ctx.cr6.eq) goto loc_83220EA0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,736(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 736);
	// bl 0x831fbb18
	ctx.lr = 0x83220E14;
	sub_831FBB18(ctx, base);
	// lwz r11,732(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 732);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83220e2c
	if (ctx.cr0.eq) goto loc_83220E2C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_83220E2C:
	// stw r22,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r22.u32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
loc_83220E38:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83220e54
	if (ctx.cr6.eq) goto loc_83220E54;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne cr6,0x83220e58
	if (!ctx.cr6.eq) goto loc_83220E58;
loc_83220E54:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83220E58:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83220ea4
	if (!ctx.cr0.eq) goto loc_83220EA4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8321de48
	ctx.lr = 0x83220E68;
	sub_8321DE48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r5,r11,13
	ctx.r5.u64 = ctx.r11.u32 & 0x7FFFF;
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x83220e7c
	if (!ctx.cr6.eq) goto loc_83220E7C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_83220E7C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r4,r11,13
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFF;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x83220e90
	if (!ctx.cr6.eq) goto loc_83220E90;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_83220E90:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831fbb20
	ctx.lr = 0x83220E98;
	sub_831FBB20(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// b 0x83220e38
	goto loc_83220E38;
loc_83220EA0:
	// li r26,-1
	ctx.r26.s64 = -1;
loc_83220EA4:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83220f10
	if (ctx.cr6.eq) goto loc_83220F10;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// divw r4,r11,r10
	ctx.r4.s32 = ctx.r11.s32 / ctx.r10.s32;
	// bl 0x831fbb00
	ctx.lr = 0x83220EC4;
	sub_831FBB00(ctx, base);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// lwz r31,12(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// b 0x83220f08
	goto loc_83220F08;
loc_83220ED0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r6,r11,31,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// beq 0x83220efc
	if (ctx.cr0.eq) goto loc_83220EFC;
	// bl 0x831fbb08
	ctx.lr = 0x83220EF8;
	sub_831FBB08(ctx, base);
	// b 0x83220f00
	goto loc_83220F00;
loc_83220EFC:
	// bl 0x831fbb10
	ctx.lr = 0x83220F00;
	sub_831FBB10(ctx, base);
loc_83220F00:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_83220F08:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83220ed0
	if (ctx.cr6.lt) goto loc_83220ED0;
loc_83220F10:
	// lwz r29,16(r16)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831fbac8
	ctx.lr = 0x83220F20;
	sub_831FBAC8(ctx, base);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83220f8c
	if (ctx.cr6.eq) goto loc_83220F8C;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_83220F30:
	// lwz r11,12(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x83220f4c
	if (!ctx.cr6.eq) goto loc_83220F4C;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_83220F4C:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83220f60
	if (ctx.cr6.eq) goto loc_83220F60;
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// b 0x83220f64
	goto loc_83220F64;
loc_83220F60:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_83220F64:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x831fc530
	ctx.lr = 0x83220F7C;
	sub_831FC530(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83220f30
	if (ctx.cr6.lt) goto loc_83220F30;
loc_83220F8C:
	// lwz r31,8(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// b 0x83221018
	goto loc_83221018;
loc_83220F94:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,114
	ctx.r6.s64 = 114;
	// rlwinm r11,r10,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x83220fb4
	if (ctx.cr6.eq) goto loc_83220FB4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x83221014
	if (!ctx.cr6.eq) goto loc_83221014;
	// li r6,99
	ctx.r6.s64 = 99;
loc_83220FB4:
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// beq 0x83220fc8
	if (ctx.cr0.eq) goto loc_83220FC8;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x83220fe4
	goto loc_83220FE4;
loc_83220FC8:
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83220fd8
	if (ctx.cr0.eq) goto loc_83220FD8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83220fe4
	goto loc_83220FE4;
loc_83220FD8:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_83220FE4:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,30,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FC;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// rlwinm r9,r4,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// rlwinm r8,r4,3,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// rlwinm r5,r4,17,18,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0x3FFF;
	// clrlwi r4,r4,17
	ctx.r4.u64 = ctx.r4.u32 & 0x7FFF;
	// bl 0x831fbad0
	ctx.lr = 0x83221014;
	sub_831FBAD0(ctx, base);
loc_83221014:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
loc_83221018:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x83220f94
	if (ctx.cr6.lt) goto loc_83220F94;
loc_83221020:
	// lwz r11,44(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 44);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83221038
	if (ctx.cr0.eq) goto loc_83221038;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8322103c
	if (ctx.cr0.eq) goto loc_8322103C;
loc_83221038:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8322103C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83221070
	if (ctx.cr0.eq) goto loc_83221070;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e72c88
	ctx.lr = 0x8322104C;
	sub_82E72C88(ctx, base);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83221070
	if (ctx.cr6.eq) goto loc_83221070;
	// lwz r3,756(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 756);
	// bl 0x82e73890
	ctx.lr = 0x83221060;
	sub_82E73890(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lwz r3,16(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// rlwinm r4,r11,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x831f7228
	ctx.lr = 0x83221070;
	sub_831F7228(ctx, base);
loc_83221070:
	// stw r20,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r20.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r19,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r19.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83221084"))) PPC_WEAK_FUNC(sub_83221084);
PPC_FUNC_IMPL(__imp__sub_83221084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83221088"))) PPC_WEAK_FUNC(sub_83221088);
PPC_FUNC_IMPL(__imp__sub_83221088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x83221090;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r6,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r6.u32);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// stw r7,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r7.u32);
	// lis r14,-1
	ctx.r14.s64 = -65536;
	// stw r21,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r21.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r31,128
	ctx.r31.s64 = 128;
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x832210d4
	if (!ctx.cr6.eq) goto loc_832210D4;
	// li r31,132
	ctx.r31.s64 = 132;
loc_832210D4:
	// lwz r11,44(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 44);
	// li r19,0
	ctx.r19.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832210f4
	if (ctx.cr0.eq) goto loc_832210F4;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq 0x832210f8
	if (ctx.cr0.eq) goto loc_832210F8;
loc_832210F4:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_832210F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83221104
	if (ctx.cr0.eq) goto loc_83221104;
	// ori r31,r31,64
	ctx.r31.u64 = ctx.r31.u64 | 64;
loc_83221104:
	// bl 0x82e71c98
	ctx.lr = 0x83221108;
	sub_82E71C98(ctx, base);
	// stw r3,756(r22)
	PPC_STORE_U32(ctx.r22.u32 + 756, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e73588
	ctx.lr = 0x83221114;
	sub_82E73588(ctx, base);
	// lwz r4,56(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 56);
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// beq cr6,0x8322113c
	if (ctx.cr6.eq) goto loc_8322113C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322113c
	if (ctx.cr0.eq) goto loc_8322113C;
	// lwz r20,20(r4)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
loc_8322113C:
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// beq cr6,0x832212e0
	if (ctx.cr6.eq) goto loc_832212E0;
	// lwz r11,336(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 336);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832211c4
	if (!ctx.cr6.gt) goto loc_832211C4;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r8,r22,128
	ctx.r8.s64 = ctx.r22.s64 + 128;
loc_83221174:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r9,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x83221194
	if (ctx.cr6.gt) goto loc_83221194;
	// rlwinm r3,r10,12,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x83221194
	if (!ctx.cr6.gt) goto loc_83221194;
	// rlwimi r10,r11,20,8,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xF00000) | (ctx.r10.u64 & 0xFFFFFFFFFF0FFFFF);
loc_83221194:
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x832211a4
	if (!ctx.cr6.eq) goto loc_832211A4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x832211b4
	goto loc_832211B4;
loc_832211A4:
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x832211b4
	if (!ctx.cr6.eq) goto loc_832211B4;
	// clrlwi r11,r9,28
	ctx.r11.u64 = ctx.r9.u32 & 0xF;
	// or r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 | ctx.r6.u64;
loc_832211B4:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// bne 0x83221174
	if (!ctx.cr0.eq) goto loc_83221174;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_832211C4:
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x832212d4
	if (ctx.cr6.gt) goto loc_832212D4;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,-1296
	ctx.r12.s64 = ctx.r12.s64 + -1296;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-31966
	ctx.r12.s64 = -2094923776;
	// addi r12,r12,4608
	ctx.r12.s64 = ctx.r12.s64 + 4608;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_83221200;
	case 1:
		goto loc_83221218;
	case 2:
		goto loc_83221224;
	case 3:
		goto loc_83221230;
	case 4:
		goto loc_83221224;
	case 5:
		goto loc_83221238;
	case 6:
		goto loc_83221224;
	case 7:
		goto loc_83221244;
	case 8:
		goto loc_83221224;
	case 9:
		goto loc_83221250;
	case 10:
		goto loc_83221224;
	case 11:
		goto loc_83221258;
	case 12:
		goto loc_83221224;
	case 13:
		goto loc_83221260;
	case 14:
		goto loc_83221224;
	case 15:
		goto loc_83221244;
	default:
		__builtin_unreachable();
	}
loc_83221200:
	// oris r11,r10,1792
	ctx.r11.u64 = ctx.r10.u64 | 117440512;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8322126c
	if (ctx.cr6.eq) goto loc_8322126C;
	// stw r30,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r30.u32);
	// b 0x8322126c
	goto loc_8322126C;
loc_83221218:
	// rlwinm r11,r10,0,8,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF8FFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8322126c
	goto loc_8322126C;
loc_83221224:
	// li r4,3547
	ctx.r4.s64 = 3547;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204d78
	ctx.lr = 0x83221230;
	sub_83204D78(ctx, base);
loc_83221230:
	// rlwimi r10,r30,25,5,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 25) & 0x7000000) | (ctx.r10.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x83221268
	goto loc_83221268;
loc_83221238:
	// li r11,3
	ctx.r11.s64 = 3;
loc_8322123C:
	// rlwimi r10,r11,24,5,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0x7000000) | (ctx.r10.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x83221268
	goto loc_83221268;
loc_83221244:
	// li r4,3635
	ctx.r4.s64 = 3635;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204d78
	ctx.lr = 0x83221250;
	sub_83204D78(ctx, base);
loc_83221250:
	// rlwimi r10,r30,26,5,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 26) & 0x7000000) | (ctx.r10.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x83221268
	goto loc_83221268;
loc_83221258:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8322123c
	goto loc_8322123C;
loc_83221260:
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwimi r10,r11,25,5,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 25) & 0x7000000) | (ctx.r10.u64 & 0xFFFFFFFFF8FFFFFF);
loc_83221268:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8322126C:
	// lwz r11,536(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 536);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832212a8
	if (!ctx.cr6.gt) goto loc_832212A8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r10,r22,348
	ctx.r10.s64 = ctx.r22.s64 + 348;
loc_83221280:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// cmplwi cr6,r9,18
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 18, ctx.xer);
	// bne cr6,0x8322129c
	if (!ctx.cr6.eq) goto loc_8322129C;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// oris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 2147483648;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_8322129C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x83221280
	if (!ctx.cr0.eq) goto loc_83221280;
loc_832212A8:
	// addi r4,r22,948
	ctx.r4.s64 = ctx.r22.s64 + 948;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8321d668
	ctx.lr = 0x832212B4;
	sub_8321D668(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x83221490
	if (ctx.cr0.eq) goto loc_83221490;
	// lis r4,16961
	ctx.r4.s64 = 1111556096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,21571
	ctx.r4.u64 = ctx.r4.u64 | 21571;
	// bl 0x82f1b6d8
	ctx.lr = 0x832212CC;
	sub_82F1B6D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83221494
	goto loc_83221494;
loc_832212D4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204d78
	ctx.lr = 0x832212E0;
	sub_83204D78(ctx, base);
loc_832212E0:
	// lwz r11,536(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 536);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832212a8
	if (!ctx.cr6.gt) goto loc_832212A8;
	// addi r31,r22,348
	ctx.r31.s64 = ctx.r22.s64 + 348;
loc_832212F4:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x83221478
	if (ctx.cr6.eq) goto loc_83221478;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_8322130C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83221344
	if (ctx.cr6.eq) goto loc_83221344;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322133c
	if (ctx.cr6.eq) goto loc_8322133C;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r7,r7,0,4,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8322133c
	if (ctx.cr0.eq) goto loc_8322133C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x83221344
	if (!ctx.cr6.eq) goto loc_83221344;
loc_8322133C:
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8322130c
	goto loc_8322130C;
loc_83221344:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi. r11,r7,27
	ctx.r11.u64 = ctx.r7.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83221434
	if (ctx.cr0.eq) goto loc_83221434;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x83221418
	if (ctx.cr6.eq) goto loc_83221418;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x832213bc
	if (ctx.cr6.eq) goto loc_832213BC;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x83221450
	if (!ctx.cr6.eq) goto loc_83221450;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83221478
	if (ctx.cr6.eq) goto loc_83221478;
	// oris r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 262144;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_8322137C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83221398
	if (ctx.cr6.eq) goto loc_83221398;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83221398
	if (!ctx.cr0.eq) goto loc_83221398;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8322137c
	goto loc_8322137C;
loc_83221398:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rlwimi r9,r11,20,19,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0x1FE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r11,r9,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwimi r6,r11,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// b 0x83221410
	goto loc_83221410;
loc_832213BC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83221478
	if (ctx.cr6.eq) goto loc_83221478;
	// oris r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 262144;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_832213D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832213ec
	if (ctx.cr6.eq) goto loc_832213EC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x832213ec
	if (!ctx.cr0.eq) goto loc_832213EC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x832213d0
	goto loc_832213D0;
loc_832213EC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r7,17,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0x2;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r7,r6,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwimi r8,r11,20,19,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0x1FE0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r7,r7,0,24,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r11,r8,3,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFF00;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 | ctx.r7.u64;
loc_83221410:
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// b 0x83221478
	goto loc_83221478;
loc_83221418:
	// rlwinm. r11,r7,0,23,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1E0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83221450
	if (!ctx.cr0.eq) goto loc_83221450;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83221478
	if (ctx.cr6.eq) goto loc_83221478;
	// li r4,3550
	ctx.r4.s64 = 3550;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204d78
	ctx.lr = 0x83221434;
	sub_83204D78(ctx, base);
loc_83221434:
	// rlwinm. r11,r7,0,23,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1E0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83221450
	if (!ctx.cr0.eq) goto loc_83221450;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83221478
	if (ctx.cr6.eq) goto loc_83221478;
	// li r4,3549
	ctx.r4.s64 = 3549;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204d78
	ctx.lr = 0x83221450;
	sub_83204D78(ctx, base);
loc_83221450:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83221478
	if (!ctx.cr6.eq) goto loc_83221478;
	// rlwinm. r11,r7,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83221478
	if (!ctx.cr0.eq) goto loc_83221478;
	// li r4,3596
	ctx.r4.s64 = 3596;
	// lwz r5,-4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204b08
	ctx.lr = 0x83221470;
	sub_83204B08(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_83221478:
	// lwz r11,536(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 536);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832212f4
	if (ctx.cr6.lt) goto loc_832212F4;
	// b 0x832212a8
	goto loc_832212A8;
loc_83221490:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_83221494:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r3,760(r22)
	PPC_STORE_U32(ctx.r22.u32 + 760, ctx.r3.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// std r19,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r19.u64);
	// li r5,28
	ctx.r5.s64 = 28;
	// std r19,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r19.u64);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// std r19,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r19.u64);
	// stw r19,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r19.u32);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r21,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r21.u32);
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// bl 0x82f1b9c0
	ctx.lr = 0x832214D4;
	sub_82F1B9C0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x832214ec
	if (!ctx.cr0.lt) goto loc_832214EC;
	// stw r5,2464(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2464, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204d78
	ctx.lr = 0x832214EC;
	sub_83204D78(ctx, base);
loc_832214EC:
	// lwz r31,16(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83221524
	if (ctx.cr6.eq) goto loc_83221524;
	// lwz r8,12(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_83221504:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8321d100
	ctx.lr = 0x8322150C;
	sub_8321D100(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83221518
	if (ctx.cr0.eq) goto loc_83221518;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_83221518:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r8,40
	ctx.r8.s64 = ctx.r8.s64 + 40;
	// bne 0x83221504
	if (!ctx.cr0.eq) goto loc_83221504;
loc_83221524:
	// stw r17,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r17.u32);
	// li r15,-1
	ctx.r15.s64 = -1;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x83221b08
	if (ctx.cr6.eq) goto loc_83221B08;
	// rlwinm r27,r17,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8321e0d0
	ctx.lr = 0x83221548;
	sub_8321E0D0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
	// mr r16,r19
	ctx.r16.u64 = ctx.r19.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83221650
	if (ctx.cr6.eq) goto loc_83221650;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// addi r26,r11,25952
	ctx.r26.s64 = ctx.r11.s64 + 25952;
loc_83221570:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// add r9,r24,r11
	ctx.r9.u64 = ctx.r24.u64 + ctx.r11.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8321d100
	ctx.lr = 0x83221580;
	sub_8321D100(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83221644
	if (ctx.cr0.eq) goto loc_83221644;
	// stwx r9,r28,r25
	PPC_STORE_U32(ctx.r28.u32 + ctx.r25.u32, ctx.r9.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r29,r11,24
	ctx.r29.s64 = ctx.r11.s64 + 24;
	// lwz r30,24(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// beq 0x83221640
	if (ctx.cr0.eq) goto loc_83221640;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// beq cr6,0x83221640
	if (ctx.cr6.eq) goto loc_83221640;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_832215B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832215b8
	if (!ctx.cr6.eq) goto loc_832215B8;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8321e178
	ctx.lr = 0x832215E8;
	sub_8321E178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cb7580
	ctx.lr = 0x83221600;
	sub_82CB7580(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne cr6,0x83221638
	if (!ctx.cr6.eq) goto loc_83221638;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8321e0d0
	ctx.lr = 0x83221620;
	sub_8321E0D0(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8321e0d0
	ctx.lr = 0x83221634;
	sub_8321E0D0(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
loc_83221638:
	// stwx r30,r28,r18
	PPC_STORE_U32(ctx.r28.u32 + ctx.r18.u32, ctx.r30.u32);
	// stwx r29,r28,r16
	PPC_STORE_U32(ctx.r28.u32 + ctx.r16.u32, ctx.r29.u32);
loc_83221640:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_83221644:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r24,r24,40
	ctx.r24.s64 = ctx.r24.s64 + 40;
	// bne 0x83221570
	if (!ctx.cr0.eq) goto loc_83221570;
loc_83221650:
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-12304
	ctx.r6.s64 = ctx.r11.s64 + -12304;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cb3100
	ctx.lr = 0x83221668;
	sub_82CB3100(ctx, base);
	// mulli r30,r17,20
	ctx.r30.s64 = ctx.r17.s64 * 20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8321e0d0
	ctx.lr = 0x8322167C;
	sub_8321E0D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r3,760(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 760);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f1b9c0
	ctx.lr = 0x8322169C;
	sub_82F1B9C0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x832216b4
	if (!ctx.cr0.lt) goto loc_832216B4;
	// stw r5,2464(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2464, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204d78
	ctx.lr = 0x832216B4;
	sub_83204D78(ctx, base);
loc_832216B4:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x83221acc
	if (ctx.cr6.eq) goto loc_83221ACC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r21,r31,6
	ctx.r21.s64 = ctx.r31.s64 + 6;
	// lfd f29,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// lfs f30,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
loc_832216D8:
	// lwz r28,0(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r20,r21,-6
	ctx.r20.s64 = ctx.r21.s64 + -6;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8321d100
	ctx.lr = 0x832216E8;
	sub_8321D100(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83221aac
	if (ctx.cr0.eq) goto loc_83221AAC;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83221b3c
	if (!ctx.cr6.eq) goto loc_83221B3C;
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// li r10,40
	ctx.r10.s64 = 40;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// rlwinm r29,r9,29,18,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x3FFF;
	// divw r4,r11,r10
	ctx.r4.s32 = ctx.r11.s32 / ctx.r10.s32;
	// bl 0x832aa2d0
	ctx.lr = 0x83221720;
	sub_832AA2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lwz r3,760(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 760);
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x82f1b9c0
	ctx.lr = 0x8322173C;
	sub_82F1B9C0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt 0x83221b4c
	if (ctx.cr0.lt) goto loc_83221B4C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,12,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1FF;
	// sth r11,0(r21)
	PPC_STORE_U16(ctx.r21.u32 + 0, ctx.r11.u16);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,25,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FF;
	// sth r11,2(r21)
	PPC_STORE_U16(ctx.r21.u32 + 2, ctx.r11.u16);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// sth r11,-2(r21)
	PPC_STORE_U16(ctx.r21.u32 + -2, ctx.r11.u16);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x832217f4
	if (ctx.cr6.lt) goto loc_832217F4;
	// beq cr6,0x832217d4
	if (ctx.cr6.eq) goto loc_832217D4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x83221814
	if (ctx.cr6.lt) goto loc_83221814;
	// bne cr6,0x83221b5c
	if (!ctx.cr6.eq) goto loc_83221B5C;
	// lwz r11,780(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322179c
	if (ctx.cr6.eq) goto loc_8322179C;
	// lwz r11,776(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 776);
	// b 0x832217c8
	goto loc_832217C8;
loc_8322179C:
	// lwz r11,40(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832217b0
	if (ctx.cr0.eq) goto loc_832217B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832217c8
	goto loc_832217C8;
loc_832217B0:
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r14,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r14.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,31,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x10;
	// xori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 ^ 16;
loc_832217C8:
	// lhz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x83221810
	goto loc_83221810;
loc_832217D4:
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x83221814
	if (!ctx.cr6.eq) goto loc_83221814;
	// lhz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// b 0x83221810
	goto loc_83221810;
loc_832217F4:
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x83221814
	if (!ctx.cr6.eq) goto loc_83221814;
	// lhz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
loc_83221810:
	// sth r11,0(r21)
	PPC_STORE_U16(ctx.r21.u32 + 0, ctx.r11.u16);
loc_83221814:
	// addi r7,r21,6
	ctx.r7.s64 = ctx.r21.s64 + 6;
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,760(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 760);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82f40700
	ctx.lr = 0x8322182C;
	sub_82F40700(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt 0x83221b68
	if (ctx.cr0.lt) goto loc_83221B68;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x83221aac
	if (ctx.cr6.eq) goto loc_83221AAC;
	// lwz r24,16(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r11,76(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83221860
	if (!ctx.cr6.eq) goto loc_83221860;
	// lwz r11,56(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83221aac
	if (ctx.cr6.eq) goto loc_83221AAC;
loc_83221860:
	// lhz r11,2(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 2);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r27,r11,0,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r23,r27,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8321e0d0
	ctx.lr = 0x83221884;
	sub_8321E0D0(ctx, base);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,56(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// rlwinm r11,r11,28,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// divwu r29,r29,r11
	ctx.r29.u32 = ctx.r29.u32 / ctx.r11.u32;
	// twllei r11,0
	// beq cr6,0x832218c8
	if (ctx.cr6.eq) goto loc_832218C8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832a9068
	ctx.lr = 0x832218C4;
	sub_832A9068(ctx, base);
	// lwz r26,32(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
loc_832218C8:
	// lwz r11,56(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832218f4
	if (ctx.cr6.eq) goto loc_832218F4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83221a58
	if (ctx.cr6.eq) goto loc_83221A58;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x832a90e0
	ctx.lr = 0x832218E8;
	sub_832A90E0(ctx, base);
	// lwz r26,12(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// b 0x8322190c
	goto loc_8322190C;
loc_832218F4:
	// lwz r11,76(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83221a58
	if (!ctx.cr6.lt) goto loc_83221A58;
	// lwz r11,80(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 80);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_8322190C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83221a34
	if (ctx.cr6.eq) goto loc_83221A34;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x83221a58
	if (!ctx.cr6.lt) goto loc_83221A58;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r10,r10,28,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x832219e8
	if (ctx.cr6.lt) goto loc_832219E8;
	// beq cr6,0x832219b0
	if (ctx.cr6.eq) goto loc_832219B0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x83221b88
	if (!ctx.cr6.lt) goto loc_83221B88;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8322198c
	if (ctx.cr6.lt) goto loc_8322198C;
	// beq cr6,0x8322196c
	if (ctx.cr6.eq) goto loc_8322196C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8322195c
	if (ctx.cr6.lt) goto loc_8322195C;
	// bne cr6,0x83221b94
	if (!ctx.cr6.eq) goto loc_83221B94;
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// b 0x8322197c
	goto loc_8322197C;
loc_8322195C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// b 0x83221978
	goto loc_83221978;
loc_8322196C:
	// lwa r11,8(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 8));
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
loc_83221978:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
loc_8322197C:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r10,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, temp.u32);
	// b 0x83221a34
	goto loc_83221A34;
loc_8322198C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832219a0
	if (ctx.cr6.eq) goto loc_832219A0;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x832219a4
	goto loc_832219A4;
loc_832219A0:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_832219A4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
	// b 0x83221a34
	goto loc_83221A34;
loc_832219B0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x83221a1c
	if (ctx.cr6.lt) goto loc_83221A1C;
	// beq cr6,0x832219e0
	if (ctx.cr6.eq) goto loc_832219E0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x832219e0
	if (ctx.cr6.lt) goto loc_832219E0;
	// bne cr6,0x83221ba0
	if (!ctx.cr6.eq) goto loc_83221BA0;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.f0.u32);
	// b 0x83221a34
	goto loc_83221A34;
loc_832219E0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83221a2c
	goto loc_83221A2C;
loc_832219E8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x83221a1c
	if (ctx.cr6.lt) goto loc_83221A1C;
	// beq cr6,0x83221a1c
	if (ctx.cr6.eq) goto loc_83221A1C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x83221a1c
	if (ctx.cr6.lt) goto loc_83221A1C;
	// bne cr6,0x83221bac
	if (!ctx.cr6.eq) goto loc_83221BAC;
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x83221a2c
	if (!ctx.cr6.eq) goto loc_83221A2C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83221a2c
	goto loc_83221A2C;
loc_83221A1C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
loc_83221A2C:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
loc_83221A34:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// twllei r29,0
	// divwu r11,r31,r29
	ctx.r11.u32 = ctx.r31.u32 / ctx.r29.u32;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// subf. r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832218c8
	if (!ctx.cr0.eq) goto loc_832218C8;
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r31,r11,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x832218c8
	goto loc_832218C8;
loc_83221A58:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x83221a88
	if (!ctx.cr6.eq) goto loc_83221A88;
	// rlwinm. r11,r27,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83221a88
	if (ctx.cr0.eq) goto loc_83221A88;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
loc_83221A74:
	// li r9,1
	ctx.r9.s64 = 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x83221a74
	if (!ctx.cr0.eq) goto loc_83221A74;
loc_83221A88:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,760(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 760);
	// addi r7,r20,16
	ctx.r7.s64 = ctx.r20.s64 + 16;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f1b9c0
	ctx.lr = 0x83221AA4;
	sub_82F1B9C0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt 0x83221b78
	if (ctx.cr0.lt) goto loc_83221B78;
loc_83221AAC:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r21,r21,20
	ctx.r21.s64 = ctx.r21.s64 + 20;
	// cmplw cr6,r19,r17
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x832216d8
	if (ctx.cr6.lt) goto loc_832216D8;
	// lwz r20,92(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r21,444(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
loc_83221ACC:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x83221b08
	if (ctx.cr6.eq) goto loc_83221B08;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x83221b08
	if (ctx.cr6.eq) goto loc_83221B08;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// subf r8,r18,r16
	ctx.r8.s64 = ctx.r16.s64 - ctx.r18.s64;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
loc_83221AE8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83221afc
	if (ctx.cr6.eq) goto loc_83221AFC;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
loc_83221AFC:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x83221ae8
	if (!ctx.cr0.eq) goto loc_83221AE8;
loc_83221B08:
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// std r19,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r19.u64);
	// stw r19,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r19.u32);
	// bl 0x82eaabb8
	ctx.lr = 0x83221B24;
	sub_82EAABB8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x83221bb8
	if (!ctx.cr0.lt) goto loc_83221BB8;
	// stw r5,2464(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2464, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204d78
	ctx.lr = 0x83221B3C;
	sub_83204D78(ctx, base);
loc_83221B3C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,-1236
	ctx.r5.s64 = ctx.r11.s64 + -1236;
	// bl 0x83204d78
	ctx.lr = 0x83221B4C;
	sub_83204D78(ctx, base);
loc_83221B4C:
	// stw r5,2464(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2464, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204d78
	ctx.lr = 0x83221B5C;
	sub_83204D78(ctx, base);
loc_83221B5C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204d78
	ctx.lr = 0x83221B68;
	sub_83204D78(ctx, base);
loc_83221B68:
	// stw r5,2464(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2464, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204d78
	ctx.lr = 0x83221B78;
	sub_83204D78(ctx, base);
loc_83221B78:
	// stw r5,2464(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2464, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204d78
	ctx.lr = 0x83221B88;
	sub_83204D78(ctx, base);
loc_83221B88:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204d78
	ctx.lr = 0x83221B94;
	sub_83204D78(ctx, base);
loc_83221B94:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204d78
	ctx.lr = 0x83221BA0;
	sub_83204D78(ctx, base);
loc_83221BA0:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204d78
	ctx.lr = 0x83221BAC;
	sub_83204D78(ctx, base);
loc_83221BAC:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204d78
	ctx.lr = 0x83221BB8;
	sub_83204D78(ctx, base);
loc_83221BB8:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,760(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 760);
	// addi r7,r1,232
	ctx.r7.s64 = ctx.r1.s64 + 232;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// bl 0x82f1b9c0
	ctx.lr = 0x83221BD4;
	sub_82F1B9C0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x83221bec
	if (!ctx.cr0.lt) goto loc_83221BEC;
	// stw r5,2464(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2464, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204d78
	ctx.lr = 0x83221BEC;
	sub_83204D78(ctx, base);
loc_83221BEC:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r3,760(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 760);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-1248
	ctx.r4.s64 = ctx.r11.s64 + -1248;
	// addi r7,r1,212
	ctx.r7.s64 = ctx.r1.s64 + 212;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// bl 0x82f1b9c0
	ctx.lr = 0x83221C0C;
	sub_82F1B9C0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x83221c24
	if (!ctx.cr0.lt) goto loc_83221C24;
	// stw r5,2464(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2464, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204d78
	ctx.lr = 0x83221C24;
	sub_83204D78(ctx, base);
loc_83221C24:
	// lwz r3,760(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 760);
	// bl 0x82f1b930
	ctx.lr = 0x83221C2C;
	sub_82F1B930(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// cmplwi cr6,r31,32768
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32768, ctx.xer);
	// ble cr6,0x83221c44
	if (!ctx.cr6.gt) goto loc_83221C44;
	// li r4,4548
	ctx.r4.s64 = 4548;
	// bl 0x83204d78
	ctx.lr = 0x83221C44;
	sub_83204D78(ctx, base);
loc_83221C44:
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8321e0d0
	ctx.lr = 0x83221C50;
	sub_8321E0D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,760(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 760);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f1bca0
	ctx.lr = 0x83221C68;
	sub_82F1BCA0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x83221c80
	if (!ctx.cr0.lt) goto loc_83221C80;
	// stw r5,2464(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2464, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204d78
	ctx.lr = 0x83221C80;
	sub_83204D78(ctx, base);
loc_83221C80:
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// lwz r3,756(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 756);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82e73590
	ctx.lr = 0x83221C9C;
	sub_82E73590(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x83221cb4
	if (ctx.cr6.eq) goto loc_83221CB4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x831f91f8
	ctx.lr = 0x83221CB4;
	sub_831F91F8(ctx, base);
loc_83221CB4:
	// lwz r11,40(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83221de4
	if (ctx.cr0.eq) goto loc_83221DE4;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83221d70
	if (!ctx.cr0.eq) goto loc_83221D70;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83221d70
	if (ctx.cr0.eq) goto loc_83221D70;
loc_83221CD8:
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83221d54
	if (!ctx.cr0.eq) goto loc_83221D54;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83221d54
	if (ctx.cr0.eq) goto loc_83221D54;
loc_83221CF0:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// blt cr6,0x83221d08
	if (ctx.cr6.lt) goto loc_83221D08;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// ble cr6,0x83221d18
	if (!ctx.cr6.gt) goto loc_83221D18;
loc_83221D08:
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// blt cr6,0x83221d20
	if (ctx.cr6.lt) goto loc_83221D20;
	// cmplwi cr6,r11,71
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 71, ctx.xer);
	// bgt cr6,0x83221d20
	if (ctx.cr6.gt) goto loc_83221D20;
loc_83221D18:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83221d24
	goto loc_83221D24;
loc_83221D20:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83221D24:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83221d38
	if (ctx.cr0.eq) goto loc_83221D38;
	// lwz r11,68(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,68(r9)
	PPC_STORE_U32(ctx.r9.u32 + 68, ctx.r11.u32);
loc_83221D38:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83221d54
	if (!ctx.cr0.eq) goto loc_83221D54;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83221cf0
	if (!ctx.cr6.eq) goto loc_83221CF0;
loc_83221D54:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83221d70
	if (!ctx.cr0.eq) goto loc_83221D70;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83221cd8
	if (!ctx.cr6.eq) goto loc_83221CD8;
loc_83221D70:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83221dc4
	if (ctx.cr0.eq) goto loc_83221DC4;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x83221dc4
	goto loc_83221DC4;
loc_83221D88:
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm. r10,r9,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83221dc4
	if (!ctx.cr0.eq) goto loc_83221DC4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_83221D98:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83221db8
	if (ctx.cr6.eq) goto loc_83221DB8;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,68(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// rlwinm. r7,r7,0,3,3
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x83221dc4
	if (ctx.cr0.eq) goto loc_83221DC4;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x83221d98
	goto loc_83221D98;
loc_83221DB8:
	// oris r10,r9,4096
	ctx.r10.u64 = ctx.r9.u64 | 268435456;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
loc_83221DC4:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83221ddc
	if (!ctx.cr0.eq) goto loc_83221DDC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83221d88
	if (!ctx.cr6.eq) goto loc_83221D88;
loc_83221DDC:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83221d70
	if (!ctx.cr0.eq) goto loc_83221D70;
loc_83221DE4:
	// lwz r10,724(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 724);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r8,748(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 748);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lwz r4,4(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// clrlwi. r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stw r20,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r20.u32);
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// beq 0x83221e18
	if (ctx.cr0.eq) goto loc_83221E18;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_83221E18:
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8321efb8
	ctx.lr = 0x83221E28;
	sub_8321EFB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x83221e4c
	if (ctx.cr6.eq) goto loc_83221E4C;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x831fbab8
	ctx.lr = 0x83221E40;
	sub_831FBAB8(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r3,756(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 756);
	// bl 0x82e6e668
	ctx.lr = 0x83221E4C;
	sub_82E6E668(ctx, base);
loc_83221E4C:
	// lwz r11,44(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 44);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83221e64
	if (ctx.cr0.eq) goto loc_83221E64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x83221e68
	if (ctx.cr0.eq) goto loc_83221E68;
loc_83221E64:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83221E68:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83221e84
	if (ctx.cr0.eq) goto loc_83221E84;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8321efb8
	ctx.lr = 0x83221E84;
	sub_8321EFB8(ctx, base);
loc_83221E84:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x83221eb8
	if (ctx.cr6.eq) goto loc_83221EB8;
	// lwz r11,56(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 56);
	// lwz r3,756(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 756);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82e735f8
	ctx.lr = 0x83221EA0;
	sub_82E735F8(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x831fbab8
	ctx.lr = 0x83221EAC;
	sub_831FBAB8(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// lwz r3,756(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 756);
	// bl 0x82e6e668
	ctx.lr = 0x83221EB8;
	sub_82E6E668(ctx, base);
loc_83221EB8:
	// lwz r3,756(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 756);
	// bl 0x82e73600
	ctx.lr = 0x83221EC0;
	sub_82E73600(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x83221ee0
	if (ctx.cr6.eq) goto loc_83221EE0;
	// lwz r3,756(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 756);
	// bl 0x82e73890
	ctx.lr = 0x83221ED0;
	sub_82E73890(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r4,r11,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x831f71c8
	ctx.lr = 0x83221EE0;
	sub_831F71C8(ctx, base);
loc_83221EE0:
	// lwz r3,756(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 756);
	// bl 0x82e73918
	ctx.lr = 0x83221EE8;
	sub_82E73918(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82ee3870
	ctx.lr = 0x83221EF0;
	sub_82EE3870(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x83221f08
	if (!ctx.cr0.lt) goto loc_83221F08;
	// stw r5,2464(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2464, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204d78
	ctx.lr = 0x83221F08;
	sub_83204D78(ctx, base);
loc_83221F08:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83221F20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83221F3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,756(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 756);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82e73608
	ctx.lr = 0x83221F54;
	sub_82E73608(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,756(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 756);
	// bl 0x82e73580
	ctx.lr = 0x83221F60;
	sub_82E73580(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r19,756(r22)
	PPC_STORE_U32(ctx.r22.u32 + 756, ctx.r19.u32);
	// blt cr6,0x83221fe4
	if (ctx.cr6.lt) goto loc_83221FE4;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x83221f9c
	if (ctx.cr6.eq) goto loc_83221F9C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r30,r11,-17624
	ctx.r30.s64 = ctx.r11.s64 + -17624;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83221F90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82e6ef90
	ctx.lr = 0x83221F9C;
	sub_82E6EF90(ctx, base);
loc_83221F9C:
	// lwz r30,468(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83221fe4
	if (ctx.cr6.eq) goto loc_83221FE4;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83221FBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82eaaf70
	ctx.lr = 0x83221FC4;
	sub_82EAAF70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x83221fe4
	if (!ctx.cr0.lt) goto loc_83221FE4;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83221FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
loc_83221FE4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r10,460(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bge cr6,0x8322200c
	if (!ctx.cr6.lt) goto loc_8322200C;
	// stw r31,2464(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2464, ctx.r31.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83204d78
	ctx.lr = 0x8322200C;
	sub_83204D78(ctx, base);
loc_8322200C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83222020"))) PPC_WEAK_FUNC(sub_83222020);
PPC_FUNC_IMPL(__imp__sub_83222020) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83222050"))) PPC_WEAK_FUNC(sub_83222050);
PPC_FUNC_IMPL(__imp__sub_83222050) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83222054"))) PPC_WEAK_FUNC(sub_83222054);
PPC_FUNC_IMPL(__imp__sub_83222054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83222058"))) PPC_WEAK_FUNC(sub_83222058);
PPC_FUNC_IMPL(__imp__sub_83222058) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322205C"))) PPC_WEAK_FUNC(sub_8322205C);
PPC_FUNC_IMPL(__imp__sub_8322205C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83222060"))) PPC_WEAK_FUNC(sub_83222060);
PPC_FUNC_IMPL(__imp__sub_83222060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83222064"))) PPC_WEAK_FUNC(sub_83222064);
PPC_FUNC_IMPL(__imp__sub_83222064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83222068"))) PPC_WEAK_FUNC(sub_83222068);
PPC_FUNC_IMPL(__imp__sub_83222068) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,4138
	ctx.r10.s64 = 271187968;
	// rlwinm r11,r11,0,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// ori r10,r10,4352
	ctx.r10.u64 = ctx.r10.u64 | 4352;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83222088"))) PPC_WEAK_FUNC(sub_83222088);
PPC_FUNC_IMPL(__imp__sub_83222088) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83222094"))) PPC_WEAK_FUNC(sub_83222094);
PPC_FUNC_IMPL(__imp__sub_83222094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83222098"))) PPC_WEAK_FUNC(sub_83222098);
PPC_FUNC_IMPL(__imp__sub_83222098) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// b 0x82299698
	sub_82299698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832220A0"))) PPC_WEAK_FUNC(sub_832220A0);
PPC_FUNC_IMPL(__imp__sub_832220A0) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832220A8"))) PPC_WEAK_FUNC(sub_832220A8);
PPC_FUNC_IMPL(__imp__sub_832220A8) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832220c0
	if (!ctx.cr6.eq) goto loc_832220C0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_832220C0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,9
	ctx.r10.s64 = 9;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832220D0:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x832220d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832220D0;
	// li r11,34
	ctx.r11.s64 = 34;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832220EC"))) PPC_WEAK_FUNC(sub_832220EC);
PPC_FUNC_IMPL(__imp__sub_832220EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832220F0"))) PPC_WEAK_FUNC(sub_832220F0);
PPC_FUNC_IMPL(__imp__sub_832220F0) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83222128
	if (ctx.cr6.eq) goto loc_83222128;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83222100:
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,35
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 35, ctx.xer);
	// bge cr6,0x83222128
	if (!ctx.cr6.lt) goto loc_83222128;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83222128
	if (ctx.cr6.eq) goto loc_83222128;
	// cmplwi cr6,r10,34
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 34, ctx.xer);
	// beq cr6,0x83222134
	if (ctx.cr6.eq) goto loc_83222134;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x83222100
	if (ctx.cr6.lt) goto loc_83222100;
loc_83222128:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_83222134:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x83222158
	if (ctx.cr6.lt) goto loc_83222158;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_83222144:
	// lbz r8,-1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bge 0x83222144
	if (!ctx.cr0.lt) goto loc_83222144;
loc_83222158:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x83222128
	if (ctx.cr6.eq) goto loc_83222128;
	// cmpwi cr6,r4,34
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 34, ctx.xer);
	// beq cr6,0x83222128
	if (ctx.cr6.eq) goto loc_83222128;
	// cmpwi cr6,r4,35
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 35, ctx.xer);
	// bge cr6,0x83222128
	if (!ctx.cr6.lt) goto loc_83222128;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322217C"))) PPC_WEAK_FUNC(sub_8322217C);
PPC_FUNC_IMPL(__imp__sub_8322217C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83222180"))) PPC_WEAK_FUNC(sub_83222180);
PPC_FUNC_IMPL(__imp__sub_83222180) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832221fc
	if (ctx.cr6.eq) goto loc_832221FC;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x832221fc
	if (ctx.cr6.eq) goto loc_832221FC;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,34
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 34, ctx.xer);
	// beq cr6,0x832221d0
	if (ctx.cr6.eq) goto loc_832221D0;
loc_832221A4:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x832221fc
	if (!ctx.cr6.lt) goto loc_832221FC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,34
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 34, ctx.xer);
	// bne cr6,0x832221a4
	if (!ctx.cr6.eq) goto loc_832221A4;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bge cr6,0x832221f4
	if (!ctx.cr6.lt) goto loc_832221F4;
loc_832221D0:
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subfic r11,r11,9
	ctx.xer.ca = ctx.r11.u32 <= 9;
	ctx.r11.s64 = 9 - ctx.r11.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832221f4
	if (ctx.cr6.eq) goto loc_832221F4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_832221E8:
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x832221e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832221E8;
loc_832221F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832221FC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83222208"))) PPC_WEAK_FUNC(sub_83222208);
PPC_FUNC_IMPL(__imp__sub_83222208) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8322222c
	if (ctx.cr6.eq) goto loc_8322222C;
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322222c
	if (ctx.cr0.eq) goto loc_8322222C;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r3,35
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 35, ctx.xer);
	// bge cr6,0x8322222c
	if (!ctx.cr6.lt) goto loc_8322222C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_8322222C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83222234"))) PPC_WEAK_FUNC(sub_83222234);
PPC_FUNC_IMPL(__imp__sub_83222234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83222238"))) PPC_WEAK_FUNC(sub_83222238);
PPC_FUNC_IMPL(__imp__sub_83222238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83222240;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8322226c
	if (ctx.cr6.lt) goto loc_8322226C;
loc_83222260:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83222340
	goto loc_83222340;
loc_8322226C:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// bge cr6,0x83222260
	if (!ctx.cr6.lt) goto loc_83222260;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bgt cr6,0x83222260
	if (ctx.cr6.gt) goto loc_83222260;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bgt cr6,0x83222260
	if (ctx.cr6.gt) goto loc_83222260;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,19,0,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF80000;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r6,r5,3,26,28
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0x38) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFC7);
	// clrlwi r8,r11,19
	ctx.r8.u64 = ctx.r11.u32 & 0x1FFF;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// or r30,r10,r8
	ctx.r30.u64 = ctx.r10.u64 | ctx.r8.u64;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwimi r30,r6,13,13,18
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r6.u32, 13) & 0x7E000) | (ctx.r30.u64 & 0xFFFFFFFFFFF81FFF);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// beq cr6,0x83222260
	if (ctx.cr6.eq) goto loc_83222260;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832222D0;
	sub_82CB1160(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwimi r30,r11,0,19,19
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1000) | (ctx.r30.u64 & 0xFFFFFFFFFFFFEFFF);
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwimi r11,r10,0,21,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFF7FF) | (ctx.r11.u64 & 0x800);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwimi r11,r10,0,22,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFBFF) | (ctx.r11.u64 & 0x400);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwimi r11,r10,0,23,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFDFF) | (ctx.r11.u64 & 0x200);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwimi r11,r10,0,24,22
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFEFF) | (ctx.r11.u64 & 0x100);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwimi r11,r10,0,25,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFF7F) | (ctx.r11.u64 & 0x80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r10,0,26,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFFBF) | (ctx.r11.u64 & 0x40);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83222340:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83222348"))) PPC_WEAK_FUNC(sub_83222348);
PPC_FUNC_IMPL(__imp__sub_83222348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83222350;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8322237c
	if (!ctx.cr6.eq) goto loc_8322237C;
loc_83222370:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8322241c
	goto loc_8322241C;
loc_8322237C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82cb1160
	ctx.lr = 0x8322238C;
	sub_82CB1160(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_83222394:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,35
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 35, ctx.xer);
	// bge cr6,0x83222370
	if (!ctx.cr6.lt) goto loc_83222370;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83222370
	if (ctx.cr6.eq) goto loc_83222370;
	// cmplwi cr6,r9,34
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 34, ctx.xer);
	// beq cr6,0x832223c4
	if (ctx.cr6.eq) goto loc_832223C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x83222394
	if (ctx.cr6.lt) goto loc_83222394;
	// b 0x83222370
	goto loc_83222370;
loc_832223C4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x832223e8
	if (ctx.cr6.lt) goto loc_832223E8;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_832223D4:
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bge 0x832223d4
	if (!ctx.cr0.lt) goto loc_832223D4;
loc_832223E8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x83222370
	if (ctx.cr6.eq) goto loc_83222370;
	// cmpwi cr6,r31,34
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 34, ctx.xer);
	// beq cr6,0x83222370
	if (ctx.cr6.eq) goto loc_83222370;
	// cmpwi cr6,r31,35
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 35, ctx.xer);
	// bge cr6,0x83222370
	if (!ctx.cr6.lt) goto loc_83222370;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222238
	ctx.lr = 0x8322241C;
	sub_83222238(ctx, base);
loc_8322241C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83222424"))) PPC_WEAK_FUNC(sub_83222424);
PPC_FUNC_IMPL(__imp__sub_83222424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83222428"))) PPC_WEAK_FUNC(sub_83222428);
PPC_FUNC_IMPL(__imp__sub_83222428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83222430;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8322245c
	if (!ctx.cr6.eq) goto loc_8322245C;
loc_83222450:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83222564
	goto loc_83222564;
loc_8322245C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82cb1160
	ctx.lr = 0x8322246C;
	sub_82CB1160(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x83222450
	if (ctx.cr6.eq) goto loc_83222450;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_83222480:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x83222450
	if (!ctx.cr6.lt) goto loc_83222450;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,34
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 34, ctx.xer);
	// bne cr6,0x83222480
	if (!ctx.cr6.eq) goto loc_83222480;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bge cr6,0x832224d4
	if (!ctx.cr6.lt) goto loc_832224D4;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// subfic r10,r11,9
	ctx.xer.ca = ctx.r11.u32 <= 9;
	ctx.r10.s64 = 9 - ctx.r11.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832224d4
	if (ctx.cr6.eq) goto loc_832224D4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832224C8:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x832224c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832224C8;
loc_832224D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_832224DC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,35
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 35, ctx.xer);
	// bge cr6,0x83222450
	if (!ctx.cr6.lt) goto loc_83222450;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83222450
	if (ctx.cr6.eq) goto loc_83222450;
	// cmplwi cr6,r9,34
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 34, ctx.xer);
	// beq cr6,0x8322250c
	if (ctx.cr6.eq) goto loc_8322250C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x832224dc
	if (ctx.cr6.lt) goto loc_832224DC;
	// b 0x83222450
	goto loc_83222450;
loc_8322250C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x83222530
	if (ctx.cr6.lt) goto loc_83222530;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8322251C:
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bge 0x8322251c
	if (!ctx.cr0.lt) goto loc_8322251C;
loc_83222530:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x83222450
	if (ctx.cr6.eq) goto loc_83222450;
	// cmpwi cr6,r31,34
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 34, ctx.xer);
	// beq cr6,0x83222450
	if (ctx.cr6.eq) goto loc_83222450;
	// cmpwi cr6,r31,35
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 35, ctx.xer);
	// bge cr6,0x83222450
	if (!ctx.cr6.lt) goto loc_83222450;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222238
	ctx.lr = 0x83222564;
	sub_83222238(ctx, base);
loc_83222564:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322256C"))) PPC_WEAK_FUNC(sub_8322256C);
PPC_FUNC_IMPL(__imp__sub_8322256C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83222570"))) PPC_WEAK_FUNC(sub_83222570);
PPC_FUNC_IMPL(__imp__sub_83222570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83222578;
	__savegprlr_28(ctx, base);
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
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x832225a0
	if (!ctx.cr6.eq) goto loc_832225A0;
loc_83222594:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83222630
	goto loc_83222630;
loc_832225A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832225B0;
	sub_82CB1160(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x83222594
	if (ctx.cr6.eq) goto loc_83222594;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_832225C4:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x83222594
	if (!ctx.cr6.lt) goto loc_83222594;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,34
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 34, ctx.xer);
	// bne cr6,0x832225c4
	if (!ctx.cr6.eq) goto loc_832225C4;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bge cr6,0x83222618
	if (!ctx.cr6.lt) goto loc_83222618;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// subfic r10,r11,9
	ctx.xer.ca = ctx.r11.u32 <= 9;
	ctx.r10.s64 = 9 - ctx.r11.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83222618
	if (ctx.cr6.eq) goto loc_83222618;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8322260C:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8322260c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8322260C;
loc_83222618:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222238
	ctx.lr = 0x83222630;
	sub_83222238(ctx, base);
loc_83222630:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83222638"))) PPC_WEAK_FUNC(sub_83222638);
PPC_FUNC_IMPL(__imp__sub_83222638) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r10,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// ld r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// ld r3,-8(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
	// cmplwi cr6,r3,15
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 15, ctx.xer);
	// bgt cr6,0x832226c0
	if (ctx.cr6.gt) goto loc_832226C0;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,-1216
	ctx.r12.s64 = ctx.r12.s64 + -1216;
	// lbzx r0,r12,r3
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r3.u32);
	// lis r12,-31966
	ctx.r12.s64 = -2094923776;
	// addi r12,r12,9912
	ctx.r12.s64 = ctx.r12.s64 + 9912;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_832226B8;
	case 1:
		goto loc_832226B8;
	case 2:
		goto loc_832226C0;
	case 3:
		goto loc_832226B8;
	case 4:
		goto loc_832226B8;
	case 5:
		goto loc_832226B8;
	case 6:
		goto loc_832226B8;
	case 7:
		goto loc_832226C0;
	case 8:
		goto loc_832226C0;
	case 9:
		goto loc_832226B8;
	case 10:
		goto loc_832226C0;
	case 11:
		goto loc_832226C0;
	case 12:
		goto loc_832226B8;
	case 13:
		goto loc_832226B8;
	case 14:
		goto loc_832226B8;
	case 15:
		goto loc_832226B8;
	default:
		__builtin_unreachable();
	}
loc_832226B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832226C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x832226ec
	if (ctx.cr6.eq) goto loc_832226EC;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x832226ec
	if (ctx.cr6.eq) goto loc_832226EC;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x832226ec
	if (ctx.cr6.eq) goto loc_832226EC;
	// cmpwi cr6,r3,14
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_832226EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832226F4"))) PPC_WEAK_FUNC(sub_832226F4);
PPC_FUNC_IMPL(__imp__sub_832226F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832226F8"))) PPC_WEAK_FUNC(sub_832226F8);
PPC_FUNC_IMPL(__imp__sub_832226F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x83222750
	if (ctx.cr6.gt) goto loc_83222750;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,-1200
	ctx.r12.s64 = ctx.r12.s64 + -1200;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-31966
	ctx.r12.s64 = -2094923776;
	// addi r12,r12,10032
	ctx.r12.s64 = ctx.r12.s64 + 10032;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_83222730;
	case 1:
		goto loc_83222730;
	case 2:
		goto loc_83222730;
	case 3:
		goto loc_83222730;
	case 4:
		goto loc_83222730;
	case 5:
		goto loc_83222750;
	case 6:
		goto loc_83222750;
	case 7:
		goto loc_83222730;
	case 8:
		goto loc_83222744;
	case 9:
		goto loc_83222738;
	case 10:
		goto loc_83222730;
	case 11:
		goto loc_83222738;
	case 12:
		goto loc_83222730;
	case 13:
		goto loc_83222730;
	case 14:
		goto loc_83222730;
	case 15:
		goto loc_83222730;
	default:
		__builtin_unreachable();
	}
loc_83222730:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83222738:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r3,r11,18,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// blr 
	return;
loc_83222744:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r3,r11,11,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// blr 
	return;
loc_83222750:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8322276c
	if (!ctx.cr6.lt) goto loc_8322276C;
loc_83222760:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_8322276C:
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mulld r9,r11,r10
	ctx.r9.s64 = ctx.r11.s64 * ctx.r10.s64;
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// clrldi r10,r7,32
	ctx.r10.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x83222760
	if (ctx.cr6.gt) goto loc_83222760;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322279C"))) PPC_WEAK_FUNC(sub_8322279C);
PPC_FUNC_IMPL(__imp__sub_8322279C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832227A0"))) PPC_WEAK_FUNC(sub_832227A0);
PPC_FUNC_IMPL(__imp__sub_832227A0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83222908
	if (!ctx.cr0.eq) goto loc_83222908;
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83222908
	if (!ctx.cr0.eq) goto loc_83222908;
	// lwz r10,32(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// rlwinm r9,r11,20,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83222908
	if (ctx.cr6.gt) goto loc_83222908;
	// rlwinm r9,r11,27,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83222908
	if (ctx.cr6.gt) goto loc_83222908;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// clrlwi r7,r9,29
	ctx.r7.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r6,r9,29,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x7;
	// rlwinm r4,r9,26,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x7;
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// rlwinm r9,r9,23,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0x7;
	// stw r6,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r6.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r4,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r4.u32);
	// stw r9,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r9.u32);
	// beq cr6,0x83222848
	if (ctx.cr6.eq) goto loc_83222848;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// ble cr6,0x83222908
	if (!ctx.cr6.gt) goto loc_83222908;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// ble cr6,0x83222848
	if (!ctx.cr6.gt) goto loc_83222848;
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bgt cr6,0x83222908
	if (ctx.cr6.gt) goto loc_83222908;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
loc_8322282C:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,7
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7, ctx.xer);
	// bne cr6,0x83222908
	if (!ctx.cr6.eq) goto loc_83222908;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8322282c
	if (ctx.cr6.lt) goto loc_8322282C;
loc_83222848:
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322285c
	if (!ctx.cr0.eq) goto loc_8322285C;
	// lbz r11,40(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83222908
	if (ctx.cr0.eq) goto loc_83222908;
loc_8322285C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
loc_83222864:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// beq cr6,0x83222908
	if (ctx.cr6.eq) goto loc_83222908;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83222864
	if (ctx.cr6.lt) goto loc_83222864;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r11,0,18,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3000;
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// beq cr6,0x83222908
	if (ctx.cr6.eq) goto loc_83222908;
	// rlwinm r10,r11,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// beq cr6,0x83222908
	if (ctx.cr6.eq) goto loc_83222908;
	// rlwinm r10,r11,14,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x7;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x83222908
	if (ctx.cr6.eq) goto loc_83222908;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832228c4
	if (ctx.cr6.eq) goto loc_832228C4;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bge cr6,0x832228c4
	if (!ctx.cr6.lt) goto loc_832228C4;
	// lbz r10,40(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 40);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x83222908
	if (ctx.cr0.eq) goto loc_83222908;
loc_832228C4:
	// rlwinm r10,r11,0,6,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3000000;
	// lis r9,512
	ctx.r9.s64 = 33554432;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83222908
	if (ctx.cr6.eq) goto loc_83222908;
	// rlwinm r10,r11,0,4,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000000;
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83222908
	if (ctx.cr6.eq) goto loc_83222908;
	// rlwinm. r10,r11,0,8,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83222908
	if (!ctx.cr0.eq) goto loc_83222908;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83222908
	if (!ctx.cr0.eq) goto loc_83222908;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm. r11,r11,0,18,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3E00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83222908
	if (!ctx.cr0.eq) goto loc_83222908;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83222908:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83222914"))) PPC_WEAK_FUNC(sub_83222914);
PPC_FUNC_IMPL(__imp__sub_83222914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83222918"))) PPC_WEAK_FUNC(sub_83222918);
PPC_FUNC_IMPL(__imp__sub_83222918) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,40(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8322298c
	if (!ctx.cr0.eq) goto loc_8322298C;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r10,68(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r6,28(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// blt cr6,0x832229ec
	if (ctx.cr6.lt) goto loc_832229EC;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r8,72(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldimi r10,r6,2,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 2) & 0x3FFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFC00000003);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpld cr6,r10,r8
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x832229ec
	if (ctx.cr6.gt) goto loc_832229EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8322298c
	if (ctx.cr6.eq) goto loc_8322298C;
loc_8322296C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r9,20
	ctx.r9.u64 = ctx.r9.u32 & 0xFFF;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x832229cc
	if (ctx.cr6.eq) goto loc_832229CC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8322296c
	if (ctx.cr6.lt) goto loc_8322296C;
loc_8322298C:
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x832229d4
	if (ctx.cr6.gt) goto loc_832229D4;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bge cr6,0x832229cc
	if (!ctx.cr6.lt) goto loc_832229CC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x832229ec
	if (ctx.cr6.lt) goto loc_832229EC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x832229cc
	if (!ctx.cr6.gt) goto loc_832229CC;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// ble cr6,0x832229ec
	if (!ctx.cr6.gt) goto loc_832229EC;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bgt cr6,0x832229ec
	if (ctx.cr6.gt) goto loc_832229EC;
loc_832229CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832229D4:
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// blt cr6,0x832229ec
	if (ctx.cr6.lt) goto loc_832229EC;
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// ble cr6,0x832229cc
	if (!ctx.cr6.gt) goto loc_832229CC;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// beq cr6,0x832229cc
	if (ctx.cr6.eq) goto loc_832229CC;
loc_832229EC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832229F8"))) PPC_WEAK_FUNC(sub_832229F8);
PPC_FUNC_IMPL(__imp__sub_832229F8) {
	PPC_FUNC_PROLOGUE();
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
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r9,r11,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83222ae0
	if (!ctx.cr0.eq) goto loc_83222AE0;
	// rlwinm. r9,r11,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83222ae0
	if (!ctx.cr0.eq) goto loc_83222AE0;
	// lwz r9,32(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// rlwinm r8,r11,20,26,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x83222ae0
	if (ctx.cr6.gt) goto loc_83222AE0;
	// rlwinm r8,r11,27,26,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x83222ae0
	if (ctx.cr6.gt) goto loc_83222AE0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r8,r11,0,12,12
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrlwi r7,r9,29
	ctx.r7.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r31,r9,29,29,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x7;
	// rlwinm r30,r9,26,29,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x7;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// rlwinm r9,r9,23,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0x7;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq 0x83222ae0
	if (ctx.cr0.eq) goto loc_83222AE0;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r8,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83222ae0
	if (!ctx.cr0.eq) goto loc_83222AE0;
	// rlwinm. r10,r8,0,8,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83222ae0
	if (!ctx.cr0.eq) goto loc_83222AE0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
loc_83222A8C:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// beq cr6,0x83222ae0
	if (ctx.cr6.eq) goto loc_83222AE0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x83222a8c
	if (ctx.cr6.lt) goto loc_83222A8C;
	// rlwinm r11,r11,0,5,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6000000;
	// lis r10,1536
	ctx.r10.s64 = 100663296;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83222ae0
	if (ctx.cr6.eq) goto loc_83222AE0;
	// rlwinm. r11,r8,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83222ac8
	if (ctx.cr0.eq) goto loc_83222AC8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x83222ae0
	if (ctx.cr6.eq) goto loc_83222AE0;
loc_83222AC8:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x83222918
	ctx.lr = 0x83222AD0;
	sub_83222918(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83222ae8
	if (ctx.cr0.lt) goto loc_83222AE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83222ae8
	goto loc_83222AE8;
loc_83222AE0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_83222AE8:
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

__attribute__((alias("__imp__sub_83222B00"))) PPC_WEAK_FUNC(sub_83222B00);
PPC_FUNC_IMPL(__imp__sub_83222B00) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x83222b5c
	if (ctx.cr6.gt) goto loc_83222B5C;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x83222b48
	if (!ctx.cr6.lt) goto loc_83222B48;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// blt cr6,0x83222b70
	if (ctx.cr6.lt) goto loc_83222B70;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x83222ba0
	if (!ctx.cr6.lt) goto loc_83222BA0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x83222b70
	goto loc_83222B70;
loc_83222B48:
	// lbz r11,40(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83222ba0
	if (ctx.cr0.eq) goto loc_83222BA0;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x83222b70
	goto loc_83222B70;
loc_83222B5C:
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// beq cr6,0x83222b70
	if (ctx.cr6.eq) goto loc_83222B70;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// bne cr6,0x83222ba0
	if (!ctx.cr6.eq) goto loc_83222BA0;
	// li r7,1
	ctx.r7.s64 = 1;
loc_83222B70:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bgt cr6,0x83222bbc
	if (ctx.cr6.gt) goto loc_83222BBC;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bge cr6,0x83222bb4
	if (!ctx.cr6.lt) goto loc_83222BB4;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// blt cr6,0x83222bf4
	if (ctx.cr6.lt) goto loc_83222BF4;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// blt cr6,0x83222bac
	if (ctx.cr6.lt) goto loc_83222BAC;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// blt cr6,0x83222bf4
	if (ctx.cr6.lt) goto loc_83222BF4;
loc_83222BA0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_83222BAC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x83222bf4
	goto loc_83222BF4;
loc_83222BB4:
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x83222bf0
	goto loc_83222BF0;
loc_83222BBC:
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// blt cr6,0x83222ba0
	if (ctx.cr6.lt) goto loc_83222BA0;
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// ble cr6,0x83222be4
	if (!ctx.cr6.gt) goto loc_83222BE4;
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// beq cr6,0x83222bf4
	if (ctx.cr6.eq) goto loc_83222BF4;
	// addi r11,r11,-42
	ctx.r11.s64 = ctx.r11.s64 + -42;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x83222ba0
	if (ctx.cr6.gt) goto loc_83222BA0;
	// b 0x83222bf4
	goto loc_83222BF4;
loc_83222BE4:
	// lbz r11,40(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83222ba0
	if (ctx.cr0.eq) goto loc_83222BA0;
loc_83222BF0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_83222BF4:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bgt cr6,0x83222ba0
	if (ctx.cr6.gt) goto loc_83222BA0;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bgt cr6,0x83222ba0
	if (ctx.cr6.gt) goto loc_83222BA0;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83222c14
	if (ctx.cr0.eq) goto loc_83222C14;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83222ba0
	if (ctx.cr0.eq) goto loc_83222BA0;
loc_83222C14:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83222C1C"))) PPC_WEAK_FUNC(sub_83222C1C);
PPC_FUNC_IMPL(__imp__sub_83222C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83222C20"))) PPC_WEAK_FUNC(sub_83222C20);
PPC_FUNC_IMPL(__imp__sub_83222C20) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83222d58
	if (ctx.cr0.eq) goto loc_83222D58;
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83222c54
	if (!ctx.cr0.eq) goto loc_83222C54;
	// rlwinm. r10,r11,0,18,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F00;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83222c54
	if (!ctx.cr0.eq) goto loc_83222C54;
	// clrlwi r7,r11,26
	ctx.r7.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r7,15
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 15, ctx.xer);
	// ble cr6,0x83222c60
	if (!ctx.cr6.gt) goto loc_83222C60;
	// cmplwi cr6,r7,61
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 61, ctx.xer);
	// bge cr6,0x83222c78
	if (!ctx.cr6.lt) goto loc_83222C78;
loc_83222C54:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_83222C60:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32856
	ctx.r10.u64 = ctx.r10.u64 | 32856;
	// lwzx r10,r5,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83222c54
	if (!ctx.cr6.lt) goto loc_83222C54;
	// cmplwi cr6,r7,61
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 61, ctx.xer);
loc_83222C78:
	// bne cr6,0x83222d24
	if (!ctx.cr6.eq) goto loc_83222D24;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32860
	ctx.r10.u64 = ctx.r10.u64 | 32860;
loc_83222C84:
	// lwzx r10,r5,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x83222c54
	if (ctx.cr6.eq) goto loc_83222C54;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
loc_83222C98:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// and r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 & ctx.r8.u64;
	// clrlwi. r5,r5,28
	ctx.r5.u64 = ctx.r5.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x83222c54
	if (!ctx.cr0.eq) goto loc_83222C54;
	// rlwinm r5,r11,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// and r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 & ctx.r10.u64;
	// clrlwi. r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83222c54
	if (!ctx.cr0.eq) goto loc_83222C54;
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83222c54
	if (!ctx.cr0.eq) goto loc_83222C54;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x83222c98
	if (ctx.cr6.lt) goto loc_83222C98;
loc_83222CD0:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r7,62
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 62, ctx.xer);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// blt cr6,0x83222d04
	if (ctx.cr6.lt) goto loc_83222D04;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83222c54
	if (ctx.cr0.eq) goto loc_83222C54;
	// cmplwi cr6,r7,62
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 62, ctx.xer);
	// bne cr6,0x83222d04
	if (!ctx.cr6.eq) goto loc_83222D04;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_83222D04:
	// cmplwi cr6,r7,61
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 61, ctx.xer);
	// beq cr6,0x83222d14
	if (ctx.cr6.eq) goto loc_83222D14;
	// cmplwi cr6,r7,15
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 15, ctx.xer);
	// bgt cr6,0x83222d84
	if (ctx.cr6.gt) goto loc_83222D84;
loc_83222D14:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83222d84
	if (!ctx.cr0.eq) goto loc_83222D84;
	// b 0x83222c54
	goto loc_83222C54;
loc_83222D24:
	// cmplwi cr6,r7,62
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 62, ctx.xer);
	// bne cr6,0x83222d44
	if (!ctx.cr6.eq) goto loc_83222D44;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32864
	ctx.r11.u64 = ctx.r11.u64 | 32864;
	// lwzx r11,r5,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83222cd0
	if (!ctx.cr6.eq) goto loc_83222CD0;
	// b 0x83222c54
	goto loc_83222C54;
loc_83222D44:
	// cmplwi cr6,r7,63
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 63, ctx.xer);
	// bne cr6,0x83222cd0
	if (!ctx.cr6.eq) goto loc_83222CD0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32868
	ctx.r10.u64 = ctx.r10.u64 | 32868;
	// b 0x83222c84
	goto loc_83222C84;
loc_83222D58:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83222c54
	if (!ctx.cr0.eq) goto loc_83222C54;
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83222c54
	if (!ctx.cr0.eq) goto loc_83222C54;
	// lwz r10,32(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// rlwinm r9,r11,24,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83222c54
	if (ctx.cr6.gt) goto loc_83222C54;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83222c54
	if (ctx.cr6.gt) goto loc_83222C54;
loc_83222D84:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83222D8C"))) PPC_WEAK_FUNC(sub_83222D8C);
PPC_FUNC_IMPL(__imp__sub_83222D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83222D90"))) PPC_WEAK_FUNC(sub_83222D90);
PPC_FUNC_IMPL(__imp__sub_83222D90) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// cmplwi cr6,r11,42
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 42, ctx.xer);
	// beq cr6,0x83222de0
	if (ctx.cr6.eq) goto loc_83222DE0;
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// beq cr6,0x83222ddc
	if (ctx.cr6.eq) goto loc_83222DDC;
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x83222de0
	if (ctx.cr6.eq) goto loc_83222DE0;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x83222ddc
	if (ctx.cr6.eq) goto loc_83222DDC;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// beq cr6,0x83222de0
	if (ctx.cr6.eq) goto loc_83222DE0;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x83222e44
	if (!ctx.cr6.eq) goto loc_83222E44;
loc_83222DDC:
	// li r8,1
	ctx.r8.s64 = 1;
loc_83222DE0:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r9,8,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0x1F;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// blt cr6,0x83222df8
	if (ctx.cr6.lt) goto loc_83222DF8;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// ble cr6,0x83222e00
	if (!ctx.cr6.gt) goto loc_83222E00;
loc_83222DF8:
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x83222e0c
	if (!ctx.cr6.eq) goto loc_83222E0C;
loc_83222E00:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83222f04
	goto loc_83222F04;
loc_83222E0C:
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r11,r7,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83222e00
	if (ctx.cr0.eq) goto loc_83222E00;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r7,32(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// rlwimi r11,r9,4,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r11,r11,0,26,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3E;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x83222e00
	if (ctx.cr6.gt) goto loc_83222E00;
loc_83222E44:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
loc_83222E4C:
	// li r4,1
	ctx.r4.s64 = 1;
	// subfic r11,r9,31
	ctx.xer.ca = ctx.r9.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r9.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// slw r11,r4,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r11.u8 & 0x3F));
	// and r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 & ctx.r8.u64;
loc_83222E60:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83222ea4
	if (ctx.cr6.eq) goto loc_83222EA4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x83222e78
	if (!ctx.cr6.eq) goto loc_83222E78;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83222ea4
	if (!ctx.cr0.eq) goto loc_83222EA4;
loc_83222E78:
	// subfic r11,r9,2
	ctx.xer.ca = ctx.r9.u32 <= 2;
	ctx.r11.s64 = 2 - ctx.r9.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// srw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm. r31,r11,0,25,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83222e00
	if (!ctx.cr0.eq) goto loc_83222E00;
	// lwz r31,32(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x83222e00
	if (ctx.cr6.gt) goto loc_83222E00;
	// b 0x83222ee8
	goto loc_83222EE8;
loc_83222EA4:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r31,r11,0,0,0
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83222ec0
	if (!ctx.cr0.eq) goto loc_83222EC0;
	// rlwinm. r31,r11,0,1,1
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83222ec0
	if (!ctx.cr0.eq) goto loc_83222EC0;
	// rlwinm. r31,r11,0,2,2
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83222e00
	if (!ctx.cr0.eq) goto loc_83222E00;
loc_83222EC0:
	// rlwinm. r31,r11,0,0,0
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x83222ee8
	if (ctx.cr0.eq) goto loc_83222EE8;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83222ee8
	if (!ctx.cr0.eq) goto loc_83222EE8;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lhz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83222e00
	if (ctx.cr0.eq) goto loc_83222E00;
loc_83222EE8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x83222e60
	if (ctx.cr6.lt) goto loc_83222E60;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x83222e4c
	if (ctx.cr6.lt) goto loc_83222E4C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83222F04:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83222F0C"))) PPC_WEAK_FUNC(sub_83222F0C);
PPC_FUNC_IMPL(__imp__sub_83222F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83222F10"))) PPC_WEAK_FUNC(sub_83222F10);
PPC_FUNC_IMPL(__imp__sub_83222F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83222F18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83222d90
	ctx.lr = 0x83222F3C;
	sub_83222D90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83222f80
	if (ctx.cr0.lt) goto loc_83222F80;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222b00
	ctx.lr = 0x83222F5C;
	sub_83222B00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83222f80
	if (ctx.cr0.lt) goto loc_83222F80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222c20
	ctx.lr = 0x83222F74;
	sub_83222C20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83222f80
	if (ctx.cr0.lt) goto loc_83222F80;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83222F80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83222F88"))) PPC_WEAK_FUNC(sub_83222F88);
PPC_FUNC_IMPL(__imp__sub_83222F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83222F90;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83222fc0
	if (ctx.cr6.lt) goto loc_83222FC0;
loc_83222FB4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83223160
	goto loc_83223160;
loc_83222FC0:
	// lwz r28,228(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq 0x83222fe8
	if (ctx.cr0.eq) goto loc_83222FE8;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// li r12,-4417
	ctx.r12.s64 = -4417;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
loc_83222FE8:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// clrlwi. r25,r7,24
	ctx.r25.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x83223004
	if (ctx.cr0.eq) goto loc_83223004;
	// rlwinm r11,r11,0,24,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwinm r11,r11,0,20,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// b 0x8322302c
	goto loc_8322302C;
loc_83223004:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83223014
	if (!ctx.cr0.eq) goto loc_83223014;
	// rlwinm r11,r11,0,20,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
loc_83223014:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// li r10,512
	ctx.r10.s64 = 512;
	// li r8,2
	ctx.r8.s64 = 2;
	// rlwimi r10,r27,8,23,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r27.u32, 8) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_8322302C:
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_83223040:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83223054
	if (ctx.cr0.eq) goto loc_83223054;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x83222fb4
	if (!ctx.cr6.eq) goto loc_83222FB4;
loc_83223054:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwimi r9,r8,30,0,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 30) & 0xC0000000) | (ctx.r9.u64 & 0xFFFFFFFF3FFFFFFF);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x83223040
	if (ctx.cr6.lt) goto loc_83223040;
	// clrlwi. r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq 0x83223084
	if (ctx.cr0.eq) goto loc_83223084;
	// bne cr6,0x83223088
	if (!ctx.cr6.eq) goto loc_83223088;
	// b 0x83222fb4
	goto loc_83222FB4;
loc_83223084:
	// beq cr6,0x832230e8
	if (ctx.cr6.eq) goto loc_832230E8;
loc_83223088:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x832230a0
	if (ctx.cr6.eq) goto loc_832230A0;
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83222fb4
	if (!ctx.cr0.eq) goto loc_83222FB4;
loc_832230A0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832230e8
	if (ctx.cr6.eq) goto loc_832230E8;
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832230cc
	if (ctx.cr0.eq) goto loc_832230CC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832227a0
	ctx.lr = 0x832230C8;
	sub_832227A0(ctx, base);
	// b 0x83223140
	goto loc_83223140;
loc_832230CC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832230e8
	if (ctx.cr6.eq) goto loc_832230E8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832229f8
	ctx.lr = 0x832230E4;
	sub_832229F8(ctx, base);
	// b 0x83223140
	goto loc_83223140;
loc_832230E8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222d90
	ctx.lr = 0x832230FC;
	sub_83222D90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83223140
	if (ctx.cr0.lt) goto loc_83223140;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222b00
	ctx.lr = 0x8322311C;
	sub_83222B00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83223140
	if (ctx.cr0.lt) goto loc_83223140;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222c20
	ctx.lr = 0x83223134;
	sub_83222C20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83223140
	if (ctx.cr0.lt) goto loc_83223140;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83223140:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x83223160
	if (ctx.cr6.lt) goto loc_83223160;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8322315c
	if (ctx.cr6.eq) goto loc_8322315C;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
loc_8322315C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83223160:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83223168"))) PPC_WEAK_FUNC(sub_83223168);
PPC_FUNC_IMPL(__imp__sub_83223168) {
	PPC_FUNC_PROLOGUE();
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,20(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// addi r10,r1,16
	ctx.r10.s64 = ctx.r1.s64 + 16;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwimi r9,r7,0,16,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xF800) | (ctx.r9.u64 & 0xFFFFFFFFFFFF07FF);
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
loc_83223194:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x832231b4
	if (!ctx.cr0.eq) goto loc_832231B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x83223194
	if (!ctx.cr6.eq) goto loc_83223194;
loc_832231B4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832231c8
	if (ctx.cr0.eq) goto loc_832231C8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_832231C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832231D0"))) PPC_WEAK_FUNC(sub_832231D0);
PPC_FUNC_IMPL(__imp__sub_832231D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x832231D8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r3.u64);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r29,208(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// rlwinm r20,r29,20,29,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 20) & 0x7;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r20,6
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 6, ctx.xer);
	// ble cr6,0x8322320c
	if (!ctx.cr6.gt) goto loc_8322320C;
loc_83223200:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83223328
	goto loc_83223328;
loc_8322320C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x83223300
	if (ctx.cr6.eq) goto loc_83223300;
	// lwz r28,212(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi r26,r29,20
	ctx.r26.u64 = ctx.r29.u32 & 0xFFF;
	// rlwinm r23,r29,1,19,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1FFE;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8322322C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83223200
	if (!ctx.cr6.lt) goto loc_83223200;
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r29,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r8,r29,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xF;
	// rlwinm r9,r28,4,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0x30;
	// slw r7,r27,r30
	ctx.r7.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// slw r8,r27,r31
	ctx.r8.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r31.u8 & 0x3F));
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r28,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 20) & 0xF;
	// xori r5,r9,1
	ctx.r5.u64 = ctx.r9.u64 ^ 1;
	// xori r6,r8,1
	ctx.r6.u64 = ctx.r8.u64 ^ 1;
	// xori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 ^ 1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x832232c8
	if (ctx.cr6.eq) goto loc_832232C8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x832232c8
	if (ctx.cr6.eq) goto loc_832232C8;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x832232c0
	if (ctx.cr6.eq) goto loc_832232C0;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x832232c0
	if (ctx.cr6.eq) goto loc_832232C0;
	// not r11,r28
	ctx.r11.u64 = ~ctx.r28.u64;
	// rlwinm r8,r11,23,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// b 0x832232cc
	goto loc_832232CC;
loc_832232C0:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x832232cc
	goto loc_832232CC;
loc_832232C8:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
loc_832232CC:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// add r4,r26,r31
	ctx.r4.u64 = ctx.r26.u64 + ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83222f88
	ctx.lr = 0x832232E4;
	sub_83222F88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83223200
	if (ctx.cr0.lt) goto loc_83223200;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// cmplw cr6,r31,r20
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x8322322c
	if (ctx.cr6.lt) goto loc_8322322C;
loc_83223300:
	// rlwinm. r11,r29,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83223324
	if (ctx.cr0.eq) goto loc_83223324;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_83223324:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83223328:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83223330"))) PPC_WEAK_FUNC(sub_83223330);
PPC_FUNC_IMPL(__imp__sub_83223330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83223338;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r27,r10,0,20,20
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x800) | (ctx.r27.u64 & 0xFFFFFFFFFFFFF7FF);
	// rlwimi r26,r9,0,17,31
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7FFF) | (ctx.r26.u64 & 0xFFFFFFFFFFFF8000);
	// rlwimi r27,r29,0,22,22
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0x200) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFDFF);
	// rlwimi r26,r9,0,4,15
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFF0000) | (ctx.r26.u64 & 0xFFFFFFFFF000FFFF);
	// rlwimi r27,r29,0,16,19
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xF000) | (ctx.r27.u64 & 0xFFFFFFFFFFFF0FFF);
	// rlwimi r26,r28,0,0,3
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0xF0000000) | (ctx.r26.u64 & 0xFFFFFFFF0FFFFFFF);
	// rlwimi r27,r10,0,30,31
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwimi r26,r28,0,16,16
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0x8000) | (ctx.r26.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
loc_83223398:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// subf. r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832233b8
	if (!ctx.cr0.eq) goto loc_832233B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x83223398
	if (!ctx.cr6.eq) goto loc_83223398;
loc_832233B8:
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832233cc
	if (ctx.cr0.eq) goto loc_832233CC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x832233d0
	goto loc_832233D0;
loc_832233CC:
	// bl 0x832231d0
	ctx.lr = 0x832233D0;
	sub_832231D0(ctx, base);
loc_832233D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832233D8"))) PPC_WEAK_FUNC(sub_832233D8);
PPC_FUNC_IMPL(__imp__sub_832233D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832233E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
	// addi r30,r9,8
	ctx.r30.s64 = ctx.r9.s64 + 8;
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r27,r11,0,20,20
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x800) | (ctx.r27.u64 & 0xFFFFFFFFFFFFF7FF);
	// rlwimi r26,r10,0,20,31
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFF) | (ctx.r26.u64 & 0xFFFFFFFFFFFFF000);
	// rlwimi r27,r11,0,21,21
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x400) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFBFF);
	// rlwimi r26,r10,0,17,19
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7000) | (ctx.r26.u64 & 0xFFFFFFFFFFFF8FFF);
	// rlwimi r27,r29,0,22,22
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0x200) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFDFF);
	// rlwimi r26,r10,0,4,15
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFF0000) | (ctx.r26.u64 & 0xFFFFFFFFF000FFFF);
	// rlwimi r27,r29,0,16,19
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xF000) | (ctx.r27.u64 & 0xFFFFFFFFFFFF0FFF);
	// rlwimi r26,r28,0,0,3
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0xF0000000) | (ctx.r26.u64 & 0xFFFFFFFF0FFFFFFF);
	// rlwimi r27,r11,0,30,31
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwimi r26,r28,0,16,16
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0x8000) | (ctx.r26.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
loc_83223448:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83223468
	if (!ctx.cr0.eq) goto loc_83223468;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x83223448
	if (!ctx.cr6.eq) goto loc_83223448;
loc_83223468:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322347c
	if (ctx.cr0.eq) goto loc_8322347C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83223480
	goto loc_83223480;
loc_8322347C:
	// bl 0x832231d0
	ctx.lr = 0x83223480;
	sub_832231D0(ctx, base);
loc_83223480:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83223488"))) PPC_WEAK_FUNC(sub_83223488);
PPC_FUNC_IMPL(__imp__sub_83223488) {
	PPC_FUNC_PROLOGUE();
	// b 0x832231d0
	sub_832231D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322348C"))) PPC_WEAK_FUNC(sub_8322348C);
PPC_FUNC_IMPL(__imp__sub_8322348C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83223490"))) PPC_WEAK_FUNC(sub_83223490);
PPC_FUNC_IMPL(__imp__sub_83223490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83223498;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r27,160(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r4,r6,0,19,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x1FFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFFE000);
	// rlwimi r7,r9,0,20,20
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x800) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF7FF);
	// rlwimi r4,r6,0,11,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x1F0000) | (ctx.r4.u64 & 0xFFFFFFFFFFE0FFFF);
	// rlwimi r7,r9,0,16,19
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xF000) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0FFF);
	// rlwimi r4,r27,0,18,18
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r27.u32, 0) & 0x2000) | (ctx.r4.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
loc_832234F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83223510
	if (!ctx.cr0.eq) goto loc_83223510;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x832234f0
	if (!ctx.cr6.eq) goto loc_832234F0;
loc_83223510:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x832235a4
	if (!ctx.cr0.eq) goto loc_832235A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r30,r10,16,29,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7;
	// rlwinm r28,r10,19,29,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bgt cr6,0x832235a4
	if (ctx.cr6.gt) goto loc_832235A4;
	// clrlwi r4,r27,19
	ctx.r4.u64 = ctx.r27.u32 & 0x1FFF;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x832235a4
	if (!ctx.cr6.gt) goto loc_832235A4;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x832235a4
	if (!ctx.cr6.lt) goto loc_832235A4;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222238
	ctx.lr = 0x8322356C;
	sub_83222238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832235a4
	if (ctx.cr0.lt) goto loc_832235A4;
	// rlwinm r11,r27,16,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0x1F;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// addi r4,r26,1
	ctx.r4.s64 = ctx.r26.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222348
	ctx.lr = 0x83223594;
	sub_83222348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832235a4
	if (ctx.cr0.lt) goto loc_832235A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832235ac
	goto loc_832235AC;
loc_832235A4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_832235AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832235B4"))) PPC_WEAK_FUNC(sub_832235B4);
PPC_FUNC_IMPL(__imp__sub_832235B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832235B8"))) PPC_WEAK_FUNC(sub_832235B8);
PPC_FUNC_IMPL(__imp__sub_832235B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832235C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r3,r4,0,19,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1FFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFFE000);
	// rlwimi r6,r9,0,20,21
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xC00) | (ctx.r6.u64 & 0xFFFFFFFFFFFFF3FF);
	// rlwimi r3,r4,0,11,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFE0FFFF);
	// rlwimi r6,r9,0,16,19
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xF000) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0FFF);
	// rlwimi r3,r7,0,10,10
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x200000) | (ctx.r3.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_83223618:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83223638
	if (!ctx.cr0.eq) goto loc_83223638;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x83223618
	if (!ctx.cr6.eq) goto loc_83223618;
loc_83223638:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x832236f4
	if (!ctx.cr0.eq) goto loc_832236F4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r29,r10,16,29,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7;
	// rlwinm r28,r10,19,29,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7;
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x832236f4
	if (ctx.cr6.gt) goto loc_832236F4;
	// clrlwi r4,r7,19
	ctx.r4.u64 = ctx.r7.u32 & 0x1FFF;
	// cmplw cr6,r4,r27
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x832236f4
	if (ctx.cr6.gt) goto loc_832236F4;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x832236f4
	if (!ctx.cr6.lt) goto loc_832236F4;
	// addic. r31,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r31.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8322369c
	if (ctx.cr0.eq) goto loc_8322369C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// bge cr6,0x8322369c
	if (!ctx.cr6.lt) goto loc_8322369C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x832236a0
	if (ctx.cr6.gt) goto loc_832236A0;
loc_8322369C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832236A0:
	// rlwinm r10,r7,16,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0x1F;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x832236f4
	if (!ctx.cr6.eq) goto loc_832236F4;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222428
	ctx.lr = 0x832236C4;
	sub_83222428(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832236f4
	if (ctx.cr0.lt) goto loc_832236F4;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r29,-1
	ctx.r5.s64 = ctx.r29.s64 + -1;
	// addi r4,r27,1
	ctx.r4.s64 = ctx.r27.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222570
	ctx.lr = 0x832236E4;
	sub_83222570(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832236f4
	if (ctx.cr0.lt) goto loc_832236F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832236fc
	goto loc_832236FC;
loc_832236F4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_832236FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83223704"))) PPC_WEAK_FUNC(sub_83223704);
PPC_FUNC_IMPL(__imp__sub_83223704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83223708"))) PPC_WEAK_FUNC(sub_83223708);
PPC_FUNC_IMPL(__imp__sub_83223708) {
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
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// std r4,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r4.u64);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r6,r9,0,20,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFF003);
	// rlwimi r4,r7,0,18,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFFC000);
	// rlwimi r6,r9,0,16,19
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xF000) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0FFF);
	// rlwimi r4,r7,0,17,17
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x4000) | (ctx.r4.u64 & 0xFFFFFFFFFFFFBFFF);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
loc_8322375C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8322377c
	if (!ctx.cr0.eq) goto loc_8322377C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8322375c
	if (!ctx.cr6.eq) goto loc_8322375C;
loc_8322377C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x832237dc
	if (!ctx.cr0.eq) goto loc_832237DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r9,19,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x7;
	// rlwinm r9,r9,16,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x7;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x832237dc
	if (ctx.cr6.gt) goto loc_832237DC;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r4,r7,19
	ctx.r4.u64 = ctx.r7.u32 & 0x1FFF;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x832237dc
	if (!ctx.cr6.lt) goto loc_832237DC;
	// li r8,33
	ctx.r8.s64 = 33;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x83222348
	ctx.lr = 0x832237CC;
	sub_83222348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832237dc
	if (ctx.cr0.lt) goto loc_832237DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832237e4
	goto loc_832237E4;
loc_832237DC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_832237E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832237F4"))) PPC_WEAK_FUNC(sub_832237F4);
PPC_FUNC_IMPL(__imp__sub_832237F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832237F8"))) PPC_WEAK_FUNC(sub_832237F8);
PPC_FUNC_IMPL(__imp__sub_832237F8) {
	PPC_FUNC_PROLOGUE();
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,20(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// addi r10,r1,16
	ctx.r10.s64 = ctx.r1.s64 + 16;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwimi r9,r7,0,16,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xF800) | (ctx.r9.u64 & 0xFFFFFFFFFFFF07FF);
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
loc_83223824:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83223844
	if (!ctx.cr0.eq) goto loc_83223844;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x83223824
	if (!ctx.cr6.eq) goto loc_83223824;
loc_83223844:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x832238a0
	if (!ctx.cr0.eq) goto loc_832238A0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// addic. r10,r10,4
	ctx.xer.ca = ctx.r10.u32 > 4294967291;
	ctx.r10.s64 = ctx.r10.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r11,19,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// beq 0x832238a0
	if (ctx.cr0.eq) goto loc_832238A0;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// bge cr6,0x83223880
	if (!ctx.cr6.lt) goto loc_83223880;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x83223884
	if (ctx.cr6.gt) goto loc_83223884;
loc_83223880:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83223884:
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bne cr6,0x832238a0
	if (!ctx.cr6.eq) goto loc_832238A0;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x832238a0
	if (ctx.cr6.gt) goto loc_832238A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832238A0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832238AC"))) PPC_WEAK_FUNC(sub_832238AC);
PPC_FUNC_IMPL(__imp__sub_832238AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832238B0"))) PPC_WEAK_FUNC(sub_832238B0);
PPC_FUNC_IMPL(__imp__sub_832238B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832238B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r26,160(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi r4,r26,19
	ctx.r4.u64 = ctx.r26.u32 & 0x1FFF;
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r6,r26,0,18,18
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r26.u32, 0) & 0x2000) | (ctx.r6.u64 & 0xFFFFFFFFFFFFDFFF);
	// rlwimi r7,r9,0,20,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF003);
	// rlwinm r6,r6,0,0,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFE000;
	// rlwimi r7,r9,0,30,30
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x2) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFD);
	// or r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rlwimi r7,r9,0,16,19
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xF000) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0FFF);
	// rlwimi r6,r26,0,17,17
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r26.u32, 0) & 0x4000) | (ctx.r6.u64 & 0xFFFFFFFFFFFFBFFF);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
loc_83223918:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x83223938
	if (!ctx.cr0.eq) goto loc_83223938;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x83223918
	if (!ctx.cr6.eq) goto loc_83223918;
loc_83223938:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8322394c
	if (ctx.cr0.eq) goto loc_8322394C;
loc_83223940:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x832239d0
	goto loc_832239D0;
loc_8322394C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r4,r27
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r27.u32, ctx.xer);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r29,r10,16,29,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7;
	// rlwinm r28,r10,19,29,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7;
	// bgt cr6,0x83223978
	if (ctx.cr6.gt) goto loc_83223978;
	// rlwinm. r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83223940
	if (!ctx.cr0.eq) goto loc_83223940;
loc_83223978:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83223940
	if (!ctx.cr6.lt) goto loc_83223940;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222238
	ctx.lr = 0x8322399C;
	sub_83222238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83223940
	if (ctx.cr0.lt) goto loc_83223940;
	// rlwinm. r11,r26,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832239cc
	if (!ctx.cr0.eq) goto loc_832239CC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r27,1
	ctx.r4.s64 = ctx.r27.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222238
	ctx.lr = 0x832239C4;
	sub_83222238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83223940
	if (ctx.cr0.lt) goto loc_83223940;
loc_832239CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832239D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832239D8"))) PPC_WEAK_FUNC(sub_832239D8);
PPC_FUNC_IMPL(__imp__sub_832239D8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r5,20(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// clrlwi r7,r11,29
	ctx.r7.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// addi r10,r1,16
	ctx.r10.s64 = ctx.r1.s64 + 16;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r31,-12(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwimi r31,r8,0,21,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x700) | (ctx.r31.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r3,r3,0,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwimi r31,r8,0,16,19
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xF000) | (ctx.r31.u64 & 0xFFFFFFFFFFFF0FFF);
	// or r8,r3,r7
	ctx.r8.u64 = ctx.r3.u64 | ctx.r7.u64;
	// stw r31,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r31.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
loc_83223A28:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r3,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x83223a48
	if (!ctx.cr0.eq) goto loc_83223A48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x83223a28
	if (!ctx.cr6.eq) goto loc_83223A28;
loc_83223A48:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x83223a84
	if (!ctx.cr0.eq) goto loc_83223A84;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r5,23,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 23) & 0x3;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r9,0,20,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blt cr6,0x83223a84
	if (ctx.cr6.lt) goto loc_83223A84;
	// beq cr6,0x83223aac
	if (ctx.cr6.eq) goto loc_83223AAC;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x83223a94
	if (ctx.cr6.lt) goto loc_83223A94;
	// bne cr6,0x83223ad0
	if (!ctx.cr6.eq) goto loc_83223AD0;
loc_83223A84:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_83223A8C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83223A94:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x83223a84
	if (!ctx.cr6.eq) goto loc_83223A84;
	// rlwinm. r10,r9,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83223a84
	if (!ctx.cr0.eq) goto loc_83223A84;
	// ori r10,r9,1024
	ctx.r10.u64 = ctx.r9.u64 | 1024;
	// b 0x83223acc
	goto loc_83223ACC;
loc_83223AAC:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x83223a84
	if (!ctx.cr6.eq) goto loc_83223A84;
	// lbz r10,40(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 40);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83223a84
	if (!ctx.cr0.eq) goto loc_83223A84;
	// rlwinm. r10,r9,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83223a84
	if (!ctx.cr0.eq) goto loc_83223A84;
	// ori r10,r9,6144
	ctx.r10.u64 = ctx.r9.u64 | 6144;
loc_83223ACC:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_83223AD0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r9,r5,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bne 0x83223aec
	if (!ctx.cr0.eq) goto loc_83223AEC;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_83223AEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83223a8c
	goto loc_83223A8C;
}

__attribute__((alias("__imp__sub_83223AF4"))) PPC_WEAK_FUNC(sub_83223AF4);
PPC_FUNC_IMPL(__imp__sub_83223AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83223AF8"))) PPC_WEAK_FUNC(sub_83223AF8);
PPC_FUNC_IMPL(__imp__sub_83223AF8) {
	PPC_FUNC_PROLOGUE();
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,20(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// addi r10,r1,16
	ctx.r10.s64 = ctx.r1.s64 + 16;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwimi r9,r7,0,16,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xF000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
loc_83223B24:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83223b44
	if (!ctx.cr0.eq) goto loc_83223B44;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x83223b24
	if (!ctx.cr6.eq) goto loc_83223B24;
loc_83223B44:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83223b58
	if (ctx.cr0.eq) goto loc_83223B58;
loc_83223B4C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_83223B58:
	// lbz r11,40(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83223b4c
	if (!ctx.cr0.eq) goto loc_83223B4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83223B6C"))) PPC_WEAK_FUNC(sub_83223B6C);
PPC_FUNC_IMPL(__imp__sub_83223B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83223B70"))) PPC_WEAK_FUNC(sub_83223B70);
PPC_FUNC_IMPL(__imp__sub_83223B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x83223B78;
	__savegprlr_15(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r25,r11,12
	ctx.r25.s64 = ctx.r11.s64 + 12;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r21,r11,19,29,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// rlwinm r27,r11,13,19,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1FFF;
	// rlwinm r20,r11,16,29,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7;
	// cmplwi cr6,r21,4
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 4, ctx.xer);
	// bgt cr6,0x83223fcc
	if (ctx.cr6.gt) goto loc_83223FCC;
	// cmplwi cr6,r20,4
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 4, ctx.xer);
	// bgt cr6,0x83223fcc
	if (ctx.cr6.gt) goto loc_83223FCC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x83223fcc
	if (ctx.cr6.lt) goto loc_83223FCC;
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// li r23,0
	ctx.r23.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,1
	ctx.r29.s64 = 1;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_83223BD8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83223fcc
	if (!ctx.cr6.lt) goto loc_83223FCC;
	// srawi r11,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// clrlwi. r10,r27,31
	ctx.r10.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r10,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// ld r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bne 0x83223c30
	if (!ctx.cr0.eq) goto loc_83223C30;
	// ld r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
loc_83223C30:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// rlwinm r11,r8,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83223d88
	if (!ctx.cr6.eq) goto loc_83223D88;
	// addic. r9,r25,4
	ctx.xer.ca = ctx.r25.u32 > 4294967291;
	ctx.r9.s64 = ctx.r25.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83223c60
	if (ctx.cr0.eq) goto loc_83223C60;
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// bge cr6,0x83223c60
	if (!ctx.cr6.lt) goto loc_83223C60;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x83223c64
	if (ctx.cr6.gt) goto loc_83223C64;
loc_83223C60:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_83223C64:
	// clrlwi r10,r8,26
	ctx.r10.u64 = ctx.r8.u32 & 0x3F;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83223ca8
	if (ctx.cr6.eq) goto loc_83223CA8;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x83223fcc
	if (ctx.cr0.eq) goto loc_83223FCC;
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// bge cr6,0x83223c8c
	if (!ctx.cr6.lt) goto loc_83223C8C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x83223c98
	if (ctx.cr6.gt) goto loc_83223C98;
loc_83223C8C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83223fcc
	if (ctx.cr6.eq) goto loc_83223FCC;
loc_83223C98:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83223fcc
	if (!ctx.cr6.eq) goto loc_83223FCC;
	// rlwimi r8,r11,0,26,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_83223CA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// slw r10,r29,r21
	ctx.r10.u64 = ctx.r21.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r21.u8 & 0x3F));
	// rlwinm r9,r11,7,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// clrlwi. r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83223db8
	if (ctx.cr0.eq) goto loc_83223DB8;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// slw r9,r29,r20
	ctx.r9.u64 = ctx.r20.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r20.u8 & 0x3F));
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// clrlwi. r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83223db8
	if (ctx.cr0.eq) goto loc_83223DB8;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// rlwinm r8,r10,20,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// slw r8,r29,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r8.u8 & 0x3F));
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// clrlwi. r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83223db8
	if (ctx.cr0.eq) goto loc_83223DB8;
	// rlwinm r9,r10,21,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// rlwinm r8,r11,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// clrlwi. r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83223db8
	if (ctx.cr0.eq) goto loc_83223DB8;
	// rlwinm r9,r10,22,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// rlwinm r8,r11,18,14,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// clrlwi. r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83223db8
	if (ctx.cr0.eq) goto loc_83223DB8;
	// rlwinm r9,r10,23,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	// rlwinm r8,r11,20,12,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// clrlwi. r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83223db8
	if (ctx.cr0.eq) goto loc_83223DB8;
	// rlwinm r9,r10,24,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// rlwinm r8,r11,22,10,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FFFFF;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// clrlwi. r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83223db8
	if (ctx.cr0.eq) goto loc_83223DB8;
	// rlwinm r9,r10,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// rlwinm r8,r11,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// clrlwi. r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83223db8
	if (ctx.cr0.eq) goto loc_83223DB8;
	// rlwinm r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83223db8
	if (ctx.cr0.eq) goto loc_83223DB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83223fd4
	goto loc_83223FD4;
loc_83223D88:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83223db8
	if (!ctx.cr6.eq) goto loc_83223DB8;
	// addic. r11,r25,4
	ctx.xer.ca = ctx.r25.u32 > 4294967291;
	ctx.r11.s64 = ctx.r25.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83223dac
	if (ctx.cr0.eq) goto loc_83223DAC;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// bge cr6,0x83223dac
	if (!ctx.cr6.lt) goto loc_83223DAC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x83223db0
	if (ctx.cr6.gt) goto loc_83223DB0;
loc_83223DAC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_83223DB0:
	// rlwimi r8,r11,0,26,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_83223DB8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r10,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x83223fcc
	if (ctx.cr6.eq) goto loc_83223FCC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x83223fcc
	if (ctx.cr6.eq) goto loc_83223FCC;
	// slw r9,r29,r21
	ctx.r9.u64 = ctx.r21.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r21.u8 & 0x3F));
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r8,1024
	ctx.r8.s64 = 1024;
	// slw r7,r29,r20
	ctx.r7.u64 = ctx.r20.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r20.u8 & 0x3F));
	// rlwimi r8,r9,5,22,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x3E0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFC1F);
	// clrlwi r9,r7,27
	ctx.r9.u64 = ctx.r7.u32 & 0x1F;
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm. r8,r11,0,20,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r9,r9,20,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFFF00000;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r9,20,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x1;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r9,r9,18,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFFFC0000;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwimi r9,r10,0,14,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFF3FFFF) | (ctx.r9.u64 & 0xC0000);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r9,21,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x1;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwimi r9,r10,0,16,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFCFFFF) | (ctx.r9.u64 & 0x30000);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r9,22,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x1;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r9,r9,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwimi r9,r10,0,18,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFF3FFF) | (ctx.r9.u64 & 0xC000);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r9,23,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0x1;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwimi r9,r10,0,20,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFCFFF) | (ctx.r9.u64 & 0x3000);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r9,24,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r9,r9,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0xFFFFFC00;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwimi r9,r10,0,22,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFF3FF) | (ctx.r9.u64 & 0xC00);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r9,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwimi r9,r10,0,24,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFCFF) | (ctx.r9.u64 & 0x300);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r9,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwimi r9,r10,0,26,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFF3F) | (ctx.r9.u64 & 0xC0);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bne 0x83223fcc
	if (!ctx.cr0.eq) goto loc_83223FCC;
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm. r9,r8,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83223f4c
	if (ctx.cr0.eq) goto loc_83223F4C;
	// rlwinm r9,r11,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r9,15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 15, ctx.xer);
	// bgt cr6,0x83223f34
	if (ctx.cr6.gt) goto loc_83223F34;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,-1136
	ctx.r12.s64 = ctx.r12.s64 + -1136;
	// lbzx r0,r12,r9
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r9.u32);
	// lis r12,-31966
	ctx.r12.s64 = -2094923776;
	// addi r12,r12,16164
	ctx.r12.s64 = ctx.r12.s64 + 16164;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_83223F4C;
	case 1:
		goto loc_83223F4C;
	case 2:
		goto loc_83223F4C;
	case 3:
		goto loc_83223F4C;
	case 4:
		goto loc_83223F4C;
	case 5:
		goto loc_83223F40;
	case 6:
		goto loc_83223F40;
	case 7:
		goto loc_83223F4C;
	case 8:
		goto loc_83223F2C;
	case 9:
		goto loc_83223F24;
	case 10:
		goto loc_83223F4C;
	case 11:
		goto loc_83223F24;
	case 12:
		goto loc_83223F4C;
	case 13:
		goto loc_83223F4C;
	case 14:
		goto loc_83223F4C;
	case 15:
		goto loc_83223F4C;
	default:
		__builtin_unreachable();
	}
loc_83223F24:
	// rlwinm r9,r10,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	// b 0x83223f38
	goto loc_83223F38;
loc_83223F2C:
	// rlwinm r9,r10,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	// b 0x83223f38
	goto loc_83223F38;
loc_83223F34:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_83223F38:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x83223f4c
	if (ctx.cr6.eq) goto loc_83223F4C;
loc_83223F40:
	// rlwinm r9,r8,0,24,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// rlwinm r9,r9,0,20,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
loc_83223F4C:
	// rlwinm r28,r11,20,28,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r28,15
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 15, ctx.xer);
	// bgt cr6,0x83223fcc
	if (ctx.cr6.gt) goto loc_83223FCC;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,-1152
	ctx.r12.s64 = ctx.r12.s64 + -1152;
	// lbzx r0,r12,r28
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r28.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31966
	ctx.r12.s64 = -2094923776;
	// addi r12,r12,16256
	ctx.r12.s64 = ctx.r12.s64 + 16256;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r28.u64) {
	case 0:
		goto loc_83223F80;
	case 1:
		goto loc_83223FDC;
	case 2:
		goto loc_83223FDC;
	case 3:
		goto loc_8322405C;
	case 4:
		goto loc_8322405C;
	case 5:
		goto loc_83224078;
	case 6:
		goto loc_83224078;
	case 7:
		goto loc_83224104;
	case 8:
		goto loc_8322411C;
	case 9:
		goto loc_83224134;
	case 10:
		goto loc_8322414C;
	case 11:
		goto loc_8322415C;
	case 12:
		goto loc_83224174;
	case 13:
		goto loc_8322405C;
	case 14:
		goto loc_8322405C;
	case 15:
		goto loc_83224188;
	default:
		__builtin_unreachable();
	}
loc_83223F80:
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// std r23,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r23.u64);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwimi r11,r7,0,21,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFFFFFFFFF07FF) | (ctx.r11.u64 & 0xF800);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_83223FA4:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83223fc4
	if (!ctx.cr0.eq) goto loc_83223FC4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x83223fa4
	if (!ctx.cr6.eq) goto loc_83223FA4;
loc_83223FC4:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832241ec
	if (ctx.cr0.eq) goto loc_832241EC;
loc_83223FCC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_83223FD4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
loc_83223FDC:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// std r23,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r23.u64);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// lwz r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r18,84(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r5,r18,0,21,19
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r18.u32, 0) & 0xFFFFFFFFFFFFF7FF) | (ctx.r5.u64 & 0x800);
	// rlwimi r6,r17,0,0,16
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r17.u32, 0) & 0xFFFF8000) | (ctx.r6.u64 & 0xFFFFFFFF00007FFF);
	// rlwimi r19,r5,0,23,15
	ctx.r19.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFFFFFFFFFF01FF) | (ctx.r19.u64 & 0xFE00);
	// rlwimi r4,r6,0,16,3
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFFFF000FFFF) | (ctx.r4.u64 & 0xFFF0000);
	// rlwimi r19,r5,0,20,21
	ctx.r19.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xC00) | (ctx.r19.u64 & 0xFFFFFFFFFFFFF3FF);
	// rlwimi r10,r4,0,17,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x7FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8000);
	// rlwimi r11,r19,0,0,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r19.u32, 0) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// rlwimi r10,r4,0,4,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFF0000) | (ctx.r10.u64 & 0xFFFFFFFFF000FFFF);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_83224034:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83224054
	if (!ctx.cr0.eq) goto loc_83224054;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x83224034
	if (!ctx.cr6.eq) goto loc_83224034;
loc_83224054:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83223fcc
	if (!ctx.cr0.eq) goto loc_83223FCC;
loc_8322405C:
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832231d0
	ctx.lr = 0x83224074;
	sub_832231D0(ctx, base);
	// b 0x832241e4
	goto loc_832241E4;
loc_83224078:
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// std r23,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r23.u64);
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// lwz r15,88(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r16,92(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwimi r5,r16,0,21,19
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r16.u32, 0) & 0xFFFFFFFFFFFFF7FF) | (ctx.r5.u64 & 0x800);
	// rlwimi r6,r15,0,0,19
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r15.u32, 0) & 0xFFFFF000) | (ctx.r6.u64 & 0xFFFFFFFF00000FFF);
	// rlwimi r19,r5,0,22,20
	ctx.r19.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFFFFFFFFFFFBFF) | (ctx.r19.u64 & 0x400);
	// rlwimi r4,r6,0,20,16
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r4.u64 & 0x7000);
	// rlwimi r17,r19,0,23,15
	ctx.r17.u64 = (__builtin_rotateleft32(ctx.r19.u32, 0) & 0xFFFFFFFFFFFF01FF) | (ctx.r17.u64 & 0xFE00);
	// rlwimi r18,r4,0,16,3
	ctx.r18.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFFF000FFFF) | (ctx.r18.u64 & 0xFFF0000);
	// rlwimi r17,r19,0,20,21
	ctx.r17.u64 = (__builtin_rotateleft32(ctx.r19.u32, 0) & 0xC00) | (ctx.r17.u64 & 0xFFFFFFFFFFFFF3FF);
	// rlwimi r10,r18,0,17,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r18.u32, 0) & 0x7FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8000);
	// rlwimi r11,r17,0,0,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r17.u32, 0) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// rlwimi r10,r18,0,4,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r18.u32, 0) & 0xFFF0000) | (ctx.r10.u64 & 0xFFFFFFFFF000FFFF);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_832240E0:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83224054
	if (!ctx.cr0.eq) goto loc_83224054;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x832240e0
	if (!ctx.cr6.eq) goto loc_832240E0;
	// b 0x83224054
	goto loc_83224054;
loc_83224104:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83223490
	ctx.lr = 0x83224118;
	sub_83223490(ctx, base);
	// b 0x832241e4
	goto loc_832241E4;
loc_8322411C:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832235b8
	ctx.lr = 0x83224130;
	sub_832235B8(ctx, base);
	// b 0x832241e4
	goto loc_832241E4;
loc_83224134:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83223708
	ctx.lr = 0x83224148;
	sub_83223708(ctx, base);
	// b 0x832241e4
	goto loc_832241E4;
loc_8322414C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832237f8
	ctx.lr = 0x83224158;
	sub_832237F8(ctx, base);
	// b 0x832241e4
	goto loc_832241E4;
loc_8322415C:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832238b0
	ctx.lr = 0x83224170;
	sub_832238B0(ctx, base);
	// b 0x832241e4
	goto loc_832241E4;
loc_83224174:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832239d8
	ctx.lr = 0x83224184;
	sub_832239D8(ctx, base);
	// b 0x832241e4
	goto loc_832241E4;
loc_83224188:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// std r23,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r23.u64);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwimi r11,r7,0,20,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFFFFFFFFF0FFF) | (ctx.r11.u64 & 0xF000);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_832241AC:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832241cc
	if (!ctx.cr0.eq) goto loc_832241CC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x832241ac
	if (!ctx.cr6.eq) goto loc_832241AC;
loc_832241CC:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83223fcc
	if (!ctx.cr0.eq) goto loc_83223FCC;
	// lbz r11,40(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83223fcc
	if (!ctx.cr0.eq) goto loc_83223FCC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_832241E4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x83223fd4
	if (ctx.cr6.lt) goto loc_83223FD4;
loc_832241EC:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x8322420c
	if (ctx.cr6.eq) goto loc_8322420C;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// beq cr6,0x8322420c
	if (ctx.cr6.eq) goto loc_8322420C;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// beq cr6,0x8322420c
	if (ctx.cr6.eq) goto loc_8322420C;
	// cmpwi cr6,r28,14
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 14, ctx.xer);
	// bne cr6,0x83224284
	if (!ctx.cr6.eq) goto loc_83224284;
loc_8322420C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// bne cr6,0x83223fcc
	if (!ctx.cr6.eq) goto loc_83223FCC;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x83223fcc
	if (!ctx.cr6.eq) goto loc_83223FCC;
	// addic. r11,r25,4
	ctx.xer.ca = ctx.r25.u32 > 4294967291;
	ctx.r11.s64 = ctx.r25.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83223fcc
	if (ctx.cr0.eq) goto loc_83223FCC;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// bge cr6,0x8322423c
	if (!ctx.cr6.lt) goto loc_8322423C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x83224240
	if (ctx.cr6.gt) goto loc_83224240;
loc_8322423C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_83224240:
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x83223fcc
	if (!ctx.cr6.eq) goto loc_83223FCC;
	// lbz r11,40(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bne 0x83224274
	if (!ctx.cr0.eq) goto loc_83224274;
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83223fcc
	if (ctx.cr0.eq) goto loc_83223FCC;
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83223fcc
	if (ctx.cr0.eq) goto loc_83223FCC;
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83223fcc
	if (ctx.cr0.eq) goto loc_83223FCC;
	// b 0x83224284
	goto loc_83224284;
loc_83224274:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83223fcc
	if (ctx.cr0.eq) goto loc_83223FCC;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83223fcc
	if (!ctx.cr0.eq) goto loc_83223FCC;
loc_83224284:
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,-1184
	ctx.r12.s64 = ctx.r12.s64 + -1184;
	// rlwinm r0,r28,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31966
	ctx.r12.s64 = -2094923776;
	// addi r12,r12,15744
	ctx.r12.s64 = ctx.r12.s64 + 15744;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r12.u64) {
	case 0:
		goto loc_832242AC;
	default:
		__builtin_unreachable();
	}
loc_832242AC:
	// addic. r27,r27,1
	ctx.xer.ca = ctx.r27.u32 > 4294967294;
	ctx.r27.s64 = ctx.r27.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bge 0x83223bd8
	if (!ctx.cr0.lt) goto loc_83223BD8;
	// b 0x83223fcc
	goto loc_83223FCC;
}

__attribute__((alias("__imp__sub_832242BC"))) PPC_WEAK_FUNC(sub_832242BC);
PPC_FUNC_IMPL(__imp__sub_832242BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832242C0"))) PPC_WEAK_FUNC(sub_832242C0);
PPC_FUNC_IMPL(__imp__sub_832242C0) {
	PPC_FUNC_PROLOGUE();
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x832242d4
	if (!ctx.cr6.gt) goto loc_832242D4;
loc_832242C8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_832242D4:
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// clrldi r9,r5,32
	ctx.r9.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mulld r11,r11,r9
	ctx.r11.s64 = ctx.r11.s64 * ctx.r9.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrldi r10,r6,32
	ctx.r10.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x832242c8
	if (ctx.cr6.gt) goto loc_832242C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832242FC"))) PPC_WEAK_FUNC(sub_832242FC);
PPC_FUNC_IMPL(__imp__sub_832242FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83224300"))) PPC_WEAK_FUNC(sub_83224300);
PPC_FUNC_IMPL(__imp__sub_83224300) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8322434c
	if (ctx.cr6.eq) goto loc_8322434C;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x8322431c
	if (!ctx.cr6.gt) goto loc_8322431C;
loc_83224310:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_8322431C:
	// subf. r10,r4,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x83224310
	if (ctx.cr0.eq) goto loc_83224310;
loc_83224328:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x83224310
	if (!ctx.cr6.lt) goto loc_83224310;
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8322434c
	if (ctx.cr0.eq) goto loc_8322434C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83224328
	if (ctx.cr6.lt) goto loc_83224328;
	// b 0x83224310
	goto loc_83224310;
loc_8322434C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83224354"))) PPC_WEAK_FUNC(sub_83224354);
PPC_FUNC_IMPL(__imp__sub_83224354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83224358"))) PPC_WEAK_FUNC(sub_83224358);
PPC_FUNC_IMPL(__imp__sub_83224358) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r6,240
	ctx.r6.s64 = 240;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x83224300
	ctx.lr = 0x83224384;
	sub_83224300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832243d4
	if (ctx.cr0.lt) goto loc_832243D4;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x832243ac
	if (ctx.cr6.gt) goto loc_832243AC;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r9,r5,32
	ctx.r9.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// ble cr6,0x832243b8
	if (!ctx.cr6.gt) goto loc_832243B8;
loc_832243AC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x832243d4
	goto loc_832243D4;
loc_832243B8:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bl 0x832243e8
	ctx.lr = 0x832243C8;
	sub_832243E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832243d4
	if (ctx.cr0.lt) goto loc_832243D4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_832243D4:
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

__attribute__((alias("__imp__sub_832243E8"))) PPC_WEAK_FUNC(sub_832243E8);
PPC_FUNC_IMPL(__imp__sub_832243E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832243F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x83224420
	if (ctx.cr6.eq) goto loc_83224420;
loc_83224408:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x832244ec
	if (ctx.cr6.eq) goto loc_832244EC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83224408
	if (!ctx.cr6.eq) goto loc_83224408;
loc_83224420:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x832244ec
	if (ctx.cr6.gt) goto loc_832244EC;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x832244ec
	if (ctx.cr6.gt) goto loc_832244EC;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lhz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x832244ec
	if (ctx.cr6.gt) goto loc_832244EC;
	// rlwinm r8,r10,3,13,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7FFF8;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r26,r29,32
	ctx.r26.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpld cr6,r9,r26
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r26.u64, ctx.xer);
	// bgt cr6,0x832244ec
	if (ctx.cr6.gt) goto loc_832244EC;
	// clrlwi. r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// ble 0x832244e4
	if (!ctx.cr0.gt) goto loc_832244E4;
loc_83224478:
	// li r6,240
	ctx.r6.s64 = 240;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83224300
	ctx.lr = 0x8322448C;
	sub_83224300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832244cc
	if (ctx.cr0.lt) goto loc_832244CC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x832244ec
	if (ctx.cr6.gt) goto loc_832244EC;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpld cr6,r10,r26
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r26.u64, ctx.xer);
	// bgt cr6,0x832244ec
	if (ctx.cr6.gt) goto loc_832244EC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x832243e8
	ctx.lr = 0x832244C0;
	sub_832243E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832244cc
	if (ctx.cr0.lt) goto loc_832244CC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_832244CC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x832244f4
	if (ctx.cr6.lt) goto loc_832244F4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x83224478
	if (ctx.cr6.lt) goto loc_83224478;
loc_832244E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832244f4
	goto loc_832244F4;
loc_832244EC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_832244F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832244FC"))) PPC_WEAK_FUNC(sub_832244FC);
PPC_FUNC_IMPL(__imp__sub_832244FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83224500"))) PPC_WEAK_FUNC(sub_83224500);
PPC_FUNC_IMPL(__imp__sub_83224500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83224508;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r6,240
	ctx.r6.s64 = 240;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x83224300
	ctx.lr = 0x83224528;
	sub_83224300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832245f4
	if (ctx.cr0.lt) goto loc_832245F4;
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x83224550
	if (ctx.cr6.gt) goto loc_83224550;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r29,r31,32
	ctx.r29.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpld cr6,r10,r29
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r29.u64, ctx.xer);
	// ble cr6,0x8322455c
	if (!ctx.cr6.gt) goto loc_8322455C;
loc_83224550:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x832245f4
	goto loc_832245F4;
loc_8322455C:
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r30,16(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x832243e8
	ctx.lr = 0x83224574;
	sub_832243E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832245f4
	if (ctx.cr0.lt) goto loc_832245F4;
	// lhz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// lhz r9,6(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// lhz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x83224610
	if (ctx.cr6.lt) goto loc_83224610;
	// beq cr6,0x83224604
	if (ctx.cr6.eq) goto loc_83224604;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x832245fc
	if (ctx.cr6.lt) goto loc_832245FC;
	// bne cr6,0x83224550
	if (!ctx.cr6.eq) goto loc_83224550;
	// li r11,32
	ctx.r11.s64 = 32;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83224550
	if (!ctx.cr6.eq) goto loc_83224550;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832245B0:
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x83224550
	if (ctx.cr6.gt) goto loc_83224550;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832245f0
	if (ctx.cr6.eq) goto loc_832245F0;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x83224550
	if (ctx.cr6.gt) goto loc_83224550;
	// clrldi r11,r7,48
	ctx.r11.u64 = ctx.r7.u64 & 0xFFFF;
	// clrldi r9,r8,32
	ctx.r9.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// mulld r11,r11,r9
	ctx.r11.s64 = ctx.r11.s64 * ctx.r9.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r29
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, ctx.xer);
	// bgt cr6,0x83224550
	if (ctx.cr6.gt) goto loc_83224550;
loc_832245F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832245F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_832245FC:
	// li r11,256
	ctx.r11.s64 = 256;
	// b 0x83224608
	goto loc_83224608;
loc_83224604:
	// li r11,64
	ctx.r11.s64 = 64;
loc_83224608:
	// li r8,16
	ctx.r8.s64 = 16;
	// b 0x832245b0
	goto loc_832245B0;
loc_83224610:
	// li r11,256
	ctx.r11.s64 = 256;
	// li r8,4
	ctx.r8.s64 = 4;
	// b 0x832245b0
	goto loc_832245B0;
}

__attribute__((alias("__imp__sub_8322461C"))) PPC_WEAK_FUNC(sub_8322461C);
PPC_FUNC_IMPL(__imp__sub_8322461C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83224620"))) PPC_WEAK_FUNC(sub_83224620);
PPC_FUNC_IMPL(__imp__sub_83224620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83224628;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8322471c
	if (ctx.cr6.eq) goto loc_8322471C;
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8322464c
	if (!ctx.cr6.lt) goto loc_8322464C;
loc_83224640:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83224720
	goto loc_83224720;
loc_8322464C:
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x83224640
	if (ctx.cr6.gt) goto loc_83224640;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x83224640
	if (ctx.cr6.gt) goto loc_83224640;
	// cmplwi cr6,r29,28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 28, ctx.xer);
	// blt cr6,0x83224640
	if (ctx.cr6.lt) goto loc_83224640;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// lwz r27,16(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x83224640
	if (ctx.cr6.gt) goto loc_83224640;
	// clrldi r11,r27,32
	ctx.r11.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bgt cr6,0x83224640
	if (ctx.cr6.gt) goto loc_83224640;
	// li r6,240
	ctx.r6.s64 = 240;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83224300
	ctx.lr = 0x832246C8;
	sub_83224300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83224720
	if (ctx.cr0.lt) goto loc_83224720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83224300
	ctx.lr = 0x832246DC;
	sub_83224300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83224720
	if (ctx.cr0.lt) goto loc_83224720;
	// add r30,r8,r31
	ctx.r30.u64 = ctx.r8.u64 + ctx.r31.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8322471c
	if (ctx.cr6.eq) goto loc_8322471C;
loc_832246F4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83224500
	ctx.lr = 0x83224704;
	sub_83224500(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83224720
	if (ctx.cr0.lt) goto loc_83224720;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x832246f4
	if (ctx.cr6.lt) goto loc_832246F4;
loc_8322471C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83224720:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83224728"))) PPC_WEAK_FUNC(sub_83224728);
PPC_FUNC_IMPL(__imp__sub_83224728) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83224888
	if (ctx.cr6.eq) goto loc_83224888;
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83224748
	if (!ctx.cr6.lt) goto loc_83224748;
loc_8322473C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_83224748:
	// lwz r9,72(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8322473c
	if (ctx.cr6.gt) goto loc_8322473C;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpld cr6,r11,r8
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x8322473c
	if (ctx.cr6.gt) goto loc_8322473C;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x83224878
	goto loc_83224878;
loc_83224790:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr. r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x832247b4
	if (!ctx.cr0.eq) goto loc_832247B4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x83224880
	if (!ctx.cr6.lt) goto loc_83224880;
	// b 0x83224878
	goto loc_83224878;
loc_832247B4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83224810
	if (!ctx.cr6.eq) goto loc_83224810;
	// clrlwi. r9,r8,28
	ctx.r9.u64 = ctx.r8.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8322473c
	if (!ctx.cr0.eq) goto loc_8322473C;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8322473c
	if (!ctx.cr6.lt) goto loc_8322473C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,80(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8322473c
	if (!ctx.cr6.lt) goto loc_8322473C;
	// rlwinm r7,r10,2,14,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// clrldi r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFF;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x8322473c
	if (ctx.cr6.gt) goto loc_8322473C;
	// rldicl r10,r10,62,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 62) & 0x3FFFFFFFFFFFFFFF;
	// clrldi r9,r6,48
	ctx.r9.u64 = ctx.r6.u64 & 0xFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpldi cr6,r10,512
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 512, ctx.xer);
	// b 0x83224874
	goto loc_83224874;
loc_83224810:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x83224838
	if (!ctx.cr6.eq) goto loc_83224838;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r9,8992
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8992, ctx.xer);
	// blt cr6,0x8322473c
	if (ctx.cr6.lt) goto loc_8322473C;
	// rlwinm r10,r10,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// clrldi r9,r6,48
	ctx.r9.u64 = ctx.r6.u64 & 0xFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpldi cr6,r10,9120
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 9120, ctx.xer);
	// b 0x83224864
	goto loc_83224864;
loc_83224838:
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x83224878
	if (!ctx.cr6.eq) goto loc_83224878;
	// clrlwi. r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8322473c
	if (!ctx.cr0.eq) goto loc_8322473C;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r9,8960
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8960, ctx.xer);
	// blt cr6,0x8322473c
	if (ctx.cr6.lt) goto loc_8322473C;
	// rlwinm r10,r10,1,15,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFC;
	// clrldi r9,r6,48
	ctx.r9.u64 = ctx.r6.u64 & 0xFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpldi cr6,r10,8992
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 8992, ctx.xer);
loc_83224864:
	// bgt cr6,0x8322473c
	if (ctx.cr6.gt) goto loc_8322473C;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
loc_83224874:
	// bgt cr6,0x8322473c
	if (ctx.cr6.gt) goto loc_8322473C;
loc_83224878:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x83224790
	if (ctx.cr6.lt) goto loc_83224790;
loc_83224880:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8322473c
	if (!ctx.cr6.eq) goto loc_8322473C;
loc_83224888:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83224890"))) PPC_WEAK_FUNC(sub_83224890);
PPC_FUNC_IMPL(__imp__sub_83224890) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83224904
	if (ctx.cr6.eq) goto loc_83224904;
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832248c0
	if (ctx.cr6.lt) goto loc_832248C0;
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// ble cr6,0x832248cc
	if (!ctx.cr6.gt) goto loc_832248CC;
loc_832248C0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_832248CC:
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,260
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 260, ctx.xer);
	// bge cr6,0x832248c0
	if (!ctx.cr6.lt) goto loc_832248C0;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832248c0
	if (ctx.cr6.lt) goto loc_832248C0;
	// addi r7,r8,3
	ctx.r7.s64 = ctx.r8.s64 + 3;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// rlwinm r11,r7,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x832248c0
	if (ctx.cr6.gt) goto loc_832248C0;
loc_83224904:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322490C"))) PPC_WEAK_FUNC(sub_8322490C);
PPC_FUNC_IMPL(__imp__sub_8322490C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83224910"))) PPC_WEAK_FUNC(sub_83224910);
PPC_FUNC_IMPL(__imp__sub_83224910) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm. r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83224928
	if (ctx.cr0.eq) goto loc_83224928;
loc_8322491C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_83224928:
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322491c
	if (!ctx.cr0.eq) goto loc_8322491C;
	// lwz r9,68(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8322491c
	if (ctx.cr6.lt) goto loc_8322491C;
	// rldicl r8,r11,61,57
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x7F;
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// clrldi r7,r3,32
	ctx.r7.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,0,61
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 0) & 0xFFFFFFFFFFFFFFFC;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpld cr6,r8,r10
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x8322491c
	if (ctx.cr6.gt) goto loc_8322491C;
	// rlwinm. r9,r11,27,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8322499c
	if (ctx.cr0.eq) goto loc_8322499C;
loc_83224970:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83224988
	if (ctx.cr6.eq) goto loc_83224988;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8322491c
	if (!ctx.cr6.lt) goto loc_8322491C;
loc_83224988:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83224970
	if (ctx.cr6.lt) goto loc_83224970;
loc_8322499C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832249A4"))) PPC_WEAK_FUNC(sub_832249A4);
PPC_FUNC_IMPL(__imp__sub_832249A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832249A8"))) PPC_WEAK_FUNC(sub_832249A8);
PPC_FUNC_IMPL(__imp__sub_832249A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,68(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x832249dc
	if (ctx.cr6.lt) goto loc_832249DC;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,24(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// rldicr r11,r11,2,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 2) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// ble cr6,0x832249e8
	if (!ctx.cr6.gt) goto loc_832249E8;
loc_832249DC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_832249E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832249F0"))) PPC_WEAK_FUNC(sub_832249F0);
PPC_FUNC_IMPL(__imp__sub_832249F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// lwz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// blt cr6,0x83224a28
	if (ctx.cr6.lt) goto loc_83224A28;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r9,72(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// rldimi r11,r7,2,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u64, 2) & 0x3FFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFC00000003);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// ble cr6,0x83224a34
	if (!ctx.cr6.gt) goto loc_83224A34;
loc_83224A28:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_83224A34:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83224ae0
	if (ctx.cr6.eq) goto loc_83224AE0;
loc_83224A48:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r9,20
	ctx.r10.u64 = ctx.r9.u32 & 0xFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83224a28
	if (!ctx.cr6.gt) goto loc_83224A28;
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// rlwinm r5,r9,1,19,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1FFE;
	// cmpld cr6,r5,r11
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x83224a28
	if (!ctx.cr6.lt) goto loc_83224A28;
	// addi r11,r10,11
	ctx.r11.s64 = ctx.r10.s64 + 11;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83224a28
	if (ctx.cr6.eq) goto loc_83224A28;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83224a28
	if (ctx.cr6.eq) goto loc_83224A28;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mulli r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 * 12;
	// lwzx r11,r5,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83224a28
	if (!ctx.cr0.eq) goto loc_83224A28;
	// rlwinm r11,r9,12,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83224ab8
	if (!ctx.cr6.eq) goto loc_83224AB8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x83224a28
	if (!ctx.cr6.eq) goto loc_83224A28;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x83224acc
	goto loc_83224ACC;
loc_83224AB8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83224acc
	if (ctx.cr6.eq) goto loc_83224ACC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x83224a28
	if (ctx.cr6.eq) goto loc_83224A28;
	// li r6,0
	ctx.r6.s64 = 0;
loc_83224ACC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83224a48
	if (ctx.cr6.lt) goto loc_83224A48;
loc_83224AE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83224AE8"))) PPC_WEAK_FUNC(sub_83224AE8);
PPC_FUNC_IMPL(__imp__sub_83224AE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// blt cr6,0x83224b20
	if (ctx.cr6.lt) goto loc_83224B20;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r9,72(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// rldimi r11,r7,2,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u64, 2) & 0x3FFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFC00000003);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// ble cr6,0x83224b2c
	if (!ctx.cr6.gt) goto loc_83224B2C;
loc_83224B20:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_83224B2C:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83224bc0
	if (ctx.cr6.eq) goto loc_83224BC0;
	// lwz r6,84(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
loc_83224B3C:
	// lis r12,-16
	ctx.r12.s64 = -1048576;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rotldi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 1);
	// rldicr r12,r12,13,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 13) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpld cr6,r11,r6
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r6.u64, ctx.xer);
	// bge cr6,0x83224b20
	if (!ctx.cr6.lt) goto loc_83224B20;
	// clrlwi r11,r9,20
	ctx.r11.u64 = ctx.r9.u32 & 0xFFF;
	// addi r10,r11,11
	ctx.r10.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// rlwinm r10,r10,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x83224b20
	if (ctx.cr6.eq) goto loc_83224B20;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x83224b20
	if (ctx.cr6.eq) goto loc_83224B20;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83224b94
	if (!ctx.cr6.eq) goto loc_83224B94;
	// rlwinm. r10,r9,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83224b20
	if (ctx.cr0.eq) goto loc_83224B20;
loc_83224B94:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83224b20
	if (ctx.cr0.eq) goto loc_83224B20;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83224b20
	if (!ctx.cr0.eq) goto loc_83224B20;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83224b3c
	if (ctx.cr6.lt) goto loc_83224B3C;
loc_83224BC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83224BC8"))) PPC_WEAK_FUNC(sub_83224BC8);
PPC_FUNC_IMPL(__imp__sub_83224BC8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83224BD0;
	__savegprlr_28(ctx, base);
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm. r11,r10,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83224be8
	if (ctx.cr0.eq) goto loc_83224BE8;
loc_83224BDC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83224cc8
	goto loc_83224CC8;
loc_83224BE8:
	// rlwinm. r11,r10,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83224bdc
	if (!ctx.cr0.eq) goto loc_83224BDC;
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// rlwinm r7,r10,27,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83224bdc
	if (ctx.cr6.lt) goto loc_83224BDC;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r9,72(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// rldimi r11,r7,2,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u64, 2) & 0x3FFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFC00000003);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bgt cr6,0x83224bdc
	if (ctx.cr6.gt) goto loc_83224BDC;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r30,24(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r29,32(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// beq cr6,0x83224cc4
	if (ctx.cr6.eq) goto loc_83224CC4;
loc_83224C40:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r8,16,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFF;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x83224bdc
	if (ctx.cr6.gt) goto loc_83224BDC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// rlwinm r5,r8,24,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xF;
	// ori r10,r10,32856
	ctx.r10.u64 = ctx.r10.u64 | 32856;
	// lwzx r10,r4,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83224bdc
	if (!ctx.cr6.lt) goto loc_83224BDC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_83224C74:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r28,r10,20
	ctx.r28.u64 = ctx.r10.u32 & 0xFFF;
	// mulli r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 * 12;
	// lwzx r28,r28,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// clrlwi r28,r28,26
	ctx.r28.u64 = ctx.r28.u32 & 0x3F;
	// cmplw cr6,r28,r5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x83224bdc
	if (!ctx.cr6.eq) goto loc_83224BDC;
	// rlwinm. r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x83224c74
	if (ctx.cr0.eq) goto loc_83224C74;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x83224cb0
	if (ctx.cr6.eq) goto loc_83224CB0;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83224bdc
	if (!ctx.cr6.lt) goto loc_83224BDC;
loc_83224CB0:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// clrlwi r31,r8,24
	ctx.r31.u64 = ctx.r8.u32 & 0xFF;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83224c40
	if (ctx.cr6.lt) goto loc_83224C40;
loc_83224CC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83224CC8:
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83224CCC"))) PPC_WEAK_FUNC(sub_83224CCC);
PPC_FUNC_IMPL(__imp__sub_83224CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83224CD0"))) PPC_WEAK_FUNC(sub_83224CD0);
PPC_FUNC_IMPL(__imp__sub_83224CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83224CD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addis r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 65536;
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addis r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 65536;
	// lbz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// addi r7,r7,-32680
	ctx.r7.s64 = ctx.r7.s64 + -32680;
	// addi r10,r10,-32676
	ctx.r10.s64 = ctx.r10.s64 + -32676;
	// addi r11,r11,-32672
	ctx.r11.s64 = ctx.r11.s64 + -32672;
	// addi r8,r8,-32668
	ctx.r8.s64 = ctx.r8.s64 + -32668;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r27,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r27.u32);
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r27.u32);
	// beq 0x83224d50
	if (ctx.cr0.eq) goto loc_83224D50;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// rlwinm r9,r11,4,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x7;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// blt cr6,0x83224d40
	if (ctx.cr6.lt) goto loc_83224D40;
loc_83224D30:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_83224D38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_83224D40:
	// rlwinm r11,r11,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x83224d94
	goto loc_83224D94;
loc_83224D50:
	// lwz r9,52(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r10,r9,8,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0x7;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x83224d70
	if (!ctx.cr6.eq) goto loc_83224D70;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// b 0x83224d78
	goto loc_83224D78;
loc_83224D70:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83224d30
	if (!ctx.cr6.eq) goto loc_83224D30;
loc_83224D78:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x83224d30
	if (ctx.cr6.gt) goto loc_83224D30;
	// rlwinm r11,r9,12,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_83224D94:
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// bl 0x82299698
	ctx.lr = 0x83224DA4;
	sub_82299698(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x83224d30
	if (ctx.cr0.eq) goto loc_83224D30;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x83224DC8;
	sub_82CB16F0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r31,16
	ctx.xer.ca = ctx.r31.u32 > 4294967279;
	ctx.r11.s64 = ctx.r31.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// beq 0x83224d30
	if (ctx.cr0.eq) goto loc_83224D30;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83224DEC:
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x83224dec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83224DEC;
	// li r10,34
	ctx.r10.s64 = 34;
	// addi r28,r30,84
	ctx.r28.s64 = ctx.r30.s64 + 84;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r29,1
	ctx.r29.s64 = 65536;
loc_83224E08:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83223b70
	ctx.lr = 0x83224E1C;
	sub_83223B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83224e6c
	if (ctx.cr0.lt) goto loc_83224E6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x83224e6c
	if (!ctx.cr6.lt) goto loc_83224E6C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x83224e6c
	if (!ctx.cr6.lt) goto loc_83224E6C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83224e08
	if (!ctx.cr6.gt) goto loc_83224E08;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83224e6c
	if (!ctx.cr6.eq) goto loc_83224E6C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83224e88
	if (!ctx.cr6.eq) goto loc_83224E88;
loc_83224E6C:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
loc_83224E74:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x83224E80;
	sub_822996C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83224d38
	goto loc_83224D38;
loc_83224E88:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x83224e74
	goto loc_83224E74;
}

__attribute__((alias("__imp__sub_83224E90"))) PPC_WEAK_FUNC(sub_83224E90);
PPC_FUNC_IMPL(__imp__sub_83224E90) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83224ec8
	if (!ctx.cr6.lt) goto loc_83224EC8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_83224EAC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r8,r8,0,0,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC0000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x83224ed0
	if (!ctx.cr0.eq) goto loc_83224ED0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83224eac
	if (ctx.cr6.lt) goto loc_83224EAC;
loc_83224EC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83224ED0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83224EDC"))) PPC_WEAK_FUNC(sub_83224EDC);
PPC_FUNC_IMPL(__imp__sub_83224EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83224EE0"))) PPC_WEAK_FUNC(sub_83224EE0);
PPC_FUNC_IMPL(__imp__sub_83224EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,10
	ctx.r10.s64 = 655360;
	// ori r10,r10,53768
	ctx.r10.u64 = ctx.r10.u64 | 53768;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r30,72(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x83224f20
	if (!ctx.cr6.gt) goto loc_83224F20;
loc_83224F14:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83225100
	goto loc_83225100;
loc_83224F20:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x83224620
	ctx.lr = 0x83224F2C;
	sub_83224620(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83225100
	if (ctx.cr0.lt) goto loc_83225100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83224728
	ctx.lr = 0x83224F40;
	sub_83224728(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83225100
	if (ctx.cr0.lt) goto loc_83225100;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83224fb0
	if (ctx.cr6.eq) goto loc_83224FB0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83224f14
	if (ctx.cr6.lt) goto loc_83224F14;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x83224f14
	if (ctx.cr6.gt) goto loc_83224F14;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r8,260
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 260, ctx.xer);
	// bge cr6,0x83224f14
	if (!ctx.cr6.lt) goto loc_83224F14;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83224f14
	if (ctx.cr6.lt) goto loc_83224F14;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// rlwinm r11,r8,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x83224f14
	if (ctx.cr6.gt) goto loc_83224F14;
loc_83224FB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83224cd0
	ctx.lr = 0x83224FB8;
	sub_83224CD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83225100
	if (ctx.cr0.lt) goto loc_83225100;
	// lbz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83225054
	if (ctx.cr0.eq) goto loc_83225054;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm. r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83224f14
	if (!ctx.cr0.eq) goto loc_83224F14;
	// rlwinm. r9,r11,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83224f14
	if (!ctx.cr0.eq) goto loc_83224F14;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83224f14
	if (ctx.cr6.lt) goto loc_83224F14;
	// rldicl r7,r11,61,57
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x7F;
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// clrldi r6,r10,32
	ctx.r6.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r7,r7,0,61
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 0) & 0xFFFFFFFFFFFFFFFC;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpld cr6,r7,r9
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r9.u64, ctx.xer);
	// bgt cr6,0x83224f14
	if (ctx.cr6.gt) goto loc_83224F14;
	// rlwinm. r8,r11,27,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x832250c0
	if (ctx.cr0.eq) goto loc_832250C0;
loc_83225024:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322503c
	if (ctx.cr6.eq) goto loc_8322503C;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x83224f14
	if (!ctx.cr6.lt) goto loc_83224F14;
loc_8322503C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83225024
	if (ctx.cr6.lt) goto loc_83225024;
	// b 0x832250c0
	goto loc_832250C0;
loc_83225054:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83224f14
	if (ctx.cr6.lt) goto loc_83224F14;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,24(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// rldicr r11,r11,2,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 2) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bgt cr6,0x83224f14
	if (ctx.cr6.gt) goto loc_83224F14;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832249f0
	ctx.lr = 0x83225098;
	sub_832249F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83225100
	if (ctx.cr0.lt) goto loc_83225100;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83224ae8
	ctx.lr = 0x832250A8;
	sub_83224AE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83225100
	if (ctx.cr0.lt) goto loc_83225100;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83224bc8
	ctx.lr = 0x832250B8;
	sub_83224BC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83225100
	if (ctx.cr0.lt) goto loc_83225100;
loc_832250C0:
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r10,r31,84
	ctx.r10.s64 = ctx.r31.s64 + 84;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x832250fc
	if (!ctx.cr6.lt) goto loc_832250FC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_832250E0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r8,r8,0,0,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC0000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x83224f14
	if (!ctx.cr0.eq) goto loc_83224F14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x832250e0
	if (ctx.cr6.lt) goto loc_832250E0;
loc_832250FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83225100:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225118"))) PPC_WEAK_FUNC(sub_83225118);
PPC_FUNC_IMPL(__imp__sub_83225118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83225120;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83225148
	if (!ctx.cr6.eq) goto loc_83225148;
loc_8322513C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x832253d4
	goto loc_832253D4;
loc_83225148:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,4138
	ctx.r10.s64 = 271187968;
	// ori r10,r10,4352
	ctx.r10.u64 = ctx.r10.u64 | 4352;
	// rlwinm r11,r11,0,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8322513c
	if (!ctx.cr6.eq) goto loc_8322513C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e6c900
	ctx.lr = 0x8322516C;
	sub_82E6C900(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,4(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// beq 0x83225198
	if (ctx.cr0.eq) goto loc_83225198;
	// stb r4,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r4.u8);
loc_83225198:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83225248
	if (ctx.cr6.eq) goto loc_83225248;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8322513c
	if (!ctx.cr6.eq) goto loc_8322513C;
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8322513c
	if (ctx.cr6.lt) goto loc_8322513C;
	// clrldi r8,r28,32
	ctx.r8.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x8322513c
	if (ctx.cr6.gt) goto loc_8322513C;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,12
	ctx.r8.s64 = 12;
	// divwu r8,r9,r8
	ctx.r8.u32 = ctx.r9.u32 / ctx.r8.u32;
	// mulli r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 * 12;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// subf. r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8322513c
	if (!ctx.cr0.eq) goto loc_8322513C;
	// cmplwi cr6,r9,24564
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 24564, ctx.xer);
	// bgt cr6,0x8322513c
	if (ctx.cr6.gt) goto loc_8322513C;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// subf r9,r6,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r6.s64;
	// clrlwi. r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8322513c
	if (!ctx.cr0.eq) goto loc_8322513C;
	// stb r4,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r4.u8);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r9,24,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x3F;
	// b 0x83225310
	goto loc_83225310;
loc_83225248:
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8322513c
	if (ctx.cr6.lt) goto loc_8322513C;
	// clrldi r8,r28,32
	ctx.r8.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x8322513c
	if (ctx.cr6.gt) goto loc_8322513C;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,12
	ctx.r8.s64 = 12;
	// divwu r8,r9,r8
	ctx.r8.u32 = ctx.r9.u32 / ctx.r8.u32;
	// mulli r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 * 12;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// subf. r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8322513c
	if (!ctx.cr0.eq) goto loc_8322513C;
	// cmplwi cr6,r9,24552
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 24552, ctx.xer);
	// bgt cr6,0x8322513c
	if (ctx.cr6.gt) goto loc_8322513C;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// subf r9,r6,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r6.s64;
	// clrlwi. r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8322513c
	if (!ctx.cr0.eq) goto loc_8322513C;
	// stb r3,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r3.u8);
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r8,r8,29,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x7C;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
loc_83225310:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrldi r7,r5,32
	ctx.r7.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// clrldi r9,r6,32
	ctx.r9.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 + ctx.r9.u64;
	// cmpld cr6,r8,r11
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x8322513c
	if (ctx.cr6.gt) goto loc_8322513C;
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// lbz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8322513c
	if (!ctx.cr6.eq) goto loc_8322513C;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83225370
	if (ctx.cr6.eq) goto loc_83225370;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x83225374
	goto loc_83225374;
loc_83225370:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_83225374:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322538c
	if (ctx.cr6.eq) goto loc_8322538C;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x83225390
	goto loc_83225390;
loc_8322538C:
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
loc_83225390:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832253a8
	if (ctx.cr6.eq) goto loc_832253A8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x832253ac
	goto loc_832253AC;
loc_832253A8:
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_832253AC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// divwu r11,r11,r9
	ctx.r11.u32 = ctx.r11.u32 / ctx.r9.u32;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// stw r6,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r6.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
loc_832253D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832253DC"))) PPC_WEAK_FUNC(sub_832253DC);
PPC_FUNC_IMPL(__imp__sub_832253DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832253E0"))) PPC_WEAK_FUNC(sub_832253E0);
PPC_FUNC_IMPL(__imp__sub_832253E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832253f4
	if (ctx.cr6.lt) goto loc_832253F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832253F4:
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// subfc r11,r11,r5
	ctx.xer.ca = ctx.r5.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225408"))) PPC_WEAK_FUNC(sub_83225408);
PPC_FUNC_IMPL(__imp__sub_83225408) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83225410;
	__savegprlr_29(ctx, base);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83225444
	if (!ctx.cr6.lt) goto loc_83225444;
	// lwz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83225444
	if (!ctx.cr6.lt) goto loc_83225444;
loc_83225438:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x832256d8
	goto loc_832256D8;
loc_83225444:
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// stw r11,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r11.u32);
	// li r31,36
	ctx.r31.s64 = 36;
	// stw r4,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r4.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r3,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r3.u32);
	// stw r31,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addic. r4,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r4.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x832255dc
	if (ctx.cr0.eq) goto loc_832255DC;
	// addi r9,r1,-124
	ctx.r9.s64 = ctx.r1.s64 + -124;
	// addi r5,r1,-240
	ctx.r5.s64 = ctx.r1.s64 + -240;
	// addi r10,r1,-220
	ctx.r10.s64 = ctx.r1.s64 + -220;
loc_83225480:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r8,21
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 21, ctx.xer);
	// lbz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bge cr6,0x83225438
	if (!ctx.cr6.lt) goto loc_83225438;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r8,21
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 21, ctx.xer);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// beq 0x832254d4
	if (ctx.cr0.eq) goto loc_832254D4;
	// li r30,32
	ctx.r30.s64 = 32;
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bge cr6,0x83225438
	if (!ctx.cr6.lt) goto loc_83225438;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,28(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r30,r30,29,25,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x7C;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// b 0x8322556c
	goto loc_8322556C;
loc_832254D4:
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bge cr6,0x83225438
	if (!ctx.cr6.lt) goto loc_83225438;
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r29,24(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// cmplwi cr6,r8,21
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 21, ctx.xer);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bge cr6,0x83225438
	if (!ctx.cr6.lt) goto loc_83225438;
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r29,28(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// cmplwi cr6,r8,21
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 21, ctx.xer);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bge cr6,0x83225438
	if (!ctx.cr6.lt) goto loc_83225438;
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r29,28(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r8,21
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 21, ctx.xer);
	// rlwinm r29,r29,29,25,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x7C;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bge cr6,0x83225438
	if (!ctx.cr6.lt) goto loc_83225438;
	// lwz r30,24(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r7,32(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
loc_8322556C:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x832255a8
	if (ctx.cr6.eq) goto loc_832255A8;
	// cmplwi cr6,r8,21
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 21, ctx.xer);
	// bge cr6,0x83225438
	if (!ctx.cr6.lt) goto loc_83225438;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r30,16(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_832255A8:
	// cmplwi cr6,r8,21
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 21, ctx.xer);
	// bge cr6,0x83225438
	if (!ctx.cr6.lt) goto loc_83225438;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// blt cr6,0x83225480
	if (ctx.cr6.lt) goto loc_83225480;
loc_832255DC:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83225610
	if (ctx.cr6.eq) goto loc_83225610;
	// cmplwi cr6,r8,21
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 21, ctx.xer);
	// bge cr6,0x83225438
	if (!ctx.cr6.lt) goto loc_83225438;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-224
	ctx.r9.s64 = ctx.r1.s64 + -224;
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r6,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r6.u32);
loc_83225610:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83225650
	if (ctx.cr6.eq) goto loc_83225650;
	// cmplwi cr6,r8,21
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 21, ctx.xer);
	// bge cr6,0x83225438
	if (!ctx.cr6.lt) goto loc_83225438;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-224
	ctx.r7.s64 = ctx.r1.s64 + -224;
	// addi r6,r1,-128
	ctx.r6.s64 = ctx.r1.s64 + -128;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stwx r10,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u32);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stwx r11,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r11.u32);
loc_83225650:
	// addic. r30,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r30.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x832256d4
	if (ctx.cr0.eq) goto loc_832256D4;
	// addi r10,r1,-224
	ctx.r10.s64 = ctx.r1.s64 + -224;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r31,r10,-4
	ctx.r31.s64 = ctx.r10.s64 + -4;
loc_83225668:
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x832256c4
	if (!ctx.cr6.lt) goto loc_832256C4;
	// lwzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r4,r9,-4
	ctx.r4.s64 = ctx.r9.s64 + -4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_83225684:
	// addi r10,r1,-224
	ctx.r10.s64 = ctx.r1.s64 + -224;
	// addi r6,r1,-128
	ctx.r6.s64 = ctx.r1.s64 + -128;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r6,r11,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x832256b4
	if (!ctx.cr6.lt) goto loc_832256B4;
	// addi r6,r1,-128
	ctx.r6.s64 = ctx.r1.s64 + -128;
	// lwzx r6,r4,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x83225438
	if (ctx.cr6.lt) goto loc_83225438;
loc_832256B4:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83225684
	if (ctx.cr6.lt) goto loc_83225684;
loc_832256C4:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x83225668
	if (ctx.cr6.lt) goto loc_83225668;
loc_832256D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832256D8:
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832256DC"))) PPC_WEAK_FUNC(sub_832256DC);
PPC_FUNC_IMPL(__imp__sub_832256DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832256E8"))) PPC_WEAK_FUNC(sub_832256E8);
PPC_FUNC_IMPL(__imp__sub_832256E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832256F0;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83225834
	if (ctx.cr6.eq) goto loc_83225834;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// ori r3,r3,208
	ctx.r3.u64 = ctx.r3.u64 | 208;
	// bl 0x82299698
	ctx.lr = 0x83225718;
	sub_82299698(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// beq 0x83225820
	if (ctx.cr0.eq) goto loc_83225820;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,208
	ctx.r5.u64 = ctx.r5.u64 | 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x83225738;
	sub_82CB16F0(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83225118
	ctx.lr = 0x83225758;
	sub_83225118(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x83225768
	if (!ctx.cr0.lt) goto loc_83225768;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83225820
	goto loc_83225820;
loc_83225768:
	// lbz r11,41(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 41);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32872
	ctx.r29.u64 = ctx.r11.u64 | 32872;
	// beq 0x832257a4
	if (ctx.cr0.eq) goto loc_832257A4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r6,r30,r29
	ctx.r6.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r26,2
	ctx.r26.s64 = 2;
	// bl 0x83225118
	ctx.lr = 0x83225794;
	sub_83225118(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832257a4
	if (!ctx.cr0.lt) goto loc_832257A4;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83225820
	goto loc_83225820;
loc_832257A4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_832257A8:
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x832257d4
	if (!ctx.cr6.lt) goto loc_832257D4;
	// mullw r11,r28,r29
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x83224ee0
	ctx.lr = 0x832257C0;
	sub_83224EE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blt 0x83225820
	if (ctx.cr0.lt) goto loc_83225820;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x832257a8
	goto loc_832257A8;
loc_832257D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r5,41(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 41);
	// add r4,r30,r29
	ctx.r4.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bl 0x83225408
	ctx.lr = 0x832257E4;
	sub_83225408(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blt 0x83225820
	if (ctx.cr0.lt) goto loc_83225820;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83225804
	goto loc_83225804;
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x83225820
	goto loc_83225820;
loc_83225804:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83225818
	if (ctx.cr6.eq) goto loc_83225818;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822996c0
	ctx.lr = 0x83225818;
	sub_822996C0(ctx, base);
loc_83225818:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83225838
	goto loc_83225838;
loc_83225820:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83225834
	if (ctx.cr6.eq) goto loc_83225834;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822996c0
	ctx.lr = 0x83225834;
	sub_822996C0(ctx, base);
loc_83225834:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83225838:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83225840"))) PPC_WEAK_FUNC(sub_83225840);
PPC_FUNC_IMPL(__imp__sub_83225840) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322584C"))) PPC_WEAK_FUNC(sub_8322584C);
PPC_FUNC_IMPL(__imp__sub_8322584C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225850"))) PPC_WEAK_FUNC(sub_83225850);
PPC_FUNC_IMPL(__imp__sub_83225850) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x832256e8
	sub_832256E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83225858"))) PPC_WEAK_FUNC(sub_83225858);
PPC_FUNC_IMPL(__imp__sub_83225858) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x832256e8
	sub_832256E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83225860"))) PPC_WEAK_FUNC(sub_83225860);
PPC_FUNC_IMPL(__imp__sub_83225860) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x83225874
	if (!ctx.cr6.lt) goto loc_83225874;
loc_8322586C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83225874:
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8322586c
	if (ctx.cr6.lt) goto loc_8322586C;
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r9,36
	ctx.r10.s64 = ctx.r9.s64 + 36;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x8322586c
	if (ctx.cr6.gt) goto loc_8322586C;
	// clrlwi. r10,r3,30
	ctx.r10.u64 = ctx.r3.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322586c
	if (!ctx.cr0.eq) goto loc_8322586C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8322586c
	if (!ctx.cr0.eq) goto loc_8322586C;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// clrlwi. r6,r8,30
	ctx.r6.u64 = ctx.r8.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8322586c
	if (!ctx.cr0.eq) goto loc_8322586C;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x8322586c
	if (ctx.cr6.gt) goto loc_8322586C;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8322586c
	if (ctx.cr6.lt) goto loc_8322586C;
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// clrldi r9,r7,32
	ctx.r9.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x8322586c
	if (ctx.cr6.gt) goto loc_8322586C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832258F0"))) PPC_WEAK_FUNC(sub_832258F0);
PPC_FUNC_IMPL(__imp__sub_832258F0) {
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

__attribute__((alias("__imp__sub_83225900"))) PPC_WEAK_FUNC(sub_83225900);
PPC_FUNC_IMPL(__imp__sub_83225900) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225908"))) PPC_WEAK_FUNC(sub_83225908);
PPC_FUNC_IMPL(__imp__sub_83225908) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x83225924
	if (ctx.cr6.lt) goto loc_83225924;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83225928
	if (!ctx.cr6.gt) goto loc_83225928;
loc_83225924:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83225928:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83225938
	if (ctx.cr0.eq) goto loc_83225938;
loc_83225930:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83225938:
	// cmplwi cr6,r10,105
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 105, ctx.xer);
	// blt cr6,0x83225950
	if (ctx.cr6.lt) goto loc_83225950;
	// cmplwi cr6,r10,109
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 109, ctx.xer);
	// ble cr6,0x83225930
	if (!ctx.cr6.gt) goto loc_83225930;
	// cmplwi cr6,r10,123
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 123, ctx.xer);
	// beq cr6,0x83225930
	if (ctx.cr6.eq) goto loc_83225930;
loc_83225950:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225958"))) PPC_WEAK_FUNC(sub_83225958);
PPC_FUNC_IMPL(__imp__sub_83225958) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225968"))) PPC_WEAK_FUNC(sub_83225968);
PPC_FUNC_IMPL(__imp__sub_83225968) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225978"))) PPC_WEAK_FUNC(sub_83225978);
PPC_FUNC_IMPL(__imp__sub_83225978) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r3,r11,7,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225984"))) PPC_WEAK_FUNC(sub_83225984);
PPC_FUNC_IMPL(__imp__sub_83225984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225988"))) PPC_WEAK_FUNC(sub_83225988);
PPC_FUNC_IMPL(__imp__sub_83225988) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x832259c4
	if (ctx.cr6.eq) goto loc_832259C4;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x832259c4
	if (ctx.cr6.eq) goto loc_832259C4;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x832259c4
	if (ctx.cr6.eq) goto loc_832259C4;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x832259c4
	if (ctx.cr6.eq) goto loc_832259C4;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x832259c4
	if (ctx.cr6.eq) goto loc_832259C4;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x832259c8
	if (!ctx.cr6.eq) goto loc_832259C8;
loc_832259C4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832259C8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832259D0"))) PPC_WEAK_FUNC(sub_832259D0);
PPC_FUNC_IMPL(__imp__sub_832259D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,17,13,14
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0x60000) | (ctx.r11.u64 & 0xFFFFFFFFFFF9FFFF);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832259E4"))) PPC_WEAK_FUNC(sub_832259E4);
PPC_FUNC_IMPL(__imp__sub_832259E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832259E8"))) PPC_WEAK_FUNC(sub_832259E8);
PPC_FUNC_IMPL(__imp__sub_832259E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832259EC"))) PPC_WEAK_FUNC(sub_832259EC);
PPC_FUNC_IMPL(__imp__sub_832259EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832259F0"))) PPC_WEAK_FUNC(sub_832259F0);
PPC_FUNC_IMPL(__imp__sub_832259F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832259F4"))) PPC_WEAK_FUNC(sub_832259F4);
PPC_FUNC_IMPL(__imp__sub_832259F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832259F8"))) PPC_WEAK_FUNC(sub_832259F8);
PPC_FUNC_IMPL(__imp__sub_832259F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225A00"))) PPC_WEAK_FUNC(sub_83225A00);
PPC_FUNC_IMPL(__imp__sub_83225A00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225A04"))) PPC_WEAK_FUNC(sub_83225A04);
PPC_FUNC_IMPL(__imp__sub_83225A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225A08"))) PPC_WEAK_FUNC(sub_83225A08);
PPC_FUNC_IMPL(__imp__sub_83225A08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225A0C"))) PPC_WEAK_FUNC(sub_83225A0C);
PPC_FUNC_IMPL(__imp__sub_83225A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225A10"))) PPC_WEAK_FUNC(sub_83225A10);
PPC_FUNC_IMPL(__imp__sub_83225A10) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225A18"))) PPC_WEAK_FUNC(sub_83225A18);
PPC_FUNC_IMPL(__imp__sub_83225A18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225A20"))) PPC_WEAK_FUNC(sub_83225A20);
PPC_FUNC_IMPL(__imp__sub_83225A20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83225a3c
	if (ctx.cr6.eq) goto loc_83225A3C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x83225a40
	if (!ctx.cr6.eq) goto loc_83225A40;
loc_83225A3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83225A40:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225A48"))) PPC_WEAK_FUNC(sub_83225A48);
PPC_FUNC_IMPL(__imp__sub_83225A48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwimi r4,r11,0,0,12
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFF80000) | (ctx.r4.u64 & 0xFFFFFFFF0007FFFF);
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225A58"))) PPC_WEAK_FUNC(sub_83225A58);
PPC_FUNC_IMPL(__imp__sub_83225A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83225A60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,23
	ctx.r11.s64 = ctx.r4.s64 + 23;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwzx r5,r30,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83225a88
	if (ctx.cr6.eq) goto loc_83225A88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832339d8
	ctx.lr = 0x83225A88;
	sub_832339D8(ctx, base);
loc_83225A88:
	// stwx r31,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r31.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83225AA0"))) PPC_WEAK_FUNC(sub_83225AA0);
PPC_FUNC_IMPL(__imp__sub_83225AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r3,r11,9,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225AAC"))) PPC_WEAK_FUNC(sub_83225AAC);
PPC_FUNC_IMPL(__imp__sub_83225AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225AB0"))) PPC_WEAK_FUNC(sub_83225AB0);
PPC_FUNC_IMPL(__imp__sub_83225AB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r3,r11,6,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225ABC"))) PPC_WEAK_FUNC(sub_83225ABC);
PPC_FUNC_IMPL(__imp__sub_83225ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225AC0"))) PPC_WEAK_FUNC(sub_83225AC0);
PPC_FUNC_IMPL(__imp__sub_83225AC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r3,r11,5,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225ACC"))) PPC_WEAK_FUNC(sub_83225ACC);
PPC_FUNC_IMPL(__imp__sub_83225ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225AD0"))) PPC_WEAK_FUNC(sub_83225AD0);
PPC_FUNC_IMPL(__imp__sub_83225AD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83225b6c
	if (!ctx.cr0.eq) goto loc_83225B6C;
	// lwz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// rlwinm r8,r10,8,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// rlwinm r9,r11,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x83225b6c
	if (!ctx.cr6.eq) goto loc_83225B6C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83225b50
	if (ctx.cr6.eq) goto loc_83225B50;
	// rldicl r7,r11,7,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 7) & 0x1FFFFFFFF;
	// lwz r8,108(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// rldicl r5,r10,7,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 7) & 0x1FFFFFFFF;
	// lwz r6,108(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// rldicr r7,r7,0,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 0) & 0xFFFFFFFF00000000;
	// rldicr r5,r5,0,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 0) & 0xFFFFFFFF00000000;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 | ctx.r6.u64;
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// bne cr6,0x83225b6c
	if (!ctx.cr6.eq) goto loc_83225B6C;
	// lwz r8,72(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// lwz r7,72(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// rlwinm. r8,r8,0,7,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x83225b6c
	if (!ctx.cr0.eq) goto loc_83225B6C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83225b64
	if (!ctx.cr6.eq) goto loc_83225B64;
loc_83225B50:
	// rlwinm. r9,r11,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83225b64
	if (ctx.cr0.eq) goto loc_83225B64;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83225b6c
	if (!ctx.cr0.eq) goto loc_83225B6C;
loc_83225B64:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83225B6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225B74"))) PPC_WEAK_FUNC(sub_83225B74);
PPC_FUNC_IMPL(__imp__sub_83225B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225B78"))) PPC_WEAK_FUNC(sub_83225B78);
PPC_FUNC_IMPL(__imp__sub_83225B78) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225B8C"))) PPC_WEAK_FUNC(sub_83225B8C);
PPC_FUNC_IMPL(__imp__sub_83225B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225B90"))) PPC_WEAK_FUNC(sub_83225B90);
PPC_FUNC_IMPL(__imp__sub_83225B90) {
	PPC_FUNC_PROLOGUE();
	// ori r11,r4,1
	ctx.r11.u64 = ctx.r4.u64 | 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225B9C"))) PPC_WEAK_FUNC(sub_83225B9C);
PPC_FUNC_IMPL(__imp__sub_83225B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225BA0"))) PPC_WEAK_FUNC(sub_83225BA0);
PPC_FUNC_IMPL(__imp__sub_83225BA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,7
	ctx.r3.s64 = 7;
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// rlwinm r3,r11,30,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225BB8"))) PPC_WEAK_FUNC(sub_83225BB8);
PPC_FUNC_IMPL(__imp__sub_83225BB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83225bcc
	if (ctx.cr0.eq) goto loc_83225BCC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83225BCC:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225BD8"))) PPC_WEAK_FUNC(sub_83225BD8);
PPC_FUNC_IMPL(__imp__sub_83225BD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,192
	ctx.r10.s64 = 192;
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwimi r10,r4,2,26,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0x3C) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC3);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225BF8"))) PPC_WEAK_FUNC(sub_83225BF8);
PPC_FUNC_IMPL(__imp__sub_83225BF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// rlwinm r3,r11,24,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225C10"))) PPC_WEAK_FUNC(sub_83225C10);
PPC_FUNC_IMPL(__imp__sub_83225C10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225C14"))) PPC_WEAK_FUNC(sub_83225C14);
PPC_FUNC_IMPL(__imp__sub_83225C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225C18"))) PPC_WEAK_FUNC(sub_83225C18);
PPC_FUNC_IMPL(__imp__sub_83225C18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83225c2c
	goto loc_83225C2C;
loc_83225C24:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_83225C2C:
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x83225c24
	if (!ctx.cr6.eq) goto loc_83225C24;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225C50"))) PPC_WEAK_FUNC(sub_83225C50);
PPC_FUNC_IMPL(__imp__sub_83225C50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225C54"))) PPC_WEAK_FUNC(sub_83225C54);
PPC_FUNC_IMPL(__imp__sub_83225C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225C58"))) PPC_WEAK_FUNC(sub_83225C58);
PPC_FUNC_IMPL(__imp__sub_83225C58) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225C64"))) PPC_WEAK_FUNC(sub_83225C64);
PPC_FUNC_IMPL(__imp__sub_83225C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225C68"))) PPC_WEAK_FUNC(sub_83225C68);
PPC_FUNC_IMPL(__imp__sub_83225C68) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225C70"))) PPC_WEAK_FUNC(sub_83225C70);
PPC_FUNC_IMPL(__imp__sub_83225C70) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225C78"))) PPC_WEAK_FUNC(sub_83225C78);
PPC_FUNC_IMPL(__imp__sub_83225C78) {
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
	ctx.lr = 0x83225CA4;
	sub_8321CE60(ctx, base);
	// addi r11,r31,-12
	ctx.r11.s64 = ctx.r31.s64 + -12;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83225cc0
	if (!ctx.cr0.eq) goto loc_83225CC0;
	// rlwinm r3,r11,30,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
loc_83225CC0:
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

__attribute__((alias("__imp__sub_83225CD4"))) PPC_WEAK_FUNC(sub_83225CD4);
PPC_FUNC_IMPL(__imp__sub_83225CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225CD8"))) PPC_WEAK_FUNC(sub_83225CD8);
PPC_FUNC_IMPL(__imp__sub_83225CD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225CDC"))) PPC_WEAK_FUNC(sub_83225CDC);
PPC_FUNC_IMPL(__imp__sub_83225CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225CE0"))) PPC_WEAK_FUNC(sub_83225CE0);
PPC_FUNC_IMPL(__imp__sub_83225CE0) {
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
	// lwz r9,928(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 928);
	// addi r11,r3,788
	ctx.r11.s64 = ctx.r3.s64 + 788;
	// lwz r10,932(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 932);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x83225d1c
	if (ctx.cr6.lt) goto loc_83225D1C;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r9,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
	// b 0x83225d5c
	goto loc_83225D5C;
loc_83225D1C:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83225d54
	if (ctx.cr6.eq) goto loc_83225D54;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x83225D4C;
	sub_82CB16F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83225d5c
	goto loc_83225D5C;
loc_83225D54:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8321d298
	ctx.lr = 0x83225D5C;
	sub_8321D298(ctx, base);
loc_83225D5C:
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

__attribute__((alias("__imp__sub_83225D70"))) PPC_WEAK_FUNC(sub_83225D70);
PPC_FUNC_IMPL(__imp__sub_83225D70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83225D74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83225db4
	if (ctx.cr6.eq) goto loc_83225DB4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r9,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83225d94
	if (ctx.cr0.eq) goto loc_83225D94;
	// rlwinm. r10,r9,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x83225d98
	if (ctx.cr0.eq) goto loc_83225D98;
loc_83225D94:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83225D98:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83225dac
	if (ctx.cr0.eq) goto loc_83225DAC;
	// rlwinm r10,r9,0,7,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFE000;
	// cmplwi cr6,r10,57344
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 57344, ctx.xer);
	// beq cr6,0x83225dc8
	if (ctx.cr6.eq) goto loc_83225DC8;
loc_83225DAC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x83225d74
	goto loc_83225D74;
loc_83225DB4:
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
loc_83225DC8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225DD0"))) PPC_WEAK_FUNC(sub_83225DD0);
PPC_FUNC_IMPL(__imp__sub_83225DD0) {
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
	// bl 0x83225d70
	ctx.lr = 0x83225DE0;
	sub_83225D70(ctx, base);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225DF4"))) PPC_WEAK_FUNC(sub_83225DF4);
PPC_FUNC_IMPL(__imp__sub_83225DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225DF8"))) PPC_WEAK_FUNC(sub_83225DF8);
PPC_FUNC_IMPL(__imp__sub_83225DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83225E00;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r11,r11,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83225e2c
	if (ctx.cr0.eq) goto loc_83225E2C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83225d70
	ctx.lr = 0x83225E28;
	sub_83225D70(ctx, base);
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_83225E2C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r28,1
	ctx.r28.s64 = 1;
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83225ed8
	if (!ctx.cr0.eq) goto loc_83225ED8;
	// rlwinm r10,r11,30,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x83225e58
	if (ctx.cr6.eq) goto loc_83225E58;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x83225e58
	if (ctx.cr6.eq) goto loc_83225E58;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x83225ed8
	if (!ctx.cr6.eq) goto loc_83225ED8;
loc_83225E58:
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm. r31,r10,25,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83225e6c
	if (!ctx.cr0.eq) goto loc_83225E6C;
	// rlwinm. r11,r11,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83225ed8
	if (ctx.cr0.eq) goto loc_83225ED8;
loc_83225E6C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83225eb4
	if (ctx.cr6.eq) goto loc_83225EB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321c7e8
	ctx.lr = 0x83225E7C;
	sub_8321C7E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83225eac
	if (ctx.cr0.eq) goto loc_83225EAC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x83225ea0
	if (ctx.cr6.lt) goto loc_83225EA0;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83225ea4
	if (!ctx.cr6.gt) goto loc_83225EA4;
loc_83225EA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83225EA4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83225eb4
	if (ctx.cr0.eq) goto loc_83225EB4;
loc_83225EAC:
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x83225ed8
	goto loc_83225ED8;
loc_83225EB4:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83225ec8
	if (ctx.cr0.eq) goto loc_83225EC8;
	// li r4,3607
	ctx.r4.s64 = 3607;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83204b08
	ctx.lr = 0x83225EC8;
	sub_83204B08(ctx, base);
loc_83225EC8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwimi r11,r10,6,23,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x1FF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE00);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_83225ED8:
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83225EE8"))) PPC_WEAK_FUNC(sub_83225EE8);
PPC_FUNC_IMPL(__imp__sub_83225EE8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r4,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225F24"))) PPC_WEAK_FUNC(sub_83225F24);
PPC_FUNC_IMPL(__imp__sub_83225F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225F28"))) PPC_WEAK_FUNC(sub_83225F28);
PPC_FUNC_IMPL(__imp__sub_83225F28) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r4,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225F64"))) PPC_WEAK_FUNC(sub_83225F64);
PPC_FUNC_IMPL(__imp__sub_83225F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225F68"))) PPC_WEAK_FUNC(sub_83225F68);
PPC_FUNC_IMPL(__imp__sub_83225F68) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r4,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225F98"))) PPC_WEAK_FUNC(sub_83225F98);
PPC_FUNC_IMPL(__imp__sub_83225F98) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225FA4"))) PPC_WEAK_FUNC(sub_83225FA4);
PPC_FUNC_IMPL(__imp__sub_83225FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225FA8"))) PPC_WEAK_FUNC(sub_83225FA8);
PPC_FUNC_IMPL(__imp__sub_83225FA8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-36
	ctx.r11.s64 = ctx.r3.s64 + -36;
	// ori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225FB4"))) PPC_WEAK_FUNC(sub_83225FB4);
PPC_FUNC_IMPL(__imp__sub_83225FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225FB8"))) PPC_WEAK_FUNC(sub_83225FB8);
PPC_FUNC_IMPL(__imp__sub_83225FB8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r5,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83225FF4"))) PPC_WEAK_FUNC(sub_83225FF4);
PPC_FUNC_IMPL(__imp__sub_83225FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83225FF8"))) PPC_WEAK_FUNC(sub_83225FF8);
PPC_FUNC_IMPL(__imp__sub_83225FF8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r5,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83226034"))) PPC_WEAK_FUNC(sub_83226034);
PPC_FUNC_IMPL(__imp__sub_83226034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83226038"))) PPC_WEAK_FUNC(sub_83226038);
PPC_FUNC_IMPL(__imp__sub_83226038) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x83226088
	if (ctx.cr6.lt) goto loc_83226088;
	// beq cr6,0x8322604c
	if (ctx.cr6.eq) goto loc_8322604C;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x83204d78
	sub_83204D78(ctx, base);
	return;
loc_8322604C:
	// rlwinm r11,r6,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r4,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// blr 
	return;
loc_83226088:
	// rlwinm r11,r6,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r4,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832260C4"))) PPC_WEAK_FUNC(sub_832260C4);
PPC_FUNC_IMPL(__imp__sub_832260C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832260C8"))) PPC_WEAK_FUNC(sub_832260C8);
PPC_FUNC_IMPL(__imp__sub_832260C8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addi r10,r3,-36
	ctx.r10.s64 = ctx.r3.s64 + -36;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832260E4"))) PPC_WEAK_FUNC(sub_832260E4);
PPC_FUNC_IMPL(__imp__sub_832260E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832260E8"))) PPC_WEAK_FUNC(sub_832260E8);
PPC_FUNC_IMPL(__imp__sub_832260E8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83226120"))) PPC_WEAK_FUNC(sub_83226120);
PPC_FUNC_IMPL(__imp__sub_83226120) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// addi r9,r9,-36
	ctx.r9.s64 = ctx.r9.s64 + -36;
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwimi r10,r11,0,4,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFF0000000);
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83226188"))) PPC_WEAK_FUNC(sub_83226188);
PPC_FUNC_IMPL(__imp__sub_83226188) {
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
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,116
	ctx.r4.s64 = 116;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83225ce0
	ctx.lr = 0x832261A8;
	sub_83225CE0(ctx, base);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r6,r11,-36
	ctx.r6.s64 = ctx.r11.s64 + -36;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// addi r5,r10,-36
	ctx.r5.s64 = ctx.r10.s64 + -36;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addi r9,r9,-36
	ctx.r9.s64 = ctx.r9.s64 + -36;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// ori r6,r5,1
	ctx.r6.u64 = ctx.r5.u64 | 1;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwimi r11,r7,0,4,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF0000000);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwimi r9,r11,0,13,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFF80000);
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r11,r10,0,0,12
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFF80000) | (ctx.r11.u64 & 0xFFFFFFFF0007FFFF);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83226248
	if (ctx.cr0.eq) goto loc_83226248;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
loc_83226248:
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

__attribute__((alias("__imp__sub_8322625C"))) PPC_WEAK_FUNC(sub_8322625C);
PPC_FUNC_IMPL(__imp__sub_8322625C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83226260"))) PPC_WEAK_FUNC(sub_83226260);
PPC_FUNC_IMPL(__imp__sub_83226260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83226268;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x832f02e0
	ctx.lr = 0x83226284;
	sub_832F02E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83226038
	ctx.lr = 0x8322629C;
	sub_83226038(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832262A8"))) PPC_WEAK_FUNC(sub_832262A8);
PPC_FUNC_IMPL(__imp__sub_832262A8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r5,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,28(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// addi r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 + 24;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,28(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832262E4"))) PPC_WEAK_FUNC(sub_832262E4);
PPC_FUNC_IMPL(__imp__sub_832262E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832262E8"))) PPC_WEAK_FUNC(sub_832262E8);
PPC_FUNC_IMPL(__imp__sub_832262E8) {
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
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// addi r31,r4,24
	ctx.r31.s64 = ctx.r4.s64 + 24;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83226320
	if (!ctx.cr0.eq) goto loc_83226320;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x83226320
	if (ctx.cr0.eq) goto loc_83226320;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16128, ctx.xer);
	// beq cr6,0x8322636c
	if (ctx.cr6.eq) goto loc_8322636C;
loc_83226320:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,126
	ctx.r6.s64 = 126;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x832f02e0
	ctx.lr = 0x83226334;
	sub_832F02E0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r7,r11,1
	ctx.r7.u64 = ctx.r11.u64 | 1;
	// addi r11,r9,36
	ctx.r11.s64 = ctx.r9.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r6,r11,-36
	ctx.r6.s64 = ctx.r11.s64 + -36;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r9.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_8322636C:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83226390"))) PPC_WEAK_FUNC(sub_83226390);
PPC_FUNC_IMPL(__imp__sub_83226390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83226398;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832263bc
	if (ctx.cr0.eq) goto loc_832263BC;
loc_832263B4:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83226458
	goto loc_83226458;
loc_832263BC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x83226458
	if (ctx.cr0.eq) goto loc_83226458;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x832263e4
	if (ctx.cr6.lt) goto loc_832263E4;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x832263e8
	if (!ctx.cr6.gt) goto loc_832263E8;
loc_832263E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832263E8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83226440
	if (ctx.cr0.eq) goto loc_83226440;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8322640c
	if (ctx.cr6.lt) goto loc_8322640C;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83226410
	if (!ctx.cr6.gt) goto loc_83226410;
loc_8322640C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83226410:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83226440
	if (ctx.cr0.eq) goto loc_83226440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321db70
	ctx.lr = 0x83226420;
	sub_8321DB70(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x83226440
	if (!ctx.cr6.eq) goto loc_83226440;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832263b4
	if (!ctx.cr0.eq) goto loc_832263B4;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r11,-40
	ctx.r31.s64 = ctx.r11.s64 + -40;
loc_83226440:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83226458
	if (ctx.cr6.eq) goto loc_83226458;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16128, ctx.xer);
	// beq cr6,0x832264ec
	if (ctx.cr6.eq) goto loc_832264EC;
loc_83226458:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,126
	ctx.r6.s64 = 126;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832f02e0
	ctx.lr = 0x83226474;
	sub_832F02E0(ctx, base);
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// beq cr6,0x832264b8
	if (ctx.cr6.eq) goto loc_832264B8;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// b 0x832264e8
	goto loc_832264E8;
loc_832264B8:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
loc_832264E8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832264EC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83226504"))) PPC_WEAK_FUNC(sub_83226504);
PPC_FUNC_IMPL(__imp__sub_83226504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83226508"))) PPC_WEAK_FUNC(sub_83226508);
PPC_FUNC_IMPL(__imp__sub_83226508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x83226510;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832266a4
	if (ctx.cr0.eq) goto loc_832266A4;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832266a4
	if (!ctx.cr0.eq) goto loc_832266A4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832266a4
	if (ctx.cr0.eq) goto loc_832266A4;
loc_83226548:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83226688
	if (!ctx.cr0.eq) goto loc_83226688;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x83226688
	if (ctx.cr0.eq) goto loc_83226688;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r4,86
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 86, ctx.xer);
	// beq cr6,0x832265a0
	if (ctx.cr6.eq) goto loc_832265A0;
	// cmplwi cr6,r4,87
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 87, ctx.xer);
	// beq cr6,0x832265a0
	if (ctx.cr6.eq) goto loc_832265A0;
	// cmplwi cr6,r4,89
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 89, ctx.xer);
	// beq cr6,0x832265a0
	if (ctx.cr6.eq) goto loc_832265A0;
	// cmplwi cr6,r4,90
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 90, ctx.xer);
	// beq cr6,0x832265a0
	if (ctx.cr6.eq) goto loc_832265A0;
	// cmplwi cr6,r4,84
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 84, ctx.xer);
	// beq cr6,0x832265a0
	if (ctx.cr6.eq) goto loc_832265A0;
	// cmplwi cr6,r4,85
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 85, ctx.xer);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// bne cr6,0x832265a4
	if (!ctx.cr6.eq) goto loc_832265A4;
loc_832265A0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_832265A4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83226688
	if (ctx.cr0.eq) goto loc_83226688;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8321ce60
	ctx.lr = 0x832265BC;
	sub_8321CE60(ctx, base);
	// addi r11,r31,-12
	ctx.r11.s64 = ctx.r31.s64 + -12;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83226688
	if (!ctx.cr0.eq) goto loc_83226688;
	// rlwinm r8,r10,30,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xF;
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// beq cr6,0x832265e4
	if (ctx.cr6.eq) goto loc_832265E4;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x83226688
	if (!ctx.cr6.eq) goto loc_83226688;
loc_832265E4:
	// lwz r10,44(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// oris r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 65536;
	// stw r10,44(r25)
	PPC_STORE_U32(ctx.r25.u32 + 44, ctx.r10.u32);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83226868
	if (!ctx.cr0.eq) goto loc_83226868;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
loc_83226600:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83226620
	if (ctx.cr6.eq) goto loc_83226620;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83226624
	if (!ctx.cr6.eq) goto loc_83226624;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x83226600
	goto loc_83226600;
loc_83226620:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_83226624:
	// addi r9,r8,-8
	ctx.r9.s64 = ctx.r8.s64 + -8;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,31,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8322666c
	if (ctx.cr6.eq) goto loc_8322666C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// not r7,r9
	ctx.r7.u64 = ~ctx.r9.u64;
	// rlwimi r7,r9,0,14,12
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFFFFBFFFF) | (ctx.r7.u64 & 0x40000);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// not r6,r7
	ctx.r6.u64 = ~ctx.r7.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r6,r7,0,31,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFFFFFFFFFFFFD) | (ctx.r6.u64 & 0x2);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
loc_8322666C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8322687c
	if (!ctx.cr6.eq) goto loc_8322687C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8322687c
	if (ctx.cr6.eq) goto loc_8322687C;
loc_83226688:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832266a4
	if (!ctx.cr0.eq) goto loc_832266A4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83226548
	if (!ctx.cr6.eq) goto loc_83226548;
loc_832266A4:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83226f80
	if (!ctx.cr0.eq) goto loc_83226F80;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83226f80
	if (ctx.cr0.eq) goto loc_83226F80;
loc_832266C0:
	// lwz r3,28(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// addi r31,r26,24
	ctx.r31.s64 = ctx.r26.s64 + 24;
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832266e8
	if (!ctx.cr0.eq) goto loc_832266E8;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832266e8
	if (ctx.cr0.eq) goto loc_832266E8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16128, ctx.xer);
	// beq cr6,0x83226738
	if (ctx.cr6.eq) goto loc_83226738;
loc_832266E8:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,126
	ctx.r6.s64 = 126;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832f02e0
	ctx.lr = 0x83226704;
	sub_832F02E0(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 | 1;
	// addi r11,r10,36
	ctx.r11.s64 = ctx.r10.s64 + 36;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
loc_83226738:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83226748
	if (ctx.cr0.eq) goto loc_83226748;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_83226748:
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8322675c
	if (ctx.cr6.eq) goto loc_8322675C;
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83226768
	if (ctx.cr0.eq) goto loc_83226768;
loc_8322675C:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_83226768:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83226d90
	if (!ctx.cr0.eq) goto loc_83226D90;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r29,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r29.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x83226d90
	if (ctx.cr0.eq) goto loc_83226D90;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,86
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 86, ctx.xer);
	// beq cr6,0x832267c4
	if (ctx.cr6.eq) goto loc_832267C4;
	// cmplwi cr6,r10,87
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 87, ctx.xer);
	// beq cr6,0x832267c4
	if (ctx.cr6.eq) goto loc_832267C4;
	// cmplwi cr6,r10,89
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 89, ctx.xer);
	// beq cr6,0x832267c4
	if (ctx.cr6.eq) goto loc_832267C4;
	// cmplwi cr6,r10,90
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 90, ctx.xer);
	// beq cr6,0x832267c4
	if (ctx.cr6.eq) goto loc_832267C4;
	// cmplwi cr6,r10,84
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 84, ctx.xer);
	// beq cr6,0x832267c4
	if (ctx.cr6.eq) goto loc_832267C4;
	// cmplwi cr6,r10,85
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 85, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne cr6,0x832267c8
	if (!ctx.cr6.eq) goto loc_832267C8;
loc_832267C4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832267C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83226c04
	if (ctx.cr0.eq) goto loc_83226C04;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x832267E8;
	sub_8321CE60(ctx, base);
	// addi r11,r29,-12
	ctx.r11.s64 = ctx.r29.s64 + -12;
	// add r30,r3,r11
	ctx.r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83226d90
	if (!ctx.cr0.eq) goto loc_83226D90;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83225c78
	ctx.lr = 0x83226808;
	sub_83225C78(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8322681c
	if (!ctx.cr6.eq) goto loc_8322681C;
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,76(r26)
	PPC_STORE_U32(ctx.r26.u32 + 76, ctx.r11.u32);
loc_8322681C:
	// lwz r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83226888
	if (!ctx.cr0.eq) goto loc_83226888;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x832262e8
	ctx.lr = 0x83226838;
	sub_832262E8(ctx, base);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10752, ctx.xer);
	// bne cr6,0x83226d90
	if (!ctx.cr6.eq) goto loc_83226D90;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83226d88
	if (ctx.cr0.eq) goto loc_83226D88;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x83226d88
	goto loc_83226D88;
loc_83226868:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,-1076
	ctx.r5.s64 = ctx.r11.s64 + -1076;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83204d78
	ctx.lr = 0x8322687C;
	sub_83204D78(ctx, base);
loc_8322687C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83204d78
	ctx.lr = 0x83226888;
	sub_83204D78(ctx, base);
loc_83226888:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83225df8
	ctx.lr = 0x83226898;
	sub_83225DF8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83226910
	if (ctx.cr0.eq) goto loc_83226910;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x832268B4;
	sub_832F6CC8(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83226d90
	if (ctx.cr6.eq) goto loc_83226D90;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15360
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15360, ctx.xer);
	// bne cr6,0x832268d8
	if (!ctx.cr6.eq) goto loc_832268D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x83226d4c
	goto loc_83226D4C;
loc_832268D8:
	// rlwinm. r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83226d90
	if (!ctx.cr0.eq) goto loc_83226D90;
	// lwz r5,96(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x832268fc
	if (ctx.cr6.eq) goto loc_832268FC;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832339d8
	ctx.lr = 0x832268FC;
	sub_832339D8(ctx, base);
loc_832268FC:
	// stw r31,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r31.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x83226d90
	goto loc_83226D90;
loc_83226910:
	// lwz r11,44(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,44(r25)
	PPC_STORE_U32(ctx.r25.u32 + 44, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x8322693c
	if (ctx.cr6.lt) goto loc_8322693C;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83226940
	if (!ctx.cr6.gt) goto loc_83226940;
loc_8322693C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_83226940:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne 0x83226af4
	if (!ctx.cr0.eq) goto loc_83226AF4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x832262e8
	ctx.lr = 0x83226954;
	sub_832262E8(ctx, base);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83226d90
	if (ctx.cr0.eq) goto loc_83226D90;
	// lwz r11,112(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832269a4
	if (ctx.cr0.eq) goto loc_832269A4;
	// b 0x83226988
	goto loc_83226988;
loc_8322697C:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83226994
	if (ctx.cr0.eq) goto loc_83226994;
loc_83226988:
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322697c
	if (!ctx.cr6.eq) goto loc_8322697C;
loc_83226994:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83226988
	if (!ctx.cr0.eq) goto loc_83226988;
	// stw r11,112(r27)
	PPC_STORE_U32(ctx.r27.u32 + 112, ctx.r11.u32);
loc_832269A4:
	// lwz r11,112(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x83226d90
	if (!ctx.cr6.eq) goto loc_83226D90;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r30,1
	ctx.r30.s64 = 1;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83226a44
	if (!ctx.cr0.eq) goto loc_83226A44;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83226a40
	if (ctx.cr0.eq) goto loc_83226A40;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x832269DC;
	sub_832F6CC8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15360
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15360, ctx.xer);
	// bne cr6,0x83226a08
	if (!ctx.cr6.eq) goto loc_83226A08;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x83226A00;
	sub_832F6CC8(ctx, base);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// b 0x83226a44
	goto loc_83226A44;
loc_83226A08:
	// rlwinm. r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83226a44
	if (!ctx.cr0.eq) goto loc_83226A44;
	// lwz r5,96(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83226a2c
	if (ctx.cr6.eq) goto loc_83226A2C;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832339d8
	ctx.lr = 0x83226A2C;
	sub_832339D8(ctx, base);
loc_83226A2C:
	// stw r31,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r31.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x83226a44
	goto loc_83226A44;
loc_83226A40:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_83226A44:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83226d90
	if (ctx.cr0.eq) goto loc_83226D90;
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83226a64
	if (ctx.cr0.eq) goto loc_83226A64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// b 0x83226a6c
	goto loc_83226A6C;
loc_83226A64:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_83226A6C:
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x83226d90
	if (ctx.cr6.eq) goto loc_83226D90;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,90
	ctx.r6.s64 = 90;
	// addi r5,r30,24
	ctx.r5.s64 = ctx.r30.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832f02e0
	ctx.lr = 0x83226A90;
	sub_832F02E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm r10,r10,9,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// rlwimi r11,r10,18,13,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0x40000) | (ctx.r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x83226AC4;
	sub_8321CE60(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r31,-12
	ctx.r10.s64 = ctx.r31.s64 + -12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r31,r3,r10
	ctx.r31.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// beq cr6,0x83226ae0
	if (ctx.cr6.eq) goto loc_83226AE0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83226AE0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832262e8
	ctx.lr = 0x83226AE8;
	sub_832262E8(ctx, base);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83226d90
	goto loc_83226D90;
loc_83226AF4:
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83232928
	ctx.lr = 0x83226B0C;
	sub_83232928(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83226b38
	if (!ctx.cr6.eq) goto loc_83226B38;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83226b38
	if (!ctx.cr6.eq) goto loc_83226B38;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832262e8
	ctx.lr = 0x83226B30;
	sub_832262E8(ctx, base);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// b 0x83226bfc
	goto loc_83226BFC;
loc_83226B38:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83226b54
	if (ctx.cr6.eq) goto loc_83226B54;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83226390
	ctx.lr = 0x83226B4C;
	sub_83226390(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83226B54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83226bf8
	if (ctx.cr6.eq) goto loc_83226BF8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83226390
	ctx.lr = 0x83226B68;
	sub_83226390(ctx, base);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,90
	ctx.r6.s64 = 90;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// bl 0x832f02e0
	ctx.lr = 0x83226B90;
	sub_832F02E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83226bc4
	if (!ctx.cr6.eq) goto loc_83226BC4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83226bb8
	if (ctx.cr6.eq) goto loc_83226BB8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83226BB8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832262e8
	ctx.lr = 0x83226BC0;
	sub_832262E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83226BC4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwimi r11,r10,17,13,14
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0x60000) | (ctx.r11.u64 & 0xFFFFFFFFFFF9FFFF);
	// ori r31,r31,1
	ctx.r31.u64 = ctx.r31.u64 | 1;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x83226BEC;
	sub_8321CE60(ctx, base);
	// addi r11,r30,-12
	ctx.r11.s64 = ctx.r30.s64 + -12;
	// stwx r31,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r31.u32);
	// b 0x83226d90
	goto loc_83226D90;
loc_83226BF8:
	// ori r11,r31,1
	ctx.r11.u64 = ctx.r31.u64 | 1;
loc_83226BFC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x83226d90
	goto loc_83226D90;
loc_83226C04:
	// cmplwi cr6,r10,83
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 83, ctx.xer);
	// bne cr6,0x83226d90
	if (!ctx.cr6.eq) goto loc_83226D90;
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83226d60
	if (ctx.cr0.eq) goto loc_83226D60;
	// lwz r11,112(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83226c54
	if (ctx.cr0.eq) goto loc_83226C54;
	// b 0x83226c38
	goto loc_83226C38;
loc_83226C2C:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83226c44
	if (ctx.cr0.eq) goto loc_83226C44;
loc_83226C38:
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83226c2c
	if (!ctx.cr6.eq) goto loc_83226C2C;
loc_83226C44:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83226c38
	if (!ctx.cr0.eq) goto loc_83226C38;
	// stw r11,112(r26)
	PPC_STORE_U32(ctx.r26.u32 + 112, ctx.r11.u32);
loc_83226C54:
	// lwz r11,112(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83226c74
	if (ctx.cr6.eq) goto loc_83226C74;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x83226c78
	if (!ctx.cr6.eq) goto loc_83226C78;
loc_83226C74:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_83226C78:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83226d60
	if (ctx.cr0.eq) goto loc_83226D60;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83226d48
	if (ctx.cr6.eq) goto loc_83226D48;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832f02e0
	ctx.lr = 0x83226CA8;
	sub_832F02E0(ctx, base);
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// addi r5,r10,-36
	ctx.r5.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// oris r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 50331648;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_83226CF0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83226d48
	if (ctx.cr6.eq) goto loc_83226D48;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x83226d10
	goto loc_83226D10;
loc_83226D08:
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_83226D10:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83226d08
	if (!ctx.cr6.eq) goto loc_83226D08;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83226cf0
	if (!ctx.cr6.eq) goto loc_83226CF0;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// b 0x83226cf0
	goto loc_83226CF0;
loc_83226D48:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83226D4C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x83226D5C;
	sub_832F6CC8(ctx, base);
	// b 0x83226d90
	goto loc_83226D90;
loc_83226D60:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83226d90
	if (!ctx.cr0.eq) goto loc_83226D90;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83226d90
	if (ctx.cr6.eq) goto loc_83226D90;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83226d84
	if (ctx.cr0.eq) goto loc_83226D84;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_83226D84:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_83226D88:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832262e8
	ctx.lr = 0x83226D90;
	sub_832262E8(ctx, base);
loc_83226D90:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r29,r26,12
	ctx.r29.s64 = ctx.r26.s64 + 12;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_83226D9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83226dbc
	if (ctx.cr6.eq) goto loc_83226DBC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x83226db4
	if (ctx.cr6.eq) goto loc_83226DB4;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_83226DB4:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83226d9c
	goto loc_83226D9C;
loc_83226DBC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83226ef0
	if (ctx.cr6.eq) goto loc_83226EF0;
	// rlwinm r30,r26,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne 0x83226ddc
	if (!ctx.cr0.eq) goto loc_83226DDC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83226DDC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83226ef0
	if (ctx.cr6.eq) goto loc_83226EF0;
	// lwz r9,48(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// rlwinm. r11,r9,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83226e0c
	if (ctx.cr0.eq) goto loc_83226E0C;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne 0x83226e00
	if (!ctx.cr0.eq) goto loc_83226E00;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83226E00:
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83226ef0
	if (!ctx.cr0.eq) goto loc_83226EF0;
loc_83226E0C:
	// rlwinm. r11,r9,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// beq 0x83226e9c
	if (ctx.cr0.eq) goto loc_83226E9C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83226188
	ctx.lr = 0x83226E20;
	sub_83226188(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_83226E4C:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83226e88
	if (ctx.cr6.eq) goto loc_83226E88;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x83226e74
	if (!ctx.cr6.eq) goto loc_83226E74;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832fb250
	ctx.lr = 0x83226E74;
	sub_832FB250(ctx, base);
loc_83226E74:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83226e4c
	if (!ctx.cr6.eq) goto loc_83226E4C;
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// b 0x83226e4c
	goto loc_83226E4C;
loc_83226E88:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832fb408
	ctx.lr = 0x83226E98;
	sub_832FB408(ctx, base);
	// li r21,1
	ctx.r21.s64 = 1;
loc_83226E9C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,89
	ctx.r6.s64 = 89;
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832f02e0
	ctx.lr = 0x83226EB8;
	sub_832F02E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x83226ED4;
	sub_8321CE60(ctx, base);
	// addi r11,r31,-12
	ctx.r11.s64 = ctx.r31.s64 + -12;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r31,r3,r11
	ctx.r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832262e8
	ctx.lr = 0x83226EE8;
	sub_832262E8(ctx, base);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83226EF0:
	// lbz r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 48);
	// clrlwi r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// or r23,r11,r10
	ctx.r23.u64 = ctx.r11.u64 | ctx.r10.u64;
	// beq cr6,0x83226f34
	if (ctx.cr6.eq) goto loc_83226F34;
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne 0x83226f20
	if (!ctx.cr0.eq) goto loc_83226F20;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83226F20:
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83226f50
	if (ctx.cr6.eq) goto loc_83226F50;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83226f80
	if (!ctx.cr0.eq) goto loc_83226F80;
	// b 0x83226f74
	goto loc_83226F74;
loc_83226F34:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83226f48
	if (!ctx.cr0.eq) goto loc_83226F48;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83226F48:
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83226f6c
	if (!ctx.cr6.eq) goto loc_83226F6C;
loc_83226F50:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83226f80
	if (!ctx.cr0.eq) goto loc_83226F80;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// b 0x83226f78
	goto loc_83226F78;
loc_83226F6C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83226f80
	if (!ctx.cr6.eq) goto loc_83226F80;
loc_83226F74:
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_83226F78:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832266c0
	if (!ctx.cr6.eq) goto loc_832266C0;
loc_83226F80:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83227064
	if (ctx.cr0.eq) goto loc_83227064;
	// lwz r30,4(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83227064
	if (!ctx.cr0.eq) goto loc_83227064;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x83227064
	if (ctx.cr0.eq) goto loc_83227064;
loc_83226F9C:
	// lbz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322704c
	if (ctx.cr0.eq) goto loc_8322704C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832262e8
	ctx.lr = 0x83226FB4;
	sub_832262E8(ctx, base);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83227064
	if (!ctx.cr0.eq) goto loc_83227064;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83227064
	if (ctx.cr6.eq) goto loc_83227064;
loc_83226FCC:
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83227018
	if (ctx.cr0.eq) goto loc_83227018;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225ad0
	ctx.lr = 0x83226FE4;
	sub_83225AD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83227018
	if (ctx.cr0.eq) goto loc_83227018;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83227014
	if (!ctx.cr0.eq) goto loc_83227014;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83227064
	if (!ctx.cr0.eq) goto loc_83227064;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83226fcc
	if (!ctx.cr6.eq) goto loc_83226FCC;
	// b 0x83227018
	goto loc_83227018;
loc_83227014:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_83227018:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83227064
	if (ctx.cr6.eq) goto loc_83227064;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832262e8
	ctx.lr = 0x8322702C;
	sub_832262E8(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83227044
	if (ctx.cr0.eq) goto loc_83227044;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// b 0x8322704c
	goto loc_8322704C;
loc_83227044:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_8322704C:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83227064
	if (!ctx.cr0.eq) goto loc_83227064;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83226f9c
	if (!ctx.cr6.eq) goto loc_83226F9C;
loc_83227064:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832271ec
	if (!ctx.cr0.eq) goto loc_832271EC;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832271ec
	if (ctx.cr0.eq) goto loc_832271EC;
loc_8322707C:
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832271d0
	if (!ctx.cr0.eq) goto loc_832271D0;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r28,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r28.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x832271d0
	if (ctx.cr0.eq) goto loc_832271D0;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x832270b0
	if (ctx.cr6.eq) goto loc_832270B0;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// bne cr6,0x832271d0
	if (!ctx.cr6.eq) goto loc_832271D0;
loc_832270B0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x832270C8;
	sub_8321CE60(ctx, base);
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r28,-12
	ctx.r10.s64 = ctx.r28.s64 + -12;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r27,r10,0,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// bne 0x832271d0
	if (!ctx.cr0.eq) goto loc_832271D0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832271d0
	if (ctx.cr6.eq) goto loc_832271D0;
loc_832270F0:
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832271b8
	if (!ctx.cr0.eq) goto loc_832271B8;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83227114
	if (ctx.cr0.eq) goto loc_83227114;
	// lwz r31,28(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r11,r29,24
	ctx.r11.s64 = ctx.r29.s64 + 24;
	// b 0x8322711c
	goto loc_8322711C;
loc_83227114:
	// lwz r31,20(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
loc_8322711C:
	// clrlwi. r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83227128
	if (ctx.cr0.eq) goto loc_83227128;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_83227128:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83227198
	if (ctx.cr6.eq) goto loc_83227198;
loc_83227134:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8322718c
	if (ctx.cr6.eq) goto loc_8322718C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225908
	ctx.lr = 0x83227144;
	sub_83225908(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83227190
	if (!ctx.cr0.eq) goto loc_83227190;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83227164
	if (!ctx.cr0.eq) goto loc_83227164;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83227134
	if (!ctx.cr6.eq) goto loc_83227134;
loc_83227164:
	// addi r11,r29,24
	ctx.r11.s64 = ctx.r29.s64 + 24;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83227198
	if (ctx.cr6.eq) goto loc_83227198;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83227198
	if (!ctx.cr0.eq) goto loc_83227198;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x83227134
	if (!ctx.cr0.eq) goto loc_83227134;
	// b 0x83227198
	goto loc_83227198;
loc_8322718C:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_83227190:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832271b8
	if (!ctx.cr6.eq) goto loc_832271B8;
loc_83227198:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832271c0
	if (!ctx.cr0.eq) goto loc_832271C0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832270f0
	if (!ctx.cr6.eq) goto loc_832270F0;
	// b 0x832271c0
	goto loc_832271C0;
loc_832271B8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832271d0
	if (!ctx.cr6.eq) goto loc_832271D0;
loc_832271C0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832f6f50
	ctx.lr = 0x832271CC;
	sub_832F6F50(ctx, base);
	// b 0x8322707c
	goto loc_8322707C;
loc_832271D0:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832271ec
	if (!ctx.cr0.eq) goto loc_832271EC;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322707c
	if (!ctx.cr6.eq) goto loc_8322707C;
loc_832271EC:
	// lwz r11,44(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// clrlwi. r10,r21,24
	ctx.r10.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// stw r11,44(r25)
	PPC_STORE_U32(ctx.r25.u32 + 44, ctx.r11.u32);
	// beq 0x83227208
	if (ctx.cr0.eq) goto loc_83227208;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832a8260
	ctx.lr = 0x83227208;
	sub_832A8260(ctx, base);
loc_83227208:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83227210"))) PPC_WEAK_FUNC(sub_83227210);
PPC_FUNC_IMPL(__imp__sub_83227210) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// andc r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 & ~ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322721C"))) PPC_WEAK_FUNC(sub_8322721C);
PPC_FUNC_IMPL(__imp__sub_8322721C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83227220"))) PPC_WEAK_FUNC(sub_83227220);
PPC_FUNC_IMPL(__imp__sub_83227220) {
	PPC_FUNC_PROLOGUE();
	// cntlzd r11,r3
	ctx.r11.u64 = ctx.r3.u64 == 0 ? 64 : __builtin_clzll(ctx.r3.u64);
	// subfic r3,r11,63
	ctx.xer.ca = ctx.r11.u32 <= 63;
	ctx.r3.s64 = 63 - ctx.r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322722C"))) PPC_WEAK_FUNC(sub_8322722C);
PPC_FUNC_IMPL(__imp__sub_8322722C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83227230"))) PPC_WEAK_FUNC(sub_83227230);
PPC_FUNC_IMPL(__imp__sub_83227230) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// andc r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ~ctx.r11.u64;
	// cntlzd r11,r11
	ctx.r11.u64 = ctx.r11.u64 == 0 ? 64 : __builtin_clzll(ctx.r11.u64);
	// subfic r3,r11,63
	ctx.xer.ca = ctx.r11.u32 <= 63;
	ctx.r3.s64 = 63 - ctx.r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83227244"))) PPC_WEAK_FUNC(sub_83227244);
PPC_FUNC_IMPL(__imp__sub_83227244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83227248"))) PPC_WEAK_FUNC(sub_83227248);
PPC_FUNC_IMPL(__imp__sub_83227248) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83227250"))) PPC_WEAK_FUNC(sub_83227250);
PPC_FUNC_IMPL(__imp__sub_83227250) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83227258"))) PPC_WEAK_FUNC(sub_83227258);
PPC_FUNC_IMPL(__imp__sub_83227258) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-16000
	ctx.r11.s64 = ctx.r11.s64 + -16000;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83227270"))) PPC_WEAK_FUNC(sub_83227270);
PPC_FUNC_IMPL(__imp__sub_83227270) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-14336
	ctx.r11.s64 = ctx.r11.s64 + -14336;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83227288"))) PPC_WEAK_FUNC(sub_83227288);
PPC_FUNC_IMPL(__imp__sub_83227288) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x832272a8
	if (ctx.cr6.lt) goto loc_832272A8;
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x832272ac
	if (!ctx.cr6.gt) goto loc_832272AC;
loc_832272A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832272AC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83227318
	if (!ctx.cr0.eq) goto loc_83227318;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// bne cr6,0x832272c4
	if (!ctx.cr6.eq) goto loc_832272C4;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_832272C4:
	// blt cr6,0x832272d4
	if (ctx.cr6.lt) goto loc_832272D4;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x832272d8
	if (!ctx.cr6.gt) goto loc_832272D8;
loc_832272D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832272D8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832272e8
	if (ctx.cr0.eq) goto loc_832272E8;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_832272E8:
	// cmplwi cr6,r10,83
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 83, ctx.xer);
	// blt cr6,0x832272fc
	if (ctx.cr6.lt) goto loc_832272FC;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83227300
	if (!ctx.cr6.gt) goto loc_83227300;
loc_832272FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83227300:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83227320
	if (!ctx.cr0.eq) goto loc_83227320;
	// cmplwi cr6,r10,106
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 106, ctx.xer);
	// beq cr6,0x83227320
	if (ctx.cr6.eq) goto loc_83227320;
	// cmplwi cr6,r10,110
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 110, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_83227318:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83227320:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83227328"))) PPC_WEAK_FUNC(sub_83227328);
PPC_FUNC_IMPL(__imp__sub_83227328) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322733c
	if (ctx.cr0.eq) goto loc_8322733C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8322733C:
	// b 0x8324e3e8
	sub_8324E3E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83227340"))) PPC_WEAK_FUNC(sub_83227340);
PPC_FUNC_IMPL(__imp__sub_83227340) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// clrlwi r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322735C"))) PPC_WEAK_FUNC(sub_8322735C);
PPC_FUNC_IMPL(__imp__sub_8322735C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83227360"))) PPC_WEAK_FUNC(sub_83227360);
PPC_FUNC_IMPL(__imp__sub_83227360) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,768(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83227374"))) PPC_WEAK_FUNC(sub_83227374);
PPC_FUNC_IMPL(__imp__sub_83227374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83227378"))) PPC_WEAK_FUNC(sub_83227378);
PPC_FUNC_IMPL(__imp__sub_83227378) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm. r11,r8,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832273b0
	if (ctx.cr0.eq) goto loc_832273B0;
	// rlwinm r7,r8,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83227390:
	// srw r6,r7,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// li r5,1
	ctx.r5.s64 = 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x83227390
	if (!ctx.cr0.eq) goto loc_83227390;
loc_832273B0:
	// rlwimi r9,r8,19,20,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 19) & 0xFF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF00F);
	// clrlwi r3,r9,20
	ctx.r3.u64 = ctx.r9.u32 & 0xFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832273BC"))) PPC_WEAK_FUNC(sub_832273BC);
PPC_FUNC_IMPL(__imp__sub_832273BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832273C0"))) PPC_WEAK_FUNC(sub_832273C0);
PPC_FUNC_IMPL(__imp__sub_832273C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_832273C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832273f0
	if (ctx.cr6.eq) goto loc_832273F0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832273e0
	if (!ctx.cr0.eq) goto loc_832273E0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x832273c4
	goto loc_832273C4;
loc_832273E0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x832273f4
	if (!ctx.cr0.eq) goto loc_832273F4;
loc_832273F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832273F4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832273FC"))) PPC_WEAK_FUNC(sub_832273FC);
PPC_FUNC_IMPL(__imp__sub_832273FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83227400"))) PPC_WEAK_FUNC(sub_83227400);
PPC_FUNC_IMPL(__imp__sub_83227400) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_83227404:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83227420
	if (ctx.cr6.eq) goto loc_83227420;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83227420
	if (!ctx.cr0.eq) goto loc_83227420;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83227404
	goto loc_83227404;
loc_83227420:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r3,r11,15,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// blr 
	return;
}

