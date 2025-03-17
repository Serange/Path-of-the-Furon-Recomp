#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83257E78"))) PPC_WEAK_FUNC(sub_83257E78);
PPC_FUNC_IMPL(__imp__sub_83257E78) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83257E88"))) PPC_WEAK_FUNC(sub_83257E88);
PPC_FUNC_IMPL(__imp__sub_83257E88) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// mulli r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 * 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83257E94"))) PPC_WEAK_FUNC(sub_83257E94);
PPC_FUNC_IMPL(__imp__sub_83257E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83257E98"))) PPC_WEAK_FUNC(sub_83257E98);
PPC_FUNC_IMPL(__imp__sub_83257E98) {
	PPC_FUNC_PROLOGUE();
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x83242338
	sub_83242338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83257EA8"))) PPC_WEAK_FUNC(sub_83257EA8);
PPC_FUNC_IMPL(__imp__sub_83257EA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r3,r11,29,3,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83257EB4"))) PPC_WEAK_FUNC(sub_83257EB4);
PPC_FUNC_IMPL(__imp__sub_83257EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83257EB8"))) PPC_WEAK_FUNC(sub_83257EB8);
PPC_FUNC_IMPL(__imp__sub_83257EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83257ef0
	if (ctx.cr0.eq) goto loc_83257EF0;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83257ef0
	if (ctx.cr0.eq) goto loc_83257EF0;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
loc_83257EF0:
	// b 0x832f15c8
	sub_832F15C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83257EF4"))) PPC_WEAK_FUNC(sub_83257EF4);
PPC_FUNC_IMPL(__imp__sub_83257EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83257EF8"))) PPC_WEAK_FUNC(sub_83257EF8);
PPC_FUNC_IMPL(__imp__sub_83257EF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x83257f0c
	goto loc_83257F0C;
loc_83257F04:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_83257F0C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x83257f04
	if (!ctx.cr6.eq) goto loc_83257F04;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83257F28"))) PPC_WEAK_FUNC(sub_83257F28);
PPC_FUNC_IMPL(__imp__sub_83257F28) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// beq 0x83257f3c
	if (ctx.cr0.eq) goto loc_83257F3C;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_83257F3C:
	// rlwinm. r10,r4,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83257f50
	if (ctx.cr0.eq) goto loc_83257F50;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x83257f50
	if (ctx.cr6.eq) goto loc_83257F50;
	// li r11,2
	ctx.r11.s64 = 2;
loc_83257F50:
	// rlwinm. r10,r4,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83257f74
	if (ctx.cr0.eq) goto loc_83257F74;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x83257f74
	if (ctx.cr6.eq) goto loc_83257F74;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83257f70
	if (ctx.cr0.eq) goto loc_83257F70;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83257f74
	goto loc_83257F74;
loc_83257F70:
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
loc_83257F74:
	// rlwinm r10,r3,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83257F80"))) PPC_WEAK_FUNC(sub_83257F80);
PPC_FUNC_IMPL(__imp__sub_83257F80) {
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
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
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
	// bl 0x8327d000
	ctx.lr = 0x83257FB0;
	sub_8327D000(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x83257f28
	ctx.lr = 0x83257FBC;
	sub_83257F28(ctx, base);
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

__attribute__((alias("__imp__sub_83257FD0"))) PPC_WEAK_FUNC(sub_83257FD0);
PPC_FUNC_IMPL(__imp__sub_83257FD0) {
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
	// bl 0x83257f80
	ctx.lr = 0x83257FE0;
	sub_83257F80(ctx, base);
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
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

__attribute__((alias("__imp__sub_83258000"))) PPC_WEAK_FUNC(sub_83258000);
PPC_FUNC_IMPL(__imp__sub_83258000) {
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
	// lwz r10,548(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 548);
	// lwz r11,552(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 548, ctx.r10.u32);
	// beq cr6,0x83258048
	if (ctx.cr6.eq) goto loc_83258048;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83258048
	if (ctx.cr6.lt) goto loc_83258048;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83258040
	if (!ctx.cr6.eq) goto loc_83258040;
	// bl 0x832047c0
	ctx.lr = 0x83258040;
	sub_832047C0(ctx, base);
loc_83258040:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8325804c
	goto loc_8325804C;
loc_83258048:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8325804C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325805C"))) PPC_WEAK_FUNC(sub_8325805C);
PPC_FUNC_IMPL(__imp__sub_8325805C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258060"))) PPC_WEAK_FUNC(sub_83258060);
PPC_FUNC_IMPL(__imp__sub_83258060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83258068;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// clrlwi. r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832580b0
	if (ctx.cr0.eq) goto loc_832580B0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8325808C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x832580b0
	if (ctx.cr6.eq) goto loc_832580B0;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8325808c
	if (ctx.cr6.lt) goto loc_8325808C;
loc_832580B0:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83258110
	if (!ctx.cr6.eq) goto loc_83258110;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832580d0
	if (ctx.cr0.eq) goto loc_832580D0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,648(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// bl 0x8327c448
	ctx.lr = 0x832580D0;
	sub_8327C448(ctx, base);
loc_832580D0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// subf. r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83258104
	if (ctx.cr0.eq) goto loc_83258104;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_832580E8:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// beq cr6,0x8325811c
	if (ctx.cr6.eq) goto loc_8325811C;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x832580e8
	if (!ctx.cr0.eq) goto loc_832580E8;
loc_83258104:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwimi r31,r11,0,0,28
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF8) | (ctx.r31.u64 & 0xFFFFFFFF00000007);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
loc_83258110:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83258114:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8325811C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83258114
	goto loc_83258114;
}

__attribute__((alias("__imp__sub_83258124"))) PPC_WEAK_FUNC(sub_83258124);
PPC_FUNC_IMPL(__imp__sub_83258124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258128"))) PPC_WEAK_FUNC(sub_83258128);
PPC_FUNC_IMPL(__imp__sub_83258128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x83258130;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x8325816c
	if (!ctx.cr6.eq) goto loc_8325816C;
	// rlwinm r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x832581ec
	goto loc_832581EC;
loc_8325816C:
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x832581d4
	if (ctx.cr6.eq) goto loc_832581D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f31,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
loc_83258190:
	// srw r11,r26,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r31.u8 & 0x3F));
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832ecf28
	ctx.lr = 0x832581A4;
	sub_832ECF28(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x832581b8
	if (!ctx.cr6.lt) goto loc_832581B8;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x832581c4
	goto loc_832581C4;
loc_832581B8:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x832581c4
	if (!ctx.cr6.gt) goto loc_832581C4;
	// li r24,1
	ctx.r24.s64 = 1;
loc_832581C4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83258190
	if (!ctx.cr0.eq) goto loc_83258190;
loc_832581D4:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832581e8
	if (ctx.cr0.eq) goto loc_832581E8;
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x832581ec
	if (!ctx.cr0.eq) goto loc_832581EC;
loc_832581E8:
	// li r3,2
	ctx.r3.s64 = 2;
loc_832581EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832581F8"))) PPC_WEAK_FUNC(sub_832581F8);
PPC_FUNC_IMPL(__imp__sub_832581F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r6,r11,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r5,r11,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// b 0x83258128
	sub_83258128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83258214"))) PPC_WEAK_FUNC(sub_83258214);
PPC_FUNC_IMPL(__imp__sub_83258214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258218"))) PPC_WEAK_FUNC(sub_83258218);
PPC_FUNC_IMPL(__imp__sub_83258218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f0,6048(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x83258264
	if (ctx.cr6.eq) goto loc_83258264;
loc_83258238:
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8325824c
	if (!ctx.cr6.lt) goto loc_8325824C;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x83258258
	goto loc_83258258;
loc_8325824C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x83258258
	if (!ctx.cr6.gt) goto loc_83258258;
	// li r8,1
	ctx.r8.s64 = 1;
loc_83258258:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x83258238
	if (!ctx.cr0.eq) goto loc_83258238;
loc_83258264:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83258298
	if (ctx.cr6.eq) goto loc_83258298;
loc_8325826C:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x83258280
	if (!ctx.cr6.lt) goto loc_83258280;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x8325828c
	goto loc_8325828C;
loc_83258280:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8325828c
	if (!ctx.cr6.gt) goto loc_8325828C;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8325828C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8325826c
	if (!ctx.cr0.eq) goto loc_8325826C;
loc_83258298:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832582ac
	if (ctx.cr0.eq) goto loc_832582AC;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_832582AC:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832582B4"))) PPC_WEAK_FUNC(sub_832582B4);
PPC_FUNC_IMPL(__imp__sub_832582B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832582B8"))) PPC_WEAK_FUNC(sub_832582B8);
PPC_FUNC_IMPL(__imp__sub_832582B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832582C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm. r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,-1
	ctx.r27.s64 = -1;
	// beq 0x83258338
	if (ctx.cr0.eq) goto loc_83258338;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// beq cr6,0x83258310
	if (ctx.cr6.eq) goto loc_83258310;
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x83258314
	if (!ctx.cr6.eq) goto loc_83258314;
loc_83258310:
	// li r10,1
	ctx.r10.s64 = 1;
loc_83258314:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83258324
	if (ctx.cr0.eq) goto loc_83258324;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_83258324:
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83258338
	if (ctx.cr0.eq) goto loc_83258338;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x83232640
	ctx.lr = 0x83258334;
	sub_83232640(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83258338:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832583a4
	if (ctx.cr0.eq) goto loc_832583A4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x83258364
	if (ctx.cr6.eq) goto loc_83258364;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83258368
	if (!ctx.cr6.eq) goto loc_83258368;
loc_83258364:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83258368:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83258378
	if (ctx.cr0.eq) goto loc_83258378;
	// or r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 | ctx.r28.u64;
	// and r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 & ctx.r27.u64;
loc_83258378:
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832583a4
	if (ctx.cr0.eq) goto loc_832583A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83232640
	ctx.lr = 0x83258388;
	sub_83232640(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832583a0
	if (ctx.cr6.eq) goto loc_832583A0;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x832583a0
	if (ctx.cr6.eq) goto loc_832583A0;
loc_83258398:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83258420
	goto loc_83258420;
loc_832583A0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_832583A4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83258408
	if (ctx.cr0.eq) goto loc_83258408;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x832583d0
	if (ctx.cr6.eq) goto loc_832583D0;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x832583d4
	if (!ctx.cr6.eq) goto loc_832583D4;
loc_832583D0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832583D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832583e4
	if (ctx.cr0.eq) goto loc_832583E4;
	// or r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 | ctx.r28.u64;
	// and r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 & ctx.r27.u64;
loc_832583E4:
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83258408
	if (ctx.cr0.eq) goto loc_83258408;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83232640
	ctx.lr = 0x832583F4;
	sub_83232640(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83258404
	if (ctx.cr6.eq) goto loc_83258404;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83258398
	if (!ctx.cr6.eq) goto loc_83258398;
loc_83258404:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83258408:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83258418
	if (ctx.cr6.eq) goto loc_83258418;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x83258398
	if (!ctx.cr6.eq) goto loc_83258398;
loc_83258418:
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83258420:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83258428"))) PPC_WEAK_FUNC(sub_83258428);
PPC_FUNC_IMPL(__imp__sub_83258428) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83258430;
	__savegprlr_26(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832584b8
	if (ctx.cr6.eq) goto loc_832584B8;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r29,r4,44
	ctx.r29.s64 = ctx.r4.s64 + 44;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r27,r11,13,29,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_83258450:
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x832584c0
	if (!ctx.cr6.lt) goto loc_832584C0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r31,12(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_83258468:
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x83258494
	if (!ctx.cr6.lt) goto loc_83258494;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x832584a0
	if (ctx.cr6.eq) goto loc_832584A0;
	// lwz r26,12(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r26,r31
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83258498
	if (ctx.cr6.eq) goto loc_83258498;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x83258468
	goto loc_83258468;
loc_83258494:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83258498:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832584ac
	if (!ctx.cr6.eq) goto loc_832584AC;
loc_832584A0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_832584AC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x83258450
	goto loc_83258450;
loc_832584B8:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r3,r11,18,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
loc_832584C0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x83258588
	if (ctx.cr6.eq) goto loc_83258588;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// addi r31,r6,44
	ctx.r31.s64 = ctx.r6.s64 + 44;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r29,r11,13,29,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_832584DC:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8325859c
	if (!ctx.cr6.lt) goto loc_8325859C;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8325857c
	if (ctx.cr6.eq) goto loc_8325857C;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_832584FC:
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x83258528
	if (!ctx.cr6.lt) goto loc_83258528;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83258534
	if (ctx.cr6.eq) goto loc_83258534;
	// lwz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8325852c
	if (ctx.cr6.eq) goto loc_8325852C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x832584fc
	goto loc_832584FC;
loc_83258528:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325852C:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8325857c
	if (!ctx.cr6.eq) goto loc_8325857C;
loc_83258534:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83258570
	if (ctx.cr6.eq) goto loc_83258570;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r4,44
	ctx.r10.s64 = ctx.r4.s64 + 44;
	// rlwinm r9,r9,13,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x7;
loc_8325854C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83258570
	if (!ctx.cr6.lt) goto loc_83258570;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8325857c
	if (ctx.cr6.eq) goto loc_8325857C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x8325854c
	goto loc_8325854C;
loc_83258570:
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8325857C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x832584dc
	goto loc_832584DC;
loc_83258588:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8325859c
	if (ctx.cr6.eq) goto loc_8325859C;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8325859C:
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832585A0"))) PPC_WEAK_FUNC(sub_832585A0);
PPC_FUNC_IMPL(__imp__sub_832585A0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832585A8;
	__savegprlr_26(ctx, base);
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832585B0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832586a4
	if (ctx.cr6.eq) goto loc_832586A4;
	// lwz r31,16(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8325869c
	if (ctx.cr6.eq) goto loc_8325869C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8325869c
	if (ctx.cr0.eq) goto loc_8325869C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x8325869c
	if (!ctx.cr6.eq) goto loc_8325869C;
	// lwz r30,4(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
loc_832585E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8325869c
	if (ctx.cr6.eq) goto loc_8325869C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83258694
	if (ctx.cr6.eq) goto loc_83258694;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83258694
	if (ctx.cr0.eq) goto loc_83258694;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x83258694
	if (!ctx.cr6.eq) goto loc_83258694;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83258624
	if (!ctx.cr6.eq) goto loc_83258624;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// b 0x83258694
	goto loc_83258694;
loc_83258624:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// clrldi r28,r5,32
	ctx.r28.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rldimi r28,r4,32,0
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r28.u64 & 0xFFFFFFFF);
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r7,12(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rldimi r26,r10,32,0
	ctx.r26.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r26.u64 & 0xFFFFFFFF);
	// cmpld cr6,r26,r28
	ctx.cr6.compare<uint64_t>(ctx.r26.u64, ctx.r28.u64, ctx.xer);
	// bne cr6,0x83258668
	if (!ctx.cr6.eq) goto loc_83258668;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x83258680
	if (ctx.cr6.eq) goto loc_83258680;
loc_83258668:
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rldimi r7,r8,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// cmpld cr6,r7,r6
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r6.u64, ctx.xer);
	// bne cr6,0x83258688
	if (!ctx.cr6.eq) goto loc_83258688;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83258688
	if (!ctx.cr6.eq) goto loc_83258688;
loc_83258680:
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x83258694
	goto loc_83258694;
loc_83258688:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83258694
	if (!ctx.cr6.eq) goto loc_83258694;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_83258694:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x832585e4
	goto loc_832585E4;
loc_8325869C:
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x832585b0
	goto loc_832585B0;
loc_832586A4:
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832586A8"))) PPC_WEAK_FUNC(sub_832586A8);
PPC_FUNC_IMPL(__imp__sub_832586A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832586B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm. r30,r11,13,29,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x83258708
	if (ctx.cr0.eq) goto loc_83258708;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r29,r28,44
	ctx.r29.s64 = ctx.r28.s64 + 44;
	// subf r27,r5,r6
	ctx.r27.s64 = ctx.r6.s64 - ctx.r5.s64;
	// subf r26,r5,r4
	ctx.r26.s64 = ctx.r4.s64 - ctx.r5.s64;
loc_832586D4:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,28(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r7,r27,r31
	ctx.r7.u64 = ctx.r27.u64 + ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r5,r26,r31
	ctx.r5.u64 = ctx.r26.u64 + ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832eefb8
	ctx.lr = 0x832586F8;
	sub_832EEFB8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x832586d4
	if (!ctx.cr0.eq) goto loc_832586D4;
loc_83258708:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83258710"))) PPC_WEAK_FUNC(sub_83258710);
PPC_FUNC_IMPL(__imp__sub_83258710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x83258718;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r14,340(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// stw r30,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r30.u32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// beq cr6,0x83258858
	if (ctx.cr6.eq) goto loc_83258858;
	// lwz r18,324(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r19,r30
	ctx.r19.u64 = ctx.r30.u64;
loc_83258760:
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x83258808
	if (ctx.cr6.eq) goto loc_83258808;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// subf r29,r24,r16
	ctx.r29.s64 = ctx.r16.s64 - ctx.r24.s64;
	// subf r28,r24,r17
	ctx.r28.s64 = ctx.r17.s64 - ctx.r24.s64;
loc_8325877C:
	// lwzx r3,r28,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lwzx r11,r30,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832587b0
	if (!ctx.cr6.eq) goto loc_832587B0;
	// lwzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwzx r9,r30,r18
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r18.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x832587b0
	if (!ctx.cr6.eq) goto loc_832587B0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,1
	ctx.r25.s64 = 1;
	// lwzx r9,r30,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x83258808
	if (ctx.cr6.eq) goto loc_83258808;
loc_832587B0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x832587f8
	if (!ctx.cr6.eq) goto loc_832587F8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x832587f8
	if (!ctx.cr6.eq) goto loc_832587F8;
	// lwzx r5,r29,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832ecf28
	ctx.lr = 0x832587DC;
	sub_832ECF28(ctx, base);
	// lwzx r5,r30,r18
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r18.u32);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwzx r4,r30,r23
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// lwzx r3,r30,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// bl 0x832ecf28
	ctx.lr = 0x832587F0;
	sub_832ECF28(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// beq cr6,0x83258808
	if (ctx.cr6.eq) goto loc_83258808;
loc_832587F8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x8325877c
	if (ctx.cr6.lt) goto loc_8325877C;
loc_83258808:
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x83258830
	if (!ctx.cr6.eq) goto loc_83258830;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83258870
	if (ctx.cr0.eq) goto loc_83258870;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// slw r11,r11,r22
	ctx.r11.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r22.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
	// b 0x83258844
	goto loc_83258844;
loc_83258830:
	// li r11,3
	ctx.r11.s64 = 3;
	// slw r10,r27,r19
	ctx.r10.u64 = ctx.r19.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r19.u8 & 0x3F));
	// slw r11,r11,r19
	ctx.r11.u64 = ctx.r19.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r19.u8 & 0x3F));
	// andc r11,r15,r11
	ctx.r11.u64 = ctx.r15.u64 & ~ctx.r11.u64;
	// or r15,r11,r10
	ctx.r15.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_83258844:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// cmplw cr6,r22,r21
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x83258760
	if (ctx.cr6.lt) goto loc_83258760;
loc_83258858:
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r15,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r15.u32);
loc_83258864:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_83258870:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83258864
	goto loc_83258864;
}

__attribute__((alias("__imp__sub_83258878"))) PPC_WEAK_FUNC(sub_83258878);
PPC_FUNC_IMPL(__imp__sub_83258878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x832588a8
	goto loc_832588A8;
loc_8325888C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,19,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFFF;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x832588a4
	if (!ctx.cr6.gt) goto loc_832588A4;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_832588A4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_832588A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8325888c
	if (!ctx.cr6.eq) goto loc_8325888C;
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// b 0x832588d4
	goto loc_832588D4;
loc_832588B8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,19,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0xFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x832588d0
	if (!ctx.cr6.gt) goto loc_832588D0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_832588D0:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_832588D4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832588b8
	if (!ctx.cr6.eq) goto loc_832588B8;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832588ec
	if (!ctx.cr6.eq) goto loc_832588EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832588EC:
	// subfc r11,r8,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258900"))) PPC_WEAK_FUNC(sub_83258900);
PPC_FUNC_IMPL(__imp__sub_83258900) {
	PPC_FUNC_PROLOGUE();
	// b 0x8323a718
	sub_8323A718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83258904"))) PPC_WEAK_FUNC(sub_83258904);
PPC_FUNC_IMPL(__imp__sub_83258904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258908"))) PPC_WEAK_FUNC(sub_83258908);
PPC_FUNC_IMPL(__imp__sub_83258908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83258910;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// b 0x83258960
	goto loc_83258960;
loc_83258924:
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// b 0x83258948
	goto loc_83258948;
loc_8325892C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83258908
	ctx.lr = 0x8325893C;
	sub_83258908(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83258968
	if (!ctx.cr0.eq) goto loc_83258968;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83258948:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8325892c
	if (!ctx.cr6.eq) goto loc_8325892C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,3,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83258970
	if (!ctx.cr0.eq) goto loc_83258970;
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_83258960:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x83258924
	if (!ctx.cr6.eq) goto loc_83258924;
loc_83258968:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83258974
	goto loc_83258974;
loc_83258970:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83258974:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325897C"))) PPC_WEAK_FUNC(sub_8325897C);
PPC_FUNC_IMPL(__imp__sub_8325897C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258980"))) PPC_WEAK_FUNC(sub_83258980);
PPC_FUNC_IMPL(__imp__sub_83258980) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// addi r6,r4,32
	ctx.r6.s64 = ctx.r4.s64 + 32;
	// b 0x832589fc
	goto loc_832589FC;
loc_8325898C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi. r7,r8,19
	ctx.r7.u64 = ctx.r8.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x832589e4
	if (ctx.cr0.eq) goto loc_832589E4;
	// addi r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 + 24;
loc_832589A4:
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x832589c4
	if (ctx.cr6.eq) goto loc_832589C4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x832589a4
	if (ctx.cr6.lt) goto loc_832589A4;
	// b 0x832589e4
	goto loc_832589E4;
loc_832589C4:
	// addi r8,r10,6
	ctx.r8.s64 = ctx.r10.s64 + 6;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r5.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// lwz r8,32(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r11,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r11.u32);
loc_832589E4:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r9,r9,19
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x832589f8
	if (!ctx.cr6.eq) goto loc_832589F8;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
loc_832589F8:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_832589FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8325898c
	if (!ctx.cr6.eq) goto loc_8325898C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258A08"))) PPC_WEAK_FUNC(sub_83258A08);
PPC_FUNC_IMPL(__imp__sub_83258A08) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,32(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83258a60
	goto loc_83258A60;
loc_83258A14:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r9,r8,19
	ctx.r9.u64 = ctx.r8.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83258a5c
	if (ctx.cr0.eq) goto loc_83258A5C;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
loc_83258A2C:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x83258a4c
	if (ctx.cr6.eq) goto loc_83258A4C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83258a2c
	if (ctx.cr6.lt) goto loc_83258A2C;
	// b 0x83258a5c
	goto loc_83258A5C;
loc_83258A4C:
	// rlwinm r11,r8,19,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0xFFFF;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x83258a5c
	if (!ctx.cr6.gt) goto loc_83258A5C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_83258A5C:
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
loc_83258A60:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x83258a14
	if (!ctx.cr6.eq) goto loc_83258A14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258A6C"))) PPC_WEAK_FUNC(sub_83258A6C);
PPC_FUNC_IMPL(__imp__sub_83258A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258A70"))) PPC_WEAK_FUNC(sub_83258A70);
PPC_FUNC_IMPL(__imp__sub_83258A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83258A78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r31,6
	ctx.r31.s64 = 6;
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r30,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x83258abc
	if (ctx.cr6.eq) goto loc_83258ABC;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x83258b2c
	if (ctx.cr6.eq) goto loc_83258B2C;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x83258af8
	if (ctx.cr6.eq) goto loc_83258AF8;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x83258af8
	if (ctx.cr6.eq) goto loc_83258AF8;
	// cmpwi cr6,r11,124
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 124, ctx.xer);
	// bne cr6,0x83258adc
	if (!ctx.cr6.eq) goto loc_83258ADC;
	// b 0x83258af8
	goto loc_83258AF8;
loc_83258ABC:
	// rlwinm r11,r30,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bne cr6,0x83258adc
	if (!ctx.cr6.eq) goto loc_83258ADC;
	// lwz r4,48(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r3,44(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// bl 0x8321cb38
	ctx.lr = 0x83258AD4;
	sub_8321CB38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83258af8
	if (!ctx.cr0.eq) goto loc_83258AF8;
loc_83258ADC:
	// rlwinm r11,r30,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0x7;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x83258b1c
	if (ctx.cr6.eq) goto loc_83258B1C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x83258b08
	if (ctx.cr6.eq) goto loc_83258B08;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x83258b2c
	if (!ctx.cr6.eq) goto loc_83258B2C;
loc_83258AF8:
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r31,r11,0,30,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// b 0x83258b2c
	goto loc_83258B2C;
loc_83258B08:
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// b 0x83258b2c
	goto loc_83258B2C;
loc_83258B1C:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_83258B2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83258B38"))) PPC_WEAK_FUNC(sub_83258B38);
PPC_FUNC_IMPL(__imp__sub_83258B38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258B3C"))) PPC_WEAK_FUNC(sub_83258B3C);
PPC_FUNC_IMPL(__imp__sub_83258B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258B40"))) PPC_WEAK_FUNC(sub_83258B40);
PPC_FUNC_IMPL(__imp__sub_83258B40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258B54"))) PPC_WEAK_FUNC(sub_83258B54);
PPC_FUNC_IMPL(__imp__sub_83258B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258B58"))) PPC_WEAK_FUNC(sub_83258B58);
PPC_FUNC_IMPL(__imp__sub_83258B58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258B60"))) PPC_WEAK_FUNC(sub_83258B60);
PPC_FUNC_IMPL(__imp__sub_83258B60) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258B68"))) PPC_WEAK_FUNC(sub_83258B68);
PPC_FUNC_IMPL(__imp__sub_83258B68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258B80"))) PPC_WEAK_FUNC(sub_83258B80);
PPC_FUNC_IMPL(__imp__sub_83258B80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258B9C"))) PPC_WEAK_FUNC(sub_83258B9C);
PPC_FUNC_IMPL(__imp__sub_83258B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258BA0"))) PPC_WEAK_FUNC(sub_83258BA0);
PPC_FUNC_IMPL(__imp__sub_83258BA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258BB8"))) PPC_WEAK_FUNC(sub_83258BB8);
PPC_FUNC_IMPL(__imp__sub_83258BB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258BCC"))) PPC_WEAK_FUNC(sub_83258BCC);
PPC_FUNC_IMPL(__imp__sub_83258BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258BD0"))) PPC_WEAK_FUNC(sub_83258BD0);
PPC_FUNC_IMPL(__imp__sub_83258BD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258BD8"))) PPC_WEAK_FUNC(sub_83258BD8);
PPC_FUNC_IMPL(__imp__sub_83258BD8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258BE0"))) PPC_WEAK_FUNC(sub_83258BE0);
PPC_FUNC_IMPL(__imp__sub_83258BE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258C18"))) PPC_WEAK_FUNC(sub_83258C18);
PPC_FUNC_IMPL(__imp__sub_83258C18) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stwx r8,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258C60"))) PPC_WEAK_FUNC(sub_83258C60);
PPC_FUNC_IMPL(__imp__sub_83258C60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,128(r4)
	PPC_STORE_U32(ctx.r4.u32 + 128, ctx.r11.u32);
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258C98"))) PPC_WEAK_FUNC(sub_83258C98);
PPC_FUNC_IMPL(__imp__sub_83258C98) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258CA4"))) PPC_WEAK_FUNC(sub_83258CA4);
PPC_FUNC_IMPL(__imp__sub_83258CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258CA8"))) PPC_WEAK_FUNC(sub_83258CA8);
PPC_FUNC_IMPL(__imp__sub_83258CA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258CB0"))) PPC_WEAK_FUNC(sub_83258CB0);
PPC_FUNC_IMPL(__imp__sub_83258CB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258CC8"))) PPC_WEAK_FUNC(sub_83258CC8);
PPC_FUNC_IMPL(__imp__sub_83258CC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258CE4"))) PPC_WEAK_FUNC(sub_83258CE4);
PPC_FUNC_IMPL(__imp__sub_83258CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258CE8"))) PPC_WEAK_FUNC(sub_83258CE8);
PPC_FUNC_IMPL(__imp__sub_83258CE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258CF0"))) PPC_WEAK_FUNC(sub_83258CF0);
PPC_FUNC_IMPL(__imp__sub_83258CF0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258CFC"))) PPC_WEAK_FUNC(sub_83258CFC);
PPC_FUNC_IMPL(__imp__sub_83258CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258D00"))) PPC_WEAK_FUNC(sub_83258D00);
PPC_FUNC_IMPL(__imp__sub_83258D00) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258D0C"))) PPC_WEAK_FUNC(sub_83258D0C);
PPC_FUNC_IMPL(__imp__sub_83258D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258D10"))) PPC_WEAK_FUNC(sub_83258D10);
PPC_FUNC_IMPL(__imp__sub_83258D10) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258D1C"))) PPC_WEAK_FUNC(sub_83258D1C);
PPC_FUNC_IMPL(__imp__sub_83258D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258D20"))) PPC_WEAK_FUNC(sub_83258D20);
PPC_FUNC_IMPL(__imp__sub_83258D20) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258D2C"))) PPC_WEAK_FUNC(sub_83258D2C);
PPC_FUNC_IMPL(__imp__sub_83258D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258D30"))) PPC_WEAK_FUNC(sub_83258D30);
PPC_FUNC_IMPL(__imp__sub_83258D30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258D44"))) PPC_WEAK_FUNC(sub_83258D44);
PPC_FUNC_IMPL(__imp__sub_83258D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258D48"))) PPC_WEAK_FUNC(sub_83258D48);
PPC_FUNC_IMPL(__imp__sub_83258D48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258D5C"))) PPC_WEAK_FUNC(sub_83258D5C);
PPC_FUNC_IMPL(__imp__sub_83258D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258D60"))) PPC_WEAK_FUNC(sub_83258D60);
PPC_FUNC_IMPL(__imp__sub_83258D60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83258d80
	if (ctx.cr6.eq) goto loc_83258D80;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83258d84
	if (!ctx.cr6.eq) goto loc_83258D84;
loc_83258D80:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83258D84:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258D8C"))) PPC_WEAK_FUNC(sub_83258D8C);
PPC_FUNC_IMPL(__imp__sub_83258D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258D90"))) PPC_WEAK_FUNC(sub_83258D90);
PPC_FUNC_IMPL(__imp__sub_83258D90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258DA8"))) PPC_WEAK_FUNC(sub_83258DA8);
PPC_FUNC_IMPL(__imp__sub_83258DA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258DB0"))) PPC_WEAK_FUNC(sub_83258DB0);
PPC_FUNC_IMPL(__imp__sub_83258DB0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258DBC"))) PPC_WEAK_FUNC(sub_83258DBC);
PPC_FUNC_IMPL(__imp__sub_83258DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258DC0"))) PPC_WEAK_FUNC(sub_83258DC0);
PPC_FUNC_IMPL(__imp__sub_83258DC0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258DC8"))) PPC_WEAK_FUNC(sub_83258DC8);
PPC_FUNC_IMPL(__imp__sub_83258DC8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258DD0"))) PPC_WEAK_FUNC(sub_83258DD0);
PPC_FUNC_IMPL(__imp__sub_83258DD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258DD4"))) PPC_WEAK_FUNC(sub_83258DD4);
PPC_FUNC_IMPL(__imp__sub_83258DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258DD8"))) PPC_WEAK_FUNC(sub_83258DD8);
PPC_FUNC_IMPL(__imp__sub_83258DD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258DE4"))) PPC_WEAK_FUNC(sub_83258DE4);
PPC_FUNC_IMPL(__imp__sub_83258DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258DE8"))) PPC_WEAK_FUNC(sub_83258DE8);
PPC_FUNC_IMPL(__imp__sub_83258DE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258DEC"))) PPC_WEAK_FUNC(sub_83258DEC);
PPC_FUNC_IMPL(__imp__sub_83258DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258DF0"))) PPC_WEAK_FUNC(sub_83258DF0);
PPC_FUNC_IMPL(__imp__sub_83258DF0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258DF8"))) PPC_WEAK_FUNC(sub_83258DF8);
PPC_FUNC_IMPL(__imp__sub_83258DF8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258E04"))) PPC_WEAK_FUNC(sub_83258E04);
PPC_FUNC_IMPL(__imp__sub_83258E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258E08"))) PPC_WEAK_FUNC(sub_83258E08);
PPC_FUNC_IMPL(__imp__sub_83258E08) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258E10"))) PPC_WEAK_FUNC(sub_83258E10);
PPC_FUNC_IMPL(__imp__sub_83258E10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258E14"))) PPC_WEAK_FUNC(sub_83258E14);
PPC_FUNC_IMPL(__imp__sub_83258E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258E18"))) PPC_WEAK_FUNC(sub_83258E18);
PPC_FUNC_IMPL(__imp__sub_83258E18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258E24"))) PPC_WEAK_FUNC(sub_83258E24);
PPC_FUNC_IMPL(__imp__sub_83258E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258E28"))) PPC_WEAK_FUNC(sub_83258E28);
PPC_FUNC_IMPL(__imp__sub_83258E28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258E2C"))) PPC_WEAK_FUNC(sub_83258E2C);
PPC_FUNC_IMPL(__imp__sub_83258E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258E30"))) PPC_WEAK_FUNC(sub_83258E30);
PPC_FUNC_IMPL(__imp__sub_83258E30) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258E3C"))) PPC_WEAK_FUNC(sub_83258E3C);
PPC_FUNC_IMPL(__imp__sub_83258E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258E40"))) PPC_WEAK_FUNC(sub_83258E40);
PPC_FUNC_IMPL(__imp__sub_83258E40) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258E48"))) PPC_WEAK_FUNC(sub_83258E48);
PPC_FUNC_IMPL(__imp__sub_83258E48) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258E50"))) PPC_WEAK_FUNC(sub_83258E50);
PPC_FUNC_IMPL(__imp__sub_83258E50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258E54"))) PPC_WEAK_FUNC(sub_83258E54);
PPC_FUNC_IMPL(__imp__sub_83258E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258E58"))) PPC_WEAK_FUNC(sub_83258E58);
PPC_FUNC_IMPL(__imp__sub_83258E58) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r4,26
	ctx.r3.u64 = ctx.r4.u32 & 0x3F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258E60"))) PPC_WEAK_FUNC(sub_83258E60);
PPC_FUNC_IMPL(__imp__sub_83258E60) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258E68"))) PPC_WEAK_FUNC(sub_83258E68);
PPC_FUNC_IMPL(__imp__sub_83258E68) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258E74"))) PPC_WEAK_FUNC(sub_83258E74);
PPC_FUNC_IMPL(__imp__sub_83258E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258E78"))) PPC_WEAK_FUNC(sub_83258E78);
PPC_FUNC_IMPL(__imp__sub_83258E78) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258E80"))) PPC_WEAK_FUNC(sub_83258E80);
PPC_FUNC_IMPL(__imp__sub_83258E80) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258E8C"))) PPC_WEAK_FUNC(sub_83258E8C);
PPC_FUNC_IMPL(__imp__sub_83258E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258E90"))) PPC_WEAK_FUNC(sub_83258E90);
PPC_FUNC_IMPL(__imp__sub_83258E90) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258E98"))) PPC_WEAK_FUNC(sub_83258E98);
PPC_FUNC_IMPL(__imp__sub_83258E98) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258EA0"))) PPC_WEAK_FUNC(sub_83258EA0);
PPC_FUNC_IMPL(__imp__sub_83258EA0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258EA8"))) PPC_WEAK_FUNC(sub_83258EA8);
PPC_FUNC_IMPL(__imp__sub_83258EA8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258EB4"))) PPC_WEAK_FUNC(sub_83258EB4);
PPC_FUNC_IMPL(__imp__sub_83258EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258EB8"))) PPC_WEAK_FUNC(sub_83258EB8);
PPC_FUNC_IMPL(__imp__sub_83258EB8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258EC0"))) PPC_WEAK_FUNC(sub_83258EC0);
PPC_FUNC_IMPL(__imp__sub_83258EC0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258EC8"))) PPC_WEAK_FUNC(sub_83258EC8);
PPC_FUNC_IMPL(__imp__sub_83258EC8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258ED4"))) PPC_WEAK_FUNC(sub_83258ED4);
PPC_FUNC_IMPL(__imp__sub_83258ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258ED8"))) PPC_WEAK_FUNC(sub_83258ED8);
PPC_FUNC_IMPL(__imp__sub_83258ED8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258EE0"))) PPC_WEAK_FUNC(sub_83258EE0);
PPC_FUNC_IMPL(__imp__sub_83258EE0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258EEC"))) PPC_WEAK_FUNC(sub_83258EEC);
PPC_FUNC_IMPL(__imp__sub_83258EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258EF0"))) PPC_WEAK_FUNC(sub_83258EF0);
PPC_FUNC_IMPL(__imp__sub_83258EF0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258EF8"))) PPC_WEAK_FUNC(sub_83258EF8);
PPC_FUNC_IMPL(__imp__sub_83258EF8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258F00"))) PPC_WEAK_FUNC(sub_83258F00);
PPC_FUNC_IMPL(__imp__sub_83258F00) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258F08"))) PPC_WEAK_FUNC(sub_83258F08);
PPC_FUNC_IMPL(__imp__sub_83258F08) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258F10"))) PPC_WEAK_FUNC(sub_83258F10);
PPC_FUNC_IMPL(__imp__sub_83258F10) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258F18"))) PPC_WEAK_FUNC(sub_83258F18);
PPC_FUNC_IMPL(__imp__sub_83258F18) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r4,26,6,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258F20"))) PPC_WEAK_FUNC(sub_83258F20);
PPC_FUNC_IMPL(__imp__sub_83258F20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258F24"))) PPC_WEAK_FUNC(sub_83258F24);
PPC_FUNC_IMPL(__imp__sub_83258F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258F28"))) PPC_WEAK_FUNC(sub_83258F28);
PPC_FUNC_IMPL(__imp__sub_83258F28) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258F30"))) PPC_WEAK_FUNC(sub_83258F30);
PPC_FUNC_IMPL(__imp__sub_83258F30) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258F38"))) PPC_WEAK_FUNC(sub_83258F38);
PPC_FUNC_IMPL(__imp__sub_83258F38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258F3C"))) PPC_WEAK_FUNC(sub_83258F3C);
PPC_FUNC_IMPL(__imp__sub_83258F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258F40"))) PPC_WEAK_FUNC(sub_83258F40);
PPC_FUNC_IMPL(__imp__sub_83258F40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258F44"))) PPC_WEAK_FUNC(sub_83258F44);
PPC_FUNC_IMPL(__imp__sub_83258F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258F48"))) PPC_WEAK_FUNC(sub_83258F48);
PPC_FUNC_IMPL(__imp__sub_83258F48) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258F54"))) PPC_WEAK_FUNC(sub_83258F54);
PPC_FUNC_IMPL(__imp__sub_83258F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258F58"))) PPC_WEAK_FUNC(sub_83258F58);
PPC_FUNC_IMPL(__imp__sub_83258F58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258F5C"))) PPC_WEAK_FUNC(sub_83258F5C);
PPC_FUNC_IMPL(__imp__sub_83258F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258F60"))) PPC_WEAK_FUNC(sub_83258F60);
PPC_FUNC_IMPL(__imp__sub_83258F60) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258F68"))) PPC_WEAK_FUNC(sub_83258F68);
PPC_FUNC_IMPL(__imp__sub_83258F68) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258F70"))) PPC_WEAK_FUNC(sub_83258F70);
PPC_FUNC_IMPL(__imp__sub_83258F70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258F74"))) PPC_WEAK_FUNC(sub_83258F74);
PPC_FUNC_IMPL(__imp__sub_83258F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258F78"))) PPC_WEAK_FUNC(sub_83258F78);
PPC_FUNC_IMPL(__imp__sub_83258F78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258F7C"))) PPC_WEAK_FUNC(sub_83258F7C);
PPC_FUNC_IMPL(__imp__sub_83258F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258F80"))) PPC_WEAK_FUNC(sub_83258F80);
PPC_FUNC_IMPL(__imp__sub_83258F80) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258F8C"))) PPC_WEAK_FUNC(sub_83258F8C);
PPC_FUNC_IMPL(__imp__sub_83258F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258F90"))) PPC_WEAK_FUNC(sub_83258F90);
PPC_FUNC_IMPL(__imp__sub_83258F90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258F94"))) PPC_WEAK_FUNC(sub_83258F94);
PPC_FUNC_IMPL(__imp__sub_83258F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258F98"))) PPC_WEAK_FUNC(sub_83258F98);
PPC_FUNC_IMPL(__imp__sub_83258F98) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258FA0"))) PPC_WEAK_FUNC(sub_83258FA0);
PPC_FUNC_IMPL(__imp__sub_83258FA0) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258FA8"))) PPC_WEAK_FUNC(sub_83258FA8);
PPC_FUNC_IMPL(__imp__sub_83258FA8) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258FB0"))) PPC_WEAK_FUNC(sub_83258FB0);
PPC_FUNC_IMPL(__imp__sub_83258FB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258FB4"))) PPC_WEAK_FUNC(sub_83258FB4);
PPC_FUNC_IMPL(__imp__sub_83258FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258FB8"))) PPC_WEAK_FUNC(sub_83258FB8);
PPC_FUNC_IMPL(__imp__sub_83258FB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258FBC"))) PPC_WEAK_FUNC(sub_83258FBC);
PPC_FUNC_IMPL(__imp__sub_83258FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258FC0"))) PPC_WEAK_FUNC(sub_83258FC0);
PPC_FUNC_IMPL(__imp__sub_83258FC0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258FCC"))) PPC_WEAK_FUNC(sub_83258FCC);
PPC_FUNC_IMPL(__imp__sub_83258FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258FD0"))) PPC_WEAK_FUNC(sub_83258FD0);
PPC_FUNC_IMPL(__imp__sub_83258FD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258FD4"))) PPC_WEAK_FUNC(sub_83258FD4);
PPC_FUNC_IMPL(__imp__sub_83258FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258FD8"))) PPC_WEAK_FUNC(sub_83258FD8);
PPC_FUNC_IMPL(__imp__sub_83258FD8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258FE0"))) PPC_WEAK_FUNC(sub_83258FE0);
PPC_FUNC_IMPL(__imp__sub_83258FE0) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258FE8"))) PPC_WEAK_FUNC(sub_83258FE8);
PPC_FUNC_IMPL(__imp__sub_83258FE8) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258FF0"))) PPC_WEAK_FUNC(sub_83258FF0);
PPC_FUNC_IMPL(__imp__sub_83258FF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258FF4"))) PPC_WEAK_FUNC(sub_83258FF4);
PPC_FUNC_IMPL(__imp__sub_83258FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258FF8"))) PPC_WEAK_FUNC(sub_83258FF8);
PPC_FUNC_IMPL(__imp__sub_83258FF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83258FFC"))) PPC_WEAK_FUNC(sub_83258FFC);
PPC_FUNC_IMPL(__imp__sub_83258FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259000"))) PPC_WEAK_FUNC(sub_83259000);
PPC_FUNC_IMPL(__imp__sub_83259000) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325900C"))) PPC_WEAK_FUNC(sub_8325900C);
PPC_FUNC_IMPL(__imp__sub_8325900C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259010"))) PPC_WEAK_FUNC(sub_83259010);
PPC_FUNC_IMPL(__imp__sub_83259010) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259014"))) PPC_WEAK_FUNC(sub_83259014);
PPC_FUNC_IMPL(__imp__sub_83259014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259018"))) PPC_WEAK_FUNC(sub_83259018);
PPC_FUNC_IMPL(__imp__sub_83259018) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259024"))) PPC_WEAK_FUNC(sub_83259024);
PPC_FUNC_IMPL(__imp__sub_83259024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259028"))) PPC_WEAK_FUNC(sub_83259028);
PPC_FUNC_IMPL(__imp__sub_83259028) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325902C"))) PPC_WEAK_FUNC(sub_8325902C);
PPC_FUNC_IMPL(__imp__sub_8325902C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259030"))) PPC_WEAK_FUNC(sub_83259030);
PPC_FUNC_IMPL(__imp__sub_83259030) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259038"))) PPC_WEAK_FUNC(sub_83259038);
PPC_FUNC_IMPL(__imp__sub_83259038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325903C"))) PPC_WEAK_FUNC(sub_8325903C);
PPC_FUNC_IMPL(__imp__sub_8325903C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259040"))) PPC_WEAK_FUNC(sub_83259040);
PPC_FUNC_IMPL(__imp__sub_83259040) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325904C"))) PPC_WEAK_FUNC(sub_8325904C);
PPC_FUNC_IMPL(__imp__sub_8325904C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259050"))) PPC_WEAK_FUNC(sub_83259050);
PPC_FUNC_IMPL(__imp__sub_83259050) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325905C"))) PPC_WEAK_FUNC(sub_8325905C);
PPC_FUNC_IMPL(__imp__sub_8325905C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259060"))) PPC_WEAK_FUNC(sub_83259060);
PPC_FUNC_IMPL(__imp__sub_83259060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259064"))) PPC_WEAK_FUNC(sub_83259064);
PPC_FUNC_IMPL(__imp__sub_83259064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259068"))) PPC_WEAK_FUNC(sub_83259068);
PPC_FUNC_IMPL(__imp__sub_83259068) {
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
	// bl 0x83229f50
	ctx.lr = 0x83259080;
	sub_83229F50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8325909c
	if (!ctx.cr0.eq) goto loc_8325909C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,12800
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12800, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x832590a0
	if (!ctx.cr6.eq) goto loc_832590A0;
loc_8325909C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832590A0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_832590B8"))) PPC_WEAK_FUNC(sub_832590B8);
PPC_FUNC_IMPL(__imp__sub_832590B8) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,85
	ctx.r4.s64 = 85;
	// bl 0x8321ce60
	ctx.lr = 0x832590E0;
	sub_8321CE60(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
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

__attribute__((alias("__imp__sub_832590FC"))) PPC_WEAK_FUNC(sub_832590FC);
PPC_FUNC_IMPL(__imp__sub_832590FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259100"))) PPC_WEAK_FUNC(sub_83259100);
PPC_FUNC_IMPL(__imp__sub_83259100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83259108;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x83259134
	if (!ctx.cr6.eq) goto loc_83259134;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x8325917c
	goto loc_8325917C;
loc_83259134:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_83259138:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83259178
	if (ctx.cr6.eq) goto loc_83259178;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83259168
	if (ctx.cr6.eq) goto loc_83259168;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x83259168
	if (!ctx.cr6.eq) goto loc_83259168;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83259170
	if (!ctx.cr0.eq) goto loc_83259170;
loc_83259168:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83259138
	goto loc_83259138;
loc_83259170:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x8325917c
	goto loc_8325917C;
loc_83259178:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8325917C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83259204
	if (ctx.cr6.eq) goto loc_83259204;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832591a4
	if (ctx.cr0.eq) goto loc_832591A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,648(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 648);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8327c448
	ctx.lr = 0x832591A0;
	sub_8327C448(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832591A4:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
loc_832591AC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832591fc
	if (!ctx.cr6.lt) goto loc_832591FC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x832591d4
	if (ctx.cr6.eq) goto loc_832591D4;
	// li r6,0
	ctx.r6.s64 = 0;
loc_832591D4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83258060
	ctx.lr = 0x832591E0;
	sub_83258060(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832591f4
	if (ctx.cr0.eq) goto loc_832591F4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x832591ac
	goto loc_832591AC;
loc_832591F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83259218
	goto loc_83259218;
loc_832591FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83259218
	goto loc_83259218;
loc_83259204:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83258060
	ctx.lr = 0x83259218;
	sub_83258060(ctx, base);
loc_83259218:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83259220"))) PPC_WEAK_FUNC(sub_83259220);
PPC_FUNC_IMPL(__imp__sub_83259220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83259228;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83259260
	if (!ctx.cr6.eq) goto loc_83259260;
loc_83259248:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
loc_83259250:
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x8325930c
	goto loc_8325930C;
loc_83259260:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x83259308
	if (ctx.cr6.eq) goto loc_83259308;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832f7d60
	ctx.lr = 0x83259284;
	sub_832F7D60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259308
	if (ctx.cr0.eq) goto loc_83259308;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83259290:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832592b4
	if (ctx.cr6.eq) goto loc_832592B4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x832592ac
	if (ctx.cr6.eq) goto loc_832592AC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x83259290
	goto loc_83259290;
loc_832592AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832592b8
	goto loc_832592B8;
loc_832592B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832592B8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83259248
	if (!ctx.cr0.eq) goto loc_83259248;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832f7d60
	ctx.lr = 0x832592D4;
	sub_832F7D60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259308
	if (ctx.cr0.eq) goto loc_83259308;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83258428
	ctx.lr = 0x832592F4;
	sub_83258428(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bgt cr6,0x83259308
	if (ctx.cr6.gt) goto loc_83259308;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,0,21,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// b 0x83259250
	goto loc_83259250;
loc_83259308:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8325930C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83259314"))) PPC_WEAK_FUNC(sub_83259314);
PPC_FUNC_IMPL(__imp__sub_83259314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259318"))) PPC_WEAK_FUNC(sub_83259318);
PPC_FUNC_IMPL(__imp__sub_83259318) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r10,r11,7,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832593a4
	if (!ctx.cr0.eq) goto loc_832593A4;
	// rlwinm. r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832593a4
	if (!ctx.cr0.eq) goto loc_832593A4;
	// rlwinm r31,r11,25,25,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x83259354
	if (ctx.cr6.lt) goto loc_83259354;
	// cmplwi cr6,r31,102
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83259358
	if (!ctx.cr6.gt) goto loc_83259358;
loc_83259354:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83259358:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832593a4
	if (ctx.cr0.eq) goto loc_832593A4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8321d798
	ctx.lr = 0x83259368;
	sub_8321D798(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832593a4
	if (!ctx.cr0.eq) goto loc_832593A4;
	// cmplwi cr6,r31,96
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 96, ctx.xer);
	// beq cr6,0x832593a4
	if (ctx.cr6.eq) goto loc_832593A4;
	// cmplwi cr6,r31,97
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 97, ctx.xer);
	// beq cr6,0x83259394
	if (ctx.cr6.eq) goto loc_83259394;
	// cmplwi cr6,r31,99
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 99, ctx.xer);
	// beq cr6,0x83259394
	if (ctx.cr6.eq) goto loc_83259394;
	// cmplwi cr6,r31,100
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 100, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83259398
	if (!ctx.cr6.eq) goto loc_83259398;
loc_83259394:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83259398:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x832593a8
	if (ctx.cr0.eq) goto loc_832593A8;
loc_832593A4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832593A8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_832593C0"))) PPC_WEAK_FUNC(sub_832593C0);
PPC_FUNC_IMPL(__imp__sub_832593C0) {
	PPC_FUNC_PROLOGUE();
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// lwz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r9,r11,9,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8325943c
	if (!ctx.cr0.eq) goto loc_8325943C;
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bne cr6,0x8325943c
	if (!ctx.cr6.eq) goto loc_8325943C;
	// lwz r11,24(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// rlwinm. r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8325943c
	if (!ctx.cr0.eq) goto loc_8325943C;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_832593F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8325942c
	if (ctx.cr6.eq) goto loc_8325942C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83259424
	if (ctx.cr6.eq) goto loc_83259424;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x83259424
	if (!ctx.cr6.eq) goto loc_83259424;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83259430
	if (!ctx.cr0.eq) goto loc_83259430;
loc_83259424:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x832593f4
	goto loc_832593F4;
loc_8325942C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83259430:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83259440
	if (ctx.cr6.eq) goto loc_83259440;
loc_8325943C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83259440:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259448"))) PPC_WEAK_FUNC(sub_83259448);
PPC_FUNC_IMPL(__imp__sub_83259448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x83259450;
	__savegprlr_16(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,348(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r18,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq 0x8325948c
	if (ctx.cr0.eq) goto loc_8325948C;
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// bl 0x83232640
	ctx.lr = 0x83259488;
	sub_83232640(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_8325948C:
	// lwz r20,28(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r19,160(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r26,r30,44
	ctx.r26.s64 = ctx.r30.s64 + 44;
loc_832594AC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83259740
	if (!ctx.cr6.lt) goto loc_83259740;
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832eefb8
	ctx.lr = 0x832594E4;
	sub_832EEFB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83259500
	if (ctx.cr0.eq) goto loc_83259500;
	// rlwinm. r9,r28,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83259500
	if (ctx.cr0.eq) goto loc_83259500;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_83259500:
	// and r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 & ctx.r28.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83259514
	if (ctx.cr0.eq) goto loc_83259514;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
loc_83259514:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83259528
	if (ctx.cr0.eq) goto loc_83259528;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83259528
	if (ctx.cr0.eq) goto loc_83259528;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_83259528:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rldicr r10,r7,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rldimi r7,r8,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// cmpld cr6,r7,r11
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x832595ac
	if (!ctx.cr6.eq) goto loc_832595AC;
	// rlwinm. r11,r9,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259570
	if (ctx.cr0.eq) goto loc_83259570;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83232640
	ctx.lr = 0x83259564;
	sub_83232640(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832595a4
	if (!ctx.cr6.eq) goto loc_832595A4;
loc_83259570:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x83259734
	if (ctx.cr6.eq) goto loc_83259734;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r24,1
	ctx.r24.s64 = 1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x83259728
	goto loc_83259728;
loc_832595A4:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_832595AC:
	// rlwinm. r11,r9,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83259618
	if (!ctx.cr0.eq) goto loc_83259618;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,8(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83259618
	if (!ctx.cr0.eq) goto loc_83259618;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x83259618
	if (!ctx.cr6.lt) goto loc_83259618;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8325973c
	if (!ctx.cr6.eq) goto loc_8325973C;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_832595E4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83259608
	if (ctx.cr6.eq) goto loc_83259608;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83259600
	if (ctx.cr6.eq) goto loc_83259600;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83259618
	if (!ctx.cr6.eq) goto loc_83259618;
loc_83259600:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x832595e4
	goto loc_832595E4;
loc_83259608:
	// lwz r22,88(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// b 0x83259728
	goto loc_83259728;
loc_83259618:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r25,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// rlwinm r7,r11,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm. r6,r11,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// beq 0x83259654
	if (ctx.cr0.eq) goto loc_83259654;
	// rlwinm. r9,r28,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83259654
	if (ctx.cr0.eq) goto loc_83259654;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_83259654:
	// and r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 & ctx.r28.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83259668
	if (ctx.cr0.eq) goto loc_83259668;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
loc_83259668:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8325967c
	if (ctx.cr0.eq) goto loc_8325967C;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8325967c
	if (ctx.cr0.eq) goto loc_8325967C;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_8325967C:
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lwz r8,160(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r8,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r8.u32);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x83259728
	if (!ctx.cr6.eq) goto loc_83259728;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83259728
	if (!ctx.cr6.eq) goto loc_83259728;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83259728
	if (!ctx.cr6.eq) goto loc_83259728;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x832ecf28
	ctx.lr = 0x83259700;
	sub_832ECF28(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x832f8108
	ctx.lr = 0x83259714;
	sub_832F8108(ctx, base);
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x83259728
	if (ctx.cr6.eq) goto loc_83259728;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
loc_83259728:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x832594ac
	goto loc_832594AC;
loc_83259734:
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x83259740
	goto loc_83259740;
loc_8325973C:
	// li r27,0
	ctx.r27.s64 = 0;
loc_83259740:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83259750
	if (!ctx.cr0.eq) goto loc_83259750;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83259790
	if (ctx.cr6.eq) goto loc_83259790;
loc_83259750:
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r11,r31,164
	ctx.r11.s64 = ctx.r31.s64 + 164;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// beq cr6,0x832597ec
	if (ctx.cr6.eq) goto loc_832597EC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8325948c
	if (!ctx.cr6.eq) goto loc_8325948C;
	// b 0x83259798
	goto loc_83259798;
loc_83259790:
	// stw r20,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r20.u32);
	// stw r19,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r19.u32);
loc_83259798:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
loc_832597EC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832597F4"))) PPC_WEAK_FUNC(sub_832597F4);
PPC_FUNC_IMPL(__imp__sub_832597F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832597F8"))) PPC_WEAK_FUNC(sub_832597F8);
PPC_FUNC_IMPL(__imp__sub_832597F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83259800;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// beq cr6,0x8325990c
	if (ctx.cr6.eq) goto loc_8325990C;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_83259824:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83259864
	if (ctx.cr6.eq) goto loc_83259864;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83259854
	if (ctx.cr6.eq) goto loc_83259854;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r8,r8,0,18,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r8,14080
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 14080, ctx.xer);
	// bne cr6,0x83259854
	if (!ctx.cr6.eq) goto loc_83259854;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r8,r8,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8325985c
	if (!ctx.cr0.eq) goto loc_8325985C;
loc_83259854:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83259824
	goto loc_83259824;
loc_8325985C:
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// b 0x83259868
	goto loc_83259868;
loc_83259864:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83259868:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8325990c
	if (ctx.cr6.eq) goto loc_8325990C;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// li r30,1
	ctx.r30.s64 = 1;
loc_83259878:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8325990c
	if (ctx.cr6.eq) goto loc_8325990C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x832598fc
	if (ctx.cr6.eq) goto loc_832598FC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r10,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832598fc
	if (ctx.cr0.eq) goto loc_832598FC;
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x832598fc
	if (ctx.cr6.eq) goto loc_832598FC;
	// addic. r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832598fc
	if (ctx.cr0.eq) goto loc_832598FC;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832598d8
	if (ctx.cr6.eq) goto loc_832598D8;
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_832598BC:
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r7,r30,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r7.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x832598bc
	if (!ctx.cr0.eq) goto loc_832598BC;
loc_832598D8:
	// slw r11,r30,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r27.u8 & 0x3F));
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832598fc
	if (ctx.cr0.eq) goto loc_832598FC;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832f7d60
	ctx.lr = 0x832598F4;
	sub_832F7D60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259904
	if (ctx.cr0.eq) goto loc_83259904;
loc_832598FC:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x83259878
	goto loc_83259878;
loc_83259904:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83259910
	goto loc_83259910;
loc_8325990C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83259910:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83259918"))) PPC_WEAK_FUNC(sub_83259918);
PPC_FUNC_IMPL(__imp__sub_83259918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x83259920;
	__savegprlr_15(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// lwz r22,12(r21)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// clrlwi r24,r11,27
	ctx.r24.u64 = ctx.r11.u32 & 0x1F;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x83259960
	if (ctx.cr6.eq) goto loc_83259960;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83259964
	if (!ctx.cr6.eq) goto loc_83259964;
loc_83259960:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83259964:
	// lwz r27,16(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r20,12(r25)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// clrlwi r18,r11,24
	ctx.r18.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x83253250
	ctx.lr = 0x83259980;
	sub_83253250(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259ca0
	if (ctx.cr0.eq) goto loc_83259CA0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm. r23,r24,0,27,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// beq 0x832599a8
	if (ctx.cr0.eq) goto loc_832599A8;
	// rlwinm. r11,r10,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832599a8
	if (ctx.cr0.eq) goto loc_832599A8;
loc_832599A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832599d0
	goto loc_832599D0;
loc_832599A8:
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832599b8
	if (ctx.cr0.eq) goto loc_832599B8;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832599a0
	if (!ctx.cr0.eq) goto loc_832599A0;
loc_832599B8:
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832599cc
	if (ctx.cr0.eq) goto loc_832599CC;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x832599d0
	if (!ctx.cr0.eq) goto loc_832599D0;
loc_832599CC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832599D0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259ca0
	if (ctx.cr0.eq) goto loc_83259CA0;
	// rlwinm. r9,r24,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// beq 0x832599f0
	if (ctx.cr0.eq) goto loc_832599F0;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832599f0
	if (ctx.cr0.eq) goto loc_832599F0;
	// addi r11,r24,-4
	ctx.r11.s64 = ctx.r24.s64 + -4;
loc_832599F0:
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83259a04
	if (ctx.cr0.eq) goto loc_83259A04;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_83259A04:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83259a18
	if (ctx.cr0.eq) goto loc_83259A18;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83259a18
	if (ctx.cr0.eq) goto loc_83259A18;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_83259A18:
	// or r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83253050
	ctx.lr = 0x83259A28;
	sub_83253050(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259ca0
	if (ctx.cr0.eq) goto loc_83259CA0;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r19,0
	ctx.r19.s64 = 0;
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x83259a50
	if (ctx.cr6.lt) goto loc_83259A50;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x83259a54
	if (!ctx.cr6.gt) goto loc_83259A54;
loc_83259A50:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83259A54:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83259ca8
	if (ctx.cr0.eq) goto loc_83259CA8;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r7,r11,13,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// addi r8,r27,44
	ctx.r8.s64 = ctx.r27.s64 + 44;
loc_83259A78:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x83259af0
	if (!ctx.cr6.lt) goto loc_83259AF0;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x83259a94
	if (!ctx.cr6.eq) goto loc_83259A94;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// b 0x83259ae4
	goto loc_83259AE4;
loc_83259A94:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r9,r9,25,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r9,125
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 125, ctx.xer);
	// beq cr6,0x83259ab4
	if (ctx.cr6.eq) goto loc_83259AB4;
	// cmplwi cr6,r9,124
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 124, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x83259ab8
	if (!ctx.cr6.eq) goto loc_83259AB8;
loc_83259AB4:
	// li r9,1
	ctx.r9.s64 = 1;
loc_83259AB8:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83259ad8
	if (ctx.cr0.eq) goto loc_83259AD8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83259ad0
	if (ctx.cr6.eq) goto loc_83259AD0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x83259ad8
	goto loc_83259AD8;
loc_83259AD0:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_83259AD8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// or r19,r11,r19
	ctx.r19.u64 = ctx.r11.u64 | ctx.r19.u64;
loc_83259AE4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// b 0x83259a78
	goto loc_83259A78;
loc_83259AF0:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x83259b04
	if (!ctx.cr6.eq) goto loc_83259B04;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x83259B04;
	sub_83204D78(ctx, base);
loc_83259B04:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x83259b40
	if (ctx.cr6.eq) goto loc_83259B40;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x83259b40
	if (ctx.cr6.eq) goto loc_83259B40;
	// cmplw cr6,r23,r19
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x83259ca0
	if (!ctx.cr6.eq) goto loc_83259CA0;
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259b40
	if (ctx.cr0.eq) goto loc_83259B40;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83232640
	ctx.lr = 0x83259B2C;
	sub_83232640(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83232640
	ctx.lr = 0x83259B38;
	sub_83232640(ctx, base);
	// cmplw cr6,r25,r3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x83259ca0
	if (!ctx.cr6.eq) goto loc_83259CA0;
loc_83259B40:
	// clrlwi. r10,r18,24
	ctx.r10.u64 = ctx.r18.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83259b84
	if (ctx.cr0.eq) goto loc_83259B84;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83259b84
	if (ctx.cr6.eq) goto loc_83259B84;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83259b60
	if (ctx.cr6.eq) goto loc_83259B60;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x83259b74
	goto loc_83259B74;
loc_83259B60:
	// addi r11,r30,11
	ctx.r11.s64 = ctx.r30.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
loc_83259B74:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83259ca0
	if (!ctx.cr0.eq) goto loc_83259CA0;
loc_83259B84:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83259ca8
	if (ctx.cr6.eq) goto loc_83259CA8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83259ca8
	if (ctx.cr6.eq) goto loc_83259CA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// xor r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r26.u64;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259ca8
	if (ctx.cr0.eq) goto loc_83259CA8;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// rlwinm r6,r11,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r5,r11,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83258128
	ctx.lr = 0x83259BC4;
	sub_83258128(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r6,r11,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r5,r11,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83258128
	ctx.lr = 0x83259BE8;
	sub_83258128(ctx, base);
	// or r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 | ctx.r30.u64;
	// andi. r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 & 5;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x83259ca0
	if (ctx.cr6.eq) goto loc_83259CA0;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x83259ca0
	if (!ctx.cr6.eq) goto loc_83259CA0;
	// rlwinm. r9,r26,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq 0x83259c14
	if (ctx.cr0.eq) goto loc_83259C14;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
loc_83259C14:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83259c28
	if (ctx.cr0.eq) goto loc_83259C28;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83259c28
	if (ctx.cr0.eq) goto loc_83259C28;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_83259C28:
	// lwz r9,8(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// or r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r9,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x83259ca8
	if (!ctx.cr6.eq) goto loc_83259CA8;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// rlwinm r6,r11,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r5,r11,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83258128
	ctx.lr = 0x83259C5C;
	sub_83258128(ctx, base);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm. r10,r10,9,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1C;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83259c98
	if (ctx.cr0.eq) goto loc_83259C98;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83259C78:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x83259c98
	if (!ctx.cr0.eq) goto loc_83259C98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x83259c78
	if (!ctx.cr6.eq) goto loc_83259C78;
loc_83259C98:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83259ca8
	if (ctx.cr0.eq) goto loc_83259CA8;
loc_83259CA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83259cb4
	goto loc_83259CB4;
loc_83259CA8:
	// stw r19,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r19.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r26.u32);
loc_83259CB4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83259CBC"))) PPC_WEAK_FUNC(sub_83259CBC);
PPC_FUNC_IMPL(__imp__sub_83259CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259CC0"))) PPC_WEAK_FUNC(sub_83259CC0);
PPC_FUNC_IMPL(__imp__sub_83259CC0) {
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
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r10,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83259d38
	if (!ctx.cr0.eq) goto loc_83259D38;
	// rlwinm r9,r10,25,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// blt cr6,0x83259cf0
	if (ctx.cr6.lt) goto loc_83259CF0;
	// cmplwi cr6,r9,82
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83259cf4
	if (!ctx.cr6.gt) goto loc_83259CF4;
loc_83259CF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83259CF4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83259d38
	if (!ctx.cr0.eq) goto loc_83259D38;
	// rlwinm. r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83259d38
	if (!ctx.cr0.eq) goto loc_83259D38;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x83259d18
	if (ctx.cr6.lt) goto loc_83259D18;
	// cmplwi cr6,r9,102
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83259d1c
	if (!ctx.cr6.gt) goto loc_83259D1C;
loc_83259D18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83259D1C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259d38
	if (ctx.cr0.eq) goto loc_83259D38;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8321d798
	ctx.lr = 0x83259D2C;
	sub_8321D798(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x83259d3c
	if (ctx.cr0.eq) goto loc_83259D3C;
loc_83259D38:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83259D3C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259D50"))) PPC_WEAK_FUNC(sub_83259D50);
PPC_FUNC_IMPL(__imp__sub_83259D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83259D58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x83259d74
	if (!ctx.cr6.eq) goto loc_83259D74;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83259f90
	goto loc_83259F90;
loc_83259D74:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83259d98
	if (ctx.cr6.eq) goto loc_83259D98;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// clrlwi r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	// clrlwi r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	// b 0x83259f8c
	goto loc_83259F8C;
loc_83259D98:
	// rlwinm r9,r30,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldimi r10,r11,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r29,148(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r11,556(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 556);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x83259df0
	if (!ctx.cr6.eq) goto loc_83259DF0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259f30
	if (ctx.cr0.eq) goto loc_83259F30;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259f30
	if (ctx.cr0.eq) goto loc_83259F30;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x83259f8c
	goto loc_83259F8C;
loc_83259DF0:
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r8,r7,25,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r8,125
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 125, ctx.xer);
	// beq cr6,0x83259e0c
	if (ctx.cr6.eq) goto loc_83259E0C;
	// cmplwi cr6,r8,124
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83259e10
	if (!ctx.cr6.eq) goto loc_83259E10;
loc_83259E0C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83259E10:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259f54
	if (ctx.cr0.eq) goto loc_83259F54;
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r9,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// beq cr6,0x83259e34
	if (ctx.cr6.eq) goto loc_83259E34;
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83259e38
	if (!ctx.cr6.eq) goto loc_83259E38;
loc_83259E34:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83259E38:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259ecc
	if (ctx.cr0.eq) goto loc_83259ECC;
	// cmplwi cr6,r8,124
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 124, ctx.xer);
	// bne cr6,0x83259ed4
	if (!ctx.cr6.eq) goto loc_83259ED4;
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// bne cr6,0x83259ecc
	if (!ctx.cr6.eq) goto loc_83259ECC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x83259E68;
	sub_8321CE60(ctx, base);
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// add r31,r3,r11
	ctx.r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r6,r10,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// rlwinm r5,r10,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// rlwinm r4,r10,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8321ce60
	ctx.lr = 0x83259E88;
	sub_8321CE60(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r28,-8
	ctx.r10.s64 = ctx.r28.s64 + -8;
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// beq 0x83259f30
	if (ctx.cr0.eq) goto loc_83259F30;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259f30
	if (ctx.cr0.eq) goto loc_83259F30;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r11,17
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFF;
	// clrlwi r8,r10,17
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFF;
	// subf. r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83259f90
	if (!ctx.cr0.eq) goto loc_83259F90;
	// rlwinm r10,r10,17,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x3FFF;
	// rlwinm r11,r11,17,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FFF;
	// b 0x83259f8c
	goto loc_83259F8C;
loc_83259ECC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83259f90
	goto loc_83259F90;
loc_83259ED4:
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// bne cr6,0x83259ee4
	if (!ctx.cr6.eq) goto loc_83259EE4;
loc_83259EDC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83259f90
	goto loc_83259F90;
loc_83259EE4:
	// rlwinm r10,r7,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x7;
	// rlwinm r11,r9,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83259efc
	if (ctx.cr6.eq) goto loc_83259EFC;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x83259f90
	goto loc_83259F90;
loc_83259EFC:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83259f30
	if (ctx.cr6.eq) goto loc_83259F30;
	// addi r11,r28,44
	ctx.r11.s64 = ctx.r28.s64 + 44;
	// subf r8,r28,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r28.s64;
loc_83259F10:
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf. r3,r6,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83259f90
	if (!ctx.cr0.eq) goto loc_83259F90;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83259f10
	if (ctx.cr6.lt) goto loc_83259F10;
loc_83259F30:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832f15c8
	ctx.lr = 0x83259F3C;
	sub_832F15C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// b 0x83259f90
	goto loc_83259F90;
loc_83259F54:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x83259f70
	if (ctx.cr6.eq) goto loc_83259F70;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83259f74
	if (!ctx.cr6.eq) goto loc_83259F74;
loc_83259F70:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83259F74:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83259edc
	if (!ctx.cr0.eq) goto loc_83259EDC;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
loc_83259F8C:
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_83259F90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83259F98"))) PPC_WEAK_FUNC(sub_83259F98);
PPC_FUNC_IMPL(__imp__sub_83259F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// rlwinm r11,r6,13,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0xFFFFE000;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r9,0,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFE000;
	// ori r8,r8,16384
	ctx.r8.u64 = ctx.r8.u64 | 16384;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// rlwimi r11,r9,0,19,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFE0001FFF) | (ctx.r11.u64 & 0x1FFFE000);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8325a018
	if (ctx.cr6.eq) goto loc_8325A018;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8325a018
	if (!ctx.cr6.eq) goto loc_8325A018;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8325a018
	if (ctx.cr0.eq) goto loc_8325A018;
	// li r5,49
	ctx.r5.s64 = 49;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8321d6d0
	ctx.lr = 0x8325A008;
	sub_8321D6D0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
loc_8325A018:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A030"))) PPC_WEAK_FUNC(sub_8325A030);
PPC_FUNC_IMPL(__imp__sub_8325A030) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r8,r8,25,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x7F;
	// rlwinm r9,r9,25,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7F;
	// subf. r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8325a060
	if (ctx.cr0.eq) goto loc_8325A060;
loc_8325A058:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
loc_8325A060:
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// subf. r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8325a058
	if (!ctx.cr0.eq) goto loc_8325A058;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8325a088
	if (ctx.cr0.eq) goto loc_8325A088;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8325A088:
	// b 0x83259d50
	sub_83259D50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325A08C"))) PPC_WEAK_FUNC(sub_8325A08C);
PPC_FUNC_IMPL(__imp__sub_8325A08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A090"))) PPC_WEAK_FUNC(sub_8325A090);
PPC_FUNC_IMPL(__imp__sub_8325A090) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A09C"))) PPC_WEAK_FUNC(sub_8325A09C);
PPC_FUNC_IMPL(__imp__sub_8325A09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A0A0"))) PPC_WEAK_FUNC(sub_8325A0A0);
PPC_FUNC_IMPL(__imp__sub_8325A0A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A0AC"))) PPC_WEAK_FUNC(sub_8325A0AC);
PPC_FUNC_IMPL(__imp__sub_8325A0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A0B0"))) PPC_WEAK_FUNC(sub_8325A0B0);
PPC_FUNC_IMPL(__imp__sub_8325A0B0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A0BC"))) PPC_WEAK_FUNC(sub_8325A0BC);
PPC_FUNC_IMPL(__imp__sub_8325A0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A0C0"))) PPC_WEAK_FUNC(sub_8325A0C0);
PPC_FUNC_IMPL(__imp__sub_8325A0C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A0CC"))) PPC_WEAK_FUNC(sub_8325A0CC);
PPC_FUNC_IMPL(__imp__sub_8325A0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A0D0"))) PPC_WEAK_FUNC(sub_8325A0D0);
PPC_FUNC_IMPL(__imp__sub_8325A0D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A0E4"))) PPC_WEAK_FUNC(sub_8325A0E4);
PPC_FUNC_IMPL(__imp__sub_8325A0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A0E8"))) PPC_WEAK_FUNC(sub_8325A0E8);
PPC_FUNC_IMPL(__imp__sub_8325A0E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A0FC"))) PPC_WEAK_FUNC(sub_8325A0FC);
PPC_FUNC_IMPL(__imp__sub_8325A0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A100"))) PPC_WEAK_FUNC(sub_8325A100);
PPC_FUNC_IMPL(__imp__sub_8325A100) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8325a120
	if (ctx.cr6.eq) goto loc_8325A120;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8325a124
	if (!ctx.cr6.eq) goto loc_8325A124;
loc_8325A120:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8325A124:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A12C"))) PPC_WEAK_FUNC(sub_8325A12C);
PPC_FUNC_IMPL(__imp__sub_8325A12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A130"))) PPC_WEAK_FUNC(sub_8325A130);
PPC_FUNC_IMPL(__imp__sub_8325A130) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A148"))) PPC_WEAK_FUNC(sub_8325A148);
PPC_FUNC_IMPL(__imp__sub_8325A148) {
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

__attribute__((alias("__imp__sub_8325A15C"))) PPC_WEAK_FUNC(sub_8325A15C);
PPC_FUNC_IMPL(__imp__sub_8325A15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A160"))) PPC_WEAK_FUNC(sub_8325A160);
PPC_FUNC_IMPL(__imp__sub_8325A160) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
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

__attribute__((alias("__imp__sub_8325A178"))) PPC_WEAK_FUNC(sub_8325A178);
PPC_FUNC_IMPL(__imp__sub_8325A178) {
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

__attribute__((alias("__imp__sub_8325A18C"))) PPC_WEAK_FUNC(sub_8325A18C);
PPC_FUNC_IMPL(__imp__sub_8325A18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A190"))) PPC_WEAK_FUNC(sub_8325A190);
PPC_FUNC_IMPL(__imp__sub_8325A190) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A1B8"))) PPC_WEAK_FUNC(sub_8325A1B8);
PPC_FUNC_IMPL(__imp__sub_8325A1B8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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

__attribute__((alias("__imp__sub_8325A1D0"))) PPC_WEAK_FUNC(sub_8325A1D0);
PPC_FUNC_IMPL(__imp__sub_8325A1D0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A1DC"))) PPC_WEAK_FUNC(sub_8325A1DC);
PPC_FUNC_IMPL(__imp__sub_8325A1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A1E0"))) PPC_WEAK_FUNC(sub_8325A1E0);
PPC_FUNC_IMPL(__imp__sub_8325A1E0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A1EC"))) PPC_WEAK_FUNC(sub_8325A1EC);
PPC_FUNC_IMPL(__imp__sub_8325A1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A1F0"))) PPC_WEAK_FUNC(sub_8325A1F0);
PPC_FUNC_IMPL(__imp__sub_8325A1F0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-12
	ctx.r11.s64 = ctx.r3.s64 + -12;
	// ori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A1FC"))) PPC_WEAK_FUNC(sub_8325A1FC);
PPC_FUNC_IMPL(__imp__sub_8325A1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A200"))) PPC_WEAK_FUNC(sub_8325A200);
PPC_FUNC_IMPL(__imp__sub_8325A200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A204"))) PPC_WEAK_FUNC(sub_8325A204);
PPC_FUNC_IMPL(__imp__sub_8325A204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A208"))) PPC_WEAK_FUNC(sub_8325A208);
PPC_FUNC_IMPL(__imp__sub_8325A208) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A230"))) PPC_WEAK_FUNC(sub_8325A230);
PPC_FUNC_IMPL(__imp__sub_8325A230) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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

__attribute__((alias("__imp__sub_8325A248"))) PPC_WEAK_FUNC(sub_8325A248);
PPC_FUNC_IMPL(__imp__sub_8325A248) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A254"))) PPC_WEAK_FUNC(sub_8325A254);
PPC_FUNC_IMPL(__imp__sub_8325A254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A258"))) PPC_WEAK_FUNC(sub_8325A258);
PPC_FUNC_IMPL(__imp__sub_8325A258) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A264"))) PPC_WEAK_FUNC(sub_8325A264);
PPC_FUNC_IMPL(__imp__sub_8325A264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A268"))) PPC_WEAK_FUNC(sub_8325A268);
PPC_FUNC_IMPL(__imp__sub_8325A268) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A270"))) PPC_WEAK_FUNC(sub_8325A270);
PPC_FUNC_IMPL(__imp__sub_8325A270) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A298"))) PPC_WEAK_FUNC(sub_8325A298);
PPC_FUNC_IMPL(__imp__sub_8325A298) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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

__attribute__((alias("__imp__sub_8325A2B0"))) PPC_WEAK_FUNC(sub_8325A2B0);
PPC_FUNC_IMPL(__imp__sub_8325A2B0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A2D8"))) PPC_WEAK_FUNC(sub_8325A2D8);
PPC_FUNC_IMPL(__imp__sub_8325A2D8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A300"))) PPC_WEAK_FUNC(sub_8325A300);
PPC_FUNC_IMPL(__imp__sub_8325A300) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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

__attribute__((alias("__imp__sub_8325A318"))) PPC_WEAK_FUNC(sub_8325A318);
PPC_FUNC_IMPL(__imp__sub_8325A318) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A324"))) PPC_WEAK_FUNC(sub_8325A324);
PPC_FUNC_IMPL(__imp__sub_8325A324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A328"))) PPC_WEAK_FUNC(sub_8325A328);
PPC_FUNC_IMPL(__imp__sub_8325A328) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A334"))) PPC_WEAK_FUNC(sub_8325A334);
PPC_FUNC_IMPL(__imp__sub_8325A334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A338"))) PPC_WEAK_FUNC(sub_8325A338);
PPC_FUNC_IMPL(__imp__sub_8325A338) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A340"))) PPC_WEAK_FUNC(sub_8325A340);
PPC_FUNC_IMPL(__imp__sub_8325A340) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A34C"))) PPC_WEAK_FUNC(sub_8325A34C);
PPC_FUNC_IMPL(__imp__sub_8325A34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A350"))) PPC_WEAK_FUNC(sub_8325A350);
PPC_FUNC_IMPL(__imp__sub_8325A350) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A35C"))) PPC_WEAK_FUNC(sub_8325A35C);
PPC_FUNC_IMPL(__imp__sub_8325A35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A360"))) PPC_WEAK_FUNC(sub_8325A360);
PPC_FUNC_IMPL(__imp__sub_8325A360) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A36C"))) PPC_WEAK_FUNC(sub_8325A36C);
PPC_FUNC_IMPL(__imp__sub_8325A36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A370"))) PPC_WEAK_FUNC(sub_8325A370);
PPC_FUNC_IMPL(__imp__sub_8325A370) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A378"))) PPC_WEAK_FUNC(sub_8325A378);
PPC_FUNC_IMPL(__imp__sub_8325A378) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

