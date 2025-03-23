#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8331C930"))) PPC_WEAK_FUNC(sub_8331C930);
PPC_FUNC_IMPL(__imp__sub_8331C930) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// lbz r11,3(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331C954"))) PPC_WEAK_FUNC(sub_8331C954);
PPC_FUNC_IMPL(__imp__sub_8331C954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331C958"))) PPC_WEAK_FUNC(sub_8331C958);
PPC_FUNC_IMPL(__imp__sub_8331C958) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331c970
	if (!ctx.cr6.lt) goto loc_8331C970;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8331C970:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331c97c
	if (!ctx.cr0.eq) goto loc_8331C97C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331C97C:
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// beq cr6,0x8331c990
	if (ctx.cr6.eq) goto loc_8331C990;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8331c994
	if (!ctx.cr6.eq) goto loc_8331C994;
loc_8331C990:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8331C994:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331C99C"))) PPC_WEAK_FUNC(sub_8331C99C);
PPC_FUNC_IMPL(__imp__sub_8331C99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331C9A0"))) PPC_WEAK_FUNC(sub_8331C9A0);
PPC_FUNC_IMPL(__imp__sub_8331C9A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331c9b8
	if (!ctx.cr6.lt) goto loc_8331C9B8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8331C9B8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331c9c4
	if (!ctx.cr0.eq) goto loc_8331C9C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331C9C4:
	// addi r11,r11,-39
	ctx.r11.s64 = ctx.r11.s64 + -39;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331C9D4"))) PPC_WEAK_FUNC(sub_8331C9D4);
PPC_FUNC_IMPL(__imp__sub_8331C9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331C9D8"))) PPC_WEAK_FUNC(sub_8331C9D8);
PPC_FUNC_IMPL(__imp__sub_8331C9D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331c9f0
	if (!ctx.cr6.lt) goto loc_8331C9F0;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8331C9F0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331c9fc
	if (!ctx.cr0.eq) goto loc_8331C9FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331C9FC:
	// addi r11,r11,-41
	ctx.r11.s64 = ctx.r11.s64 + -41;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331CA0C"))) PPC_WEAK_FUNC(sub_8331CA0C);
PPC_FUNC_IMPL(__imp__sub_8331CA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331CA10"))) PPC_WEAK_FUNC(sub_8331CA10);
PPC_FUNC_IMPL(__imp__sub_8331CA10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331ca28
	if (!ctx.cr6.lt) goto loc_8331CA28;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8331CA28:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331ca34
	if (!ctx.cr0.eq) goto loc_8331CA34;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331CA34:
	// addi r11,r11,-29
	ctx.r11.s64 = ctx.r11.s64 + -29;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331CA44"))) PPC_WEAK_FUNC(sub_8331CA44);
PPC_FUNC_IMPL(__imp__sub_8331CA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331CA48"))) PPC_WEAK_FUNC(sub_8331CA48);
PPC_FUNC_IMPL(__imp__sub_8331CA48) {
	PPC_FUNC_PROLOGUE();
loc_8331CA48:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x8331ca60
	if (ctx.cr6.eq) goto loc_8331CA60;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8331CA60:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x8331ca48
	goto loc_8331CA48;
}

__attribute__((alias("__imp__sub_8331CA84"))) PPC_WEAK_FUNC(sub_8331CA84);
PPC_FUNC_IMPL(__imp__sub_8331CA84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331CA88"))) PPC_WEAK_FUNC(sub_8331CA88);
PPC_FUNC_IMPL(__imp__sub_8331CA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8331CA90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r29,r10,16
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r29,100
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 100, ctx.xer);
	// bge cr6,0x8331cab4
	if (!ctx.cr6.lt) goto loc_8331CAB4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8331CAB4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331cac0
	if (!ctx.cr0.eq) goto loc_8331CAC0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8331CAC0:
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// beq cr6,0x8331cc20
	if (ctx.cr6.eq) goto loc_8331CC20;
	// cmpwi cr6,r29,79
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 79, ctx.xer);
	// beq cr6,0x8331cbd0
	if (ctx.cr6.eq) goto loc_8331CBD0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83347a48
	ctx.lr = 0x8331CAE4;
	sub_83347A48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8331cb38
	if (!ctx.cr0.gt) goto loc_8331CB38;
loc_8331CAEC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8331cb0c
	if (ctx.cr0.eq) goto loc_8331CB0C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_8331CB0C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8331cb24
	if (ctx.cr0.eq) goto loc_8331CB24;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8331CB24:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x83347a48
	ctx.lr = 0x8331CB30;
	sub_83347A48(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8331caec
	if (ctx.cr6.lt) goto loc_8331CAEC;
loc_8331CB38:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83347ac8
	ctx.lr = 0x8331CB44;
	sub_83347AC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8331cb98
	if (!ctx.cr0.gt) goto loc_8331CB98;
loc_8331CB4C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8331cb6c
	if (ctx.cr0.eq) goto loc_8331CB6C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_8331CB6C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8331cb84
	if (ctx.cr0.eq) goto loc_8331CB84;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8331CB84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x83347ac8
	ctx.lr = 0x8331CB90;
	sub_83347AC8(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8331cb4c
	if (ctx.cr6.lt) goto loc_8331CB4C;
loc_8331CB98:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83347b58
	ctx.lr = 0x8331CBA4;
	sub_83347B58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8331cc6c
	if (!ctx.cr0.gt) goto loc_8331CC6C;
loc_8331CBAC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x83347b58
	ctx.lr = 0x8331CBC4;
	sub_83347B58(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8331cbac
	if (ctx.cr6.lt) goto loc_8331CBAC;
	// b 0x8331cc6c
	goto loc_8331CC6C;
loc_8331CBD0:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,79
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 79, ctx.xer);
	// beq cr6,0x8331cbe4
	if (ctx.cr6.eq) goto loc_8331CBE4;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8331CBE4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lhz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8331cc6c
	if (ctx.cr0.eq) goto loc_8331CC6C;
loc_8331CC04:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lhz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8331cc04
	if (ctx.cr6.lt) goto loc_8331CC04;
	// b 0x8331cc6c
	goto loc_8331CC6C;
loc_8331CC20:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// beq cr6,0x8331cc34
	if (ctx.cr6.eq) goto loc_8331CC34;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8331CC34:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lhz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8331cc6c
	if (ctx.cr0.eq) goto loc_8331CC6C;
loc_8331CC54:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lhz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8331cc54
	if (ctx.cr6.lt) goto loc_8331CC54;
loc_8331CC6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331CC74"))) PPC_WEAK_FUNC(sub_8331CC74);
PPC_FUNC_IMPL(__imp__sub_8331CC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331CC78"))) PPC_WEAK_FUNC(sub_8331CC78);
PPC_FUNC_IMPL(__imp__sub_8331CC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8331CC80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x832e7248
	ctx.lr = 0x8331CCA0;
	sub_832E7248(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stb r29,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r29.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331CCC4"))) PPC_WEAK_FUNC(sub_8331CCC4);
PPC_FUNC_IMPL(__imp__sub_8331CCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331CCC8"))) PPC_WEAK_FUNC(sub_8331CCC8);
PPC_FUNC_IMPL(__imp__sub_8331CCC8) {
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
	// bl 0x83314848
	ctx.lr = 0x8331CCE0;
	sub_83314848(ctx, base);
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

__attribute__((alias("__imp__sub_8331CCF8"))) PPC_WEAK_FUNC(sub_8331CCF8);
PPC_FUNC_IMPL(__imp__sub_8331CCF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x832e7378
	sub_832E7378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331CD04"))) PPC_WEAK_FUNC(sub_8331CD04);
PPC_FUNC_IMPL(__imp__sub_8331CD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331CD08"))) PPC_WEAK_FUNC(sub_8331CD08);
PPC_FUNC_IMPL(__imp__sub_8331CD08) {
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
	// bl 0x83314848
	ctx.lr = 0x8331CD20;
	sub_83314848(ctx, base);
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

__attribute__((alias("__imp__sub_8331CD38"))) PPC_WEAK_FUNC(sub_8331CD38);
PPC_FUNC_IMPL(__imp__sub_8331CD38) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x832e7378
	sub_832E7378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331CD44"))) PPC_WEAK_FUNC(sub_8331CD44);
PPC_FUNC_IMPL(__imp__sub_8331CD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331CD48"))) PPC_WEAK_FUNC(sub_8331CD48);
PPC_FUNC_IMPL(__imp__sub_8331CD48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331CD50"))) PPC_WEAK_FUNC(sub_8331CD50);
PPC_FUNC_IMPL(__imp__sub_8331CD50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331CD58"))) PPC_WEAK_FUNC(sub_8331CD58);
PPC_FUNC_IMPL(__imp__sub_8331CD58) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331CD74"))) PPC_WEAK_FUNC(sub_8331CD74);
PPC_FUNC_IMPL(__imp__sub_8331CD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331CD78"))) PPC_WEAK_FUNC(sub_8331CD78);
PPC_FUNC_IMPL(__imp__sub_8331CD78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331cd90
	if (!ctx.cr6.lt) goto loc_8331CD90;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8331CD90:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331cd9c
	if (!ctx.cr0.eq) goto loc_8331CD9C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331CD9C:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8331cdb0
	if (ctx.cr6.eq) goto loc_8331CDB0;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8331cdb4
	if (!ctx.cr6.eq) goto loc_8331CDB4;
loc_8331CDB0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8331CDB4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331CDBC"))) PPC_WEAK_FUNC(sub_8331CDBC);
PPC_FUNC_IMPL(__imp__sub_8331CDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331CDC0"))) PPC_WEAK_FUNC(sub_8331CDC0);
PPC_FUNC_IMPL(__imp__sub_8331CDC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331cdd8
	if (!ctx.cr6.lt) goto loc_8331CDD8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8331CDD8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331cde4
	if (!ctx.cr0.eq) goto loc_8331CDE4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331CDE4:
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x8331cdf8
	if (ctx.cr6.eq) goto loc_8331CDF8;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8331cdfc
	if (!ctx.cr6.eq) goto loc_8331CDFC;
loc_8331CDF8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8331CDFC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331CE04"))) PPC_WEAK_FUNC(sub_8331CE04);
PPC_FUNC_IMPL(__imp__sub_8331CE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331CE08"))) PPC_WEAK_FUNC(sub_8331CE08);
PPC_FUNC_IMPL(__imp__sub_8331CE08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331ce20
	if (!ctx.cr6.lt) goto loc_8331CE20;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8331CE20:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331ce2c
	if (!ctx.cr0.eq) goto loc_8331CE2C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331CE2C:
	// addi r11,r11,-50
	ctx.r11.s64 = ctx.r11.s64 + -50;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331CE3C"))) PPC_WEAK_FUNC(sub_8331CE3C);
PPC_FUNC_IMPL(__imp__sub_8331CE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331CE40"))) PPC_WEAK_FUNC(sub_8331CE40);
PPC_FUNC_IMPL(__imp__sub_8331CE40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331ce58
	if (!ctx.cr6.lt) goto loc_8331CE58;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8331CE58:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331ce64
	if (!ctx.cr0.eq) goto loc_8331CE64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331CE64:
	// addi r11,r11,-132
	ctx.r11.s64 = ctx.r11.s64 + -132;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331CE74"))) PPC_WEAK_FUNC(sub_8331CE74);
PPC_FUNC_IMPL(__imp__sub_8331CE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331CE78"))) PPC_WEAK_FUNC(sub_8331CE78);
PPC_FUNC_IMPL(__imp__sub_8331CE78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331ce90
	if (!ctx.cr6.lt) goto loc_8331CE90;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8331CE90:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331ce9c
	if (!ctx.cr0.eq) goto loc_8331CE9C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331CE9C:
	// addi r11,r11,-83
	ctx.r11.s64 = ctx.r11.s64 + -83;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331CEAC"))) PPC_WEAK_FUNC(sub_8331CEAC);
PPC_FUNC_IMPL(__imp__sub_8331CEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331CEB0"))) PPC_WEAK_FUNC(sub_8331CEB0);
PPC_FUNC_IMPL(__imp__sub_8331CEB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331cec8
	if (!ctx.cr6.lt) goto loc_8331CEC8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8331CEC8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331ced4
	if (!ctx.cr0.eq) goto loc_8331CED4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331CED4:
	// addi r11,r11,-43
	ctx.r11.s64 = ctx.r11.s64 + -43;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331CEE4"))) PPC_WEAK_FUNC(sub_8331CEE4);
PPC_FUNC_IMPL(__imp__sub_8331CEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331CEE8"))) PPC_WEAK_FUNC(sub_8331CEE8);
PPC_FUNC_IMPL(__imp__sub_8331CEE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331cf00
	if (!ctx.cr6.lt) goto loc_8331CF00;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8331CF00:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331cf0c
	if (!ctx.cr0.eq) goto loc_8331CF0C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331CF0C:
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// beq cr6,0x8331cf40
	if (ctx.cr6.eq) goto loc_8331CF40;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x8331cf40
	if (ctx.cr6.eq) goto loc_8331CF40;
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// beq cr6,0x8331cf40
	if (ctx.cr6.eq) goto loc_8331CF40;
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// beq cr6,0x8331cf40
	if (ctx.cr6.eq) goto loc_8331CF40;
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// beq cr6,0x8331cf40
	if (ctx.cr6.eq) goto loc_8331CF40;
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8331cf44
	if (!ctx.cr6.eq) goto loc_8331CF44;
loc_8331CF40:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8331CF44:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331CF4C"))) PPC_WEAK_FUNC(sub_8331CF4C);
PPC_FUNC_IMPL(__imp__sub_8331CF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331CF50"))) PPC_WEAK_FUNC(sub_8331CF50);
PPC_FUNC_IMPL(__imp__sub_8331CF50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331cf68
	if (!ctx.cr6.lt) goto loc_8331CF68;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8331CF68:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331cf74
	if (!ctx.cr0.eq) goto loc_8331CF74;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331CF74:
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// beq cr6,0x8331cfa0
	if (ctx.cr6.eq) goto loc_8331CFA0;
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// beq cr6,0x8331cfa0
	if (ctx.cr6.eq) goto loc_8331CFA0;
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// beq cr6,0x8331cfa0
	if (ctx.cr6.eq) goto loc_8331CFA0;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// beq cr6,0x8331cfa0
	if (ctx.cr6.eq) goto loc_8331CFA0;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8331cfa4
	if (!ctx.cr6.eq) goto loc_8331CFA4;
loc_8331CFA0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8331CFA4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331CFAC"))) PPC_WEAK_FUNC(sub_8331CFAC);
PPC_FUNC_IMPL(__imp__sub_8331CFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331CFB0"))) PPC_WEAK_FUNC(sub_8331CFB0);
PPC_FUNC_IMPL(__imp__sub_8331CFB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331cfc8
	if (!ctx.cr6.lt) goto loc_8331CFC8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8331CFC8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331cfd4
	if (!ctx.cr0.eq) goto loc_8331CFD4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331CFD4:
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331CFE4"))) PPC_WEAK_FUNC(sub_8331CFE4);
PPC_FUNC_IMPL(__imp__sub_8331CFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331CFE8"))) PPC_WEAK_FUNC(sub_8331CFE8);
PPC_FUNC_IMPL(__imp__sub_8331CFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8331CFF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// lwz r28,1456(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832e7248
	ctx.lr = 0x8331D030;
	sub_832E7248(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x8331d050
	if (ctx.cr0.eq) goto loc_8331D050;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x83314848
	ctx.lr = 0x8331D04C;
	sub_83314848(ctx, base);
	// b 0x8331d054
	goto loc_8331D054;
loc_8331D050:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8331D054:
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,1456(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832e7248
	ctx.lr = 0x8331D06C;
	sub_832E7248(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x8331d08c
	if (ctx.cr0.eq) goto loc_8331D08C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x83314848
	ctx.lr = 0x8331D088;
	sub_83314848(ctx, base);
	// b 0x8331d090
	goto loc_8331D090;
loc_8331D08C:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8331D090:
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,1456(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832e7248
	ctx.lr = 0x8331D0A8;
	sub_832E7248(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x8331d0cc
	if (ctx.cr0.eq) goto loc_8331D0CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x83314848
	ctx.lr = 0x8331D0C4;
	sub_83314848(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8331d0d0
	goto loc_8331D0D0;
loc_8331D0CC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8331D0D0:
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x832e7248
	ctx.lr = 0x8331D0E8;
	sub_832E7248(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r28,r10,-12392
	ctx.r28.s64 = ctx.r10.s64 + -12392;
	// addi r27,r9,-31840
	ctx.r27.s64 = ctx.r9.s64 + -31840;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r30,4(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4, ctx.r30.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x8331d144
	if (ctx.cr6.eq) goto loc_8331D144;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x8331d15c
	goto loc_8331D15C;
loc_8331D144:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,132
	ctx.r7.s64 = 132;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8331D15C;
	sub_8320CF10(ctx, base);
loc_8331D15C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8331d174
	if (ctx.cr0.eq) goto loc_8331D174;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8331d178
	if (!ctx.cr6.eq) goto loc_8331D178;
loc_8331D174:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8331D178:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8331d1d4
	if (ctx.cr6.eq) goto loc_8331D1D4;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8331d19c
	if (!ctx.cr0.eq) goto loc_8331D19C;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8331d1b8
	if (ctx.cr6.eq) goto loc_8331D1B8;
loc_8331D19C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-31752
	ctx.r5.s64 = ctx.r11.s64 + -31752;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,139
	ctx.r7.s64 = 139;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8331D1B8;
	sub_8320CF10(ctx, base);
loc_8331D1B8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8331c788
	ctx.lr = 0x8331D1C4;
	sub_8331C788(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x8331d1ec
	goto loc_8331D1EC;
loc_8331D1D4:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,144
	ctx.r7.s64 = 144;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8331D1EC;
	sub_8320CF10(ctx, base);
loc_8331D1EC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331D200"))) PPC_WEAK_FUNC(sub_8331D200);
PPC_FUNC_IMPL(__imp__sub_8331D200) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832e7378
	ctx.lr = 0x8331D228;
	sub_832E7378(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8331d23c
	if (ctx.cr0.eq) goto loc_8331D23C;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x832e7378
	ctx.lr = 0x8331D23C;
	sub_832E7378(ctx, base);
loc_8331D23C:
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

__attribute__((alias("__imp__sub_8331D258"))) PPC_WEAK_FUNC(sub_8331D258);
PPC_FUNC_IMPL(__imp__sub_8331D258) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832e7378
	ctx.lr = 0x8331D280;
	sub_832E7378(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8331d294
	if (ctx.cr0.eq) goto loc_8331D294;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x832e7378
	ctx.lr = 0x8331D294;
	sub_832E7378(ctx, base);
loc_8331D294:
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

__attribute__((alias("__imp__sub_8331D2B0"))) PPC_WEAK_FUNC(sub_8331D2B0);
PPC_FUNC_IMPL(__imp__sub_8331D2B0) {
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

__attribute__((alias("__imp__sub_8331D2C0"))) PPC_WEAK_FUNC(sub_8331D2C0);
PPC_FUNC_IMPL(__imp__sub_8331D2C0) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x8331D2DC;
	sub_8333CEF8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8331D2F4"))) PPC_WEAK_FUNC(sub_8331D2F4);
PPC_FUNC_IMPL(__imp__sub_8331D2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331D2F8"))) PPC_WEAK_FUNC(sub_8331D2F8);
PPC_FUNC_IMPL(__imp__sub_8331D2F8) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8331d328
	if (!ctx.cr6.lt) goto loc_8331D328;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8331d32c
	goto loc_8331D32C;
loc_8331D328:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331D32C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x8333cd18
	ctx.lr = 0x8331D33C;
	sub_8333CD18(ctx, base);
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

__attribute__((alias("__imp__sub_8331D354"))) PPC_WEAK_FUNC(sub_8331D354);
PPC_FUNC_IMPL(__imp__sub_8331D354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331D358"))) PPC_WEAK_FUNC(sub_8331D358);
PPC_FUNC_IMPL(__imp__sub_8331D358) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8331d378
	if (!ctx.cr6.lt) goto loc_8331D378;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_8331D378:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331D380"))) PPC_WEAK_FUNC(sub_8331D380);
PPC_FUNC_IMPL(__imp__sub_8331D380) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x8331D39C;
	sub_8333CEF8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8331D3B4"))) PPC_WEAK_FUNC(sub_8331D3B4);
PPC_FUNC_IMPL(__imp__sub_8331D3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331D3B8"))) PPC_WEAK_FUNC(sub_8331D3B8);
PPC_FUNC_IMPL(__imp__sub_8331D3B8) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8331d3e8
	if (!ctx.cr6.lt) goto loc_8331D3E8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8331d3ec
	goto loc_8331D3EC;
loc_8331D3E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331D3EC:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x8333cd18
	ctx.lr = 0x8331D3FC;
	sub_8333CD18(ctx, base);
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

__attribute__((alias("__imp__sub_8331D414"))) PPC_WEAK_FUNC(sub_8331D414);
PPC_FUNC_IMPL(__imp__sub_8331D414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331D418"))) PPC_WEAK_FUNC(sub_8331D418);
PPC_FUNC_IMPL(__imp__sub_8331D418) {
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
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8331d440
	if (ctx.cr6.eq) goto loc_8331D440;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8331d200
	ctx.lr = 0x8331D440;
	sub_8331D200(ctx, base);
loc_8331D440:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8331d454
	if (ctx.cr6.eq) goto loc_8331D454;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8331d258
	ctx.lr = 0x8331D454;
	sub_8331D258(ctx, base);
loc_8331D454:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8331d468
	if (ctx.cr6.eq) goto loc_8331D468;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8331d258
	ctx.lr = 0x8331D468;
	sub_8331D258(ctx, base);
loc_8331D468:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-31668
	ctx.r4.s64 = ctx.r11.s64 + -31668;
	// bl 0x832e7968
	ctx.lr = 0x8331D47C;
	sub_832E7968(ctx, base);
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

__attribute__((alias("__imp__sub_8331D490"))) PPC_WEAK_FUNC(sub_8331D490);
PPC_FUNC_IMPL(__imp__sub_8331D490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x8331D498;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r20,1
	ctx.r20.s64 = 1;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331d4c4
	if (!ctx.cr6.lt) goto loc_8331D4C4;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331D4C4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331d4d0
	if (!ctx.cr0.eq) goto loc_8331D4D0;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8331D4D0:
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// stw r10,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r10.u32);
	// addi r10,r8,-31864
	ctx.r10.s64 = ctx.r8.s64 + -31864;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// slw r11,r20,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8331d50c
	if (!ctx.cr0.eq) goto loc_8331D50C;
loc_8331D504:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8331e498
	goto loc_8331E498;
loc_8331D50C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x8331d524
	if (ctx.cr6.eq) goto loc_8331D524;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8331D524:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8331d548
	if (ctx.cr6.eq) goto loc_8331D548;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x8331d50c
	goto loc_8331D50C;
loc_8331D548:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// li r21,-1
	ctx.r21.s64 = -1;
	// addi r16,r11,-12392
	ctx.r16.s64 = ctx.r11.s64 + -12392;
	// addi r15,r10,-31592
	ctx.r15.s64 = ctx.r10.s64 + -31592;
	// addi r19,r9,-21168
	ctx.r19.s64 = ctx.r9.s64 + -21168;
	// addi r14,r8,-31608
	ctx.r14.s64 = ctx.r8.s64 + -31608;
	// addi r18,r7,-31840
	ctx.r18.s64 = ctx.r7.s64 + -31840;
loc_8331D578:
	// lwz r29,20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331d594
	if (!ctx.cr6.lt) goto loc_8331D594;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331D594:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x8331d5a4
	if (!ctx.cr0.eq) goto loc_8331D5A4;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8331D5A4:
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x8331d5b8
	if (ctx.cr6.eq) goto loc_8331D5B8;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bne cr6,0x8331d5bc
	if (!ctx.cr6.eq) goto loc_8331D5BC;
loc_8331D5B8:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331D5BC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331d70c
	if (!ctx.cr0.eq) goto loc_8331D70C;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x8331d5d4
	if (!ctx.cr6.lt) goto loc_8331D5D4;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331D5D4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x8331d5e4
	if (!ctx.cr0.eq) goto loc_8331D5E4;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8331D5E4:
	// cmpwi cr6,r10,83
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 83, ctx.xer);
	// beq cr6,0x8331d70c
	if (ctx.cr6.eq) goto loc_8331D70C;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x8331d5fc
	if (!ctx.cr6.lt) goto loc_8331D5FC;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331D5FC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x8331d60c
	if (!ctx.cr0.eq) goto loc_8331D60C;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8331D60C:
	// cmpwi cr6,r10,113
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 113, ctx.xer);
	// beq cr6,0x8331d620
	if (ctx.cr6.eq) goto loc_8331D620;
	// cmpwi cr6,r10,114
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 114, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bne cr6,0x8331d624
	if (!ctx.cr6.eq) goto loc_8331D624;
loc_8331D620:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331D624:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331d70c
	if (!ctx.cr0.eq) goto loc_8331D70C;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x8331d63c
	if (!ctx.cr6.lt) goto loc_8331D63C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331D63C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x8331d64c
	if (!ctx.cr0.eq) goto loc_8331D64C;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8331D64C:
	// cmpwi cr6,r10,132
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 132, ctx.xer);
	// beq cr6,0x8331d70c
	if (ctx.cr6.eq) goto loc_8331D70C;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x8331d664
	if (!ctx.cr6.lt) goto loc_8331D664;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331D664:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x8331d674
	if (!ctx.cr0.eq) goto loc_8331D674;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8331D674:
	// cmpwi cr6,r10,52
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 52, ctx.xer);
	// beq cr6,0x8331d688
	if (ctx.cr6.eq) goto loc_8331D688;
	// cmpwi cr6,r10,53
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 53, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bne cr6,0x8331d68c
	if (!ctx.cr6.eq) goto loc_8331D68C;
loc_8331D688:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331D68C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331d70c
	if (!ctx.cr0.eq) goto loc_8331D70C;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x8331d6a4
	if (!ctx.cr6.lt) goto loc_8331D6A4;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331D6A4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x8331d6b4
	if (!ctx.cr0.eq) goto loc_8331D6B4;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8331D6B4:
	// cmpwi cr6,r10,39
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 39, ctx.xer);
	// beq cr6,0x8331d70c
	if (ctx.cr6.eq) goto loc_8331D70C;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x8331d6cc
	if (!ctx.cr6.lt) goto loc_8331D6CC;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331D6CC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x8331d6dc
	if (!ctx.cr0.eq) goto loc_8331D6DC;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8331D6DC:
	// cmpwi cr6,r10,41
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 41, ctx.xer);
	// beq cr6,0x8331d70c
	if (ctx.cr6.eq) goto loc_8331D70C;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x8331d6f4
	if (!ctx.cr6.lt) goto loc_8331D6F4;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331D6F4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x8331d704
	if (!ctx.cr0.eq) goto loc_8331D704;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8331D704:
	// cmpwi cr6,r10,29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 29, ctx.xer);
	// bne cr6,0x8331e3c8
	if (!ctx.cr6.eq) goto loc_8331E3C8;
loc_8331D70C:
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x8331d720
	if (!ctx.cr6.lt) goto loc_8331D720;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331D720:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331d72c
	if (!ctx.cr0.eq) goto loc_8331D72C;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8331D72C:
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// bgt cr6,0x8331dc50
	if (ctx.cr6.gt) goto loc_8331DC50;
	// beq cr6,0x8331e370
	if (ctx.cr6.eq) goto loc_8331E370;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8331db80
	if (ctx.cr6.eq) goto loc_8331DB80;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8331d8ec
	if (ctx.cr6.eq) goto loc_8331D8EC;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// beq cr6,0x8331d8c0
	if (ctx.cr6.eq) goto loc_8331D8C0;
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// beq cr6,0x8331d7bc
	if (ctx.cr6.eq) goto loc_8331D7BC;
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// beq cr6,0x8331d7a8
	if (ctx.cr6.eq) goto loc_8331D7A8;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bne cr6,0x8331e384
	if (!ctx.cr6.eq) goto loc_8331E384;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
loc_8331D76C:
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331d78c
	if (!ctx.cr6.lt) goto loc_8331D78C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331D78C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331d798
	if (!ctx.cr0.eq) goto loc_8331D798;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8331D798:
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// beq cr6,0x8331e188
	if (ctx.cr6.eq) goto loc_8331E188;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// b 0x8331d76c
	goto loc_8331D76C;
loc_8331D7A8:
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x8331d3b8
	ctx.lr = 0x8331D7B0;
	sub_8331D3B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8331e380
	if (ctx.cr0.eq) goto loc_8331E380;
	// b 0x8331d8e0
	goto loc_8331D8E0;
loc_8331D7BC:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8331d7e0
	if (!ctx.cr6.lt) goto loc_8331D7E0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8331d7e4
	goto loc_8331D7E4;
loc_8331D7E0:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8331D7E4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8331e380
	if (ctx.cr6.eq) goto loc_8331E380;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8331d8e0
	if (!ctx.cr6.eq) goto loc_8331D8E0;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_8331D7FC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8331d834
	if (!ctx.cr6.eq) goto loc_8331D834;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331d820
	if (!ctx.cr6.lt) goto loc_8331D820;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331D820:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331d82c
	if (!ctx.cr0.eq) goto loc_8331D82C;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8331D82C:
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// beq cr6,0x8331e384
	if (ctx.cr6.eq) goto loc_8331E384;
loc_8331D834:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x8331d850
	if (!ctx.cr6.lt) goto loc_8331D850;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8331D850:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x8331d860
	if (!ctx.cr0.eq) goto loc_8331D860;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8331D860:
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// beq cr6,0x8331d874
	if (ctx.cr6.eq) goto loc_8331D874;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bne cr6,0x8331d878
	if (!ctx.cr6.eq) goto loc_8331D878;
loc_8331D874:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8331D878:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8331d888
	if (ctx.cr0.eq) goto loc_8331D888;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x8331d8b4
	goto loc_8331D8B4;
loc_8331D888:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bge cr6,0x8331d898
	if (!ctx.cr6.lt) goto loc_8331D898;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8331D898:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x8331d8a8
	if (!ctx.cr0.eq) goto loc_8331D8A8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8331D8A8:
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// bne cr6,0x8331d8b4
	if (!ctx.cr6.eq) goto loc_8331D8B4;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_8331D8B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331ca88
	ctx.lr = 0x8331D8BC;
	sub_8331CA88(ctx, base);
	// b 0x8331d7fc
	goto loc_8331D7FC;
loc_8331D8C0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x8331cc78
	ctx.lr = 0x8331D8E0;
	sub_8331CC78(ctx, base);
loc_8331D8E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331ca88
	ctx.lr = 0x8331D8E8;
	sub_8331CA88(ctx, base);
	// b 0x8331e384
	goto loc_8331E384;
loc_8331D8EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,1360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8331e424
	if (ctx.cr6.gt) goto loc_8331E424;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8331D918:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8331da40
	if (ctx.cr6.eq) goto loc_8331DA40;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8331d93c
	if (ctx.cr6.eq) goto loc_8331D93C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8331d918
	if (!ctx.cr6.eq) goto loc_8331D918;
loc_8331D93C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8331D940:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8331D950:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8331da48
	if (ctx.cr6.eq) goto loc_8331DA48;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8331d974
	if (ctx.cr6.eq) goto loc_8331D974;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8331d950
	if (!ctx.cr6.eq) goto loc_8331D950;
loc_8331D974:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8331D978:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8331da50
	if (ctx.cr6.eq) goto loc_8331DA50;
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8331d8e0
	if (ctx.cr0.eq) goto loc_8331D8E0;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x8331D998;
	sub_8333CEF8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r3,1456(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1456);
	// bl 0x832e7248
	ctx.lr = 0x8331D9B8;
	sub_832E7248(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8333cef8
	ctx.lr = 0x8331D9CC;
	sub_8333CEF8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stb r23,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r23.u8);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stb r23,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r23.u8);
	// stb r23,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r23.u8);
	// stb r23,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r23.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r9,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r9.u8);
	// lbz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r9,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r9.u8);
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r23,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r23.u8);
	// stb r23,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r23.u8);
	// stb r23,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r23.u8);
	// stb r23,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r23.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r10,r10,83
	ctx.r10.u64 = ctx.r10.u64 | 83;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x8331db78
	goto loc_8331DB78;
loc_8331DA40:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// b 0x8331d940
	goto loc_8331D940;
loc_8331DA48:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// b 0x8331d978
	goto loc_8331D978;
loc_8331DA50:
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x8331DA60;
	sub_8333CEF8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r3,1456(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1456);
	// bl 0x832e7248
	ctx.lr = 0x8331DA80;
	sub_832E7248(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8333cef8
	ctx.lr = 0x8331DA94;
	sub_8333CEF8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stb r23,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r23.u8);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stb r23,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r23.u8);
	// stb r23,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r23.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r23,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r23.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r10,53
	ctx.r10.u64 = ctx.r10.u64 | 53;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r9,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r9.u8);
	// lbz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r9,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r9.u8);
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r23,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r23.u8);
	// stb r23,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r23.u8);
	// stb r23,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r23.u8);
	// stb r23,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r23.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// lbz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r23,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r23.u8);
	// stb r23,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r23.u8);
	// stb r23,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r23.u8);
	// stb r23,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r23.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,41
	ctx.r10.u64 = ctx.r10.u64 | 41;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r23,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r23.u8);
	// stb r23,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r23.u8);
	// stb r23,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r23.u8);
	// stb r23,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r23.u8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,83
	ctx.r10.u64 = ctx.r10.u64 | 83;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8331DB78:
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// b 0x8331e384
	goto loc_8331E384;
loc_8331DB80:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,1360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8331e43c
	if (ctx.cr6.gt) goto loc_8331E43C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8331c8a8
	ctx.lr = 0x8331DBA0;
	sub_8331C8A8(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x8331DBB4;
	sub_8333CEF8(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
loc_8331DBCC:
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331dbe8
	if (!ctx.cr6.lt) goto loc_8331DBE8;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331DBE8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x8331dbf8
	if (!ctx.cr0.eq) goto loc_8331DBF8;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8331DBF8:
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// beq cr6,0x8331e384
	if (ctx.cr6.eq) goto loc_8331E384;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x8331dc10
	if (!ctx.cr6.lt) goto loc_8331DC10;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331DC10:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331dc1c
	if (!ctx.cr0.eq) goto loc_8331DC1C;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8331DC1C:
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bne cr6,0x8331dc44
	if (!ctx.cr6.eq) goto loc_8331DC44;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8331e188
	if (ctx.cr6.eq) goto loc_8331E188;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_8331DC44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331ca88
	ctx.lr = 0x8331DC4C;
	sub_8331CA88(ctx, base);
	// b 0x8331dbcc
	goto loc_8331DBCC;
loc_8331DC50:
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// beq cr6,0x8331e1c4
	if (ctx.cr6.eq) goto loc_8331E1C4;
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// beq cr6,0x8331e0f4
	if (ctx.cr6.eq) goto loc_8331E0F4;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x8331e01c
	if (ctx.cr6.eq) goto loc_8331E01C;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x8331dc7c
	if (ctx.cr6.eq) goto loc_8331DC7C;
	// cmpwi cr6,r11,132
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 132, ctx.xer);
	// bne cr6,0x8331e384
	if (!ctx.cr6.eq) goto loc_8331E384;
	// b 0x8331d8e0
	goto loc_8331D8E0;
loc_8331DC7C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r9,1360(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8331e454
	if (ctx.cr6.gt) goto loc_8331E454;
	// li r4,20000
	ctx.r4.s64 = 20000;
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x832e7248
	ctx.lr = 0x8331DCA0;
	sub_832E7248(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x8331DCB8;
	sub_8333CEF8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r29,20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8331c8a8
	ctx.lr = 0x8331DCC8;
	sub_8331C8A8(ctx, base);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// stb r23,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r23.u8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stb r23,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r23.u8);
	// stb r23,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r23.u8);
	// stb r23,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r23.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r10,53
	ctx.r10.u64 = ctx.r10.u64 | 53;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r9,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r9.u8);
	// lbz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r9,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r9.u8);
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r3,1456(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1456);
	// bl 0x832e7248
	ctx.lr = 0x8331DD38;
	sub_832E7248(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r11,64
	ctx.r11.s64 = 64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8331DD4C:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8331dd4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8331DD4C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8331c578
	ctx.lr = 0x8331DD64;
	sub_8331C578(ctx, base);
	// lwz r25,20(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
loc_8331DD68:
	// lwz r28,20(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r29,100
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 100, ctx.xer);
	// bge cr6,0x8331dd84
	if (!ctx.cr6.lt) goto loc_8331DD84;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8331DD84:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne 0x8331dd94
	if (!ctx.cr0.eq) goto loc_8331DD94;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8331DD94:
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x8331dda8
	if (ctx.cr6.eq) goto loc_8331DDA8;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bne cr6,0x8331ddac
	if (!ctx.cr6.eq) goto loc_8331DDAC;
loc_8331DDA8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8331DDAC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8331de08
	if (ctx.cr0.eq) goto loc_8331DE08;
	// cmpwi cr6,r29,100
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 100, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bge cr6,0x8331ddc4
	if (!ctx.cr6.lt) goto loc_8331DDC4;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8331DDC4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8331ddd0
	if (!ctx.cr0.eq) goto loc_8331DDD0;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_8331DDD0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8331c8a8
	ctx.lr = 0x8331DDD8;
	sub_8331C8A8(ctx, base);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// cmpwi cr6,r29,114
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 114, ctx.xer);
	// bne cr6,0x8331ddf4
	if (!ctx.cr6.eq) goto loc_8331DDF4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_8331DDF4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bl 0x8331c578
	ctx.lr = 0x8331DE08;
	sub_8331C578(ctx, base);
loc_8331DE08:
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331de24
	if (!ctx.cr6.lt) goto loc_8331DE24;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331DE24:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331de30
	if (!ctx.cr0.eq) goto loc_8331DE30;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8331DE30:
	// cmpwi cr6,r11,132
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 132, ctx.xer);
	// bne cr6,0x8331dec0
	if (!ctx.cr6.eq) goto loc_8331DEC0;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpw cr6,r7,r26
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x8331de4c
	if (!ctx.cr6.eq) goto loc_8331DE4C;
	// lwz r17,20(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
loc_8331DE4C:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8331DE58:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x8331de70
	if (ctx.cr6.eq) goto loc_8331DE70;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x8331de84
	if (!ctx.cr6.eq) goto loc_8331DE84;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8331DE70:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// blt cr6,0x8331de58
	if (ctx.cr6.lt) goto loc_8331DE58;
	// b 0x8331de88
	goto loc_8331DE88;
loc_8331DE84:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
loc_8331DE88:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8331decc
	if (ctx.cr6.eq) goto loc_8331DECC;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_8331DE98:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8331deb8
	if (ctx.cr6.eq) goto loc_8331DEB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// blt cr6,0x8331de98
	if (ctx.cr6.lt) goto loc_8331DE98;
	// b 0x8331dec0
	goto loc_8331DEC0;
loc_8331DEB8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r21,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r21.u32);
loc_8331DEC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331ca88
	ctx.lr = 0x8331DEC8;
	sub_8331CA88(ctx, base);
	// b 0x8331dd68
	goto loc_8331DD68;
loc_8331DECC:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r25,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r25.u32);
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r25,r28
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8331df30
	if (ctx.cr6.eq) goto loc_8331DF30;
loc_8331DEE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x8331ca88
	ctx.lr = 0x8331DEEC;
	sub_8331CA88(ctx, base);
	// b 0x8331df18
	goto loc_8331DF18;
loc_8331DEF0:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// lbz r11,3(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8331DF18:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8331def0
	if (!ctx.cr6.eq) goto loc_8331DEF0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8331dee0
	if (!ctx.cr6.eq) goto loc_8331DEE0;
loc_8331DF30:
	// cmplw cr6,r28,r17
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x8331dfb8
	if (ctx.cr6.eq) goto loc_8331DFB8;
	// stb r23,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r23.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r23,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r23.u8);
	// stb r23,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r23.u8);
	// stb r23,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r23.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r11,r11,39
	ctx.r11.u64 = ctx.r11.u64 | 39;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r17,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r17.u32);
	// bl 0x8331ca88
	ctx.lr = 0x8331DF64;
	sub_8331CA88(ctx, base);
	// b 0x8331dfac
	goto loc_8331DFAC;
loc_8331DF68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x8331ca88
	ctx.lr = 0x8331DF74;
	sub_8331CA88(ctx, base);
	// b 0x8331dfa0
	goto loc_8331DFA0;
loc_8331DF78:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// lbz r11,3(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8331DFA0:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8331df78
	if (!ctx.cr6.eq) goto loc_8331DF78;
loc_8331DFAC:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8331df68
	if (!ctx.cr6.eq) goto loc_8331DF68;
loc_8331DFB8:
	// stb r23,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r23.u8);
	// stb r23,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r23.u8);
	// stb r23,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r23.u8);
	// stb r23,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r23.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r11,r11,41
	ctx.r11.u64 = ctx.r11.u64 | 41;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r23,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r23.u8);
	// stb r23,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r23.u8);
	// stb r23,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r23.u8);
	// stb r23,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r23.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r11,r11,83
	ctx.r11.u64 = ctx.r11.u64 | 83;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x8331E000;
	sub_8333CEF8(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r24,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r24.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x832e7378
	ctx.lr = 0x8331E018;
	sub_832E7378(ctx, base);
	// b 0x8331e384
	goto loc_8331E384;
loc_8331E01C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8331c8a8
	ctx.lr = 0x8331E024;
	sub_8331C8A8(ctx, base);
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8331e0e4
	goto loc_8331E0E4;
loc_8331E038:
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331e054
	if (!ctx.cr6.lt) goto loc_8331E054;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331E054:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331e060
	if (!ctx.cr0.eq) goto loc_8331E060;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8331E060:
	// cmpwi cr6,r11,132
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 132, ctx.xer);
	// bne cr6,0x8331e088
	if (!ctx.cr6.eq) goto loc_8331E088;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x8331e384
	if (ctx.cr6.eq) goto loc_8331E384;
loc_8331E088:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x8331cf50
	ctx.lr = 0x8331E090;
	sub_8331CF50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8331e0d8
	if (ctx.cr0.eq) goto loc_8331E0D8;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_8331E09C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331ca88
	ctx.lr = 0x8331E0A4;
	sub_8331CA88(ctx, base);
	// lwz r29,20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8331cf50
	ctx.lr = 0x8331E0B0;
	sub_8331CF50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8331e0bc
	if (ctx.cr0.eq) goto loc_8331E0BC;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_8331E0BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8331cee8
	ctx.lr = 0x8331E0C4;
	sub_8331CEE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8331e0d0
	if (ctx.cr0.eq) goto loc_8331E0D0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8331E0D0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8331e09c
	if (!ctx.cr6.gt) goto loc_8331E09C;
loc_8331E0D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331ca88
	ctx.lr = 0x8331E0E0;
	sub_8331CA88(ctx, base);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
loc_8331E0E4:
	// bl 0x8331cee8
	ctx.lr = 0x8331E0E8;
	sub_8331CEE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8331e038
	if (ctx.cr0.eq) goto loc_8331E038;
	// b 0x8331e384
	goto loc_8331E384;
loc_8331E0F4:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8331e118
	if (!ctx.cr6.eq) goto loc_8331E118;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,794
	ctx.r7.s64 = 794;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8331E118;
	sub_8320CF10(ctx, base);
loc_8331E118:
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x8331d2f8
	ctx.lr = 0x8331E120;
	sub_8331D2F8(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x8331e13c
	if (!ctx.cr6.lt) goto loc_8331E13C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8331E13C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8331e148
	if (!ctx.cr0.eq) goto loc_8331E148;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8331E148:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bne cr6,0x8331e194
	if (!ctx.cr6.eq) goto loc_8331E194;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8331e17c
	if (ctx.cr6.gt) goto loc_8331E17C;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,801
	ctx.r7.s64 = 801;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8331E17C;
	sub_8320CF10(ctx, base);
loc_8331E17C:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
loc_8331E188:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8331e3b8
	goto loc_8331E3B8;
loc_8331E194:
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8331e1a8
	if (!ctx.cr6.eq) goto loc_8331E1A8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x8331e188
	goto loc_8331E188;
loc_8331E1A8:
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,806
	ctx.r7.s64 = 806;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8331E1C0;
	sub_8320CF10(ctx, base);
	// b 0x8331e188
	goto loc_8331E188;
loc_8331E1C4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8331E1D8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8331e31c
	if (ctx.cr6.eq) goto loc_8331E31C;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8331e1fc
	if (ctx.cr6.eq) goto loc_8331E1FC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8331e1d8
	if (!ctx.cr6.eq) goto loc_8331E1D8;
loc_8331E1FC:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8331E200:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8331E210:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8331e324
	if (ctx.cr6.eq) goto loc_8331E324;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8331e234
	if (ctx.cr6.eq) goto loc_8331E234;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8331e210
	if (!ctx.cr6.eq) goto loc_8331E210;
loc_8331E234:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8331E238:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8331e370
	if (ctx.cr6.eq) goto loc_8331E370;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331ca88
	ctx.lr = 0x8331E248;
	sub_8331CA88(ctx, base);
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bne 0x8331e364
	if (!ctx.cr0.eq) goto loc_8331E364;
	// bl 0x8333cef8
	ctx.lr = 0x8331E25C;
	sub_8333CEF8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8331E268:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8331e2c8
	if (!ctx.cr6.eq) goto loc_8331E2C8;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331e28c
	if (!ctx.cr6.lt) goto loc_8331E28C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331E28C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x8331e29c
	if (!ctx.cr0.eq) goto loc_8331E29C;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8331E29C:
	// cmpwi cr6,r10,39
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 39, ctx.xer);
	// beq cr6,0x8331e384
	if (ctx.cr6.eq) goto loc_8331E384;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x8331e2b4
	if (!ctx.cr6.lt) goto loc_8331E2B4;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331E2B4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331e2c0
	if (!ctx.cr0.eq) goto loc_8331E2C0;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8331E2C0:
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// beq cr6,0x8331e384
	if (ctx.cr6.eq) goto loc_8331E384;
loc_8331E2C8:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x8331e2e4
	if (!ctx.cr6.lt) goto loc_8331E2E4;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8331E2E4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x8331e2f4
	if (!ctx.cr0.eq) goto loc_8331E2F4;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8331E2F4:
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// beq cr6,0x8331e308
	if (ctx.cr6.eq) goto loc_8331E308;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bne cr6,0x8331e30c
	if (!ctx.cr6.eq) goto loc_8331E30C;
loc_8331E308:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8331E30C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8331e32c
	if (ctx.cr0.eq) goto loc_8331E32C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x8331e358
	goto loc_8331E358;
loc_8331E31C:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// b 0x8331e200
	goto loc_8331E200;
loc_8331E324:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// b 0x8331e238
	goto loc_8331E238;
loc_8331E32C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bge cr6,0x8331e33c
	if (!ctx.cr6.lt) goto loc_8331E33C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8331E33C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x8331e34c
	if (!ctx.cr0.eq) goto loc_8331E34C;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8331E34C:
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// bne cr6,0x8331e358
	if (!ctx.cr6.eq) goto loc_8331E358;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_8331E358:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331ca88
	ctx.lr = 0x8331E360;
	sub_8331CA88(ctx, base);
	// b 0x8331e268
	goto loc_8331E268;
loc_8331E364:
	// bl 0x8333cef8
	ctx.lr = 0x8331E368;
	sub_8333CEF8(ctx, base);
	// stw r20,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r20.u32);
	// b 0x8331e384
	goto loc_8331E384;
loc_8331E370:
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x8331E37C;
	sub_8333CEF8(ctx, base);
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
loc_8331E380:
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
loc_8331E384:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x8331e39c
	if (ctx.cr6.eq) goto loc_8331E39C;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8331E39C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8331e3c0
	if (ctx.cr6.eq) goto loc_8331E3C0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8331E3B8:
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x8331e384
	goto loc_8331E384;
loc_8331E3C0:
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8331d578
	if (ctx.cr0.eq) goto loc_8331D578;
loc_8331E3C8:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8331e3e4
	if (!ctx.cr6.lt) goto loc_8331E3E4;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331E3E4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x8331e3f4
	if (!ctx.cr0.eq) goto loc_8331E3F4;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8331E3F4:
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// beq cr6,0x8331e484
	if (ctx.cr6.eq) goto loc_8331E484;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x8331e40c
	if (!ctx.cr6.lt) goto loc_8331E40C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8331E40C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331e418
	if (!ctx.cr0.eq) goto loc_8331E418;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8331E418:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x8331e484
	if (ctx.cr6.eq) goto loc_8331E484;
	// b 0x8331d504
	goto loc_8331D504;
loc_8331E424:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,1364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1364, ctx.r10.u32);
	// bl 0x82ff1e60
	ctx.lr = 0x8331E43C;
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
loc_8331E43C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,1364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1364, ctx.r10.u32);
	// bl 0x82ff1e60
	ctx.lr = 0x8331E454;
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
loc_8331E454:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,1364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1364, ctx.r10.u32);
	// bl 0x82ff1e60
	ctx.lr = 0x8331E46C;
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
loc_8331E46C:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x8331d2f8
	ctx.lr = 0x8331E474;
	sub_8331D2F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x832e7378
	ctx.lr = 0x8331E484;
	sub_832E7378(ctx, base);
loc_8331E484:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8331e46c
	if (!ctx.cr6.eq) goto loc_8331E46C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8331E498:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331E4A0"))) PPC_WEAK_FUNC(sub_8331E4A0);
PPC_FUNC_IMPL(__imp__sub_8331E4A0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,2160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2160);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r9,2164(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,2168(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2168);
	// lwz r7,2172(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2172);
	// stw r11,2160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2160, ctx.r11.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r11.u32);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r11.u32);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r11.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8331e51c
	if (!ctx.cr6.gt) goto loc_8331E51C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,-31200
	ctx.r4.s64 = ctx.r11.s64 + -31200;
	// bl 0x832e7968
	ctx.lr = 0x8331E51C;
	sub_832E7968(ctx, base);
loc_8331E51C:
	// lwz r5,80(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8331e538
	if (!ctx.cr6.gt) goto loc_8331E538;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,-31264
	ctx.r4.s64 = ctx.r11.s64 + -31264;
	// bl 0x832e7968
	ctx.lr = 0x8331E538;
	sub_832E7968(ctx, base);
loc_8331E538:
	// lwz r5,84(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8331e554
	if (!ctx.cr6.gt) goto loc_8331E554;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,-31308
	ctx.r4.s64 = ctx.r11.s64 + -31308;
	// bl 0x832e7968
	ctx.lr = 0x8331E554;
	sub_832E7968(ctx, base);
loc_8331E554:
	// lwz r5,88(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8331e570
	if (!ctx.cr6.gt) goto loc_8331E570;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,-31344
	ctx.r4.s64 = ctx.r11.s64 + -31344;
	// bl 0x832e7968
	ctx.lr = 0x8331E570;
	sub_832E7968(ctx, base);
loc_8331E570:
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// lwz r6,64(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r4,r9,-31416
	ctx.r4.s64 = ctx.r9.s64 + -31416;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// subf r7,r6,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r6.s64;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x832e7968
	ctx.lr = 0x8331E59C;
	sub_832E7968(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r6,60(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r4,r11,-31472
	ctx.r4.s64 = ctx.r11.s64 + -31472;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// bl 0x832e7968
	ctx.lr = 0x8331E5BC;
	sub_832E7968(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8331e610
	if (!ctx.cr0.eq) goto loc_8331E610;
	// lwz r5,72(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8331e5f8
	if (ctx.cr6.eq) goto loc_8331E5F8;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// twllei r5,0
	// mulli r10,r11,100
	ctx.r10.s64 = ctx.r11.s64 * 100;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r7,r10,r5
	ctx.r7.s32 = ctx.r10.s32 / ctx.r5.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	// b 0x8331e5fc
	goto loc_8331E5FC;
loc_8331E5F8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8331E5FC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r6,68(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,-31544
	ctx.r4.s64 = ctx.r11.s64 + -31544;
	// bl 0x832e7968
	ctx.lr = 0x8331E610;
	sub_832E7968(ctx, base);
loc_8331E610:
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

__attribute__((alias("__imp__sub_8331E628"))) PPC_WEAK_FUNC(sub_8331E628);
PPC_FUNC_IMPL(__imp__sub_8331E628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8331E630;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8320ce78
	ctx.lr = 0x8331E658;
	sub_8320CE78(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x8320ce78
	ctx.lr = 0x8331E66C;
	sub_8320CE78(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x8320ce78
	ctx.lr = 0x8331E680;
	sub_8320CE78(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8320ce78
	ctx.lr = 0x8331E694;
	sub_8320CE78(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,35
	ctx.r4.s64 = 35;
	// bl 0x8320ce78
	ctx.lr = 0x8331E6A8;
	sub_8320CE78(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x8320ce78
	ctx.lr = 0x8331E6BC;
	sub_8320CE78(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,-15152
	ctx.r11.s64 = ctx.r11.s64 + -15152;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8320ce78
	ctx.lr = 0x8331E6D8;
	sub_8320CE78(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331E6FC"))) PPC_WEAK_FUNC(sub_8331E6FC);
PPC_FUNC_IMPL(__imp__sub_8331E6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331E700"))) PPC_WEAK_FUNC(sub_8331E700);
PPC_FUNC_IMPL(__imp__sub_8331E700) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// subf r6,r6,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r6.s64;
	// b 0x8331e628
	sub_8331E628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331E720"))) PPC_WEAK_FUNC(sub_8331E720);
PPC_FUNC_IMPL(__imp__sub_8331E720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8331E728;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// beq cr6,0x8331e748
	if (ctx.cr6.eq) goto loc_8331E748;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8331E748:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce78
	ctx.lr = 0x8331E758;
	sub_8320CE78(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce78
	ctx.lr = 0x8331E76C;
	sub_8320CE78(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce78
	ctx.lr = 0x8331E780;
	sub_8320CE78(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce78
	ctx.lr = 0x8331E794;
	sub_8320CE78(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,-15152
	ctx.r11.s64 = ctx.r11.s64 + -15152;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,68(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x8320ce78
	ctx.lr = 0x8331E7B0;
	sub_8320CE78(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331E7D0"))) PPC_WEAK_FUNC(sub_8331E7D0);
PPC_FUNC_IMPL(__imp__sub_8331E7D0) {
	PPC_FUNC_PROLOGUE();
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce78
	ctx.lr = 0x8331E800;
	sub_8320CE78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,33
	ctx.r4.s64 = 33;
	// bl 0x8320ce78
	ctx.lr = 0x8331E814;
	sub_8320CE78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x8320ce78
	ctx.lr = 0x8331E828;
	sub_8320CE78(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,-15152
	ctx.r11.s64 = ctx.r11.s64 + -15152;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8320ce78
	ctx.lr = 0x8331E844;
	sub_8320CE78(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8331E874"))) PPC_WEAK_FUNC(sub_8331E874);
PPC_FUNC_IMPL(__imp__sub_8331E874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331E878"))) PPC_WEAK_FUNC(sub_8331E878);
PPC_FUNC_IMPL(__imp__sub_8331E878) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r12,783
	ctx.r12.s64 = 51314688;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// ori r12,r12,49279
	ctx.r12.u64 = ctx.r12.u64 | 49279;
	// addi r11,r11,-15152
	ctx.r11.s64 = ctx.r11.s64 + -15152;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// oris r8,r8,57344
	ctx.r8.u64 = ctx.r8.u64 | 3758096384;
	// oris r9,r9,51200
	ctx.r9.u64 = ctx.r9.u64 | 3355443200;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// rlwinm r9,r9,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// rlwimi r7,r11,24,3,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0x1F000000) | (ctx.r7.u64 & 0xFFFFFFFFE0FFFFFF);
	// rlwinm r9,r9,0,17,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF07FFF;
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331E8C8"))) PPC_WEAK_FUNC(sub_8331E8C8);
PPC_FUNC_IMPL(__imp__sub_8331E8C8) {
	PPC_FUNC_PROLOGUE();
	// subf. r3,r4,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgelr 
	if (!ctx.cr0.lt) return;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331E8D8"))) PPC_WEAK_FUNC(sub_8331E8D8);
PPC_FUNC_IMPL(__imp__sub_8331E8D8) {
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
	// lwz r4,952(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 952);
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x83340fb0
	ctx.lr = 0x8331E8F0;
	sub_83340FB0(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8331e930
	if (ctx.cr6.eq) goto loc_8331E930;
	// ble cr6,0x8331e928
	if (!ctx.cr6.gt) goto loc_8331E928;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// ble cr6,0x8331e920
	if (!ctx.cr6.gt) goto loc_8331E920;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// ble cr6,0x8331e930
	if (!ctx.cr6.gt) goto loc_8331E930;
	// addi r11,r3,-43
	ctx.r11.s64 = ctx.r3.s64 + -43;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8331e928
	if (ctx.cr6.gt) goto loc_8331E928;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8331e934
	goto loc_8331E934;
loc_8331E920:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8331e934
	goto loc_8331E934;
loc_8331E928:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8331e934
	goto loc_8331E934;
loc_8331E930:
	// li r3,2
	ctx.r3.s64 = 2;
loc_8331E934:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331E944"))) PPC_WEAK_FUNC(sub_8331E944);
PPC_FUNC_IMPL(__imp__sub_8331E944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331E948"))) PPC_WEAK_FUNC(sub_8331E948);
PPC_FUNC_IMPL(__imp__sub_8331E948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// mulli r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 * 52;
	// addi r11,r11,-11080
	ctx.r11.s64 = ctx.r11.s64 + -11080;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331E960"))) PPC_WEAK_FUNC(sub_8331E960);
PPC_FUNC_IMPL(__imp__sub_8331E960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// mulli r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 * 52;
	// addi r11,r11,-11080
	ctx.r11.s64 = ctx.r11.s64 + -11080;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331E978"))) PPC_WEAK_FUNC(sub_8331E978);
PPC_FUNC_IMPL(__imp__sub_8331E978) {
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
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8331ea10
	if (ctx.cr6.eq) goto loc_8331EA10;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8331ea08
	if (ctx.cr6.eq) goto loc_8331EA08;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8331ea00
	if (ctx.cr6.eq) goto loc_8331EA00;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8331e9e0
	if (ctx.cr6.eq) goto loc_8331E9E0;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8331e9f8
	if (ctx.cr6.eq) goto loc_8331E9F8;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8331e9f0
	if (ctx.cr6.eq) goto loc_8331E9F0;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x8331e9e8
	if (ctx.cr6.eq) goto loc_8331E9E8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-31144
	ctx.r6.s64 = ctx.r11.s64 + -31144;
	// addi r5,r10,-12392
	ctx.r5.s64 = ctx.r10.s64 + -12392;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2874
	ctx.r7.s64 = 2874;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8331E9E0;
	sub_8320CF10(ctx, base);
loc_8331E9E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8331ea14
	goto loc_8331EA14;
loc_8331E9E8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8331ea14
	goto loc_8331EA14;
loc_8331E9F0:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8331ea14
	goto loc_8331EA14;
loc_8331E9F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8331ea14
	goto loc_8331EA14;
loc_8331EA00:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8331ea14
	goto loc_8331EA14;
loc_8331EA08:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8331ea14
	goto loc_8331EA14;
loc_8331EA10:
	// li r3,7
	ctx.r3.s64 = 7;
loc_8331EA14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331EA24"))) PPC_WEAK_FUNC(sub_8331EA24);
PPC_FUNC_IMPL(__imp__sub_8331EA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331EA28"))) PPC_WEAK_FUNC(sub_8331EA28);
PPC_FUNC_IMPL(__imp__sub_8331EA28) {
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
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// bgt cr6,0x8331ea94
	if (ctx.cr6.gt) goto loc_8331EA94;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-31552
	ctx.r12.s64 = ctx.r12.s64 + -31552;
	// lbzx r0,r12,r4
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r4.u32);
	// lis r12,-31950
	ctx.r12.s64 = -2093875200;
	// addi r12,r12,-5532
	ctx.r12.s64 = ctx.r12.s64 + -5532;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_8331EABC;
	case 1:
		goto loc_8331EA7C;
	case 2:
		goto loc_8331EA84;
	case 3:
		goto loc_8331EA8C;
	case 4:
		goto loc_8331EAB8;
	case 5:
		goto loc_8331EA64;
	case 6:
		goto loc_8331EA6C;
	case 7:
		goto loc_8331EA74;
	default:
		__builtin_unreachable();
	}
loc_8331EA64:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8331eabc
	goto loc_8331EABC;
loc_8331EA6C:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8331eabc
	goto loc_8331EABC;
loc_8331EA74:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8331eabc
	goto loc_8331EABC;
loc_8331EA7C:
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x8331eabc
	goto loc_8331EABC;
loc_8331EA84:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8331eabc
	goto loc_8331EABC;
loc_8331EA8C:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8331eabc
	goto loc_8331EABC;
loc_8331EA94:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-31144
	ctx.r6.s64 = ctx.r11.s64 + -31144;
	// addi r5,r10,-12392
	ctx.r5.s64 = ctx.r10.s64 + -12392;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2894
	ctx.r7.s64 = 2894;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8331EAB8;
	sub_8320CF10(ctx, base);
loc_8331EAB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8331EABC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331EACC"))) PPC_WEAK_FUNC(sub_8331EACC);
PPC_FUNC_IMPL(__imp__sub_8331EACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331EAD0"))) PPC_WEAK_FUNC(sub_8331EAD0);
PPC_FUNC_IMPL(__imp__sub_8331EAD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2736(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2736);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331EAD8"))) PPC_WEAK_FUNC(sub_8331EAD8);
PPC_FUNC_IMPL(__imp__sub_8331EAD8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331EAE0"))) PPC_WEAK_FUNC(sub_8331EAE0);
PPC_FUNC_IMPL(__imp__sub_8331EAE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8331eb10
	if (!ctx.cr6.eq) goto loc_8331EB10;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
loc_8331EB10:
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331EB18"))) PPC_WEAK_FUNC(sub_8331EB18);
PPC_FUNC_IMPL(__imp__sub_8331EB18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lbz r9,48(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 48);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// stw r10,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r8,36(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stb r10,48(r4)
	PPC_STORE_U8(ctx.r4.u32 + 48, ctx.r10.u8);
	// stw r11,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r11.u32);
	// stw r9,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r9.u32);
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331EB58"))) PPC_WEAK_FUNC(sub_8331EB58);
PPC_FUNC_IMPL(__imp__sub_8331EB58) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,13
	ctx.r5.s64 = 13;
	// divw r6,r4,r11
	ctx.r6.s32 = ctx.r4.s32 / ctx.r11.s32;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce78
	ctx.lr = 0x8331EB8C;
	sub_8320CE78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x8320ce78
	ctx.lr = 0x8331EBA0;
	sub_8320CE78(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,-15152
	ctx.r11.s64 = ctx.r11.s64 + -15152;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8320ce78
	ctx.lr = 0x8331EBBC;
	sub_8320CE78(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8331EBEC"))) PPC_WEAK_FUNC(sub_8331EBEC);
PPC_FUNC_IMPL(__imp__sub_8331EBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331EBF0"))) PPC_WEAK_FUNC(sub_8331EBF0);
PPC_FUNC_IMPL(__imp__sub_8331EBF0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-15152
	ctx.r11.s64 = ctx.r11.s64 + -15152;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,60(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8320ce78
	ctx.lr = 0x8331EC20;
	sub_8320CE78(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8331EC4C"))) PPC_WEAK_FUNC(sub_8331EC4C);
PPC_FUNC_IMPL(__imp__sub_8331EC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331EC50"))) PPC_WEAK_FUNC(sub_8331EC50);
PPC_FUNC_IMPL(__imp__sub_8331EC50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331EC58"))) PPC_WEAK_FUNC(sub_8331EC58);
PPC_FUNC_IMPL(__imp__sub_8331EC58) {
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
	ctx.lr = 0x8331EC78;
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

__attribute__((alias("__imp__sub_8331EC98"))) PPC_WEAK_FUNC(sub_8331EC98);
PPC_FUNC_IMPL(__imp__sub_8331EC98) {
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

__attribute__((alias("__imp__sub_8331ECAC"))) PPC_WEAK_FUNC(sub_8331ECAC);
PPC_FUNC_IMPL(__imp__sub_8331ECAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331ECB0"))) PPC_WEAK_FUNC(sub_8331ECB0);
PPC_FUNC_IMPL(__imp__sub_8331ECB0) {
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
	// bl 0x83314848
	ctx.lr = 0x8331ECC8;
	sub_83314848(ctx, base);
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

__attribute__((alias("__imp__sub_8331ECE0"))) PPC_WEAK_FUNC(sub_8331ECE0);
PPC_FUNC_IMPL(__imp__sub_8331ECE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x832e7378
	sub_832E7378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331ECEC"))) PPC_WEAK_FUNC(sub_8331ECEC);
PPC_FUNC_IMPL(__imp__sub_8331ECEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331ECF0"))) PPC_WEAK_FUNC(sub_8331ECF0);
PPC_FUNC_IMPL(__imp__sub_8331ECF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331ECF8"))) PPC_WEAK_FUNC(sub_8331ECF8);
PPC_FUNC_IMPL(__imp__sub_8331ECF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8331ed18
	if (!ctx.cr6.lt) goto loc_8331ED18;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_8331ED18:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331ED20"))) PPC_WEAK_FUNC(sub_8331ED20);
PPC_FUNC_IMPL(__imp__sub_8331ED20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2088(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2088);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331ED28"))) PPC_WEAK_FUNC(sub_8331ED28);
PPC_FUNC_IMPL(__imp__sub_8331ED28) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x8331ED44;
	sub_8333CEF8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8331ED5C"))) PPC_WEAK_FUNC(sub_8331ED5C);
PPC_FUNC_IMPL(__imp__sub_8331ED5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331ED60"))) PPC_WEAK_FUNC(sub_8331ED60);
PPC_FUNC_IMPL(__imp__sub_8331ED60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2112);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331ED68"))) PPC_WEAK_FUNC(sub_8331ED68);
PPC_FUNC_IMPL(__imp__sub_8331ED68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2132);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331ED70"))) PPC_WEAK_FUNC(sub_8331ED70);
PPC_FUNC_IMPL(__imp__sub_8331ED70) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8331eda0
	if (!ctx.cr6.lt) goto loc_8331EDA0;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8331eda4
	goto loc_8331EDA4;
loc_8331EDA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331EDA4:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x8333cd18
	ctx.lr = 0x8331EDB4;
	sub_8333CD18(ctx, base);
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

__attribute__((alias("__imp__sub_8331EDCC"))) PPC_WEAK_FUNC(sub_8331EDCC);
PPC_FUNC_IMPL(__imp__sub_8331EDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331EDD0"))) PPC_WEAK_FUNC(sub_8331EDD0);
PPC_FUNC_IMPL(__imp__sub_8331EDD0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2092(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2092, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331EDDC"))) PPC_WEAK_FUNC(sub_8331EDDC);
PPC_FUNC_IMPL(__imp__sub_8331EDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331EDE0"))) PPC_WEAK_FUNC(sub_8331EDE0);
PPC_FUNC_IMPL(__imp__sub_8331EDE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2096(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2096);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331EDE8"))) PPC_WEAK_FUNC(sub_8331EDE8);
PPC_FUNC_IMPL(__imp__sub_8331EDE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8331ee04
	if (!ctx.cr6.lt) goto loc_8331EE04;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_8331EE04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331EE0C"))) PPC_WEAK_FUNC(sub_8331EE0C);
PPC_FUNC_IMPL(__imp__sub_8331EE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331EE10"))) PPC_WEAK_FUNC(sub_8331EE10);
PPC_FUNC_IMPL(__imp__sub_8331EE10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331EE18"))) PPC_WEAK_FUNC(sub_8331EE18);
PPC_FUNC_IMPL(__imp__sub_8331EE18) {
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
	ctx.lr = 0x8331EE38;
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

__attribute__((alias("__imp__sub_8331EE58"))) PPC_WEAK_FUNC(sub_8331EE58);
PPC_FUNC_IMPL(__imp__sub_8331EE58) {
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

__attribute__((alias("__imp__sub_8331EE6C"))) PPC_WEAK_FUNC(sub_8331EE6C);
PPC_FUNC_IMPL(__imp__sub_8331EE6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331EE70"))) PPC_WEAK_FUNC(sub_8331EE70);
PPC_FUNC_IMPL(__imp__sub_8331EE70) {
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
	// bl 0x83314848
	ctx.lr = 0x8331EE88;
	sub_83314848(ctx, base);
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

__attribute__((alias("__imp__sub_8331EEA0"))) PPC_WEAK_FUNC(sub_8331EEA0);
PPC_FUNC_IMPL(__imp__sub_8331EEA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x832e7378
	sub_832E7378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331EEAC"))) PPC_WEAK_FUNC(sub_8331EEAC);
PPC_FUNC_IMPL(__imp__sub_8331EEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331EEB0"))) PPC_WEAK_FUNC(sub_8331EEB0);
PPC_FUNC_IMPL(__imp__sub_8331EEB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331EEB8"))) PPC_WEAK_FUNC(sub_8331EEB8);
PPC_FUNC_IMPL(__imp__sub_8331EEB8) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x8331EED4;
	sub_8333CEF8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8331EEEC"))) PPC_WEAK_FUNC(sub_8331EEEC);
PPC_FUNC_IMPL(__imp__sub_8331EEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331EEF0"))) PPC_WEAK_FUNC(sub_8331EEF0);
PPC_FUNC_IMPL(__imp__sub_8331EEF0) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8331ef20
	if (!ctx.cr6.lt) goto loc_8331EF20;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8331ef24
	goto loc_8331EF24;
loc_8331EF20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331EF24:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x8333cd18
	ctx.lr = 0x8331EF34;
	sub_8333CD18(ctx, base);
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

__attribute__((alias("__imp__sub_8331EF4C"))) PPC_WEAK_FUNC(sub_8331EF4C);
PPC_FUNC_IMPL(__imp__sub_8331EF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331EF50"))) PPC_WEAK_FUNC(sub_8331EF50);
PPC_FUNC_IMPL(__imp__sub_8331EF50) {
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
	ctx.lr = 0x8331EF70;
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

__attribute__((alias("__imp__sub_8331EF90"))) PPC_WEAK_FUNC(sub_8331EF90);
PPC_FUNC_IMPL(__imp__sub_8331EF90) {
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

__attribute__((alias("__imp__sub_8331EFA4"))) PPC_WEAK_FUNC(sub_8331EFA4);
PPC_FUNC_IMPL(__imp__sub_8331EFA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331EFA8"))) PPC_WEAK_FUNC(sub_8331EFA8);
PPC_FUNC_IMPL(__imp__sub_8331EFA8) {
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
	// bl 0x83314848
	ctx.lr = 0x8331EFC0;
	sub_83314848(ctx, base);
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

__attribute__((alias("__imp__sub_8331EFD8"))) PPC_WEAK_FUNC(sub_8331EFD8);
PPC_FUNC_IMPL(__imp__sub_8331EFD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x832e7378
	sub_832E7378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331EFE4"))) PPC_WEAK_FUNC(sub_8331EFE4);
PPC_FUNC_IMPL(__imp__sub_8331EFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331EFE8"))) PPC_WEAK_FUNC(sub_8331EFE8);
PPC_FUNC_IMPL(__imp__sub_8331EFE8) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_8331EFF4:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x8331f00c
	if (ctx.cr6.eq) goto loc_8331F00C;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x8331f024
	if (!ctx.cr6.eq) goto loc_8331F024;
loc_8331F00C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8331eff4
	if (ctx.cr6.lt) goto loc_8331EFF4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8331F024:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F02C"))) PPC_WEAK_FUNC(sub_8331F02C);
PPC_FUNC_IMPL(__imp__sub_8331F02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331F030"))) PPC_WEAK_FUNC(sub_8331F030);
PPC_FUNC_IMPL(__imp__sub_8331F030) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331F034:
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8331f034
	if (ctx.cr6.lt) goto loc_8331F034;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F05C"))) PPC_WEAK_FUNC(sub_8331F05C);
PPC_FUNC_IMPL(__imp__sub_8331F05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331F060"))) PPC_WEAK_FUNC(sub_8331F060);
PPC_FUNC_IMPL(__imp__sub_8331F060) {
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
	ctx.lr = 0x8331F080;
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

__attribute__((alias("__imp__sub_8331F0A0"))) PPC_WEAK_FUNC(sub_8331F0A0);
PPC_FUNC_IMPL(__imp__sub_8331F0A0) {
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

__attribute__((alias("__imp__sub_8331F0B4"))) PPC_WEAK_FUNC(sub_8331F0B4);
PPC_FUNC_IMPL(__imp__sub_8331F0B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F0B8"))) PPC_WEAK_FUNC(sub_8331F0B8);
PPC_FUNC_IMPL(__imp__sub_8331F0B8) {
	PPC_FUNC_PROLOGUE();
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_8331F0C0:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8331f0d0
	if (ctx.cr6.eq) goto loc_8331F0D0;
	// stbx r11,r9,r4
	PPC_STORE_U8(ctx.r9.u32 + ctx.r4.u32, ctx.r11.u8);
loc_8331F0D0:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne 0x8331f0c0
	if (!ctx.cr0.eq) goto loc_8331F0C0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F0E0"))) PPC_WEAK_FUNC(sub_8331F0E0);
PPC_FUNC_IMPL(__imp__sub_8331F0E0) {
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
	// bl 0x83314848
	ctx.lr = 0x8331F0F8;
	sub_83314848(ctx, base);
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

__attribute__((alias("__imp__sub_8331F110"))) PPC_WEAK_FUNC(sub_8331F110);
PPC_FUNC_IMPL(__imp__sub_8331F110) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x832e7378
	sub_832E7378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331F11C"))) PPC_WEAK_FUNC(sub_8331F11C);
PPC_FUNC_IMPL(__imp__sub_8331F11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331F120"))) PPC_WEAK_FUNC(sub_8331F120);
PPC_FUNC_IMPL(__imp__sub_8331F120) {
	PPC_FUNC_PROLOGUE();
	// lwbrx r3,0,r3
	ctx.r3.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r3.u32));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F128"))) PPC_WEAK_FUNC(sub_8331F128);
PPC_FUNC_IMPL(__imp__sub_8331F128) {
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
	ctx.lr = 0x8331F148;
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

__attribute__((alias("__imp__sub_8331F168"))) PPC_WEAK_FUNC(sub_8331F168);
PPC_FUNC_IMPL(__imp__sub_8331F168) {
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

__attribute__((alias("__imp__sub_8331F17C"))) PPC_WEAK_FUNC(sub_8331F17C);
PPC_FUNC_IMPL(__imp__sub_8331F17C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F180"))) PPC_WEAK_FUNC(sub_8331F180);
PPC_FUNC_IMPL(__imp__sub_8331F180) {
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
	// bl 0x83314848
	ctx.lr = 0x8331F198;
	sub_83314848(ctx, base);
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

__attribute__((alias("__imp__sub_8331F1B0"))) PPC_WEAK_FUNC(sub_8331F1B0);
PPC_FUNC_IMPL(__imp__sub_8331F1B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x832e7378
	sub_832E7378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331F1BC"))) PPC_WEAK_FUNC(sub_8331F1BC);
PPC_FUNC_IMPL(__imp__sub_8331F1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331F1C0"))) PPC_WEAK_FUNC(sub_8331F1C0);
PPC_FUNC_IMPL(__imp__sub_8331F1C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F1C8"))) PPC_WEAK_FUNC(sub_8331F1C8);
PPC_FUNC_IMPL(__imp__sub_8331F1C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F1D0"))) PPC_WEAK_FUNC(sub_8331F1D0);
PPC_FUNC_IMPL(__imp__sub_8331F1D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F1D8"))) PPC_WEAK_FUNC(sub_8331F1D8);
PPC_FUNC_IMPL(__imp__sub_8331F1D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F1E0"))) PPC_WEAK_FUNC(sub_8331F1E0);
PPC_FUNC_IMPL(__imp__sub_8331F1E0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F1E8"))) PPC_WEAK_FUNC(sub_8331F1E8);
PPC_FUNC_IMPL(__imp__sub_8331F1E8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 164);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F1F0"))) PPC_WEAK_FUNC(sub_8331F1F0);
PPC_FUNC_IMPL(__imp__sub_8331F1F0) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F1FC"))) PPC_WEAK_FUNC(sub_8331F1FC);
PPC_FUNC_IMPL(__imp__sub_8331F1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331F200"))) PPC_WEAK_FUNC(sub_8331F200);
PPC_FUNC_IMPL(__imp__sub_8331F200) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,158(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 158);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F20C"))) PPC_WEAK_FUNC(sub_8331F20C);
PPC_FUNC_IMPL(__imp__sub_8331F20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331F210"))) PPC_WEAK_FUNC(sub_8331F210);
PPC_FUNC_IMPL(__imp__sub_8331F210) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,944(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 944);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F21C"))) PPC_WEAK_FUNC(sub_8331F21C);
PPC_FUNC_IMPL(__imp__sub_8331F21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331F220"))) PPC_WEAK_FUNC(sub_8331F220);
PPC_FUNC_IMPL(__imp__sub_8331F220) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F228"))) PPC_WEAK_FUNC(sub_8331F228);
PPC_FUNC_IMPL(__imp__sub_8331F228) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,172(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F230"))) PPC_WEAK_FUNC(sub_8331F230);
PPC_FUNC_IMPL(__imp__sub_8331F230) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F238"))) PPC_WEAK_FUNC(sub_8331F238);
PPC_FUNC_IMPL(__imp__sub_8331F238) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,172(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F240"))) PPC_WEAK_FUNC(sub_8331F240);
PPC_FUNC_IMPL(__imp__sub_8331F240) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F248"))) PPC_WEAK_FUNC(sub_8331F248);
PPC_FUNC_IMPL(__imp__sub_8331F248) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,172(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F250"))) PPC_WEAK_FUNC(sub_8331F250);
PPC_FUNC_IMPL(__imp__sub_8331F250) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 176);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F258"))) PPC_WEAK_FUNC(sub_8331F258);
PPC_FUNC_IMPL(__imp__sub_8331F258) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F260"))) PPC_WEAK_FUNC(sub_8331F260);
PPC_FUNC_IMPL(__imp__sub_8331F260) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F268"))) PPC_WEAK_FUNC(sub_8331F268);
PPC_FUNC_IMPL(__imp__sub_8331F268) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F270"))) PPC_WEAK_FUNC(sub_8331F270);
PPC_FUNC_IMPL(__imp__sub_8331F270) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F278"))) PPC_WEAK_FUNC(sub_8331F278);
PPC_FUNC_IMPL(__imp__sub_8331F278) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,172(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F280"))) PPC_WEAK_FUNC(sub_8331F280);
PPC_FUNC_IMPL(__imp__sub_8331F280) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F288"))) PPC_WEAK_FUNC(sub_8331F288);
PPC_FUNC_IMPL(__imp__sub_8331F288) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 168);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F290"))) PPC_WEAK_FUNC(sub_8331F290);
PPC_FUNC_IMPL(__imp__sub_8331F290) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F298"))) PPC_WEAK_FUNC(sub_8331F298);
PPC_FUNC_IMPL(__imp__sub_8331F298) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F2A0"))) PPC_WEAK_FUNC(sub_8331F2A0);
PPC_FUNC_IMPL(__imp__sub_8331F2A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F2A8"))) PPC_WEAK_FUNC(sub_8331F2A8);
PPC_FUNC_IMPL(__imp__sub_8331F2A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,172(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F2B0"))) PPC_WEAK_FUNC(sub_8331F2B0);
PPC_FUNC_IMPL(__imp__sub_8331F2B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F2B8"))) PPC_WEAK_FUNC(sub_8331F2B8);
PPC_FUNC_IMPL(__imp__sub_8331F2B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// addi r10,r10,-11080
	ctx.r10.s64 = ctx.r10.s64 + -11080;
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F2D4"))) PPC_WEAK_FUNC(sub_8331F2D4);
PPC_FUNC_IMPL(__imp__sub_8331F2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331F2D8"))) PPC_WEAK_FUNC(sub_8331F2D8);
PPC_FUNC_IMPL(__imp__sub_8331F2D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// addi r10,r10,-11080
	ctx.r10.s64 = ctx.r10.s64 + -11080;
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F2F4"))) PPC_WEAK_FUNC(sub_8331F2F4);
PPC_FUNC_IMPL(__imp__sub_8331F2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331F2F8"))) PPC_WEAK_FUNC(sub_8331F2F8);
PPC_FUNC_IMPL(__imp__sub_8331F2F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm r3,r11,24,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F304"))) PPC_WEAK_FUNC(sub_8331F304);
PPC_FUNC_IMPL(__imp__sub_8331F304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331F308"))) PPC_WEAK_FUNC(sub_8331F308);
PPC_FUNC_IMPL(__imp__sub_8331F308) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F314"))) PPC_WEAK_FUNC(sub_8331F314);
PPC_FUNC_IMPL(__imp__sub_8331F314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331F318"))) PPC_WEAK_FUNC(sub_8331F318);
PPC_FUNC_IMPL(__imp__sub_8331F318) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// beq 0x8331f32c
	if (ctx.cr0.eq) goto loc_8331F32C;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// b 0x8331f330
	goto loc_8331F330;
loc_8331F32C:
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
loc_8331F330:
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F338"))) PPC_WEAK_FUNC(sub_8331F338);
PPC_FUNC_IMPL(__imp__sub_8331F338) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8331f374
	if (ctx.cr6.eq) goto loc_8331F374;
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8331f374
	if (!ctx.cr0.eq) goto loc_8331F374;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,6768
	ctx.r11.s64 = ctx.r11.s64 + 6768;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_8331F374:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F37C"))) PPC_WEAK_FUNC(sub_8331F37C);
PPC_FUNC_IMPL(__imp__sub_8331F37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331F380"))) PPC_WEAK_FUNC(sub_8331F380);
PPC_FUNC_IMPL(__imp__sub_8331F380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8331f3a4
	if (!ctx.cr6.gt) goto loc_8331F3A4;
	// addi r11,r4,58
	ctx.r11.s64 = ctx.r4.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8331f3a4
	if (ctx.cr6.eq) goto loc_8331F3A4;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8331f3b0
	goto loc_8331F3B0;
loc_8331F3A4:
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
loc_8331F3B0:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mulli r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 * 12;
	// addi r11,r10,6768
	ctx.r11.s64 = ctx.r10.s64 + 6768;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lbzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F3D8"))) PPC_WEAK_FUNC(sub_8331F3D8);
PPC_FUNC_IMPL(__imp__sub_8331F3D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm. r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8331f42c
	if (!ctx.cr0.eq) goto loc_8331F42C;
	// rlwinm. r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8331f42c
	if (!ctx.cr0.eq) goto loc_8331F42C;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// beq cr6,0x8331f42c
	if (ctx.cr6.eq) goto loc_8331F42C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r11,-31576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31576);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8331f42c
	if (!ctx.cr6.eq) goto loc_8331F42C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x8331f42c
	if (ctx.cr6.eq) goto loc_8331F42C;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x8331f42c
	if (ctx.cr6.eq) goto loc_8331F42C;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8331f430
	if (!ctx.cr6.eq) goto loc_8331F430;
loc_8331F42C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331F430:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F438"))) PPC_WEAK_FUNC(sub_8331F438);
PPC_FUNC_IMPL(__imp__sub_8331F438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8331F440;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8331F460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x8331f4d0
	if (ctx.cr6.lt) goto loc_8331F4D0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r31,236
	ctx.r30.s64 = ctx.r31.s64 + 236;
	// addi r29,r11,6768
	ctx.r29.s64 = ctx.r11.s64 + 6768;
loc_8331F474:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8331f4ac
	if (!ctx.cr6.eq) goto loc_8331F4AC;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r10,r29,6
	ctx.r10.s64 = ctx.r29.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8331f4dc
	if (ctx.cr0.eq) goto loc_8331F4DC;
loc_8331F4AC:
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
	ctx.lr = 0x8331F4C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x8331f474
	if (!ctx.cr6.gt) goto loc_8331F474;
loc_8331F4D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8331F4D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8331F4DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8331f4d4
	goto loc_8331F4D4;
}

__attribute__((alias("__imp__sub_8331F4E4"))) PPC_WEAK_FUNC(sub_8331F4E4);
PPC_FUNC_IMPL(__imp__sub_8331F4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331F4E8"))) PPC_WEAK_FUNC(sub_8331F4E8);
PPC_FUNC_IMPL(__imp__sub_8331F4E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8331f524
	if (ctx.cr6.eq) goto loc_8331F524;
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8331f524
	if (!ctx.cr0.eq) goto loc_8331F524;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r11,6768
	ctx.r11.s64 = ctx.r11.s64 + 6768;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8331f528
	if (!ctx.cr0.eq) goto loc_8331F528;
loc_8331F524:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331F528:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8331f558
	if (ctx.cr0.eq) goto loc_8331F558;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,128
	ctx.r9.s64 = ctx.r3.s64 + 128;
loc_8331F538:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x8331f54c
	if (ctx.cr6.lt) goto loc_8331F54C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// ble cr6,0x8331f560
	if (!ctx.cr6.gt) goto loc_8331F560;
loc_8331F54C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8331f538
	if (ctx.cr6.lt) goto loc_8331F538;
loc_8331F558:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8331F560:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F568"))) PPC_WEAK_FUNC(sub_8331F568);
PPC_FUNC_IMPL(__imp__sub_8331F568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,-15152
	ctx.r11.s64 = ctx.r11.s64 + -15152;
	// li r4,45
	ctx.r4.s64 = 45;
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x8320ce78
	sub_8320CE78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331F580"))) PPC_WEAK_FUNC(sub_8331F580);
PPC_FUNC_IMPL(__imp__sub_8331F580) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8320ce78
	sub_8320CE78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331F590"))) PPC_WEAK_FUNC(sub_8331F590);
PPC_FUNC_IMPL(__imp__sub_8331F590) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8320ce78
	sub_8320CE78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331F5A0"))) PPC_WEAK_FUNC(sub_8331F5A0);
PPC_FUNC_IMPL(__imp__sub_8331F5A0) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x8320ce20
	ctx.lr = 0x8331F5B8;
	sub_8320CE20(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8331F5D4"))) PPC_WEAK_FUNC(sub_8331F5D4);
PPC_FUNC_IMPL(__imp__sub_8331F5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331F5D8"))) PPC_WEAK_FUNC(sub_8331F5D8);
PPC_FUNC_IMPL(__imp__sub_8331F5D8) {
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
	ctx.lr = 0x8331F5F8;
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

__attribute__((alias("__imp__sub_8331F618"))) PPC_WEAK_FUNC(sub_8331F618);
PPC_FUNC_IMPL(__imp__sub_8331F618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-31044
	ctx.r11.s64 = ctx.r11.s64 + -31044;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F628"))) PPC_WEAK_FUNC(sub_8331F628);
PPC_FUNC_IMPL(__imp__sub_8331F628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,-15152
	ctx.r11.s64 = ctx.r11.s64 + -15152;
	// li r4,45
	ctx.r4.s64 = 45;
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x8320ce78
	sub_8320CE78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331F644"))) PPC_WEAK_FUNC(sub_8331F644);
PPC_FUNC_IMPL(__imp__sub_8331F644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331F648"))) PPC_WEAK_FUNC(sub_8331F648);
PPC_FUNC_IMPL(__imp__sub_8331F648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8331F650;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8331f6b4
	if (!ctx.cr6.eq) goto loc_8331F6B4;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x83329160
	ctx.lr = 0x8331F66C;
	sub_83329160(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1456(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832e7248
	ctx.lr = 0x8331F684;
	sub_832E7248(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x8331f6a0
	if (ctx.cr0.eq) goto loc_8331F6A0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83342208
	ctx.lr = 0x8331F69C;
	sub_83342208(ctx, base);
	// b 0x8331f6a4
	goto loc_8331F6A4;
loc_8331F6A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8331F6A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// stw r30,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r30.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
loc_8331F6B4:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331F6C0"))) PPC_WEAK_FUNC(sub_8331F6C0);
PPC_FUNC_IMPL(__imp__sub_8331F6C0) {
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
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8331f6ec
	if (!ctx.cr6.lt) goto loc_8331F6EC;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x83329160
	ctx.lr = 0x8331F6E8;
	sub_83329160(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
loc_8331F6EC:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
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

__attribute__((alias("__imp__sub_8331F704"))) PPC_WEAK_FUNC(sub_8331F704);
PPC_FUNC_IMPL(__imp__sub_8331F704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331F708"))) PPC_WEAK_FUNC(sub_8331F708);
PPC_FUNC_IMPL(__imp__sub_8331F708) {
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
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8331f734
	if (!ctx.cr6.lt) goto loc_8331F734;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x83329160
	ctx.lr = 0x8331F730;
	sub_83329160(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
loc_8331F734:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
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

__attribute__((alias("__imp__sub_8331F74C"))) PPC_WEAK_FUNC(sub_8331F74C);
PPC_FUNC_IMPL(__imp__sub_8331F74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331F750"))) PPC_WEAK_FUNC(sub_8331F750);
PPC_FUNC_IMPL(__imp__sub_8331F750) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F758"))) PPC_WEAK_FUNC(sub_8331F758);
PPC_FUNC_IMPL(__imp__sub_8331F758) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,141(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 141);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F760"))) PPC_WEAK_FUNC(sub_8331F760);
PPC_FUNC_IMPL(__imp__sub_8331F760) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 140);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F768"))) PPC_WEAK_FUNC(sub_8331F768);
PPC_FUNC_IMPL(__imp__sub_8331F768) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F770"))) PPC_WEAK_FUNC(sub_8331F770);
PPC_FUNC_IMPL(__imp__sub_8331F770) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 140);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8331F778"))) PPC_WEAK_FUNC(sub_8331F778);
PPC_FUNC_IMPL(__imp__sub_8331F778) {
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
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// bl 0x8333cb78
	ctx.lr = 0x8331F78C;
	sub_8333CB78(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8331f79c
	if (ctx.cr6.gt) goto loc_8331F79C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331F79C:
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

__attribute__((alias("__imp__sub_8331F7B0"))) PPC_WEAK_FUNC(sub_8331F7B0);
PPC_FUNC_IMPL(__imp__sub_8331F7B0) {
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
	ctx.lr = 0x8331F7D0;
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

__attribute__((alias("__imp__sub_8331F7F0"))) PPC_WEAK_FUNC(sub_8331F7F0);
PPC_FUNC_IMPL(__imp__sub_8331F7F0) {
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
	// bl 0x83314848
	ctx.lr = 0x8331F808;
	sub_83314848(ctx, base);
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

__attribute__((alias("__imp__sub_8331F820"))) PPC_WEAK_FUNC(sub_8331F820);
PPC_FUNC_IMPL(__imp__sub_8331F820) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8331f83c
	if (!ctx.cr6.lt) goto loc_8331F83C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_8331F83C:
	// b 0x8333cef8
	sub_8333CEF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331F840"))) PPC_WEAK_FUNC(sub_8331F840);
PPC_FUNC_IMPL(__imp__sub_8331F840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8331F848;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r12,783
	ctx.r12.s64 = 51314688;
	// addi r30,r11,-15152
	ctx.r30.s64 = ctx.r11.s64 + -15152;
	// ori r12,r12,49279
	ctx.r12.u64 = ctx.r12.u64 | 49279;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// oris r9,r9,57344
	ctx.r9.u64 = ctx.r9.u64 | 3758096384;
	// oris r11,r11,51200
	ctx.r11.u64 = ctx.r11.u64 | 3355443200;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwinm r9,r11,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// rlwimi r8,r11,24,3,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0x1F000000) | (ctx.r8.u64 & 0xFFFFFFFFE0FFFFFF);
	// rlwinm r9,r9,0,17,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF07FFF;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r10,1376(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1376);
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8331f8e0
	if (!ctx.cr6.gt) goto loc_8331F8E0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-31144
	ctx.r6.s64 = ctx.r11.s64 + -31144;
	// addi r5,r10,-31040
	ctx.r5.s64 = ctx.r10.s64 + -31040;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,109
	ctx.r7.s64 = 109;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8331F8E0;
	sub_8320CF10(ctx, base);
loc_8331F8E0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r27,12
	ctx.r27.s64 = 12;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// divw r11,r11,r27
	ctx.r11.s32 = ctx.r11.s32 / ctx.r27.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// bl 0x8331e628
	ctx.lr = 0x8331F914;
	sub_8331E628(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x8320ce78
	ctx.lr = 0x8331F928;
	sub_8320CE78(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8331f9d8
	if (ctx.cr6.eq) goto loc_8331F9D8;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8331f9d8
	if (ctx.cr6.eq) goto loc_8331F9D8;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r29,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r29.s64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// divw r28,r9,r11
	ctx.r28.s32 = ctx.r9.s32 / ctx.r11.s32;
	// bge cr6,0x8331f9ac
	if (!ctx.cr6.lt) goto loc_8331F9AC;
loc_8331F95C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320ce20
	ctx.lr = 0x8331F96C;
	sub_8320CE20(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8331f99c
	if (!ctx.cr6.eq) goto loc_8331F99C;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320ce20
	ctx.lr = 0x8331F988;
	sub_8320CE20(ctx, base);
	// add r6,r3,r28
	ctx.r6.u64 = ctx.r3.u64 + ctx.r28.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320ce78
	ctx.lr = 0x8331F99C;
	sub_8320CE78(ctx, base);
loc_8331F99C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,6
	ctx.r29.s64 = ctx.r29.s64 + 6;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8331f95c
	if (ctx.cr6.lt) goto loc_8331F95C;
loc_8331F9AC:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
	// bl 0x82cb1160
	ctx.lr = 0x8331F9C0;
	sub_82CB1160(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8331F9D8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8331f9f8
	if (ctx.cr0.eq) goto loc_8331F9F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8331e7d0
	ctx.lr = 0x8331F9F8;
	sub_8331E7D0(ctx, base);
loc_8331F9F8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// divwu r28,r9,r27
	ctx.r28.u32 = ctx.r9.u32 / ctx.r27.u32;
	// bge cr6,0x8331faa0
	if (!ctx.cr6.lt) goto loc_8331FAA0;
loc_8331FA14:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320ce20
	ctx.lr = 0x8331FA24;
	sub_8320CE20(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8331fa6c
	if (ctx.cr6.eq) goto loc_8331FA6C;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8331fa6c
	if (ctx.cr6.eq) goto loc_8331FA6C;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8331fa6c
	if (ctx.cr6.eq) goto loc_8331FA6C;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8331fa6c
	if (ctx.cr6.eq) goto loc_8331FA6C;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8331fa6c
	if (ctx.cr6.eq) goto loc_8331FA6C;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8331fa90
	if (!ctx.cr6.eq) goto loc_8331FA90;
loc_8331FA6C:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320ce20
	ctx.lr = 0x8331FA7C;
	sub_8320CE20(ctx, base);
	// add r6,r3,r28
	ctx.r6.u64 = ctx.r3.u64 + ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320ce78
	ctx.lr = 0x8331FA90;
	sub_8320CE78(ctx, base);
loc_8331FA90:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,6
	ctx.r29.s64 = ctx.r29.s64 + 6;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8331fa14
	if (ctx.cr6.lt) goto loc_8331FA14;
loc_8331FAA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331FAA8"))) PPC_WEAK_FUNC(sub_8331FAA8);
PPC_FUNC_IMPL(__imp__sub_8331FAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8331FAB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r3,92(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8331fb30
	if (ctx.cr6.eq) goto loc_8331FB30;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8331fb30
	if (!ctx.cr6.gt) goto loc_8331FB30;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8331FADC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8331faf4
	if (!ctx.cr6.lt) goto loc_8331FAF4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x8331fafc
	goto loc_8331FAFC;
loc_8331FAF4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8333cef8
	ctx.lr = 0x8331FAFC;
	sub_8333CEF8(ctx, base);
loc_8331FAFC:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8331FB18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,92(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8331fadc
	if (ctx.cr6.lt) goto loc_8331FADC;
loc_8331FB30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331FB38"))) PPC_WEAK_FUNC(sub_8331FB38);
PPC_FUNC_IMPL(__imp__sub_8331FB38) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x8333cb78
	ctx.lr = 0x8331FB68;
	sub_8333CB78(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8331fb78
	if (ctx.cr6.gt) goto loc_8331FB78;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331FB78:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8331fc84
	if (!ctx.cr0.eq) goto loc_8331FC84;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x8333cb78
	ctx.lr = 0x8331FB8C;
	sub_8333CB78(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8331fb9c
	if (ctx.cr6.gt) goto loc_8331FB9C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331FB9C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8331fc84
	if (!ctx.cr0.eq) goto loc_8331FC84;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x833459c0
	ctx.lr = 0x8331FBAC;
	sub_833459C0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8331fc84
	if (!ctx.cr6.eq) goto loc_8331FC84;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8331fbd0
	if (!ctx.cr6.gt) goto loc_8331FBD0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8331fbd4
	goto loc_8331FBD4;
loc_8331FBD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331FBD4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8331fc84
	if (!ctx.cr6.eq) goto loc_8331FC84;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x833459c0
	ctx.lr = 0x8331FBEC;
	sub_833459C0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8331fc84
	if (!ctx.cr6.eq) goto loc_8331FC84;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8331fc10
	if (!ctx.cr6.gt) goto loc_8331FC10;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8331fc14
	goto loc_8331FC14;
loc_8331FC10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331FC14:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8331FC28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8331fc38
	if (ctx.cr0.eq) goto loc_8331FC38;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8331fc88
	goto loc_8331FC88;
loc_8331FC38:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8331fc54
	if (!ctx.cr6.gt) goto loc_8331FC54;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8331fc58
	goto loc_8331FC58;
loc_8331FC54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8331FC58:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8331FC6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8331fc84
	if (ctx.cr0.eq) goto loc_8331FC84;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x8331fc88
	goto loc_8331FC88;
loc_8331FC84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8331FC88:
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

__attribute__((alias("__imp__sub_8331FCA0"))) PPC_WEAK_FUNC(sub_8331FCA0);
PPC_FUNC_IMPL(__imp__sub_8331FCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8331FCA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83340480
	ctx.lr = 0x8331FCC4;
	sub_83340480(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r29,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r29.u32);
	// stw r31,80(r27)
	PPC_STORE_U32(ctx.r27.u32 + 80, ctx.r31.u32);
	// bl 0x83315378
	ctx.lr = 0x8331FCE0;
	sub_83315378(ctx, base);
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// stw r11,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331FD00"))) PPC_WEAK_FUNC(sub_8331FD00);
PPC_FUNC_IMPL(__imp__sub_8331FD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8331FD08;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8331FD20:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// blt cr6,0x8331fd20
	if (ctx.cr6.lt) goto loc_8331FD20;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x83340480
	ctx.lr = 0x8331FD58;
	sub_83340480(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r31,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r31.u32);
	// stw r10,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r10.u32);
	// stw r11,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r11.u32);
	// bl 0x83315378
	ctx.lr = 0x8331FD7C;
	sub_83315378(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8331FD88"))) PPC_WEAK_FUNC(sub_8331FD88);
PPC_FUNC_IMPL(__imp__sub_8331FD88) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8331fdd4
	if (!ctx.cr0.eq) goto loc_8331FDD4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-31144
	ctx.r6.s64 = ctx.r11.s64 + -31144;
	// addi r5,r10,32744
	ctx.r5.s64 = ctx.r10.s64 + 32744;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,945
	ctx.r7.s64 = 945;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8331FDD4;
	sub_8320CF10(ctx, base);
loc_8331FDD4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,952(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,2736(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2736);
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x83352438
	ctx.lr = 0x8331FDF0;
	sub_83352438(ctx, base);
	// subf r11,r30,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_8331FE14"))) PPC_WEAK_FUNC(sub_8331FE14);
PPC_FUNC_IMPL(__imp__sub_8331FE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8331FE18"))) PPC_WEAK_FUNC(sub_8331FE18);
PPC_FUNC_IMPL(__imp__sub_8331FE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x8331FE20;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8331fe4c
	if (ctx.cr6.eq) goto loc_8331FE4C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,228(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83320568
	if (!ctx.cr0.eq) goto loc_83320568;
loc_8331FE4C:
	// li r18,0
	ctx.r18.s64 = 0;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// mr r19,r18
	ctx.r19.u64 = ctx.r18.u64;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r22,r10,-21168
	ctx.r22.s64 = ctx.r10.s64 + -21168;
	// addi r21,r9,-31144
	ctx.r21.s64 = ctx.r9.s64 + -31144;
	// beq 0x8331ff58
	if (ctx.cr0.eq) goto loc_8331FF58;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r29,r1,88
	ctx.r29.s64 = ctx.r1.s64 + 88;
	// addi r27,r11,6768
	ctx.r27.s64 = ctx.r11.s64 + 6768;
	// addi r28,r10,-30960
	ctx.r28.s64 = ctx.r10.s64 + -30960;
loc_8331FE8C:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8331ff58
	if (!ctx.cr0.eq) goto loc_8331FF58;
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8331ff40
	if (ctx.cr0.eq) goto loc_8331FF40;
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r18,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r18.u32);
	// beq 0x8331fefc
	if (ctx.cr0.eq) goto loc_8331FEFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x83352438
	ctx.lr = 0x8331FEBC;
	sub_83352438(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331fd88
	ctx.lr = 0x8331FEC8;
	sub_8331FD88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8331fefc
	if (!ctx.cr0.eq) goto loc_8331FEFC;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// blt cr6,0x8331fef0
	if (ctx.cr6.lt) goto loc_8331FEF0;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,1171
	ctx.r7.s64 = 1171;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8331FEF0;
	sub_8320CF10(ctx, base);
loc_8331FEF0:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8331FEFC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8331ff30
	if (ctx.cr6.eq) goto loc_8331FF30;
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8331ff30
	if (!ctx.cr0.eq) goto loc_8331FF30;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r10,r27,4
	ctx.r10.s64 = ctx.r27.s64 + 4;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8331ff34
	if (!ctx.cr0.eq) goto loc_8331FF34;
loc_8331FF30:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8331FF34:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8331ff40
	if (ctx.cr0.eq) goto loc_8331FF40;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_8331FF40:
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rlwinm r8,r11,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// bne cr6,0x8331fe8c
	if (!ctx.cr6.eq) goto loc_8331FE8C;
loc_8331FF58:
	// lwz r23,0(r20)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// lwz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// beq cr6,0x83320568
	if (ctx.cr6.eq) goto loc_83320568;
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bne cr6,0x83320144
	if (!ctx.cr6.eq) goto loc_83320144;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x8331ffd4
	if (!ctx.cr6.eq) goto loc_8331FFD4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r30,r30,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x83352438
	ctx.lr = 0x8331FF94;
	sub_83352438(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833151e0
	ctx.lr = 0x8331FFA0;
	sub_833151E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8331FFA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8331fd00
	ctx.lr = 0x8331FFB4;
	sub_8331FD00(ctx, base);
loc_8331FFB4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8331FFB8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,948(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 948);
	// bl 0x833452f0
	ctx.lr = 0x8331FFC4;
	sub_833452F0(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// b 0x83320568
	goto loc_83320568;
loc_8331FFD4:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bne cr6,0x83320410
	if (!ctx.cr6.eq) goto loc_83320410;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x83352438
	ctx.lr = 0x8331FFEC;
	sub_83352438(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833151e0
	ctx.lr = 0x8331FFF8;
	sub_833151E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x83352438
	ctx.lr = 0x8332000C;
	sub_83352438(ctx, base);
	// lwz r29,0(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x8332005c
	goto loc_8332005C;
loc_83320020:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8332006c
	if (!ctx.cr0.eq) goto loc_8332006C;
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8332004c
	if (ctx.cr0.eq) goto loc_8332004C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x83352438
	ctx.lr = 0x83320044;
	sub_83352438(ctx, base);
	// cmpw cr6,r26,r3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x83320068
	if (ctx.cr6.eq) goto loc_83320068;
loc_8332004C:
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
loc_8332005C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83320020
	if (!ctx.cr6.eq) goto loc_83320020;
	// b 0x8332006c
	goto loc_8332006C;
loc_83320068:
	// li r25,1
	ctx.r25.s64 = 1;
loc_8332006C:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83320080
	if (!ctx.cr0.eq) goto loc_83320080;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x8331ffa8
	goto loc_8331FFA8;
loc_83320080:
	// lwz r29,0(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x833200e8
	goto loc_833200E8;
loc_83320090:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x833200f8
	if (!ctx.cr0.eq) goto loc_833200F8;
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833200d8
	if (ctx.cr0.eq) goto loc_833200D8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8331f438
	ctx.lr = 0x833200B0;
	sub_8331F438(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x833200f4
	if (!ctx.cr0.eq) goto loc_833200F4;
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833200d8
	if (ctx.cr0.eq) goto loc_833200D8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8331fd88
	ctx.lr = 0x833200D0;
	sub_8331FD88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x833200f4
	if (!ctx.cr0.eq) goto loc_833200F4;
loc_833200D8:
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
loc_833200E8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83320090
	if (!ctx.cr6.eq) goto loc_83320090;
	// b 0x833200f8
	goto loc_833200F8;
loc_833200F4:
	// li r26,1
	ctx.r26.s64 = 1;
loc_833200F8:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83320410
	if (!ctx.cr0.eq) goto loc_83320410;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331fd00
	ctx.lr = 0x83320114;
	sub_8331FD00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,948(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 948);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83345350
	ctx.lr = 0x83320128;
	sub_83345350(ctx, base);
loc_83320128:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x83315248
	ctx.lr = 0x8332013C;
	sub_83315248(ctx, base);
	// stw r29,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r29.u32);
	// b 0x83320568
	goto loc_83320568;
loc_83320144:
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// bne cr6,0x83320410
	if (!ctx.cr6.eq) goto loc_83320410;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bne cr6,0x83320410
	if (!ctx.cr6.eq) goto loc_83320410;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x83352438
	ctx.lr = 0x83320164;
	sub_83352438(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833151e0
	ctx.lr = 0x83320170;
	sub_833151E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x83352438
	ctx.lr = 0x83320184;
	sub_83352438(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833151e0
	ctx.lr = 0x83320190;
	sub_833151E0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331fd88
	ctx.lr = 0x833201A0;
	sub_8331FD88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8332020c
	if (!ctx.cr0.eq) goto loc_8332020C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8331fd88
	ctx.lr = 0x833201B4;
	sub_8331FD88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8332020c
	if (!ctx.cr0.eq) goto loc_8332020C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331fd00
	ctx.lr = 0x833201D0;
	sub_8331FD00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,948(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 948);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x833452f0
	ctx.lr = 0x833201E4;
	sub_833452F0(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8331fd00
	ctx.lr = 0x83320204;
	sub_8331FD00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x8331ffb8
	goto loc_8331FFB8;
loc_8332020C:
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x833202cc
	if (!ctx.cr6.eq) goto loc_833202CC;
	// lwz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// lwz r9,128(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_83320228:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x83320248
	if (ctx.cr6.eq) goto loc_83320248;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x833202c4
	if (!ctx.cr6.eq) goto loc_833202C4;
loc_83320248:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83320228
	if (ctx.cr6.lt) goto loc_83320228;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83320258:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8332027c
	if (!ctx.cr0.eq) goto loc_8332027C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r11,-30976
	ctx.r5.s64 = ctx.r11.s64 + -30976;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,1282
	ctx.r7.s64 = 1282;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8332027C;
	sub_8320CF10(ctx, base);
loc_8332027C:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_83320280:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x83320298
	if (ctx.cr6.eq) goto loc_83320298;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
loc_83320298:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83320280
	if (ctx.cr6.lt) goto loc_83320280;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331fd00
	ctx.lr = 0x833202B8;
	sub_8331FD00(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// b 0x8331ffb4
	goto loc_8331FFB4;
loc_833202C4:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x83320258
	goto loc_83320258;
loc_833202CC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8331fd88
	ctx.lr = 0x833202D8;
	sub_8331FD88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8332036c
	if (ctx.cr0.eq) goto loc_8332036C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331f438
	ctx.lr = 0x833202EC;
	sub_8331F438(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8332036c
	if (!ctx.cr0.eq) goto loc_8332036C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8331f438
	ctx.lr = 0x83320300;
	sub_8331F438(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8332036c
	if (!ctx.cr0.eq) goto loc_8332036C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8331fd00
	ctx.lr = 0x8332031C;
	sub_8331FD00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,948(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 948);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83345350
	ctx.lr = 0x83320330;
	sub_83345350(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x83315248
	ctx.lr = 0x83320344;
	sub_83315248(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331fd00
	ctx.lr = 0x83320358;
	sub_8331FD00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,948(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 948);
	// bl 0x833452f0
	ctx.lr = 0x83320368;
	sub_833452F0(ctx, base);
	// b 0x83320128
	goto loc_83320128;
loc_8332036C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331fd88
	ctx.lr = 0x83320378;
	sub_8331FD88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83320410
	if (ctx.cr0.eq) goto loc_83320410;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8331f438
	ctx.lr = 0x8332038C;
	sub_8331F438(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83320410
	if (!ctx.cr0.eq) goto loc_83320410;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331f438
	ctx.lr = 0x833203A0;
	sub_8331F438(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83320410
	if (!ctx.cr0.eq) goto loc_83320410;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8331fd00
	ctx.lr = 0x833203BC;
	sub_8331FD00(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,948(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 948);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x83345350
	ctx.lr = 0x833203D0;
	sub_83345350(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x83315248
	ctx.lr = 0x833203E4;
	sub_83315248(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8331fd00
	ctx.lr = 0x833203F8;
	sub_8331FD00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,948(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 948);
	// bl 0x833452f0
	ctx.lr = 0x83320408;
	sub_833452F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x83320554
	goto loc_83320554;
loc_83320410:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x83352438
	ctx.lr = 0x83320420;
	sub_83352438(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833151e0
	ctx.lr = 0x8332042C;
	sub_833151E0(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x83320448
	if (!ctx.cr6.lt) goto loc_83320448;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x83329160
	ctx.lr = 0x83320444;
	sub_83329160(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
loc_83320448:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8331fca0
	ctx.lr = 0x8332045C;
	sub_8331FCA0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,948(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 948);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x83345350
	ctx.lr = 0x83320470;
	sub_83345350(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bne cr6,0x833204e0
	if (!ctx.cr6.eq) goto loc_833204E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x83352438
	ctx.lr = 0x83320494;
	sub_83352438(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833151e0
	ctx.lr = 0x833204A0;
	sub_833151E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8331fd00
	ctx.lr = 0x833204B4;
	sub_8331FD00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,948(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 948);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x833452f0
	ctx.lr = 0x833204C8;
	sub_833452F0(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x83315248
	ctx.lr = 0x833204DC;
	sub_83315248(ctx, base);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_833204E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83340538
	ctx.lr = 0x833204EC;
	sub_83340538(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8333cae0
	ctx.lr = 0x833204F8;
	sub_8333CAE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8333cb20
	ctx.lr = 0x83320500;
	sub_8333CB20(ctx, base);
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8332050c
	if (!ctx.cr6.eq) goto loc_8332050C;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_8332050C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83320528
	if (ctx.cr6.eq) goto loc_83320528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83341ab8
	ctx.lr = 0x83320520;
	sub_83341AB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8332052c
	goto loc_8332052C;
loc_83320528:
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_8332052C:
	// stw r25,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r25.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r18,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r18.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83315378
	ctx.lr = 0x83320544;
	sub_83315378(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8333cb00
	ctx.lr = 0x83320550;
	sub_8333CB00(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83320554:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x83315248
	ctx.lr = 0x83320564;
	sub_83315248(ctx, base);
	// stw r26,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r26.u32);
loc_83320568:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83320570"))) PPC_WEAK_FUNC(sub_83320570);
PPC_FUNC_IMPL(__imp__sub_83320570) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x83320598
	goto loc_83320598;
loc_83320578:
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83320594
	if (ctx.cr0.eq) goto loc_83320594;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,87
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 87, ctx.xer);
	// beq cr6,0x83320594
	if (ctx.cr6.eq) goto loc_83320594;
	// stw r5,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r5.u32);
loc_83320594:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_83320598:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83320578
	if (!ctx.cr6.eq) goto loc_83320578;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833205A8"))) PPC_WEAK_FUNC(sub_833205A8);
PPC_FUNC_IMPL(__imp__sub_833205A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x833205B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stb r30,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r30.u8);
	// stb r30,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r30.u8);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,1456(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832e7248
	ctx.lr = 0x8332062C;
	sub_832E7248(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x8332064c
	if (ctx.cr0.eq) goto loc_8332064C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x83314848
	ctx.lr = 0x83320648;
	sub_83314848(ctx, base);
	// b 0x83320650
	goto loc_83320650;
loc_8332064C:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_83320650:
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,1456(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832e7248
	ctx.lr = 0x83320668;
	sub_832E7248(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x83320688
	if (ctx.cr0.eq) goto loc_83320688;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x83314848
	ctx.lr = 0x83320684;
	sub_83314848(ctx, base);
	// b 0x8332068c
	goto loc_8332068C;
loc_83320688:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8332068C:
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,1456(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832e7248
	ctx.lr = 0x833206A4;
	sub_832E7248(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x833206c4
	if (ctx.cr0.eq) goto loc_833206C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x83314848
	ctx.lr = 0x833206C0;
	sub_83314848(ctx, base);
	// b 0x833206c8
	goto loc_833206C8;
loc_833206C4:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_833206C8:
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,1456(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832e7248
	ctx.lr = 0x833206E0;
	sub_832E7248(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x83320700
	if (ctx.cr0.eq) goto loc_83320700;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x83314848
	ctx.lr = 0x833206FC;
	sub_83314848(ctx, base);
	// b 0x83320704
	goto loc_83320704;
loc_83320700:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_83320704:
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,1456(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832e7248
	ctx.lr = 0x8332071C;
	sub_832E7248(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x8332073c
	if (ctx.cr0.eq) goto loc_8332073C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x83314848
	ctx.lr = 0x83320738;
	sub_83314848(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8332073C:
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	// mulli r30,r11,3
	ctx.r30.s64 = ctx.r11.s64 * 3;
	// mulli r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 * 12;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832e7ce8
	ctx.lr = 0x83320758;
	sub_832E7CE8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832e7ce8
	ctx.lr = 0x83320768;
	sub_832E7CE8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832e7ce8
	ctx.lr = 0x83320778;
	sub_832E7CE8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83320798"))) PPC_WEAK_FUNC(sub_83320798);
PPC_FUNC_IMPL(__imp__sub_83320798) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832e7378
	ctx.lr = 0x833207C0;
	sub_832E7378(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833207d4
	if (ctx.cr0.eq) goto loc_833207D4;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x832e7378
	ctx.lr = 0x833207D4;
	sub_832E7378(ctx, base);
loc_833207D4:
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

__attribute__((alias("__imp__sub_833207F0"))) PPC_WEAK_FUNC(sub_833207F0);
PPC_FUNC_IMPL(__imp__sub_833207F0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832e7378
	ctx.lr = 0x83320818;
	sub_832E7378(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8332082c
	if (ctx.cr0.eq) goto loc_8332082C;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x832e7378
	ctx.lr = 0x8332082C;
	sub_832E7378(ctx, base);
loc_8332082C:
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

__attribute__((alias("__imp__sub_83320848"))) PPC_WEAK_FUNC(sub_83320848);
PPC_FUNC_IMPL(__imp__sub_83320848) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832e7378
	ctx.lr = 0x83320870;
	sub_832E7378(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83320884
	if (ctx.cr0.eq) goto loc_83320884;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x832e7378
	ctx.lr = 0x83320884;
	sub_832E7378(ctx, base);
loc_83320884:
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

__attribute__((alias("__imp__sub_833208A0"))) PPC_WEAK_FUNC(sub_833208A0);
PPC_FUNC_IMPL(__imp__sub_833208A0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832e7378
	ctx.lr = 0x833208C8;
	sub_832E7378(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833208dc
	if (ctx.cr0.eq) goto loc_833208DC;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x832e7378
	ctx.lr = 0x833208DC;
	sub_832E7378(ctx, base);
loc_833208DC:
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

__attribute__((alias("__imp__sub_833208F8"))) PPC_WEAK_FUNC(sub_833208F8);
PPC_FUNC_IMPL(__imp__sub_833208F8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832e7378
	ctx.lr = 0x83320920;
	sub_832E7378(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83320934
	if (ctx.cr0.eq) goto loc_83320934;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x832e7378
	ctx.lr = 0x83320934;
	sub_832E7378(ctx, base);
loc_83320934:
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

__attribute__((alias("__imp__sub_83320950"))) PPC_WEAK_FUNC(sub_83320950);
PPC_FUNC_IMPL(__imp__sub_83320950) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83340fb0
	ctx.lr = 0x83320970;
	sub_83340FB0(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x833209e0
	if (ctx.cr6.eq) goto loc_833209E0;
	// ble cr6,0x8332098c
	if (!ctx.cr6.gt) goto loc_8332098C;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// ble cr6,0x833209a4
	if (!ctx.cr6.gt) goto loc_833209A4;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// ble cr6,0x833209e0
	if (!ctx.cr6.gt) goto loc_833209E0;
loc_8332098C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83320990:
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
loc_833209A4:
	// lbz r11,125(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 125);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8332098c
	if (!ctx.cr0.eq) goto loc_8332098C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	// lwz r11,2084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2084);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833209d4
	if (!ctx.cr6.eq) goto loc_833209D4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8331e720
	ctx.lr = 0x833209D4;
	sub_8331E720(ctx, base);
loc_833209D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r11.u8);
	// b 0x833209f4
	goto loc_833209F4;
loc_833209E0:
	// lbz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 124);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8332098c
	if (!ctx.cr0.eq) goto loc_8332098C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r11.u8);
loc_833209F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83320990
	goto loc_83320990;
}

__attribute__((alias("__imp__sub_833209FC"))) PPC_WEAK_FUNC(sub_833209FC);
PPC_FUNC_IMPL(__imp__sub_833209FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83320A00"))) PPC_WEAK_FUNC(sub_83320A00);
PPC_FUNC_IMPL(__imp__sub_83320A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x83320A08;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83320a44
	if (ctx.cr6.eq) goto loc_83320A44;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-31144
	ctx.r6.s64 = ctx.r11.s64 + -31144;
	// addi r5,r10,-30940
	ctx.r5.s64 = ctx.r10.s64 + -30940;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2011
	ctx.r7.s64 = 2011;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83320A44;
	sub_8320CF10(ctx, base);
loc_83320A44:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x83352438
	ctx.lr = 0x83320A54;
	sub_83352438(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320AD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lbz r24,164(r31)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r31.u32 + 164);
	// lwz r23,236(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320AFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320B3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320B58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// lbz r19,159(r31)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r31.u32 + 159);
	// lbz r18,153(r31)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r31.u32 + 153);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83340480
	ctx.lr = 0x83320B70;
	sub_83340480(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// stw r11,80(r17)
	PPC_STORE_U32(ctx.r17.u32 + 80, ctx.r11.u32);
	// stw r29,56(r17)
	PPC_STORE_U32(ctx.r17.u32 + 56, ctx.r29.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83315378
	ctx.lr = 0x83320C0C;
	sub_83315378(ctx, base);
	// stb r19,159(r17)
	PPC_STORE_U8(ctx.r17.u32 + 159, ctx.r19.u8);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83315378
	ctx.lr = 0x83320C20;
	sub_83315378(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r19,160(r17)
	PPC_STORE_U8(ctx.r17.u32 + 160, ctx.r19.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r11,154(r17)
	PPC_STORE_U8(ctx.r17.u32 + 154, ctx.r11.u8);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r11,228(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 228);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,228(r17)
	PPC_STORE_U32(ctx.r17.u32 + 228, ctx.r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x83345350
	ctx.lr = 0x83320C48;
	sub_83345350(ctx, base);
	// li r3,59
	ctx.r3.s64 = 59;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83340480
	ctx.lr = 0x83320C54;
	sub_83340480(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// stw r11,80(r16)
	PPC_STORE_U32(ctx.r16.u32 + 80, ctx.r11.u32);
	// stw r29,56(r16)
	PPC_STORE_U32(ctx.r16.u32 + 56, ctx.r29.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320CE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83315378
	ctx.lr = 0x83320CF0;
	sub_83315378(ctx, base);
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320D30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,228(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 228);
	// stb r19,159(r16)
	PPC_STORE_U8(ctx.r16.u32 + 159, ctx.r19.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r18,153(r16)
	PPC_STORE_U8(ctx.r16.u32 + 153, ctx.r18.u8);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// stw r11,228(r16)
	PPC_STORE_U32(ctx.r16.u32 + 228, ctx.r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x83345350
	ctx.lr = 0x83320D94;
	sub_83345350(ctx, base);
	// li r3,39
	ctx.r3.s64 = 39;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83340480
	ctx.lr = 0x83320DA0;
	sub_83340480(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// stw r11,80(r21)
	PPC_STORE_U32(ctx.r21.u32 + 80, ctx.r11.u32);
	// stw r29,56(r21)
	PPC_STORE_U32(ctx.r21.u32 + 56, ctx.r29.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320DCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320DEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320E0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83315378
	ctx.lr = 0x83320E3C;
	sub_83315378(ctx, base);
	// stb r19,159(r21)
	PPC_STORE_U8(ctx.r21.u32 + 159, ctx.r19.u8);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83315378
	ctx.lr = 0x83320E50;
	sub_83315378(ctx, base);
	// lwz r11,228(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 228);
	// stb r19,160(r21)
	PPC_STORE_U8(ctx.r21.u32 + 160, ctx.r19.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r11,228(r21)
	PPC_STORE_U32(ctx.r21.u32 + 228, ctx.r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x83345350
	ctx.lr = 0x83320E70;
	sub_83345350(ctx, base);
	// li r3,97
	ctx.r3.s64 = 97;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83340480
	ctx.lr = 0x83320E7C;
	sub_83340480(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r11.u32);
	// stw r29,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r29.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320EA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320EC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320F08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83315378
	ctx.lr = 0x83320F18;
	sub_83315378(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320F38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320F58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320F78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r19,159(r28)
	PPC_STORE_U8(ctx.r28.u32 + 159, ctx.r19.u8);
	// stb r18,153(r28)
	PPC_STORE_U8(ctx.r28.u32 + 153, ctx.r18.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83315378
	ctx.lr = 0x83320FB0;
	sub_83315378(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320FD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83320FF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83321010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83321030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// stb r19,160(r28)
	PPC_STORE_U8(ctx.r28.u32 + 160, ctx.r19.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r18,154(r28)
	PPC_STORE_U8(ctx.r28.u32 + 154, ctx.r18.u8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,228(r28)
	PPC_STORE_U32(ctx.r28.u32 + 228, ctx.r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x83345350
	ctx.lr = 0x83321054;
	sub_83345350(ctx, base);
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83340480
	ctx.lr = 0x83321060;
	sub_83340480(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r11.u32);
	// stw r29,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r29.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8332108C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833210AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833210CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833210EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r24,164(r28)
	PPC_STORE_U8(ctx.r28.u32 + 164, ctx.r24.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83315378
	ctx.lr = 0x83321100;
	sub_83315378(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83321120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83321140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83321160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83321180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r19,159(r28)
	PPC_STORE_U8(ctx.r28.u32 + 159, ctx.r19.u8);
	// stb r18,153(r28)
	PPC_STORE_U8(ctx.r28.u32 + 153, ctx.r18.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83315378
	ctx.lr = 0x83321198;
	sub_83315378(ctx, base);
	// lis r27,-32246
	ctx.r27.s64 = -2113273856;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r27,-31564
	ctx.r11.s64 = ctx.r27.s64 + -31564;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,136(r28)
	PPC_STORE_U32(ctx.r28.u32 + 136, ctx.r11.u32);
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,228(r28)
	PPC_STORE_U32(ctx.r28.u32 + 228, ctx.r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x83345350
	ctx.lr = 0x833211C4;
	sub_83345350(ctx, base);
	// li r3,55
	ctx.r3.s64 = 55;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83340480
	ctx.lr = 0x833211D0;
	sub_83340480(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x833211FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8332121C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8332123C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8332125C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r24,164(r30)
	PPC_STORE_U8(ctx.r30.u32 + 164, ctx.r24.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83315378
	ctx.lr = 0x83321270;
	sub_83315378(ctx, base);
	// lwz r11,-31564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31564);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x83345350
	ctx.lr = 0x83321294;
	sub_83345350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8333cb20
	ctx.lr = 0x8332129C;
	sub_8333CB20(ctx, base);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833212A8"))) PPC_WEAK_FUNC(sub_833212A8);
PPC_FUNC_IMPL(__imp__sub_833212A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x833212B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r29,58
	ctx.r11.s64 = ctx.r29.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x833212f4
	if (!ctx.cr6.eq) goto loc_833212F4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-31144
	ctx.r6.s64 = ctx.r11.s64 + -31144;
	// addi r5,r10,-30900
	ctx.r5.s64 = ctx.r10.s64 + -30900;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2151
	ctx.r7.s64 = 2151;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833212F4;
	sub_8320CF10(ctx, base);
loc_833212F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83321308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83321364
	if (ctx.cr0.eq) goto loc_83321364;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x83321364
	if (!ctx.cr6.eq) goto loc_83321364;
	// addi r11,r29,32
	ctx.r11.s64 = ctx.r29.s64 + 32;
	// lwz r9,944(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_83321338:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lbzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// lbzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stbx r9,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x83321338
	if (ctx.cr6.lt) goto loc_83321338;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
loc_83321364:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8332136C"))) PPC_WEAK_FUNC(sub_8332136C);
PPC_FUNC_IMPL(__imp__sub_8332136C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83321370"))) PPC_WEAK_FUNC(sub_83321370);
PPC_FUNC_IMPL(__imp__sub_83321370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x83321378;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r22,58
	ctx.r11.s64 = ctx.r22.s64 + 58;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// addi r21,r11,-21168
	ctx.r21.s64 = ctx.r11.s64 + -21168;
	// lwzx r24,r9,r26
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// addi r20,r10,-31144
	ctx.r20.s64 = ctx.r10.s64 + -31144;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x833213cc
	if (!ctx.cr6.eq) goto loc_833213CC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-30900
	ctx.r5.s64 = ctx.r11.s64 + -30900;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,2188
	ctx.r7.s64 = 2188;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833213CC;
	sub_8320CF10(ctx, base);
loc_833213CC:
	// lwz r11,952(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 952);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x83352438
	ctx.lr = 0x833213DC;
	sub_83352438(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x83321400
	if (!ctx.cr0.lt) goto loc_83321400;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-30476
	ctx.r5.s64 = ctx.r11.s64 + -30476;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,2190
	ctx.r7.s64 = 2190;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83321400;
	sub_8320CF10(ctx, base);
loc_83321400:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r10,80(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 80);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r11,r11,6768
	ctx.r11.s64 = ctx.r11.s64 + 6768;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x833407b8
	ctx.lr = 0x83321440;
	sub_833407B8(ctx, base);
	// addi r11,r22,50
	ctx.r11.s64 = ctx.r22.s64 + 50;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwzx r31,r11,r26
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// beq 0x83321490
	if (ctx.cr0.eq) goto loc_83321490;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x83321490
	if (!ctx.cr6.eq) goto loc_83321490;
	// lwz r11,952(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 952);
	// lwz r3,2736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x83314738
	ctx.lr = 0x83321470;
	sub_83314738(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,952(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 952);
	// lwz r11,2736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	// beq 0x83321488
	if (ctx.cr0.eq) goto loc_83321488;
	// lwz r11,2112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	// b 0x8332148c
	goto loc_8332148C;
loc_83321488:
	// lwz r11,2132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
loc_8332148C:
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_83321490:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// addi r27,r11,-11080
	ctx.r27.s64 = ctx.r11.s64 + -11080;
	// mulli r11,r10,52
	ctx.r11.s64 = ctx.r10.s64 * 52;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// beq 0x833214cc
	if (ctx.cr0.eq) goto loc_833214CC;
	// rlwimi r11,r28,29,2,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 29) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x83321564
	if (ctx.cr6.eq) goto loc_83321564;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x83321564
	goto loc_83321564;
loc_833214CC:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x8332150c
	if (!ctx.cr6.eq) goto loc_8332150C;
	// rlwimi r11,r28,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x833214ec
	if (ctx.cr6.eq) goto loc_833214EC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_833214EC:
	// add r31,r22,r26
	ctx.r31.u64 = ctx.r22.u64 + ctx.r26.u64;
	// stb r11,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r11.u8);
	// lbz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83321584
	if (ctx.cr0.eq) goto loc_83321584;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// b 0x83321580
	goto loc_83321580;
loc_8332150C:
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// bne cr6,0x8332154c
	if (!ctx.cr6.eq) goto loc_8332154C;
	// rlwimi r11,r28,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x8332152c
	if (ctx.cr6.eq) goto loc_8332152C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8332152C:
	// add r31,r22,r26
	ctx.r31.u64 = ctx.r22.u64 + ctx.r26.u64;
	// stb r11,10(r30)
	PPC_STORE_U8(ctx.r30.u32 + 10, ctx.r11.u8);
	// lbz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83321584
	if (ctx.cr0.eq) goto loc_83321584;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// b 0x83321580
	goto loc_83321580;
loc_8332154C:
	// rlwimi r11,r28,29,2,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 29) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bne cr6,0x83321560
	if (!ctx.cr6.eq) goto loc_83321560;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_83321560:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83321564:
	// add r31,r22,r26
	ctx.r31.u64 = ctx.r22.u64 + ctx.r26.u64;
	// stb r11,11(r30)
	PPC_STORE_U8(ctx.r30.u32 + 11, ctx.r11.u8);
	// lbz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83321584
	if (ctx.cr0.eq) goto loc_83321584;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
loc_83321580:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_83321584:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83321668
	if (ctx.cr6.eq) goto loc_83321668;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// bne cr6,0x833215b0
	if (!ctx.cr6.eq) goto loc_833215B0;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-12392
	ctx.r5.s64 = ctx.r11.s64 + -12392;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,2228
	ctx.r7.s64 = 2228;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833215B0;
	sub_8320CF10(ctx, base);
loc_833215B0:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83321634
	if (!ctx.cr0.eq) goto loc_83321634;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x833215fc
	if (!ctx.cr6.eq) goto loc_833215FC;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x833215e0
	if (!ctx.cr6.eq) goto loc_833215E0;
	// lbz r11,9(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stb r11,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r11.u8);
loc_833215E0:
	// lbz r11,158(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 158);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x833218f0
	if (ctx.cr0.eq) goto loc_833218F0;
	// lbz r11,9(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r11.u8);
	// b 0x833218f0
	goto loc_833218F0;
loc_833215FC:
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// bne cr6,0x83321634
	if (!ctx.cr6.eq) goto loc_83321634;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x83321618
	if (!ctx.cr6.eq) goto loc_83321618;
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stb r11,10(r30)
	PPC_STORE_U8(ctx.r30.u32 + 10, ctx.r11.u8);
loc_83321618:
	// lbz r11,158(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 158);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x833218f0
	if (ctx.cr0.eq) goto loc_833218F0;
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,10(r30)
	PPC_STORE_U8(ctx.r30.u32 + 10, ctx.r11.u8);
	// b 0x833218f0
	goto loc_833218F0;
loc_83321634:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x83321648
	if (!ctx.cr6.eq) goto loc_83321648;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stb r11,11(r30)
	PPC_STORE_U8(ctx.r30.u32 + 11, ctx.r11.u8);
loc_83321648:
	// lbz r11,158(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 158);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x833218f0
	if (ctx.cr0.eq) goto loc_833218F0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,7,0,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFF80) | (ctx.r11.u64 & 0xFFFFFFFF0000007F);
	// stb r11,11(r30)
	PPC_STORE_U8(ctx.r30.u32 + 11, ctx.r11.u8);
	// b 0x833218f0
	goto loc_833218F0;
loc_83321668:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// rlwinm r9,r11,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// subfic r10,r10,3
	ctx.xer.ca = ctx.r10.u32 <= 3;
	ctx.r10.s64 = 3 - ctx.r10.s64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf. r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt 0x833216a4
	if (ctx.cr0.gt) goto loc_833216A4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-30492
	ctx.r5.s64 = ctx.r11.s64 + -30492;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,2267
	ctx.r7.s64 = 2267;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833216A4;
	sub_8320CF10(ctx, base);
loc_833216A4:
	// lbz r11,158(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 158);
	// lis r31,8192
	ctx.r31.s64 = 536870912;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x833216f4
	if (ctx.cr0.eq) goto loc_833216F4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x833216cc
	if (!ctx.cr6.eq) goto loc_833216CC;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8332176c
	goto loc_8332176C;
loc_833216CC:
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x833216f4
	if (ctx.cr6.eq) goto loc_833216F4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-30516
	ctx.r5.s64 = ctx.r11.s64 + -30516;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,2273
	ctx.r7.s64 = 2273;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833216F4;
	sub_8320CF10(ctx, base);
loc_833216F4:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// ble cr6,0x8332176c
	if (!ctx.cr6.gt) goto loc_8332176C;
	// lwz r11,80(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 80);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// bne cr6,0x83321738
	if (!ctx.cr6.eq) goto loc_83321738;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83321728
	if (!ctx.cr6.eq) goto loc_83321728;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83321728
	if (!ctx.cr0.eq) goto loc_83321728;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8332176c
	if (ctx.cr0.eq) goto loc_8332176C;
loc_83321728:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r7,2281
	ctx.r7.s64 = 2281;
	// addi r5,r11,-30592
	ctx.r5.s64 = ctx.r11.s64 + -30592;
	// b 0x8332175c
	goto loc_8332175C;
loc_83321738:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8332176c
	if (!ctx.cr6.eq) goto loc_8332176C;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8332176c
	if (!ctx.cr0.eq) goto loc_8332176C;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8332176c
	if (!ctx.cr0.eq) goto loc_8332176C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r7,2285
	ctx.r7.s64 = 2285;
	// addi r5,r11,-30672
	ctx.r5.s64 = ctx.r11.s64 + -30672;
loc_8332175C:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8332176C;
	sub_8320CF10(ctx, base);
loc_8332176C:
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// bne cr6,0x833217f4
	if (!ctx.cr6.eq) goto loc_833217F4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x83321788
	if (!ctx.cr6.eq) goto loc_83321788;
	// oris r11,r11,40960
	ctx.r11.u64 = ctx.r11.u64 | 2684354560;
	// b 0x833218c4
	goto loc_833218C4;
loc_83321788:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// bne cr6,0x833217cc
	if (!ctx.cr6.eq) goto loc_833217CC;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x833217c0
	if (ctx.cr6.eq) goto loc_833217C0;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833217c0
	if (ctx.cr0.eq) goto loc_833217C0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-30724
	ctx.r5.s64 = ctx.r11.s64 + -30724;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,2292
	ctx.r7.s64 = 2292;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833217C0;
	sub_8320CF10(ctx, base);
loc_833217C0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// oris r11,r11,24576
	ctx.r11.u64 = ctx.r11.u64 | 1610612736;
	// b 0x833218c4
	goto loc_833218C4;
loc_833217CC:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x833217e4
	if (!ctx.cr6.eq) goto loc_833217E4;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x833218f0
	if (ctx.cr6.eq) goto loc_833218F0;
loc_833217E4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r7,2296
	ctx.r7.s64 = 2296;
	// addi r5,r11,-30772
	ctx.r5.s64 = ctx.r11.s64 + -30772;
	// b 0x833218e0
	goto loc_833218E0;
loc_833217F4:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x83321880
	if (!ctx.cr6.eq) goto loc_83321880;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x83321818
	if (!ctx.cr6.eq) goto loc_83321818;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwimi r11,r10,31,2,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// b 0x833218c4
	goto loc_833218C4;
loc_83321818:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8332185c
	if (!ctx.cr6.eq) goto loc_8332185C;
	// beq 0x8332184c
	if (ctx.cr0.eq) goto loc_8332184C;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8332184c
	if (ctx.cr0.eq) goto loc_8332184C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,-30820
	ctx.r5.s64 = ctx.r11.s64 + -30820;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,2303
	ctx.r7.s64 = 2303;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8332184C;
	sub_8320CF10(ctx, base);
loc_8332184C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,30,1,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x60000000) | (ctx.r11.u64 & 0xFFFFFFFF9FFFFFFF);
	// b 0x833218c4
	goto loc_833218C4;
loc_8332185C:
	// beq 0x833218f0
	if (ctx.cr0.eq) goto loc_833218F0;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x833218f0
	if (ctx.cr6.eq) goto loc_833218F0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r7,2307
	ctx.r7.s64 = 2307;
	// addi r5,r11,-30868
	ctx.r5.s64 = ctx.r11.s64 + -30868;
	// b 0x833218e0
	goto loc_833218E0;
loc_83321880:
	// lwz r11,80(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 80);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x833218a4
	if (!ctx.cr6.eq) goto loc_833218A4;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x833218f0
	if (!ctx.cr6.eq) goto loc_833218F0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,29,0,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 29) & 0xE0000000) | (ctx.r11.u64 & 0xFFFFFFFF1FFFFFFF);
	// b 0x833218c4
	goto loc_833218C4;
loc_833218A4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x833218b8
	if (!ctx.cr6.eq) goto loc_833218B8;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// b 0x833218c4
	goto loc_833218C4;
loc_833218B8:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x833218cc
	if (!ctx.cr6.eq) goto loc_833218CC;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
loc_833218C4:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x833218f0
	goto loc_833218F0;
loc_833218CC:
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x833218f0
	if (ctx.cr0.eq) goto loc_833218F0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r7,2325
	ctx.r7.s64 = 2325;
	// addi r5,r11,-30892
	ctx.r5.s64 = ctx.r11.s64 + -30892;
loc_833218E0:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833218F0;
	sub_8320CF10(ctx, base);
loc_833218F0:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x833212a8
	ctx.lr = 0x833218FC;
	sub_833212A8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83321904"))) PPC_WEAK_FUNC(sub_83321904);
PPC_FUNC_IMPL(__imp__sub_83321904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83321908"))) PPC_WEAK_FUNC(sub_83321908);
PPC_FUNC_IMPL(__imp__sub_83321908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x83321910;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r20,r11,-11080
	ctx.r20.s64 = ctx.r11.s64 + -11080;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mulli r11,r10,52
	ctx.r11.s64 = ctx.r10.s64 * 52;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r11,r20
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 164);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// beq 0x83321954
	if (ctx.cr0.eq) goto loc_83321954;
	// rlwimi r10,r11,25,6,6
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 25) & 0x2000000) | (ctx.r10.u64 & 0xFFFFFFFFFDFFFFFF);
	// b 0x83321958
	goto loc_83321958;
loc_83321954:
	// rlwimi r10,r11,24,7,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
loc_83321958:
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r9,228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// rlwinm. r8,r9,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r19,r11,-12392
	ctx.r19.s64 = ctx.r11.s64 + -12392;
	// addi r22,r10,-21168
	ctx.r22.s64 = ctx.r10.s64 + -21168;
	// addi r21,r9,-31144
	ctx.r21.s64 = ctx.r9.s64 + -31144;
	// beq 0x83321aac
	if (ctx.cr0.eq) goto loc_83321AAC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r24,r30,128
	ctx.r24.s64 = ctx.r30.s64 + 128;
	// addi r26,r11,-30464
	ctx.r26.s64 = ctx.r11.s64 + -30464;
	// addi r25,r10,-30444
	ctx.r25.s64 = ctx.r10.s64 + -30444;
loc_833219B0:
	// lbzx r11,r24,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x83321a80
	if (ctx.cr6.lt) goto loc_83321A80;
	// beq cr6,0x83321a50
	if (ctx.cr6.eq) goto loc_83321A50;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x83321a20
	if (ctx.cr6.lt) goto loc_83321A20;
	// beq cr6,0x833219e8
	if (ctx.cr6.eq) goto loc_833219E8;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,2370
	ctx.r7.s64 = 2370;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833219E4;
	sub_8320CF10(ctx, base);
	// b 0x83321a10
	goto loc_83321A10;
loc_833219E8:
	// slw r11,r23,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r29.u8 & 0x3F));
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,20,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwimi r10,r8,0,12,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFF0FFFFF) | (ctx.r10.u64 & 0xF00000);
loc_83321A00:
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,16,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r11.u64 & 0xF0000);
loc_83321A0C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83321A10:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x833219b0
	if (ctx.cr6.lt) goto loc_833219B0;
	// b 0x83321af8
	goto loc_83321AF8;
loc_83321A20:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83321a40
	if (ctx.cr0.eq) goto loc_83321A40;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,2361
	ctx.r7.s64 = 2361;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83321A40;
	sub_8320CF10(ctx, base);
loc_83321A40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// b 0x83321a0c
	goto loc_83321A0C;
loc_83321A50:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83321a70
	if (ctx.cr0.eq) goto loc_83321A70;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,2356
	ctx.r7.s64 = 2356;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83321A70;
	sub_8320CF10(ctx, base);
loc_83321A70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// rlwinm r11,r11,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// b 0x83321a0c
	goto loc_83321A0C;
loc_83321A80:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// lwzx r11,r11,r20
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r11,r23,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r29.u8 & 0x3F));
	// beq 0x83321a00
	if (ctx.cr0.eq) goto loc_83321A00;
	// rlwinm r11,r11,20,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,12,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFF0FFFFF) | (ctx.r11.u64 & 0xF00000);
	// b 0x83321a0c
	goto loc_83321A0C;
loc_83321AAC:
	// addi r11,r30,128
	ctx.r11.s64 = ctx.r30.s64 + 128;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwbrx r11,0,r11
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// lwzx r10,r10,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r20.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,25,14,14
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 25) & 0x20000) | (ctx.r9.u64 & 0xFFFFFFFFFFFDFFFF);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r8,r9,25,21,22
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 25) & 0x600) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF9FF);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r10,r8,25,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0xE;
	// nor r11,r10,r11
	ctx.r11.u64 = ~(ctx.r10.u64 | ctx.r11.u64);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq 0x83321af0
	if (ctx.cr0.eq) goto loc_83321AF0;
	// rlwimi r10,r11,20,8,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xF00000) | (ctx.r10.u64 & 0xFFFFFFFFFF0FFFFF);
	// b 0x83321af4
	goto loc_83321AF4;
loc_83321AF0:
	// rlwimi r10,r11,16,12,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xF0000) | (ctx.r10.u64 & 0xFFFFFFFFFFF0FFFF);
loc_83321AF4:
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_83321AF8:
	// lwz r4,952(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 952);
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x83340fb0
	ctx.lr = 0x83321B04;
	sub_83340FB0(ctx, base);
	// lwz r11,952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 952);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x83352438
	ctx.lr = 0x83321B18;
	sub_83352438(ctx, base);
	// lwz r11,952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 952);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// cmpwi cr6,r29,48
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 48, ctx.xer);
	// lwz r11,2736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	// lwz r11,2132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x83321bc4
	if (ctx.cr6.eq) goto loc_83321BC4;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// bne cr6,0x83321b50
	if (!ctx.cr6.eq) goto loc_83321B50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,31
	ctx.r10.s64 = 31;
	// rlwimi r11,r10,1,26,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// b 0x83321c4c
	goto loc_83321C4C;
loc_83321B50:
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// bne cr6,0x83321b64
	if (!ctx.cr6.eq) goto loc_83321B64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r11,r11,63
	ctx.r11.u64 = ctx.r11.u64 | 63;
	// b 0x83321c4c
	goto loc_83321C4C;
loc_83321B64:
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// bne cr6,0x83321b74
	if (!ctx.cr6.eq) goto loc_83321B74;
	// li r10,61
	ctx.r10.s64 = 61;
	// b 0x83321b94
	goto loc_83321B94;
loc_83321B74:
	// cmpwi cr6,r29,43
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 43, ctx.xer);
	// bne cr6,0x83321b88
	if (!ctx.cr6.eq) goto loc_83321B88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r23,5,26,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r23.u32, 5) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// b 0x83321c4c
	goto loc_83321C4C;
loc_83321B88:
	// cmpwi cr6,r29,44
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 44, ctx.xer);
	// bne cr6,0x83321ba0
	if (!ctx.cr6.eq) goto loc_83321BA0;
	// li r10,33
	ctx.r10.s64 = 33;
loc_83321B94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r10,0,26,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// b 0x83321c4c
	goto loc_83321C4C;
loc_83321BA0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833407b8
	ctx.lr = 0x83321BAC;
	sub_833407B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83321c2c
	if (ctx.cr0.eq) goto loc_83321C2C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83321c40
	if (ctx.cr6.eq) goto loc_83321C40;
	// li r7,2426
	ctx.r7.s64 = 2426;
	// b 0x83321c58
	goto loc_83321C58;
loc_83321BC4:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// lwzx r11,r11,r20
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83321c20
	if (ctx.cr0.eq) goto loc_83321C20;
	// bl 0x833407b8
	ctx.lr = 0x83321BE4;
	sub_833407B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83321bf8
	if (!ctx.cr0.eq) goto loc_83321BF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r28,8,18,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0x3F00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// b 0x83321c4c
	goto loc_83321C4C;
loc_83321BF8:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83321c18
	if (!ctx.cr6.eq) goto loc_83321C18;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,16384
	ctx.r10.s64 = 16384;
	// rlwinm r11,r11,0,24,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// rlwimi r10,r27,8,18,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r27.u32, 8) & 0x3F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC0FF);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x83321c4c
	goto loc_83321C4C;
loc_83321C18:
	// li r7,2439
	ctx.r7.s64 = 2439;
	// b 0x83321c58
	goto loc_83321C58;
loc_83321C20:
	// bl 0x833407b8
	ctx.lr = 0x83321C24;
	sub_833407B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83321c38
	if (!ctx.cr0.eq) goto loc_83321C38;
loc_83321C2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r28,0,26,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// b 0x83321c4c
	goto loc_83321C4C;
loc_83321C38:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83321c54
	if (!ctx.cr6.eq) goto loc_83321C54;
loc_83321C40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r27,0,26,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 0) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_83321C4C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83321c6c
	goto loc_83321C6C;
loc_83321C54:
	// li r7,2451
	ctx.r7.s64 = 2451;
loc_83321C58:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83321C6C;
	sub_8320CF10(ctx, base);
loc_83321C6C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83321C74"))) PPC_WEAK_FUNC(sub_83321C74);
PPC_FUNC_IMPL(__imp__sub_83321C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83321C78"))) PPC_WEAK_FUNC(sub_83321C78);
PPC_FUNC_IMPL(__imp__sub_83321C78) {
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
	// lwz r4,952(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 952);
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x83340fb0
	ctx.lr = 0x83321C98;
	sub_83340FB0(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x83321ce0
	if (ctx.cr6.eq) goto loc_83321CE0;
	// ble cr6,0x83321cd8
	if (!ctx.cr6.gt) goto loc_83321CD8;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// ble cr6,0x83321cd0
	if (!ctx.cr6.gt) goto loc_83321CD0;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bgt cr6,0x83321cd8
	if (ctx.cr6.gt) goto loc_83321CD8;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,2096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83321ce8
	goto loc_83321CE8;
loc_83321CD0:
	// lwz r11,2088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2088);
	// b 0x83321ce4
	goto loc_83321CE4;
loc_83321CD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83321ce8
	goto loc_83321CE8;
loc_83321CE0:
	// lwz r11,2084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2084);
loc_83321CE4:
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_83321CE8:
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

__attribute__((alias("__imp__sub_83321CFC"))) PPC_WEAK_FUNC(sub_83321CFC);
PPC_FUNC_IMPL(__imp__sub_83321CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83321D00"))) PPC_WEAK_FUNC(sub_83321D00);
PPC_FUNC_IMPL(__imp__sub_83321D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83321D08;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r30,184(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83321d58
	if (!ctx.cr6.eq) goto loc_83321D58;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// b 0x83321d5c
	goto loc_83321D5C;
loc_83321D58:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
loc_83321D5C:
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// lwz r4,176(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r3,1536(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1536);
	// addi r6,r11,-31984
	ctx.r6.s64 = ctx.r11.s64 + -31984;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8330fca0
	ctx.lr = 0x83321D78;
	sub_8330FCA0(ctx, base);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-15152
	ctx.r11.s64 = ctx.r11.s64 + -15152;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwimi r11,r9,0,0,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFE0) | (ctx.r11.u64 & 0xFFFFFFFF0000001F);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,2736(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2736);
	// lwz r4,236(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 236);
	// bl 0x83352438
	ctx.lr = 0x83321DA4;
	sub_83352438(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r3,5,21,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 5) & 0x7E0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF81F);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// rlwimi r10,r11,11,20,20
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 11) & 0x800) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,2736(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2736);
	// bl 0x83352438
	ctx.lr = 0x83321DCC;
	sub_83352438(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r3,12,14,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 12) & 0x3F000) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0FFF);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,104(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// rlwimi r9,r10,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwimi r11,r9,18,12,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 18) & 0xC0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF3FFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,172(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// rlwimi r11,r10,20,7,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x1F00000) | (ctx.r11.u64 & 0xFFFFFFFFFE0FFFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,180(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83321e10
	if (!ctx.cr6.eq) goto loc_83321E10;
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// b 0x83321e28
	goto loc_83321E28;
loc_83321E10:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x83321e20
	if (!ctx.cr6.eq) goto loc_83321E20;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// b 0x83321e28
	goto loc_83321E28;
loc_83321E20:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwimi r11,r10,25,6,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0x2000000) | (ctx.r11.u64 & 0xFFFFFFFFFDFFFFFF);
loc_83321E28:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lbz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 132);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r10,r11,26,4,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 26) & 0xC000000) | (ctx.r10.u64 & 0xFFFFFFFFF3FFFFFF);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r10,133(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 133);
	// rlwimi r11,r10,28,2,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lbz r11,134(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 134);
	// rlwimi r10,r11,30,0,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 30) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x83321eec
	if (ctx.cr6.eq) goto loc_83321EEC;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x83321eec
	if (ctx.cr6.eq) goto loc_83321EEC;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// beq cr6,0x83321eec
	if (ctx.cr6.eq) goto loc_83321EEC;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// beq cr6,0x83321eec
	if (ctx.cr6.eq) goto loc_83321EEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r4,128(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 128);
	// bl 0x8331ea28
	ctx.lr = 0x83321E8C;
	sub_8331EA28(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r11,r10,0,29,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r4,129(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 129);
	// bl 0x8331ea28
	ctx.lr = 0x83321EA8;
	sub_8331EA28(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// rlwimi r11,r10,3,26,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0x38) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC7);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r4,130(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 130);
	// bl 0x8331ea28
	ctx.lr = 0x83321EC4;
	sub_8331EA28(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// rlwimi r11,r10,6,23,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x1C0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE3F);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r4,131(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 131);
	// bl 0x8331ea28
	ctx.lr = 0x83321EE0;
	sub_8331EA28(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r3,9,20,22
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 9) & 0xE00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF1FF);
	// b 0x83321ef4
	goto loc_83321EF4;
loc_83321EEC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r11,r11,4095
	ctx.r11.u64 = ctx.r11.u64 | 4095;
loc_83321EF4:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f29,-18200(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18200);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f30,6380(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6380);
	ctx.f30.f64 = double(temp.f32);
	// addi r27,r10,-31144
	ctx.r27.s64 = ctx.r10.s64 + -31144;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r9,r11,12,18,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x3000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFCFFF);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lhz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// rlwimi r8,r9,14,16,17
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 14) & 0xC000) | (ctx.r8.u64 & 0xFFFFFFFFFFFF3FFF);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// rlwimi r8,r11,16,14,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x30000) | (ctx.r8.u64 & 0xFFFFFFFFFFFCFFFF);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lhz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// rlwimi r11,r10,18,11,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0x1C0000) | (ctx.r11.u64 & 0xFFFFFFFFFFE3FFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// rlwimi r10,r11,21,8,10
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 21) & 0xE00000) | (ctx.r10.u64 & 0xFFFFFFFFFF1FFFFF);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lhz r10,10(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// rlwimi r11,r10,24,6,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0x3000000) | (ctx.r11.u64 & 0xFFFFFFFFFCFFFFFF);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// rlwimi r10,r11,26,4,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 26) & 0xC000000) | (ctx.r10.u64 & 0xFFFFFFFFF3FFFFFF);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lhz r10,14(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// rlwimi r11,r10,28,3,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0x10000000) | (ctx.r11.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lhz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// rlwimi r10,r11,29,1,2
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 29) & 0x60000000) | (ctx.r10.u64 & 0xFFFFFFFF9FFFFFFF);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lhz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 20);
	// rlwimi r11,r7,0,0,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r11,r10,0,30,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF0003;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lhz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 24);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8332201c
	if (ctx.cr6.eq) goto loc_8332201C;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x8332201c
	if (ctx.cr6.eq) goto loc_8332201C;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x8332201c
	if (ctx.cr6.eq) goto loc_8332201C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-30240
	ctx.r5.s64 = ctx.r11.s64 + -30240;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,3057
	ctx.r7.s64 = 3057;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8332201C;
	sub_8320CF10(ctx, base);
loc_8332201C:
	// lhz r11,26(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 26);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x83322068
	if (ctx.cr6.eq) goto loc_83322068;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x83322068
	if (ctx.cr6.eq) goto loc_83322068;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x83322068
	if (ctx.cr6.eq) goto loc_83322068;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-30328
	ctx.r5.s64 = ctx.r11.s64 + -30328;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,3059
	ctx.r7.s64 = 3059;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83322068;
	sub_8320CF10(ctx, base);
loc_83322068:
	// lhz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 28);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x833220b4
	if (ctx.cr6.eq) goto loc_833220B4;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x833220b4
	if (ctx.cr6.eq) goto loc_833220B4;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x833220b4
	if (ctx.cr6.eq) goto loc_833220B4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-30416
	ctx.r5.s64 = ctx.r11.s64 + -30416;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,3061
	ctx.r7.s64 = 3061;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833220B4;
	sub_8320CF10(ctx, base);
loc_833220B4:
	// lhz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,17
	ctx.r11.s64 = 17;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x833220e8
	if (!ctx.cr6.eq) goto loc_833220E8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r9,0,16,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFE0FFFF;
	// b 0x8332210c
	goto loc_8332210C;
loc_833220E8:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x833220fc
	if (!ctx.cr6.eq) goto loc_833220FC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r9,r10,16,11,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x1F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFE0FFFF);
	// b 0x8332210c
	goto loc_8332210C;
loc_833220FC:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x83322110
	if (!ctx.cr6.eq) goto loc_83322110;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r9,r11,16,11,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFE0FFFF);
loc_8332210C:
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_83322110:
	// lhz r9,26(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 26);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8332213c
	if (!ctx.cr6.eq) goto loc_8332213C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r9,0,11,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC1FFFFF;
	// b 0x83322160
	goto loc_83322160;
loc_8332213C:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x83322150
	if (!ctx.cr6.eq) goto loc_83322150;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r9,r10,21,6,10
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 21) & 0x3E00000) | (ctx.r9.u64 & 0xFFFFFFFFFC1FFFFF);
	// b 0x83322160
	goto loc_83322160;
loc_83322150:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x83322164
	if (!ctx.cr6.eq) goto loc_83322164;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r9,r11,21,6,10
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 21) & 0x3E00000) | (ctx.r9.u64 & 0xFFFFFFFFFC1FFFFF);
loc_83322160:
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_83322164:
	// lhz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 28);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x83322190
	if (!ctx.cr6.eq) goto loc_83322190;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,6,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFF83FFFFFF;
	// b 0x833221a0
	goto loc_833221A0;
loc_83322190:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x833221a8
	if (!ctx.cr6.eq) goto loc_833221A8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r11,r10,26,1,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0x7C000000) | (ctx.r11.u64 & 0xFFFFFFFF83FFFFFF);
loc_833221A0:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x833221bc
	goto loc_833221BC;
loc_833221A8:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x833221bc
	if (!ctx.cr6.eq) goto loc_833221BC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r10,r11,26,1,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 26) & 0x7C000000) | (ctx.r10.u64 & 0xFFFFFFFF83FFFFFF);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_833221BC:
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83322218
	if (ctx.cr6.eq) goto loc_83322218;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8332220c
	if (ctx.cr6.eq) goto loc_8332220C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x833221f8
	if (ctx.cr6.eq) goto loc_833221F8;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-12392
	ctx.r5.s64 = ctx.r11.s64 + -12392;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,3099
	ctx.r7.s64 = 3099;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x833221F4;
	sub_8320CF10(ctx, base);
	// b 0x83322230
	goto loc_83322230;
loc_833221F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// b 0x83322228
	goto loc_83322228;
loc_8332220C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// b 0x83322220
	goto loc_83322220;
loc_83322218:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
loc_83322220:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
loc_83322228:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_83322230:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83322244"))) PPC_WEAK_FUNC(sub_83322244);
PPC_FUNC_IMPL(__imp__sub_83322244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83322248"))) PPC_WEAK_FUNC(sub_83322248);
PPC_FUNC_IMPL(__imp__sub_83322248) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r3,24,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 24) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r3,8,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r3,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,25,14,14
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 25) & 0x20000) | (ctx.r10.u64 & 0xFFFFFFFFFFFDFFFF);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwimi r9,r10,25,21,22
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0x600) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF9FF);
	// rlwinm r10,r9,25,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0xE;
	// nor r3,r10,r11
	ctx.r3.u64 = ~(ctx.r10.u64 | ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83322278"))) PPC_WEAK_FUNC(sub_83322278);
PPC_FUNC_IMPL(__imp__sub_83322278) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r3,24,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 24) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r3,8,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r3,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// addis r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 16777216;
	// addis r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -131072;
	// addi r8,r11,-256
	ctx.r8.s64 = ctx.r11.s64 + -256;
	// rlwimi r9,r10,26,12,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0xC0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF3FFFF);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// rlwimi r8,r9,26,18,21
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 26) & 0x3C00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFC3FF);
	// rlwinm r10,r8,26,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0xFC;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833222AC"))) PPC_WEAK_FUNC(sub_833222AC);
PPC_FUNC_IMPL(__imp__sub_833222AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833222B0"))) PPC_WEAK_FUNC(sub_833222B0);
PPC_FUNC_IMPL(__imp__sub_833222B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x833222B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,2736(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2736);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r9,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x83322328
	if (ctx.cr6.lt) goto loc_83322328;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x8331eb58
	ctx.lr = 0x833222FC;
	sub_8331EB58(ctx, base);
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stb r10,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r10.u8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83322328:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83322330"))) PPC_WEAK_FUNC(sub_83322330);
PPC_FUNC_IMPL(__imp__sub_83322330) {
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
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83322370
	if (ctx.cr0.eq) goto loc_83322370;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8331ebf0
	ctx.lr = 0x83322358;
	sub_8331EBF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_83322370:
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

__attribute__((alias("__imp__sub_83322384"))) PPC_WEAK_FUNC(sub_83322384);
PPC_FUNC_IMPL(__imp__sub_83322384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83322388"))) PPC_WEAK_FUNC(sub_83322388);
PPC_FUNC_IMPL(__imp__sub_83322388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83322390;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,2736(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2736);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x83322424
	if (ctx.cr6.lt) goto loc_83322424;
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x8331eb58
	ctx.lr = 0x833223F0;
	sub_8331EB58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83322424:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8332242C"))) PPC_WEAK_FUNC(sub_8332242C);
PPC_FUNC_IMPL(__imp__sub_8332242C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83322430"))) PPC_WEAK_FUNC(sub_83322430);
PPC_FUNC_IMPL(__imp__sub_83322430) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x8332244C;
	sub_8333CEF8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_83322464"))) PPC_WEAK_FUNC(sub_83322464);
PPC_FUNC_IMPL(__imp__sub_83322464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83322468"))) PPC_WEAK_FUNC(sub_83322468);
PPC_FUNC_IMPL(__imp__sub_83322468) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83322498
	if (!ctx.cr6.lt) goto loc_83322498;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8332249c
	goto loc_8332249C;
loc_83322498:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8332249C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x8333cd18
	ctx.lr = 0x833224AC;
	sub_8333CD18(ctx, base);
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

__attribute__((alias("__imp__sub_833224C4"))) PPC_WEAK_FUNC(sub_833224C4);
PPC_FUNC_IMPL(__imp__sub_833224C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833224C8"))) PPC_WEAK_FUNC(sub_833224C8);
PPC_FUNC_IMPL(__imp__sub_833224C8) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x833224E4;
	sub_8333CEF8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_833224FC"))) PPC_WEAK_FUNC(sub_833224FC);
PPC_FUNC_IMPL(__imp__sub_833224FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83322500"))) PPC_WEAK_FUNC(sub_83322500);
PPC_FUNC_IMPL(__imp__sub_83322500) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83322530
	if (!ctx.cr6.lt) goto loc_83322530;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83322534
	goto loc_83322534;
loc_83322530:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83322534:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x8333cd18
	ctx.lr = 0x83322544;
	sub_8333CD18(ctx, base);
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

__attribute__((alias("__imp__sub_8332255C"))) PPC_WEAK_FUNC(sub_8332255C);
PPC_FUNC_IMPL(__imp__sub_8332255C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83322560"))) PPC_WEAK_FUNC(sub_83322560);
PPC_FUNC_IMPL(__imp__sub_83322560) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8333cef8
	ctx.lr = 0x8332257C;
	sub_8333CEF8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

