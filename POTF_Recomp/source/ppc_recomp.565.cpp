#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8322A7E0"))) PPC_WEAK_FUNC(sub_8322A7E0);
PPC_FUNC_IMPL(__imp__sub_8322A7E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322a7fc
	if (!ctx.cr0.eq) goto loc_8322A7FC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8322A7FC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82cb16f0
	sub_82CB16F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322A810"))) PPC_WEAK_FUNC(sub_8322A810);
PPC_FUNC_IMPL(__imp__sub_8322A810) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322a82c
	if (!ctx.cr0.eq) goto loc_8322A82C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8322A82C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82cb16f0
	sub_82CB16F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322A840"))) PPC_WEAK_FUNC(sub_8322A840);
PPC_FUNC_IMPL(__imp__sub_8322A840) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322a858
	if (!ctx.cr0.eq) goto loc_8322A858;
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_8322A858:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322A868"))) PPC_WEAK_FUNC(sub_8322A868);
PPC_FUNC_IMPL(__imp__sub_8322A868) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322a884
	if (!ctx.cr0.eq) goto loc_8322A884;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8322A884:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// b 0x8322a8ac
	goto loc_8322A8AC;
loc_8322A8A0:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_8322A8AC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// blt cr6,0x8322a8a0
	if (ctx.cr6.lt) goto loc_8322A8A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322A8BC"))) PPC_WEAK_FUNC(sub_8322A8BC);
PPC_FUNC_IMPL(__imp__sub_8322A8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322A8C0"))) PPC_WEAK_FUNC(sub_8322A8C0);
PPC_FUNC_IMPL(__imp__sub_8322A8C0) {
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

__attribute__((alias("__imp__sub_8322A8E8"))) PPC_WEAK_FUNC(sub_8322A8E8);
PPC_FUNC_IMPL(__imp__sub_8322A8E8) {
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

__attribute__((alias("__imp__sub_8322A900"))) PPC_WEAK_FUNC(sub_8322A900);
PPC_FUNC_IMPL(__imp__sub_8322A900) {
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

__attribute__((alias("__imp__sub_8322A918"))) PPC_WEAK_FUNC(sub_8322A918);
PPC_FUNC_IMPL(__imp__sub_8322A918) {
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

__attribute__((alias("__imp__sub_8322A948"))) PPC_WEAK_FUNC(sub_8322A948);
PPC_FUNC_IMPL(__imp__sub_8322A948) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322a95c
	if (ctx.cr0.eq) goto loc_8322A95C;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8322A95C:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// rlwinm r11,r11,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322A96C"))) PPC_WEAK_FUNC(sub_8322A96C);
PPC_FUNC_IMPL(__imp__sub_8322A96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322A970"))) PPC_WEAK_FUNC(sub_8322A970);
PPC_FUNC_IMPL(__imp__sub_8322A970) {
	PPC_FUNC_PROLOGUE();
	// addi r7,r5,1
	ctx.r7.s64 = ctx.r5.s64 + 1;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// clrlwi r10,r7,27
	ctx.r10.u64 = ctx.r7.u32 & 0x1F;
	// li r9,2
	ctx.r9.s64 = 2;
	// not r5,r8
	ctx.r5.u64 = ~ctx.r8.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// clrlwi r6,r11,27
	ctx.r6.u64 = ctx.r11.u32 & 0x1F;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// clrlwi. r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r5,r4,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r6.u8 & 0x3F));
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// bne 0x8322a9ac
	if (!ctx.cr0.eq) goto loc_8322A9AC;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_8322A9AC:
	// rlwinm r11,r11,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// beq cr6,0x8322a9c0
	if (ctx.cr6.eq) goto loc_8322A9C0;
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
loc_8322A9C0:
	// rlwinm r11,r7,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// and r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 & ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322a9e4
	if (!ctx.cr6.eq) goto loc_8322A9E4;
	// and r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 & ctx.r4.u64;
	// srw r3,r11,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// blr 
	return;
loc_8322A9E4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subfic r10,r6,32
	ctx.xer.ca = ctx.r6.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r6.s64;
	// srw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 | ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AA00"))) PPC_WEAK_FUNC(sub_8322AA00);
PPC_FUNC_IMPL(__imp__sub_8322AA00) {
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

__attribute__((alias("__imp__sub_8322AA28"))) PPC_WEAK_FUNC(sub_8322AA28);
PPC_FUNC_IMPL(__imp__sub_8322AA28) {
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

__attribute__((alias("__imp__sub_8322AA50"))) PPC_WEAK_FUNC(sub_8322AA50);
PPC_FUNC_IMPL(__imp__sub_8322AA50) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AA5C"))) PPC_WEAK_FUNC(sub_8322AA5C);
PPC_FUNC_IMPL(__imp__sub_8322AA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322AA60"))) PPC_WEAK_FUNC(sub_8322AA60);
PPC_FUNC_IMPL(__imp__sub_8322AA60) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AA68"))) PPC_WEAK_FUNC(sub_8322AA68);
PPC_FUNC_IMPL(__imp__sub_8322AA68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AA74"))) PPC_WEAK_FUNC(sub_8322AA74);
PPC_FUNC_IMPL(__imp__sub_8322AA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322AA78"))) PPC_WEAK_FUNC(sub_8322AA78);
PPC_FUNC_IMPL(__imp__sub_8322AA78) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AA84"))) PPC_WEAK_FUNC(sub_8322AA84);
PPC_FUNC_IMPL(__imp__sub_8322AA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322AA88"))) PPC_WEAK_FUNC(sub_8322AA88);
PPC_FUNC_IMPL(__imp__sub_8322AA88) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AA94"))) PPC_WEAK_FUNC(sub_8322AA94);
PPC_FUNC_IMPL(__imp__sub_8322AA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322AA98"))) PPC_WEAK_FUNC(sub_8322AA98);
PPC_FUNC_IMPL(__imp__sub_8322AA98) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AAA0"))) PPC_WEAK_FUNC(sub_8322AAA0);
PPC_FUNC_IMPL(__imp__sub_8322AAA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AAAC"))) PPC_WEAK_FUNC(sub_8322AAAC);
PPC_FUNC_IMPL(__imp__sub_8322AAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322AAB0"))) PPC_WEAK_FUNC(sub_8322AAB0);
PPC_FUNC_IMPL(__imp__sub_8322AAB0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AABC"))) PPC_WEAK_FUNC(sub_8322AABC);
PPC_FUNC_IMPL(__imp__sub_8322AABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322AAC0"))) PPC_WEAK_FUNC(sub_8322AAC0);
PPC_FUNC_IMPL(__imp__sub_8322AAC0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AACC"))) PPC_WEAK_FUNC(sub_8322AACC);
PPC_FUNC_IMPL(__imp__sub_8322AACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322AAD0"))) PPC_WEAK_FUNC(sub_8322AAD0);
PPC_FUNC_IMPL(__imp__sub_8322AAD0) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AAD8"))) PPC_WEAK_FUNC(sub_8322AAD8);
PPC_FUNC_IMPL(__imp__sub_8322AAD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AAE4"))) PPC_WEAK_FUNC(sub_8322AAE4);
PPC_FUNC_IMPL(__imp__sub_8322AAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322AAE8"))) PPC_WEAK_FUNC(sub_8322AAE8);
PPC_FUNC_IMPL(__imp__sub_8322AAE8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AAF4"))) PPC_WEAK_FUNC(sub_8322AAF4);
PPC_FUNC_IMPL(__imp__sub_8322AAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322AAF8"))) PPC_WEAK_FUNC(sub_8322AAF8);
PPC_FUNC_IMPL(__imp__sub_8322AAF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r8,r3,1
	ctx.r8.u64 = ctx.r3.u64 | 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AB24"))) PPC_WEAK_FUNC(sub_8322AB24);
PPC_FUNC_IMPL(__imp__sub_8322AB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322AB28"))) PPC_WEAK_FUNC(sub_8322AB28);
PPC_FUNC_IMPL(__imp__sub_8322AB28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AB34"))) PPC_WEAK_FUNC(sub_8322AB34);
PPC_FUNC_IMPL(__imp__sub_8322AB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322AB38"))) PPC_WEAK_FUNC(sub_8322AB38);
PPC_FUNC_IMPL(__imp__sub_8322AB38) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r8,r3,1
	ctx.r8.u64 = ctx.r3.u64 | 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AB64"))) PPC_WEAK_FUNC(sub_8322AB64);
PPC_FUNC_IMPL(__imp__sub_8322AB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322AB68"))) PPC_WEAK_FUNC(sub_8322AB68);
PPC_FUNC_IMPL(__imp__sub_8322AB68) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r8,r3,1
	ctx.r8.u64 = ctx.r3.u64 | 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AB94"))) PPC_WEAK_FUNC(sub_8322AB94);
PPC_FUNC_IMPL(__imp__sub_8322AB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322AB98"))) PPC_WEAK_FUNC(sub_8322AB98);
PPC_FUNC_IMPL(__imp__sub_8322AB98) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// not r10,r9
	ctx.r10.u64 = ~ctx.r9.u64;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// bne 0x8322abbc
	if (!ctx.cr0.eq) goto loc_8322ABBC;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_8322ABBC:
	// rlwinm r11,r11,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// beq cr6,0x8322abd0
	if (ctx.cr6.eq) goto loc_8322ABD0;
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
loc_8322ABD0:
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subfic r11,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r7.s64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AC08"))) PPC_WEAK_FUNC(sub_8322AC08);
PPC_FUNC_IMPL(__imp__sub_8322AC08) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// not r10,r9
	ctx.r10.u64 = ~ctx.r9.u64;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// bne 0x8322ac2c
	if (!ctx.cr0.eq) goto loc_8322AC2C;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_8322AC2C:
	// rlwinm r11,r11,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// beq cr6,0x8322ac40
	if (ctx.cr6.eq) goto loc_8322AC40;
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
loc_8322AC40:
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subfic r11,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r7.s64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AC78"))) PPC_WEAK_FUNC(sub_8322AC78);
PPC_FUNC_IMPL(__imp__sub_8322AC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8322AC80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// slw r7,r3,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r8.u8 & 0x3F));
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8322acb4
	if (!ctx.cr0.eq) goto loc_8322ACB4;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_8322ACB4:
	// rlwinm r11,r11,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// beq cr6,0x8322acd8
	if (ctx.cr6.eq) goto loc_8322ACD8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x8322acdc
	goto loc_8322ACDC;
loc_8322ACD8:
	// addi r9,r6,4
	ctx.r9.s64 = ctx.r6.s64 + 4;
loc_8322ACDC:
	// rlwinm r10,r4,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// b 0x8322acfc
	goto loc_8322ACFC;
loc_8322ACE4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// andc. r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8322ad08
	if (!ctx.cr0.eq) goto loc_8322AD08;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8322ACFC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8322ace4
	if (ctx.cr6.lt) goto loc_8322ACE4;
	// b 0x8322ad64
	goto loc_8322AD64;
loc_8322AD08:
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// andc r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subfic r8,r8,31
	ctx.xer.ca = ctx.r8.u32 <= 31;
	ctx.r8.s64 = 31 - ctx.r8.s64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8322ad28
	if (!ctx.cr6.eq) goto loc_8322AD28;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r8,32
	ctx.r8.s64 = 32;
loc_8322AD28:
	// addi r31,r8,-1
	ctx.r31.s64 = ctx.r8.s64 + -1;
	// rlwinm r30,r10,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r31,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8322ad50
	if (!ctx.cr6.eq) goto loc_8322AD50;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x8322ad64
	if (ctx.cr6.gt) goto loc_8322AD64;
loc_8322AD50:
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8322a970
	ctx.lr = 0x8322AD5C;
	sub_8322A970(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
loc_8322AD64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322AD6C"))) PPC_WEAK_FUNC(sub_8322AD6C);
PPC_FUNC_IMPL(__imp__sub_8322AD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322AD70"))) PPC_WEAK_FUNC(sub_8322AD70);
PPC_FUNC_IMPL(__imp__sub_8322AD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8322AD78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// not r7,r8
	ctx.r7.u64 = ~ctx.r8.u64;
	// slw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// clrlwi. r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// bne 0x8322adac
	if (!ctx.cr0.eq) goto loc_8322ADAC;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_8322ADAC:
	// rlwinm r11,r11,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// bne cr6,0x8322adc4
	if (!ctx.cr6.eq) goto loc_8322ADC4;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_8322ADC4:
	// rlwinm r10,r4,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// li r7,-1
	ctx.r7.s64 = -1;
	// b 0x8322ade8
	goto loc_8322ADE8;
loc_8322ADD0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// andc. r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8322adfc
	if (!ctx.cr0.eq) goto loc_8322ADFC;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8322ADE8:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8322add0
	if (!ctx.cr6.lt) goto loc_8322ADD0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
loc_8322ADF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8322ADFC:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322ae14
	if (!ctx.cr6.eq) goto loc_8322AE14;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r11,32
	ctx.r11.s64 = 32;
loc_8322AE14:
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// rlwinm r30,r10,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r11,r31,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFC;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// bl 0x8322a970
	ctx.lr = 0x8322AE2C;
	sub_8322A970(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// b 0x8322adf4
	goto loc_8322ADF4;
}

__attribute__((alias("__imp__sub_8322AE38"))) PPC_WEAK_FUNC(sub_8322AE38);
PPC_FUNC_IMPL(__imp__sub_8322AE38) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322aeb4
	if (ctx.cr0.eq) goto loc_8322AEB4;
	// lbz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322aeb4
	if (ctx.cr0.eq) goto loc_8322AEB4;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// clrlwi r9,r9,19
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8322ae78
	if (!ctx.cr6.gt) goto loc_8322AE78;
loc_8322AE70:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8322AE78:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8322aeac
	if (!ctx.cr0.eq) goto loc_8322AEAC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322aeac
	if (ctx.cr6.eq) goto loc_8322AEAC;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r9,r9,19
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8322aeac
	if (ctx.cr6.lt) goto loc_8322AEAC;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8322ae78
	if (!ctx.cr6.eq) goto loc_8322AE78;
	// b 0x8322ae70
	goto loc_8322AE70;
loc_8322AEAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8322AEB4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x832f15c8
	sub_832F15C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322AEBC"))) PPC_WEAK_FUNC(sub_8322AEBC);
PPC_FUNC_IMPL(__imp__sub_8322AEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322AEC0"))) PPC_WEAK_FUNC(sub_8322AEC0);
PPC_FUNC_IMPL(__imp__sub_8322AEC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322aee0
	if (ctx.cr6.eq) goto loc_8322AEE0;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8322aee8
	goto loc_8322AEE8;
loc_8322AEE0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8322AEE8:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322aef4
	if (ctx.cr0.eq) goto loc_8322AEF4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322AEF4:
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AF08"))) PPC_WEAK_FUNC(sub_8322AF08);
PPC_FUNC_IMPL(__imp__sub_8322AF08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322af20
	if (!ctx.cr0.eq) goto loc_8322AF20;
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_8322AF20:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AF30"))) PPC_WEAK_FUNC(sub_8322AF30);
PPC_FUNC_IMPL(__imp__sub_8322AF30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322af4c
	if (!ctx.cr0.eq) goto loc_8322AF4C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_8322AF4C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82cb16f0
	sub_82CB16F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322AF60"))) PPC_WEAK_FUNC(sub_8322AF60);
PPC_FUNC_IMPL(__imp__sub_8322AF60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322af7c
	if (!ctx.cr0.eq) goto loc_8322AF7C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_8322AF7C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82cb16f0
	sub_82CB16F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322AF90"))) PPC_WEAK_FUNC(sub_8322AF90);
PPC_FUNC_IMPL(__imp__sub_8322AF90) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
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
	// beq 0x8322afd0
	if (ctx.cr0.eq) goto loc_8322AFD0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8322AFD0:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AFE0"))) PPC_WEAK_FUNC(sub_8322AFE0);
PPC_FUNC_IMPL(__imp__sub_8322AFE0) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322b01c
	if (ctx.cr0.eq) goto loc_8322B01C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83204d00
	ctx.lr = 0x8322B014;
	sub_83204D00(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8322B01C:
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

__attribute__((alias("__imp__sub_8322B030"))) PPC_WEAK_FUNC(sub_8322B030);
PPC_FUNC_IMPL(__imp__sub_8322B030) {
	PPC_FUNC_PROLOGUE();
	// b 0x8322a970
	sub_8322A970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322B034"))) PPC_WEAK_FUNC(sub_8322B034);
PPC_FUNC_IMPL(__imp__sub_8322B034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B038"))) PPC_WEAK_FUNC(sub_8322B038);
PPC_FUNC_IMPL(__imp__sub_8322B038) {
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

__attribute__((alias("__imp__sub_8322B050"))) PPC_WEAK_FUNC(sub_8322B050);
PPC_FUNC_IMPL(__imp__sub_8322B050) {
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

__attribute__((alias("__imp__sub_8322B064"))) PPC_WEAK_FUNC(sub_8322B064);
PPC_FUNC_IMPL(__imp__sub_8322B064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B068"))) PPC_WEAK_FUNC(sub_8322B068);
PPC_FUNC_IMPL(__imp__sub_8322B068) {
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

__attribute__((alias("__imp__sub_8322B080"))) PPC_WEAK_FUNC(sub_8322B080);
PPC_FUNC_IMPL(__imp__sub_8322B080) {
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

__attribute__((alias("__imp__sub_8322B094"))) PPC_WEAK_FUNC(sub_8322B094);
PPC_FUNC_IMPL(__imp__sub_8322B094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B098"))) PPC_WEAK_FUNC(sub_8322B098);
PPC_FUNC_IMPL(__imp__sub_8322B098) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322b0ac
	if (ctx.cr0.eq) goto loc_8322B0AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8322B0AC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322B0BC"))) PPC_WEAK_FUNC(sub_8322B0BC);
PPC_FUNC_IMPL(__imp__sub_8322B0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B0C0"))) PPC_WEAK_FUNC(sub_8322B0C0);
PPC_FUNC_IMPL(__imp__sub_8322B0C0) {
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

__attribute__((alias("__imp__sub_8322B0D8"))) PPC_WEAK_FUNC(sub_8322B0D8);
PPC_FUNC_IMPL(__imp__sub_8322B0D8) {
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

__attribute__((alias("__imp__sub_8322B0EC"))) PPC_WEAK_FUNC(sub_8322B0EC);
PPC_FUNC_IMPL(__imp__sub_8322B0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B0F0"))) PPC_WEAK_FUNC(sub_8322B0F0);
PPC_FUNC_IMPL(__imp__sub_8322B0F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322b104
	if (ctx.cr0.eq) goto loc_8322B104;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8322B104:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322B114"))) PPC_WEAK_FUNC(sub_8322B114);
PPC_FUNC_IMPL(__imp__sub_8322B114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B118"))) PPC_WEAK_FUNC(sub_8322B118);
PPC_FUNC_IMPL(__imp__sub_8322B118) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322b12c
	if (ctx.cr0.eq) goto loc_8322B12C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8322B12C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322B13C"))) PPC_WEAK_FUNC(sub_8322B13C);
PPC_FUNC_IMPL(__imp__sub_8322B13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B140"))) PPC_WEAK_FUNC(sub_8322B140);
PPC_FUNC_IMPL(__imp__sub_8322B140) {
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

__attribute__((alias("__imp__sub_8322B154"))) PPC_WEAK_FUNC(sub_8322B154);
PPC_FUNC_IMPL(__imp__sub_8322B154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B158"))) PPC_WEAK_FUNC(sub_8322B158);
PPC_FUNC_IMPL(__imp__sub_8322B158) {
	PPC_FUNC_PROLOGUE();
	// b 0x8322ab98
	sub_8322AB98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322B15C"))) PPC_WEAK_FUNC(sub_8322B15C);
PPC_FUNC_IMPL(__imp__sub_8322B15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B160"))) PPC_WEAK_FUNC(sub_8322B160);
PPC_FUNC_IMPL(__imp__sub_8322B160) {
	PPC_FUNC_PROLOGUE();
	// b 0x8322ac08
	sub_8322AC08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322B164"))) PPC_WEAK_FUNC(sub_8322B164);
PPC_FUNC_IMPL(__imp__sub_8322B164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B168"))) PPC_WEAK_FUNC(sub_8322B168);
PPC_FUNC_IMPL(__imp__sub_8322B168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8322B170;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
loc_8322B184:
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ble cr6,0x8322b1a0
	if (!ctx.cr6.gt) goto loc_8322B1A0;
	// bl 0x8322ac78
	ctx.lr = 0x8322B19C;
	sub_8322AC78(ctx, base);
	// b 0x8322b1a8
	goto loc_8322B1A8;
loc_8322B1A0:
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// bl 0x8322ad70
	ctx.lr = 0x8322B1A8;
	sub_8322AD70(ctx, base);
loc_8322B1A8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8322b220
	if (ctx.cr6.eq) goto loc_8322B220;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// beq cr6,0x8322b22c
	if (ctx.cr6.eq) goto loc_8322B22C;
	// lis r10,-27863
	ctx.r10.s64 = -1826029568;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,1186
	ctx.r9.s64 = 1186;
	// ori r10,r10,13532
	ctx.r10.u64 = ctx.r10.u64 | 13532;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8322b23c
	if (!ctx.cr6.lt) goto loc_8322B23C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r3,r28
	ctx.r10.u64 = ctx.r3.u64 + ctx.r28.u64;
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// rlwinm r4,r10,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322b208
	if (!ctx.cr0.eq) goto loc_8322B208;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x8322b214
	goto loc_8322B214;
loc_8322B208:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8322B214:
	// add r10,r4,r29
	ctx.r10.u64 = ctx.r4.u64 + ctx.r29.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8322b184
	if (!ctx.cr6.gt) goto loc_8322B184;
loc_8322B220:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8322B224:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8322B22C:
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x8322b240
	goto loc_8322B240;
loc_8322B23C:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
loc_8322B240:
	// rlwimi r11,r3,2,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 2) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8322b224
	goto loc_8322B224;
}

__attribute__((alias("__imp__sub_8322B24C"))) PPC_WEAK_FUNC(sub_8322B24C);
PPC_FUNC_IMPL(__imp__sub_8322B24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B250"))) PPC_WEAK_FUNC(sub_8322B250);
PPC_FUNC_IMPL(__imp__sub_8322B250) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322b280
	if (!ctx.cr0.eq) goto loc_8322B280;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x8322b294
	goto loc_8322B294;
loc_8322B280:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb16f0
	ctx.lr = 0x8322B294;
	sub_82CB16F0(ctx, base);
loc_8322B294:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8322b2b0
	if (ctx.cr6.eq) goto loc_8322B2B0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb16f0
	ctx.lr = 0x8322B2B0;
	sub_82CB16F0(ctx, base);
loc_8322B2B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8322B2CC"))) PPC_WEAK_FUNC(sub_8322B2CC);
PPC_FUNC_IMPL(__imp__sub_8322B2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B2D0"))) PPC_WEAK_FUNC(sub_8322B2D0);
PPC_FUNC_IMPL(__imp__sub_8322B2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8322B2D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r30,r28,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8322b344
	if (!ctx.cr6.gt) goto loc_8322B344;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8321e0d0
	ctx.lr = 0x8322B310;
	sub_8321E0D0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x8322B324;
	sub_82CB1160(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83227d20
	ctx.lr = 0x8322B33C;
	sub_83227D20(ctx, base);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_8322B344:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8322b354
	if (!ctx.cr6.gt) goto loc_8322B354;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_8322B354:
	// clrlwi r9,r28,28
	ctx.r9.u64 = ctx.r28.u32 & 0xF;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
loc_8322B360:
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// and. r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8322b378
	if (ctx.cr0.eq) goto loc_8322B378;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r27,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r27.u32);
loc_8322B378:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8322b360
	if (ctx.cr6.lt) goto loc_8322B360;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322B390"))) PPC_WEAK_FUNC(sub_8322B390);
PPC_FUNC_IMPL(__imp__sub_8322B390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8322B398;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322b420
	if (!ctx.cr0.eq) goto loc_8322B420;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8322b420
	if (ctx.cr0.eq) goto loc_8322B420;
	// clrlwi r27,r5,24
	ctx.r27.u64 = ctx.r5.u32 & 0xFF;
loc_8322B3C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8322a198
	ctx.lr = 0x8322B3D0;
	sub_8322A198(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8322b404
	if (ctx.cr6.eq) goto loc_8322B404;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8322B3DC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8322b404
	if (ctx.cr6.eq) goto loc_8322B404;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8322b3fc
	if (!ctx.cr6.eq) goto loc_8322B3FC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8322a198
	ctx.lr = 0x8322B3FC;
	sub_8322A198(ctx, base);
loc_8322B3FC:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8322b3dc
	goto loc_8322B3DC;
loc_8322B404:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322b420
	if (!ctx.cr0.eq) goto loc_8322B420;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8322b3c4
	if (!ctx.cr0.eq) goto loc_8322B3C4;
loc_8322B420:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322B428"))) PPC_WEAK_FUNC(sub_8322B428);
PPC_FUNC_IMPL(__imp__sub_8322B428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x8322B430;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322b584
	if (!ctx.cr0.eq) goto loc_8322B584;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// b 0x8322b578
	goto loc_8322B578;
loc_8322B454:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r27,r28,1
	ctx.r27.s64 = ctx.r28.s64 + 1;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8322b474
	if (ctx.cr6.lt) goto loc_8322B474;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8322b478
	if (!ctx.cr6.gt) goto loc_8322B478;
loc_8322B474:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322B478:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322b54c
	if (ctx.cr0.eq) goto loc_8322B54C;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322b54c
	if (!ctx.cr0.eq) goto loc_8322B54C;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8322b54c
	if (ctx.cr0.eq) goto loc_8322B54C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8322b4b8
	if (ctx.cr6.lt) goto loc_8322B4B8;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8322b4bc
	if (!ctx.cr6.gt) goto loc_8322B4BC;
loc_8322B4B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322B4BC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322b54c
	if (ctx.cr0.eq) goto loc_8322B54C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x8321db70
	ctx.lr = 0x8322B4D0;
	sub_8321DB70(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8322b4e0
	if (!ctx.cr6.eq) goto loc_8322B4E0;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x8322b540
	goto loc_8322B540;
loc_8322B4E0:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322b540
	if (ctx.cr0.eq) goto loc_8322B540;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8324c470
	ctx.lr = 0x8322B4F0;
	sub_8324C470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322b540
	if (ctx.cr0.eq) goto loc_8322B540;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8322B4FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322b520
	if (ctx.cr6.eq) goto loc_8322B520;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8322b518
	if (ctx.cr6.eq) goto loc_8322B518;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8322b4fc
	goto loc_8322B4FC;
loc_8322B518:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8322b524
	goto loc_8322B524;
loc_8322B520:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322B524:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322b540
	if (!ctx.cr0.eq) goto loc_8322B540;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8324d020
	ctx.lr = 0x8322B53C;
	sub_8324D020(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8322B540:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322b54c
	if (ctx.cr0.eq) goto loc_8322B54C;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_8322B54C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// rlwimi r9,r28,0,19,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0x1FFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE000);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322b584
	if (!ctx.cr0.eq) goto loc_8322B584;
loc_8322B578:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8322b454
	if (!ctx.cr0.eq) goto loc_8322B454;
loc_8322B584:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322B58C"))) PPC_WEAK_FUNC(sub_8322B58C);
PPC_FUNC_IMPL(__imp__sub_8322B58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B590"))) PPC_WEAK_FUNC(sub_8322B590);
PPC_FUNC_IMPL(__imp__sub_8322B590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8322B598;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8322B5AC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322b5d8
	if (ctx.cr6.eq) goto loc_8322B5D8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8322b5c8
	if (!ctx.cr0.eq) goto loc_8322B5C8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8322b5ac
	goto loc_8322B5AC;
loc_8322B5C8:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x8322b5dc
	if (!ctx.cr0.eq) goto loc_8322B5DC;
loc_8322B5D8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8322B5DC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322b7e4
	if (ctx.cr0.eq) goto loc_8322B7E4;
	// lwz r25,28(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
loc_8322B5E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322b604
	if (ctx.cr6.eq) goto loc_8322B604;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322b604
	if (!ctx.cr0.eq) goto loc_8322B604;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8322b5e8
	goto loc_8322B5E8;
loc_8322B604:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r27,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwimi r9,r11,20,19,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0x1FE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE01F);
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r26,r9,31,20,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xFFF;
	// b 0x8322b6b0
	goto loc_8322B6B0;
loc_8322B620:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x8322b6a8
	if (ctx.cr6.eq) goto loc_8322B6A8;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r31,44
	ctx.r28.s64 = ctx.r31.s64 + 44;
loc_8322B638:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8322b6a8
	if (!ctx.cr6.lt) goto loc_8322B6A8;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321d608
	ctx.lr = 0x8322B654;
	sub_8321D608(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322b69c
	if (ctx.cr0.eq) goto loc_8322B69C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322b69c
	if (ctx.cr0.eq) goto loc_8322B69C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF;
	// xor r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r26.u64;
	// rlwinm. r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322b69c
	if (!ctx.cr0.eq) goto loc_8322B69C;
	// and r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & ctx.r26.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322b69c
	if (ctx.cr0.eq) goto loc_8322B69C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832330a8
	ctx.lr = 0x8322B69C;
	sub_832330A8(ctx, base);
loc_8322B69C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x8322b638
	goto loc_8322B638;
loc_8322B6A8:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_8322B6B0:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322b6c4
	if (!ctx.cr0.eq) goto loc_8322B6C4;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8322b620
	if (!ctx.cr0.eq) goto loc_8322B620;
loc_8322B6C4:
	// lwz r29,4(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_8322B6C8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8322b7e4
	if (ctx.cr6.eq) goto loc_8322B7E4;
	// lwz r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8322b7dc
	if (ctx.cr6.eq) goto loc_8322B7DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8321d608
	ctx.lr = 0x8322B6E4;
	sub_8321D608(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322b7dc
	if (ctx.cr0.eq) goto loc_8322B7DC;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8322b7dc
	if (!ctx.cr6.eq) goto loc_8322B7DC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// beq cr6,0x8322b7dc
	if (ctx.cr6.eq) goto loc_8322B7DC;
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// beq cr6,0x8322b7dc
	if (ctx.cr6.eq) goto loc_8322B7DC;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x8322b7c4
	goto loc_8322B7C4;
loc_8322B718:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r9,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322b7c0
	if (ctx.cr0.eq) goto loc_8322B7C0;
	// rlwinm r11,r9,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x8322b7c0
	if (ctx.cr6.eq) goto loc_8322B7C0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8322B738:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322b764
	if (ctx.cr6.eq) goto loc_8322B764;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r8,r8,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8322b754
	if (!ctx.cr0.eq) goto loc_8322B754;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8322b738
	goto loc_8322B738;
loc_8322B754:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x8322b768
	if (!ctx.cr0.eq) goto loc_8322B768;
loc_8322B764:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8322B768:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322b7c0
	if (ctx.cr0.eq) goto loc_8322B7C0;
loc_8322B770:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322b78c
	if (ctx.cr6.eq) goto loc_8322B78C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322b78c
	if (!ctx.cr0.eq) goto loc_8322B78C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8322b770
	goto loc_8322B770;
loc_8322B78C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r11,20,19,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0x1FE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r11,r9,31,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xFFF;
	// xor r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r26.u64;
	// rlwinm. r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322b7c0
	if (!ctx.cr0.eq) goto loc_8322B7C0;
	// and r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & ctx.r26.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322b7c0
	if (ctx.cr0.eq) goto loc_8322B7C0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832330a8
	ctx.lr = 0x8322B7C0;
	sub_832330A8(ctx, base);
loc_8322B7C0:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
loc_8322B7C4:
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322b7dc
	if (!ctx.cr0.eq) goto loc_8322B7DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bne cr6,0x8322b718
	if (!ctx.cr6.eq) goto loc_8322B718;
loc_8322B7DC:
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x8322b6c8
	goto loc_8322B6C8;
loc_8322B7E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322B7EC"))) PPC_WEAK_FUNC(sub_8322B7EC);
PPC_FUNC_IMPL(__imp__sub_8322B7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B7F0"))) PPC_WEAK_FUNC(sub_8322B7F0);
PPC_FUNC_IMPL(__imp__sub_8322B7F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x8322afe0
	sub_8322AFE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322B7F8"))) PPC_WEAK_FUNC(sub_8322B7F8);
PPC_FUNC_IMPL(__imp__sub_8322B7F8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// b 0x8322a970
	sub_8322A970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322B808"))) PPC_WEAK_FUNC(sub_8322B808);
PPC_FUNC_IMPL(__imp__sub_8322B808) {
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

__attribute__((alias("__imp__sub_8322B820"))) PPC_WEAK_FUNC(sub_8322B820);
PPC_FUNC_IMPL(__imp__sub_8322B820) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322b830
	if (ctx.cr0.eq) goto loc_8322B830;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322B830:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322B83C"))) PPC_WEAK_FUNC(sub_8322B83C);
PPC_FUNC_IMPL(__imp__sub_8322B83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B840"))) PPC_WEAK_FUNC(sub_8322B840);
PPC_FUNC_IMPL(__imp__sub_8322B840) {
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
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322b8c0
	if (!ctx.cr0.eq) goto loc_8322B8C0;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x8322b8c0
	if (ctx.cr0.eq) goto loc_8322B8C0;
loc_8322B86C:
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322b880
	if (ctx.cr0.eq) goto loc_8322B880;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8322B880:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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
	ctx.lr = 0x8322B8B4;
	sub_83204D00(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8322b86c
	if (!ctx.cr6.eq) goto loc_8322B86C;
loc_8322B8C0:
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

__attribute__((alias("__imp__sub_8322B8D8"))) PPC_WEAK_FUNC(sub_8322B8D8);
PPC_FUNC_IMPL(__imp__sub_8322B8D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_8322B8F0:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322b8f0
	if (!ctx.cr6.eq) goto loc_8322B8F0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322B914"))) PPC_WEAK_FUNC(sub_8322B914);
PPC_FUNC_IMPL(__imp__sub_8322B914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B918"))) PPC_WEAK_FUNC(sub_8322B918);
PPC_FUNC_IMPL(__imp__sub_8322B918) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322b97c
	if (!ctx.cr0.eq) goto loc_8322B97C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8322b97c
	if (ctx.cr0.eq) goto loc_8322B97C;
loc_8322B930:
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8322b960
	if (ctx.cr6.eq) goto loc_8322B960;
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
loc_8322B944:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8322b984
	if (ctx.cr6.eq) goto loc_8322B984;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8322b944
	if (ctx.cr6.lt) goto loc_8322B944;
loc_8322B960:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322b97c
	if (!ctx.cr0.eq) goto loc_8322B97C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322b930
	if (!ctx.cr6.eq) goto loc_8322B930;
loc_8322B97C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8322B984:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322B98C"))) PPC_WEAK_FUNC(sub_8322B98C);
PPC_FUNC_IMPL(__imp__sub_8322B98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B990"))) PPC_WEAK_FUNC(sub_8322B990);
PPC_FUNC_IMPL(__imp__sub_8322B990) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8322b9a4
	goto loc_8322B9A4;
loc_8322B998:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r4,r10,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r10.s64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8322B9A4:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322b9b0
	if (ctx.cr0.eq) goto loc_8322B9B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322B9B0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8322b998
	if (!ctx.cr6.lt) goto loc_8322B998;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322B9CC"))) PPC_WEAK_FUNC(sub_8322B9CC);
PPC_FUNC_IMPL(__imp__sub_8322B9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B9D0"))) PPC_WEAK_FUNC(sub_8322B9D0);
PPC_FUNC_IMPL(__imp__sub_8322B9D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_8322B9E4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x8322ba18
	if (!ctx.cr6.gt) goto loc_8322BA18;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
loc_8322B9F8:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8322ba34
	if (ctx.cr6.eq) goto loc_8322BA34;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8322b9f8
	if (ctx.cr6.lt) goto loc_8322B9F8;
loc_8322BA18:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322b9e4
	if (!ctx.cr6.eq) goto loc_8322B9E4;
	// blr 
	return;
loc_8322BA34:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// bne 0x8322ba7c
	if (!ctx.cr0.eq) goto loc_8322BA7C;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x83204d00
	sub_83204D00(ctx, base);
	return;
loc_8322BA7C:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 5;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// subf r6,r10,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82cb1fe0
	sub_82CB1FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322BAA8"))) PPC_WEAK_FUNC(sub_8322BAA8);
PPC_FUNC_IMPL(__imp__sub_8322BAA8) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322bb7c
	if (!ctx.cr6.eq) goto loc_8322BB7C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8321e020
	ctx.lr = 0x8322BAE4;
	sub_8321E020(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8322bb70
	if (!ctx.cr6.lt) goto loc_8322BB70;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82cb1160
	ctx.lr = 0x8322BB60;
	sub_82CB1160(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x8322bb7c
	goto loc_8322BB7C;
loc_8322BB70:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8322BB7C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 5;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82cb1fe0
	ctx.lr = 0x8322BBAC;
	sub_82CB1FE0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8322BBE8"))) PPC_WEAK_FUNC(sub_8322BBE8);
PPC_FUNC_IMPL(__imp__sub_8322BBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8322BBF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322bc10
	if (!ctx.cr0.eq) goto loc_8322BC10;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x8322bc1c
	goto loc_8322BC1C;
loc_8322BC10:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8322BC1C:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8322bc90
	if (!ctx.cr6.gt) goto loc_8322BC90;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r29,r11,27,5,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8321e020
	ctx.lr = 0x8322BC3C;
	sub_8321E020(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322bc84
	if (ctx.cr0.eq) goto loc_8322BC84;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x8322BC68;
	sub_82CB1160(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83204d00
	ctx.lr = 0x8322BC80;
	sub_83204D00(ctx, base);
	// b 0x8322bc8c
	goto loc_8322BC8C;
loc_8322BC84:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8322BC8C:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_8322BC90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322BC98"))) PPC_WEAK_FUNC(sub_8322BC98);
PPC_FUNC_IMPL(__imp__sub_8322BC98) {
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

__attribute__((alias("__imp__sub_8322BCB0"))) PPC_WEAK_FUNC(sub_8322BCB0);
PPC_FUNC_IMPL(__imp__sub_8322BCB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322bcc0
	if (ctx.cr0.eq) goto loc_8322BCC0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322BCC0:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322BCCC"))) PPC_WEAK_FUNC(sub_8322BCCC);
PPC_FUNC_IMPL(__imp__sub_8322BCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322BCD0"))) PPC_WEAK_FUNC(sub_8322BCD0);
PPC_FUNC_IMPL(__imp__sub_8322BCD0) {
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
	// beq 0x8322bcf4
	if (ctx.cr0.eq) goto loc_8322BCF4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8322bd00
	goto loc_8322BD00;
loc_8322BCF4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_8322BD00:
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
	// bne 0x8322bd50
	if (!ctx.cr0.eq) goto loc_8322BD50;
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
	ctx.lr = 0x8322BD50;
	sub_83204D00(ctx, base);
loc_8322BD50:
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

__attribute__((alias("__imp__sub_8322BD68"))) PPC_WEAK_FUNC(sub_8322BD68);
PPC_FUNC_IMPL(__imp__sub_8322BD68) {
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

__attribute__((alias("__imp__sub_8322BD80"))) PPC_WEAK_FUNC(sub_8322BD80);
PPC_FUNC_IMPL(__imp__sub_8322BD80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322bd90
	if (ctx.cr0.eq) goto loc_8322BD90;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322BD90:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322BD9C"))) PPC_WEAK_FUNC(sub_8322BD9C);
PPC_FUNC_IMPL(__imp__sub_8322BD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322BDA0"))) PPC_WEAK_FUNC(sub_8322BDA0);
PPC_FUNC_IMPL(__imp__sub_8322BDA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322bdb4
	if (ctx.cr0.eq) goto loc_8322BDB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8322bdc0
	goto loc_8322BDC0;
loc_8322BDB4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8322BDC0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322BDD4"))) PPC_WEAK_FUNC(sub_8322BDD4);
PPC_FUNC_IMPL(__imp__sub_8322BDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322BDD8"))) PPC_WEAK_FUNC(sub_8322BDD8);
PPC_FUNC_IMPL(__imp__sub_8322BDD8) {
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
	// beq 0x8322bdfc
	if (ctx.cr0.eq) goto loc_8322BDFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8322be08
	goto loc_8322BE08;
loc_8322BDFC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_8322BE08:
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
	// bne 0x8322be58
	if (!ctx.cr0.eq) goto loc_8322BE58;
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
	ctx.lr = 0x8322BE58;
	sub_83204D00(ctx, base);
loc_8322BE58:
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

__attribute__((alias("__imp__sub_8322BE70"))) PPC_WEAK_FUNC(sub_8322BE70);
PPC_FUNC_IMPL(__imp__sub_8322BE70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322be84
	if (ctx.cr0.eq) goto loc_8322BE84;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322BE84:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322BE94"))) PPC_WEAK_FUNC(sub_8322BE94);
PPC_FUNC_IMPL(__imp__sub_8322BE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322BE98"))) PPC_WEAK_FUNC(sub_8322BE98);
PPC_FUNC_IMPL(__imp__sub_8322BE98) {
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
	// bgt cr6,0x8322bec0
	if (ctx.cr6.gt) goto loc_8322BEC0;
	// li r30,10
	ctx.r30.s64 = 10;
loc_8322BEC0:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8321e020
	ctx.lr = 0x8322BED0;
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

__attribute__((alias("__imp__sub_8322BF1C"))) PPC_WEAK_FUNC(sub_8322BF1C);
PPC_FUNC_IMPL(__imp__sub_8322BF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322BF20"))) PPC_WEAK_FUNC(sub_8322BF20);
PPC_FUNC_IMPL(__imp__sub_8322BF20) {
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
	// bgt cr6,0x8322bf48
	if (ctx.cr6.gt) goto loc_8322BF48;
	// li r30,10
	ctx.r30.s64 = 10;
loc_8322BF48:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8321e020
	ctx.lr = 0x8322BF58;
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

__attribute__((alias("__imp__sub_8322BFA4"))) PPC_WEAK_FUNC(sub_8322BFA4);
PPC_FUNC_IMPL(__imp__sub_8322BFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322BFA8"))) PPC_WEAK_FUNC(sub_8322BFA8);
PPC_FUNC_IMPL(__imp__sub_8322BFA8) {
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
	// bgt cr6,0x8322bfd0
	if (ctx.cr6.gt) goto loc_8322BFD0;
	// li r30,10
	ctx.r30.s64 = 10;
loc_8322BFD0:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8321e020
	ctx.lr = 0x8322BFE0;
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

__attribute__((alias("__imp__sub_8322C02C"))) PPC_WEAK_FUNC(sub_8322C02C);
PPC_FUNC_IMPL(__imp__sub_8322C02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C030"))) PPC_WEAK_FUNC(sub_8322C030);
PPC_FUNC_IMPL(__imp__sub_8322C030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8322C038;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r31,r11,30,2,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r30,r27,4
	ctx.r30.s64 = ctx.r27.s64 + 4;
	// addi r29,r31,3
	ctx.r29.s64 = ctx.r31.s64 + 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r26,r11,28,4,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r28,r11,28
	ctx.r28.u64 = ctx.r11.u32 & 0xF;
	// bl 0x8322a970
	ctx.lr = 0x8322C068;
	sub_8322A970(ctx, base);
	// and. r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322c080
	if (ctx.cr0.eq) goto loc_8322C080;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,3526
	ctx.r4.s64 = 3526;
	// bl 0x83204d78
	ctx.lr = 0x8322C080;
	sub_83204D78(ctx, base);
loc_8322C080:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322ab98
	ctx.lr = 0x8322C094;
	sub_8322AB98(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322C09C"))) PPC_WEAK_FUNC(sub_8322C09C);
PPC_FUNC_IMPL(__imp__sub_8322C09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C0A0"))) PPC_WEAK_FUNC(sub_8322C0A0);
PPC_FUNC_IMPL(__imp__sub_8322C0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8322C0A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8322b168
	ctx.lr = 0x8322C0C8;
	sub_8322B168(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x8322c1b0
	if (!ctx.cr6.eq) goto loc_8322C1B0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322c0f0
	if (!ctx.cr0.eq) goto loc_8322C0F0;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x8322c0fc
	goto loc_8322C0FC;
loc_8322C0F0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8322C0FC:
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// blt cr6,0x8322c13c
	if (ctx.cr6.lt) goto loc_8322C13C;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322c134
	if (ctx.cr0.eq) goto loc_8322C134;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322c12c
	if (ctx.cr6.eq) goto loc_8322C12C;
	// li r4,3518
	ctx.r4.s64 = 3518;
	// bl 0x83204d78
	ctx.lr = 0x8322C12C;
	sub_83204D78(ctx, base);
loc_8322C12C:
	// li r4,3565
	ctx.r4.s64 = 3565;
	// bl 0x83204d78
	ctx.lr = 0x8322C134;
	sub_83204D78(ctx, base);
loc_8322C134:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8322c1e0
	goto loc_8322C1E0;
loc_8322C13C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322c154
	if (!ctx.cr0.eq) goto loc_8322C154;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x8322c160
	goto loc_8322C160;
loc_8322C154:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8322C160:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x8322bbe8
	ctx.lr = 0x8322C168;
	sub_8322BBE8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8322b168
	ctx.lr = 0x8322C17C;
	sub_8322B168(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x8322c1b0
	if (!ctx.cr6.eq) goto loc_8322C1B0;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322c134
	if (ctx.cr0.eq) goto loc_8322C134;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322c1a8
	if (ctx.cr6.eq) goto loc_8322C1A8;
	// li r4,3518
	ctx.r4.s64 = 3518;
	// bl 0x83204d78
	ctx.lr = 0x8322C1A8;
	sub_83204D78(ctx, base);
loc_8322C1A8:
	// li r4,3565
	ctx.r4.s64 = 3565;
	// bl 0x83204d78
	ctx.lr = 0x8322C1B0;
	sub_83204D78(ctx, base);
loc_8322C1B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r3,r31,28
	ctx.r3.u64 = ctx.r31.u32 & 0xF;
	// rlwinm r30,r31,30,2,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFC;
	// bl 0x83229a98
	ctx.lr = 0x8322C1C0;
	sub_83229A98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r30,3
	ctx.r5.s64 = ctx.r30.s64 + 3;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x8322ab98
	ctx.lr = 0x8322C1D8;
	sub_8322AB98(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwimi r3,r31,0,0,27
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFFFFF0) | (ctx.r3.u64 & 0xFFFFFFFF0000000F);
loc_8322C1E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322C1E8"))) PPC_WEAK_FUNC(sub_8322C1E8);
PPC_FUNC_IMPL(__imp__sub_8322C1E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// rlwinm r4,r11,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// b 0x8322ac08
	sub_8322AC08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322C200"))) PPC_WEAK_FUNC(sub_8322C200);
PPC_FUNC_IMPL(__imp__sub_8322C200) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// b 0x8322a970
	sub_8322A970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322C210"))) PPC_WEAK_FUNC(sub_8322C210);
PPC_FUNC_IMPL(__imp__sub_8322C210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8322C218;
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
	// bl 0x8322c030
	ctx.lr = 0x8322C22C;
	sub_8322C030(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322b2d0
	ctx.lr = 0x8322C23C;
	sub_8322B2D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322C244"))) PPC_WEAK_FUNC(sub_8322C244);
PPC_FUNC_IMPL(__imp__sub_8322C244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C248"))) PPC_WEAK_FUNC(sub_8322C248);
PPC_FUNC_IMPL(__imp__sub_8322C248) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r4,r30,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFC;
	// clrlwi r6,r30,28
	ctx.r6.u64 = ctx.r30.u32 & 0xF;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8322ac08
	ctx.lr = 0x8322C278;
	sub_8322AC08(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322b2d0
	ctx.lr = 0x8322C288;
	sub_8322B2D0(ctx, base);
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

__attribute__((alias("__imp__sub_8322C2A0"))) PPC_WEAK_FUNC(sub_8322C2A0);
PPC_FUNC_IMPL(__imp__sub_8322C2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8322C2A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_8322C2BC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8322c380
	if (ctx.cr6.eq) goto loc_8322C380;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322c378
	if (ctx.cr0.eq) goto loc_8322C378;
	// rlwinm. r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322c378
	if (ctx.cr0.eq) goto loc_8322C378;
	// lwz r29,12(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322c378
	if (ctx.cr0.eq) goto loc_8322C378;
	// rlwinm r4,r11,17,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FC;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// rlwinm r31,r11,19,20,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF;
	// bl 0x8322a970
	ctx.lr = 0x8322C2FC;
	sub_8322A970(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8322c378
	if (ctx.cr0.eq) goto loc_8322C378;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8322C308:
	// and. r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 & ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322c36c
	if (ctx.cr0.eq) goto loc_8322C36C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwimi r11,r31,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// clrlwi r11,r8,28
	ctx.r11.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r8,r8,30,2,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// andc r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8322c36c
	if (ctx.cr6.eq) goto loc_8322C36C;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8322c36c
	if (ctx.cr6.eq) goto loc_8322C36C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322c368
	if (ctx.cr0.eq) goto loc_8322C368;
	// ori r26,r26,1
	ctx.r26.u64 = ctx.r26.u64 | 1;
	// b 0x8322c36c
	goto loc_8322C36C;
loc_8322C368:
	// ori r26,r26,2
	ctx.r26.u64 = ctx.r26.u64 | 2;
loc_8322C36C:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8322c308
	if (ctx.cr6.lt) goto loc_8322C308;
loc_8322C378:
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x8322c2bc
	goto loc_8322C2BC;
loc_8322C380:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322C38C"))) PPC_WEAK_FUNC(sub_8322C38C);
PPC_FUNC_IMPL(__imp__sub_8322C38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C390"))) PPC_WEAK_FUNC(sub_8322C390);
PPC_FUNC_IMPL(__imp__sub_8322C390) {
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
	// li r5,54
	ctx.r5.s64 = 54;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x8322C3B4;
	sub_8321D6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x8322C3C8;
	sub_8321D6D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8322C400"))) PPC_WEAK_FUNC(sub_8322C400);
PPC_FUNC_IMPL(__imp__sub_8322C400) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8322b840
	ctx.lr = 0x8322C424;
	sub_8322B840(ctx, base);
	// addi r11,r31,948
	ctx.r11.s64 = ctx.r31.s64 + 948;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r10.u32);
	// lwz r11,976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r30,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8322C45C"))) PPC_WEAK_FUNC(sub_8322C45C);
PPC_FUNC_IMPL(__imp__sub_8322C45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C460"))) PPC_WEAK_FUNC(sub_8322C460);
PPC_FUNC_IMPL(__imp__sub_8322C460) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8322c4a8
	if (!ctx.cr0.eq) goto loc_8322C4A8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8322c4a8
	if (ctx.cr0.eq) goto loc_8322C4A8;
loc_8322C488:
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8322c4a8
	if (!ctx.cr0.eq) goto loc_8322C4A8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322c488
	if (!ctx.cr6.eq) goto loc_8322C488;
loc_8322C4A8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8322c51c
	if (ctx.cr6.eq) goto loc_8322C51C;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
loc_8322C4BC:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8322c4d0
	if (!ctx.cr6.eq) goto loc_8322C4D0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8322C4D0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8322c500
	if (ctx.cr6.lt) goto loc_8322C500;
loc_8322C4DC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322c4f4
	if (ctx.cr0.eq) goto loc_8322C4F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322C4F4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8322c4dc
	if (!ctx.cr6.lt) goto loc_8322C4DC;
loc_8322C500:
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// blt cr6,0x8322c4bc
	if (ctx.cr6.lt) goto loc_8322C4BC;
loc_8322C51C:
	// stw r6,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322C524"))) PPC_WEAK_FUNC(sub_8322C524);
PPC_FUNC_IMPL(__imp__sub_8322C524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C528"))) PPC_WEAK_FUNC(sub_8322C528);
PPC_FUNC_IMPL(__imp__sub_8322C528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8322C530;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322c550
	if (!ctx.cr6.eq) goto loc_8322C550;
	// bl 0x8322c460
	ctx.lr = 0x8322C550;
	sub_8322C460(ctx, base);
loc_8322C550:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r10,997
	ctx.r10.s64 = 997;
	// lwz r9,700(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mulli r10,r10,997
	ctx.r10.s64 = ctx.r10.s64 * 997;
	// subf r29,r10,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bne cr6,0x8322c580
	if (!ctx.cr6.eq) goto loc_8322C580;
	// li r4,3988
	ctx.r4.s64 = 3988;
	// addi r3,r31,948
	ctx.r3.s64 = ctx.r31.s64 + 948;
	// bl 0x8321df08
	ctx.lr = 0x8322C57C;
	sub_8321DF08(ctx, base);
	// stw r3,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r3.u32);
loc_8322C580:
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r11.u32);
	// cmplwi cr6,r11,25000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25000, ctx.xer);
	// ble cr6,0x8322c5b4
	if (!ctx.cr6.gt) goto loc_8322C5B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8322c620
	goto loc_8322C620;
loc_8322C5B4:
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322c61c
	if (!ctx.cr0.eq) goto loc_8322C61C;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8322c61c
	if (ctx.cr0.eq) goto loc_8322C61C;
loc_8322C5C8:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322c604
	if (ctx.cr0.eq) goto loc_8322C604;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,12,21,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x780;
	// lwz r9,712(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// rlwinm r8,r8,7,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7F;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
loc_8322C604:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322c61c
	if (!ctx.cr0.eq) goto loc_8322C61C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8322c5c8
	if (!ctx.cr6.eq) goto loc_8322C5C8;
loc_8322C61C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8322C620:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322C628"))) PPC_WEAK_FUNC(sub_8322C628);
PPC_FUNC_IMPL(__imp__sub_8322C628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8322C630;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322c834
	if (ctx.cr6.eq) goto loc_8322C834;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322c654
	if (!ctx.cr6.eq) goto loc_8322C654;
	// bl 0x8322c460
	ctx.lr = 0x8322C654;
	sub_8322C460(ctx, base);
loc_8322C654:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// li r11,997
	ctx.r11.s64 = 997;
	// lwz r25,4(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mulli r9,r9,997
	ctx.r9.s64 = ctx.r9.s64 * 997;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bne 0x8322c6a4
	if (!ctx.cr0.eq) goto loc_8322C6A4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8322c6a4
	if (ctx.cr0.eq) goto loc_8322C6A4;
loc_8322C684:
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8322c6a4
	if (!ctx.cr0.eq) goto loc_8322C6A4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322c684
	if (!ctx.cr6.eq) goto loc_8322C684;
loc_8322C6A4:
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r9,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8322c834
	if (ctx.cr6.eq) goto loc_8322C834;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rldicr r10,r10,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// or r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_8322C6C4:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmpld cr6,r11,r24
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r24.u64, ctx.xer);
	// bne cr6,0x8322c828
	if (!ctx.cr6.eq) goto loc_8322C828;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8322c828
	if (!ctx.cr6.eq) goto loc_8322C828;
	// lwz r28,4(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322c728
	if (!ctx.cr0.eq) goto loc_8322C728;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8322c728
	if (ctx.cr0.eq) goto loc_8322C728;
loc_8322C708:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322c728
	if (!ctx.cr0.eq) goto loc_8322C728;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322c708
	if (!ctx.cr6.eq) goto loc_8322C708;
loc_8322C728:
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8322c828
	if (!ctx.cr6.eq) goto loc_8322C828;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8322c820
	if (ctx.cr6.eq) goto loc_8322C820;
	// lwz r30,4(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi r29,r30,31
	ctx.r29.u64 = ctx.r30.u32 & 0x1;
loc_8322C744:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8322c758
	if (!ctx.cr6.eq) goto loc_8322C758;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8322C758:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8322c788
	if (ctx.cr6.lt) goto loc_8322C788;
loc_8322C764:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322c77c
	if (ctx.cr0.eq) goto loc_8322C77C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322C77C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8322c764
	if (!ctx.cr6.lt) goto loc_8322C764;
loc_8322C788:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// beq cr6,0x8322c80c
	if (ctx.cr6.eq) goto loc_8322C80C;
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
loc_8322C7A8:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8322c7bc
	if (!ctx.cr6.eq) goto loc_8322C7BC;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8322C7BC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8322c7ec
	if (ctx.cr6.lt) goto loc_8322C7EC;
loc_8322C7C8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322c7e0
	if (ctx.cr0.eq) goto loc_8322C7E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322C7E0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8322c7c8
	if (!ctx.cr6.lt) goto loc_8322C7C8;
loc_8322C7EC:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8322c80c
	if (ctx.cr6.eq) goto loc_8322C80C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8322c7a8
	if (ctx.cr6.lt) goto loc_8322C7A8;
loc_8322C80C:
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8322c820
	if (ctx.cr6.eq) goto loc_8322C820;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8322c744
	if (ctx.cr6.lt) goto loc_8322C744;
loc_8322C820:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8322c840
	if (ctx.cr6.eq) goto loc_8322C840;
loc_8322C828:
	// lwz r27,28(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8322c6c4
	if (!ctx.cr6.eq) goto loc_8322C6C4;
loc_8322C834:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8322C838:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_8322C840:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8322c838
	goto loc_8322C838;
}

__attribute__((alias("__imp__sub_8322C848"))) PPC_WEAK_FUNC(sub_8322C848);
PPC_FUNC_IMPL(__imp__sub_8322C848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8322C850;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// bl 0x8322bbe8
	ctx.lr = 0x8322C874;
	sub_8322BBE8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322c88c
	if (!ctx.cr0.eq) goto loc_8322C88C;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// b 0x8322c8a0
	goto loc_8322C8A0;
loc_8322C88C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb16f0
	ctx.lr = 0x8322C8A0;
	sub_82CB16F0(ctx, base);
loc_8322C8A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322C8A8"))) PPC_WEAK_FUNC(sub_8322C8A8);
PPC_FUNC_IMPL(__imp__sub_8322C8A8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322c8ec
	if (!ctx.cr0.eq) goto loc_8322C8EC;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x8322c8f8
	goto loc_8322C8F8;
loc_8322C8EC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
loc_8322C8F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322bbe8
	ctx.lr = 0x8322C900;
	sub_8322BBE8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322a868
	ctx.lr = 0x8322C90C;
	sub_8322A868(ctx, base);
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

__attribute__((alias("__imp__sub_8322C924"))) PPC_WEAK_FUNC(sub_8322C924);
PPC_FUNC_IMPL(__imp__sub_8322C924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C928"))) PPC_WEAK_FUNC(sub_8322C928);
PPC_FUNC_IMPL(__imp__sub_8322C928) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x8322bbe8
	sub_8322BBE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322C930"))) PPC_WEAK_FUNC(sub_8322C930);
PPC_FUNC_IMPL(__imp__sub_8322C930) {
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
	// rlwinm r4,r31,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// bl 0x8322a970
	ctx.lr = 0x8322C95C;
	sub_8322A970(ctx, base);
	// andc r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 & ~ctx.r3.u64;
	// clrlwi. r4,r11,28
	ctx.r4.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8322c974
	if (ctx.cr0.eq) goto loc_8322C974;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwimi r4,r31,0,0,27
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// bl 0x8322c030
	ctx.lr = 0x8322C974;
	sub_8322C030(ctx, base);
loc_8322C974:
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

__attribute__((alias("__imp__sub_8322C98C"))) PPC_WEAK_FUNC(sub_8322C98C);
PPC_FUNC_IMPL(__imp__sub_8322C98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C990"))) PPC_WEAK_FUNC(sub_8322C990);
PPC_FUNC_IMPL(__imp__sub_8322C990) {
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
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// rlwinm r4,r31,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// bl 0x8322a970
	ctx.lr = 0x8322C9BC;
	sub_8322A970(ctx, base);
	// and r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 & ctx.r31.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322c9e0
	if (ctx.cr0.eq) goto loc_8322C9E0;
	// rlwimi r11,r31,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// bl 0x8322ac08
	ctx.lr = 0x8322C9E0;
	sub_8322AC08(ctx, base);
loc_8322C9E0:
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

__attribute__((alias("__imp__sub_8322C9F8"))) PPC_WEAK_FUNC(sub_8322C9F8);
PPC_FUNC_IMPL(__imp__sub_8322C9F8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8322c0a0
	sub_8322C0A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322CA00"))) PPC_WEAK_FUNC(sub_8322CA00);
PPC_FUNC_IMPL(__imp__sub_8322CA00) {
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

__attribute__((alias("__imp__sub_8322CA18"))) PPC_WEAK_FUNC(sub_8322CA18);
PPC_FUNC_IMPL(__imp__sub_8322CA18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322ca28
	if (ctx.cr0.eq) goto loc_8322CA28;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322CA28:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322CA34"))) PPC_WEAK_FUNC(sub_8322CA34);
PPC_FUNC_IMPL(__imp__sub_8322CA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322CA38"))) PPC_WEAK_FUNC(sub_8322CA38);
PPC_FUNC_IMPL(__imp__sub_8322CA38) {
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
	// beq 0x8322ca5c
	if (ctx.cr0.eq) goto loc_8322CA5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8322ca68
	goto loc_8322CA68;
loc_8322CA5C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_8322CA68:
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
	// bne 0x8322cab8
	if (!ctx.cr0.eq) goto loc_8322CAB8;
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
	ctx.lr = 0x8322CAB8;
	sub_83204D00(ctx, base);
loc_8322CAB8:
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

__attribute__((alias("__imp__sub_8322CAD0"))) PPC_WEAK_FUNC(sub_8322CAD0);
PPC_FUNC_IMPL(__imp__sub_8322CAD0) {
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

__attribute__((alias("__imp__sub_8322CAE8"))) PPC_WEAK_FUNC(sub_8322CAE8);
PPC_FUNC_IMPL(__imp__sub_8322CAE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322caf8
	if (ctx.cr0.eq) goto loc_8322CAF8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322CAF8:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322CB04"))) PPC_WEAK_FUNC(sub_8322CB04);
PPC_FUNC_IMPL(__imp__sub_8322CB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322CB08"))) PPC_WEAK_FUNC(sub_8322CB08);
PPC_FUNC_IMPL(__imp__sub_8322CB08) {
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
	// beq 0x8322cb2c
	if (ctx.cr0.eq) goto loc_8322CB2C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8322cb38
	goto loc_8322CB38;
loc_8322CB2C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_8322CB38:
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
	// bne 0x8322cb88
	if (!ctx.cr0.eq) goto loc_8322CB88;
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
	ctx.lr = 0x8322CB88;
	sub_83204D00(ctx, base);
loc_8322CB88:
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

__attribute__((alias("__imp__sub_8322CBA0"))) PPC_WEAK_FUNC(sub_8322CBA0);
PPC_FUNC_IMPL(__imp__sub_8322CBA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322cbb4
	if (ctx.cr0.eq) goto loc_8322CBB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8322cbc0
	goto loc_8322CBC0;
loc_8322CBB4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8322CBC0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322CBD4"))) PPC_WEAK_FUNC(sub_8322CBD4);
PPC_FUNC_IMPL(__imp__sub_8322CBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322CBD8"))) PPC_WEAK_FUNC(sub_8322CBD8);
PPC_FUNC_IMPL(__imp__sub_8322CBD8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322cbec
	if (ctx.cr0.eq) goto loc_8322CBEC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322CBEC:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322CBFC"))) PPC_WEAK_FUNC(sub_8322CBFC);
PPC_FUNC_IMPL(__imp__sub_8322CBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322CC00"))) PPC_WEAK_FUNC(sub_8322CC00);
PPC_FUNC_IMPL(__imp__sub_8322CC00) {
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
	// bne 0x8322cc44
	if (!ctx.cr0.eq) goto loc_8322CC44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322cc44
	if (ctx.cr0.eq) goto loc_8322CC44;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8322cc50
	if (!ctx.cr6.gt) goto loc_8322CC50;
loc_8322CC44:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8322be98
	ctx.lr = 0x8322CC4C;
	sub_8322BE98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8322CC50:
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

__attribute__((alias("__imp__sub_8322CC7C"))) PPC_WEAK_FUNC(sub_8322CC7C);
PPC_FUNC_IMPL(__imp__sub_8322CC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322CC80"))) PPC_WEAK_FUNC(sub_8322CC80);
PPC_FUNC_IMPL(__imp__sub_8322CC80) {
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
	// bne 0x8322ccc4
	if (!ctx.cr0.eq) goto loc_8322CCC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322ccc4
	if (ctx.cr0.eq) goto loc_8322CCC4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8322ccd0
	if (!ctx.cr6.gt) goto loc_8322CCD0;
loc_8322CCC4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8322bf20
	ctx.lr = 0x8322CCCC;
	sub_8322BF20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8322CCD0:
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

__attribute__((alias("__imp__sub_8322CCFC"))) PPC_WEAK_FUNC(sub_8322CCFC);
PPC_FUNC_IMPL(__imp__sub_8322CCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322CD00"))) PPC_WEAK_FUNC(sub_8322CD00);
PPC_FUNC_IMPL(__imp__sub_8322CD00) {
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
	// bne 0x8322cd44
	if (!ctx.cr0.eq) goto loc_8322CD44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322cd44
	if (ctx.cr0.eq) goto loc_8322CD44;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8322cd50
	if (!ctx.cr6.gt) goto loc_8322CD50;
loc_8322CD44:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8322bfa8
	ctx.lr = 0x8322CD4C;
	sub_8322BFA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8322CD50:
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

__attribute__((alias("__imp__sub_8322CD7C"))) PPC_WEAK_FUNC(sub_8322CD7C);
PPC_FUNC_IMPL(__imp__sub_8322CD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322CD80"))) PPC_WEAK_FUNC(sub_8322CD80);
PPC_FUNC_IMPL(__imp__sub_8322CD80) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8322c8a8
	sub_8322C8A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322CD90"))) PPC_WEAK_FUNC(sub_8322CD90);
PPC_FUNC_IMPL(__imp__sub_8322CD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8322CD98;
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
	// bl 0x8322c930
	ctx.lr = 0x8322CDAC;
	sub_8322C930(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322b2d0
	ctx.lr = 0x8322CDBC;
	sub_8322B2D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322CDC4"))) PPC_WEAK_FUNC(sub_8322CDC4);
PPC_FUNC_IMPL(__imp__sub_8322CDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322CDC8"))) PPC_WEAK_FUNC(sub_8322CDC8);
PPC_FUNC_IMPL(__imp__sub_8322CDC8) {
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
	// bl 0x8322c990
	ctx.lr = 0x8322CDE8;
	sub_8322C990(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322b2d0
	ctx.lr = 0x8322CDF8;
	sub_8322B2D0(ctx, base);
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

__attribute__((alias("__imp__sub_8322CE10"))) PPC_WEAK_FUNC(sub_8322CE10);
PPC_FUNC_IMPL(__imp__sub_8322CE10) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8322bbe8
	sub_8322BBE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322CE20"))) PPC_WEAK_FUNC(sub_8322CE20);
PPC_FUNC_IMPL(__imp__sub_8322CE20) {
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
	// bl 0x8322c848
	ctx.lr = 0x8322CE40;
	sub_8322C848(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322ce58
	if (!ctx.cr0.eq) goto loc_8322CE58;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x8322ce64
	goto loc_8322CE64;
loc_8322CE58:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8322CE64:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321e0d0
	ctx.lr = 0x8322CE78;
	sub_8321E0D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8322CE9C"))) PPC_WEAK_FUNC(sub_8322CE9C);
PPC_FUNC_IMPL(__imp__sub_8322CE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322CEA0"))) PPC_WEAK_FUNC(sub_8322CEA0);
PPC_FUNC_IMPL(__imp__sub_8322CEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x8322CEA8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// lbz r11,72(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8322cecc
	if (ctx.cr0.eq) goto loc_8322CECC;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
loc_8322CECC:
	// lwz r25,0(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r20,1
	ctx.r20.s64 = 1;
loc_8322CED4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8322d254
	if (ctx.cr6.eq) goto loc_8322D254;
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm. r11,r31,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322cef4
	if (!ctx.cr0.eq) goto loc_8322CEF4;
	// rlwinm. r11,r31,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq 0x8322cef8
	if (ctx.cr0.eq) goto loc_8322CEF8;
loc_8322CEF4:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8322CEF8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d24c
	if (ctx.cr0.eq) goto loc_8322D24C;
	// lwz r26,12(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lwz r30,28(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x8322d24c
	if (!ctx.cr6.eq) goto loc_8322D24C;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d010
	if (ctx.cr0.eq) goto loc_8322D010;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8321d608
	ctx.lr = 0x8322CF2C;
	sub_8321D608(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d010
	if (ctx.cr0.eq) goto loc_8322D010;
	// rlwinm. r10,r31,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq 0x8322cf64
	if (ctx.cr0.eq) goto loc_8322CF64;
	// rlwinm r8,r31,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0xFF;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_8322CF48:
	// srw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r7,r20,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r7.u8 & 0x3F));
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x8322cf48
	if (!ctx.cr0.eq) goto loc_8322CF48;
loc_8322CF64:
	// rlwimi r11,r31,19,20,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 19) & 0xFF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF00F);
	// lwz r3,48(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r28,r11,28
	ctx.r28.u64 = ctx.r11.u32 & 0xF;
	// bl 0x8322a540
	ctx.lr = 0x8322CF7C;
	sub_8322A540(ctx, base);
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r11,r11,19,13,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7FFFF;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// clrlwi. r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322cfb4
	if (ctx.cr0.eq) goto loc_8322CFB4;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r11,0,20,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// rlwinm r10,r10,19,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFF0;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8322d008
	if (!ctx.cr6.eq) goto loc_8322D008;
	// clrlwi r30,r11,28
	ctx.r30.u64 = ctx.r11.u32 & 0xF;
	// b 0x8322d008
	goto loc_8322D008;
loc_8322CFB4:
	// lwz r29,8(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm. r11,r29,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d008
	if (ctx.cr0.eq) goto loc_8322D008;
	// lwz r31,4(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
loc_8322CFC4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322d008
	if (ctx.cr6.eq) goto loc_8322D008;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322cfe8
	if (ctx.cr6.eq) goto loc_8322CFE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d608
	ctx.lr = 0x8322CFE0;
	sub_8321D608(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322cff0
	if (!ctx.cr0.eq) goto loc_8322CFF0;
loc_8322CFE8:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x8322cfc4
	goto loc_8322CFC4;
loc_8322CFF0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,7,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FE0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322d008
	if (!ctx.cr0.eq) goto loc_8322D008;
	// rlwinm r30,r29,31,28,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0xF;
loc_8322D008:
	// andc r11,r27,r30
	ctx.r11.u64 = ctx.r27.u64 & ~ctx.r30.u64;
	// andc r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 & ~ctx.r11.u64;
loc_8322D010:
	// lwz r30,4(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_8322D01C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8322d140
	if (ctx.cr6.eq) goto loc_8322D140;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8322d138
	if (ctx.cr6.eq) goto loc_8322D138;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322d048
	if (!ctx.cr0.eq) goto loc_8322D048;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq 0x8322d04c
	if (ctx.cr0.eq) goto loc_8322D04C;
loc_8322D048:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8322D04C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d138
	if (ctx.cr0.eq) goto loc_8322D138;
	// cmplw cr6,r4,r24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x8322d138
	if (ctx.cr6.eq) goto loc_8322D138;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,28(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8322d138
	if (!ctx.cr6.eq) goto loc_8322D138;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// beq cr6,0x8322d138
	if (ctx.cr6.eq) goto loc_8322D138;
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322d0a4
	if (!ctx.cr0.eq) goto loc_8322D0A4;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322d138
	if (!ctx.cr0.eq) goto loc_8322D138;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8322ae38
	ctx.lr = 0x8322D098;
	sub_8322AE38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322d0b0
	if (!ctx.cr0.eq) goto loc_8322D0B0;
	// b 0x8322d138
	goto loc_8322D138;
loc_8322D0A4:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm. r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d138
	if (ctx.cr0.eq) goto loc_8322D138;
loc_8322D0B0:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r31,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d0c8
	if (ctx.cr0.eq) goto loc_8322D0C8;
	// rlwinm. r11,r31,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// beq 0x8322d0cc
	if (ctx.cr0.eq) goto loc_8322D0CC;
loc_8322D0C8:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8322D0CC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d0dc
	if (ctx.cr0.eq) goto loc_8322D0DC;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// b 0x8322d138
	goto loc_8322D138;
loc_8322D0DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321d608
	ctx.lr = 0x8322D0E4;
	sub_8321D608(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d138
	if (ctx.cr0.eq) goto loc_8322D138;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d138
	if (ctx.cr0.eq) goto loc_8322D138;
	// rlwinm. r11,r31,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// beq 0x8322d12c
	if (ctx.cr0.eq) goto loc_8322D12C;
	// rlwinm r8,r31,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0xFF;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_8322D110:
	// srw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r7,r20,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r7.u8 & 0x3F));
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x8322d110
	if (!ctx.cr0.eq) goto loc_8322D110;
loc_8322D12C:
	// rlwimi r9,r31,19,20,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r31.u32, 19) & 0xFF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF00F);
	// clrlwi r11,r9,28
	ctx.r11.u64 = ctx.r9.u32 & 0xF;
	// andc r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 & ~ctx.r11.u64;
loc_8322D138:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8322d01c
	goto loc_8322D01C;
loc_8322D140:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8321d608
	ctx.lr = 0x8322D148;
	sub_8321D608(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d218
	if (ctx.cr0.eq) goto loc_8322D218;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,19,13,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7FFFF;
	// clrlwi. r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322d1b0
	if (ctx.cr0.eq) goto loc_8322D1B0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8322d1b0
	if (!ctx.cr6.eq) goto loc_8322D1B0;
	// clrlwi. r10,r21,24
	ctx.r10.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322d180
	if (ctx.cr0.eq) goto loc_8322D180;
	// clrlwi r4,r11,20
	ctx.r4.u64 = ctx.r11.u32 & 0xFFF;
	// lwz r3,56(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// bl 0x8322c248
	ctx.lr = 0x8322D17C;
	sub_8322C248(ctx, base);
	// b 0x8322d1a4
	goto loc_8322D1A4;
loc_8322D180:
	// lwz r31,56(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// clrlwi r30,r11,20
	ctx.r30.u64 = ctx.r11.u32 & 0xFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322c990
	ctx.lr = 0x8322D194;
	sub_8322C990(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322b2d0
	ctx.lr = 0x8322D1A4;
	sub_8322B2D0(ctx, base);
loc_8322D1A4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,48(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// bl 0x8322a198
	ctx.lr = 0x8322D1B0;
	sub_8322A198(ctx, base);
loc_8322D1B0:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d218
	if (ctx.cr0.eq) goto loc_8322D218;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8322d218
	if (ctx.cr6.eq) goto loc_8322D218;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r31,56(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// rlwinm r30,r11,15,24,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// bl 0x8322a970
	ctx.lr = 0x8322D1E0;
	sub_8322A970(ctx, base);
	// and. r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8322d218
	if (ctx.cr0.eq) goto loc_8322D218;
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r4,r30,4,0,27
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r30.u32, 4) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// beq 0x8322d200
	if (ctx.cr0.eq) goto loc_8322D200;
	// bl 0x8322c248
	ctx.lr = 0x8322D1FC;
	sub_8322C248(ctx, base);
	// b 0x8322d218
	goto loc_8322D218;
loc_8322D200:
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8322c990
	ctx.lr = 0x8322D208;
	sub_8322C990(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322b2d0
	ctx.lr = 0x8322D218;
	sub_8322B2D0(ctx, base);
loc_8322D218:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8322d24c
	if (!ctx.cr6.eq) goto loc_8322D24C;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8322D22C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8322d23c
	if (!ctx.cr6.eq) goto loc_8322D23C;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
loc_8322D23C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// blt cr6,0x8322d22c
	if (ctx.cr6.lt) goto loc_8322D22C;
loc_8322D24C:
	// lwz r25,4(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// b 0x8322ced4
	goto loc_8322CED4;
loc_8322D254:
	// lwz r31,4(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
loc_8322D258:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322d2a8
	if (ctx.cr6.eq) goto loc_8322D2A8;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8322d2a0
	if (ctx.cr6.eq) goto loc_8322D2A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322d284
	if (!ctx.cr0.eq) goto loc_8322D284;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq 0x8322d288
	if (ctx.cr0.eq) goto loc_8322D288;
loc_8322D284:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8322D288:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d2a0
	if (ctx.cr0.eq) goto loc_8322D2A0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
	// bl 0x83227d78
	ctx.lr = 0x8322D2A0;
	sub_83227D78(ctx, base);
loc_8322D2A0:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x8322d258
	goto loc_8322D258;
loc_8322D2A8:
	// addi r31,r23,4
	ctx.r31.s64 = ctx.r23.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322a028
	ctx.lr = 0x8322D2BC;
	sub_8322A028(ctx, base);
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d3a4
	if (ctx.cr0.eq) goto loc_8322D3A4;
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r11,r11,19,13,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7FFFF;
	// clrlwi. r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322d2f8
	if (ctx.cr0.eq) goto loc_8322D2F8;
	// lwz r30,56(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// clrlwi r29,r11,20
	ctx.r29.u64 = ctx.r11.u32 & 0xFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8322c030
	ctx.lr = 0x8322D2E8;
	sub_8322C030(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322b2d0
	ctx.lr = 0x8322D2F8;
	sub_8322B2D0(ctx, base);
loc_8322D2F8:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d3a4
	if (ctx.cr0.eq) goto loc_8322D3A4;
	// lwz r7,4(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
loc_8322D310:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8322d370
	if (ctx.cr6.eq) goto loc_8322D370;
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322d368
	if (ctx.cr6.eq) goto loc_8322D368;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r11,r10,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d368
	if (ctx.cr0.eq) goto loc_8322D368;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322d364
	if (ctx.cr6.eq) goto loc_8322D364;
	// rlwinm r8,r10,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_8322D348:
	// srw r4,r8,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r4,r20,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r4.u8 & 0x3F));
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x8322d348
	if (!ctx.cr0.eq) goto loc_8322D348;
loc_8322D364:
	// or r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 | ctx.r6.u64;
loc_8322D368:
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// b 0x8322d310
	goto loc_8322D310;
loc_8322D370:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8322d3a4
	if (ctx.cr6.eq) goto loc_8322D3A4;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r30,56(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// rlwimi r6,r11,19,20,27
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 19) & 0xFF0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFF00F);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r29,r6,20
	ctx.r29.u64 = ctx.r6.u32 & 0xFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8322c930
	ctx.lr = 0x8322D394;
	sub_8322C930(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322b2d0
	ctx.lr = 0x8322D3A4;
	sub_8322B2D0(ctx, base);
loc_8322D3A4:
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322d3c8
	if (!ctx.cr0.eq) goto loc_8322D3C8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8322d3c8
	if (ctx.cr6.eq) goto loc_8322D3C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83227550
	ctx.lr = 0x8322D3C4;
	sub_83227550(ctx, base);
	// b 0x8322d3d0
	goto loc_8322D3D0;
loc_8322D3C8:
	// stw r22,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r22.u32);
	// stw r22,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r22.u32);
loc_8322D3D0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322D3D8"))) PPC_WEAK_FUNC(sub_8322D3D8);
PPC_FUNC_IMPL(__imp__sub_8322D3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8322D3E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r3,88(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8322d4c4
	if (ctx.cr6.eq) goto loc_8322D4C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,660(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// bl 0x83227658
	ctx.lr = 0x8322D408;
	sub_83227658(ctx, base);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8322d4c4
	if (ctx.cr6.gt) goto loc_8322D4C4;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8322D420:
	// lwz r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_8322D430:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322d44c
	if (ctx.cr6.eq) goto loc_8322D44C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322d44c
	if (!ctx.cr0.eq) goto loc_8322D44C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8322d430
	goto loc_8322D430;
loc_8322D44C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwimi r29,r11,19,20,27
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 19) & 0xFF0) | (ctx.r29.u64 & 0xFFFFFFFFFFFFF00F);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r29,r29,20
	ctx.r29.u64 = ctx.r29.u32 & 0xFFF;
	// bl 0x8322a540
	ctx.lr = 0x8322D468;
	sub_8322A540(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwimi r11,r29,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8322c930
	ctx.lr = 0x8322D480;
	sub_8322C930(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8322b2d0
	ctx.lr = 0x8322D490;
	sub_8322B2D0(ctx, base);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8322d4a8
	if (!ctx.cr6.eq) goto loc_8322D4A8;
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x8322d4bc
	goto loc_8322D4BC;
loc_8322D4A8:
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// lwz r5,660(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lwz r3,88(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// bl 0x83227658
	ctx.lr = 0x8322D4B8;
	sub_83227658(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8322D4BC:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x8322d420
	if (!ctx.cr6.gt) goto loc_8322D420;
loc_8322D4C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322D4CC"))) PPC_WEAK_FUNC(sub_8322D4CC);
PPC_FUNC_IMPL(__imp__sub_8322D4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322D4D0"))) PPC_WEAK_FUNC(sub_8322D4D0);
PPC_FUNC_IMPL(__imp__sub_8322D4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x8322D4D8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// li r18,0
	ctx.r18.s64 = 0;
	// rlwinm. r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322d5c0
	if (ctx.cr0.eq) goto loc_8322D5C0;
	// lwz r10,4(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
loc_8322D504:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322d52c
	if (ctx.cr6.eq) goto loc_8322D52C;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322d524
	if (ctx.cr6.eq) goto loc_8322D524;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8322d52c
	if (!ctx.cr0.eq) goto loc_8322D52C;
loc_8322D524:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8322d504
	goto loc_8322D504;
loc_8322D52C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r11,r10,20,27,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// stw r11,8(r19)
	PPC_STORE_U32(ctx.r19.u32 + 8, ctx.r11.u32);
loc_8322D538:
	// lwz r30,0(r19)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r22,1
	ctx.r22.s64 = 1;
loc_8322D540:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8322d664
	if (ctx.cr6.eq) goto loc_8322D664;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r7,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d5b8
	if (ctx.cr0.eq) goto loc_8322D5B8;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322d5b8
	if (ctx.cr0.eq) goto loc_8322D5B8;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322d594
	if (ctx.cr6.eq) goto loc_8322D594;
	// rlwinm r8,r7,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8322D578:
	// srw r6,r8,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r6,r22,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r6.u8 & 0x3F));
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x8322d578
	if (!ctx.cr0.eq) goto loc_8322D578;
loc_8322D594:
	// rlwimi r9,r7,19,20,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 19) & 0xFF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF00F);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// clrlwi r29,r9,20
	ctx.r29.u64 = ctx.r9.u32 & 0xFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8322c930
	ctx.lr = 0x8322D5A8;
	sub_8322C930(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8322b2d0
	ctx.lr = 0x8322D5B8;
	sub_8322B2D0(ctx, base);
loc_8322D5B8:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8322d540
	goto loc_8322D540;
loc_8322D5C0:
	// lwz r10,20(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20);
	// rlwinm r10,r10,19,13,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// clrlwi. r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8322d5e4
	if (ctx.cr0.eq) goto loc_8322D5E4;
	// clrlwi r18,r10,20
	ctx.r18.u64 = ctx.r10.u32 & 0xFFF;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x8322c248
	ctx.lr = 0x8322D5E0;
	sub_8322C248(ctx, base);
	// b 0x8322d538
	goto loc_8322D538;
loc_8322D5E4:
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15360
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15360, ctx.xer);
	// beq cr6,0x8322d538
	if (ctx.cr6.eq) goto loc_8322D538;
	// lwz r10,4(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
loc_8322D5F4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322d64c
	if (ctx.cr6.eq) goto loc_8322D64C;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322d614
	if (ctx.cr6.eq) goto loc_8322D614;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8322d61c
	if (!ctx.cr0.eq) goto loc_8322D61C;
loc_8322D614:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8322d5f4
	goto loc_8322D5F4;
loc_8322D61C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwimi r11,r10,20,19,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r18,r11,31,20,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFF;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x8322c990
	ctx.lr = 0x8322D634;
	sub_8322C990(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8322b2d0
	ctx.lr = 0x8322D644;
	sub_8322B2D0(ctx, base);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x8322d538
	if (!ctx.cr6.eq) goto loc_8322D538;
loc_8322D64C:
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// rlwinm. r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d538
	if (ctx.cr0.eq) goto loc_8322D538;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8322D664;
	sub_83204D78(ctx, base);
loc_8322D664:
	// lwz r21,0(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
loc_8322D670:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8322dc88
	if (ctx.cr6.eq) goto loc_8322DC88;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm. r9,r11,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r8,r11,2,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// bne 0x8322d694
	if (!ctx.cr0.eq) goto loc_8322D694;
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x8322d698
	if (ctx.cr0.eq) goto loc_8322D698;
loc_8322D694:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_8322D698:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322dc74
	if (ctx.cr0.eq) goto loc_8322DC74;
	// lwz r25,12(r21)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322d6b8
	if (ctx.cr6.eq) goto loc_8322D6B8;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq 0x8322d6bc
	if (ctx.cr0.eq) goto loc_8322D6BC;
loc_8322D6B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322D6BC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322dc74
	if (!ctx.cr0.eq) goto loc_8322DC74;
	// not r11,r8
	ctx.r11.u64 = ~ctx.r8.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322dc74
	if (ctx.cr0.eq) goto loc_8322DC74;
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// rlwinm. r11,r11,0,15,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322dc74
	if (!ctx.cr0.eq) goto loc_8322DC74;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8322d6fc
	if (!ctx.cr6.eq) goto loc_8322D6FC;
	// li r5,34
	ctx.r5.s64 = 34;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x8322D6F4;
	sub_8321D6D0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x8322d704
	goto loc_8322D704;
loc_8322D6FC:
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// bl 0x8322afe0
	ctx.lr = 0x8322D704;
	sub_8322AFE0(ctx, base);
loc_8322D704:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8322c8a8
	ctx.lr = 0x8322D710;
	sub_8322C8A8(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x8322d7d8
	if (!ctx.cr6.eq) goto loc_8322D7D8;
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_8322D728:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8322d7d8
	if (ctx.cr6.eq) goto loc_8322D7D8;
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d74c
	if (ctx.cr0.eq) goto loc_8322D74C;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm. r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d7ac
	if (ctx.cr0.eq) goto loc_8322D7AC;
loc_8322D74C:
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8322d7a0
	if (ctx.cr6.eq) goto loc_8322D7A0;
loc_8322D75C:
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x8322d7a4
	if (ctx.cr6.eq) goto loc_8322D7A4;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8322d77c
	if (!ctx.cr0.eq) goto loc_8322D77C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322d798
	if (!ctx.cr6.eq) goto loc_8322D798;
loc_8322D77C:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322dc7c
	if (ctx.cr0.eq) goto loc_8322DC7C;
	// lwz r11,28(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi. r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8322d798
	if (ctx.cr0.eq) goto loc_8322D798;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322D798:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8322d75c
	if (!ctx.cr6.eq) goto loc_8322D75C;
loc_8322D7A0:
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_8322D7A4:
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x8322d728
	goto loc_8322D728;
loc_8322D7AC:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x8322d7d0
	if (ctx.cr6.eq) goto loc_8322D7D0;
	// rlwinm r11,r15,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322d7d0
	if (!ctx.cr0.eq) goto loc_8322D7D0;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// b 0x8322d7d4
	goto loc_8322D7D4;
loc_8322D7D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322D7D4:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_8322D7D8:
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8322D7E0:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322d7fc
	if (!ctx.cr0.eq) goto loc_8322D7FC;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8322d838
	if (!ctx.cr0.eq) goto loc_8322D838;
loc_8322D7FC:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322d934
	if (!ctx.cr0.eq) goto loc_8322D934;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83229cb0
	ctx.lr = 0x8322D80C;
	sub_83229CB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322d934
	if (!ctx.cr0.eq) goto loc_8322D934;
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d82c
	if (ctx.cr0.eq) goto loc_8322D82C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8322d838
	goto loc_8322D838;
loc_8322D82C:
	// lwz r11,16(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-40
	ctx.r30.s64 = ctx.r11.s64 + -40;
loc_8322D838:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8322d934
	if (ctx.cr6.eq) goto loc_8322D934;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r9,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d8bc
	if (ctx.cr0.eq) goto loc_8322D8BC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8322D854:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322d880
	if (ctx.cr6.eq) goto loc_8322D880;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r8,r8,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8322d870
	if (!ctx.cr0.eq) goto loc_8322D870;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8322d854
	goto loc_8322D854;
loc_8322D870:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// bne 0x8322d884
	if (!ctx.cr0.eq) goto loc_8322D884;
loc_8322D880:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8322D884:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322d8bc
	if (ctx.cr0.eq) goto loc_8322D8BC;
loc_8322D88C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322d8a8
	if (ctx.cr6.eq) goto loc_8322D8A8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322d8a8
	if (!ctx.cr0.eq) goto loc_8322D8A8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8322d88c
	goto loc_8322D88C;
loc_8322D8A8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwimi r9,r11,20,19,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0x1FE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r4,r9,31,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xFFF;
	// bl 0x8322c930
	ctx.lr = 0x8322D8BC;
	sub_8322C930(ctx, base);
loc_8322D8BC:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8322D8C0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322d92c
	if (ctx.cr6.eq) goto loc_8322D92C;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r7,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d924
	if (ctx.cr0.eq) goto loc_8322D924;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322d924
	if (ctx.cr0.eq) goto loc_8322D924;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322d914
	if (ctx.cr6.eq) goto loc_8322D914;
	// rlwinm r8,r7,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8322D8F8:
	// srw r6,r8,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r6,r22,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r6.u8 & 0x3F));
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x8322d8f8
	if (!ctx.cr0.eq) goto loc_8322D8F8;
loc_8322D914:
	// rlwimi r9,r7,19,20,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 19) & 0xFF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF00F);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// clrlwi r4,r9,20
	ctx.r4.u64 = ctx.r9.u32 & 0xFFF;
	// bl 0x8322c930
	ctx.lr = 0x8322D924;
	sub_8322C930(ctx, base);
loc_8322D924:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8322d8c0
	goto loc_8322D8C0;
loc_8322D92C:
	// cmplw cr6,r30,r15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x8322d7e0
	if (!ctx.cr6.eq) goto loc_8322D7E0;
loc_8322D934:
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// beq cr6,0x8322dba8
	if (ctx.cr6.eq) goto loc_8322DBA8;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r26,r11,18,29,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
loc_8322D954:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8322d9d4
	if (ctx.cr6.eq) goto loc_8322D9D4;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r7,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322d9cc
	if (ctx.cr0.eq) goto loc_8322D9CC;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322d9cc
	if (ctx.cr0.eq) goto loc_8322D9CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322d9a8
	if (ctx.cr6.eq) goto loc_8322D9A8;
	// rlwinm r8,r7,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8322D98C:
	// srw r6,r8,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r6,r22,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r6.u8 & 0x3F));
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x8322d98c
	if (!ctx.cr0.eq) goto loc_8322D98C;
loc_8322D9A8:
	// rlwimi r11,r7,19,20,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 19) & 0xFF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF00F);
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// clrlwi r29,r11,20
	ctx.r29.u64 = ctx.r11.u32 & 0xFFF;
	// rlwinm r4,r29,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// bl 0x8322a970
	ctx.lr = 0x8322D9C0;
	sub_8322A970(ctx, base);
	// andc r11,r29,r3
	ctx.r11.u64 = ctx.r29.u64 & ~ctx.r3.u64;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// or r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 | ctx.r31.u64;
loc_8322D9CC:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8322d954
	goto loc_8322D954;
loc_8322D9D4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322db7c
	if (ctx.cr6.eq) goto loc_8322DB7C;
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// clrldi r9,r31,32
	ctx.r9.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8322db7c
	if (ctx.cr6.lt) goto loc_8322DB7C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8322da2c
	if (!ctx.cr6.eq) goto loc_8322DA2C;
	// li r5,34
	ctx.r5.s64 = 34;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x8322DA24;
	sub_8321D6D0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x8322da34
	goto loc_8322DA34;
loc_8322DA2C:
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
	// bl 0x8322afe0
	ctx.lr = 0x8322DA34;
	sub_8322AFE0(ctx, base);
loc_8322DA34:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8322c848
	ctx.lr = 0x8322DA40;
	sub_8322C848(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r28,r24,4
	ctx.r28.s64 = ctx.r24.s64 + 4;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322da5c
	if (!ctx.cr0.eq) goto loc_8322DA5C;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x8322da68
	goto loc_8322DA68;
loc_8322DA5C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
loc_8322DA68:
	// addi r29,r23,4
	ctx.r29.s64 = ctx.r23.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8322bbe8
	ctx.lr = 0x8322DA74;
	sub_8322BBE8(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322da90
	if (!ctx.cr0.eq) goto loc_8322DA90;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8322daa4
	goto loc_8322DAA4;
loc_8322DA90:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb16f0
	ctx.lr = 0x8322DAA4;
	sub_82CB16F0(ctx, base);
loc_8322DAA4:
	// lwz r27,0(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_8322DAA8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8322db5c
	if (ctx.cr6.eq) goto loc_8322DB5C;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r10,r7,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322db54
	if (ctx.cr0.eq) goto loc_8322DB54;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322db54
	if (ctx.cr0.eq) goto loc_8322DB54;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322dafc
	if (ctx.cr6.eq) goto loc_8322DAFC;
	// rlwinm r8,r7,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8322DAE0:
	// srw r6,r8,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r6,r22,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r6.u8 & 0x3F));
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x8322dae0
	if (!ctx.cr0.eq) goto loc_8322DAE0;
loc_8322DAFC:
	// rlwimi r11,r7,19,20,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 19) & 0xFF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF00F);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r31,r11,20
	ctx.r31.u64 = ctx.r11.u32 & 0xFFF;
	// rlwinm r4,r31,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r30,r31,30,2,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// bl 0x8322a970
	ctx.lr = 0x8322DB18;
	sub_8322A970(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// addi r5,r30,3
	ctx.r5.s64 = ctx.r30.s64 + 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8322a970
	ctx.lr = 0x8322DB2C;
	sub_8322A970(ctx, base);
	// andc r11,r3,r14
	ctx.r11.u64 = ctx.r3.u64 & ~ctx.r14.u64;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322db54
	if (ctx.cr0.eq) goto loc_8322DB54;
	// rlwimi r11,r31,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r4,r11,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// bl 0x8322ac08
	ctx.lr = 0x8322DB54;
	sub_8322AC08(ctx, base);
loc_8322DB54:
	// lwz r27,4(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// b 0x8322daa8
	goto loc_8322DAA8;
loc_8322DB5C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8322c0a0
	ctx.lr = 0x8322DB6C;
	sub_8322C0A0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8322db7c
	if (ctx.cr6.eq) goto loc_8322DB7C;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8322dc4c
	goto loc_8322DC4C;
loc_8322DB7C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8322c0a0
	ctx.lr = 0x8322DB8C;
	sub_8322C0A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r20,4
	ctx.r3.s64 = ctx.r20.s64 + 4;
	// rlwinm r11,r31,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8322bbe8
	ctx.lr = 0x8322DBA4;
	sub_8322BBE8(ctx, base);
	// b 0x8322dc4c
	goto loc_8322DC4C;
loc_8322DBA8:
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r30,r18,28
	ctx.r30.u64 = ctx.r18.u32 & 0xF;
	// rlwinm r31,r10,31,28,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
	// li r29,0
	ctx.r29.s64 = 0;
	// beq 0x8322dc08
	if (ctx.cr0.eq) goto loc_8322DC08;
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// addi r9,r19,44
	ctx.r9.s64 = ctx.r19.s64 + 44;
	// rlwinm r8,r11,13,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
loc_8322DBCC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// andc r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 & ~ctx.r10.u64;
	// subf r30,r10,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r10.s64;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r7,r25
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8322dbfc
	if (!ctx.cr6.eq) goto loc_8322DBFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// or r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 | ctx.r29.u64;
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// slw r11,r22,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// andc r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 & ~ctx.r11.u64;
loc_8322DBFC:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8322dbcc
	if (!ctx.cr0.eq) goto loc_8322DBCC;
loc_8322DC08:
	// rlwinm r4,r18,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r3,r20,4
	ctx.r3.s64 = ctx.r20.s64 + 4;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// bl 0x8322a970
	ctx.lr = 0x8322DC18;
	sub_8322A970(ctx, base);
	// andc r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 & ~ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322dc44
	if (ctx.cr6.eq) goto loc_8322DC44;
loc_8322DC24:
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// andc r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 & ~ctx.r10.u64;
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// subf. r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// or r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 | ctx.r29.u64;
	// bne 0x8322dc24
	if (!ctx.cr0.eq) goto loc_8322DC24;
loc_8322DC44:
	// rlwimi r29,r18,0,0,27
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r18.u32, 0) & 0xFFFFFFF0) | (ctx.r29.u64 & 0xFFFFFFFF0000000F);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8322DC4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8322c030
	ctx.lr = 0x8322DC58;
	sub_8322C030(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8322b2d0
	ctx.lr = 0x8322DC68;
	sub_8322B2D0(ctx, base);
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// rlwimi r11,r31,13,7,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 13) & 0x1FFE000) | (ctx.r11.u64 & 0xFFFFFFFFFE001FFF);
	// stw r11,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r11.u32);
loc_8322DC74:
	// lwz r21,4(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// b 0x8322d670
	goto loc_8322D670;
loc_8322DC7C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8322DC88;
	sub_83204D78(ctx, base);
loc_8322DC88:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8322dca8
	if (ctx.cr6.eq) goto loc_8322DCA8;
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// bl 0x8322afe0
	ctx.lr = 0x8322DC98;
	sub_8322AFE0(ctx, base);
	// addi r11,r17,948
	ctx.r11.s64 = ctx.r17.s64 + 948;
	// lwz r11,952(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 952);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stw r24,952(r17)
	PPC_STORE_U32(ctx.r17.u32 + 952, ctx.r24.u32);
loc_8322DCA8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8322dcc8
	if (ctx.cr6.eq) goto loc_8322DCC8;
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
	// bl 0x8322afe0
	ctx.lr = 0x8322DCB8;
	sub_8322AFE0(ctx, base);
	// addi r11,r17,948
	ctx.r11.s64 = ctx.r17.s64 + 948;
	// lwz r11,952(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 952);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// stw r23,952(r17)
	PPC_STORE_U32(ctx.r17.u32 + 952, ctx.r23.u32);
loc_8322DCC8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322DCD0"))) PPC_WEAK_FUNC(sub_8322DCD0);
PPC_FUNC_IMPL(__imp__sub_8322DCD0) {
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
	// bne 0x8322dd14
	if (!ctx.cr0.eq) goto loc_8322DD14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322dd14
	if (ctx.cr0.eq) goto loc_8322DD14;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8322dd20
	if (!ctx.cr6.gt) goto loc_8322DD20;
loc_8322DD14:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8322be98
	ctx.lr = 0x8322DD1C;
	sub_8322BE98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8322DD20:
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

__attribute__((alias("__imp__sub_8322DD4C"))) PPC_WEAK_FUNC(sub_8322DD4C);
PPC_FUNC_IMPL(__imp__sub_8322DD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322DD50"))) PPC_WEAK_FUNC(sub_8322DD50);
PPC_FUNC_IMPL(__imp__sub_8322DD50) {
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
	// bne 0x8322dd94
	if (!ctx.cr0.eq) goto loc_8322DD94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322dd94
	if (ctx.cr0.eq) goto loc_8322DD94;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8322dda0
	if (!ctx.cr6.gt) goto loc_8322DDA0;
loc_8322DD94:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8322bf20
	ctx.lr = 0x8322DD9C;
	sub_8322BF20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8322DDA0:
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

__attribute__((alias("__imp__sub_8322DDCC"))) PPC_WEAK_FUNC(sub_8322DDCC);
PPC_FUNC_IMPL(__imp__sub_8322DDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322DDD0"))) PPC_WEAK_FUNC(sub_8322DDD0);
PPC_FUNC_IMPL(__imp__sub_8322DDD0) {
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
	// bne 0x8322de14
	if (!ctx.cr0.eq) goto loc_8322DE14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322de14
	if (ctx.cr0.eq) goto loc_8322DE14;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8322de20
	if (!ctx.cr6.gt) goto loc_8322DE20;
loc_8322DE14:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8322bfa8
	ctx.lr = 0x8322DE1C;
	sub_8322BFA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8322DE20:
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

__attribute__((alias("__imp__sub_8322DE4C"))) PPC_WEAK_FUNC(sub_8322DE4C);
PPC_FUNC_IMPL(__imp__sub_8322DE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322DE50"))) PPC_WEAK_FUNC(sub_8322DE50);
PPC_FUNC_IMPL(__imp__sub_8322DE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8322DE58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8322b390
	ctx.lr = 0x8322DE74;
	sub_8322B390(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8322b250
	ctx.lr = 0x8322DE7C;
	sub_8322B250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8322d3d8
	ctx.lr = 0x8322DE8C;
	sub_8322D3D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322df04
	if (!ctx.cr0.eq) goto loc_8322DF04;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8322def4
	goto loc_8322DEF4;
loc_8322DEA4:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8322df08
	if (ctx.cr6.eq) goto loc_8322DF08;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8322d4d0
	ctx.lr = 0x8322DEC4;
	sub_8322D4D0(ctx, base);
	// lbz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8322dee4
	if (!ctx.cr0.eq) goto loc_8322DEE4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8322df08
	if (!ctx.cr6.lt) goto loc_8322DF08;
loc_8322DEE4:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322df04
	if (!ctx.cr0.eq) goto loc_8322DF04;
loc_8322DEF4:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8322dea4
	if (!ctx.cr0.eq) goto loc_8322DEA4;
	// b 0x8322df08
	goto loc_8322DF08;
loc_8322DF04:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8322DF08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322DF14"))) PPC_WEAK_FUNC(sub_8322DF14);
PPC_FUNC_IMPL(__imp__sub_8322DF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322DF18"))) PPC_WEAK_FUNC(sub_8322DF18);
PPC_FUNC_IMPL(__imp__sub_8322DF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8322DF20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8322df40
	if (ctx.cr0.eq) goto loc_8322DF40;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x83204d78
	ctx.lr = 0x8322DF40;
	sub_83204D78(ctx, base);
loc_8322DF40:
	// lwz r30,60(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83227868
	ctx.lr = 0x8322DF54;
	sub_83227868(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322df64
	if (!ctx.cr0.eq) goto loc_8322DF64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8322e05c
	goto loc_8322E05C;
loc_8322DF64:
	// lwz r29,28(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8322c2a0
	ctx.lr = 0x8322DF7C;
	sub_8322C2A0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83227dd0
	ctx.lr = 0x8322DF8C;
	sub_83227DD0(ctx, base);
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322dfb4
	if (!ctx.cr0.eq) goto loc_8322DFB4;
	// lbz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8322dffc
	if (!ctx.cr0.eq) goto loc_8322DFFC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8322dffc
	if (ctx.cr6.lt) goto loc_8322DFFC;
loc_8322DFB4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322de50
	ctx.lr = 0x8322DFC4;
	sub_8322DE50(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8322dffc
	if (ctx.cr6.eq) goto loc_8322DFFC;
loc_8322DFCC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322cea0
	ctx.lr = 0x8322DFDC;
	sub_8322CEA0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8322b390
	ctx.lr = 0x8322DFEC;
	sub_8322B390(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// b 0x8322e05c
	goto loc_8322E05C;
loc_8322DFFC:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8322d4d0
	ctx.lr = 0x8322E014;
	sub_8322D4D0(ctx, base);
	// lbz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8322e034
	if (!ctx.cr0.eq) goto loc_8322E034;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8322dfcc
	if (!ctx.cr6.lt) goto loc_8322DFCC;
loc_8322E034:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322e04c
	if (ctx.cr0.eq) goto loc_8322E04C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8322e054
	goto loc_8322E054;
loc_8322E04C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_8322E054:
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8322E05C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322E064"))) PPC_WEAK_FUNC(sub_8322E064);
PPC_FUNC_IMPL(__imp__sub_8322E064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322E068"))) PPC_WEAK_FUNC(sub_8322E068);
PPC_FUNC_IMPL(__imp__sub_8322E068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8322E070;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// clrlwi r30,r11,19
	ctx.r30.u64 = ctx.r11.u32 & 0x1FFF;
	// beq cr6,0x8322e124
	if (ctx.cr6.eq) goto loc_8322E124;
loc_8322E090:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8322e124
	if (ctx.cr6.lt) goto loc_8322E124;
	// bne cr6,0x8322e0d0
	if (!ctx.cr6.eq) goto loc_8322E0D0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8322e0c4
	if (ctx.cr6.lt) goto loc_8322E0C4;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8322e0c8
	if (!ctx.cr6.gt) goto loc_8322E0C8;
loc_8322E0C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322E0C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322e124
	if (!ctx.cr0.eq) goto loc_8322E124;
loc_8322E0D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322df18
	ctx.lr = 0x8322E0D8;
	sub_8322DF18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8322e118
	if (ctx.cr0.eq) goto loc_8322E118;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8322e110
	if (!ctx.cr6.eq) goto loc_8322E110;
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// bl 0x8322de50
	ctx.lr = 0x8322E0F8;
	sub_8322DE50(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322e130
	if (!ctx.cr6.eq) goto loc_8322E130;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
loc_8322E110:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8322e130
	if (!ctx.cr6.eq) goto loc_8322E130;
loc_8322E118:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322e090
	if (!ctx.cr6.eq) goto loc_8322E090;
loc_8322E124:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8322E128:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8322E130:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8322e128
	goto loc_8322E128;
}

__attribute__((alias("__imp__sub_8322E138"))) PPC_WEAK_FUNC(sub_8322E138);
PPC_FUNC_IMPL(__imp__sub_8322E138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8322E140;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r4,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r4.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322e174
	if (ctx.cr0.eq) goto loc_8322E174;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x8322e180
	goto loc_8322E180;
loc_8322E174:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r11,-40
	ctx.r10.s64 = ctx.r11.s64 + -40;
loc_8322E180:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r30.u8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r30,74(r31)
	PPC_STORE_U8(ctx.r31.u32 + 74, ctx.r30.u8);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x8322E1A8;
	sub_82CB16F0(ctx, base);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// b 0x8322e200
	goto loc_8322E200;
loc_8322E1B8:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// blt cr6,0x8322e1d8
	if (ctx.cr6.lt) goto loc_8322E1D8;
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8322e1dc
	if (!ctx.cr6.gt) goto loc_8322E1DC;
loc_8322E1D8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8322E1DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322e1f0
	if (!ctx.cr0.eq) goto loc_8322E1F0;
	// bl 0x8321c570
	ctx.lr = 0x8322E1E8;
	sub_8321C570(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322e20c
	if (ctx.cr0.eq) goto loc_8322E20C;
loc_8322E1F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322df18
	ctx.lr = 0x8322E1F8;
	sub_8322DF18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8322e218
	if (!ctx.cr0.eq) goto loc_8322E218;
loc_8322E200:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322e1b8
	if (!ctx.cr6.eq) goto loc_8322E1B8;
loc_8322E20C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8322E218:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83204d78
	ctx.lr = 0x8322E224;
	sub_83204D78(ctx, base);
}

__attribute__((alias("__imp__sub_8322E224"))) PPC_WEAK_FUNC(sub_8322E224);
PPC_FUNC_IMPL(__imp__sub_8322E224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322E228"))) PPC_WEAK_FUNC(sub_8322E228);
PPC_FUNC_IMPL(__imp__sub_8322E228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8322E230;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lbz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8322e258
	if (ctx.cr0.eq) goto loc_8322E258;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x83204d78
	ctx.lr = 0x8322E258;
	sub_83204D78(ctx, base);
loc_8322E258:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x8322e27c
	if (!ctx.cr6.eq) goto loc_8322E27C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322e068
	ctx.lr = 0x8322E26C;
	sub_8322E068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322e27c
	if (!ctx.cr0.eq) goto loc_8322E27C;
loc_8322E274:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8322e354
	goto loc_8322E354;
loc_8322E27C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8322e350
	if (ctx.cr6.eq) goto loc_8322E350;
loc_8322E288:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x8322e2a4
	if (!ctx.cr6.eq) goto loc_8322E2A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322e068
	ctx.lr = 0x8322E29C;
	sub_8322E068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322e274
	if (ctx.cr0.eq) goto loc_8322E274;
loc_8322E2A4:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322e2ec
	if (ctx.cr6.eq) goto loc_8322E2EC;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
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
	// b 0x8322e324
	goto loc_8322E324;
loc_8322E2EC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// addi r6,r11,-36
	ctx.r6.s64 = ctx.r11.s64 + -36;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
loc_8322E324:
	// stw r31,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8322df18
	ctx.lr = 0x8322E33C;
	sub_8322DF18(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8322e35c
	if (!ctx.cr0.eq) goto loc_8322E35C;
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8322e288
	if (!ctx.cr6.eq) goto loc_8322E288;
loc_8322E350:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8322E354:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8322E35C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8322e374
	if (ctx.cr0.eq) goto loc_8322E374;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8322e37c
	goto loc_8322E37C;
loc_8322E374:
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r10,-40
	ctx.r10.s64 = ctx.r10.s64 + -40;
loc_8322E37C:
	// stw r10,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r10.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8322e390
	if (ctx.cr0.eq) goto loc_8322E390;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8322E390:
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r8.u32);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// beq cr6,0x8322e3e8
	if (ctx.cr6.eq) goto loc_8322E3E8;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x8322cea0
	ctx.lr = 0x8322E3E4;
	sub_8322CEA0(ctx, base);
	// b 0x8322e35c
	goto loc_8322E35C;
loc_8322E3E8:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x8322e274
	if (!ctx.cr6.eq) goto loc_8322E274;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r5,60(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x8322de50
	ctx.lr = 0x8322E400;
	sub_8322DE50(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322e274
	if (!ctx.cr6.eq) goto loc_8322E274;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,72(r30)
	PPC_STORE_U8(ctx.r30.u32 + 72, ctx.r11.u8);
	// b 0x8322e274
	goto loc_8322E274;
}

__attribute__((alias("__imp__sub_8322E418"))) PPC_WEAK_FUNC(sub_8322E418);
PPC_FUNC_IMPL(__imp__sub_8322E418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8322E420;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// lwz r27,16(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322e448
	if (ctx.cr6.eq) goto loc_8322E448;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8322e450
	goto loc_8322E450;
loc_8322E448:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8322E450:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322e45c
	if (ctx.cr0.eq) goto loc_8322E45C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8322E45C:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8322e4d4
	if (ctx.cr6.eq) goto loc_8322E4D4;
loc_8322E464:
	// rlwinm r30,r31,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322e47c
	if (!ctx.cr0.eq) goto loc_8322E47C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_8322E47C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8322cea0
	ctx.lr = 0x8322E48C;
	sub_8322CEA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322e4c8
	if (ctx.cr0.eq) goto loc_8322E4C8;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 + 36;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8322E4C8:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8322e464
	if (!ctx.cr6.eq) goto loc_8322E464;
loc_8322E4D4:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// stw r11,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r11.u32);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lbz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8322e524
	if (ctx.cr0.eq) goto loc_8322E524;
	// lbz r11,73(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 73);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8322e524
	if (!ctx.cr0.eq) goto loc_8322E524;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,60(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// lwz r4,68(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// bl 0x8322de50
	ctx.lr = 0x8322E510;
	sub_8322DE50(ctx, base);
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322e524
	if (!ctx.cr6.eq) goto loc_8322E524;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,72(r28)
	PPC_STORE_U8(ctx.r28.u32 + 72, ctx.r11.u8);
loc_8322E524:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322E52C"))) PPC_WEAK_FUNC(sub_8322E52C);
PPC_FUNC_IMPL(__imp__sub_8322E52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322E530"))) PPC_WEAK_FUNC(sub_8322E530);
PPC_FUNC_IMPL(__imp__sub_8322E530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8322E538;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x8322e560
	goto loc_8322E560;
loc_8322E54C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322df18
	ctx.lr = 0x8322E554;
	sub_8322DF18(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x8322e574
	if (!ctx.cr0.eq) goto loc_8322E574;
loc_8322E560:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322e54c
	if (!ctx.cr6.eq) goto loc_8322E54C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8322E56C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8322E574:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8322e5c0
	if (ctx.cr6.eq) goto loc_8322E5C0;
	// addi r11,r27,-2
	ctx.r11.s64 = ctx.r27.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r29,r11,1
	ctx.r29.u64 = ctx.r11.u64 ^ 1;
loc_8322E58C:
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,40(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322e5a4
	if (ctx.cr0.eq) goto loc_8322E5A4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8322E5A4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322cea0
	ctx.lr = 0x8322E5B0;
	sub_8322CEA0(ctx, base);
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8322e58c
	if (!ctx.cr6.eq) goto loc_8322E58C;
loc_8322E5C0:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x8322e5ec
	if (!ctx.cr6.eq) goto loc_8322E5EC;
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// bl 0x8322de50
	ctx.lr = 0x8322E5D8;
	sub_8322DE50(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322e5ec
	if (!ctx.cr6.eq) goto loc_8322E5EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
loc_8322E5EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8322e56c
	goto loc_8322E56C;
}

__attribute__((alias("__imp__sub_8322E5F4"))) PPC_WEAK_FUNC(sub_8322E5F4);
PPC_FUNC_IMPL(__imp__sub_8322E5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322E5F8"))) PPC_WEAK_FUNC(sub_8322E5F8);
PPC_FUNC_IMPL(__imp__sub_8322E5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8322E600;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322b918
	ctx.lr = 0x8322E61C;
	sub_8322B918(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322e75c
	if (!ctx.cr0.eq) goto loc_8322E75C;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r9,r11,12,21,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x780;
	// lwz r29,716(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 716);
	// rlwinm r10,r10,7,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7F;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lwz r27,-4(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// beq 0x8322e65c
	if (ctx.cr0.eq) goto loc_8322E65C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322E65C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_8322E66C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322e684
	if (ctx.cr6.eq) goto loc_8322E684;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x8322e688
	if (!ctx.cr6.eq) goto loc_8322E688;
loc_8322E684:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8322E688:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8322e708
	if (!ctx.cr0.eq) goto loc_8322E708;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r11,712(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 712);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r9,-4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r8,r8,12,21,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x780;
	// rlwinm r10,r10,7,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7F;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8322e6f8
	if (ctx.cr6.lt) goto loc_8322E6F8;
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8322e6e4
	if (ctx.cr6.gt) goto loc_8322E6E4;
	// blt cr6,0x8322e6f8
	if (ctx.cr6.lt) goto loc_8322E6F8;
loc_8322E6E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8322af90
	ctx.lr = 0x8322E6EC;
	sub_8322AF90(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8322e66c
	goto loc_8322E66C;
loc_8322E6F8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8322baa8
	ctx.lr = 0x8322E704;
	sub_8322BAA8(ctx, base);
	// b 0x8322e75c
	goto loc_8322E75C;
loc_8322E708:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322e738
	if (!ctx.cr0.eq) goto loc_8322E738;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8322e738
	if (ctx.cr0.eq) goto loc_8322E738;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8322e744
	if (!ctx.cr6.gt) goto loc_8322E744;
loc_8322E738:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322be98
	ctx.lr = 0x8322E744;
	sub_8322BE98(ctx, base);
loc_8322E744:
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
	// stwx r26,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r26.u32);
loc_8322E75C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322E764"))) PPC_WEAK_FUNC(sub_8322E764);
PPC_FUNC_IMPL(__imp__sub_8322E764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322E768"))) PPC_WEAK_FUNC(sub_8322E768);
PPC_FUNC_IMPL(__imp__sub_8322E768) {
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
	// bne 0x8322e7ac
	if (!ctx.cr0.eq) goto loc_8322E7AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322e7ac
	if (ctx.cr0.eq) goto loc_8322E7AC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8322e7b8
	if (!ctx.cr6.gt) goto loc_8322E7B8;
loc_8322E7AC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8322bf20
	ctx.lr = 0x8322E7B4;
	sub_8322BF20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8322E7B8:
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

__attribute__((alias("__imp__sub_8322E7E4"))) PPC_WEAK_FUNC(sub_8322E7E4);
PPC_FUNC_IMPL(__imp__sub_8322E7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322E7E8"))) PPC_WEAK_FUNC(sub_8322E7E8);
PPC_FUNC_IMPL(__imp__sub_8322E7E8) {
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
	// bne 0x8322e82c
	if (!ctx.cr0.eq) goto loc_8322E82C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322e82c
	if (ctx.cr0.eq) goto loc_8322E82C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8322e838
	if (!ctx.cr6.gt) goto loc_8322E838;
loc_8322E82C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8322bfa8
	ctx.lr = 0x8322E834;
	sub_8322BFA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8322E838:
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

__attribute__((alias("__imp__sub_8322E864"))) PPC_WEAK_FUNC(sub_8322E864);
PPC_FUNC_IMPL(__imp__sub_8322E864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322E868"))) PPC_WEAK_FUNC(sub_8322E868);
PPC_FUNC_IMPL(__imp__sub_8322E868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x8322E870;
	__savegprlr_14(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r20,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r20.u32);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// bl 0x8322b390
	ctx.lr = 0x8322E88C;
	sub_8322B390(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8322b428
	ctx.lr = 0x8322E89C;
	sub_8322B428(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8322d3d8
	ctx.lr = 0x8322E8AC;
	sub_8322D3D8(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// li r14,0
	ctx.r14.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322e8c0
	if (ctx.cr0.eq) goto loc_8322E8C0;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8322E8C0:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322e8f8
	if (!ctx.cr0.eq) goto loc_8322E8F8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8322e8f8
	if (ctx.cr0.eq) goto loc_8322E8F8;
loc_8322E8D4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r10,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,40(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322e8f8
	if (!ctx.cr0.eq) goto loc_8322E8F8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322e8d4
	if (!ctx.cr6.eq) goto loc_8322E8D4;
loc_8322E8F8:
	// lwz r11,28(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// addi r19,r20,24
	ctx.r19.s64 = ctx.r20.s64 + 24;
	// lwz r16,16(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// bne 0x8322e9d4
	if (!ctx.cr0.eq) goto loc_8322E9D4;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8322e9d4
	if (ctx.cr0.eq) goto loc_8322E9D4;
loc_8322E920:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// rlwinm r10,r10,0,7,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF81FFFFFF;
	// stw r14,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r14.u32);
	// clrlwi r9,r9,7
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFF;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x832edf00
	ctx.lr = 0x8322E954;
	sub_832EDF00(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r11,r10,21,8,10
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 21) & 0xE00000) | (ctx.r11.u64 & 0xFFFFFFFFFF1FFFFF);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8322d4d0
	ctx.lr = 0x8322E97C;
	sub_8322D4D0(ctx, base);
	// lwz r11,16(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// ble cr6,0x8322e98c
	if (!ctx.cr6.gt) goto loc_8322E98C;
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
loc_8322E98C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322e9b0
	if (ctx.cr0.eq) goto loc_8322E9B0;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x8322e9b0
	if (ctx.cr6.eq) goto loc_8322E9B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8322b590
	ctx.lr = 0x8322E9B0;
	sub_8322B590(ctx, base);
loc_8322E9B0:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322e9cc
	if (!ctx.cr0.eq) goto loc_8322E9CC;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8322e920
	if (!ctx.cr0.eq) goto loc_8322E920;
loc_8322E9CC:
	// cmplw cr6,r30,r16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r16.u32, ctx.xer);
	// bne cr6,0x8322e9e0
	if (!ctx.cr6.eq) goto loc_8322E9E0;
loc_8322E9D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8322E9D8:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_8322E9E0:
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x8322E9F0;
	sub_8321D6D0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r24,r25,4
	ctx.r24.s64 = ctx.r25.s64 + 4;
	// ori r11,r25,1
	ctx.r11.u64 = ctx.r25.u64 | 1;
	// ori r10,r24,1
	ctx.r10.u64 = ctx.r24.u64 | 1;
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322ea78
	if (!ctx.cr0.eq) goto loc_8322EA78;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8322ea78
	if (ctx.cr0.eq) goto loc_8322EA78;
loc_8322EA20:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322ea5c
	if (ctx.cr0.eq) goto loc_8322EA5C;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8322EA30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322ea4c
	if (ctx.cr6.eq) goto loc_8322EA4C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8322ea4c
	if (!ctx.cr0.eq) goto loc_8322EA4C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8322ea30
	goto loc_8322EA30;
loc_8322EA4C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x8322e9d4
	if (ctx.cr6.eq) goto loc_8322E9D4;
loc_8322EA5C:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322ea78
	if (!ctx.cr0.eq) goto loc_8322EA78;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322ea20
	if (!ctx.cr6.eq) goto loc_8322EA20;
loc_8322EA78:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322ec44
	if (!ctx.cr0.eq) goto loc_8322EC44;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8322ec44
	if (ctx.cr0.eq) goto loc_8322EC44;
loc_8322EA90:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm. r10,r11,0,15,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322eadc
	if (!ctx.cr0.eq) goto loc_8322EADC;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322ec28
	if (ctx.cr0.eq) goto loc_8322EC28;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_8322EAAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322eac8
	if (ctx.cr6.eq) goto loc_8322EAC8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322eac8
	if (!ctx.cr0.eq) goto loc_8322EAC8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8322eaac
	goto loc_8322EAAC;
loc_8322EAC8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x8322e9d4
	if (ctx.cr6.eq) goto loc_8322E9D4;
	// b 0x8322ec28
	goto loc_8322EC28;
loc_8322EADC:
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// bne cr6,0x8322ec28
	if (!ctx.cr6.eq) goto loc_8322EC28;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r28,8191
	ctx.r28.s64 = 8191;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
loc_8322EB08:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8322eb78
	if (ctx.cr6.eq) goto loc_8322EB78;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322eb70
	if (ctx.cr6.eq) goto loc_8322EB70;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x8322eb70
	if (!ctx.cr6.eq) goto loc_8322EB70;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// beq cr6,0x8322eb70
	if (ctx.cr6.eq) goto loc_8322EB70;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8321d608
	ctx.lr = 0x8322EB48;
	sub_8321D608(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322eb70
	if (ctx.cr0.eq) goto loc_8322EB70;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// oris r9,r11,1024
	ctx.r9.u64 = ctx.r11.u64 | 67108864;
	// clrlwi r11,r10,19
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFF;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8322eb70
	if (!ctx.cr6.lt) goto loc_8322EB70;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_8322EB70:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8322eb08
	goto loc_8322EB08;
loc_8322EB78:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r31,r10,19
	ctx.r31.u64 = ctx.r10.u32 & 0x1FFF;
	// bne 0x8322ebb0
	if (!ctx.cr0.eq) goto loc_8322EBB0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8322ebb0
	if (ctx.cr0.eq) goto loc_8322EBB0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8322ebbc
	if (!ctx.cr6.gt) goto loc_8322EBBC;
loc_8322EBB0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8322bf20
	ctx.lr = 0x8322EBBC;
	sub_8322BF20(ctx, base);
loc_8322EBBC:
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
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322ec04
	if (!ctx.cr0.eq) goto loc_8322EC04;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8322ec04
	if (ctx.cr0.eq) goto loc_8322EC04;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8322ec10
	if (!ctx.cr6.gt) goto loc_8322EC10;
loc_8322EC04:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8322bf20
	ctx.lr = 0x8322EC10;
	sub_8322BF20(ctx, base);
loc_8322EC10:
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
	// stwx r28,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r28.u32);
loc_8322EC28:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322ec44
	if (!ctx.cr0.eq) goto loc_8322EC44;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322ea90
	if (!ctx.cr6.eq) goto loc_8322EA90;
loc_8322EC44:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322e9d4
	if (!ctx.cr0.eq) goto loc_8322E9D4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8322e9d4
	if (ctx.cr0.eq) goto loc_8322E9D4;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// li r26,8191
	ctx.r26.s64 = 8191;
	// li r27,8191
	ctx.r27.s64 = 8191;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322ee84
	if (!ctx.cr0.eq) goto loc_8322EE84;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// b 0x8322ee78
	goto loc_8322EE78;
loc_8322EC74:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8322ed94
	if (ctx.cr6.gt) goto loc_8322ED94;
loc_8322EC84:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322ed84
	if (!ctx.cr0.eq) goto loc_8322ED84;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8322ed84
	if (ctx.cr0.eq) goto loc_8322ED84;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
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
	// lwzx r30,r10,r4
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8322ecf8
	if (!ctx.cr0.eq) goto loc_8322ECF8;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
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
	ctx.lr = 0x8322ECF8;
	sub_83204D00(ctx, base);
loc_8322ECF8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322ed10
	if (ctx.cr0.eq) goto loc_8322ED10;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// b 0x8322ed1c
	goto loc_8322ED1C;
loc_8322ED10:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_8322ED1C:
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
	// bne 0x8322ed70
	if (!ctx.cr0.eq) goto loc_8322ED70;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83204d00
	ctx.lr = 0x8322ED70;
	sub_83204D00(ctx, base);
loc_8322ED70:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x8322ec84
	if (!ctx.cr6.gt) goto loc_8322EC84;
loc_8322ED84:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x8322ee68
	if (!ctx.cr6.gt) goto loc_8322EE68;
loc_8322ED94:
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8322ED9C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8322ee68
	if (ctx.cr6.eq) goto loc_8322EE68;
	// lwz r31,16(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322edec
	if (ctx.cr6.eq) goto loc_8322EDEC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8321d608
	ctx.lr = 0x8322EDB8;
	sub_8321D608(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322edec
	if (ctx.cr0.eq) goto loc_8322EDEC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x8322edec
	if (!ctx.cr6.eq) goto loc_8322EDEC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// beq cr6,0x8322edec
	if (ctx.cr6.eq) goto loc_8322EDEC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8322edf4
	if (ctx.cr6.lt) goto loc_8322EDF4;
loc_8322EDEC:
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x8322ed9c
	goto loc_8322ED9C;
loc_8322EDF4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r10,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r10.u32);
loc_8322EE0C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8322ee68
	if (ctx.cr6.eq) goto loc_8322EE68;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322ee60
	if (ctx.cr6.eq) goto loc_8322EE60;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x8322ee60
	if (!ctx.cr6.eq) goto loc_8322EE60;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// beq cr6,0x8322ee60
	if (ctx.cr6.eq) goto loc_8322EE60;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8321d608
	ctx.lr = 0x8322EE4C;
	sub_8321D608(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322ee60
	if (ctx.cr0.eq) goto loc_8322EE60;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8322EE60:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8322ee0c
	goto loc_8322EE0C;
loc_8322EE68:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322ee84
	if (!ctx.cr0.eq) goto loc_8322EE84;
loc_8322EE78:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r28,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r28.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x8322ec74
	if (!ctx.cr0.eq) goto loc_8322EC74;
loc_8322EE84:
	// li r15,1
	ctx.r15.s64 = 1;
loc_8322EE88:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322eef4
	if (!ctx.cr0.eq) goto loc_8322EEF4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8322eef4
	if (ctx.cr0.eq) goto loc_8322EEF4;
loc_8322EEA0:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r9,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322eedc
	if (!ctx.cr0.eq) goto loc_8322EEDC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322EEB0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322eedc
	if (ctx.cr6.eq) goto loc_8322EEDC;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm. r8,r8,6,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8322eed0
	if (!ctx.cr0.eq) goto loc_8322EED0;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8322eeb0
	goto loc_8322EEB0;
loc_8322EED0:
	// oris r10,r9,1024
	ctx.r10.u64 = ctx.r9.u64 | 67108864;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8322EEDC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322eef4
	if (!ctx.cr0.eq) goto loc_8322EEF4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322eea0
	if (!ctx.cr6.eq) goto loc_8322EEA0;
loc_8322EEF4:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322ef80
	if (!ctx.cr0.eq) goto loc_8322EF80;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// b 0x8322ef74
	goto loc_8322EF74;
loc_8322EF08:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r8,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322ef64
	if (!ctx.cr0.eq) goto loc_8322EF64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8322EF18:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322ef64
	if (ctx.cr6.eq) goto loc_8322EF64;
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322ef50
	if (ctx.cr6.eq) goto loc_8322EF50;
	// lwz r6,28(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r6,r20
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x8322ef50
	if (!ctx.cr6.eq) goto loc_8322EF50;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r6,r10,0,18,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r6,14336
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 14336, ctx.xer);
	// beq cr6,0x8322ef50
	if (ctx.cr6.eq) goto loc_8322EF50;
	// rlwinm. r10,r10,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322ef58
	if (!ctx.cr0.eq) goto loc_8322EF58;
loc_8322EF50:
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8322ef18
	goto loc_8322EF18;
loc_8322EF58:
	// oris r10,r8,1024
	ctx.r10.u64 = ctx.r8.u64 | 67108864;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8322EF64:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322ef80
	if (!ctx.cr0.eq) goto loc_8322EF80;
loc_8322EF74:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322ef08
	if (!ctx.cr0.eq) goto loc_8322EF08;
loc_8322EF80:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322ee88
	if (!ctx.cr0.eq) goto loc_8322EE88;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// mr r21,r14
	ctx.r21.u64 = ctx.r14.u64;
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// bne 0x8322f2e4
	if (!ctx.cr0.eq) goto loc_8322F2E4;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// b 0x8322f2d8
	goto loc_8322F2D8;
loc_8322EFB0:
	// lwz r24,8(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm. r11,r24,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322f2c8
	if (ctx.cr0.eq) goto loc_8322F2C8;
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// stb r14,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r14.u8);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8322a670
	ctx.lr = 0x8322EFE0;
	sub_8322A670(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8322f014
	if (!ctx.cr0.eq) goto loc_8322F014;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm. r10,r11,0,15,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322f014
	if (ctx.cr0.eq) goto loc_8322F014;
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// bne cr6,0x8322f014
	if (!ctx.cr6.eq) goto loc_8322F014;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
loc_8322F014:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322f0c4
	if (!ctx.cr0.eq) goto loc_8322F0C4;
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_8322F020:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8322f0c4
	if (ctx.cr6.eq) goto loc_8322F0C4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322f0bc
	if (ctx.cr6.eq) goto loc_8322F0BC;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322f0bc
	if (ctx.cr0.eq) goto loc_8322F0BC;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,380(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8322f0bc
	if (!ctx.cr6.eq) goto loc_8322F0BC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// beq cr6,0x8322f0bc
	if (ctx.cr6.eq) goto loc_8322F0BC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322F064:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322f0b4
	if (ctx.cr6.eq) goto loc_8322F0B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d608
	ctx.lr = 0x8322F074;
	sub_8321D608(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322f0a8
	if (ctx.cr0.eq) goto loc_8322F0A8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,380(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8322f0a8
	if (!ctx.cr6.eq) goto loc_8322F0A8;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm. r10,r11,0,15,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322f0a8
	if (ctx.cr0.eq) goto loc_8322F0A8;
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x8322f0b0
	if (ctx.cr6.eq) goto loc_8322F0B0;
loc_8322F0A8:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8322f064
	goto loc_8322F064;
loc_8322F0B0:
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
loc_8322F0B4:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322f0c4
	if (!ctx.cr0.eq) goto loc_8322F0C4;
loc_8322F0BC:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8322f020
	goto loc_8322F020;
loc_8322F0C4:
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322f108
	if (!ctx.cr0.eq) goto loc_8322F108;
	// rlwinm r11,r16,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8322f104
	if (!ctx.cr6.lt) goto loc_8322F104;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8322f108
	if (ctx.cr6.eq) goto loc_8322F108;
	// cmpw cr6,r25,r28
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x8322f104
	if (ctx.cr6.gt) goto loc_8322F104;
	// neg r11,r16
	ctx.r11.s64 = -ctx.r16.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8322f108
	if (!ctx.cr6.lt) goto loc_8322F108;
loc_8322F104:
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
loc_8322F108:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83227288
	ctx.lr = 0x8322F110;
	sub_83227288(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bne 0x8322f138
	if (!ctx.cr0.eq) goto loc_8322F138;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x8322f138
	if (ctx.cr6.eq) goto loc_8322F138;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8322f138
	if (ctx.cr6.eq) goto loc_8322F138;
	// cmpw cr6,r21,r31
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8322f138
	if (ctx.cr6.eq) goto loc_8322F138;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
loc_8322F138:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322f1c4
	if (!ctx.cr0.eq) goto loc_8322F1C4;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
loc_8322F148:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322f1c4
	if (ctx.cr6.eq) goto loc_8322F1C4;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322f1b8
	if (ctx.cr6.eq) goto loc_8322F1B8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r8,r8,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8322f1b8
	if (ctx.cr0.eq) goto loc_8322F1B8;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8322f1b8
	if (!ctx.cr6.eq) goto loc_8322F1B8;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r8,0,18,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r8,14336
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 14336, ctx.xer);
	// beq cr6,0x8322f1b8
	if (ctx.cr6.eq) goto loc_8322F1B8;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r11,r8,27,5,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 27) & 0x7FFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r11,r11,12,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8322f1b8
	if (ctx.cr6.eq) goto loc_8322F1B8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8322f1b0
	if (!ctx.cr6.eq) goto loc_8322F1B0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x8322f1b8
	goto loc_8322F1B8;
loc_8322F1B0:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322f1c0
	if (!ctx.cr6.eq) goto loc_8322F1C0;
loc_8322F1B8:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8322f148
	goto loc_8322F148;
loc_8322F1C0:
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
loc_8322F1C4:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322f224
	if (!ctx.cr0.eq) goto loc_8322F224;
	// rlwinm r11,r24,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8322f208
	if (ctx.cr6.eq) goto loc_8322F208;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x8322f1ec
	if (ctx.cr6.eq) goto loc_8322F1EC;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// bne cr6,0x8322f224
	if (!ctx.cr6.eq) goto loc_8322F224;
	// b 0x8322f21c
	goto loc_8322F21C;
loc_8322F1EC:
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,25,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322f224
	if (!ctx.cr0.eq) goto loc_8322F224;
	// b 0x8322f21c
	goto loc_8322F21C;
loc_8322F208:
	// lwz r4,48(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// bl 0x8321cb38
	ctx.lr = 0x8322F214;
	sub_8321CB38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322f224
	if (ctx.cr0.eq) goto loc_8322F224;
loc_8322F21C:
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// mr r20,r15
	ctx.r20.u64 = ctx.r15.u64;
loc_8322F224:
	// lwz r11,52(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 52);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322f238
	if (ctx.cr0.eq) goto loc_8322F238;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// mr r20,r15
	ctx.r20.u64 = ctx.r15.u64;
loc_8322F238:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8322f264
	if (ctx.cr6.eq) goto loc_8322F264;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322f264
	if (ctx.cr0.eq) goto loc_8322F264;
	// cmplwi cr6,r26,2047
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2047, ctx.xer);
	// bge cr6,0x8322f304
	if (!ctx.cr6.lt) goto loc_8322F304;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
loc_8322F264:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// rlwimi r11,r26,20,1,4
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 20) & 0x78000000) | (ctx.r11.u64 & 0xFFFFFFFF87FFFFFF);
	// rlwimi r10,r26,25,0,6
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r26.u32, 25) & 0xFE000000) | (ctx.r10.u64 & 0xFFFFFFFF01FFFFFF);
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// stw r10,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r10.u32);
	// beq cr6,0x8322f288
	if (ctx.cr6.eq) goto loc_8322F288;
	// stw r27,32(r23)
	PPC_STORE_U32(ctx.r23.u32 + 32, ctx.r27.u32);
loc_8322F288:
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x8322f2a0
	if (!ctx.cr6.eq) goto loc_8322F2A0;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
loc_8322F2A0:
	// clrlwi. r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322f2c4
	if (ctx.cr0.eq) goto loc_8322F2C4;
	// cmplwi cr6,r26,2047
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2047, ctx.xer);
	// bge cr6,0x8322f310
	if (!ctx.cr6.lt) goto loc_8322F310;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// mr r21,r14
	ctx.r21.u64 = ctx.r14.u64;
loc_8322F2C4:
	// lwz r20,380(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
loc_8322F2C8:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322f2e4
	if (!ctx.cr0.eq) goto loc_8322F2E4;
loc_8322F2D8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r27,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r27.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x8322efb0
	if (!ctx.cr0.eq) goto loc_8322EFB0;
loc_8322F2E4:
	// rlwinm r31,r26,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r17,948
	ctx.r30.s64 = ctx.r17.s64 + 948;
	// cmplwi cr6,r31,132
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 132, ctx.xer);
	// ble cr6,0x8322f31c
	if (!ctx.cr6.gt) goto loc_8322F31C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321df08
	ctx.lr = 0x8322F300;
	sub_8321DF08(ctx, base);
	// b 0x8322f384
	goto loc_8322F384;
loc_8322F304:
	// li r4,3641
	ctx.r4.s64 = 3641;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8322F310;
	sub_83204D78(ctx, base);
loc_8322F310:
	// li r4,3641
	ctx.r4.s64 = 3641;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8322F31C;
	sub_83204D78(ctx, base);
loc_8322F31C:
	// lwz r10,140(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,4096
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8322f340
	if (ctx.cr6.lt) goto loc_8322F340;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r10.u32);
	// b 0x8322f388
	goto loc_8322F388;
loc_8322F340:
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r30
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8322f378
	if (ctx.cr6.eq) goto loc_8322F378;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x8322F370;
	sub_82CB16F0(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8322f388
	goto loc_8322F388;
loc_8322F378:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321d298
	ctx.lr = 0x8322F384;
	sub_8321D298(ctx, base);
loc_8322F384:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8322F388:
	// stw r11,712(r17)
	PPC_STORE_U32(ctx.r17.u32 + 712, ctx.r11.u32);
	// cmplwi cr6,r31,132
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 132, ctx.xer);
	// ble cr6,0x8322f3a4
	if (!ctx.cr6.gt) goto loc_8322F3A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321df08
	ctx.lr = 0x8322F3A0;
	sub_8321DF08(ctx, base);
	// b 0x8322f40c
	goto loc_8322F40C;
loc_8322F3A4:
	// lwz r10,140(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,4096
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8322f3c8
	if (ctx.cr6.lt) goto loc_8322F3C8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r10.u32);
	// b 0x8322f410
	goto loc_8322F410;
loc_8322F3C8:
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r30
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8322f400
	if (ctx.cr6.eq) goto loc_8322F400;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x8322F3F8;
	sub_82CB16F0(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8322f410
	goto loc_8322F410;
loc_8322F400:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321d298
	ctx.lr = 0x8322F40C;
	sub_8321D298(ctx, base);
loc_8322F40C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8322F410:
	// cmplwi cr6,r31,132
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 132, ctx.xer);
	// stw r11,708(r17)
	PPC_STORE_U32(ctx.r17.u32 + 708, ctx.r11.u32);
	// ble cr6,0x8322f42c
	if (!ctx.cr6.gt) goto loc_8322F42C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321df08
	ctx.lr = 0x8322F428;
	sub_8321DF08(ctx, base);
	// b 0x8322f494
	goto loc_8322F494;
loc_8322F42C:
	// lwz r10,140(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,4096
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8322f450
	if (ctx.cr6.lt) goto loc_8322F450;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r10.u32);
	// b 0x8322f498
	goto loc_8322F498;
loc_8322F450:
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r30
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8322f488
	if (ctx.cr6.eq) goto loc_8322F488;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x8322F480;
	sub_82CB16F0(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8322f498
	goto loc_8322F498;
loc_8322F488:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321d298
	ctx.lr = 0x8322F494;
	sub_8321D298(ctx, base);
loc_8322F494:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8322F498:
	// stw r11,716(r17)
	PPC_STORE_U32(ctx.r17.u32 + 716, ctx.r11.u32);
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322f540
	if (!ctx.cr0.eq) goto loc_8322F540;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// b 0x8322f534
	goto loc_8322F534;
loc_8322F4B4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322f524
	if (ctx.cr0.eq) goto loc_8322F524;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwimi r11,r10,27,5,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 27) & 0x7FFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r5,r11,12,21,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8322f524
	if (ctx.cr6.eq) goto loc_8322F524;
	// lwz r10,708(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 708);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r14,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r14.u8);
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r30,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r30.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,716(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 716);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bl 0x8322a670
	ctx.lr = 0x8322F518;
	sub_8322A670(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
loc_8322F524:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322f540
	if (!ctx.cr0.eq) goto loc_8322F540;
loc_8322F534:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8322f4b4
	if (!ctx.cr0.eq) goto loc_8322F4B4;
loc_8322F540:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322f9dc
	if (!ctx.cr0.eq) goto loc_8322F9DC;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8322f9dc
	if (ctx.cr0.eq) goto loc_8322F9DC;
loc_8322F558:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322f9c0
	if (ctx.cr0.eq) goto loc_8322F9C0;
	// rlwinm. r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322f590
	if (!ctx.cr0.eq) goto loc_8322F590;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8322f584
	if (ctx.cr6.lt) goto loc_8322F584;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// ble cr6,0x8322f588
	if (!ctx.cr6.gt) goto loc_8322F588;
loc_8322F584:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8322F588:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322f9c0
	if (ctx.cr0.eq) goto loc_8322F9C0;
loc_8322F590:
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r25,r26,4
	ctx.r25.s64 = ctx.r26.s64 + 4;
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
loc_8322F59C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8322f69c
	if (ctx.cr6.eq) goto loc_8322F69C;
	// lwz r9,16(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322f690
	if (ctx.cr6.eq) goto loc_8322F690;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322f5c8
	if (ctx.cr0.eq) goto loc_8322F5C8;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// beq 0x8322f5cc
	if (ctx.cr0.eq) goto loc_8322F5CC;
loc_8322F5C8:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8322F5CC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322f690
	if (ctx.cr0.eq) goto loc_8322F690;
	// rlwinm. r11,r10,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322f690
	if (!ctx.cr0.eq) goto loc_8322F690;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r8,20(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// rlwimi r10,r11,27,5,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0x7FFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFF8000000);
	// rlwimi r9,r8,27,5,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 27) & 0x7FFFFFF) | (ctx.r9.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r7,r10,12,21,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x7FF;
	// rlwinm r11,r9,12,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8322f690
	if (ctx.cr6.eq) goto loc_8322F690;
	// lwz r11,708(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 708);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x8322f67c
	goto loc_8322F67C;
loc_8322F618:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8322F61C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322f678
	if (ctx.cr6.eq) goto loc_8322F678;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r8,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322f63c
	if (ctx.cr0.eq) goto loc_8322F63C;
	// rlwinm. r11,r8,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// beq 0x8322f640
	if (ctx.cr0.eq) goto loc_8322F640;
loc_8322F63C:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8322F640:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322f670
	if (ctx.cr0.eq) goto loc_8322F670;
	// rlwinm r11,r8,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1FFE000;
	// cmplwi cr6,r11,49152
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49152, ctx.xer);
	// bne cr6,0x8322f670
	if (!ctx.cr6.eq) goto loc_8322F670;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r11,r8,27,5,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 27) & 0x7FFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r11,r11,12,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8322f688
	if (!ctx.cr6.eq) goto loc_8322F688;
loc_8322F670:
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8322f61c
	goto loc_8322F61C;
loc_8322F678:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
loc_8322F67C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8322f618
	if (!ctx.cr6.eq) goto loc_8322F618;
	// b 0x8322f690
	goto loc_8322F690;
loc_8322F688:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8322f698
	if (!ctx.cr6.eq) goto loc_8322F698;
loc_8322F690:
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// b 0x8322f59c
	goto loc_8322F59C;
loc_8322F698:
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
loc_8322F69C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8322F6A0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322f9c0
	if (ctx.cr6.eq) goto loc_8322F9C0;
	// lwz r29,16(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8322f754
	if (ctx.cr6.eq) goto loc_8322F754;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322f6d0
	if (ctx.cr0.eq) goto loc_8322F6D0;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// beq 0x8322f6d4
	if (ctx.cr0.eq) goto loc_8322F6D4;
loc_8322F6D0:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8322F6D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322f754
	if (ctx.cr0.eq) goto loc_8322F754;
	// rlwinm r27,r10,19,20,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// bgt cr6,0x8322f754
	if (ctx.cr6.gt) goto loc_8322F754;
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 8, ctx.xer);
	// beq cr6,0x8322f754
	if (ctx.cr6.eq) goto loc_8322F754;
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// beq cr6,0x8322f754
	if (ctx.cr6.eq) goto loc_8322F754;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// beq cr6,0x8322f754
	if (ctx.cr6.eq) goto loc_8322F754;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r8,16(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r7,20(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// rlwimi r10,r11,27,5,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0x7FFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFF8000000);
	// rlwimi r8,r7,27,5,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 27) & 0x7FFFFFF) | (ctx.r8.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r28,r10,12,21,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x7FF;
	// rlwinm r11,r8,12,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8322f754
	if (ctx.cr6.eq) goto loc_8322F754;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x8322f74c
	if (ctx.cr6.lt) goto loc_8322F74C;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// blt cr6,0x8322f75c
	if (ctx.cr6.lt) goto loc_8322F75C;
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// beq cr6,0x8322f754
	if (ctx.cr6.eq) goto loc_8322F754;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8322F74C;
	sub_83204D78(ctx, base);
loc_8322F74C:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322f75c
	if (!ctx.cr0.eq) goto loc_8322F75C;
loc_8322F754:
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// b 0x8322f6a0
	goto loc_8322F6A0;
loc_8322F75C:
	// lwz r30,44(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322f7f8
	if (ctx.cr0.eq) goto loc_8322F7F8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8322a4b8
	ctx.lr = 0x8322F780;
	sub_8322A4B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r5,r26,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x832f5568
	ctx.lr = 0x8322F798;
	sub_832F5568(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r7,16(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// rlwimi r7,r10,27,5,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 27) & 0x7FFFFFF) | (ctx.r7.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r10,r7,12,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0x7FF;
	// rlwimi r9,r10,20,1,4
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x78000000) | (ctx.r9.u64 & 0xFFFFFFFF87FFFFFF);
	// rlwimi r8,r10,25,0,6
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0xFE000000) | (ctx.r8.u64 & 0xFFFFFFFF01FFFFFF);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r11,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x8322f7f8
	if (ctx.cr6.eq) goto loc_8322F7F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8322b590
	ctx.lr = 0x8322F7F8;
	sub_8322B590(ctx, base);
loc_8322F7F8:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r6,r11,25,25,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x832f02e0
	ctx.lr = 0x8322F818;
	sub_832F02E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83232fe0
	ctx.lr = 0x8322F824;
	sub_83232FE0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_8322F838:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8322f860
	if (ctx.cr6.eq) goto loc_8322F860;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322f858
	if (!ctx.cr0.eq) goto loc_8322F858;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83232fe0
	ctx.lr = 0x8322F858;
	sub_83232FE0(ctx, base);
loc_8322F858:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8322f838
	goto loc_8322F838;
loc_8322F860:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_8322F864:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8322F868:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322f8b0
	if (!ctx.cr0.eq) goto loc_8322F8B0;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322f8b0
	if (ctx.cr0.eq) goto loc_8322F8B0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322f868
	if (ctx.cr0.eq) goto loc_8322F868;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r9,r10,27,5,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 27) & 0x7FFFFFF) | (ctx.r9.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r10,r9,12,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8322f8b0
	if (!ctx.cr6.eq) goto loc_8322F8B0;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x8322f864
	goto loc_8322F864;
loc_8322F8B0:
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r6,r11,-36
	ctx.r6.s64 = ctx.r11.s64 + -36;
	// addi r5,r10,-36
	ctx.r5.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r4,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwimi r10,r28,25,0,6
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r28.u32, 25) & 0xFE000000) | (ctx.r10.u64 & 0xFFFFFFFF01FFFFFF);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// oris r9,r9,1024
	ctx.r9.u64 = ctx.r9.u64 | 67108864;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// rlwimi r11,r28,20,1,4
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 20) & 0x78000000) | (ctx.r11.u64 & 0xFFFFFFFF87FFFFFF);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r31,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r31.u32);
loc_8322F914:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322f69c
	if (ctx.cr6.eq) goto loc_8322F69C;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8322f9ac
	if (ctx.cr6.eq) goto loc_8322F9AC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r9,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322f944
	if (ctx.cr0.eq) goto loc_8322F944;
	// rlwinm. r10,r9,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// beq 0x8322f948
	if (ctx.cr0.eq) goto loc_8322F948;
loc_8322F944:
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
loc_8322F948:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322f9ac
	if (ctx.cr0.eq) goto loc_8322F9AC;
	// rlwinm r10,r9,19,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0xFFF;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x8322f9ac
	if (!ctx.cr6.eq) goto loc_8322F9AC;
	// lwz r10,20(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r9,16(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// rlwimi r9,r10,27,5,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 27) & 0x7FFFFFF) | (ctx.r9.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r10,r9,12,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8322f9ac
	if (!ctx.cr6.eq) goto loc_8322F9AC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8322f98c
	goto loc_8322F98C;
loc_8322F984:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_8322F98C:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322f984
	if (!ctx.cr6.eq) goto loc_8322F984;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
loc_8322F9AC:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322f914
	if (!ctx.cr6.eq) goto loc_8322F914;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// b 0x8322f914
	goto loc_8322F914;
loc_8322F9C0:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322f9dc
	if (!ctx.cr0.eq) goto loc_8322F9DC;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322f558
	if (!ctx.cr6.eq) goto loc_8322F558;
loc_8322F9DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8322b428
	ctx.lr = 0x8322F9EC;
	sub_8322B428(ctx, base);
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322fae4
	if (!ctx.cr0.eq) goto loc_8322FAE4;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8322fae4
	if (ctx.cr0.eq) goto loc_8322FAE4;
loc_8322FA04:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322fac8
	if (ctx.cr0.eq) goto loc_8322FAC8;
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322fac8
	if (!ctx.cr0.eq) goto loc_8322FAC8;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r9,r27,4
	ctx.r9.s64 = ctx.r27.s64 + 4;
loc_8322FA20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322fac8
	if (ctx.cr6.eq) goto loc_8322FAC8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322fa54
	if (ctx.cr6.eq) goto loc_8322FA54;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r8,r8,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8322fa54
	if (ctx.cr0.eq) goto loc_8322FA54;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// rlwinm r10,r8,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// beq cr6,0x8322fa5c
	if (ctx.cr6.eq) goto loc_8322FA5C;
loc_8322FA54:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8322fa20
	goto loc_8322FA20;
loc_8322FA5C:
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
loc_8322FA60:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8322fac8
	if (ctx.cr6.eq) goto loc_8322FAC8;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322fab4
	if (ctx.cr6.eq) goto loc_8322FAB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321d608
	ctx.lr = 0x8322FA80;
	sub_8321D608(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322fab4
	if (ctx.cr0.eq) goto loc_8322FAB4;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8322fab4
	if (ctx.cr6.eq) goto loc_8322FAB4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322ae38
	ctx.lr = 0x8322FA9C;
	sub_8322AE38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322fab4
	if (ctx.cr0.eq) goto loc_8322FAB4;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832330a8
	ctx.lr = 0x8322FAB4;
	sub_832330A8(ctx, base);
loc_8322FAB4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8322fa60
	if (!ctx.cr6.eq) goto loc_8322FA60;
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// b 0x8322fa60
	goto loc_8322FA60;
loc_8322FAC8:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322fae4
	if (!ctx.cr0.eq) goto loc_8322FAE4;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322fa04
	if (!ctx.cr6.eq) goto loc_8322FA04;
loc_8322FAE4:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322faf8
	if (ctx.cr0.eq) goto loc_8322FAF8;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// b 0x8322fb04
	goto loc_8322FB04;
loc_8322FAF8:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-40
	ctx.r30.s64 = ctx.r11.s64 + -40;
loc_8322FB04:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8322fb40
	if (ctx.cr6.eq) goto loc_8322FB40;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8322fb40
	if (ctx.cr6.eq) goto loc_8322FB40;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8322fb40
	if (ctx.cr6.eq) goto loc_8322FB40;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8322fb40
	if (ctx.cr6.eq) goto loc_8322FB40;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8322fb40
	if (ctx.cr6.eq) goto loc_8322FB40;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// bne cr6,0x8322fb44
	if (!ctx.cr6.eq) goto loc_8322FB44;
loc_8322FB40:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_8322FB44:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322fb5c
	if (!ctx.cr0.eq) goto loc_8322FB5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321c570
	ctx.lr = 0x8322FB54;
	sub_8321C570(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322fbb0
	if (ctx.cr0.eq) goto loc_8322FBB0;
loc_8322FB5C:
	// lwz r31,4(r19)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322fbb0
	if (!ctx.cr0.eq) goto loc_8322FBB0;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8322fbb0
	if (ctx.cr0.eq) goto loc_8322FBB0;
loc_8322FB70:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8322fbb0
	if (ctx.cr6.eq) goto loc_8322FBB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225908
	ctx.lr = 0x8322FB80;
	sub_83225908(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322fb98
	if (ctx.cr0.eq) goto loc_8322FB98;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832330a8
	ctx.lr = 0x8322FB98;
	sub_832330A8(ctx, base);
loc_8322FB98:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322fbb0
	if (!ctx.cr0.eq) goto loc_8322FBB0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8322fb70
	if (!ctx.cr6.eq) goto loc_8322FB70;
loc_8322FBB0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8322b390
	ctx.lr = 0x8322FBC0;
	sub_8322B390(ctx, base);
	// stw r14,700(r17)
	PPC_STORE_U32(ctx.r17.u32 + 700, ctx.r14.u32);
	// stw r14,704(r17)
	PPC_STORE_U32(ctx.r17.u32 + 704, ctx.r14.u32);
	// li r5,53
	ctx.r5.s64 = 53;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x8322FBD8;
	sub_8321D6D0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r22,r24,4
	ctx.r22.s64 = ctx.r24.s64 + 4;
	// ori r11,r24,1
	ctx.r11.u64 = ctx.r24.u64 | 1;
	// ori r10,r22,1
	ctx.r10.u64 = ctx.r22.u64 | 1;
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// bl 0x8322c390
	ctx.lr = 0x8322FBF8;
	sub_8322C390(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322fc2c
	if (!ctx.cr0.eq) goto loc_8322FC2C;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8322fc2c
	if (ctx.cr0.eq) goto loc_8322FC2C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8322fc38
	if (!ctx.cr6.gt) goto loc_8322FC38;
loc_8322FC2C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8322bfa8
	ctx.lr = 0x8322FC38;
	sub_8322BFA8(ctx, base);
loc_8322FC38:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r23.u32);
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322fd84
	if (!ctx.cr0.eq) goto loc_8322FD84;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8322fd84
	if (ctx.cr0.eq) goto loc_8322FD84;
loc_8322FC74:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322fce4
	if (ctx.cr0.eq) goto loc_8322FCE4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwimi r11,r10,27,5,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 27) & 0x7FFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r11,r11,12,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8322fcbc
	if (ctx.cr6.eq) goto loc_8322FCBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bl 0x8322a0b8
	ctx.lr = 0x8322FCA4;
	sub_8322A0B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322fcbc
	if (ctx.cr0.eq) goto loc_8322FCBC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8322e5f8
	ctx.lr = 0x8322FCBC;
	sub_8322E5F8(ctx, base);
loc_8322FCBC:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8322FCE4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8322fd3c
	if (ctx.cr6.eq) goto loc_8322FD3C;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322fd04
	if (ctx.cr0.eq) goto loc_8322FD04;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// b 0x8322fd0c
	goto loc_8322FD0C;
loc_8322FD04:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_8322FD0C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322fd2c
	if (!ctx.cr6.eq) goto loc_8322FD2C;
loc_8322FD14:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322fd84
	if (!ctx.cr0.eq) goto loc_8322FD84;
	// b 0x8322fd74
	goto loc_8322FD74;
loc_8322FD2C:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322fd84
	if (!ctx.cr0.eq) goto loc_8322FD84;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x8322fd78
	goto loc_8322FD78;
loc_8322FD3C:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322fd50
	if (ctx.cr0.eq) goto loc_8322FD50;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// b 0x8322fd5c
	goto loc_8322FD5C;
loc_8322FD50:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_8322FD5C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8322fd14
	if (ctx.cr6.eq) goto loc_8322FD14;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8322fd84
	if (!ctx.cr0.eq) goto loc_8322FD84;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
loc_8322FD74:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_8322FD78:
	// addi r31,r11,-40
	ctx.r31.s64 = ctx.r11.s64 + -40;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8322fc74
	if (!ctx.cr6.eq) goto loc_8322FC74;
loc_8322FD84:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8322b250
	ctx.lr = 0x8322FD8C;
	sub_8322B250(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8322d3d8
	ctx.lr = 0x8322FD9C;
	sub_8322D3D8(ctx, base);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8322e138
	ctx.lr = 0x8322FDB8;
	sub_8322E138(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8322fdd4
	if (ctx.cr6.eq) goto loc_8322FDD4;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8322fddc
	goto loc_8322FDDC;
loc_8322FDD4:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8322FDDC:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322fde8
	if (ctx.cr0.eq) goto loc_8322FDE8;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8322FDE8:
	// stw r11,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r11.u32);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r11.u32);
	// bl 0x82e673f0
	ctx.lr = 0x8322FDFC;
	sub_82E673F0(ctx, base);
	// addi r25,r3,10000
	ctx.r25.s64 = ctx.r3.s64 + 10000;
loc_8322FE00:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83230268
	if (!ctx.cr0.eq) goto loc_83230268;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83230268
	if (ctx.cr0.eq) goto loc_83230268;
	// bl 0x82e673f0
	ctx.lr = 0x8322FE18;
	sub_82E673F0(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x83230268
	if (!ctx.cr6.lt) goto loc_83230268;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322fe34
	if (ctx.cr0.eq) goto loc_8322FE34;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// b 0x8322fe40
	goto loc_8322FE40;
loc_8322FE34:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8322FE40:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r10,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// b 0x8322fe64
	goto loc_8322FE64;
loc_8322FE5C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_8322FE64:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322fe74
	if (ctx.cr0.eq) goto loc_8322FE74;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8322FE74:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8322fe5c
	if (!ctx.cr6.lt) goto loc_8322FE5C;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8322e418
	ctx.lr = 0x8322FE98;
	sub_8322E418(ctx, base);
	// lbz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 184);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8322fe00
	if (!ctx.cr0.eq) goto loc_8322FE00;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm. r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83230184
	if (!ctx.cr0.eq) goto loc_83230184;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83230184
	if (!ctx.cr6.eq) goto loc_83230184;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8322e228
	ctx.lr = 0x8322FED4;
	sub_8322E228(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322fe00
	if (ctx.cr0.eq) goto loc_8322FE00;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8322c390
	ctx.lr = 0x8322FEE4;
	sub_8322C390(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8322ff04
	if (ctx.cr6.eq) goto loc_8322FF04;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8322ff0c
	goto loc_8322FF0C;
loc_8322FF04:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8322FF0C:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322ff18
	if (ctx.cr0.eq) goto loc_8322FF18;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8322FF18:
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322ff64
	if (!ctx.cr0.eq) goto loc_8322FF64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8322ff64
	if (ctx.cr0.eq) goto loc_8322FF64;
loc_8322FF44:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8322ff64
	if (!ctx.cr0.eq) goto loc_8322FF64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322ff44
	if (!ctx.cr6.eq) goto loc_8322FF44;
loc_8322FF64:
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83230040
	if (ctx.cr6.eq) goto loc_83230040;
loc_8322FF70:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83230034
	if (ctx.cr6.eq) goto loc_83230034;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322ff94
	if (ctx.cr0.eq) goto loc_8322FF94;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8322FF94:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8322ffc4
	if (ctx.cr6.lt) goto loc_8322FFC4;
loc_8322FFA0:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8322ffb8
	if (ctx.cr0.eq) goto loc_8322FFB8;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8322FFB8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8322ffa0
	if (!ctx.cr6.lt) goto loc_8322FFA0;
loc_8322FFC4:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83230034
	if (!ctx.cr0.eq) goto loc_83230034;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83230010
	if (!ctx.cr0.eq) goto loc_83230010;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83230010
	if (ctx.cr0.eq) goto loc_83230010;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8323001c
	if (!ctx.cr6.gt) goto loc_8323001C;
loc_83230010:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8322be98
	ctx.lr = 0x83230018;
	sub_8322BE98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8323001C:
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
loc_83230034:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8322ff70
	if (ctx.cr6.lt) goto loc_8322FF70;
loc_83230040:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_83230044:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832300b0
	if (ctx.cr6.eq) goto loc_832300B0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832300a8
	if (ctx.cr0.eq) goto loc_832300A8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x832300a8
	if (!ctx.cr0.eq) goto loc_832300A8;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,12,21,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x780;
	// lwz r10,708(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 708);
	// rlwinm r11,r11,7,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322a0b8
	ctx.lr = 0x83230090;
	sub_8322A0B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832300a8
	if (ctx.cr0.eq) goto loc_832300A8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8322e5f8
	ctx.lr = 0x832300A8;
	sub_8322E5F8(ctx, base);
loc_832300A8:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x83230044
	goto loc_83230044;
loc_832300B0:
	// lwz r29,32(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83230040
	if (!ctx.cr6.eq) goto loc_83230040;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832300d4
	if (!ctx.cr0.eq) goto loc_832300D4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8323010c
	if (!ctx.cr0.eq) goto loc_8323010C;
loc_832300D4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8322c400
	ctx.lr = 0x832300E0;
	sub_8322C400(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8322e530
	ctx.lr = 0x832300E8;
	sub_8322E530(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322fe00
	if (ctx.cr0.eq) goto loc_8322FE00;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
loc_832300F4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8322b428
	ctx.lr = 0x83230104;
	sub_8322B428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8322e9d8
	goto loc_8322E9D8;
loc_8323010C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8322c628
	ctx.lr = 0x83230118;
	sub_8322C628(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8323012c
	if (ctx.cr0.eq) goto loc_8323012C;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8322c400
	ctx.lr = 0x83230128;
	sub_8322C400(ctx, base);
	// b 0x8322fe00
	goto loc_8322FE00;
loc_8323012C:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8323015c
	if (!ctx.cr0.eq) goto loc_8323015C;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8323015c
	if (ctx.cr0.eq) goto loc_8323015C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83230168
	if (!ctx.cr6.gt) goto loc_83230168;
loc_8323015C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8322bfa8
	ctx.lr = 0x83230168;
	sub_8322BFA8(ctx, base);
loc_83230168:
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
	// stwx r26,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r26.u32);
	// b 0x8322fe00
	goto loc_8322FE00;
loc_83230184:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x832301cc
	if (!ctx.cr0.eq) goto loc_832301CC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832301cc
	if (ctx.cr0.eq) goto loc_832301CC;
loc_832301AC:
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x832301cc
	if (!ctx.cr0.eq) goto loc_832301CC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832301ac
	if (!ctx.cr6.eq) goto loc_832301AC;
loc_832301CC:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83230260
	if (!ctx.cr6.eq) goto loc_83230260;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8322c528
	ctx.lr = 0x832301E4;
	sub_8322C528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832301f4
	if (!ctx.cr0.eq) goto loc_832301F4;
	// stb r15,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r15.u8);
	// stb r15,185(r1)
	PPC_STORE_U8(ctx.r1.u32 + 185, ctx.r15.u8);
loc_832301F4:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83230208
	if (ctx.cr0.eq) goto loc_83230208;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// b 0x83230214
	goto loc_83230214;
loc_83230208:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_83230214:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8322fe00
	if (!ctx.cr0.eq) goto loc_8322FE00;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
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
	ctx.lr = 0x8323025C;
	sub_83204D00(ctx, base);
	// b 0x8322fe00
	goto loc_8322FE00;
loc_83230260:
	// stw r14,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r14.u32);
	// b 0x8322fe00
	goto loc_8322FE00;
loc_83230268:
	// lwz r11,768(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83230278
	if (!ctx.cr6.eq) goto loc_83230278;
	// li r11,32
	ctx.r11.s64 = 32;
loc_83230278:
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8323059c
	if (!ctx.cr6.lt) goto loc_8323059C;
	// stb r14,185(r1)
	PPC_STORE_U8(ctx.r1.u32 + 185, ctx.r14.u8);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stb r15,186(r1)
	PPC_STORE_U8(ctx.r1.u32 + 186, ctx.r15.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8322e418
	ctx.lr = 0x83230294;
	sub_8322E418(ctx, base);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8322c390
	ctx.lr = 0x8323029C;
	sub_8322C390(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// beq cr6,0x832302bc
	if (ctx.cr6.eq) goto loc_832302BC;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x832302c4
	goto loc_832302C4;
loc_832302BC:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_832302C4:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832302d0
	if (ctx.cr0.eq) goto loc_832302D0;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_832302D0:
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832302f8
	if (ctx.cr0.eq) goto loc_832302F8;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_832302F8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_83230304:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83230320
	if (ctx.cr6.eq) goto loc_83230320;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// bne cr6,0x83230324
	if (!ctx.cr6.eq) goto loc_83230324;
loc_83230320:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_83230324:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83230398
	if (!ctx.cr0.eq) goto loc_83230398;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8322af90
	ctx.lr = 0x83230334;
	sub_8322AF90(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8323036c
	if (!ctx.cr0.eq) goto loc_8323036C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r10,-4
	ctx.xer.ca = ctx.r10.u32 > 3;
	ctx.r3.s64 = ctx.r10.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8323036c
	if (ctx.cr0.eq) goto loc_8323036C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x83230378
	if (!ctx.cr6.gt) goto loc_83230378;
loc_8323036C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8322be98
	ctx.lr = 0x83230378;
	sub_8322BE98(ctx, base);
loc_83230378:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
	// b 0x83230304
	goto loc_83230304;
loc_83230398:
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83230578
	if (!ctx.cr0.eq) goto loc_83230578;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83230578
	if (ctx.cr0.eq) goto loc_83230578;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832303cc
	if (ctx.cr0.eq) goto loc_832303CC;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_832303CC:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
loc_832303D4:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832303f4
	if (ctx.cr6.eq) goto loc_832303F4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// bne cr6,0x832303f8
	if (!ctx.cr6.eq) goto loc_832303F8;
loc_832303F4:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_832303F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83230460
	if (!ctx.cr0.eq) goto loc_83230460;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8322af90
	ctx.lr = 0x83230408;
	sub_8322AF90(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83230458
	if (ctx.cr6.eq) goto loc_83230458;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// clrlwi r9,r9,19
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83230458
	if (ctx.cr6.lt) goto loc_83230458;
	// bne cr6,0x832303d4
	if (!ctx.cr6.eq) goto loc_832303D4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// blt cr6,0x8323044c
	if (ctx.cr6.lt) goto loc_8323044C;
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// ble cr6,0x83230450
	if (!ctx.cr6.gt) goto loc_83230450;
loc_8323044C:
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
loc_83230450:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832303d4
	if (ctx.cr0.eq) goto loc_832303D4;
loc_83230458:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x832303d4
	goto loc_832303D4;
loc_83230460:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322b9d0
	ctx.lr = 0x8323046C;
	sub_8322B9D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8322e228
	ctx.lr = 0x8323047C;
	sub_8322E228(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8323056c
	if (ctx.cr0.eq) goto loc_8323056C;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83230398
	if (ctx.cr6.eq) goto loc_83230398;
loc_83230490:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_83230494:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8323055c
	if (ctx.cr6.eq) goto loc_8323055C;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83230554
	if (ctx.cr0.eq) goto loc_83230554;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83230554
	if (!ctx.cr0.eq) goto loc_83230554;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,12,21,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x780;
	// lwz r10,708(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 708);
	// rlwinm r11,r11,7,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322a0b8
	ctx.lr = 0x832304E0;
	sub_8322A0B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83230554
	if (ctx.cr0.eq) goto loc_83230554;
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322b918
	ctx.lr = 0x832304F8;
	sub_8322B918(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83230554
	if (!ctx.cr0.eq) goto loc_83230554;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83230530
	if (!ctx.cr0.eq) goto loc_83230530;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83230530
	if (ctx.cr0.eq) goto loc_83230530;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8323053c
	if (!ctx.cr6.gt) goto loc_8323053C;
loc_83230530:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322be98
	ctx.lr = 0x8323053C;
	sub_8322BE98(ctx, base);
loc_8323053C:
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
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
loc_83230554:
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x83230494
	goto loc_83230494;
loc_8323055C:
	// lwz r28,32(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83230490
	if (!ctx.cr6.eq) goto loc_83230490;
	// b 0x83230398
	goto loc_83230398;
loc_8323056C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x83230578;
	sub_83204D78(ctx, base);
loc_83230578:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8322e530
	ctx.lr = 0x83230580;
	sub_8322E530(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83230594
	if (!ctx.cr0.eq) goto loc_83230594;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x83230594;
	sub_83204D78(ctx, base);
loc_83230594:
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// b 0x832300f4
	goto loc_832300F4;
loc_8323059C:
	// lwz r11,52(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 52);
	// rlwinm. r10,r11,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832305c4
	if (!ctx.cr0.eq) goto loc_832305C4;
	// lwz r10,44(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 44);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832305c4
	if (ctx.cr0.eq) goto loc_832305C4;
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r11,52(r17)
	PPC_STORE_U32(ctx.r17.u32 + 52, ctx.r11.u32);
	// bl 0x832047d8
	ctx.lr = 0x832305C4;
	sub_832047D8(ctx, base);
loc_832305C4:
	// lwz r11,52(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 52);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832305e0
	if (!ctx.cr0.eq) goto loc_832305E0;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r11,52(r17)
	PPC_STORE_U32(ctx.r17.u32 + 52, ctx.r11.u32);
	// bl 0x832047d8
	ctx.lr = 0x832305E0;
	sub_832047D8(ctx, base);
loc_832305E0:
	// lwz r11,768(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 768);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832305f8
	if (ctx.cr6.eq) goto loc_832305F8;
	// li r4,3518
	ctx.r4.s64 = 3518;
	// bl 0x83204d78
	ctx.lr = 0x832305F8;
	sub_83204D78(ctx, base);
loc_832305F8:
	// li r4,3565
	ctx.r4.s64 = 3565;
	// bl 0x83204d78
	ctx.lr = 0x83230600;
	sub_83204D78(ctx, base);
}

__attribute__((alias("__imp__sub_83230600"))) PPC_WEAK_FUNC(sub_83230600);
PPC_FUNC_IMPL(__imp__sub_83230600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x83230608;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832306c4
	if (!ctx.cr0.eq) goto loc_832306C4;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832306c4
	if (ctx.cr0.eq) goto loc_832306C4;
loc_83230628:
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83230640
	if (ctx.cr0.eq) goto loc_83230640;
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r10,r8,24
	ctx.r10.s64 = ctx.r8.s64 + 24;
	// b 0x83230648
	goto loc_83230648;
loc_83230640:
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// addi r10,r8,16
	ctx.r10.s64 = ctx.r8.s64 + 16;
loc_83230648:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83230654
	if (ctx.cr0.eq) goto loc_83230654;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83230654:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832306a8
	if (ctx.cr6.eq) goto loc_832306A8;
loc_83230660:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r11,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r10,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,40(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83230684
	if (!ctx.cr0.eq) goto loc_83230684;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83230660
	if (!ctx.cr6.eq) goto loc_83230660;
loc_83230684:
	// addi r10,r8,24
	ctx.r10.s64 = ctx.r8.s64 + 24;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x832306a8
	if (ctx.cr6.eq) goto loc_832306A8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832306a8
	if (!ctx.cr0.eq) goto loc_832306A8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83230660
	if (!ctx.cr0.eq) goto loc_83230660;
loc_832306A8:
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832306c4
	if (!ctx.cr0.eq) goto loc_832306C4;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83230628
	if (!ctx.cr6.eq) goto loc_83230628;
loc_832306C4:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83230ac8
	if (!ctx.cr0.eq) goto loc_83230AC8;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83230ac8
	if (ctx.cr0.eq) goto loc_83230AC8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r23,r11,-972
	ctx.r23.s64 = ctx.r11.s64 + -972;
loc_832306E4:
	// lwz r11,68(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 68);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83230aac
	if (ctx.cr0.eq) goto loc_83230AAC;
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83230784
	if (!ctx.cr0.eq) goto loc_83230784;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83230784
	if (ctx.cr0.eq) goto loc_83230784;
loc_83230704:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,0,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8323074c
	if (ctx.cr0.eq) goto loc_8323074C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_83230714:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83230740
	if (ctx.cr6.eq) goto loc_83230740;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83230730
	if (!ctx.cr0.eq) goto loc_83230730;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x83230714
	goto loc_83230714;
loc_83230730:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x83230744
	if (!ctx.cr0.eq) goto loc_83230744;
loc_83230740:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83230744:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83230ad0
	if (ctx.cr0.eq) goto loc_83230AD0;
loc_8323074C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r9,r10,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8323076c
	if (!ctx.cr0.eq) goto loc_8323076C;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// ori r9,r9,8191
	ctx.r9.u64 = ctx.r9.u64 | 8191;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
loc_8323076C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83230784
	if (!ctx.cr0.eq) goto loc_83230784;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83230704
	if (!ctx.cr6.eq) goto loc_83230704;
loc_83230784:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83230788:
	// li r5,33
	ctx.r5.s64 = 33;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x83230798;
	sub_8321D6D0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8322ce20
	ctx.lr = 0x832307A4;
	sub_8322CE20(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8322e868
	ctx.lr = 0x832307B4;
	sub_8322E868(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832307f4
	if (ctx.cr0.eq) goto loc_832307F4;
	// lwz r11,772(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 772);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832307dc
	if (!ctx.cr6.eq) goto loc_832307DC;
	// lwz r11,768(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832307dc
	if (!ctx.cr6.eq) goto loc_832307DC;
	// li r11,32
	ctx.r11.s64 = 32;
loc_832307DC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832307f4
	if (ctx.cr6.lt) goto loc_832307F4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,100
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 100, ctx.xer);
	// blt cr6,0x83230788
	if (ctx.cr6.lt) goto loc_83230788;
loc_832307F4:
	// cmplwi cr6,r30,100
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 100, ctx.xer);
	// beq cr6,0x83230adc
	if (ctx.cr6.eq) goto loc_83230ADC;
	// lwz r10,768(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 768);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x83230814
	if (!ctx.cr6.eq) goto loc_83230814;
	// li r11,32
	ctx.r11.s64 = 32;
loc_83230814:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83230afc
	if (!ctx.cr6.lt) goto loc_83230AFC;
	// lwz r5,772(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 772);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83230830
	if (ctx.cr6.eq) goto loc_83230830;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x83230840
	goto loc_83230840;
loc_83230830:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x83230840
	if (!ctx.cr6.eq) goto loc_83230840;
	// li r11,32
	ctx.r11.s64 = 32;
loc_83230840:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83230870
	if (ctx.cr6.lt) goto loc_83230870;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x83230860
	if (!ctx.cr6.eq) goto loc_83230860;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// bne cr6,0x83230860
	if (!ctx.cr6.eq) goto loc_83230860;
	// li r5,32
	ctx.r5.s64 = 32;
loc_83230860:
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// li r4,3604
	ctx.r4.s64 = 3604;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83204b08
	ctx.lr = 0x83230870;
	sub_83204B08(ctx, base);
loc_83230870:
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// li r26,0
	ctx.r26.s64 = 0;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83230aac
	if (!ctx.cr0.eq) goto loc_83230AAC;
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x83230aac
	if (ctx.cr0.eq) goto loc_83230AAC;
loc_83230890:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r30,r11,0,6,4
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x8321d798
	ctx.lr = 0x832308A4;
	sub_8321D798(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832308cc
	if (ctx.cr0.eq) goto loc_832308CC;
	// rlwinm. r11,r30,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// beq 0x83230b1c
	if (ctx.cr0.eq) goto loc_83230B1C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x832308C8;
	sub_832F6CC8(ctx, base);
	// b 0x83230a0c
	goto loc_83230A0C;
loc_832308CC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,19,13,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7FFFF;
	// clrlwi. r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83230a0c
	if (ctx.cr0.eq) goto loc_83230A0C;
	// rlwinm r10,r30,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x3F80;
	// clrlwi r27,r11,20
	ctx.r27.u64 = ctx.r11.u32 & 0xFFF;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x832309e8
	if (!ctx.cr6.eq) goto loc_832309E8;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_832308F4:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83230988
	if (ctx.cr6.eq) goto loc_83230988;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83230920
	if (!ctx.cr0.eq) goto loc_83230920;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83233970
	ctx.lr = 0x8323091C;
	sub_83233970(ctx, base);
	// b 0x83230974
	goto loc_83230974;
loc_83230920:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83230974
	if (ctx.cr0.eq) goto loc_83230974;
	// lwz r22,12(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83230b58
	ctx.lr = 0x8323094C;
	sub_83230B58(ctx, base);
	// lwz r11,20(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,19,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE001FFF;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r11,20(r22)
	PPC_STORE_U32(ctx.r22.u32 + 20, ctx.r11.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832edff8
	ctx.lr = 0x8323096C;
	sub_832EDFF8(ctx, base);
	// clrlwi r11,r21,28
	ctx.r11.u64 = ctx.r21.u32 & 0xF;
	// or r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 | ctx.r29.u64;
loc_83230974:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x832308f4
	if (!ctx.cr6.eq) goto loc_832308F4;
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// b 0x832308f4
	goto loc_832308F4;
loc_83230988:
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
loc_8323098C:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832309e8
	if (ctx.cr6.eq) goto loc_832309E8;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832309d4
	if (ctx.cr6.eq) goto loc_832309D4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832309bc
	if (!ctx.cr0.eq) goto loc_832309BC;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x832309c0
	if (ctx.cr0.eq) goto loc_832309C0;
loc_832309BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832309C0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832309d4
	if (ctx.cr0.eq) goto loc_832309D4;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83233970
	ctx.lr = 0x832309D4;
	sub_83233970(ctx, base);
loc_832309D4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8323098c
	if (!ctx.cr6.eq) goto loc_8323098C;
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// b 0x8323098c
	goto loc_8323098C;
loc_832309E8:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r11,r27,28
	ctx.r11.u64 = ctx.r27.u32 & 0xF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r10,r10,0,19,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFE001FFF;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,-1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// bl 0x832edff8
	ctx.lr = 0x83230A0C;
	sub_832EDFF8(ctx, base);
loc_83230A0C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83230a64
	if (ctx.cr6.eq) goto loc_83230A64;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83230a2c
	if (ctx.cr0.eq) goto loc_83230A2C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83230a34
	goto loc_83230A34;
loc_83230A2C:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_83230A34:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83230a54
	if (!ctx.cr6.eq) goto loc_83230A54;
loc_83230A3C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83230aac
	if (!ctx.cr0.eq) goto loc_83230AAC;
	// b 0x83230a9c
	goto loc_83230A9C;
loc_83230A54:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83230aac
	if (!ctx.cr0.eq) goto loc_83230AAC;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x83230aa0
	goto loc_83230AA0;
loc_83230A64:
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83230a78
	if (ctx.cr0.eq) goto loc_83230A78;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83230a84
	goto loc_83230A84;
loc_83230A78:
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_83230A84:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83230a3c
	if (ctx.cr6.eq) goto loc_83230A3C;
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83230aac
	if (!ctx.cr0.eq) goto loc_83230AAC;
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
loc_83230A9C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_83230AA0:
	// addi r31,r11,-40
	ctx.r31.s64 = ctx.r11.s64 + -40;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83230890
	if (!ctx.cr6.eq) goto loc_83230890;
loc_83230AAC:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83230ac8
	if (!ctx.cr0.eq) goto loc_83230AC8;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832306e4
	if (!ctx.cr6.eq) goto loc_832306E4;
loc_83230AC8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_83230AD0:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83204d78
	ctx.lr = 0x83230ADC;
	sub_83204D78(ctx, base);
loc_83230ADC:
	// lwz r11,768(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 768);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83230af4
	if (ctx.cr6.eq) goto loc_83230AF4;
	// li r4,3518
	ctx.r4.s64 = 3518;
	// bl 0x83204d78
	ctx.lr = 0x83230AF4;
	sub_83204D78(ctx, base);
loc_83230AF4:
	// li r4,3565
	ctx.r4.s64 = 3565;
	// bl 0x83204d78
	ctx.lr = 0x83230AFC;
	sub_83204D78(ctx, base);
loc_83230AFC:
	// lwz r11,768(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 768);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83230b14
	if (ctx.cr6.eq) goto loc_83230B14;
	// li r4,3518
	ctx.r4.s64 = 3518;
	// bl 0x83204d78
	ctx.lr = 0x83230B14;
	sub_83204D78(ctx, base);
loc_83230B14:
	// li r4,3565
	ctx.r4.s64 = 3565;
	// bl 0x83204d78
	ctx.lr = 0x83230B1C;
	sub_83204D78(ctx, base);
loc_83230B1C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x83204d78
	ctx.lr = 0x83230B24;
	sub_83204D78(ctx, base);
}

__attribute__((alias("__imp__sub_83230B24"))) PPC_WEAK_FUNC(sub_83230B24);
PPC_FUNC_IMPL(__imp__sub_83230B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230B28"))) PPC_WEAK_FUNC(sub_83230B28);
PPC_FUNC_IMPL(__imp__sub_83230B28) {
	PPC_FUNC_PROLOGUE();
	// cntlzd r11,r3
	ctx.r11.u64 = ctx.r3.u64 == 0 ? 64 : __builtin_clzll(ctx.r3.u64);
	// subfic r3,r11,63
	ctx.xer.ca = ctx.r11.u32 <= 63;
	ctx.r3.s64 = 63 - ctx.r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230B34"))) PPC_WEAK_FUNC(sub_83230B34);
PPC_FUNC_IMPL(__imp__sub_83230B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230B38"))) PPC_WEAK_FUNC(sub_83230B38);
PPC_FUNC_IMPL(__imp__sub_83230B38) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// or r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 | ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230B44"))) PPC_WEAK_FUNC(sub_83230B44);
PPC_FUNC_IMPL(__imp__sub_83230B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230B48"))) PPC_WEAK_FUNC(sub_83230B48);
PPC_FUNC_IMPL(__imp__sub_83230B48) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,23
	ctx.r11.s64 = ctx.r4.s64 + 23;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230B58"))) PPC_WEAK_FUNC(sub_83230B58);
PPC_FUNC_IMPL(__imp__sub_83230B58) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x83230B60;
	__savegprlr_24(ctx, base);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// clrlwi r3,r4,28
	ctx.r3.u64 = ctx.r4.u32 & 0xF;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r27,3
	ctx.r27.s64 = 3;
	// rlwinm r29,r11,31,28,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// rlwinm. r9,r10,13,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x83230be8
	if (ctx.cr0.eq) goto loc_83230BE8;
	// addi r28,r6,44
	ctx.r28.s64 = ctx.r6.s64 + 44;
loc_83230B90:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// andc r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 & ~ctx.r6.u64;
	// subf r3,r6,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r6.s64;
	// lwz r25,12(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r25,r7
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83230bdc
	if (!ctx.cr6.eq) goto loc_83230BDC;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cntlzw r25,r6
	ctx.r25.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm r6,r30,27,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x3;
	// subfic r30,r25,31
	ctx.xer.ca = ctx.r25.u32 <= 31;
	ctx.r30.s64 = 31 - ctx.r25.s64;
	// rlwinm r25,r6,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r6,r26,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r6.u8 & 0x3F));
	// slw r24,r27,r25
	ctx.r24.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r25.u8 & 0x3F));
	// slw r30,r30,r25
	ctx.r30.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r25.u8 & 0x3F));
	// andc r31,r31,r24
	ctx.r31.u64 = ctx.r31.u64 & ~ctx.r24.u64;
	// andc r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// or r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 | ctx.r31.u64;
loc_83230BDC:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x83230b90
	if (!ctx.cr0.eq) goto loc_83230B90;
loc_83230BE8:
	// andc r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 & ~ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83230c38
	if (ctx.cr6.eq) goto loc_83230C38;
loc_83230BF4:
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// andc r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// andc r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// cntlzw r7,r5
	ctx.r7.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// cntlzw r3,r6
	ctx.r3.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// subfic r7,r7,31
	ctx.xer.ca = ctx.r7.u32 <= 31;
	ctx.r7.s64 = 31 - ctx.r7.s64;
	// subf. r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r3,r3,31
	ctx.xer.ca = ctx.r3.u32 <= 31;
	ctx.r3.s64 = 31 - ctx.r3.s64;
	// slw r5,r27,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r7.u8 & 0x3F));
	// slw r7,r3,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r7.u8 & 0x3F));
	// andc r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 & ~ctx.r5.u64;
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// or r31,r7,r5
	ctx.r31.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// bne 0x83230bf4
	if (!ctx.cr0.eq) goto loc_83230BF4;
loc_83230C38:
	// rlwimi r10,r4,0,0,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83230C44:
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subfic r7,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r7.s64;
	// rotlw r7,r26,r7
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r26.u32, ctx.r7.u8 & 0x1F);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// subf. r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfic r7,r6,31
	ctx.xer.ca = ctx.r6.u32 <= 31;
	ctx.r7.s64 = 31 - ctx.r6.s64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r7,r31,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// bne 0x83230c44
	if (!ctx.cr0.eq) goto loc_83230C44;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83230C80"))) PPC_WEAK_FUNC(sub_83230C80);
PPC_FUNC_IMPL(__imp__sub_83230C80) {
	PPC_FUNC_PROLOGUE();
	// li r3,256
	ctx.r3.s64 = 256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230C88"))) PPC_WEAK_FUNC(sub_83230C88);
PPC_FUNC_IMPL(__imp__sub_83230C88) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230CA0"))) PPC_WEAK_FUNC(sub_83230CA0);
PPC_FUNC_IMPL(__imp__sub_83230CA0) {
	PPC_FUNC_PROLOGUE();
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r11,4
	ctx.r11.s64 = 4;
loc_83230CA8:
	// ldx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r3.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// std r9,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne 0x83230ca8
	if (!ctx.cr0.eq) goto loc_83230CA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230CC8"))) PPC_WEAK_FUNC(sub_83230CC8);
PPC_FUNC_IMPL(__imp__sub_83230CC8) {
	PPC_FUNC_PROLOGUE();
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r11,4
	ctx.r11.s64 = 4;
loc_83230CD0:
	// ldx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r3.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// std r9,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne 0x83230cd0
	if (!ctx.cr0.eq) goto loc_83230CD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230CF0"))) PPC_WEAK_FUNC(sub_83230CF0);
PPC_FUNC_IMPL(__imp__sub_83230CF0) {
	PPC_FUNC_PROLOGUE();
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// ld r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// ld r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230D14"))) PPC_WEAK_FUNC(sub_83230D14);
PPC_FUNC_IMPL(__imp__sub_83230D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230D18"))) PPC_WEAK_FUNC(sub_83230D18);
PPC_FUNC_IMPL(__imp__sub_83230D18) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,10
	ctx.r11.s64 = ctx.r4.s64 + 10;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83230d38
	if (ctx.cr6.eq) goto loc_83230D38;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x83204d78
	sub_83204D78(ctx, base);
	return;
loc_83230D38:
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230D40"))) PPC_WEAK_FUNC(sub_83230D40);
PPC_FUNC_IMPL(__imp__sub_83230D40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83230d70
	if (ctx.cr6.eq) goto loc_83230D70;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x83204d78
	sub_83204D78(ctx, base);
	return;
loc_83230D70:
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230D78"))) PPC_WEAK_FUNC(sub_83230D78);
PPC_FUNC_IMPL(__imp__sub_83230D78) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// li r10,9
	ctx.r10.s64 = 9;
loc_83230D80:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83230d94
	if (!ctx.cr6.eq) goto loc_83230D94;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_83230D94:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x83230d80
	if (!ctx.cr0.eq) goto loc_83230D80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230DA4"))) PPC_WEAK_FUNC(sub_83230DA4);
PPC_FUNC_IMPL(__imp__sub_83230DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230DA8"))) PPC_WEAK_FUNC(sub_83230DA8);
PPC_FUNC_IMPL(__imp__sub_83230DA8) {
	PPC_FUNC_PROLOGUE();
	// clrldi r10,r4,58
	ctx.r10.u64 = ctx.r4.u64 & 0x3F;
	// rlwinm r11,r4,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// sld r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// bge cr6,0x83230dec
	if (!ctx.cr6.lt) goto loc_83230DEC;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_83230DC8:
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x83230df4
	if (!ctx.cr6.eq) goto loc_83230DF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x83230dc8
	if (ctx.cr6.lt) goto loc_83230DC8;
loc_83230DEC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83230DF4:
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// andc r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// cntlzd r11,r11
	ctx.r11.u64 = ctx.r11.u64 == 0 ? 64 : __builtin_clzll(ctx.r11.u64);
	// subfic r11,r11,63
	ctx.xer.ca = ctx.r11.u32 <= 63;
	ctx.r11.s64 = 63 - ctx.r11.s64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// srd r11,r8,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r10.u8 & 0x7F));
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230E20"))) PPC_WEAK_FUNC(sub_83230E20);
PPC_FUNC_IMPL(__imp__sub_83230E20) {
	PPC_FUNC_PROLOGUE();
	// clrldi r10,r4,58
	ctx.r10.u64 = ctx.r4.u64 & 0x3F;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm. r11,r4,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sld r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// blt 0x83230e60
	if (ctx.cr0.lt) goto loc_83230E60;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_83230E40:
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// andc r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x83230e68
	if (!ctx.cr6.eq) goto loc_83230E68;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// bge 0x83230e40
	if (!ctx.cr0.lt) goto loc_83230E40;
loc_83230E60:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83230E68:
	// cntlzd r8,r8
	ctx.r8.u64 = ctx.r8.u64 == 0 ? 64 : __builtin_clzll(ctx.r8.u64);
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// subfic r11,r8,63
	ctx.xer.ca = ctx.r8.u32 <= 63;
	ctx.r11.s64 = 63 - ctx.r8.s64;
	// rlwinm r8,r11,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srd r11,r9,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r8.u8 & 0x7F));
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230E8C"))) PPC_WEAK_FUNC(sub_83230E8C);
PPC_FUNC_IMPL(__imp__sub_83230E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230E90"))) PPC_WEAK_FUNC(sub_83230E90);
PPC_FUNC_IMPL(__imp__sub_83230E90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_83230E94:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83230ecc
	if (ctx.cr6.eq) goto loc_83230ECC;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83230ec4
	if (ctx.cr6.eq) goto loc_83230EC4;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x83230ec4
	if (!ctx.cr6.eq) goto loc_83230EC4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_83230EC4:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83230e94
	goto loc_83230E94;
loc_83230ECC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230ED4"))) PPC_WEAK_FUNC(sub_83230ED4);
PPC_FUNC_IMPL(__imp__sub_83230ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230ED8"))) PPC_WEAK_FUNC(sub_83230ED8);
PPC_FUNC_IMPL(__imp__sub_83230ED8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// li r10,4
	ctx.r10.s64 = 4;
loc_83230EE4:
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x83230ee4
	if (!ctx.cr0.eq) goto loc_83230EE4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230F08"))) PPC_WEAK_FUNC(sub_83230F08);
PPC_FUNC_IMPL(__imp__sub_83230F08) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// li r10,4
	ctx.r10.s64 = 4;
loc_83230F14:
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x83230f14
	if (!ctx.cr0.eq) goto loc_83230F14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230F38"))) PPC_WEAK_FUNC(sub_83230F38);
PPC_FUNC_IMPL(__imp__sub_83230F38) {
	PPC_FUNC_PROLOGUE();
	// ld r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// ld r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230F64"))) PPC_WEAK_FUNC(sub_83230F64);
PPC_FUNC_IMPL(__imp__sub_83230F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230F68"))) PPC_WEAK_FUNC(sub_83230F68);
PPC_FUNC_IMPL(__imp__sub_83230F68) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230F80"))) PPC_WEAK_FUNC(sub_83230F80);
PPC_FUNC_IMPL(__imp__sub_83230F80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83230f98
	if (ctx.cr6.eq) goto loc_83230F98;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x83204d78
	sub_83204D78(ctx, base);
	return;
loc_83230F98:
	// stw r4,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230FA0"))) PPC_WEAK_FUNC(sub_83230FA0);
PPC_FUNC_IMPL(__imp__sub_83230FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83230FA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
loc_83230FBC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// ble cr6,0x83230fd4
	if (!ctx.cr6.gt) goto loc_83230FD4;
	// bl 0x83230da8
	ctx.lr = 0x83230FD0;
	sub_83230DA8(ctx, base);
	// b 0x83230fdc
	goto loc_83230FDC;
loc_83230FD4:
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// bl 0x83230e20
	ctx.lr = 0x83230FDC;
	sub_83230E20(ctx, base);
loc_83230FDC:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83231030
	if (ctx.cr6.eq) goto loc_83231030;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// beq cr6,0x8323103c
	if (ctx.cr6.eq) goto loc_8323103C;
	// lis r10,-27863
	ctx.r10.s64 = -1826029568;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,1186
	ctx.r9.s64 = 1186;
	// ori r10,r10,13532
	ctx.r10.u64 = ctx.r10.u64 | 13532;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8323104c
	if (!ctx.cr6.lt) goto loc_8323104C;
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// ble cr6,0x83230fbc
	if (!ctx.cr6.gt) goto loc_83230FBC;
loc_83231030:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83231034:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8323103C:
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x83231050
	goto loc_83231050;
loc_8323104C:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
loc_83231050:
	// rlwimi r11,r3,2,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 2) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83231034
	goto loc_83231034;
}

__attribute__((alias("__imp__sub_8323105C"))) PPC_WEAK_FUNC(sub_8323105C);
PPC_FUNC_IMPL(__imp__sub_8323105C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83231060"))) PPC_WEAK_FUNC(sub_83231060);
PPC_FUNC_IMPL(__imp__sub_83231060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83231068;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83230fa0
	ctx.lr = 0x83231088;
	sub_83230FA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x832310c4
	if (!ctx.cr6.eq) goto loc_832310C4;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832310bc
	if (ctx.cr0.eq) goto loc_832310BC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832310b4
	if (ctx.cr6.eq) goto loc_832310B4;
	// li r4,3518
	ctx.r4.s64 = 3518;
	// bl 0x83204d78
	ctx.lr = 0x832310B4;
	sub_83204D78(ctx, base);
loc_832310B4:
	// li r4,3565
	ctx.r4.s64 = 3565;
	// bl 0x83204d78
	ctx.lr = 0x832310BC;
	sub_83204D78(ctx, base);
loc_832310BC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832310fc
	goto loc_832310FC;
loc_832310C4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// clrlwi r3,r31,28
	ctx.r3.u64 = ctx.r31.u32 & 0xF;
	// rlwinm r29,r31,30,2,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFC;
	// bl 0x83229a98
	ctx.lr = 0x832310D4;
	sub_83229A98(ctx, base);
	// rlwinm r11,r31,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFFFFFF;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r9,r29,58
	ctx.r9.u64 = ctx.r29.u64 & 0x3F;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// sld r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r30.u32);
	// rlwimi r3,r31,0,0,27
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFFFFF0) | (ctx.r3.u64 & 0xFFFFFFFF0000000F);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r30
	PPC_STORE_U64(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u64);
loc_832310FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83231104"))) PPC_WEAK_FUNC(sub_83231104);
PPC_FUNC_IMPL(__imp__sub_83231104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83231108"))) PPC_WEAK_FUNC(sub_83231108);
PPC_FUNC_IMPL(__imp__sub_83231108) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x83231060
	sub_83231060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83231110"))) PPC_WEAK_FUNC(sub_83231110);
PPC_FUNC_IMPL(__imp__sub_83231110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x83231118;
	__savegprlr_17(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// addi r30,r1,208
	ctx.r30.s64 = ctx.r1.s64 + 208;
	// li r28,4
	ctx.r28.s64 = 4;
	// li r22,0
	ctx.r22.s64 = 0;
loc_8323113C:
	// stw r18,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r18.u32);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r11,768(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 768);
	// std r22,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r22.u64);
	// std r22,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r22.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r22,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r22.u64);
	// std r22,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r22.u64);
	// bne cr6,0x83231164
	if (!ctx.cr6.eq) goto loc_83231164;
	// li r11,32
	ctx.r11.s64 = 32;
loc_83231164:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x8323117c
	if (!ctx.cr6.lt) goto loc_8323117C;
	// subfic r5,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r5.s64 = 64 - ctx.r11.s64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83227f38
	ctx.lr = 0x8323117C;
	sub_83227F38(ctx, base);
loc_8323117C:
	// ld r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ld r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// ld r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 32);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// std r9,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
	// std r8,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r8.u64);
	// bne 0x8323113c
	if (!ctx.cr0.eq) goto loc_8323113C;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// addi r27,r1,208
	ctx.r27.s64 = ctx.r1.s64 + 208;
	// li r20,1
	ctx.r20.s64 = 1;
	// li r19,2
	ctx.r19.s64 = 2;
	// li r21,-1
	ctx.r21.s64 = -1;
loc_832311C0:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// slw r29,r20,r25
	ctx.r29.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r25.u8 & 0x3F));
	// rlwinm r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// and. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83231514
	if (!ctx.cr0.eq) goto loc_83231514;
	// lwz r30,4(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_832311E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8323126c
	if (ctx.cr6.eq) goto loc_8323126C;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83231264
	if (ctx.cr6.eq) goto loc_83231264;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r10,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83231264
	if (ctx.cr0.eq) goto loc_83231264;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83231234
	if (ctx.cr6.eq) goto loc_83231234;
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_83231218:
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r7,r20,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r7.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x83231218
	if (!ctx.cr0.eq) goto loc_83231218;
loc_83231234:
	// and. r11,r8,r29
	ctx.r11.u64 = ctx.r8.u64 & ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83231264
	if (ctx.cr0.eq) goto loc_83231264;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83231260
	if (ctx.cr6.eq) goto loc_83231260;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83231264
	if (ctx.cr6.eq) goto loc_83231264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8322ae38
	ctx.lr = 0x83231258;
	sub_8322AE38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83231264
	if (ctx.cr0.eq) goto loc_83231264;
loc_83231260:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_83231264:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x832311e4
	goto loc_832311E4;
loc_8323126C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83231514
	if (ctx.cr6.eq) goto loc_83231514;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_83231278:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832313b8
	if (!ctx.cr0.eq) goto loc_832313B8;
	// rlwinm r11,r10,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x832313b8
	if (ctx.cr6.eq) goto loc_832313B8;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_83231298:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832313b8
	if (ctx.cr6.eq) goto loc_832313B8;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832312b8
	if (ctx.cr6.eq) goto loc_832312B8;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r8,r8,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x832312c0
	if (!ctx.cr0.eq) goto loc_832312C0;
loc_832312B8:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83231298
	goto loc_83231298;
loc_832312C0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r8,r11,2,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x832312d8
	if (ctx.cr0.eq) goto loc_832312D8;
	// rlwimi r10,r11,20,19,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r4,r10,31,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xFFF;
	// b 0x832313b0
	goto loc_832313B0;
loc_832312D8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_832312DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83231314
	if (ctx.cr6.eq) goto loc_83231314;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8323130c
	if (ctx.cr6.eq) goto loc_8323130C;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x8323130c
	if (!ctx.cr6.eq) goto loc_8323130C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83231318
	if (!ctx.cr0.eq) goto loc_83231318;
loc_8323130C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x832312dc
	goto loc_832312DC;
loc_83231314:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
loc_83231318:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8323131C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832313b8
	if (ctx.cr6.eq) goto loc_832313B8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8323133c
	if (ctx.cr6.eq) goto loc_8323133C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83231344
	if (!ctx.cr0.eq) goto loc_83231344;
loc_8323133C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8323131c
	goto loc_8323131C;
loc_83231344:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832313b8
	if (ctx.cr0.eq) goto loc_832313B8;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// addi r9,r1,216
	ctx.r9.s64 = ctx.r1.s64 + 216;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// rlwimi r10,r11,20,19,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// rlwinm r4,r10,31,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xFFF;
	// rlwinm r11,r4,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r10,r4,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// clrldi r5,r5,58
	ctx.r5.u64 = ctx.r5.u64 & 0x3F;
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// sld r10,r19,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r19.u64 << (ctx.r5.u8 & 0x7F));
	// ldx r9,r3,r9
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + ctx.r9.u32);
	// clrldi r11,r11,58
	ctx.r11.u64 = ctx.r11.u64 & 0x3F;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sld r5,r21,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r21.u64 << (ctx.r11.u8 & 0x7F));
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// srd r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83230b58
	ctx.lr = 0x832313AC;
	sub_83230B58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_832313B0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83228238
	ctx.lr = 0x832313B8;
	sub_83228238(ctx, base);
loc_832313B8:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x83231444
	if (ctx.cr6.eq) goto loc_83231444;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x83231420
	if (ctx.cr6.eq) goto loc_83231420;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_832313D4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83231420
	if (ctx.cr6.eq) goto loc_83231420;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r30,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83231418
	if (ctx.cr0.eq) goto loc_83231418;
	// rlwinm. r11,r30,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83231418
	if (ctx.cr0.eq) goto loc_83231418;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d608
	ctx.lr = 0x832313F8;
	sub_8321D608(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83231418
	if (ctx.cr0.eq) goto loc_83231418;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r11,r30,20,19,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 20) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r4,r11,31,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFF;
	// bl 0x832281d8
	ctx.lr = 0x83231418;
	sub_832281D8(ctx, base);
loc_83231418:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x832313d4
	goto loc_832313D4;
loc_83231420:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83231438
	if (ctx.cr0.eq) goto loc_83231438;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// b 0x83231278
	goto loc_83231278;
loc_83231438:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r29,r11,-40
	ctx.r29.s64 = ctx.r11.s64 + -40;
	// b 0x83231278
	goto loc_83231278;
loc_83231444:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_83231448:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83231494
	if (ctx.cr6.eq) goto loc_83231494;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r30,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8323148c
	if (ctx.cr0.eq) goto loc_8323148C;
	// rlwinm. r11,r30,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8323148c
	if (ctx.cr0.eq) goto loc_8323148C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d608
	ctx.lr = 0x8323146C;
	sub_8321D608(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8323148c
	if (ctx.cr0.eq) goto loc_8323148C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r11,r30,20,19,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 20) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r4,r11,31,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFF;
	// bl 0x832281d8
	ctx.lr = 0x8323148C;
	sub_832281D8(ctx, base);
loc_8323148C:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x83231448
	goto loc_83231448;
loc_83231494:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832314ac
	if (ctx.cr0.eq) goto loc_832314AC;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// b 0x832314b4
	goto loc_832314B4;
loc_832314AC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r29,r11,-40
	ctx.r29.s64 = ctx.r11.s64 + -40;
loc_832314B4:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x83231514
	if (ctx.cr6.eq) goto loc_83231514;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83231444
	if (!ctx.cr0.eq) goto loc_83231444;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_832314CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83231444
	if (ctx.cr6.eq) goto loc_83231444;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832314ec
	if (ctx.cr6.eq) goto loc_832314EC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x832314f4
	if (!ctx.cr0.eq) goto loc_832314F4;
loc_832314EC:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x832314cc
	goto loc_832314CC;
loc_832314F4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r11,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83231444
	if (ctx.cr0.eq) goto loc_83231444;
	// rlwimi r10,r11,20,19,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r4,r10,31,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xFFF;
	// bl 0x832281d8
	ctx.lr = 0x83231510;
	sub_832281D8(ctx, base);
	// b 0x83231444
	goto loc_83231444;
loc_83231514:
	// addi r26,r26,5
	ctx.r26.s64 = ctx.r26.s64 + 5;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,40
	ctx.r27.s64 = ctx.r27.s64 + 40;
	// cmplwi cr6,r26,20
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 20, ctx.xer);
	// blt cr6,0x832311c0
	if (ctx.cr6.lt) goto loc_832311C0;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// stw r18,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r18.u32);
	// lwz r11,768(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r22,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r22.u64);
	// std r22,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r22.u64);
	// std r22,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r22.u64);
	// std r22,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r22.u64);
	// bne cr6,0x83231550
	if (!ctx.cr6.eq) goto loc_83231550;
	// li r11,32
	ctx.r11.s64 = 32;
loc_83231550:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x83231568
	if (!ctx.cr6.lt) goto loc_83231568;
	// subfic r5,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r5.s64 = 64 - ctx.r11.s64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83227f38
	ctx.lr = 0x83231568;
	sub_83227F38(ctx, base);
loc_83231568:
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// lwz r6,8(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// rlwinm r26,r6,31,1,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r1,216
	ctx.r8.s64 = ctx.r1.s64 + 216;
	// std r21,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r21.u64);
	// std r21,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r21.u64);
	// std r21,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r21.u64);
	// std r21,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r21.u64);
loc_8323158C:
	// slw r11,r20,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r7.u8 & 0x3F));
	// and r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & ctx.r26.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832315c8
	if (ctx.cr0.eq) goto loc_832315C8;
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_832315A8:
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// and r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 & ctx.r5.u64;
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x832315a8
	if (!ctx.cr0.eq) goto loc_832315A8;
loc_832315C8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,40
	ctx.r8.s64 = ctx.r8.s64 + 40;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// blt cr6,0x8323158c
	if (ctx.cr6.lt) goto loc_8323158C;
	// rlwinm r25,r6,18,29,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x7;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83230fa0
	ctx.lr = 0x832315F0;
	sub_83230FA0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83231858
	if (ctx.cr6.eq) goto loc_83231858;
	// clrlwi r27,r26,28
	ctx.r27.u64 = ctx.r26.u32 & 0xF;
loc_832315FC:
	// rlwinm r28,r3,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_83231610:
	// slw r9,r20,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r6.u8 & 0x3F));
	// and r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 & ctx.r26.u64;
	// clrlwi. r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832316a4
	if (ctx.cr0.eq) goto loc_832316A4;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r28,28,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0x3FFFFFF;
	// addi r5,r9,3
	ctx.r5.s64 = ctx.r9.s64 + 3;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// clrldi r5,r5,58
	ctx.r5.u64 = ctx.r5.u64 & 0x3F;
	// rlwinm r4,r7,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// sld r7,r19,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r19.u64 << (ctx.r5.u8 & 0x7F));
	// ldx r5,r4,r3
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + ctx.r3.u32);
	// clrldi r9,r9,58
	ctx.r9.u64 = ctx.r9.u64 & 0x3F;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// sld r4,r21,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r21.u64 << (ctx.r9.u8 & 0x7F));
	// and r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 & ctx.r5.u64;
	// lis r5,-28311
	ctx.r5.s64 = -1855389696;
	// and r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 & ctx.r4.u64;
	// lis r4,0
	ctx.r4.s64 = 0;
	// srd r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r9.u8 & 0x7F));
	// ori r5,r5,5192
	ctx.r5.u64 = ctx.r5.u64 | 5192;
	// ori r4,r4,36262
	ctx.r4.u64 = ctx.r4.u64 | 36262;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// srd r5,r5,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r9.u8 & 0x7F));
	// stwx r10,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// srd r5,r5,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r5,r5,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r9.u8 & 0x7F));
	// stwx r9,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// clrlwi r9,r5,29
	ctx.r9.u64 = ctx.r5.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r9,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
loc_832316A4:
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r8,20
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 20, ctx.xer);
	// blt cr6,0x83231610
	if (ctx.cr6.lt) goto loc_83231610;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
loc_832316D0:
	// slw r11,r20,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r6.u8 & 0x3F));
	// and r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & ctx.r26.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83231714
	if (ctx.cr0.eq) goto loc_83231714;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_832316EC:
	// slw r8,r20,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r11.u8 & 0x3F));
	// and. r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83231704
	if (ctx.cr0.eq) goto loc_83231704;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_83231704:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x832316ec
	if (ctx.cr6.lt) goto loc_832316EC;
loc_83231714:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// blt cr6,0x832316d0
	if (ctx.cr6.lt) goto loc_832316D0;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_83231730:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
loc_83231740:
	// slw r10,r20,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r11.u8 & 0x3F));
	// and. r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83231760
	if (ctx.cr0.eq) goto loc_83231760;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83231760
	if (!ctx.cr6.lt) goto loc_83231760;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_83231760:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x83231740
	if (ctx.cr6.lt) goto loc_83231740;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83231860
	if (ctx.cr6.eq) goto loc_83231860;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
loc_83231794:
	// slw r6,r20,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r11.u8 & 0x3F));
	// and. r8,r4,r6
	ctx.r8.u64 = ctx.r4.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x832317b4
	if (ctx.cr0.eq) goto loc_832317B4;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x832317b4
	if (!ctx.cr6.lt) goto loc_832317B4;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_832317B4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x83231794
	if (ctx.cr6.lt) goto loc_83231794;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83231880
	if (ctx.cr6.eq) goto loc_83231880;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83231880
	if (ctx.cr6.eq) goto loc_83231880;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 | ctx.r3.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// stwx r22,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r22.u32);
	// andc r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 & ~ctx.r8.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// or r30,r8,r9
	ctx.r30.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_83231810:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwzx r8,r11,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// and. r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83231838
	if (ctx.cr0.eq) goto loc_83231838;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stwx r8,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
loc_83231838:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x83231810
	if (ctx.cr6.lt) goto loc_83231810;
	// slw r11,r20,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r31.u8 & 0x3F));
	// subf. r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x83231730
	if (!ctx.cr0.eq) goto loc_83231730;
	// stw r30,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r30.u32);
	// rlwimi r3,r28,4,0,27
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r28.u32, 4) & 0xFFFFFFF0) | (ctx.r3.u64 & 0xFFFFFFFF0000000F);
loc_83231858:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
loc_83231860:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83230fa0
	ctx.lr = 0x83231874;
	sub_83230FA0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x832315fc
	if (!ctx.cr6.eq) goto loc_832315FC;
	// b 0x83231858
	goto loc_83231858;
loc_83231880:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83204d78
	ctx.lr = 0x8323188C;
	sub_83204D78(ctx, base);
}

__attribute__((alias("__imp__sub_8323188C"))) PPC_WEAK_FUNC(sub_8323188C);
PPC_FUNC_IMPL(__imp__sub_8323188C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83231890"))) PPC_WEAK_FUNC(sub_83231890);
PPC_FUNC_IMPL(__imp__sub_83231890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x83231898;
	__savegprlr_17(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r17,r23
	ctx.r17.u64 = ctx.r23.u64;
	// lwz r10,116(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 116);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r20,r10,1
	ctx.r20.s64 = ctx.r10.s64 + 1;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r20,63
	ctx.r9.s64 = ctx.r20.s64 + 63;
	// rlwinm r19,r9,26,6,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// bne 0x83231fdc
	if (!ctx.cr0.eq) goto loc_83231FDC;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83231fdc
	if (ctx.cr0.eq) goto loc_83231FDC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r22,1
	ctx.r22.s64 = 1;
	// addi r18,r11,-972
	ctx.r18.s64 = ctx.r11.s64 + -972;
loc_832318DC:
	// lwz r11,28(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// addi r29,r21,24
	ctx.r29.s64 = ctx.r21.s64 + 24;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83231918
	if (!ctx.cr0.eq) goto loc_83231918;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83231918
	if (ctx.cr0.eq) goto loc_83231918;
loc_832318F4:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r10,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,40(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83231918
	if (!ctx.cr0.eq) goto loc_83231918;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832318f4
	if (!ctx.cr6.eq) goto loc_832318F4;
loc_83231918:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83228158
	ctx.lr = 0x83231924;
	sub_83228158(ctx, base);
	// lwz r3,88(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832319c0
	if (ctx.cr6.eq) goto loc_832319C0;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83227658
	ctx.lr = 0x8323193C;
	sub_83227658(ctx, base);
	// addi r30,r20,-1
	ctx.r30.s64 = ctx.r20.s64 + -1;
	// b 0x832319b4
	goto loc_832319B4;
loc_83231944:
	// lwz r11,696(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 696);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_83231954:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83231994
	if (ctx.cr6.eq) goto loc_83231994;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83231974
	if (ctx.cr6.eq) goto loc_83231974;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8323197c
	if (!ctx.cr0.eq) goto loc_8323197C;
loc_83231974:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83231954
	goto loc_83231954;
loc_8323197C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r10,r11,20,19,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r4,r10,31,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xFFF;
	// bl 0x832281d8
	ctx.lr = 0x83231994;
	sub_832281D8(ctx, base);
loc_83231994:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x832319a4
	if (!ctx.cr6.eq) goto loc_832319A4;
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x832319b8
	goto loc_832319B8;
loc_832319A4:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r3,88(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 88);
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// bl 0x83227658
	ctx.lr = 0x832319B4;
	sub_83227658(ctx, base);
loc_832319B4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832319B8:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x83231944
	if (!ctx.cr6.gt) goto loc_83231944;
loc_832319C0:
	// lwz r11,96(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832319dc
	if (ctx.cr6.eq) goto loc_832319DC;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832320d4
	if (!ctx.cr6.eq) goto loc_832320D4;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_832319DC:
	// addi r10,r1,232
	ctx.r10.s64 = ctx.r1.s64 + 232;
	// stw r24,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r24.u32);
	// lwz r11,768(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r23,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r23.u64);
	// std r23,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r23.u64);
	// std r23,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r23.u64);
	// std r23,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r23.u64);
	// bne cr6,0x83231a04
	if (!ctx.cr6.eq) goto loc_83231A04;
	// li r11,32
	ctx.r11.s64 = 32;
loc_83231A04:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x83231a1c
	if (!ctx.cr6.lt) goto loc_83231A1C;
	// subfic r5,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r5.s64 = 64 - ctx.r11.s64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83227f38
	ctx.lr = 0x83231A1C;
	sub_83227F38(ctx, base);
loc_83231A1C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83231fc0
	if (!ctx.cr0.eq) goto loc_83231FC0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x832320c4
	goto loc_832320C4;
loc_83231A30:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// rlwinm. r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83231a7c
	if (ctx.cr0.eq) goto loc_83231A7C;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_83231A44:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83231a6c
	if (ctx.cr6.eq) goto loc_83231A6C;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83231a64
	if (ctx.cr6.eq) goto loc_83231A64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83231a6c
	if (!ctx.cr0.eq) goto loc_83231A6C;
loc_83231A64:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x83231a44
	goto loc_83231A44;
loc_83231A6C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r11,r10,20,27,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// b 0x83231b64
	goto loc_83231B64;
loc_83231A7C:
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15360
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15360, ctx.xer);
	// beq cr6,0x83231b64
	if (ctx.cr6.eq) goto loc_83231B64;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_83231A8C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83231b64
	if (ctx.cr6.eq) goto loc_83231B64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83231aac
	if (ctx.cr6.eq) goto loc_83231AAC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83231ab4
	if (!ctx.cr0.eq) goto loc_83231AB4;
loc_83231AAC:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x83231a8c
	goto loc_83231A8C;
loc_83231AB4:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwimi r11,r10,20,19,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r25,r11,31,20,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFF;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x83228238
	ctx.lr = 0x83231ACC;
	sub_83228238(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83231b64
	if (ctx.cr0.eq) goto loc_83231B64;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r4,r25,28
	ctx.r4.u64 = ctx.r25.u32 & 0xF;
	// b 0x83231b38
	goto loc_83231B38;
loc_83231AE4:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83231b34
	if (ctx.cr0.eq) goto loc_83231B34;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_83231AF4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83231b10
	if (ctx.cr6.eq) goto loc_83231B10;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83231b10
	if (!ctx.cr0.eq) goto loc_83231B10;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x83231af4
	goto loc_83231AF4;
loc_83231B10:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r10,20,19,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x1FE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r10,r9,31,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xFFF;
	// xor r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r25.u64;
	// rlwinm. r9,r9,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83231b34
	if (!ctx.cr0.eq) goto loc_83231B34;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// andc r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 & ~ctx.r10.u64;
loc_83231B34:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_83231B38:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83231b50
	if (!ctx.cr0.eq) goto loc_83231B50;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83231ae4
	if (!ctx.cr0.eq) goto loc_83231AE4;
loc_83231B50:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83231b64
	if (ctx.cr6.eq) goto loc_83231B64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwimi r4,r25,0,0,27
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r25.u32, 0) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// bl 0x83228238
	ctx.lr = 0x83231B64;
	sub_83228238(ctx, base);
loc_83231B64:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm. r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83231b94
	if (!ctx.cr0.eq) goto loc_83231B94;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x83231b88
	if (ctx.cr6.lt) goto loc_83231B88;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// ble cr6,0x83231b8c
	if (!ctx.cr6.gt) goto loc_83231B8C;
loc_83231B88:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_83231B8C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83231bb8
	if (ctx.cr0.eq) goto loc_83231BB8;
loc_83231B94:
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// li r10,9
	ctx.r10.s64 = 9;
loc_83231B9C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83231bac
	if (!ctx.cr6.eq) goto loc_83231BAC;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_83231BAC:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x83231b9c
	if (!ctx.cr0.eq) goto loc_83231B9C;
loc_83231BB8:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_83231BBC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83231bf4
	if (ctx.cr6.eq) goto loc_83231BF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83231bec
	if (ctx.cr0.eq) goto loc_83231BEC;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83231bec
	if (ctx.cr0.eq) goto loc_83231BEC;
	// rlwinm r4,r11,19,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832281d8
	ctx.lr = 0x83231BEC;
	sub_832281D8(ctx, base);
loc_83231BEC:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x83231bbc
	goto loc_83231BBC;
loc_83231BF4:
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_83231BF8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x832320b4
	if (ctx.cr6.eq) goto loc_832320B4;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r10,r31,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r31,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3;
	// bne 0x83231c1c
	if (!ctx.cr0.eq) goto loc_83231C1C;
	// rlwinm. r11,r31,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// beq 0x83231c20
	if (ctx.cr0.eq) goto loc_83231C20;
loc_83231C1C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_83231C20:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832320ac
	if (ctx.cr0.eq) goto loc_832320AC;
	// lwz r28,12(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83231c40
	if (ctx.cr6.eq) goto loc_83231C40;
	// rlwinm. r11,r31,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq 0x83231c44
	if (ctx.cr0.eq) goto loc_83231C44;
loc_83231C40:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_83231C44:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83231c7c
	if (ctx.cr0.eq) goto loc_83231C7C;
	// rlwinm r10,r31,21,18,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 21) & 0x3FFC;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83231c74
	if (ctx.cr6.eq) goto loc_83231C74;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x832320ac
	if (ctx.cr6.eq) goto loc_832320AC;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83204d78
	ctx.lr = 0x83231C74;
	sub_83204D78(ctx, base);
loc_83231C74:
	// stwx r28,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u32);
	// b 0x832320ac
	goto loc_832320AC;
loc_83231C7C:
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83231cec
	if (!ctx.cr0.eq) goto loc_83231CEC;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15360
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15360, ctx.xer);
	// beq cr6,0x832320ac
	if (ctx.cr6.eq) goto loc_832320AC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8321d608
	ctx.lr = 0x83231CA0;
	sub_8321D608(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832320ac
	if (ctx.cr0.eq) goto loc_832320AC;
	// rlwinm. r11,r31,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// beq 0x83231cd8
	if (ctx.cr0.eq) goto loc_83231CD8;
	// rlwinm r8,r31,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0xFF;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_83231CBC:
	// srw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r7,r22,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r7.u8 & 0x3F));
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x83231cbc
	if (!ctx.cr0.eq) goto loc_83231CBC;
loc_83231CD8:
	// rlwimi r9,r31,19,20,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r31.u32, 19) & 0xFF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF00F);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// clrlwi r4,r9,20
	ctx.r4.u64 = ctx.r9.u32 & 0xFFF;
	// bl 0x832281d8
	ctx.lr = 0x83231CE8;
	sub_832281D8(ctx, base);
	// b 0x832320ac
	goto loc_832320AC;
loc_83231CEC:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83231CFC:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x83231cfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83231CFC;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x83231d8c
	if (!ctx.cr6.eq) goto loc_83231D8C;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_83231D28:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83231d8c
	if (ctx.cr6.eq) goto loc_83231D8C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83231d70
	if (ctx.cr0.eq) goto loc_83231D70;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// beq cr6,0x83231d78
	if (ctx.cr6.eq) goto loc_83231D78;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x83231d70
	if (ctx.cr6.eq) goto loc_83231D70;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322ae38
	ctx.lr = 0x83231D64;
	sub_8322AE38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83231d70
	if (ctx.cr0.eq) goto loc_83231D70;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_83231D70:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x83231d28
	goto loc_83231D28;
loc_83231D78:
	// lwz r11,20(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83231d8c
	if (!ctx.cr0.eq) goto loc_83231D8C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_83231D8C:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_83231D90:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83231dac
	if (!ctx.cr0.eq) goto loc_83231DAC;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83231dcc
	if (!ctx.cr0.eq) goto loc_83231DCC;
loc_83231DAC:
	// lwz r11,20(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83231dc0
	if (ctx.cr0.eq) goto loc_83231DC0;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// b 0x83231dcc
	goto loc_83231DCC;
loc_83231DC0:
	// lwz r11,16(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-40
	ctx.r30.s64 = ctx.r11.s64 + -40;
loc_83231DCC:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x83231e8c
	if (ctx.cr6.eq) goto loc_83231E8C;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r9,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83231e50
	if (ctx.cr0.eq) goto loc_83231E50;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83231DE8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83231e14
	if (ctx.cr6.eq) goto loc_83231E14;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r8,r8,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x83231e04
	if (!ctx.cr0.eq) goto loc_83231E04;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x83231de8
	goto loc_83231DE8;
loc_83231E04:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// bne 0x83231e18
	if (!ctx.cr0.eq) goto loc_83231E18;
loc_83231E14:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_83231E18:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83231e50
	if (ctx.cr0.eq) goto loc_83231E50;
loc_83231E20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83231e3c
	if (ctx.cr6.eq) goto loc_83231E3C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83231e3c
	if (!ctx.cr0.eq) goto loc_83231E3C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83231e20
	goto loc_83231E20;
loc_83231E3C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwimi r9,r11,20,19,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0x1FE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r4,r9,31,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xFFF;
	// bl 0x832281d8
	ctx.lr = 0x83231E50;
	sub_832281D8(ctx, base);
loc_83231E50:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_83231E54:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83231d90
	if (ctx.cr6.eq) goto loc_83231D90;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83231e84
	if (ctx.cr0.eq) goto loc_83231E84;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83231e84
	if (ctx.cr0.eq) goto loc_83231E84;
	// rlwinm r4,r11,19,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x832281d8
	ctx.lr = 0x83231E84;
	sub_832281D8(ctx, base);
loc_83231E84:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x83231e54
	goto loc_83231E54;
loc_83231E8C:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x83231fe8
	if (ctx.cr6.eq) goto loc_83231FE8;
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r7,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x3F80;
	// rlwinm r4,r7,18,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x7;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x83231ef8
	if (ctx.cr6.eq) goto loc_83231EF8;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// rlwinm. r11,r10,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83231ee8
	if (ctx.cr0.eq) goto loc_83231EE8;
	// rlwinm r8,r10,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_83231ECC:
	// srw r6,r8,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r6,r22,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r6.u8 & 0x3F));
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x83231ecc
	if (!ctx.cr0.eq) goto loc_83231ECC;
loc_83231EE8:
	// rlwinm r11,r7,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0xF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne cr6,0x83231efc
	if (!ctx.cr6.eq) goto loc_83231EFC;
loc_83231EF8:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_83231EFC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83231f54
	if (!ctx.cr0.eq) goto loc_83231F54;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_83231F08:
	// addi r10,r1,184
	ctx.r10.s64 = ctx.r1.s64 + 184;
	// addi r9,r1,232
	ctx.r9.s64 = ctx.r1.s64 + 232;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ldx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// blt cr6,0x83231f08
	if (ctx.cr6.lt) goto loc_83231F08;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83231060
	ctx.lr = 0x83231F3C;
	sub_83231060(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r31,28
	ctx.r11.u64 = ctx.r31.u32 & 0xF;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x83231f80
	goto loc_83231F80;
loc_83231F54:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83231110
	ctx.lr = 0x83231F78;
	sub_83231110(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_83231F80:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x83231fb0
	if (ctx.cr6.eq) goto loc_83231FB0;
	// lwz r11,772(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83231fa4
	if (!ctx.cr6.eq) goto loc_83231FA4;
	// lwz r11,768(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83231fa4
	if (!ctx.cr6.eq) goto loc_83231FA4;
	// li r11,32
	ctx.r11.s64 = 32;
loc_83231FA4:
	// rlwinm r10,r31,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83232044
	if (ctx.cr6.lt) goto loc_83232044;
loc_83231FB0:
	// lwz r11,68(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 68);
	// mr r17,r22
	ctx.r17.u64 = ctx.r22.u64;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,68(r21)
	PPC_STORE_U32(ctx.r21.u32 + 68, ctx.r11.u32);
loc_83231FC0:
	// rlwinm r11,r21,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83231fdc
	if (!ctx.cr0.eq) goto loc_83231FDC;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832318dc
	if (!ctx.cr6.eq) goto loc_832318DC;
loc_83231FDC:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
loc_83231FE8:
	// rlwinm r11,r25,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r8,r25,27,5,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 27) & 0x7FFFFF8;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// clrldi r9,r9,58
	ctx.r9.u64 = ctx.r9.u64 & 0x3F;
	// li r10,2
	ctx.r10.s64 = 2;
	// clrldi r11,r11,58
	ctx.r11.u64 = ctx.r11.u64 & 0x3F;
	// sld r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r9,r8,r7
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r7.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// sld r9,r8,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r11.u8 & 0x7F));
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// srd r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83230b58
	ctx.lr = 0x83232040;
	sub_83230B58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83232044:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832edff8
	ctx.lr = 0x83232054;
	sub_832EDFF8(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// beq 0x832320a4
	if (ctx.cr0.eq) goto loc_832320A4;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x832281d8
	ctx.lr = 0x83232068;
	sub_832281D8(ctx, base);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// rlwinm. r11,r8,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8323209c
	if (ctx.cr0.eq) goto loc_8323209C;
	// rlwinm r7,r8,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_83232080:
	// srw r6,r7,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r6,r22,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r6.u8 & 0x3F));
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x83232080
	if (!ctx.cr0.eq) goto loc_83232080;
loc_8323209C:
	// rlwimi r9,r8,19,20,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 19) & 0xFF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF00F);
	// clrlwi r4,r9,20
	ctx.r4.u64 = ctx.r9.u32 & 0xFFF;
loc_832320A4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83227ec0
	ctx.lr = 0x832320AC;
	sub_83227EC0(ctx, base);
loc_832320AC:
	// lwz r27,4(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// b 0x83231bf8
	goto loc_83231BF8;
loc_832320B4:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83231fc0
	if (!ctx.cr0.eq) goto loc_83231FC0;
loc_832320C4:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r26,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r26.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x83231a30
	if (!ctx.cr0.eq) goto loc_83231A30;
	// b 0x83231fc0
	goto loc_83231FC0;
loc_832320D4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83204d78
	ctx.lr = 0x832320E0;
	sub_83204D78(ctx, base);
}

__attribute__((alias("__imp__sub_832320E0"))) PPC_WEAK_FUNC(sub_832320E0);
PPC_FUNC_IMPL(__imp__sub_832320E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832320E4"))) PPC_WEAK_FUNC(sub_832320E4);
PPC_FUNC_IMPL(__imp__sub_832320E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832320E8"))) PPC_WEAK_FUNC(sub_832320E8);
PPC_FUNC_IMPL(__imp__sub_832320E8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// ori r9,r9,36262
	ctx.r9.u64 = ctx.r9.u64 | 36262;
	// rldicr r9,r9,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// oris r9,r9,37225
	ctx.r9.u64 = ctx.r9.u64 | 2439577600;
	// ori r9,r9,5192
	ctx.r9.u64 = ctx.r9.u64 | 5192;
	// srd r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r11.u8 & 0x7F));
	// srd r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r11.u8 & 0x7F));
	// srd r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r11.u8 & 0x7F));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwimi r4,r11,13,16,18
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 13) & 0xE000) | (ctx.r4.u64 & 0xFFFFFFFFFFFF1FFF);
	// rlwimi r10,r4,1,27,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 1) & 0x1E) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwimi r10,r4,1,15,17
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 1) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83232128"))) PPC_WEAK_FUNC(sub_83232128);
PPC_FUNC_IMPL(__imp__sub_83232128) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-15872
	ctx.r11.s64 = ctx.r11.s64 + -15872;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83232140"))) PPC_WEAK_FUNC(sub_83232140);
PPC_FUNC_IMPL(__imp__sub_83232140) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-14464
	ctx.r11.s64 = ctx.r11.s64 + -14464;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83232158"))) PPC_WEAK_FUNC(sub_83232158);
PPC_FUNC_IMPL(__imp__sub_83232158) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-12416
	ctx.r11.s64 = ctx.r11.s64 + -12416;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83232170"))) PPC_WEAK_FUNC(sub_83232170);
PPC_FUNC_IMPL(__imp__sub_83232170) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// blt cr6,0x8323218c
	if (ctx.cr6.lt) goto loc_8323218C;
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x83232190
	if (!ctx.cr6.gt) goto loc_83232190;
loc_8323218C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83232190:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832321bc
	if (ctx.cr0.eq) goto loc_832321BC;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// beq cr6,0x832321bc
	if (ctx.cr6.eq) goto loc_832321BC;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x832321bc
	if (ctx.cr6.eq) goto loc_832321BC;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x832321bc
	if (ctx.cr6.eq) goto loc_832321BC;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_832321BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832321C4"))) PPC_WEAK_FUNC(sub_832321C4);
PPC_FUNC_IMPL(__imp__sub_832321C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832321C8"))) PPC_WEAK_FUNC(sub_832321C8);
PPC_FUNC_IMPL(__imp__sub_832321C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r11,r4,14,15,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 14) & 0x1C000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832321D8"))) PPC_WEAK_FUNC(sub_832321D8);
PPC_FUNC_IMPL(__imp__sub_832321D8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832321E4"))) PPC_WEAK_FUNC(sub_832321E4);
PPC_FUNC_IMPL(__imp__sub_832321E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832321E8"))) PPC_WEAK_FUNC(sub_832321E8);
PPC_FUNC_IMPL(__imp__sub_832321E8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832321F4"))) PPC_WEAK_FUNC(sub_832321F4);
PPC_FUNC_IMPL(__imp__sub_832321F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832321F8"))) PPC_WEAK_FUNC(sub_832321F8);
PPC_FUNC_IMPL(__imp__sub_832321F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r3,r11,5,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83232204"))) PPC_WEAK_FUNC(sub_83232204);
PPC_FUNC_IMPL(__imp__sub_83232204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83232208"))) PPC_WEAK_FUNC(sub_83232208);
PPC_FUNC_IMPL(__imp__sub_83232208) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83232218"))) PPC_WEAK_FUNC(sub_83232218);
PPC_FUNC_IMPL(__imp__sub_83232218) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8323222c
	if (ctx.cr0.eq) goto loc_8323222C;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8323222c
	if (ctx.cr0.eq) goto loc_8323222C;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
loc_8323222C:
	// and r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 & ctx.r4.u64;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83232240
	if (ctx.cr0.eq) goto loc_83232240;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_83232240:
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83232254
	if (ctx.cr0.eq) goto loc_83232254;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83232254
	if (ctx.cr0.eq) goto loc_83232254;
	// addi r4,r4,-2
	ctx.r4.s64 = ctx.r4.s64 + -2;
loc_83232254:
	// or r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 | ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323225C"))) PPC_WEAK_FUNC(sub_8323225C);
PPC_FUNC_IMPL(__imp__sub_8323225C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

