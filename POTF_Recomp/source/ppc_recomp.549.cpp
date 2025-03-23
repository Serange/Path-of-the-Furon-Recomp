#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83198D54"))) PPC_WEAK_FUNC(sub_83198D54);
PPC_FUNC_IMPL(__imp__sub_83198D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198D58"))) PPC_WEAK_FUNC(sub_83198D58);
PPC_FUNC_IMPL(__imp__sub_83198D58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198D60"))) PPC_WEAK_FUNC(sub_83198D60);
PPC_FUNC_IMPL(__imp__sub_83198D60) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198D6C"))) PPC_WEAK_FUNC(sub_83198D6C);
PPC_FUNC_IMPL(__imp__sub_83198D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198D70"))) PPC_WEAK_FUNC(sub_83198D70);
PPC_FUNC_IMPL(__imp__sub_83198D70) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198D84"))) PPC_WEAK_FUNC(sub_83198D84);
PPC_FUNC_IMPL(__imp__sub_83198D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198D88"))) PPC_WEAK_FUNC(sub_83198D88);
PPC_FUNC_IMPL(__imp__sub_83198D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,62
	ctx.r5.s64 = 62;
	// addi r4,r11,29560
	ctx.r4.s64 = ctx.r11.s64 + 29560;
	// b 0x8315b870
	sub_8315B870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83198D9C"))) PPC_WEAK_FUNC(sub_83198D9C);
PPC_FUNC_IMPL(__imp__sub_83198D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198DA0"))) PPC_WEAK_FUNC(sub_83198DA0);
PPC_FUNC_IMPL(__imp__sub_83198DA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198DB0"))) PPC_WEAK_FUNC(sub_83198DB0);
PPC_FUNC_IMPL(__imp__sub_83198DB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198DC0"))) PPC_WEAK_FUNC(sub_83198DC0);
PPC_FUNC_IMPL(__imp__sub_83198DC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198DC8"))) PPC_WEAK_FUNC(sub_83198DC8);
PPC_FUNC_IMPL(__imp__sub_83198DC8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198DD4"))) PPC_WEAK_FUNC(sub_83198DD4);
PPC_FUNC_IMPL(__imp__sub_83198DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198DD8"))) PPC_WEAK_FUNC(sub_83198DD8);
PPC_FUNC_IMPL(__imp__sub_83198DD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// srawi r3,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198DE8"))) PPC_WEAK_FUNC(sub_83198DE8);
PPC_FUNC_IMPL(__imp__sub_83198DE8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198DFC"))) PPC_WEAK_FUNC(sub_83198DFC);
PPC_FUNC_IMPL(__imp__sub_83198DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198E00"))) PPC_WEAK_FUNC(sub_83198E00);
PPC_FUNC_IMPL(__imp__sub_83198E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,62
	ctx.r5.s64 = 62;
	// addi r4,r11,29560
	ctx.r4.s64 = ctx.r11.s64 + 29560;
	// b 0x8315b870
	sub_8315B870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83198E14"))) PPC_WEAK_FUNC(sub_83198E14);
PPC_FUNC_IMPL(__imp__sub_83198E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198E18"))) PPC_WEAK_FUNC(sub_83198E18);
PPC_FUNC_IMPL(__imp__sub_83198E18) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198E2C"))) PPC_WEAK_FUNC(sub_83198E2C);
PPC_FUNC_IMPL(__imp__sub_83198E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198E30"))) PPC_WEAK_FUNC(sub_83198E30);
PPC_FUNC_IMPL(__imp__sub_83198E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,62
	ctx.r5.s64 = 62;
	// addi r4,r11,29560
	ctx.r4.s64 = ctx.r11.s64 + 29560;
	// b 0x8315b870
	sub_8315B870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83198E44"))) PPC_WEAK_FUNC(sub_83198E44);
PPC_FUNC_IMPL(__imp__sub_83198E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198E48"))) PPC_WEAK_FUNC(sub_83198E48);
PPC_FUNC_IMPL(__imp__sub_83198E48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198E50"))) PPC_WEAK_FUNC(sub_83198E50);
PPC_FUNC_IMPL(__imp__sub_83198E50) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198E5C"))) PPC_WEAK_FUNC(sub_83198E5C);
PPC_FUNC_IMPL(__imp__sub_83198E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198E60"))) PPC_WEAK_FUNC(sub_83198E60);
PPC_FUNC_IMPL(__imp__sub_83198E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,31388
	ctx.r10.s64 = ctx.r11.s64 + 31388;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198E70"))) PPC_WEAK_FUNC(sub_83198E70);
PPC_FUNC_IMPL(__imp__sub_83198E70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198E74"))) PPC_WEAK_FUNC(sub_83198E74);
PPC_FUNC_IMPL(__imp__sub_83198E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198E78"))) PPC_WEAK_FUNC(sub_83198E78);
PPC_FUNC_IMPL(__imp__sub_83198E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,31744
	ctx.r10.s64 = ctx.r11.s64 + 31744;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198E88"))) PPC_WEAK_FUNC(sub_83198E88);
PPC_FUNC_IMPL(__imp__sub_83198E88) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198EA0"))) PPC_WEAK_FUNC(sub_83198EA0);
PPC_FUNC_IMPL(__imp__sub_83198EA0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198EB8"))) PPC_WEAK_FUNC(sub_83198EB8);
PPC_FUNC_IMPL(__imp__sub_83198EB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198EC8"))) PPC_WEAK_FUNC(sub_83198EC8);
PPC_FUNC_IMPL(__imp__sub_83198EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r11,-31192
	ctx.r10.s64 = ctx.r11.s64 + -31192;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198ED8"))) PPC_WEAK_FUNC(sub_83198ED8);
PPC_FUNC_IMPL(__imp__sub_83198ED8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,94(r3)
	PPC_STORE_U8(ctx.r3.u32 + 94, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198F00"))) PPC_WEAK_FUNC(sub_83198F00);
PPC_FUNC_IMPL(__imp__sub_83198F00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198F04"))) PPC_WEAK_FUNC(sub_83198F04);
PPC_FUNC_IMPL(__imp__sub_83198F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198F08"))) PPC_WEAK_FUNC(sub_83198F08);
PPC_FUNC_IMPL(__imp__sub_83198F08) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,94(r3)
	PPC_STORE_U8(ctx.r3.u32 + 94, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198F14"))) PPC_WEAK_FUNC(sub_83198F14);
PPC_FUNC_IMPL(__imp__sub_83198F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198F18"))) PPC_WEAK_FUNC(sub_83198F18);
PPC_FUNC_IMPL(__imp__sub_83198F18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198F1C"))) PPC_WEAK_FUNC(sub_83198F1C);
PPC_FUNC_IMPL(__imp__sub_83198F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198F20"))) PPC_WEAK_FUNC(sub_83198F20);
PPC_FUNC_IMPL(__imp__sub_83198F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r11,-31176
	ctx.r10.s64 = ctx.r11.s64 + -31176;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198F30"))) PPC_WEAK_FUNC(sub_83198F30);
PPC_FUNC_IMPL(__imp__sub_83198F30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198F38"))) PPC_WEAK_FUNC(sub_83198F38);
PPC_FUNC_IMPL(__imp__sub_83198F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r10,r11,-31176
	ctx.r10.s64 = ctx.r11.s64 + -31176;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198F54"))) PPC_WEAK_FUNC(sub_83198F54);
PPC_FUNC_IMPL(__imp__sub_83198F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198F58"))) PPC_WEAK_FUNC(sub_83198F58);
PPC_FUNC_IMPL(__imp__sub_83198F58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198F60"))) PPC_WEAK_FUNC(sub_83198F60);
PPC_FUNC_IMPL(__imp__sub_83198F60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm r9,r10,0,23,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198F84"))) PPC_WEAK_FUNC(sub_83198F84);
PPC_FUNC_IMPL(__imp__sub_83198F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198F88"))) PPC_WEAK_FUNC(sub_83198F88);
PPC_FUNC_IMPL(__imp__sub_83198F88) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198FA0"))) PPC_WEAK_FUNC(sub_83198FA0);
PPC_FUNC_IMPL(__imp__sub_83198FA0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198FB8"))) PPC_WEAK_FUNC(sub_83198FB8);
PPC_FUNC_IMPL(__imp__sub_83198FB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198FC8"))) PPC_WEAK_FUNC(sub_83198FC8);
PPC_FUNC_IMPL(__imp__sub_83198FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r11,-31192
	ctx.r10.s64 = ctx.r11.s64 + -31192;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f8,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f7,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f6,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,36(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f5,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,40(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f4,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,44(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f3,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,48(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f2,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,52(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f1,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,56(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f13,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f12,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,68(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f11,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,72(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f10,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,76(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f9,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,80(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f8,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,84(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lwz r9,88(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r9,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r9.u32);
	// lbz r8,92(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 92);
	// stb r8,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r8.u8);
	// lbz r7,93(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 93);
	// stb r7,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r7.u8);
	// lbz r6,94(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 94);
	// stb r6,94(r3)
	PPC_STORE_U8(ctx.r3.u32 + 94, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831990A0"))) PPC_WEAK_FUNC(sub_831990A0);
PPC_FUNC_IMPL(__imp__sub_831990A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f8,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f7,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f6,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,36(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f5,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,40(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f4,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,44(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f3,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,48(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f2,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,52(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f1,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,56(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f13,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f12,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,68(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f11,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,72(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f10,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,76(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f9,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,80(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f8,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,84(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lbz r10,92(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 92);
	// stb r10,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r10.u8);
	// lbz r9,93(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 93);
	// stb r9,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r9.u8);
	// lbz r8,94(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 94);
	// stb r8,94(r3)
	PPC_STORE_U8(ctx.r3.u32 + 94, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319916C"))) PPC_WEAK_FUNC(sub_8319916C);
PPC_FUNC_IMPL(__imp__sub_8319916C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83199170"))) PPC_WEAK_FUNC(sub_83199170);
PPC_FUNC_IMPL(__imp__sub_83199170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r11,-31176
	ctx.r10.s64 = ctx.r11.s64 + -31176;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199198"))) PPC_WEAK_FUNC(sub_83199198);
PPC_FUNC_IMPL(__imp__sub_83199198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831991A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8319924c
	if (!ctx.cr6.lt) goto loc_8319924C;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r29,r10,29560
	ctx.r29.s64 = ctx.r10.s64 + 29560;
	// li r5,412
	ctx.r5.s64 = 412;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r3,r9,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x8315b860
	ctx.lr = 0x831991D8;
	sub_8315B860(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x82bea998
	ctx.lr = 0x831991F4;
	sub_82BEA998(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,417
	ctx.r5.s64 = 417;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8315b870
	ctx.lr = 0x83199204;
	sub_8315B870(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x83199248
	if (!ctx.cr6.lt) goto loc_83199248;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r11,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r8,r11,-31192
	ctx.r8.s64 = ctx.r11.s64 + -31192;
loc_8319922C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8319923c
	if (ctx.cr0.eq) goto loc_8319923C;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_8319923C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// bne 0x8319922c
	if (!ctx.cr0.eq) goto loc_8319922C;
loc_83199248:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8319924C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83199254"))) PPC_WEAK_FUNC(sub_83199254);
PPC_FUNC_IMPL(__imp__sub_83199254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83199258"))) PPC_WEAK_FUNC(sub_83199258);
PPC_FUNC_IMPL(__imp__sub_83199258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83199260;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x831992bc
	if (!ctx.cr6.lt) goto loc_831992BC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,412
	ctx.r5.s64 = 412;
	// addi r29,r11,29560
	ctx.r29.s64 = ctx.r11.s64 + 29560;
	// rlwinm r3,r30,7,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8315b860
	ctx.lr = 0x83199290;
	sub_8315B860(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r5,r10,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// bl 0x82bea998
	ctx.lr = 0x831992A4;
	sub_82BEA998(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,417
	ctx.r5.s64 = 417;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8315b870
	ctx.lr = 0x831992B4;
	sub_8315B870(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_831992BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831992C4"))) PPC_WEAK_FUNC(sub_831992C4);
PPC_FUNC_IMPL(__imp__sub_831992C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831992C8"))) PPC_WEAK_FUNC(sub_831992C8);
PPC_FUNC_IMPL(__imp__sub_831992C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831992D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x83199364
	if (!ctx.cr6.lt) goto loc_83199364;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,412
	ctx.r5.s64 = 412;
	// addi r29,r11,29560
	ctx.r29.s64 = ctx.r11.s64 + 29560;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8315b860
	ctx.lr = 0x83199300;
	sub_8315B860(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r5,r10,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82bea998
	ctx.lr = 0x83199314;
	sub_82BEA998(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,417
	ctx.r5.s64 = 417;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8315b870
	ctx.lr = 0x83199324;
	sub_8315B870(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x83199360
	if (!ctx.cr6.lt) goto loc_83199360;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r11,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r11.s64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r8,r11,-31176
	ctx.r8.s64 = ctx.r11.s64 + -31176;
loc_83199344:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83199354
	if (ctx.cr0.eq) goto loc_83199354;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_83199354:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x83199344
	if (!ctx.cr0.eq) goto loc_83199344;
loc_83199360:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_83199364:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319936C"))) PPC_WEAK_FUNC(sub_8319936C);
PPC_FUNC_IMPL(__imp__sub_8319936C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83199370"))) PPC_WEAK_FUNC(sub_83199370);
PPC_FUNC_IMPL(__imp__sub_83199370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,31660
	ctx.r8.s64 = ctx.r10.s64 + 31660;
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199394"))) PPC_WEAK_FUNC(sub_83199394);
PPC_FUNC_IMPL(__imp__sub_83199394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83199398"))) PPC_WEAK_FUNC(sub_83199398);
PPC_FUNC_IMPL(__imp__sub_83199398) {
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
	// bl 0x831959f0
	ctx.lr = 0x831993B8;
	sub_831959F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831993d0
	if (ctx.cr6.eq) goto loc_831993D0;
	// bl 0x822990f0
	ctx.lr = 0x831993CC;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831993D0:
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

__attribute__((alias("__imp__sub_831993E8"))) PPC_WEAK_FUNC(sub_831993E8);
PPC_FUNC_IMPL(__imp__sub_831993E8) {
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
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83199418
	if (ctx.cr6.gt) goto loc_83199418;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x83199198
	ctx.lr = 0x83199418;
	sub_83199198(ctx, base);
loc_83199418:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_8319944C"))) PPC_WEAK_FUNC(sub_8319944C);
PPC_FUNC_IMPL(__imp__sub_8319944C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83199450"))) PPC_WEAK_FUNC(sub_83199450);
PPC_FUNC_IMPL(__imp__sub_83199450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83199458;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r31,r11,5,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// bl 0x83198fc8
	ctx.lr = 0x8319947C;
	sub_83198FC8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831990a0
	ctx.lr = 0x831994A4;
	sub_831990A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831994B0"))) PPC_WEAK_FUNC(sub_831994B0);
PPC_FUNC_IMPL(__imp__sub_831994B0) {
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
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x831994e0
	if (ctx.cr6.gt) goto loc_831994E0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x83199258
	ctx.lr = 0x831994E0;
	sub_83199258(ctx, base);
loc_831994E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8319950C"))) PPC_WEAK_FUNC(sub_8319950C);
PPC_FUNC_IMPL(__imp__sub_8319950C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83199510"))) PPC_WEAK_FUNC(sub_83199510);
PPC_FUNC_IMPL(__imp__sub_83199510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83199518;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83199544
	if (ctx.cr6.gt) goto loc_83199544;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x831992c8
	ctx.lr = 0x83199544;
	sub_831992C8(ctx, base);
loc_83199544:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83199554
	if (ctx.cr6.eq) goto loc_83199554;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83199554:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8319958c
	if (ctx.cr0.eq) goto loc_8319958C;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,-31176
	ctx.r9.s64 = ctx.r10.s64 + -31176;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
loc_8319958C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831995AC"))) PPC_WEAK_FUNC(sub_831995AC);
PPC_FUNC_IMPL(__imp__sub_831995AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831995B0"))) PPC_WEAK_FUNC(sub_831995B0);
PPC_FUNC_IMPL(__imp__sub_831995B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,31660
	ctx.r8.s64 = ctx.r9.s64 + 31660;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// stb r11,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199610"))) PPC_WEAK_FUNC(sub_83199610);
PPC_FUNC_IMPL(__imp__sub_83199610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83199618;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x83199714
	if (!ctx.cr6.lt) goto loc_83199714;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r29,r10,29560
	ctx.r29.s64 = ctx.r10.s64 + 29560;
	// li r5,412
	ctx.r5.s64 = 412;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8315b860
	ctx.lr = 0x83199650;
	sub_8315B860(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82bea998
	ctx.lr = 0x8319966C;
	sub_82BEA998(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,417
	ctx.r5.s64 = 417;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8315b870
	ctx.lr = 0x8319967C;
	sub_8315B870(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x83199710
	if (!ctx.cr6.lt) goto loc_83199710;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r11,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,31660
	ctx.r10.s64 = ctx.r11.s64 + 31660;
	// lfs f0,6048(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_831996B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add. r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83199704
	if (ctx.cr0.eq) goto loc_83199704;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stb r9,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r9.u8);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stb r9,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r9.u8);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stb r9,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r9.u8);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stb r9,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r9.u8);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stb r9,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r9.u8);
loc_83199704:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,72
	ctx.r8.s64 = ctx.r8.s64 + 72;
	// bne 0x831996b0
	if (!ctx.cr0.eq) goto loc_831996B0;
loc_83199710:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_83199714:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319971C"))) PPC_WEAK_FUNC(sub_8319971C);
PPC_FUNC_IMPL(__imp__sub_8319971C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83199720"))) PPC_WEAK_FUNC(sub_83199720);
PPC_FUNC_IMPL(__imp__sub_83199720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x83199728;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82cb6ab0
	ctx.lr = 0x83199730;
	__savefpr_14(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r23,1
	ctx.r23.s64 = 1;
	// lis r21,-32247
	ctx.r21.s64 = -2113339392;
	// addi r29,r4,76
	ctx.r29.s64 = ctx.r4.s64 + 76;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r28,r5,76
	ctx.r28.s64 = ctx.r5.s64 + 76;
	// lwz r10,28(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ble cr6,0x83199b5c
	if (!ctx.cr6.gt) goto loc_83199B5C;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// addi r30,r28,24
	ctx.r30.s64 = ctx.r28.s64 + 24;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_83199774:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lfs f13,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// lbz r10,93(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 93);
	// lfs f6,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f13,f7
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f4,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f13,f11,f6
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lfs f2,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f12,f7
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// lfs f7,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f10,f6
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f10,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f0,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f8,f4
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// lfs f8,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f7,f7,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// lfs f30,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// lfs f29,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// lfs f4,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f8,f2
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f30,f30,f4
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f4.f64));
	// lfs f31,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// lfs f28,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f4,f29,f4
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f4.f64));
	// lfs f29,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// fadds f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fadds f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// fmuls f28,f31,f28
	ctx.f28.f64 = double(float(ctx.f31.f64 * ctx.f28.f64));
	// fmuls f27,f27,f31
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// fadds f9,f9,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fadds f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fadds f3,f2,f12
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// fmuls f31,f29,f31
	ctx.f31.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fadds f6,f10,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fadds f13,f11,f8
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// fadds f12,f9,f4
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// fadds f9,f5,f27
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f27.f64));
	// fadds f11,f3,f31
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f31.f64));
	// fadds f10,f6,f28
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f28.f64));
	// beq cr6,0x83199afc
	if (ctx.cr6.eq) goto loc_83199AFC;
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f11,-30376(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -30376);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f7,f10,f0,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f6,f9,f13,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f11
	ctx.cr6.compare(ctx.f6.f64, ctx.f11.f64);
	// ble cr6,0x83199afc
	if (!ctx.cr6.gt) goto loc_83199AFC;
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// addi r10,r29,36
	ctx.r10.s64 = ctx.r29.s64 + 36;
	// stfs f13,80(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// addi r9,r28,36
	ctx.r9.s64 = ctx.r28.s64 + 36;
	// stfs f12,84(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lfs f7,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f31,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f28.f64 = double(temp.f32);
	// lfs f26,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// lfs f25,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,44(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f21.f64 = double(temp.f32);
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f20,f11,f21
	ctx.f20.f64 = double(float(ctx.f11.f64 * ctx.f21.f64));
	// fmuls f19,f10,f7
	ctx.f19.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// lfs f10,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f15,f10,f7
	ctx.f15.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// lfs f10,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// lfs f18,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f5,f5,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// lfs f17,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f2,f8,f2
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f1,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// lfs f14,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f14.f64 = double(temp.f32);
	// fmuls f30,f30,f9
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f9.f64));
	// fmuls f16,f11,f21
	ctx.f16.f64 = double(float(ctx.f11.f64 * ctx.f21.f64));
	// lfs f11,40(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fadds f6,f20,f6
	ctx.f6.f64 = double(float(ctx.f20.f64 + ctx.f6.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f31,f31,f3
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f3.f64));
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f5,f19,f5
	ctx.f5.f64 = double(float(ctx.f19.f64 + ctx.f5.f64));
	// fmuls f9,f29,f9
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f9.f64));
	// fmuls f21,f11,f21
	ctx.f21.f64 = double(float(ctx.f11.f64 * ctx.f21.f64));
	// fmuls f8,f28,f8
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f8.f64));
	// fmuls f7,f10,f7
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f28,f3,f26
	ctx.f28.f64 = double(float(ctx.f3.f64 * ctx.f26.f64));
	// fadds f2,f15,f2
	ctx.f2.f64 = double(float(ctx.f15.f64 + ctx.f2.f64));
	// fadds f1,f6,f1
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// fadds f6,f5,f31
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f31.f64));
	// fmuls f29,f27,f4
	ctx.f29.f64 = double(float(ctx.f27.f64 * ctx.f4.f64));
	// fadds f30,f16,f30
	ctx.f30.f64 = double(float(ctx.f16.f64 + ctx.f30.f64));
	// fmuls f5,f25,f4
	ctx.f5.f64 = double(float(ctx.f25.f64 * ctx.f4.f64));
	// fmuls f4,f24,f3
	ctx.f4.f64 = double(float(ctx.f24.f64 * ctx.f3.f64));
	// fadds f3,f21,f9
	ctx.f3.f64 = double(float(ctx.f21.f64 + ctx.f9.f64));
	// fadds f9,f7,f8
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f7,f2,f28
	ctx.f7.f64 = double(float(ctx.f2.f64 + ctx.f28.f64));
	// fadds f2,f23,f1
	ctx.f2.f64 = double(float(ctx.f23.f64 + ctx.f1.f64));
	// fadds f1,f22,f6
	ctx.f1.f64 = double(float(ctx.f22.f64 + ctx.f6.f64));
	// fadds f8,f30,f29
	ctx.f8.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// fadds f6,f3,f5
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fadds f5,f9,f4
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fadds f3,f17,f7
	ctx.f3.f64 = double(float(ctx.f17.f64 + ctx.f7.f64));
	// fsubs f2,f2,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fadds f4,f8,f18
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f18.f64));
	// fadds f1,f14,f6
	ctx.f1.f64 = double(float(ctx.f14.f64 + ctx.f6.f64));
	// fadds f8,f9,f5
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f2,f12
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fsubs f7,f4,f3
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fsubs f5,f1,f8
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// fmadds f4,f7,f0,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f3,f5,f13,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fabs f2,f3
	ctx.f2.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fcmpu cr6,f2,f9
	ctx.cr6.compare(ctx.f2.f64, ctx.f9.f64);
	// bge cr6,0x83199afc
	if (!ctx.cr6.lt) goto loc_83199AFC;
	// lbz r7,92(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 92);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x83199af8
	if (!ctx.cr6.eq) goto loc_83199AF8;
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f5,f7,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f1,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lfs f8,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f1,f10
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmuls f7,f1,f8
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// lfs f3,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f10,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f2,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f10,f10,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// lfs f8,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f31,f8,f2
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// lfs f8,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f8,f1,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// lfs f28,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// lfs f1,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f28,f28,f3
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f3.f64));
	// lfs f30,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f1,f2,f1
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// lfs f27,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// lfs f29,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f27,f27,f30
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// lfs f26,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f26,f26,f29
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f29.f64));
	// lfs f24,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f24.f64 = double(temp.f32);
	// fadds f10,f5,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// lfs f5,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f2,f24,f2
	ctx.f2.f64 = double(float(ctx.f24.f64 * ctx.f2.f64));
	// lfs f25,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f25.f64 = double(temp.f32);
	// fadds f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f31.f64));
	// lfs f31,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f5,f5,f30
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// lfs f24,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f24.f64 = double(temp.f32);
	// fadds f4,f4,f28
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f28.f64));
	// lfs f23,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f23.f64 = double(temp.f32);
	// fadds f1,f8,f1
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f1.f64));
	// lfs f28,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f31,f31,f29
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f3,f25,f3
	ctx.f3.f64 = double(float(ctx.f25.f64 * ctx.f3.f64));
	// lfs f25,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f30,f25,f30
	ctx.f30.f64 = double(float(ctx.f25.f64 * ctx.f30.f64));
	// lfs f25,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f29,f24,f29
	ctx.f29.f64 = double(float(ctx.f24.f64 * ctx.f29.f64));
	// lfs f24,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f24.f64 = double(temp.f32);
	// fadds f10,f10,f27
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f27.f64));
	// fadds f2,f11,f2
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// fadds f7,f7,f26
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f26.f64));
	// fadds f11,f4,f5
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fadds f5,f1,f31
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// fadds f6,f6,f3
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// lfs f3,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fadds f1,f23,f10
	ctx.f1.f64 = double(float(ctx.f23.f64 + ctx.f10.f64));
	// fadds f10,f28,f7
	ctx.f10.f64 = double(float(ctx.f28.f64 + ctx.f7.f64));
	// fadds f7,f2,f29
	ctx.f7.f64 = double(float(ctx.f2.f64 + ctx.f29.f64));
	// fadds f5,f25,f5
	ctx.f5.f64 = double(float(ctx.f25.f64 + ctx.f5.f64));
	// fadds f4,f6,f30
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f30.f64));
	// fadds f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// fsubs f2,f1,f10
	ctx.f2.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// fadds f1,f3,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fadds f4,f24,f4
	ctx.f4.f64 = double(float(ctx.f24.f64 + ctx.f4.f64));
	// fsubs f11,f6,f5
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmuls f10,f2,f12
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fsubs f8,f4,f1
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f1.f64));
	// fmadds f7,f11,f0,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f6,f8,f13,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fabs f5,f6
	ctx.f5.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fcmpu cr6,f5,f9
	ctx.cr6.compare(ctx.f5.f64, ctx.f9.f64);
	// bge cr6,0x83199afc
	if (!ctx.cr6.lt) goto loc_83199AFC;
loc_83199AF8:
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
loc_83199AFC:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83199b44
	if (ctx.cr6.eq) goto loc_83199B44;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x83198fc8
	ctx.lr = 0x83199B18;
	sub_83198FC8(ctx, base);
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stw r11,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831990a0
	ctx.lr = 0x83199B40;
	sub_831990A0(ctx, base);
	// b 0x83199b50
	goto loc_83199B50;
loc_83199B44:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stw r22,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r22.u32);
	// addi r27,r27,96
	ctx.r27.s64 = ctx.r27.s64 + 96;
loc_83199B50:
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83199774
	if (ctx.cr6.lt) goto loc_83199774;
loc_83199B5C:
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83199d9c
	if (!ctx.cr6.gt) goto loc_83199D9C;
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_83199B94:
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r31,r25,r11
	ctx.r31.u64 = ctx.r25.u64 + ctx.r11.u64;
	// beq cr6,0x83199bd4
	if (ctx.cr6.eq) goto loc_83199BD4;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,-30376(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -30376);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bge cr6,0x83199c74
	if (!ctx.cr6.lt) goto loc_83199C74;
loc_83199BD4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83199c00
	if (!ctx.cr6.eq) goto loc_83199C00;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83199bf4
	if (ctx.cr6.eq) goto loc_83199BF4;
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// beq cr6,0x83199c00
	if (ctx.cr6.eq) goto loc_83199C00;
loc_83199BF4:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83199c14
	if (ctx.cr6.eq) goto loc_83199C14;
loc_83199C00:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83195688
	ctx.lr = 0x83199C14;
	sub_83195688(ctx, base);
loc_83199C14:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831962a8
	ctx.lr = 0x83199C28;
	sub_831962A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r11,92(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 92);
	// stb r23,93(r4)
	PPC_STORE_U8(ctx.r4.u32 + 93, ctx.r23.u8);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83199c60
	if (!ctx.cr6.eq) goto loc_83199C60;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x83199c58
	if (!ctx.cr6.lt) goto loc_83199C58;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x83199c60
	if (!ctx.cr6.lt) goto loc_83199C60;
loc_83199C58:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x83199c64
	goto loc_83199C64;
loc_83199C60:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_83199C64:
	// lbz r5,94(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 94);
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// stb r22,94(r4)
	PPC_STORE_U8(ctx.r4.u32 + 94, ctx.r22.u8);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
loc_83199C74:
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r31,88(r4)
	PPC_STORE_U32(ctx.r4.u32 + 88, ctx.r31.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x83199d88
	if (!ctx.cr6.gt) goto loc_83199D88;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
loc_83199C9C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x83199cb0
	if (!ctx.cr6.eq) goto loc_83199CB0;
	// clrlwi r31,r5,24
	ctx.r31.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83199d74
	if (ctx.cr6.eq) goto loc_83199D74;
loc_83199CB0:
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x83199d6c
	if (ctx.cr6.lt) goto loc_83199D6C;
	// lfs f8,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// beq cr6,0x83199d34
	if (ctx.cr6.eq) goto loc_83199D34;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fmuls f6,f11,f11
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f5,f9,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f11,f7,f7,f5
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// ble cr6,0x83199d00
	if (!ctx.cr6.gt) goto loc_83199D00;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// fmr f31,f11
	ctx.f31.f64 = ctx.f11.f64;
	// b 0x83199d74
	goto loc_83199D74;
loc_83199D00:
	// lfs f11,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f0,f6,f6,f4
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x83199d74
	if (!ctx.cr6.gt) goto loc_83199D74;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// b 0x83199d70
	goto loc_83199D70;
loc_83199D34:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r6,2
	ctx.r6.s64 = 2;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f31,f6,f6,f4
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// b 0x83199d74
	goto loc_83199D74;
loc_83199D6C:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
loc_83199D70:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83199D74:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x83199c9c
	if (!ctx.cr0.eq) goto loc_83199C9C;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
loc_83199D88:
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,128
	ctx.r25.s64 = ctx.r25.s64 + 128;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83199b94
	if (ctx.cr6.lt) goto loc_83199B94;
loc_83199D9C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83199dc8
	if (!ctx.cr6.eq) goto loc_83199DC8;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83199dbc
	if (ctx.cr6.eq) goto loc_83199DBC;
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// beq cr6,0x83199dc8
	if (ctx.cr6.eq) goto loc_83199DC8;
loc_83199DBC:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83199ddc
	if (ctx.cr6.eq) goto loc_83199DDC;
loc_83199DC8:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83195688
	ctx.lr = 0x83199DDC;
	sub_83195688(ctx, base);
loc_83199DDC:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82cb6afc
	ctx.lr = 0x83199DE8;
	__restfpr_14(ctx, base);
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83199DEC"))) PPC_WEAK_FUNC(sub_83199DEC);
PPC_FUNC_IMPL(__imp__sub_83199DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83199DF0"))) PPC_WEAK_FUNC(sub_83199DF0);
PPC_FUNC_IMPL(__imp__sub_83199DF0) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83199e1c
	if (ctx.cr6.lt) goto loc_83199E1C;
	// bl 0x83199610
	ctx.lr = 0x83199E1C;
	sub_83199610(ctx, base);
loc_83199E1C:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_83199E38"))) PPC_WEAK_FUNC(sub_83199E38);
PPC_FUNC_IMPL(__imp__sub_83199E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199E74"))) PPC_WEAK_FUNC(sub_83199E74);
PPC_FUNC_IMPL(__imp__sub_83199E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83199E78"))) PPC_WEAK_FUNC(sub_83199E78);
PPC_FUNC_IMPL(__imp__sub_83199E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,-30972
	ctx.r9.s64 = ctx.r10.s64 + -30972;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199E9C"))) PPC_WEAK_FUNC(sub_83199E9C);
PPC_FUNC_IMPL(__imp__sub_83199E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83199EA0"))) PPC_WEAK_FUNC(sub_83199EA0);
PPC_FUNC_IMPL(__imp__sub_83199EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,108(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f11,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// lfs f10,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// lfs f9,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f7
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f3,f11,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f6.f64));
	// lfs f4,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f11,f10
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f0,7676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f11,f9
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f1,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f6,f3,f0,f13
	ctx.f6.f64 = double(float(-(ctx.f3.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fmadds f9,f9,f7,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmsubs f5,f7,f10,f2
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 - ctx.f2.f64));
	// fmuls f2,f8,f6
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmadds f9,f1,f3,f2
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fmadds f8,f4,f10,f9
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fadds f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f7,8(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f6,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmsubs f9,f5,f6,f1
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 - ctx.f1.f64));
	// lfs f10,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f6,f6
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// lfs f8,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f6,f2
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// fmuls f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f6,f3,f3,f12
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f12.f64));
	// fmadds f1,f3,f5,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f5.f64 + ctx.f7.f64));
	// fmuls f12,f4,f2
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// fnmsubs f13,f6,f0,f13
	ctx.f13.f64 = double(float(-(ctx.f6.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f8,f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f7,f10,f9,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fadds f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f6,12(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199F7C"))) PPC_WEAK_FUNC(sub_83199F7C);
PPC_FUNC_IMPL(__imp__sub_83199F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83199F80"))) PPC_WEAK_FUNC(sub_83199F80);
PPC_FUNC_IMPL(__imp__sub_83199F80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199F84"))) PPC_WEAK_FUNC(sub_83199F84);
PPC_FUNC_IMPL(__imp__sub_83199F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83199F88"))) PPC_WEAK_FUNC(sub_83199F88);
PPC_FUNC_IMPL(__imp__sub_83199F88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199F8C"))) PPC_WEAK_FUNC(sub_83199F8C);
PPC_FUNC_IMPL(__imp__sub_83199F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83199F90"))) PPC_WEAK_FUNC(sub_83199F90);
PPC_FUNC_IMPL(__imp__sub_83199F90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199F94"))) PPC_WEAK_FUNC(sub_83199F94);
PPC_FUNC_IMPL(__imp__sub_83199F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83199F98"))) PPC_WEAK_FUNC(sub_83199F98);
PPC_FUNC_IMPL(__imp__sub_83199F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r11,r3,120
	ctx.r11.s64 = ctx.r3.s64 + 120;
	// addi r8,r9,-30972
	ctx.r8.s64 = ctx.r9.s64 + -30972;
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r8.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199FC0"))) PPC_WEAK_FUNC(sub_83199FC0);
PPC_FUNC_IMPL(__imp__sub_83199FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r9,r11,-30960
	ctx.r9.s64 = ctx.r11.s64 + -30960;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199FE4"))) PPC_WEAK_FUNC(sub_83199FE4);
PPC_FUNC_IMPL(__imp__sub_83199FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83199FE8"))) PPC_WEAK_FUNC(sub_83199FE8);
PPC_FUNC_IMPL(__imp__sub_83199FE8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8319A024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8319A038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8319A054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8319A070"))) PPC_WEAK_FUNC(sub_8319A070);
PPC_FUNC_IMPL(__imp__sub_8319A070) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// rlwinm r3,r9,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A084"))) PPC_WEAK_FUNC(sub_8319A084);
PPC_FUNC_IMPL(__imp__sub_8319A084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A088"))) PPC_WEAK_FUNC(sub_8319A088);
PPC_FUNC_IMPL(__imp__sub_8319A088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A08C"))) PPC_WEAK_FUNC(sub_8319A08C);
PPC_FUNC_IMPL(__imp__sub_8319A08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A090"))) PPC_WEAK_FUNC(sub_8319A090);
PPC_FUNC_IMPL(__imp__sub_8319A090) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A09C"))) PPC_WEAK_FUNC(sub_8319A09C);
PPC_FUNC_IMPL(__imp__sub_8319A09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A0A0"))) PPC_WEAK_FUNC(sub_8319A0A0);
PPC_FUNC_IMPL(__imp__sub_8319A0A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A0AC"))) PPC_WEAK_FUNC(sub_8319A0AC);
PPC_FUNC_IMPL(__imp__sub_8319A0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A0B0"))) PPC_WEAK_FUNC(sub_8319A0B0);
PPC_FUNC_IMPL(__imp__sub_8319A0B0) {
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
	// bl 0x8319d808
	ctx.lr = 0x8319A0C8;
	sub_8319D808(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-30816
	ctx.r9.s64 = ctx.r10.s64 + -30816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8319A12C"))) PPC_WEAK_FUNC(sub_8319A12C);
PPC_FUNC_IMPL(__imp__sub_8319A12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A130"))) PPC_WEAK_FUNC(sub_8319A130);
PPC_FUNC_IMPL(__imp__sub_8319A130) {
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
	// bl 0x8319d7f0
	ctx.lr = 0x8319A148;
	sub_8319D7F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm r9,r10,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// stb r9,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_8319A17C"))) PPC_WEAK_FUNC(sub_8319A17C);
PPC_FUNC_IMPL(__imp__sub_8319A17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A180"))) PPC_WEAK_FUNC(sub_8319A180);
PPC_FUNC_IMPL(__imp__sub_8319A180) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A18C"))) PPC_WEAK_FUNC(sub_8319A18C);
PPC_FUNC_IMPL(__imp__sub_8319A18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A190"))) PPC_WEAK_FUNC(sub_8319A190);
PPC_FUNC_IMPL(__imp__sub_8319A190) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A198"))) PPC_WEAK_FUNC(sub_8319A198);
PPC_FUNC_IMPL(__imp__sub_8319A198) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A1AC"))) PPC_WEAK_FUNC(sub_8319A1AC);
PPC_FUNC_IMPL(__imp__sub_8319A1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A1B0"))) PPC_WEAK_FUNC(sub_8319A1B0);
PPC_FUNC_IMPL(__imp__sub_8319A1B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 80);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8319a1ec
	if (ctx.cr6.eq) goto loc_8319A1EC;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8319A1EC:
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8319d188
	ctx.lr = 0x8319A22C;
	sub_8319D188(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A23C"))) PPC_WEAK_FUNC(sub_8319A23C);
PPC_FUNC_IMPL(__imp__sub_8319A23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A240"))) PPC_WEAK_FUNC(sub_8319A240);
PPC_FUNC_IMPL(__imp__sub_8319A240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8319A248;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r4,r11,76
	ctx.r4.s64 = ctx.r11.s64 + 76;
	// addi r6,r31,32
	ctx.r6.s64 = ctx.r31.s64 + 32;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// addi r3,r10,76
	ctx.r3.s64 = ctx.r10.s64 + 76;
	// lfs f2,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8319ddf0
	ctx.lr = 0x8319A278;
	sub_8319DDF0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8319a2c8
	if (ctx.cr6.eq) goto loc_8319A2C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8319a2b4
	if (ctx.cr6.lt) goto loc_8319A2B4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8319cdb0
	ctx.lr = 0x8319A2B4;
	sub_8319CDB0(ctx, base);
loc_8319A2B4:
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// ori r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 512;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
loc_8319A2C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319A2D0"))) PPC_WEAK_FUNC(sub_8319A2D0);
PPC_FUNC_IMPL(__imp__sub_8319A2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x8319A2D8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6ac4
	ctx.lr = 0x8319A2E0;
	__savefpr_19(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// fmr f19,f1
	ctx.fpscr.disableFlushMode();
	ctx.f19.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r14,8(r22)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r10,12(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r11,12(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8319a310
	if (ctx.cr6.eq) goto loc_8319A310;
	// lwz r18,24(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x8319a314
	goto loc_8319A314;
loc_8319A310:
	// mr r18,r23
	ctx.r18.u64 = ctx.r23.u64;
loc_8319A314:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8319a328
	if (ctx.cr6.eq) goto loc_8319A328;
	// lwz r16,24(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x8319a32c
	goto loc_8319A32C;
loc_8319A328:
	// mr r16,r23
	ctx.r16.u64 = ctx.r23.u64;
loc_8319A32C:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r21,r6,76
	ctx.r21.s64 = ctx.r6.s64 + 76;
	// addi r20,r7,76
	ctx.r20.s64 = ctx.r7.s64 + 76;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lfs f31,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// rlwinm r15,r9,31,31,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// beq cr6,0x8319a35c
	if (ctx.cr6.eq) goto loc_8319A35C;
	// li r10,16
	ctx.r10.s64 = 16;
loc_8319A35C:
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8319a370
	if (ctx.cr6.eq) goto loc_8319A370;
	// li r11,32
	ctx.r11.s64 = 32;
loc_8319A370:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,28(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r19,1
	ctx.r19.s64 = 1;
	// li r17,2
	ctx.r17.s64 = 2;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// lfs f20,6140(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f20.f64 = double(temp.f32);
	// clrlwi r26,r7,24
	ctx.r26.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x8319a598
	if (!ctx.cr6.gt) goto loc_8319A598;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// lfs f24,-18264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18264);
	ctx.f24.f64 = double(temp.f32);
loc_8319A3A8:
	// lwz r11,20(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// add r30,r25,r11
	ctx.r30.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lbz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8319a580
	if (ctx.cr6.eq) goto loc_8319A580;
	// lbz r11,97(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 97);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8319a580
	if (!ctx.cr6.eq) goto loc_8319A580;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,36(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,40(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f30,f0,f11
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,44(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f29,f13,f10
	ctx.f29.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f8,36(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f28,f12,f9
	ctx.f28.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f7,40(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f27,f0,f8
	ctx.f27.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f6,44(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// fsubs f26,f13,f7
	ctx.f26.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fsubs f25,f12,f6
	ctx.f25.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// blt cr6,0x8319a424
	if (ctx.cr6.lt) goto loc_8319A424;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83178f38
	ctx.lr = 0x8319A424;
	sub_83178F38(ctx, base);
loc_8319A424:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// fdivs f12,f20,f19
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f20.f64 / ctx.f19.f64));
	// lwz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r7,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r7.u32);
	// lfs f7,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f7.f64 = double(temp.f32);
	// lwz r6,4(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lfs f9,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// rlwimi r8,r19,0,31,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r19.u32, 0) & 0xFFFFFFFFFFFFFF01) | (ctx.r8.u64 & 0xFE);
	// lfs f8,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// fmuls f11,f8,f12
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f0,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f7,f12
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f13,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// stb r17,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r17.u8);
	// stb r8,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r8.u8);
	// stb r23,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r23.u8);
	// beq cr6,0x8319a48c
	if (ctx.cr6.eq) goto loc_8319A48C;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8319A48C:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x8319a498
	if (ctx.cr6.eq) goto loc_8319A498;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
loc_8319A498:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// clrlwi r11,r15,24
	ctx.r11.u64 = ctx.r15.u32 & 0xFF;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stfs f30,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f29,20(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// stfs f28,24(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f27,32(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f26,36(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f25,40(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f31,92(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lfs f0,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f13,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f9,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,72(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f8,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,76(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f12,96(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f11,100(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f10,104(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f31,56(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f31,108(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f31,124(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f24,116(r31)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// beq cr6,0x8319a548
	if (ctx.cr6.eq) goto loc_8319A548;
	// lwz r11,44(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 44);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r11,44(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 44);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x8319a54c
	goto loc_8319A54C;
loc_8319A548:
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
loc_8319A54C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831784a8
	ctx.lr = 0x8319A554;
	sub_831784A8(ctx, base);
	// lfs f0,16(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8319a580
	if (!ctx.cr6.lt) goto loc_8319A580;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8319a580
	if (!ctx.cr6.gt) goto loc_8319A580;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f31,0(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,124(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
loc_8319A580:
	// lwz r11,28(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,100
	ctx.r25.s64 = ctx.r25.s64 + 100;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8319a3a8
	if (ctx.cr6.lt) goto loc_8319A3A8;
loc_8319A598:
	// lwz r11,64(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8319a9a8
	if (!ctx.cr6.gt) goto loc_8319A9A8;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// li r27,3
	ctx.r27.s64 = 3;
loc_8319A5B0:
	// lwz r11,56(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 56);
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbz r11,117(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 117);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8319a994
	if (!ctx.cr6.eq) goto loc_8319A994;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,12(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f5,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f9,16(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f7,20(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f3,4(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f1,8(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f3,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f12,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f1,f13
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f10,12(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,16(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f12,f10
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f3,20(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f7,f12
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f11,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f13,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f13,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f3,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f11,f3,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f2,f2,f8
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// lfs f30,24(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	ctx.f30.f64 = double(temp.f32);
	// lfs f8,28(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f30,f30,f10
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// lfs f29,32(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 32);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f10,f29,f10
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f10.f64));
	// lfs f3,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f28,24(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	ctx.f28.f64 = double(temp.f32);
	// fadds f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// lfs f29,28(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f28,f28,f3
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f3.f64));
	// lfs f27,32(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f29,f29,f3
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f3.f64));
	// fadds f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// fmuls f3,f27,f3
	ctx.f3.f64 = double(float(ctx.f27.f64 * ctx.f3.f64));
	// fadds f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// fadds f6,f13,f1
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fadds f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f26,f2,f30
	ctx.f26.f64 = double(float(ctx.f2.f64 + ctx.f30.f64));
	// fadds f25,f0,f8
	ctx.f25.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// fadds f23,f7,f28
	ctx.f23.f64 = double(float(ctx.f7.f64 + ctx.f28.f64));
	// fadds f24,f9,f10
	ctx.f24.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f22,f6,f29
	ctx.f22.f64 = double(float(ctx.f6.f64 + ctx.f29.f64));
	// fadds f21,f5,f3
	ctx.f21.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// beq cr6,0x8319a724
	if (ctx.cr6.eq) goto loc_8319A724;
	// lfs f13,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f10,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f8,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f1,f10,f5
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// lfs f3,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f11,f5
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f30,f8,f5
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f29,f0,f3
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmuls f27,f13,f3
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmsubs f10,f10,f0,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f9.f64));
	// fmuls f28,f12,f3
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmsubs f9,f8,f13,f7
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f7.f64));
	// fmsubs f7,f11,f12,f6
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f6.f64));
	// fmadds f6,f8,f12,f4
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fadds f4,f10,f30
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// fadds f2,f9,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// fadds f1,f7,f1
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// fmadds f0,f11,f0,f6
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fadds f28,f4,f28
	ctx.f28.f64 = double(float(ctx.f4.f64 + ctx.f28.f64));
	// fadds f30,f2,f29
	ctx.f30.f64 = double(float(ctx.f2.f64 + ctx.f29.f64));
	// fadds f29,f1,f27
	ctx.f29.f64 = double(float(ctx.f1.f64 + ctx.f27.f64));
	// fmsubs f27,f5,f3,f0
	ctx.f27.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 - ctx.f0.f64));
	// b 0x8319a734
	goto loc_8319A734;
loc_8319A724:
	// lfs f30,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f27.f64 = double(temp.f32);
loc_8319A734:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8319a754
	if (ctx.cr6.lt) goto loc_8319A754;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83178f38
	ctx.lr = 0x8319A754;
	sub_83178F38(ctx, base);
loc_8319A754:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// lfs f0,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// beq cr6,0x8319a77c
	if (ctx.cr6.eq) goto loc_8319A77C;
	// li r10,16
	ctx.r10.s64 = 16;
loc_8319A77C:
	// lfs f0,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8319a790
	if (ctx.cr6.eq) goto loc_8319A790;
	// li r11,32
	ctx.r11.s64 = 32;
loc_8319A790:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,116(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 116);
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwimi r9,r19,0,31,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r19.u32, 0) & 0xFFFFFFFFFFFFFF01) | (ctx.r9.u64 & 0xFE);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// beq cr6,0x8319a87c
	if (ctx.cr6.eq) goto loc_8319A87C;
	// fdivs f6,f20,f19
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f20.f64 / ctx.f19.f64));
	// lfs f5,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f4.f64 = double(temp.f32);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// lfs f3,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// lfs f12,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// fmuls f8,f5,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// stb r9,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r9.u8);
	// fmuls f7,f4,f6
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// stb r23,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r23.u8);
	// fmuls f6,f3,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// beq cr6,0x8319a804
	if (ctx.cr6.eq) goto loc_8319A804;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_8319A804:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x8319a810
	if (ctx.cr6.eq) goto loc_8319A810;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8319A810:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// fdivs f5,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f26,16(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f25,20(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f24,24(r31)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f23,32(r31)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f22,36(r31)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f21,40(r31)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f9,60(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f10,92(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f5,112(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f30,64(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f29,68(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f28,72(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f27,76(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f8,96(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f7,100(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f6,104(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f31,56(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f12,116(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f11,120(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// b 0x8319a930
	goto loc_8319A930;
loc_8319A87C:
	// fdivs f8,f20,f19
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f20.f64 / ctx.f19.f64));
	// lfs f7,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f6.f64 = double(temp.f32);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// lfs f5,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// stb r17,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r17.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r9.u8);
	// stb r23,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r23.u8);
	// fmuls f10,f7,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f9,f6,f8
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f8,f5,f8
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// beq cr6,0x8319a8c4
	if (ctx.cr6.eq) goto loc_8319A8C4;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_8319A8C4:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x8319a8d0
	if (ctx.cr6.eq) goto loc_8319A8D0;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8319A8D0:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f26,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f25,20(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f24,24(r31)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f23,32(r31)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f22,36(r31)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f21,40(r31)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f12,60(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f31,92(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f30,64(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f29,68(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f28,72(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f27,76(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f10,96(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f9,100(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f8,104(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f31,56(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f13,120(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
loc_8319A930:
	// clrlwi r11,r15,24
	ctx.r11.u64 = ctx.r15.u32 & 0xFF;
	// stfs f31,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f31,108(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8319a960
	if (ctx.cr6.eq) goto loc_8319A960;
	// addi r11,r30,120
	ctx.r11.s64 = ctx.r30.s64 + 120;
	// stfs f31,132(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// stfs f31,128(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 128, temp.u32);
	// stfs f31,124(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 124, temp.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x8319a964
	goto loc_8319A964;
loc_8319A960:
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
loc_8319A964:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831784a8
	ctx.lr = 0x8319A96C;
	sub_831784A8(ctx, base);
	// lfs f0,16(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8319a994
	if (!ctx.cr6.lt) goto loc_8319A994;
	// lfs f0,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8319a994
	if (!ctx.cr6.gt) goto loc_8319A994;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f31,0(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,124(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
loc_8319A994:
	// lwz r11,64(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,136
	ctx.r26.s64 = ctx.r26.s64 + 136;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8319a5b0
	if (ctx.cr6.lt) goto loc_8319A5B0;
loc_8319A9A8:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6b10
	ctx.lr = 0x8319A9B4;
	__restfpr_19(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319A9B8"))) PPC_WEAK_FUNC(sub_8319A9B8);
PPC_FUNC_IMPL(__imp__sub_8319A9B8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A9D0"))) PPC_WEAK_FUNC(sub_8319A9D0);
PPC_FUNC_IMPL(__imp__sub_8319A9D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8319a9f8
	if (ctx.cr6.lt) goto loc_8319A9F8;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r11,136
	ctx.r10.s64 = ctx.r11.s64 * 136;
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,117(r8)
	PPC_STORE_U8(ctx.r8.u32 + 117, ctx.r7.u8);
	// blr 
	return;
loc_8319A9F8:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,97(r11)
	PPC_STORE_U8(ctx.r11.u32 + 97, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AA08"))) PPC_WEAK_FUNC(sub_8319AA08);
PPC_FUNC_IMPL(__imp__sub_8319AA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6ae8
	ctx.lr = 0x8319AA18;
	__savefpr_28(ctx, base);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8319aa68
	if (ctx.cr6.lt) goto loc_8319AA68;
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mulli r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 * 136;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8319AA40:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8319aa40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8319AA40;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b34
	ctx.lr = 0x8319AA5C;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8319AA68:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r8,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r7.u32);
	// stw r6,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r6.u32);
	// beq cr6,0x8319ab54
	if (ctx.cr6.eq) goto loc_8319AB54;
	// lfs f0,112(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// lfs f13,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f6,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r1,-68
	ctx.r8.s64 = ctx.r1.s64 + -68;
	// lfs f7,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f2,f7,f5
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f1,f6,f5
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f0,f6,f12
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f13,f8,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f11,f7,f9
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f31,f8,f12
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f30,f3,f12
	ctx.f30.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f28,f3,f9
	ctx.f28.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// fmuls f29,f3,f10
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmsubs f8,f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 - ctx.f0.f64));
	// fmsubs f0,f7,f12,f13
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 - ctx.f13.f64));
	// fmsubs f13,f6,f10,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 - ctx.f11.f64));
	// fmadds f12,f6,f9,f31
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f31.f64));
	// fadds f11,f8,f2
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// fadds f9,f0,f1
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fadds f8,f13,f4
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// fmadds f7,f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fadds f6,f11,f29
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f29.f64));
	// stfs f6,-92(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fadds f4,f9,f28
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f28.f64));
	// stfs f4,-88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// fadds f2,f8,f30
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// stfs f2,-96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fmsubs f1,f3,f5,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f5.f64 - ctx.f7.f64));
	// stfs f1,-84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// stw r6,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r6.u32);
	// b 0x8319ab7c
	goto loc_8319AB7C;
loc_8319AB54:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r9,r1,-68
	ctx.r9.s64 = ctx.r1.s64 + -68;
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addi r7,r11,72
	ctx.r7.s64 = ctx.r11.s64 + 72;
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r5,84(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
loc_8319AB7C:
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8319AB8C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8319ab8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8319AB8C;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b34
	ctx.lr = 0x8319ABA8;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319ABB4"))) PPC_WEAK_FUNC(sub_8319ABB4);
PPC_FUNC_IMPL(__imp__sub_8319ABB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319ABB8"))) PPC_WEAK_FUNC(sub_8319ABB8);
PPC_FUNC_IMPL(__imp__sub_8319ABB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6ae8
	ctx.lr = 0x8319ABC8;
	__savefpr_28(ctx, base);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8319ac1c
	if (ctx.cr6.lt) goto loc_8319AC1C;
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mulli r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 * 136;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8319ABF4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8319abf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8319ABF4;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b34
	ctx.lr = 0x8319AC10;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8319AC1C:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r8,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r7.u32);
	// stw r6,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r6.u32);
	// beq cr6,0x8319ad08
	if (ctx.cr6.eq) goto loc_8319AD08;
	// lfs f0,112(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// lfs f13,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f6,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r1,-68
	ctx.r8.s64 = ctx.r1.s64 + -68;
	// lfs f7,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f2,f7,f5
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f1,f6,f5
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f0,f6,f12
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f13,f8,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f11,f7,f9
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f31,f8,f12
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f30,f3,f12
	ctx.f30.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f28,f3,f9
	ctx.f28.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// fmuls f29,f3,f10
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmsubs f8,f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 - ctx.f0.f64));
	// fmsubs f0,f7,f12,f13
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 - ctx.f13.f64));
	// fmsubs f13,f6,f10,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 - ctx.f11.f64));
	// fmadds f12,f6,f9,f31
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f31.f64));
	// fadds f11,f8,f2
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// fadds f9,f0,f1
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fadds f8,f13,f4
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// fmadds f7,f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fadds f6,f11,f29
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f29.f64));
	// stfs f6,-92(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fadds f4,f9,f28
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f28.f64));
	// stfs f4,-88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// fadds f2,f8,f30
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// stfs f2,-96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fmsubs f1,f3,f5,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f5.f64 - ctx.f7.f64));
	// stfs f1,-84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// stw r6,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r6.u32);
	// b 0x8319ad30
	goto loc_8319AD30;
loc_8319AD08:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r9,r1,-68
	ctx.r9.s64 = ctx.r1.s64 + -68;
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addi r7,r11,72
	ctx.r7.s64 = ctx.r11.s64 + 72;
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r5,84(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
loc_8319AD30:
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8319AD40:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8319ad40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8319AD40;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b34
	ctx.lr = 0x8319AD5C;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AD68"))) PPC_WEAK_FUNC(sub_8319AD68);
PPC_FUNC_IMPL(__imp__sub_8319AD68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8319ad8c
	if (ctx.cr6.lt) goto loc_8319AD8C;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r11,136
	ctx.r10.s64 = ctx.r11.s64 * 136;
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// blr 
	return;
loc_8319AD8C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AD98"))) PPC_WEAK_FUNC(sub_8319AD98);
PPC_FUNC_IMPL(__imp__sub_8319AD98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8319adbc
	if (ctx.cr6.lt) goto loc_8319ADBC;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 * 136;
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// blr 
	return;
loc_8319ADBC:
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,24184
	ctx.r9.s64 = ctx.r11.s64 + 24184;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24184(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24184, temp.u32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319ADE0"))) PPC_WEAK_FUNC(sub_8319ADE0);
PPC_FUNC_IMPL(__imp__sub_8319ADE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8319ae04
	if (ctx.cr6.lt) goto loc_8319AE04;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 * 136;
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,124
	ctx.r3.s64 = ctx.r11.s64 + 124;
	// blr 
	return;
loc_8319AE04:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8319ae48
	if (ctx.cr6.eq) goto loc_8319AE48;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r9,100
	ctx.r9.s64 = 100;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// divw r5,r6,r9
	ctx.r5.s32 = ctx.r6.s32 / ctx.r9.s32;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
loc_8319AE48:
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r3,r11,24172
	ctx.r3.s64 = ctx.r11.s64 + 24172;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AE54"))) PPC_WEAK_FUNC(sub_8319AE54);
PPC_FUNC_IMPL(__imp__sub_8319AE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319AE58"))) PPC_WEAK_FUNC(sub_8319AE58);
PPC_FUNC_IMPL(__imp__sub_8319AE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8319ae7c
	if (ctx.cr6.lt) goto loc_8319AE7C;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r11,136
	ctx.r10.s64 = ctx.r11.s64 * 136;
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f1,104(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8319AE7C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AE88"))) PPC_WEAK_FUNC(sub_8319AE88);
PPC_FUNC_IMPL(__imp__sub_8319AE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8319aeac
	if (ctx.cr6.lt) goto loc_8319AEAC;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r11,136
	ctx.r10.s64 = ctx.r11.s64 * 136;
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f1,100(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8319AEAC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-18264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18264);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AEB8"))) PPC_WEAK_FUNC(sub_8319AEB8);
PPC_FUNC_IMPL(__imp__sub_8319AEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8319aedc
	if (ctx.cr6.lt) goto loc_8319AEDC;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r11,136
	ctx.r10.s64 = ctx.r11.s64 * 136;
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f1,80(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8319AEDC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f1,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AEEC"))) PPC_WEAK_FUNC(sub_8319AEEC);
PPC_FUNC_IMPL(__imp__sub_8319AEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319AEF0"))) PPC_WEAK_FUNC(sub_8319AEF0);
PPC_FUNC_IMPL(__imp__sub_8319AEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8319af14
	if (ctx.cr6.lt) goto loc_8319AF14;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r11,136
	ctx.r10.s64 = ctx.r11.s64 * 136;
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f1,84(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8319AF14:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f1,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AF24"))) PPC_WEAK_FUNC(sub_8319AF24);
PPC_FUNC_IMPL(__imp__sub_8319AF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319AF28"))) PPC_WEAK_FUNC(sub_8319AF28);
PPC_FUNC_IMPL(__imp__sub_8319AF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8319af4c
	if (ctx.cr6.lt) goto loc_8319AF4C;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r11,136
	ctx.r10.s64 = ctx.r11.s64 * 136;
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f1,88(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8319AF4C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f1,28(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AF5C"))) PPC_WEAK_FUNC(sub_8319AF5C);
PPC_FUNC_IMPL(__imp__sub_8319AF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319AF60"))) PPC_WEAK_FUNC(sub_8319AF60);
PPC_FUNC_IMPL(__imp__sub_8319AF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8319af84
	if (ctx.cr6.lt) goto loc_8319AF84;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r11,136
	ctx.r10.s64 = ctx.r11.s64 * 136;
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f1,92(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8319AF84:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f1,28(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AF94"))) PPC_WEAK_FUNC(sub_8319AF94);
PPC_FUNC_IMPL(__imp__sub_8319AF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319AF98"))) PPC_WEAK_FUNC(sub_8319AF98);
PPC_FUNC_IMPL(__imp__sub_8319AF98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8319afbc
	if (ctx.cr6.lt) goto loc_8319AFBC;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r11,136
	ctx.r10.s64 = ctx.r11.s64 * 136;
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f1,96(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8319AFBC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f1,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AFCC"))) PPC_WEAK_FUNC(sub_8319AFCC);
PPC_FUNC_IMPL(__imp__sub_8319AFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319AFD0"))) PPC_WEAK_FUNC(sub_8319AFD0);
PPC_FUNC_IMPL(__imp__sub_8319AFD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8319aff4
	if (ctx.cr6.lt) goto loc_8319AFF4;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r11,136
	ctx.r10.s64 = ctx.r11.s64 * 136;
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,116(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 116);
	// blr 
	return;
loc_8319AFF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AFFC"))) PPC_WEAK_FUNC(sub_8319AFFC);
PPC_FUNC_IMPL(__imp__sub_8319AFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319B000"))) PPC_WEAK_FUNC(sub_8319B000);
PPC_FUNC_IMPL(__imp__sub_8319B000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8319b024
	if (ctx.cr6.lt) goto loc_8319B024;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r11,136
	ctx.r10.s64 = ctx.r11.s64 * 136;
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f1,108(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8319B024:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f1,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B034"))) PPC_WEAK_FUNC(sub_8319B034);
PPC_FUNC_IMPL(__imp__sub_8319B034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319B038"))) PPC_WEAK_FUNC(sub_8319B038);
PPC_FUNC_IMPL(__imp__sub_8319B038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8319b05c
	if (ctx.cr6.lt) goto loc_8319B05C;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r11,136
	ctx.r10.s64 = ctx.r11.s64 * 136;
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f1,112(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8319B05C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f1,52(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B06C"))) PPC_WEAK_FUNC(sub_8319B06C);
PPC_FUNC_IMPL(__imp__sub_8319B06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319B070"))) PPC_WEAK_FUNC(sub_8319B070);
PPC_FUNC_IMPL(__imp__sub_8319B070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8319B078;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8319b0f8
	if (!ctx.cr6.gt) goto loc_8319B0F8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8319B098:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8319b0e0
	if (!ctx.cr6.eq) goto loc_8319B0E0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8319d2d8
	ctx.lr = 0x8319B0BC;
	sub_8319D2D8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8319cbe8
	ctx.lr = 0x8319B0DC;
	sub_8319CBE8(ctx, base);
	// b 0x8319b0ec
	goto loc_8319B0EC;
loc_8319B0E0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stb r28,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r28.u8);
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
loc_8319B0EC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8319b098
	if (ctx.cr6.lt) goto loc_8319B098;
loc_8319B0F8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319B100"))) PPC_WEAK_FUNC(sub_8319B100);
PPC_FUNC_IMPL(__imp__sub_8319B100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x8319B108;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8319b1e8
	if (!ctx.cr6.eq) goto loc_8319B1E8;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8319b220
	if (!ctx.cr6.gt) goto loc_8319B220;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r30,68
	ctx.r31.s64 = ctx.r30.s64 + 68;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// li r23,-1
	ctx.r23.s64 = -1;
	// addi r24,r11,-30960
	ctx.r24.s64 = ctx.r11.s64 + -30960;
loc_8319B148:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x831674a8
	ctx.lr = 0x8319B15C;
	sub_831674A8(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r26,r27,r10
	ctx.r26.u64 = ctx.r27.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8319b188
	if (ctx.cr6.gt) goto loc_8319B188;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8319d408
	ctx.lr = 0x8319B188;
	sub_8319D408(ctx, base);
loc_8319B188:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8319b1b8
	if (ctx.cr0.eq) goto loc_8319B1B8;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r23,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r23.u32);
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// stw r26,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r26.u32);
loc_8319B1B8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,100
	ctx.r27.s64 = ctx.r27.s64 + 100;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8319b148
	if (ctx.cr6.lt) goto loc_8319B148;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_8319B1E8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8319b220
	if (ctx.cr6.eq) goto loc_8319B220;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8319B1F8:
	// lwz r8,68(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,76(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8319b1f8
	if (ctx.cr6.lt) goto loc_8319B1F8;
loc_8319B220:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319B228"))) PPC_WEAK_FUNC(sub_8319B228);
PPC_FUNC_IMPL(__imp__sub_8319B228) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// b 0x8319b070
	sub_8319B070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319B23C"))) PPC_WEAK_FUNC(sub_8319B23C);
PPC_FUNC_IMPL(__imp__sub_8319B23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319B240"))) PPC_WEAK_FUNC(sub_8319B240);
PPC_FUNC_IMPL(__imp__sub_8319B240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8319B248;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6ab0
	ctx.lr = 0x8319B250;
	__savefpr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,1136(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1136);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r9,1132(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1132);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r29,12(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lfs f13,6140(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,6048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lfs f0,7676(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// and r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 & ctx.r11.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r7,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// and r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 & ctx.r11.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8319b6b8
	if (ctx.cr6.eq) goto loc_8319B6B8;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8319b590
	if (ctx.cr6.eq) goto loc_8319B590;
	// lfs f12,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r11,100
	ctx.r9.s64 = ctx.r11.s64 + 100;
	// lfs f8,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmr f29,f12
	ctx.f29.f64 = ctx.f12.f64;
	// lfs f11,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmr f30,f8
	ctx.f30.f64 = ctx.f8.f64;
	// lfs f7,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f10,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f4,28(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// lfs f3,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// lfs f28,40(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// fmr f23,f3
	ctx.f23.f64 = ctx.f3.f64;
	// lfs f27,44(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	ctx.f27.f64 = double(temp.f32);
	// fmr f31,f7
	ctx.f31.f64 = ctx.f7.f64;
	// lfs f25,48(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f25.f64 = double(temp.f32);
	// lfs f22,52(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	ctx.f22.f64 = double(temp.f32);
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// fmuls f24,f27,f29
	ctx.f24.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// lfs f21,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f26,f28,f30
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// lfs f20,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f6,f7,f4,f6
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f6.f64));
	// lfs f19,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f19.f64 = double(temp.f32);
	// fmsubs f9,f8,f10,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 - ctx.f9.f64));
	// addi r8,r28,28
	ctx.r8.s64 = ctx.r28.s64 + 28;
	// fmsubs f5,f4,f12,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 - ctx.f5.f64));
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// fmsubs f2,f7,f11,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f2.f64));
	// fmsubs f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmuls f14,f25,f23
	ctx.f14.f64 = double(float(ctx.f25.f64 * ctx.f23.f64));
	// fmuls f17,f27,f30
	ctx.f17.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// fmuls f18,f25,f31
	ctx.f18.f64 = double(float(ctx.f25.f64 * ctx.f31.f64));
	// fmuls f15,f27,f23
	ctx.f15.f64 = double(float(ctx.f27.f64 * ctx.f23.f64));
	// fmuls f16,f28,f23
	ctx.f16.f64 = double(float(ctx.f28.f64 * ctx.f23.f64));
	// fmadds f6,f10,f12,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmuls f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f3,f3,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmuls f2,f4,f1
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f1,f10,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmsubs f4,f27,f31,f26
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f31.f64 - ctx.f26.f64));
	// fmsubs f27,f25,f30,f24
	ctx.f27.f64 = double(float(ctx.f25.f64 * ctx.f30.f64 - ctx.f24.f64));
	// fmsubs f26,f28,f29,f18
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 - ctx.f18.f64));
	// fmuls f10,f7,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f7,f5,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f6,f12,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f5,f25,f29,f17
	ctx.f5.f64 = double(float(ctx.f25.f64 * ctx.f29.f64 + ctx.f17.f64));
	// fadds f4,f4,f14
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f14.f64));
	// fmuls f12,f31,f22
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fmuls f30,f30,f22
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f22.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fmuls f2,f29,f22
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f22.f64));
	// fadds f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f11,f27,f16
	ctx.f11.f64 = double(float(ctx.f27.f64 + ctx.f16.f64));
	// fadds f29,f26,f15
	ctx.f29.f64 = double(float(ctx.f26.f64 + ctx.f15.f64));
	// fmadds f5,f28,f31,f5
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f31.f64 + ctx.f5.f64));
	// fadds f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f9,f4,f2
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fadds f10,f7,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f4,f3,f6
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fadds f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f7,f29,f30
	ctx.f7.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fmsubs f5,f23,f22,f5
	ctx.f5.f64 = double(float(ctx.f23.f64 * ctx.f22.f64 - ctx.f5.f64));
	// fadds f3,f21,f1
	ctx.f3.f64 = double(float(ctx.f21.f64 + ctx.f1.f64));
	// stfs f3,0(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fadds f2,f20,f10
	ctx.f2.f64 = double(float(ctx.f20.f64 + ctx.f10.f64));
	// stfs f2,4(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fadds f1,f19,f4
	ctx.f1.f64 = double(float(ctx.f19.f64 + ctx.f4.f64));
	// stfs f1,8(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fmr f11,f8
	ctx.f11.f64 = ctx.f8.f64;
	// stfs f8,12(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// fmr f8,f7
	ctx.f8.f64 = ctx.f7.f64;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// stfs f9,20(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
	// stfs f7,16(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// fmr f9,f5
	ctx.f9.f64 = ctx.f5.f64;
	// stfs f5,24(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// lfs f6,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// addi r9,r30,76
	ctx.r9.s64 = ctx.r30.s64 + 76;
	// lfs f5,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f31,f10,f2
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f2,f9,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f8,f8,f1
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f12,f4,f3
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmuls f4,f9,f3
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f3,f10,f3
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f9,f9,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fadds f1,f31,f12
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f12.f64));
	// fadds f31,f31,f11
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f11.f64));
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f11,f2,f8
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// stfs f11,32(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// fsubs f11,f10,f4
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// stfs f11,36(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// fadds f11,f4,f10
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fsubs f8,f8,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// fadds f2,f3,f9
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fsubs f10,f3,f9
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// fsubs f9,f13,f1
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f9,28(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// fsubs f4,f13,f31
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// stfs f2,48(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// stfs f8,40(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// fsubs f3,f13,f12
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f4,44(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// stfs f10,56(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// stfs f3,60(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// stfs f11,52(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stfs f7,64(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// stfs f5,72(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// stfs f6,68(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// lfs f2,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f2,f0
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f8,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f1,f0
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f6,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f11,f10
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f4,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f12,f10
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f10,f2,f9
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fmuls f1,f1,f7
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fmuls f31,f11,f7
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f30,f12,f9
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f2,f2,f7
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// fmuls f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fadds f9,f5,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fadds f7,f5,f1
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// fadds f5,f10,f1
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// fsubs f10,f31,f30
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// stfs f10,84(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// fsubs f1,f13,f9
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f1,76(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// fadds f9,f3,f2
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// stfs f9,80(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// fsubs f3,f2,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fadds f2,f11,f12
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f3,88(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// fsubs f1,f13,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f2,96(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// stfs f1,92(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
	// fsubs f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f10,f30,f31
	ctx.f10.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// stfs f10,100(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 100, temp.u32);
	// fsubs f7,f13,f5
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// stfs f9,104(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 104, temp.u32);
	// stfs f7,108(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 108, temp.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f8,112(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// stfs f6,116(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// stfs f4,120(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 120, temp.u32);
	// b 0x8319b6b0
	goto loc_8319B6B0;
loc_8319B590:
	// lfs f11,28(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r28,28
	ctx.r11.s64 = ctx.r28.s64 + 28;
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// lfs f10,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stfs f10,4(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f9,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f8,40(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,12(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lfs f7,44(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,16(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// lfs f6,48(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,20(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// lfs f5,52(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,24(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// lfs f9,44(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,40(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,52(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,28(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,48(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f4,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f5,f11,f10
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f31,f9,f7
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f4,f4,f8
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmuls f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f29,f7,f6
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f30,f11,f8
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fadds f6,f5,f31
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f31.f64));
	// fadds f5,f5,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f4,f31,f4
	ctx.f4.f64 = double(float(ctx.f31.f64 + ctx.f4.f64));
	// fadds f11,f10,f9
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f11,32(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsubs f11,f30,f29
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// stfs f11,36(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// fadds f9,f7,f8
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fsubs f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fadds f11,f29,f30
	ctx.f11.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fsubs f7,f13,f6
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// stfs f7,28(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// fsubs f6,f13,f5
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// stfs f10,40(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// stfs f6,44(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// fsubs f5,f13,f4
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f9,48(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// stfs f11,52(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stfs f8,56(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// stfs f5,60(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// stfs f3,64(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// stfs f2,68(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// stfs f1,72(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// stfs f13,108(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 108, temp.u32);
	// stfs f13,92(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
	// stfs f13,76(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// stfs f12,84(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// stfs f12,80(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// stfs f12,96(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// stfs f12,88(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// stfs f12,104(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 104, temp.u32);
	// stfs f12,100(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 100, temp.u32);
	// stfs f12,120(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 120, temp.u32);
	// stfs f12,116(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// stfs f12,112(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
loc_8319B6B0:
	// lwz r11,1132(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1132);
	// stwx r28,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u32);
loc_8319B6B8:
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8319bab8
	if (!ctx.cr6.eq) goto loc_8319BAB8;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r31,r5,1008
	ctx.r31.s64 = ctx.r5.s64 + 1008;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8319b994
	if (ctx.cr6.eq) goto loc_8319B994;
	// lfs f12,120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,100
	ctx.r10.s64 = ctx.r11.s64 + 100;
	// lfs f8,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmr f29,f12
	ctx.f29.f64 = ctx.f12.f64;
	// lfs f11,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmr f30,f8
	ctx.f30.f64 = ctx.f8.f64;
	// lfs f7,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f10,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f4,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// lfs f3,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// lfs f28,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// fmr f23,f3
	ctx.f23.f64 = ctx.f3.f64;
	// lfs f27,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f27.f64 = double(temp.f32);
	// fmr f31,f7
	ctx.f31.f64 = ctx.f7.f64;
	// lfs f25,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f25.f64 = double(temp.f32);
	// lfs f22,52(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f22.f64 = double(temp.f32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// fmuls f24,f27,f29
	ctx.f24.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// lfs f21,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f26,f28,f30
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// lfs f20,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f6,f7,f4,f6
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f6.f64));
	// lfs f19,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f19.f64 = double(temp.f32);
	// fmsubs f9,f8,f10,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 - ctx.f9.f64));
	// addi r9,r29,28
	ctx.r9.s64 = ctx.r29.s64 + 28;
	// fmsubs f5,f4,f12,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 - ctx.f5.f64));
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// fmsubs f2,f7,f11,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f2.f64));
	// fmsubs f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmuls f14,f23,f25
	ctx.f14.f64 = double(float(ctx.f23.f64 * ctx.f25.f64));
	// fmuls f17,f27,f30
	ctx.f17.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// fmuls f18,f25,f31
	ctx.f18.f64 = double(float(ctx.f25.f64 * ctx.f31.f64));
	// fmuls f15,f23,f27
	ctx.f15.f64 = double(float(ctx.f23.f64 * ctx.f27.f64));
	// fmuls f16,f23,f28
	ctx.f16.f64 = double(float(ctx.f23.f64 * ctx.f28.f64));
	// fmadds f6,f10,f12,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmuls f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f3,f3,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmuls f2,f1,f4
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f1,f1,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmsubs f4,f27,f31,f26
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f31.f64 - ctx.f26.f64));
	// fmsubs f27,f25,f30,f24
	ctx.f27.f64 = double(float(ctx.f25.f64 * ctx.f30.f64 - ctx.f24.f64));
	// fmsubs f26,f28,f29,f18
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 - ctx.f18.f64));
	// fmuls f10,f6,f7
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f7,f5,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f5,f25,f29,f17
	ctx.f5.f64 = double(float(ctx.f25.f64 * ctx.f29.f64 + ctx.f17.f64));
	// fadds f4,f4,f14
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f14.f64));
	// fmuls f12,f22,f31
	ctx.f12.f64 = double(float(ctx.f22.f64 * ctx.f31.f64));
	// fmuls f30,f22,f30
	ctx.f30.f64 = double(float(ctx.f22.f64 * ctx.f30.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fmuls f2,f22,f29
	ctx.f2.f64 = double(float(ctx.f22.f64 * ctx.f29.f64));
	// fadds f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f11,f27,f16
	ctx.f11.f64 = double(float(ctx.f27.f64 + ctx.f16.f64));
	// fadds f29,f26,f15
	ctx.f29.f64 = double(float(ctx.f26.f64 + ctx.f15.f64));
	// fmadds f5,f28,f31,f5
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f31.f64 + ctx.f5.f64));
	// fadds f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f9,f4,f2
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fadds f10,f7,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f4,f3,f6
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fadds f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f7,f29,f30
	ctx.f7.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fmsubs f5,f23,f22,f5
	ctx.f5.f64 = double(float(ctx.f23.f64 * ctx.f22.f64 - ctx.f5.f64));
	// fadds f3,f21,f1
	ctx.f3.f64 = double(float(ctx.f21.f64 + ctx.f1.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f2,f20,f10
	ctx.f2.f64 = double(float(ctx.f20.f64 + ctx.f10.f64));
	// stfs f2,4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f1,f19,f4
	ctx.f1.f64 = double(float(ctx.f19.f64 + ctx.f4.f64));
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmr f12,f8
	ctx.f12.f64 = ctx.f8.f64;
	// stfs f7,16(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmr f10,f7
	ctx.f10.f64 = ctx.f7.f64;
	// stfs f5,24(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// stfs f8,12(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmr f2,f10
	ctx.f2.f64 = ctx.f10.f64;
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f12,f11,f2
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// lfs f4,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f30,f7,f4
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f1,f11,f4
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f31,f6,f5
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmuls f5,f7,f5
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fadds f4,f10,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fadds f10,f31,f10
	ctx.f10.f64 = double(float(ctx.f31.f64 + ctx.f10.f64));
	// fadds f9,f31,f9
	ctx.f9.f64 = double(float(ctx.f31.f64 + ctx.f9.f64));
	// fsubs f7,f3,f30
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f30.f64));
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fadds f7,f6,f12
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f7,32(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fsubs f6,f12,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fadds f12,f5,f1
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// fadds f7,f30,f3
	ctx.f7.f64 = double(float(ctx.f30.f64 + ctx.f3.f64));
	// fsubs f5,f5,f1
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// fsubs f4,f13,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fsubs f3,f13,f10
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f3,28(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fsubs f1,f13,f9
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f6,40(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f1,44(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f7,52(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f5,56(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f4,60(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f8,72(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f2,64(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f5,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f4,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f2,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f0,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f11,f10
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f11,f8,f10
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fadds f5,f11,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fadds f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fadds f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// fsubs f7,f13,f5
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// stfs f7,76(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// fsubs f5,f10,f3
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// stfs f5,84(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// fadds f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f7,80(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// fsubs f5,f12,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fadds f12,f1,f6
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f5,88(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f12,96(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f11,92(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// fadds f10,f3,f10
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// fsubs f8,f1,f6
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// stfs f10,100(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// fsubs f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f8,104(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f7,108(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f4,112(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f2,116(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// b 0x8319bec8
	goto loc_8319BEC8;
loc_8319B994:
	// lfs f11,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 + 28;
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// lfs f10,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f9,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f8,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,12(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f7,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,16(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f6,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,20(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f5,52(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,24(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f4,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// lfs f11,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f3,52(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f7,f1,f2
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fmuls f5,f1,f3
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// lfs f1,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f10,f4
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f31,f9,f2
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f4,f9,f4
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmuls f30,f10,f3
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f2,f10,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f3,f9,f3
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fadds f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fadds f9,f7,f11
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fadds f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f0,f5,f4
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fsubs f11,f31,f30
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// stfs f11,36(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fsubs f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fadds f4,f2,f3
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fadds f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fsubs f11,f2,f3
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fsubs f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fsubs f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f5,40(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f9,44(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fsubs f7,f13,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f4,48(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f11,56(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f7,60(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f1,64(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f8,68(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f6,72(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f13,108(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f12,84(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f12,80(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f12,96(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f12,88(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f12,104(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f12,100(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f12,120(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f12,116(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f12,112(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// b 0x8319bec8
	goto loc_8319BEC8;
loc_8319BAB8:
	// lwz r11,1132(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1132);
	// rlwinm r8,r4,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8319bec8
	if (ctx.cr6.eq) goto loc_8319BEC8;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8319bda0
	if (ctx.cr6.eq) goto loc_8319BDA0;
	// lfs f12,120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,100
	ctx.r10.s64 = ctx.r11.s64 + 100;
	// lfs f8,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmr f29,f12
	ctx.f29.f64 = ctx.f12.f64;
	// lfs f11,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmr f30,f8
	ctx.f30.f64 = ctx.f8.f64;
	// lfs f7,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f10,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f4,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// lfs f3,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// lfs f28,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// fmr f23,f3
	ctx.f23.f64 = ctx.f3.f64;
	// lfs f27,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f27.f64 = double(temp.f32);
	// fmr f31,f7
	ctx.f31.f64 = ctx.f7.f64;
	// lfs f25,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f25.f64 = double(temp.f32);
	// lfs f22,52(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f22.f64 = double(temp.f32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// fmuls f24,f27,f29
	ctx.f24.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// lfs f21,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f26,f28,f30
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// lfs f20,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f6,f4,f7,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f6.f64));
	// lfs f19,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f19.f64 = double(temp.f32);
	// fmsubs f9,f8,f10,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 - ctx.f9.f64));
	// addi r9,r29,28
	ctx.r9.s64 = ctx.r29.s64 + 28;
	// fmsubs f5,f4,f12,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 - ctx.f5.f64));
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// fmsubs f2,f7,f11,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f2.f64));
	// fmsubs f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmuls f14,f23,f25
	ctx.f14.f64 = double(float(ctx.f23.f64 * ctx.f25.f64));
	// fmuls f17,f27,f30
	ctx.f17.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// fmuls f18,f25,f31
	ctx.f18.f64 = double(float(ctx.f25.f64 * ctx.f31.f64));
	// fmuls f15,f23,f27
	ctx.f15.f64 = double(float(ctx.f23.f64 * ctx.f27.f64));
	// fmuls f16,f23,f28
	ctx.f16.f64 = double(float(ctx.f23.f64 * ctx.f28.f64));
	// fmadds f6,f10,f12,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmuls f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f3,f3,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmuls f2,f1,f4
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f1,f1,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmsubs f4,f27,f31,f26
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f31.f64 - ctx.f26.f64));
	// fmsubs f27,f25,f30,f24
	ctx.f27.f64 = double(float(ctx.f25.f64 * ctx.f30.f64 - ctx.f24.f64));
	// fmsubs f26,f28,f29,f18
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 - ctx.f18.f64));
	// fmuls f10,f6,f7
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f7,f5,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f5,f25,f29,f17
	ctx.f5.f64 = double(float(ctx.f25.f64 * ctx.f29.f64 + ctx.f17.f64));
	// fadds f4,f4,f14
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f14.f64));
	// fmuls f12,f22,f31
	ctx.f12.f64 = double(float(ctx.f22.f64 * ctx.f31.f64));
	// fmuls f30,f22,f30
	ctx.f30.f64 = double(float(ctx.f22.f64 * ctx.f30.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fmuls f2,f22,f29
	ctx.f2.f64 = double(float(ctx.f22.f64 * ctx.f29.f64));
	// fadds f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f11,f27,f16
	ctx.f11.f64 = double(float(ctx.f27.f64 + ctx.f16.f64));
	// fadds f29,f26,f15
	ctx.f29.f64 = double(float(ctx.f26.f64 + ctx.f15.f64));
	// fmadds f5,f28,f31,f5
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f31.f64 + ctx.f5.f64));
	// fadds f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f9,f4,f2
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fadds f10,f7,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f4,f3,f6
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fadds f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f7,f29,f30
	ctx.f7.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fmsubs f5,f23,f22,f5
	ctx.f5.f64 = double(float(ctx.f23.f64 * ctx.f22.f64 - ctx.f5.f64));
	// fadds f3,f1,f21
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f21.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f2,f20,f10
	ctx.f2.f64 = double(float(ctx.f20.f64 + ctx.f10.f64));
	// stfs f2,4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f1,f19,f4
	ctx.f1.f64 = double(float(ctx.f19.f64 + ctx.f4.f64));
	// fmr f12,f7
	ctx.f12.f64 = ctx.f7.f64;
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
	// stfs f8,12(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f5,24(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// stfs f7,16(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmr f5,f10
	ctx.f5.f64 = ctx.f10.f64;
	// fmr f2,f12
	ctx.f2.f64 = ctx.f12.f64;
	// fmuls f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f31,f7,f5
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f4,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f6,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f1,f11,f4
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f2,f6,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fadds f4,f31,f9
	ctx.f4.f64 = double(float(ctx.f31.f64 + ctx.f9.f64));
	// fadds f31,f31,f8
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f8.f64));
	// fadds f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fsubs f8,f5,f1
	ctx.f8.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// stfs f8,36(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fadds f1,f1,f5
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// fadds f8,f7,f2
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fsubs f7,f2,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// fadds f2,f3,f6
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fsubs f8,f3,f6
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// fsubs f6,f13,f4
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f6,28(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fsubs f5,f13,f31
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// stfs f5,44(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f2,48(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fsubs f4,f13,f9
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f7,40(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f8,56(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f4,60(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f1,52(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f10,72(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f8,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// lfs f3,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// lfs f10,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f2,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f7,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f6,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f2,f12
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f4,f1,f11
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f10,f8,f11
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f1,f1,f9
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmuls f2,f2,f9
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fmuls f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fadds f8,f5,f4
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// fadds f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fsubs f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// fsubs f8,f2,f10
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// stfs f8,84(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// fadds f0,f12,f1
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// fsubs f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fadds f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fsubs f5,f13,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// stfs f12,88(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f8,96(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// fadds f2,f10,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// stfs f5,92(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// fsubs f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fsubs f0,f13,f4
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f2,100(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f1,104(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f7,112(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f6,116(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f3,120(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// b 0x8319bec0
	goto loc_8319BEC0;
loc_8319BDA0:
	// lfs f11,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 + 28;
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// lfs f10,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f9,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f8,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,12(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f7,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,16(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f6,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,20(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f5,52(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,24(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f2,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,52(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f1,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f8,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f10,f4
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// lfs f3,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f5,f3,f0
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f10,f5,f3
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f30,f5,f4
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmuls f2,f0,f2
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f31,f0,f11
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f3,f0,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmuls f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fadds f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// fmuls f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fadds f4,f7,f2
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// fadds f2,f10,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// fadds f10,f6,f3
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// stfs f10,32(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fsubs f7,f31,f30
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fsubs f6,f3,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// fsubs f5,f13,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// stfs f5,28(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fadds f3,f11,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f6,40(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f3,48(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fadds f10,f30,f31
	ctx.f10.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fsubs f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f4,f13,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f4,44(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fsubs f2,f13,f2
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// stfs f10,52(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f7,56(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f2,60(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f1,64(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f8,68(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f9,72(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f13,108(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f12,84(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f12,80(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f12,96(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f12,88(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f12,104(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f12,100(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f12,120(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f12,116(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f12,112(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
loc_8319BEC0:
	// lwz r11,1132(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1132);
	// stwx r29,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r29.u32);
loc_8319BEC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r10,r5,16
	ctx.r10.s64 = ctx.r5.s64 + 16;
	// stw r11,40(r27)
	PPC_STORE_U32(ctx.r27.u32 + 40, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r11.u32);
	// stw r11,76(r27)
	PPC_STORE_U32(ctx.r27.u32 + 76, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8319b070
	ctx.lr = 0x8319BEEC;
	sub_8319B070(ctx, base);
	// lbz r9,80(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 80);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// beq cr6,0x8319bf14
	if (ctx.cr6.eq) goto loc_8319BF14;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// b 0x8319bf24
	goto loc_8319BF24;
loc_8319BF14:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8319BF24:
	// addi r3,r10,20
	ctx.r3.s64 = ctx.r10.s64 + 20;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x8319BF34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8319a240
	ctx.lr = 0x8319BF48;
	sub_8319A240(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6afc
	ctx.lr = 0x8319BF58;
	__restfpr_14(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319BF5C"))) PPC_WEAK_FUNC(sub_8319BF5C);
PPC_FUNC_IMPL(__imp__sub_8319BF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319BF60"))) PPC_WEAK_FUNC(sub_8319BF60);
PPC_FUNC_IMPL(__imp__sub_8319BF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8319BF68;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6ae4
	ctx.lr = 0x8319BF70;
	__savefpr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r9,-30972
	ctx.r7.s64 = ctx.r9.s64 + -30972;
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// addi r31,r29,56
	ctx.r31.s64 = ctx.r29.s64 + 56;
	// lwz r8,64(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lfs f31,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stw r7,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r7.u32);
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bgt cr6,0x8319bfc0
	if (ctx.cr6.gt) goto loc_8319BFC0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8319cf30
	ctx.lr = 0x8319BFC0;
	sub_8319CF30(ctx, base);
loc_8319BFC0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 * 136;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8319bfdc
	if (ctx.cr0.eq) goto loc_8319BFDC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8319d628
	ctx.lr = 0x8319BFDC;
	sub_8319D628(ctx, base);
loc_8319BFDC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mulli r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 * 136;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// lfs f12,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lfs f13,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lfs f0,7676(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8319c0e0
	if (ctx.cr6.eq) goto loc_8319C0E0;
	// lfs f11,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r10,100
	ctx.r9.s64 = ctx.r10.s64 + 100;
	// lfs f10,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f8,108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// fsubs f4,f6,f8
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// lfs f2,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f10,f2,f9
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fmuls f8,f3,f5
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f7,f1,f4
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f6,f2,f5
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fmsubs f11,f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmsubs f10,f1,f5,f10
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 - ctx.f10.f64));
	// fmsubs f8,f2,f4,f8
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 - ctx.f8.f64));
	// fmsubs f7,f3,f9,f7
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 - ctx.f7.f64));
	// fmadds f6,f1,f9,f6
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmuls f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f11,f4,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmadds f6,f3,f4,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f6.f64));
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f8,f1,f6
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmuls f7,f2,f6
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// fmuls f6,f3,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fsubs f4,f11,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f4.f64));
	// fsubs f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f2,f5,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f12,f7,f0
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f11,f6,f0
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f10,f3,f1
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f9,f2,f12
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f8,f4,f11
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x8319c0f4
	goto loc_8319C0F4;
loc_8319C0E0:
	// stfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8319C0F4:
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8319c1c8
	if (ctx.cr6.eq) goto loc_8319C1C8;
	// lfs f12,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r9,100
	ctx.r10.s64 = ctx.r9.s64 + 100;
	// lfs f11,100(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f8,104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// lfs f5,108(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// lfs f12,124(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f2,116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f3,120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,112(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f10,f9,f2
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f8,f6,f3
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f7,f4,f1
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmuls f5,f4,f3
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmsubs f13,f11,f0,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmsubs f11,f6,f1,f10
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 - ctx.f10.f64));
	// fmsubs f10,f4,f2,f8
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 - ctx.f8.f64));
	// fmsubs f8,f9,f3,f7
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 - ctx.f7.f64));
	// fmadds f7,f6,f2,f5
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f5.f64));
	// fmuls f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmadds f10,f9,f1,f7
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f7.f64));
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f10,f3
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f1,f10,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f13,f10,f2
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fsubs f11,f4,f9
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// fsubs f10,f5,f8
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// fsubs f9,f6,f7
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f1,f0
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f3,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f3,36(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fadds f5,f10,f8
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f5,28(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fadds f4,f9,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfs f4,32(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// b 0x8319c1e0
	goto loc_8319C1E0;
loc_8319C1C8:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
loc_8319C1E0:
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8319c288
	if (ctx.cr6.eq) goto loc_8319C288;
	// lfs f11,120(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,112(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f13,116(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f7,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,124(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 124);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmuls f2,f5,f7
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmuls f1,f5,f6
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f11,f9,f7
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f0,f12,f6
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f13,f10,f8
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f30,f10,f7
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f28,f10,f3
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f27,f9,f3
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f29,f3,f12
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmsubs f11,f10,f6,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 - ctx.f11.f64));
	// fmsubs f0,f9,f8,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 - ctx.f0.f64));
	// fmsubs f13,f12,f7,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 - ctx.f13.f64));
	// fmadds f10,f9,f6,f30
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 + ctx.f30.f64));
	// fadds f6,f11,f4
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// fadds f9,f0,f2
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fadds f7,f13,f1
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fmadds f4,f12,f8,f10
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fadds f0,f6,f29
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f29.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fadds f2,f9,f28
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f28.f64));
	// stfs f2,16(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fadds f1,f7,f27
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f27.f64));
	// stfs f1,20(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmsubs f13,f5,f3,f4
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 - ctx.f4.f64));
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// b 0x8319c2a8
	goto loc_8319C2A8;
loc_8319C288:
	// lfs f0,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f13,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f12,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f11,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
loc_8319C2A8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8319c348
	if (ctx.cr6.eq) goto loc_8319C348;
	// lfs f11,120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,112(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f13,116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,124(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 124);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmuls f2,f5,f7
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmuls f1,f5,f6
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f11,f9,f7
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f0,f12,f6
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f13,f10,f8
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f30,f10,f7
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f28,f10,f3
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f27,f9,f3
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f29,f3,f12
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmsubs f11,f10,f6,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 - ctx.f11.f64));
	// fmsubs f0,f9,f8,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 - ctx.f0.f64));
	// fmsubs f13,f12,f7,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 - ctx.f13.f64));
	// fmadds f10,f9,f6,f30
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 + ctx.f30.f64));
	// fadds f6,f11,f4
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// fadds f9,f0,f2
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fadds f7,f13,f1
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fmadds f4,f12,f8,f10
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fadds f0,f6,f29
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f29.f64));
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// fadds f2,f9,f28
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f28.f64));
	// stfs f2,44(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// fadds f1,f7,f27
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f27.f64));
	// stfs f1,48(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// fmsubs f13,f5,f3,f4
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 - ctx.f4.f64));
	// stfs f13,52(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// b 0x8319c368
	goto loc_8319C368;
loc_8319C348:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,48(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,52(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
loc_8319C368:
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f13,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f12,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f31,76(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f31,72(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f31,68(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f11,32(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f10,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f9,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,88(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f8,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,92(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f7,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,96(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stb r10,116(r11)
	PPC_STORE_U8(ctx.r11.u32 + 116, ctx.r10.u8);
	// lfs f0,-18264(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18264);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,117(r11)
	PPC_STORE_U8(ctx.r11.u32 + 117, ctx.r10.u8);
	// stfs f31,104(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f6,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,108(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f5,52(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,112(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stb r8,97(r30)
	PPC_STORE_U8(ctx.r30.u32 + 97, ctx.r8.u8);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b30
	ctx.lr = 0x8319C418;
	__restfpr_27(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319C41C"))) PPC_WEAK_FUNC(sub_8319C41C);
PPC_FUNC_IMPL(__imp__sub_8319C41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319C420"))) PPC_WEAK_FUNC(sub_8319C420);
PPC_FUNC_IMPL(__imp__sub_8319C420) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8319c458
	if (!ctx.cr6.lt) goto loc_8319C458;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8319bf60
	ctx.lr = 0x8319C454;
	sub_8319BF60(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
loc_8319C458:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mulli r11,r9,136
	ctx.r11.s64 = ctx.r9.s64 * 136;
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
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

__attribute__((alias("__imp__sub_8319C4BC"))) PPC_WEAK_FUNC(sub_8319C4BC);
PPC_FUNC_IMPL(__imp__sub_8319C4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319C4C0"))) PPC_WEAK_FUNC(sub_8319C4C0);
PPC_FUNC_IMPL(__imp__sub_8319C4C0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8319c4f8
	if (!ctx.cr6.lt) goto loc_8319C4F8;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8319bf60
	ctx.lr = 0x8319C4F4;
	sub_8319BF60(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
loc_8319C4F8:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mulli r11,r9,136
	ctx.r11.s64 = ctx.r9.s64 * 136;
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f11,40(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f10,44(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f9,48(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f8,52(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
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

__attribute__((alias("__imp__sub_8319C560"))) PPC_WEAK_FUNC(sub_8319C560);
PPC_FUNC_IMPL(__imp__sub_8319C560) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8319c598
	if (!ctx.cr6.lt) goto loc_8319C598;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8319bf60
	ctx.lr = 0x8319C594;
	sub_8319BF60(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_8319C598:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 * 136;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 + 56;
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
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

__attribute__((alias("__imp__sub_8319C5E0"))) PPC_WEAK_FUNC(sub_8319C5E0);
PPC_FUNC_IMPL(__imp__sub_8319C5E0) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8319c618
	if (!ctx.cr6.lt) goto loc_8319C618;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8319bf60
	ctx.lr = 0x8319C614;
	sub_8319BF60(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_8319C618:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 * 136;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,68
	ctx.r10.s64 = ctx.r11.s64 + 68;
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,76(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
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

__attribute__((alias("__imp__sub_8319C660"))) PPC_WEAK_FUNC(sub_8319C660);
PPC_FUNC_IMPL(__imp__sub_8319C660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8319c698
	if (!ctx.cr6.lt) goto loc_8319C698;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8319bf60
	ctx.lr = 0x8319C694;
	sub_8319BF60(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_8319C698:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 * 136;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,104(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 104, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C6C8"))) PPC_WEAK_FUNC(sub_8319C6C8);
PPC_FUNC_IMPL(__imp__sub_8319C6C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8319c700
	if (!ctx.cr6.lt) goto loc_8319C700;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8319bf60
	ctx.lr = 0x8319C6FC;
	sub_8319BF60(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_8319C700:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 * 136;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,100(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 100, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C730"))) PPC_WEAK_FUNC(sub_8319C730);
PPC_FUNC_IMPL(__imp__sub_8319C730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8319c768
	if (!ctx.cr6.lt) goto loc_8319C768;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8319bf60
	ctx.lr = 0x8319C764;
	sub_8319BF60(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_8319C768:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 * 136;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,80(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 80, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C798"))) PPC_WEAK_FUNC(sub_8319C798);
PPC_FUNC_IMPL(__imp__sub_8319C798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8319c7d0
	if (!ctx.cr6.lt) goto loc_8319C7D0;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8319bf60
	ctx.lr = 0x8319C7CC;
	sub_8319BF60(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_8319C7D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 * 136;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,84(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 84, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C800"))) PPC_WEAK_FUNC(sub_8319C800);
PPC_FUNC_IMPL(__imp__sub_8319C800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8319c838
	if (!ctx.cr6.lt) goto loc_8319C838;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8319bf60
	ctx.lr = 0x8319C834;
	sub_8319BF60(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_8319C838:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 * 136;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,88(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 88, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C868"))) PPC_WEAK_FUNC(sub_8319C868);
PPC_FUNC_IMPL(__imp__sub_8319C868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8319c8a0
	if (!ctx.cr6.lt) goto loc_8319C8A0;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8319bf60
	ctx.lr = 0x8319C89C;
	sub_8319BF60(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_8319C8A0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 * 136;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,92(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 92, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C8D0"))) PPC_WEAK_FUNC(sub_8319C8D0);
PPC_FUNC_IMPL(__imp__sub_8319C8D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8319c908
	if (!ctx.cr6.lt) goto loc_8319C908;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8319bf60
	ctx.lr = 0x8319C904;
	sub_8319BF60(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_8319C908:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 * 136;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,96(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 96, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C938"))) PPC_WEAK_FUNC(sub_8319C938);
PPC_FUNC_IMPL(__imp__sub_8319C938) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8319c970
	if (!ctx.cr6.lt) goto loc_8319C970;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8319bf60
	ctx.lr = 0x8319C96C;
	sub_8319BF60(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_8319C970:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 * 136;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r30,116(r9)
	PPC_STORE_U8(ctx.r9.u32 + 116, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_8319C9A0"))) PPC_WEAK_FUNC(sub_8319C9A0);
PPC_FUNC_IMPL(__imp__sub_8319C9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8319c9d8
	if (!ctx.cr6.lt) goto loc_8319C9D8;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8319bf60
	ctx.lr = 0x8319C9D4;
	sub_8319BF60(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_8319C9D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 * 136;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,108(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 108, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CA08"))) PPC_WEAK_FUNC(sub_8319CA08);
PPC_FUNC_IMPL(__imp__sub_8319CA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8319ca40
	if (!ctx.cr6.lt) goto loc_8319CA40;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8319bf60
	ctx.lr = 0x8319CA3C;
	sub_8319BF60(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_8319CA40:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 * 136;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,112(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 112, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CA70"))) PPC_WEAK_FUNC(sub_8319CA70);
PPC_FUNC_IMPL(__imp__sub_8319CA70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CA78"))) PPC_WEAK_FUNC(sub_8319CA78);
PPC_FUNC_IMPL(__imp__sub_8319CA78) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CA8C"))) PPC_WEAK_FUNC(sub_8319CA8C);
PPC_FUNC_IMPL(__imp__sub_8319CA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319CA90"))) PPC_WEAK_FUNC(sub_8319CA90);
PPC_FUNC_IMPL(__imp__sub_8319CA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,62
	ctx.r5.s64 = 62;
	// addi r4,r11,29560
	ctx.r4.s64 = ctx.r11.s64 + 29560;
	// b 0x8315b870
	sub_8315B870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319CAA4"))) PPC_WEAK_FUNC(sub_8319CAA4);
PPC_FUNC_IMPL(__imp__sub_8319CAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319CAA8"))) PPC_WEAK_FUNC(sub_8319CAA8);
PPC_FUNC_IMPL(__imp__sub_8319CAA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CAB0"))) PPC_WEAK_FUNC(sub_8319CAB0);
PPC_FUNC_IMPL(__imp__sub_8319CAB0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CABC"))) PPC_WEAK_FUNC(sub_8319CABC);
PPC_FUNC_IMPL(__imp__sub_8319CABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319CAC0"))) PPC_WEAK_FUNC(sub_8319CAC0);
PPC_FUNC_IMPL(__imp__sub_8319CAC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,100
	ctx.r10.s64 = 100;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// divw r3,r9,r10
	ctx.r3.s32 = ctx.r9.s32 / ctx.r10.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CAD4"))) PPC_WEAK_FUNC(sub_8319CAD4);
PPC_FUNC_IMPL(__imp__sub_8319CAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319CAD8"))) PPC_WEAK_FUNC(sub_8319CAD8);
PPC_FUNC_IMPL(__imp__sub_8319CAD8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CAEC"))) PPC_WEAK_FUNC(sub_8319CAEC);
PPC_FUNC_IMPL(__imp__sub_8319CAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319CAF0"))) PPC_WEAK_FUNC(sub_8319CAF0);
PPC_FUNC_IMPL(__imp__sub_8319CAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,62
	ctx.r5.s64 = 62;
	// addi r4,r11,29560
	ctx.r4.s64 = ctx.r11.s64 + 29560;
	// b 0x8315b870
	sub_8315B870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319CB04"))) PPC_WEAK_FUNC(sub_8319CB04);
PPC_FUNC_IMPL(__imp__sub_8319CB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319CB08"))) PPC_WEAK_FUNC(sub_8319CB08);
PPC_FUNC_IMPL(__imp__sub_8319CB08) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CB14"))) PPC_WEAK_FUNC(sub_8319CB14);
PPC_FUNC_IMPL(__imp__sub_8319CB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319CB18"))) PPC_WEAK_FUNC(sub_8319CB18);
PPC_FUNC_IMPL(__imp__sub_8319CB18) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CB2C"))) PPC_WEAK_FUNC(sub_8319CB2C);
PPC_FUNC_IMPL(__imp__sub_8319CB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319CB30"))) PPC_WEAK_FUNC(sub_8319CB30);
PPC_FUNC_IMPL(__imp__sub_8319CB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,62
	ctx.r5.s64 = 62;
	// addi r4,r11,29560
	ctx.r4.s64 = ctx.r11.s64 + 29560;
	// b 0x8315b870
	sub_8315B870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319CB44"))) PPC_WEAK_FUNC(sub_8319CB44);
PPC_FUNC_IMPL(__imp__sub_8319CB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319CB48"))) PPC_WEAK_FUNC(sub_8319CB48);
PPC_FUNC_IMPL(__imp__sub_8319CB48) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CB54"))) PPC_WEAK_FUNC(sub_8319CB54);
PPC_FUNC_IMPL(__imp__sub_8319CB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319CB58"))) PPC_WEAK_FUNC(sub_8319CB58);
PPC_FUNC_IMPL(__imp__sub_8319CB58) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CB6C"))) PPC_WEAK_FUNC(sub_8319CB6C);
PPC_FUNC_IMPL(__imp__sub_8319CB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319CB70"))) PPC_WEAK_FUNC(sub_8319CB70);
PPC_FUNC_IMPL(__imp__sub_8319CB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,62
	ctx.r5.s64 = 62;
	// addi r4,r11,29560
	ctx.r4.s64 = ctx.r11.s64 + 29560;
	// b 0x8315b870
	sub_8315B870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319CB84"))) PPC_WEAK_FUNC(sub_8319CB84);
PPC_FUNC_IMPL(__imp__sub_8319CB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319CB88"))) PPC_WEAK_FUNC(sub_8319CB88);
PPC_FUNC_IMPL(__imp__sub_8319CB88) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CB90"))) PPC_WEAK_FUNC(sub_8319CB90);
PPC_FUNC_IMPL(__imp__sub_8319CB90) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CB9C"))) PPC_WEAK_FUNC(sub_8319CB9C);
PPC_FUNC_IMPL(__imp__sub_8319CB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319CBA0"))) PPC_WEAK_FUNC(sub_8319CBA0);
PPC_FUNC_IMPL(__imp__sub_8319CBA0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CBB4"))) PPC_WEAK_FUNC(sub_8319CBB4);
PPC_FUNC_IMPL(__imp__sub_8319CBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319CBB8"))) PPC_WEAK_FUNC(sub_8319CBB8);
PPC_FUNC_IMPL(__imp__sub_8319CBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,62
	ctx.r5.s64 = 62;
	// addi r4,r11,29560
	ctx.r4.s64 = ctx.r11.s64 + 29560;
	// b 0x8315b870
	sub_8315B870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319CBCC"))) PPC_WEAK_FUNC(sub_8319CBCC);
PPC_FUNC_IMPL(__imp__sub_8319CBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319CBD0"))) PPC_WEAK_FUNC(sub_8319CBD0);
PPC_FUNC_IMPL(__imp__sub_8319CBD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CBD8"))) PPC_WEAK_FUNC(sub_8319CBD8);
PPC_FUNC_IMPL(__imp__sub_8319CBD8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CBE4"))) PPC_WEAK_FUNC(sub_8319CBE4);
PPC_FUNC_IMPL(__imp__sub_8319CBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319CBE8"))) PPC_WEAK_FUNC(sub_8319CBE8);
PPC_FUNC_IMPL(__imp__sub_8319CBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f6,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f5,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f4,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f3,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f2,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,48(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f1,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,52(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f13,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f12,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,64(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f11,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,68(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f10,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,72(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f9,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,76(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f8,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,80(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f7,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,84(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lwz r10,92(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// lbz r9,96(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 96);
	// stb r9,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r9.u8);
	// lbz r8,97(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 97);
	// stb r8,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CCBC"))) PPC_WEAK_FUNC(sub_8319CCBC);
PPC_FUNC_IMPL(__imp__sub_8319CCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319CCC0"))) PPC_WEAK_FUNC(sub_8319CCC0);
PPC_FUNC_IMPL(__imp__sub_8319CCC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CD0C"))) PPC_WEAK_FUNC(sub_8319CD0C);
PPC_FUNC_IMPL(__imp__sub_8319CD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319CD10"))) PPC_WEAK_FUNC(sub_8319CD10);
PPC_FUNC_IMPL(__imp__sub_8319CD10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,100
	ctx.r10.s64 = ctx.r4.s64 * 100;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CD20"))) PPC_WEAK_FUNC(sub_8319CD20);
PPC_FUNC_IMPL(__imp__sub_8319CD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8319CD28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8319cd94
	if (!ctx.cr6.lt) goto loc_8319CD94;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r29,r10,29560
	ctx.r29.s64 = ctx.r10.s64 + 29560;
	// li r5,412
	ctx.r5.s64 = 412;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8315b860
	ctx.lr = 0x8319CD60;
	sub_8315B860(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82bea998
	ctx.lr = 0x8319CD7C;
	sub_82BEA998(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,417
	ctx.r5.s64 = 417;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8315b870
	ctx.lr = 0x8319CD8C;
	sub_8315B870(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8319CD94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319CD9C"))) PPC_WEAK_FUNC(sub_8319CD9C);
PPC_FUNC_IMPL(__imp__sub_8319CD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319CDA0"))) PPC_WEAK_FUNC(sub_8319CDA0);
PPC_FUNC_IMPL(__imp__sub_8319CDA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CDB0"))) PPC_WEAK_FUNC(sub_8319CDB0);
PPC_FUNC_IMPL(__imp__sub_8319CDB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8319CDB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8319cf14
	if (!ctx.cr6.lt) goto loc_8319CF14;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,412
	ctx.r5.s64 = 412;
	// addi r29,r11,29560
	ctx.r29.s64 = ctx.r11.s64 + 29560;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8315b860
	ctx.lr = 0x8319CDE8;
	sub_8315B860(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r5,r10,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82bea998
	ctx.lr = 0x8319CDFC;
	sub_82BEA998(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,417
	ctx.r5.s64 = 417;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8315b870
	ctx.lr = 0x8319CE0C;
	sub_8315B870(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r6,r11,-30972
	ctx.r6.s64 = ctx.r11.s64 + -30972;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r11,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x8319ced8
	if (ctx.cr6.lt) goto loc_8319CED8;
	// subf r11,r8,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r8.s64;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8319CE50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8319ce6c
	if (ctx.cr0.eq) goto loc_8319CE6C;
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8319CE6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addic. r11,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r11.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8319ce8c
	if (ctx.cr0.eq) goto loc_8319CE8C;
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8319CE8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r9,48
	ctx.r10.s64 = ctx.r9.s64 + 48;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addic. r11,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	ctx.r11.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8319ceb0
	if (ctx.cr0.eq) goto loc_8319CEB0;
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8319CEB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8319cecc
	if (ctx.cr0.eq) goto loc_8319CECC;
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8319CECC:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// bne 0x8319ce50
	if (!ctx.cr0.eq) goto loc_8319CE50;
loc_8319CED8:
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8319cf10
	if (!ctx.cr6.lt) goto loc_8319CF10;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r8,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r8.s64;
loc_8319CEE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8319cf04
	if (ctx.cr0.eq) goto loc_8319CF04;
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8319CF04:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x8319cee8
	if (!ctx.cr0.eq) goto loc_8319CEE8;
loc_8319CF10:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8319CF14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319CF1C"))) PPC_WEAK_FUNC(sub_8319CF1C);
PPC_FUNC_IMPL(__imp__sub_8319CF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319CF20"))) PPC_WEAK_FUNC(sub_8319CF20);
PPC_FUNC_IMPL(__imp__sub_8319CF20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,136
	ctx.r10.s64 = ctx.r4.s64 * 136;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CF30"))) PPC_WEAK_FUNC(sub_8319CF30);
PPC_FUNC_IMPL(__imp__sub_8319CF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8319CF38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8319d0a8
	if (!ctx.cr6.lt) goto loc_8319D0A8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,412
	ctx.r5.s64 = 412;
	// addi r29,r11,29560
	ctx.r29.s64 = ctx.r11.s64 + 29560;
	// mulli r3,r30,136
	ctx.r3.s64 = ctx.r30.s64 * 136;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8315b860
	ctx.lr = 0x8319CF68;
	sub_8315B860(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mulli r5,r10,136
	ctx.r5.s64 = ctx.r10.s64 * 136;
	// bl 0x82bea998
	ctx.lr = 0x8319CF7C;
	sub_82BEA998(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,417
	ctx.r5.s64 = 417;
	// bl 0x8315b870
	ctx.lr = 0x8319CF8C;
	sub_8315B870(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r7,r11,-30972
	ctx.r7.s64 = ctx.r11.s64 + -30972;
	// lfs f0,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r6,r11,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x8319d068
	if (ctx.cr6.lt) goto loc_8319D068;
	// subf r11,r8,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r8.s64;
	// mulli r9,r8,136
	ctx.r9.s64 = ctx.r8.s64 * 136;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8319CFD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8319cff0
	if (ctx.cr0.eq) goto loc_8319CFF0;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8319CFF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addic. r11,r11,136
	ctx.xer.ca = ctx.r11.u32 > 4294967159;
	ctx.r11.s64 = ctx.r11.s64 + 136;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8319d014
	if (ctx.cr0.eq) goto loc_8319D014;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8319D014:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r9,408
	ctx.r10.s64 = ctx.r9.s64 + 408;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addic. r11,r11,-136
	ctx.xer.ca = ctx.r11.u32 > 135;
	ctx.r11.s64 = ctx.r11.s64 + -136;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8319d03c
	if (ctx.cr0.eq) goto loc_8319D03C;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8319D03C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8319d05c
	if (ctx.cr0.eq) goto loc_8319D05C;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8319D05C:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r9,r9,544
	ctx.r9.s64 = ctx.r9.s64 + 544;
	// bne 0x8319cfd0
	if (!ctx.cr0.eq) goto loc_8319CFD0;
loc_8319D068:
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8319d0a4
	if (!ctx.cr6.lt) goto loc_8319D0A4;
	// mulli r10,r8,136
	ctx.r10.s64 = ctx.r8.s64 * 136;
	// subf r9,r8,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r8.s64;
loc_8319D078:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8319d098
	if (ctx.cr0.eq) goto loc_8319D098;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8319D098:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 + 136;
	// bne 0x8319d078
	if (!ctx.cr0.eq) goto loc_8319D078;
loc_8319D0A4:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8319D0A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319D0B0"))) PPC_WEAK_FUNC(sub_8319D0B0);
PPC_FUNC_IMPL(__imp__sub_8319D0B0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319D0C8"))) PPC_WEAK_FUNC(sub_8319D0C8);
PPC_FUNC_IMPL(__imp__sub_8319D0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r11,-30960
	ctx.r9.s64 = ctx.r11.s64 + -30960;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319D0E0"))) PPC_WEAK_FUNC(sub_8319D0E0);
PPC_FUNC_IMPL(__imp__sub_8319D0E0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,29560
	ctx.r30.s64 = ctx.r11.s64 + 29560;
	// li r5,62
	ctx.r5.s64 = 62;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x8315b870
	ctx.lr = 0x8319D110;
	sub_8315B870(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,62
	ctx.r5.s64 = 62;
	// bl 0x8315b870
	ctx.lr = 0x8319D120;
	sub_8315B870(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,62
	ctx.r5.s64 = 62;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8315b870
	ctx.lr = 0x8319D130;
	sub_8315B870(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,62
	ctx.r5.s64 = 62;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8315b870
	ctx.lr = 0x8319D140;
	sub_8315B870(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,62
	ctx.r5.s64 = 62;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8315b870
	ctx.lr = 0x8319D150;
	sub_8315B870(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,-31232
	ctx.r9.s64 = ctx.r10.s64 + -31232;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8319D174"))) PPC_WEAK_FUNC(sub_8319D174);
PPC_FUNC_IMPL(__imp__sub_8319D174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319D178"))) PPC_WEAK_FUNC(sub_8319D178);
PPC_FUNC_IMPL(__imp__sub_8319D178) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,100
	ctx.r10.s64 = ctx.r4.s64 * 100;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319D188"))) PPC_WEAK_FUNC(sub_8319D188);
PPC_FUNC_IMPL(__imp__sub_8319D188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8319D190;
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8319d1bc
	if (ctx.cr6.gt) goto loc_8319D1BC;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8319cd20
	ctx.lr = 0x8319D1BC;
	sub_8319CD20(ctx, base);
loc_8319D1BC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8319d1cc
	if (ctx.cr6.eq) goto loc_8319D1CC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8319D1CC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8319d230
	if (ctx.cr0.eq) goto loc_8319D230;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f10,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f9,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f8,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
loc_8319D230:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319D258"))) PPC_WEAK_FUNC(sub_8319D258);
PPC_FUNC_IMPL(__imp__sub_8319D258) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319D268"))) PPC_WEAK_FUNC(sub_8319D268);
PPC_FUNC_IMPL(__imp__sub_8319D268) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8319d294
	if (ctx.cr6.lt) goto loc_8319D294;
	// bl 0x8319cdb0
	ctx.lr = 0x8319D294;
	sub_8319CDB0(ctx, base);
loc_8319D294:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8319D2B0"))) PPC_WEAK_FUNC(sub_8319D2B0);
PPC_FUNC_IMPL(__imp__sub_8319D2B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,136
	ctx.r10.s64 = ctx.r4.s64 * 136;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319D2C0"))) PPC_WEAK_FUNC(sub_8319D2C0);
PPC_FUNC_IMPL(__imp__sub_8319D2C0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319D2D8"))) PPC_WEAK_FUNC(sub_8319D2D8);
PPC_FUNC_IMPL(__imp__sub_8319D2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f6,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f5,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f4,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f3,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f2,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,48(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f1,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,52(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f13,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f12,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,64(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f11,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,68(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f10,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,72(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f9,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,76(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f8,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,80(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f7,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,84(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lwz r10,92(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// lbz r9,96(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 96);
	// stb r9,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r9.u8);
	// lbz r8,97(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 97);
	// stb r8,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319D3AC"))) PPC_WEAK_FUNC(sub_8319D3AC);
PPC_FUNC_IMPL(__imp__sub_8319D3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319D3B0"))) PPC_WEAK_FUNC(sub_8319D3B0);
PPC_FUNC_IMPL(__imp__sub_8319D3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r11,-30960
	ctx.r10.s64 = ctx.r11.s64 + -30960;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319D3E0"))) PPC_WEAK_FUNC(sub_8319D3E0);
PPC_FUNC_IMPL(__imp__sub_8319D3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,-30972
	ctx.r10.s64 = ctx.r11.s64 + -30972;
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319D408"))) PPC_WEAK_FUNC(sub_8319D408);
PPC_FUNC_IMPL(__imp__sub_8319D408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8319D410;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8319d4c4
	if (!ctx.cr6.lt) goto loc_8319D4C4;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r29,r10,29560
	ctx.r29.s64 = ctx.r10.s64 + 29560;
	// li r5,412
	ctx.r5.s64 = 412;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8315b860
	ctx.lr = 0x8319D448;
	sub_8315B860(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82bea998
	ctx.lr = 0x8319D464;
	sub_82BEA998(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,417
	ctx.r5.s64 = 417;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8315b870
	ctx.lr = 0x8319D474;
	sub_8315B870(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8319d4c0
	if (!ctx.cr6.lt) goto loc_8319D4C0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r11,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r8,r11,-30960
	ctx.r8.s64 = ctx.r11.s64 + -30960;
loc_8319D4A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8319d4b4
	if (ctx.cr0.eq) goto loc_8319D4B4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
loc_8319D4B4:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// bne 0x8319d4a0
	if (!ctx.cr0.eq) goto loc_8319D4A0;
loc_8319D4C0:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8319D4C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319D4CC"))) PPC_WEAK_FUNC(sub_8319D4CC);
PPC_FUNC_IMPL(__imp__sub_8319D4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319D4D0"))) PPC_WEAK_FUNC(sub_8319D4D0);
PPC_FUNC_IMPL(__imp__sub_8319D4D0) {
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
	// bl 0x8319d0e0
	ctx.lr = 0x8319D4F0;
	sub_8319D0E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8319d508
	if (ctx.cr6.eq) goto loc_8319D508;
	// bl 0x822990f0
	ctx.lr = 0x8319D504;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8319D508:
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

__attribute__((alias("__imp__sub_8319D520"))) PPC_WEAK_FUNC(sub_8319D520);
PPC_FUNC_IMPL(__imp__sub_8319D520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8319D528;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mulli r31,r5,100
	ctx.r31.s64 = ctx.r5.s64 * 100;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8319d2d8
	ctx.lr = 0x8319D544;
	sub_8319D2D8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8319cbe8
	ctx.lr = 0x8319D564;
	sub_8319CBE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319D570"))) PPC_WEAK_FUNC(sub_8319D570);
PPC_FUNC_IMPL(__imp__sub_8319D570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8319D578;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8319d5a4
	if (ctx.cr6.gt) goto loc_8319D5A4;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8319d408
	ctx.lr = 0x8319D5A4;
	sub_8319D408(ctx, base);
loc_8319D5A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8319d5b4
	if (ctx.cr6.eq) goto loc_8319D5B4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8319D5B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8319d5fc
	if (ctx.cr0.eq) goto loc_8319D5FC;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,-30960
	ctx.r9.s64 = ctx.r10.s64 + -30960;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
loc_8319D5FC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319D624"))) PPC_WEAK_FUNC(sub_8319D624);
PPC_FUNC_IMPL(__imp__sub_8319D624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319D628"))) PPC_WEAK_FUNC(sub_8319D628);
PPC_FUNC_IMPL(__imp__sub_8319D628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r10,-30972
	ctx.r9.s64 = ctx.r10.s64 + -30972;
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r11,r3,120
	ctx.r11.s64 = ctx.r3.s64 + 120;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 + 28;
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f6,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f5,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f4,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f3,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f2,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,48(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f1,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,52(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f13,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f12,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,64(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f11,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,68(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f10,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,72(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f9,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,76(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f8,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,80(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f7,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,84(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f6,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,88(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f5,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,92(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f4,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,96(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f3,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,100(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f2,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,104(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f1,108(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,108(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lbz r8,116(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 116);
	// stb r8,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, ctx.r8.u8);
	// lbz r7,117(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 117);
	// stb r7,117(r3)
	PPC_STORE_U8(ctx.r3.u32 + 117, ctx.r7.u8);
	// lfs f13,124(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r9.u32);
	// stfs f13,124(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lfs f12,128(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,128(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// lfs f11,132(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,132(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319D754"))) PPC_WEAK_FUNC(sub_8319D754);
PPC_FUNC_IMPL(__imp__sub_8319D754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319D758"))) PPC_WEAK_FUNC(sub_8319D758);
PPC_FUNC_IMPL(__imp__sub_8319D758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8319D760;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8319d78c
	if (ctx.cr6.gt) goto loc_8319D78C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8319cf30
	ctx.lr = 0x8319D78C;
	sub_8319CF30(ctx, base);
loc_8319D78C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8319d79c
	if (ctx.cr6.eq) goto loc_8319D79C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8319D79C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 * 136;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8319d7b8
	if (ctx.cr0.eq) goto loc_8319D7B8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8319d628
	ctx.lr = 0x8319D7B8;
	sub_8319D628(ctx, base);
loc_8319D7B8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r11,136
	ctx.r10.s64 = ctx.r11.s64 * 136;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319D7D8"))) PPC_WEAK_FUNC(sub_8319D7D8);
PPC_FUNC_IMPL(__imp__sub_8319D7D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319D7E0"))) PPC_WEAK_FUNC(sub_8319D7E0);
PPC_FUNC_IMPL(__imp__sub_8319D7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r11,-30396
	ctx.r10.s64 = ctx.r11.s64 + -30396;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319D7F0"))) PPC_WEAK_FUNC(sub_8319D7F0);
PPC_FUNC_IMPL(__imp__sub_8319D7F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319D808"))) PPC_WEAK_FUNC(sub_8319D808);
PPC_FUNC_IMPL(__imp__sub_8319D808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r10,r11,-31232
	ctx.r10.s64 = ctx.r11.s64 + -31232;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// lfs f0,224(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319D82C"))) PPC_WEAK_FUNC(sub_8319D82C);
PPC_FUNC_IMPL(__imp__sub_8319D82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319D830"))) PPC_WEAK_FUNC(sub_8319D830);
PPC_FUNC_IMPL(__imp__sub_8319D830) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8319d85c
	if (ctx.cr6.gt) goto loc_8319D85C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8319d860
	if (!ctx.cr6.lt) goto loc_8319D860;
loc_8319D85C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_8319D860:
	// bl 0x82cb43f8
	ctx.lr = 0x8319D864;
	sub_82CB43F8(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319D878"))) PPC_WEAK_FUNC(sub_8319D878);
PPC_FUNC_IMPL(__imp__sub_8319D878) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb4860
	ctx.lr = 0x8319D8AC;
	sub_82CB4860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x82cb4940
	ctx.lr = 0x8319D8DC;
	sub_82CB4940(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,12(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319D900"))) PPC_WEAK_FUNC(sub_8319D900);
PPC_FUNC_IMPL(__imp__sub_8319D900) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319D908"))) PPC_WEAK_FUNC(sub_8319D908);
PPC_FUNC_IMPL(__imp__sub_8319D908) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319D920"))) PPC_WEAK_FUNC(sub_8319D920);
PPC_FUNC_IMPL(__imp__sub_8319D920) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6ae8
	ctx.lr = 0x8319D938;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-17600(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17600);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8319d97c
	if (!ctx.cr6.gt) goto loc_8319D97C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x8319da74
	goto loc_8319DA74;
loc_8319D97C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-27132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8319d9b0
	if (!ctx.cr6.lt) goto loc_8319D9B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x8319da74
	goto loc_8319DA74;
loc_8319D9B0:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f0,f9
	ctx.f0.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fmuls f30,f8,f31
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f29,f12,f8
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f28,f11,f8
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// ble cr6,0x8319d9f4
	if (!ctx.cr6.gt) goto loc_8319D9F4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8319D9F4:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8319da10
	if (ctx.cr6.gt) goto loc_8319DA10;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8319da14
	if (!ctx.cr6.lt) goto loc_8319DA14;
loc_8319DA10:
	// fmr f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f13.f64;
loc_8319DA14:
	// bl 0x82cb43f8
	ctx.lr = 0x8319DA18;
	sub_82CB43F8(ctx, base);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bge cr6,0x8319da34
	if (!ctx.cr6.lt) goto loc_8319DA34;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16608);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_8319DA34:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb4860
	ctx.lr = 0x8319DA48;
	sub_82CB4860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f12,f0,f29
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f11,f0,f28
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x82cb4940
	ctx.lr = 0x8319DA6C;
	sub_82CB4940(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,12(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_8319DA74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6b34
	ctx.lr = 0x8319DA84;
	__restfpr_28(ctx, base);
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

__attribute__((alias("__imp__sub_8319DA98"))) PPC_WEAK_FUNC(sub_8319DA98);
PPC_FUNC_IMPL(__imp__sub_8319DA98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x8319DAA0;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r17,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r17.u32);
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8319ddd8
	if (!ctx.cr6.gt) goto loc_8319DDD8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r29,r25,24
	ctx.r29.s64 = ctx.r25.s64 + 24;
	// addi r28,r25,12
	ctx.r28.s64 = ctx.r25.s64 + 12;
	// addi r27,r24,24
	ctx.r27.s64 = ctx.r24.s64 + 24;
	// lfs f31,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// addi r26,r24,12
	ctx.r26.s64 = ctx.r24.s64 + 12;
	// addi r22,r25,36
	ctx.r22.s64 = ctx.r25.s64 + 36;
	// addi r21,r24,36
	ctx.r21.s64 = ctx.r24.s64 + 36;
	// mr r19,r17
	ctx.r19.u64 = ctx.r17.u64;
	// li r16,1
	ctx.r16.s64 = 1;
	// addi r15,r11,29560
	ctx.r15.s64 = ctx.r11.s64 + 29560;
loc_8319DB0C:
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// add r30,r19,r10
	ctx.r30.u64 = ctx.r19.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8319db70
	if (ctx.cr6.gt) goto loc_8319DB70;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8319db70
	if (!ctx.cr6.lt) goto loc_8319DB70;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r5,412
	ctx.r5.s64 = 412;
	// mulli r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 * 100;
	// bl 0x8315b860
	ctx.lr = 0x8319DB44;
	sub_8315B860(ctx, base);
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mulli r5,r11,100
	ctx.r5.s64 = ctx.r11.s64 * 100;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// bl 0x82bea998
	ctx.lr = 0x8319DB58;
	sub_82BEA998(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r5,417
	ctx.r5.s64 = 417;
	// bl 0x8315b870
	ctx.lr = 0x8319DB68;
	sub_8315B870(ctx, base);
	// stw r14,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r14.u32);
	// stw r31,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r31.u32);
loc_8319DB70:
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mulli r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 * 100;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8319db8c
	if (ctx.cr0.eq) goto loc_8319DB8C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8319d2d8
	ctx.lr = 0x8319DB8C;
	sub_8319D2D8(ctx, base);
loc_8319DB8C:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r9,r11,100
	ctx.r9.s64 = ctx.r11.s64 * 100;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
	// stb r16,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r16.u8);
	// stb r17,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r17.u8);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f10,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,8(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f10,f9,f12
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f9,f8,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f8,f7,f12
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fsubs f7,f6,f5
	ctx.f7.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmadds f6,f4,f11,f10
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f5,f3,f11,f9
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmadds f4,f2,f11,f8
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f3,f13,f7,f6
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f6.f64));
	// stfs f3,12(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmadds f2,f1,f7,f5
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 + ctx.f5.f64));
	// stfs f2,16(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmadds f1,f0,f7,f4
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f4.f64));
	// stfs f1,20(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f13,8(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f29,4(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f1,f1,f29
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f29.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f12,f9,f1
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f11,f8,f1
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f9,f6,f0,f12
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f8,f5,f0,f11
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f7,f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f6,f4,f13,f9
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfs f6,28(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmadds f5,f2,f13,f8
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f8.f64));
	// stfs f5,32(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmadds f4,f3,f1,f7
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f7.f64));
	// stfs f4,24(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f3,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f3,f2
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// lfs f1,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f3,f1
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// lfs f10,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f9,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f2,f10,f9,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f0.f64));
	// lfs f7,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f1,f10,f8,f12
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f12.f64));
	// fmadds f0,f10,f7,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fmadds f13,f6,f5,f2
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f2.f64));
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fmadds f12,f6,f3,f1
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 + ctx.f1.f64));
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fmadds f11,f6,f4,f0
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 + ctx.f0.f64));
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// lfs f7,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f3,f9,f5
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// lfs f2,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f2,f0,f6
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f6,f9,f13,f4
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f5,f2,f1,f3
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f3.f64));
	// fmadds f4,f10,f8,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f4,48(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fmadds f3,f2,f12,f6
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f6.f64));
	// stfs f3,52(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// fmadds f2,f10,f11,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f5.f64));
	// stfs f2,56(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f1,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f30
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// bl 0x8319d920
	ctx.lr = 0x8319DD94;
	sub_8319D920(ctx, base);
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r19,r19,36
	ctx.r19.s64 = ctx.r19.s64 + 36;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,76(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// lwz r8,8(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// cmplw cr6,r20,r8
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8319db0c
	if (ctx.cr6.lt) goto loc_8319DB0C;
loc_8319DDD8:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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

__attribute__((alias("__imp__sub_8319DDEC"))) PPC_WEAK_FUNC(sub_8319DDEC);
PPC_FUNC_IMPL(__imp__sub_8319DDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319DDF0"))) PPC_WEAK_FUNC(sub_8319DDF0);
PPC_FUNC_IMPL(__imp__sub_8319DDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x8319DDF8;
	__savegprlr_15(ctx, base);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82cb6ab0
	ctx.lr = 0x8319DE00;
	__savefpr_14(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// stfs f2,460(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 460, temp.u32);
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8319de30
	if (ctx.cr6.eq) goto loc_8319DE30;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// b 0x8319e308
	goto loc_8319E308;
loc_8319DE30:
	// li r20,0
	ctx.r20.s64 = 0;
	// fmuls f31,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r15,r20
	ctx.r15.u64 = ctx.r20.u64;
	// beq cr6,0x8319e31c
	if (ctx.cr6.eq) goto loc_8319E31C;
	// lis r17,-32247
	ctx.r17.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r23,24
	ctx.r30.s64 = ctx.r23.s64 + 24;
	// addi r27,r23,12
	ctx.r27.s64 = ctx.r23.s64 + 12;
	// lfs f2,-30376(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + -30376);
	ctx.f2.f64 = double(temp.f32);
	// addi r25,r23,36
	ctx.r25.s64 = ctx.r23.s64 + 36;
	// lfs f29,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f29.f64 = double(temp.f32);
	// addi r29,r22,24
	ctx.r29.s64 = ctx.r22.s64 + 24;
	// lfs f30,7676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7676);
	ctx.f30.f64 = double(temp.f32);
	// addi r26,r22,12
	ctx.r26.s64 = ctx.r22.s64 + 12;
	// addi r24,r22,36
	ctx.r24.s64 = ctx.r22.s64 + 36;
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// li r16,1
	ctx.r16.s64 = 1;
loc_8319DE7C:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lfs f0,8(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// add r28,r21,r11
	ctx.r28.u64 = ctx.r21.u64 + ctx.r11.u64;
	// lfs f10,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r28,12
	ctx.r4.s64 = ctx.r28.s64 + 12;
	// lfs f11,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// lfs f7,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lfs f3,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f13,f7,f10
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// lfsx f27,r21,r11
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	ctx.f27.f64 = double(temp.f32);
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// lfs f22,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f22.f64 = double(temp.f32);
	// fsubs f1,f6,f12
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lfs f20,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f10,f3,f11
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// lfs f0,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f22,f27,f22
	ctx.f22.f64 = double(float(ctx.f27.f64 - ctx.f22.f64));
	// lfs f28,8(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f24,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f24.f64 = double(temp.f32);
	// lfs f25,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f11,f11,f4
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// lfs f16,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f16.f64 = double(temp.f32);
	// fmuls f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// lfs f26,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// lfs f4,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f4,f27,f4
	ctx.f4.f64 = double(float(ctx.f27.f64 - ctx.f4.f64));
	// lfs f19,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f6,f7,f3
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// lfs f7,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmr f27,f20
	ctx.f27.f64 = ctx.f20.f64;
	// lfs f18,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// lfs f23,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// lfs f17,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f21,f28,f1
	ctx.f21.f64 = double(float(ctx.f28.f64 * ctx.f1.f64));
	// lfs f15,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f15.f64 = double(temp.f32);
	// fmadds f10,f24,f25,f10
	ctx.f10.f64 = double(float(ctx.f24.f64 * ctx.f25.f64 + ctx.f10.f64));
	// lfs f14,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f14.f64 = double(temp.f32);
	// fmuls f3,f16,f3
	ctx.f3.f64 = double(float(ctx.f16.f64 * ctx.f3.f64));
	// lfs f16,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f16.f64 = double(temp.f32);
	// fmadds f9,f20,f13,f9
	ctx.f9.f64 = double(float(ctx.f20.f64 * ctx.f13.f64 + ctx.f9.f64));
	// lfs f20,0(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f8,f19,f13,f8
	ctx.f8.f64 = double(float(ctx.f19.f64 * ctx.f13.f64 + ctx.f8.f64));
	// lfs f19,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f11,f26,f13,f11
	ctx.f11.f64 = double(float(ctx.f26.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmr f13,f16
	ctx.f13.f64 = ctx.f16.f64;
	// fmadds f6,f27,f7,f6
	ctx.f6.f64 = double(float(ctx.f27.f64 * ctx.f7.f64 + ctx.f6.f64));
	// lfs f27,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f18,f18,f1,f0
	ctx.f18.f64 = double(float(ctx.f18.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fmadds f1,f17,f1,f12
	ctx.f1.f64 = double(float(ctx.f17.f64 * ctx.f1.f64 + ctx.f12.f64));
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f5,f23,f5,f21
	ctx.f5.f64 = double(float(ctx.f23.f64 * ctx.f5.f64 + ctx.f21.f64));
	// lfs f21,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f21.f64 = double(temp.f32);
	// fmr f17,f7
	ctx.f17.f64 = ctx.f7.f64;
	// fmadds f0,f7,f26,f10
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f26.f64 + ctx.f10.f64));
	// lfs f26,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// fmr f10,f24
	ctx.f10.f64 = ctx.f24.f64;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f10,f22,f16,f9
	ctx.f10.f64 = double(float(ctx.f22.f64 * ctx.f16.f64 + ctx.f9.f64));
	// fmadds f9,f15,f22,f8
	ctx.f9.f64 = double(float(ctx.f15.f64 * ctx.f22.f64 + ctx.f8.f64));
	// fmadds f11,f25,f22,f11
	ctx.f11.f64 = double(float(ctx.f25.f64 * ctx.f22.f64 + ctx.f11.f64));
	// fmadds f13,f24,f13,f6
	ctx.f13.f64 = double(float(ctx.f24.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f6,f12,f7,f3
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f3.f64));
	// lfs f3,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f12,f19,f4,f18
	ctx.f12.f64 = double(float(ctx.f19.f64 * ctx.f4.f64 + ctx.f18.f64));
	// fmadds f8,f20,f4,f5
	ctx.f8.f64 = double(float(ctx.f20.f64 * ctx.f4.f64 + ctx.f5.f64));
	// fmadds f7,f21,f4,f1
	ctx.f7.f64 = double(float(ctx.f21.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fmuls f23,f17,f23
	ctx.f23.f64 = double(float(ctx.f17.f64 * ctx.f23.f64));
	// fmuls f5,f26,f27
	ctx.f5.f64 = double(float(ctx.f26.f64 * ctx.f27.f64));
	// fmuls f4,f14,f27
	ctx.f4.f64 = double(float(ctx.f14.f64 * ctx.f27.f64));
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// lfs f25,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f25.f64 = double(temp.f32);
	// fmadds f3,f3,f17,f5
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f17.f64 + ctx.f5.f64));
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// fmadds f25,f25,f17,f4
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f17.f64 + ctx.f4.f64));
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// fmr f5,f15
	ctx.f5.f64 = ctx.f15.f64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmr f4,f19
	ctx.f4.f64 = ctx.f19.f64;
	// fmadds f26,f1,f20,f23
	ctx.f26.f64 = double(float(ctx.f1.f64 * ctx.f20.f64 + ctx.f23.f64));
	// fmr f23,f21
	ctx.f23.f64 = ctx.f21.f64;
	// fmadds f6,f24,f5,f6
	ctx.f6.f64 = double(float(ctx.f24.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fmadds f4,f1,f4,f3
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fmadds f5,f27,f28,f26
	ctx.f5.f64 = double(float(ctx.f27.f64 * ctx.f28.f64 + ctx.f26.f64));
	// fmadds f3,f1,f23,f25
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f23.f64 + ctx.f25.f64));
	// beq cr6,0x8319e2d4
	if (ctx.cr6.eq) goto loc_8319E2D4;
	// lwz r31,0(r19)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
loc_8319E008:
	// lbz r7,76(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8319e0ac
	if (!ctx.cr6.eq) goto loc_8319E0AC;
	// lfs f1,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// lfs f28,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f28,f28,f10
	ctx.f28.f64 = double(float(ctx.f28.f64 - ctx.f10.f64));
	// lfs f27,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f27,f27,f9
	ctx.f27.f64 = double(float(ctx.f27.f64 - ctx.f9.f64));
	// fmuls f1,f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f1,f28,f28,f1
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f1.f64));
	// fmadds f1,f27,f27,f1
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f27.f64 + ctx.f1.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x8319e0ac
	if (!ctx.cr6.lt) goto loc_8319E0AC;
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f1,f1,f8
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// lfs f28,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f28,f28,f12
	ctx.f28.f64 = double(float(ctx.f28.f64 - ctx.f12.f64));
	// lfs f27,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f27,f27,f7
	ctx.f27.f64 = double(float(ctx.f27.f64 - ctx.f7.f64));
	// fmuls f1,f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f1,f28,f28,f1
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f1.f64));
	// fmadds f1,f27,f27,f1
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f27.f64 + ctx.f1.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x8319e0ac
	if (!ctx.cr6.lt) goto loc_8319E0AC;
	// lfs f1,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f1,f1,f6
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// lfs f28,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f1,f28,f0,f1
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmadds f1,f27,f13,f1
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// ble cr6,0x8319e0ac
	if (!ctx.cr6.gt) goto loc_8319E0AC;
	// lfs f1,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f1,f1,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// lfs f28,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f1,f28,f3,f1
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fmadds f1,f27,f5,f1
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bgt cr6,0x8319e0c4
	if (ctx.cr6.gt) goto loc_8319E0C4;
loc_8319E0AC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8319e008
	if (ctx.cr6.lt) goto loc_8319E008;
	// b 0x8319e2d4
	goto loc_8319E2D4;
loc_8319E0C4:
	// stb r16,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r16.u8);
	// lfs f0,460(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	ctx.f0.f64 = double(temp.f32);
	// stb r20,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r20.u8);
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f10,24(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f9,60(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f17,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f17.f64 = double(temp.f32);
	// lfs f4,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f16,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f16.f64 = double(temp.f32);
	// lfs f2,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f28,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f27,0(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,8(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f21.f64 = double(temp.f32);
	// lfs f8,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f7,f7,f8
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f4,f4,f17
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f17.f64));
	// lfs f19,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f6,f6,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// lfs f15,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f15.f64 = double(temp.f32);
	// fmuls f3,f3,f17
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f17.f64));
	// lfs f18,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f5,f5,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// lfs f20,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f16,f16,f17
	ctx.f16.f64 = double(float(ctx.f16.f64 * ctx.f17.f64));
	// lfs f17,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f8,f28,f1
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f1.f64));
	// fmuls f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fmuls f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f9,f9,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fadds f1,f7,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// fmuls f2,f27,f0
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fadds f7,f6,f3
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// fadds f6,f5,f16
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f16.f64));
	// fmuls f5,f0,f26
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fmuls f4,f0,f25
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// fmuls f3,f24,f23
	ctx.f3.f64 = double(float(ctx.f24.f64 * ctx.f23.f64));
	// fmuls f0,f22,f24
	ctx.f0.f64 = double(float(ctx.f22.f64 * ctx.f24.f64));
	// fmuls f28,f21,f24
	ctx.f28.f64 = double(float(ctx.f21.f64 * ctx.f24.f64));
	// fadds f10,f2,f10
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// fadds f2,f1,f13
	ctx.f2.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fadds f1,f7,f12
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// fadds f12,f5,f9
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// fadds f13,f6,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// fadds f11,f4,f8
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// lfs f4,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f10,f10,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// fadds f9,f20,f2
	ctx.f9.f64 = double(float(ctx.f20.f64 + ctx.f2.f64));
	// fadds f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f8,f19,f1
	ctx.f8.f64 = double(float(ctx.f19.f64 + ctx.f1.f64));
	// fadds f5,f11,f28
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f28.f64));
	// fadds f3,f15,f10
	ctx.f3.f64 = double(float(ctx.f15.f64 + ctx.f10.f64));
	// fadds f7,f18,f13
	ctx.f7.f64 = double(float(ctx.f18.f64 + ctx.f13.f64));
	// fadds f2,f17,f6
	ctx.f2.f64 = double(float(ctx.f17.f64 + ctx.f6.f64));
	// fadds f1,f4,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fsubs f28,f9,f3
	ctx.f28.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fsubs f27,f8,f2
	ctx.f27.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// fsubs f26,f7,f1
	ctx.f26.f64 = double(float(ctx.f7.f64 - ctx.f1.f64));
	// bl 0x8319d920
	ctx.lr = 0x8319E210;
	sub_8319D920(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// fmuls f4,f6,f6
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// stfs f12,80(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
	// fmadds f3,f7,f6,f8
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f8.f64));
	// stfs f11,84(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// fmuls f5,f10,f7
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// lfs f2,-30376(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + -30376);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f0,f10,f10,f4
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f4.f64));
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// fmuls f13,f3,f30
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// fmsubs f1,f6,f9,f5
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 - ctx.f5.f64));
	// fnmsubs f11,f0,f30,f29
	ctx.f11.f64 = double(float(-(ctx.f0.f64 * ctx.f30.f64 - ctx.f29.f64)));
	// fmuls f10,f13,f26
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// fmuls f12,f1,f30
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fmadds f9,f12,f28,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 + ctx.f10.f64));
	// fmadds f8,f11,f27,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f27.f64 + ctx.f9.f64));
	// stfs f8,64(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f6,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f4
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmuls f1,f4,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmadds f0,f7,f7,f3
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fmuls f13,f7,f6
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmadds f12,f7,f5,f1
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fnmsubs f11,f0,f30,f29
	ctx.f11.f64 = double(float(-(ctx.f0.f64 * ctx.f30.f64 - ctx.f29.f64)));
	// fmsubs f10,f5,f4,f13
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 - ctx.f13.f64));
	// fmuls f9,f12,f30
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f8,f11,f26
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f26.f64));
	// fmuls f7,f10,f30
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fmadds f6,f9,f28,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f28.f64 + ctx.f8.f64));
	// fmadds f5,f7,f27,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f27.f64 + ctx.f6.f64));
	// stfs f5,68(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
loc_8319E2D4:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8319e304
	if (ctx.cr6.eq) goto loc_8319E304;
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// addi r21,r21,36
	ctx.r21.s64 = ctx.r21.s64 + 36;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8319de7c
	if (ctx.cr6.lt) goto loc_8319DE7C;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82cb6afc
	ctx.lr = 0x8319E300;
	__restfpr_14(ctx, base);
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
loc_8319E304:
	// lfs f1,460(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	ctx.f1.f64 = double(temp.f32);
loc_8319E308:
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8319da98
	ctx.lr = 0x8319E31C;
	sub_8319DA98(ctx, base);
loc_8319E31C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82cb6afc
	ctx.lr = 0x8319E328;
	__restfpr_14(ctx, base);
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319E32C"))) PPC_WEAK_FUNC(sub_8319E32C);
PPC_FUNC_IMPL(__imp__sub_8319E32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319E330"))) PPC_WEAK_FUNC(sub_8319E330);
PPC_FUNC_IMPL(__imp__sub_8319E330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319E334"))) PPC_WEAK_FUNC(sub_8319E334);
PPC_FUNC_IMPL(__imp__sub_8319E334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319E338"))) PPC_WEAK_FUNC(sub_8319E338);
PPC_FUNC_IMPL(__imp__sub_8319E338) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319E350"))) PPC_WEAK_FUNC(sub_8319E350);
PPC_FUNC_IMPL(__imp__sub_8319E350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8319E358;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8319e3b4
	if (!ctx.cr6.lt) goto loc_8319E3B4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,412
	ctx.r5.s64 = 412;
	// addi r29,r11,29560
	ctx.r29.s64 = ctx.r11.s64 + 29560;
	// mulli r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 * 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8315b860
	ctx.lr = 0x8319E388;
	sub_8315B860(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mulli r5,r10,100
	ctx.r5.s64 = ctx.r10.s64 * 100;
	// bl 0x82bea998
	ctx.lr = 0x8319E39C;
	sub_82BEA998(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,417
	ctx.r5.s64 = 417;
	// bl 0x8315b870
	ctx.lr = 0x8319E3AC;
	sub_8315B870(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8319E3B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319E3BC"))) PPC_WEAK_FUNC(sub_8319E3BC);
PPC_FUNC_IMPL(__imp__sub_8319E3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319E3C0"))) PPC_WEAK_FUNC(sub_8319E3C0);
PPC_FUNC_IMPL(__imp__sub_8319E3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8319E3C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8319e3f4
	if (ctx.cr6.gt) goto loc_8319E3F4;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8319e350
	ctx.lr = 0x8319E3F4;
	sub_8319E350(ctx, base);
loc_8319E3F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8319e404
	if (ctx.cr6.eq) goto loc_8319E404;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8319E404:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8319e420
	if (ctx.cr0.eq) goto loc_8319E420;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8319d2d8
	ctx.lr = 0x8319E420;
	sub_8319D2D8(ctx, base);
loc_8319E420:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r11,100
	ctx.r10.s64 = ctx.r11.s64 * 100;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319E440"))) PPC_WEAK_FUNC(sub_8319E440);
PPC_FUNC_IMPL(__imp__sub_8319E440) {
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
	// bl 0x82cb2298
	ctx.lr = 0x8319E450;
	sub_82CB2298(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319E464"))) PPC_WEAK_FUNC(sub_8319E464);
PPC_FUNC_IMPL(__imp__sub_8319E464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

